fn main() {
    let bytes = std::fs::read("extracted/characters/data/char/models/board.mpf").unwrap();
    for m in ssx_rust::character::decode(&bytes).unwrap() {
        let mut min = [f32::INFINITY; 3];
        let mut max = [f32::NEG_INFINITY; 3];
        for p in m
            .meshes
            .iter()
            .flat_map(|m| &m.vertices)
            .flat_map(|v| &v.influences)
        {
            for i in 0..3 {
                min[i] = min[i].min(p.position[i]);
                max[i] = max[i].max(p.position[i]);
            }
        }
        println!("Local bounds {min:?} {max:?}");
        println!(
            "Board {}: {:?}",
            m.name,
            m.meshes
                .iter()
                .map(|m| (
                    &m.material,
                    m.vertices.len(),
                    m.vertices[0].influences[0].bone
                ))
                .collect::<Vec<_>>()
        );
    }
    for name in [
        "hrfeanim", "krfeanim", "jgfeanim", "mcfeanim", "mbfeanim", "zfeanim", "jpfeanim",
        "elfeanim",
    ] {
        let b = std::fs::read(format!(
            "extracted/animations/data/char/animations/{name}.adf"
        ))
        .unwrap();
        for t in ssx_rust::animation::decode(&b).unwrap().iter().take(10) {
            println!(
                "{name}: {} {} model {} frames {} bones {} root {:?} rotation {:?}",
                t.header,
                t.name,
                t.model,
                t.frames.len(),
                t.frames[0].rotations.len(),
                t.frames[0].position,
                t.frames[0].rotations[0]
            );
        }
    }
}
