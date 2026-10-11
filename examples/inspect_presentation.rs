use std::{fs, path::Path};
fn main() {
    let mut tracks = Vec::new();
    for name in [
        "SNOW", "MEGAPLEX", "MERQUERY", "MESA", "PIPE", "ALOHA", "ELYSIUM", "UNTRACK", "WARMUP",
    ] {
        let (level, _) =
            ssx_rust::load_track(&Path::new("extracted/DATA/MODELS").join(format!("{name}.BIG")))
                .unwrap();
        tracks.push(serde_json::json!({"name":name,
            "programs":level.effects.scripts.programs.iter().map(|p|p.iter().map(|e|serde_json::json!({"kind":e.kind,"words":e.words,"floats":e.words.iter().map(|w|f32::from_bits(*w)).collect::<Vec<_>>()})).collect::<Vec<_>>()).collect::<Vec<_>>(),
            "objects":level.instances.iter().enumerate().filter(|(_,i)|i.properties.effect_slot>=0).map(|(n,i)|serde_json::json!({"index":n,"id":i.properties.id,"bounds":i.properties.bounds,"slots":level.effects.scripts.slots.get(i.properties.effect_slot as usize)})).collect::<Vec<_>>()
        }));
    }
    fs::write(
        "analysis/presentation-scripts.json",
        serde_json::to_vec_pretty(&tracks).unwrap(),
    )
    .unwrap();
    for name in ["snowdreamcrowd", "zbxsfx"] {
        let clips = ssx_rust::audio_bank::decode(
            &fs::read(format!("extracted/audio/data/audio/{name}.bnk")).unwrap(),
        )
        .unwrap();
        println!(
            "{name}: {:?}",
            clips
                .iter()
                .enumerate()
                .filter_map(|(i, c)| c.as_ref().map(|c| (
                    i,
                    c.samples.len() as f32 / c.rate as f32 / c.channels as f32,
                    c.loop_samples
                )))
                .collect::<Vec<_>>()
        );
    }
}
