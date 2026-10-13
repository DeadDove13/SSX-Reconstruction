//! Speech context tags from original HDR records (0x00243898).
//! Meanings below are checked against decoded local clips. Event scheduling is a host adapter.
use crate::tricks::Landing;
#[derive(Clone, Debug)]
pub struct Cue {
    pub category: &'static str,
    pub tags: Vec<u8>,
    pub ttl: f32,
}
impl Cue {
    pub fn new(category: &'static str, tags: Vec<u8>) -> Self {
        Self {
            category,
            tags,
            ttl: 4.,
        }
    }
    fn priority(&self) -> u8 {
        match self.category {
            "wipeout" | "collision" => 4,
            "go" | "holeshot" | "checkpoint" => 3,
            "big_combo_trick" | "combo_trick" | "trick" | "flip" | "spins" | "land" | "bump" => 2,
            _ => 1,
        }
    }
}
/// Bounded, expiring speech events. A new crash cancels pending success calls.
#[derive(Default)]
pub struct Queue(Vec<Cue>);
impl Queue {
    pub fn clear(&mut self) {
        self.0.clear();
    }
    pub fn discard(&mut self, category: &str) {
        self.0.retain(|cue| cue.category != category);
    }
    pub fn tick(&mut self, dt: f32) {
        for cue in &mut self.0 {
            cue.ttl -= dt;
        }
        self.0.retain(|cue| cue.ttl > 0.);
    }
    pub fn push(&mut self, cue: Cue) {
        if matches!(cue.category, "wipeout" | "collision") {
            self.clear();
        }
        self.0.retain(|old| old.category != cue.category);
        self.0.push(cue);
        self.0.sort_by_key(|cue| std::cmp::Reverse(cue.priority()));
        self.0.truncate(4);
    }
    pub fn pop(&mut self) -> Option<Cue> {
        if self.0.is_empty() {
            None
        } else {
            Some(self.0.remove(0))
        }
    }
}
pub fn start() -> Cue {
    Cue {
        category: "go",
        tags: vec![],
        ttl: 2.,
    }
}
/// Main-bank sample selection recovered from 0x00201dc0.
pub fn multiplier_sample(value: f32) -> usize {
    if value >= 5. {
        118
    } else if value >= 3. {
        117
    } else {
        116
    }
}
pub fn landing(event: &Landing) -> Option<Cue> {
    if event.bailed {
        return Some(Cue {
            category: "wipeout",
            tags: vec![],
            ttl: 2.,
        });
    }
    if event.award == 0 {
        return None;
    }
    let (category, tags) = if event.flip.abs() >= 360 && event.flip.abs() <= 1080 {
        (
            "flip",
            vec![(event.flip < 0) as u8, (event.flip.abs() / 360) as u8],
        )
    } else if event.spin.abs() >= 180 && event.spin.abs() <= 2160 {
        // Family 2 gives the rotation without an unverified front/backside label.
        // Last parameter 1 is air. Parameter 0 selects rail-slide speech.
        ("spins", vec![2, (event.spin.abs() / 180) as u8, 1])
    } else {
        (
            "land",
            vec![2, (event.spin.rem_euclid(360) != 180) as u8, 1, 0],
        )
    };
    Some(Cue {
        category,
        tags,
        ttl: 2.,
    })
}
/// Select only exact contexts. Never fall back to a different event type.
pub fn select(tags: &[Vec<u8>], cue: &Cue, last: Option<usize>) -> Option<usize> {
    let candidates: Vec<_> = tags
        .iter()
        .enumerate()
        .filter(|(_, t)| **t == cue.tags)
        .map(|(i, _)| i)
        .collect();
    candidates
        .iter()
        .copied()
        .find(|i| last.is_none_or(|old| *i > old))
        .or_else(|| candidates.first().copied())
}
#[cfg(test)]
mod tests {
    use super::*;
    #[test]
    fn busy_speech_queues_expires_and_cancels_success_on_crash() {
        let mut queue = Queue::default();
        queue.push(Cue::new("big_air", vec![]));
        queue.push(Cue::new("combo_trick", vec![]));
        queue.tick(1.);
        assert_eq!(queue.pop().unwrap().category, "combo_trick");
        queue.push(Cue::new("wipeout", vec![]));
        assert_eq!(queue.pop().unwrap().category, "wipeout");
        assert!(queue.pop().is_none());
        queue.push(Cue::new("pass", vec![]));
        queue.tick(5.);
        assert!(queue.pop().is_none());
    }
    #[test]
    #[ignore = "requires prepared original speech"]
    fn air_tricks_never_select_rail_calls() {
        let m: serde_json::Value =
            serde_json::from_slice(&std::fs::read("assets/audio/manifest.json").unwrap()).unwrap();
        for spin in [0, 180, 360, 540, 720, 2160] {
            for flip in [0, 360, -360, 720] {
                let cue = landing(&Landing {
                    spin,
                    flip,
                    award: 100,
                    bailed: false,
                })
                .unwrap();
                let tags: Vec<Vec<u8>> =
                    serde_json::from_value(m["speech_contexts"][cue.category].clone()).unwrap();
                let index = select(&tags, &cue, None).unwrap();
                if cue.category == "land" || cue.category == "spins" {
                    assert_eq!(tags[index][2], 1);
                }
                if cue.category == "flip" {
                    assert_eq!(
                        tags[index],
                        vec![(flip < 0) as u8, (flip.abs() / 360) as u8]
                    );
                }
            }
        }
    }
    #[test]
    fn contexts_do_not_fall_back_and_variants_rotate() {
        let cue = Cue {
            category: "land",
            tags: vec![2, 1, 1, 0],
            ttl: 2.,
        };
        let tags = vec![vec![2, 1, 0, 0], cue.tags.clone(), cue.tags.clone()];
        assert_eq!(select(&tags, &cue, None), Some(1));
        assert_eq!(select(&tags, &cue, Some(1)), Some(2));
        assert_eq!(select(&tags[..1], &cue, None), None);
    }
}
