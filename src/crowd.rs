//! CrowdBox frame records from WFX. References are grid/instance IDs, not textures.
use crate::level::Level;
#[derive(Clone, Debug)]
pub struct Crowd {
    pub object: usize,
    pub row_spacing: f32,
    pub animations: Vec<[usize; 9]>,
}
pub fn from_level(level: &Level) -> Vec<Crowd> {
    let mut crowds = Vec::new();
    for (object, instance) in level.instances.iter().enumerate() {
        let Some(program) = level
            .effects
            .scripts
            .slots
            .get(instance.properties.effect_slot as usize)
            .and_then(|s| level.effects.scripts.programs.get(s[0] as usize))
        else {
            continue;
        };
        let Some(constructor) = program
            .iter()
            .find(|e| e.kind == 0 && e.words.first() == Some(&17))
        else {
            continue;
        };
        let animations = program
            .iter()
            .filter(|e| e.kind == 1 && e.words.len() == 13 && e.words[0] == 2 && e.words[2] == 2)
            .filter_map(|e| {
                let frames = e.words[4..]
                    .iter()
                    .map(|id| {
                        level
                            .instances
                            .iter()
                            .find(|i| i.properties.id == [*id as u16, (*id >> 16) as u16])
                            .map(|i| i.prefab)
                    })
                    .collect::<Option<Vec<_>>>()?;
                frames.try_into().ok()
            })
            .collect::<Vec<_>>();
        if !animations.is_empty() {
            crowds.push(Crowd {
                object,
                row_spacing: f32::from_bits(constructor.words[1]) * 100.,
                animations,
            });
        }
    }
    crowds
}
/// 0x0012baf0 updates every five ticks. 0x0012bb88 cycles 2..8,0.
pub fn frame(tick: u64, phase: u64) -> usize {
    const FRAMES: [usize; 8] = [2, 3, 4, 5, 6, 7, 8, 0];
    FRAMES[((tick / 5 + phase) % 8) as usize]
}
#[cfg(test)]
mod tests {
    use super::*;
    #[test]
    #[ignore = "requires the original disc"]
    fn original_crowd_frames_resolve_to_different_models() {
        let mut total = 0;
        for (name, _, _) in crate::front_end::TRACKS {
            let (l, _) = crate::load_track(&std::path::PathBuf::from(format!(
                "extracted/DATA/MODELS/{name}.BIG"
            )))
            .unwrap();
            for c in from_level(&l) {
                total += 1;
                for a in &c.animations {
                    assert!(a.windows(2).any(|f| f[0] != f[1]));
                    assert!(a.iter().all(|i| !l.prefabs[*i].is_empty()));
                }
            }
        }
        assert!(total > 500);
        assert_eq!(frame(0, 0), frame(4, 0));
        assert_ne!(frame(4, 0), frame(5, 0));
        assert_ne!(frame(5, 0), frame(5, 1));
    }
}
