use ssx_rust::{archive, texture};
fn main() {
    for name in ["SNOW", "MERQUERY", "ALOHA", "ELYSIUM", "MEGAPLEX", "MESA", "PIPE", "UNTRACK", "WARMUP"] {
        let bytes = std::fs::read(format!("extracted/DATA/MODELS/{name}.BIG")).unwrap();
        println!("{name}");
        for member in archive::index(&bytes).unwrap() {
            println!("  {}", member.path);
            if member.path.contains("_sky.") {
                let folder = format!("analysis/sky-source/{name}");
                std::fs::create_dir_all(&folder).unwrap();
                let data = archive::extract(&bytes, &member).unwrap();
                std::fs::write(format!("{folder}/{}", member.path.rsplit('/').next().unwrap()), &data).unwrap();
                if member.path.ends_with(".mdr") {
                    let mut index = vec![0u8; 80];
                    index[48..52].copy_from_slice(&1u32.to_le_bytes());
                    index[76..80].copy_from_slice(&(data.len() as u32).to_le_bytes());
                    match ssx_rust::model::decode(&index, &data) {
                        Ok(meshes) => {
                            println!("SKY MODEL {name}: {} parts, {} triangles, materials {:?}", meshes[0].len(), meshes[0].iter().map(|m|m.indices.len()/3).sum::<usize>(), meshes[0].iter().map(|m|m.material).collect::<Vec<_>>());
                            let summary: Vec<_> = meshes[0].iter().map(|m| serde_json::json!({"material":m.material,"bounds":m.bounds,"transform":m.transform,"positions":m.positions,"uv":m.uv})).collect();
                            std::fs::write(format!("{folder}/mesh.json"), serde_json::to_vec_pretty(&summary).unwrap()).unwrap();
                        },
                        Err(e) => println!("SKY MODEL {name} ERROR: {e}"),
                    }
                }
                if member.path.ends_with(".ssh") {
                    for (i, t) in texture::decode(&data).unwrap().iter().enumerate() {
                        image::save_buffer(format!("{folder}/{i:03}.png"), &t.rgba, t.width, t.height, image::ColorType::Rgba8).unwrap();
                    }
                }
            }
            if member.path.to_lowercase().ends_with(".ssh") && !member.path.to_lowercase().ends_with("l.ssh") {
                for (i,t) in texture::decode(&archive::extract(&bytes, &member).unwrap()).unwrap().iter().enumerate() {
                    println!("    {i}: {} {}x{}", t.name, t.width, t.height);
                }
            }
        }
    }
}
