fn main() {
    let mut rows = Vec::new();
    for track in ssx_rust::front_end::TRACKS {
        let (level, _) = ssx_rust::load_track(
            &std::path::Path::new("extracted/DATA/MODELS").join(format!("{}.BIG", track.0)),
        )
        .unwrap();
        for (i, o) in level.instances.iter().enumerate() {
            if let Some(slot) = level
                .effects
                .scripts
                .slots
                .get(o.properties.effect_slot as usize)
            {
                for (event, p) in slot.iter().enumerate() {
                    if let Some(program) = level.effects.scripts.programs.get(*p as usize) {
                        for cmd in program {
                            if cmd.kind == 0
                                && matches!(cmd.words.first(), Some(7 | 15 | 16 | 18 | 21))
                            {
                                rows.push(serde_json::json!({"track":track.0,"index":i,"id":o.properties.id,"flags":o.properties.flags,"position":&o.transform[12..15],"bounds":o.properties.bounds,"event":event,"words":cmd.words,"program":program.iter().map(|e|serde_json::json!({"kind":e.kind,"words":e.words})).collect::<Vec<_>>()}));
                            }
                        }
                    }
                }
            }
        }
    }
    std::fs::write(
        "analysis/powerup-records.json",
        serde_json::to_vec_pretty(&rows).unwrap(),
    )
    .unwrap();
    println!("{} boost and trick-trigger records", rows.len());
}
