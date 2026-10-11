use std::{fs, path::Path};
fn main() {
    let out = Path::new("analysis/ui-assets");
    fs::create_dir_all(out).unwrap();
    for (name, path) in [
        ("fe", "extracted/DATA/FEART/TRACK/BXFE3D.SSH"),
        ("hud", "extracted/DATA/TEXTURES/HUD.SSH"),
        ("mac", "extracted/DATA/TEXTURES/MAC.SSH"),
        ("snow", "extracted/DATA/TEXTURES/SNOW.SSH"),
        ("particle", "extracted/DATA/TEXTURES/PARTICLE.SSH"),
        ("testfx", "extracted/DATA/TEXTURES/TESTFX.SSH"),
    ] {
        for (i, t) in ssx_rust::texture::decode(&fs::read(path).unwrap())
            .unwrap()
            .into_iter()
            .enumerate()
        {
            let mut b = vec![0u8; 18];
            b[2] = 2;
            b[12..14].copy_from_slice(&(t.width as u16).to_le_bytes());
            b[14..16].copy_from_slice(&(t.height as u16).to_le_bytes());
            b[16] = 32;
            b[17] = 0x28;
            for p in t.rgba.chunks_exact(4) {
                b.extend_from_slice(&[p[2], p[1], p[0], p[3]]);
            }
            fs::write(out.join(format!("{name}-{i}-{}.tga", t.name.trim())), b).unwrap();
            println!("{name} {i} {} {}x{}", t.name, t.width, t.height);
        }
    }
}
