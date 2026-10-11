fn main() {
    for (name, _, _) in ssx_rust::front_end::TRACKS {
        let sky = ssx_rust::sky::load(&std::path::Path::new("extracted/DATA/MODELS").join(format!("{name}.BIG"))).unwrap();
        let folder = format!("assets/skyboxes-v1/{name}");
        std::fs::create_dir_all(&folder).unwrap();
        for (i, t) in sky.textures.iter().enumerate() {
            ssx_rust::sky::upscale(t).save(format!("{folder}/{i:03}.png")).unwrap();
        }
        println!("{name}: {} textures prepared at 4x", sky.textures.len());
    }
}
