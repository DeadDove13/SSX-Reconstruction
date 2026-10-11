use ssx_rust::{load_track, object_rules::ObjectState};
fn main() {
    let mut tracks = Vec::new();
    for name in [
        "SNOW", "MERQUERY", "ALOHA", "ELYSIUM", "MEGAPLEX", "MESA", "PIPE", "UNTRACK", "WARMUP",
    ] {
        let (level, _) =
            load_track(&std::path::Path::new("extracted/DATA/MODELS").join(format!("{name}.BIG")))
                .unwrap();
        let properties: Vec<_> = level
            .instances
            .iter()
            .map(|i| i.properties.clone())
            .collect();
        let mut objects = Vec::new();
        for (i, instance) in level.instances.iter().enumerate() {
            if let Some(program) = level.effects.scripts.contact_program(&instance.properties) {
                let mut state = ObjectState::default();
                state.contact(i, &properties, &level.effects.scripts);
                objects.push(serde_json::json!({"index":i,"id":instance.properties.id,"prefab":instance.prefab,"position":&instance.transform[12..15],"program":program,"commands":level.effects.scripts.programs[program].iter().map(|e|serde_json::json!({"kind":e.kind,"words":e.words,"floats":e.words.iter().map(|w|f32::from_bits(*w)).collect::<Vec<_>>()})).collect::<Vec<_>>(),"events":format!("{:?}",state.events),"debris":state.activated_debris.iter().map(|j|serde_json::json!({"index":j,"meshes":level.prefabs[level.instances[*j].prefab].len(),"vertices":level.prefabs[level.instances[*j].prefab].iter().map(|m|m.positions.len()).sum::<usize>()})).collect::<Vec<_>>()}));
            }
        }
        tracks.push(serde_json::json!({"track":name,"objects":objects,"programs":level.effects.scripts.programs.iter().map(|p|p.iter().map(|e|serde_json::json!({"kind":e.kind,"words":e.words})).collect::<Vec<_>>()).collect::<Vec<_>>()}));
    }
    std::fs::write(
        "analysis/world-interactions.json",
        serde_json::to_string_pretty(&tracks).unwrap(),
    )
    .unwrap();
}
