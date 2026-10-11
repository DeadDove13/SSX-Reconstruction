//! Original course sky meshes and their separate SSH texture packages.
use crate::{archive, binary::*, model, texture, Result};
use std::path::Path;

pub struct Sky {
    pub meshes: Vec<model::ObjectMesh>,
    pub textures: Vec<texture::Texture>,
    pub material_textures: Vec<usize>,
    pub clear: [u8; 3],
}

pub fn load(path: &Path) -> Result<Sky> {
    let bytes = std::fs::read(path).map_err(|e| e.to_string())?;
    let members = archive::index(&bytes)?;
    let read = |suffix: &str| -> Result<Vec<u8>> {
        let member = members.iter().find(|m| m.path.to_ascii_lowercase().ends_with(suffix))
            .ok_or_else(|| format!("No {suffix} in {}", path.display()))?;
        archive::extract(&bytes, member)
    };
    let mdr = read("_sky.mdr")?;
    let textures = texture::decode(&read("_sky.ssh")?)?;
    let meshes = model::decode_mdr(&mdr)?;
    // The MDR trailer contains a material count followed by 12-byte records.
    let table = u32le(&mdr, 8)? as usize;
    let count = u32le(&mdr, table + 4)? as usize;
    range(&mdr, table + 8, count.checked_mul(12).ok_or("Sky material count overflow")?)?;
    let material_textures = (0..count).map(|i| {
        let index = u16le(&mdr, table + 8 + i * 12 + 4)? as usize;
        if index >= textures.len() { return Err("Sky material texture is out of range".into()); }
        Ok(index)
    }).collect::<Result<Vec<_>>>()?;
    for mesh in &meshes {
        if mesh.material >= count { return Err("Sky mesh material is out of range".into()); }
    }
    // The outdoor dome is open above its rim. Extend the authored top-edge
    // colour into that opening. Pipe and Warmup contain only an unused quad.
    let mut sum = [0u64; 3];
    let mut samples = 0;
    if meshes.len() > 1 {
        let top = meshes.iter().map(|m| m.bounds[1][2]).fold(f32::NEG_INFINITY, f32::max);
        for mesh in meshes.iter().filter(|m| m.bounds[1][2] >= top - 1.) {
            let t = &textures[material_textures[mesh.material]];
            for p in t.rgba[..t.width as usize * 4].chunks_exact(4) {
                for i in 0..3 { sum[i] += p[i] as u64; }
                samples += 1;
            }
        }
    }
    let clear = sum.map(|c| (c / samples.max(1)) as u8);
    Ok(Sky { meshes, textures, material_textures, clear })
}

#[cfg(feature = "viewer")]
pub fn upscale(t: &texture::Texture) -> image::RgbaImage {
    let source = image::RgbaImage::from_raw(t.width, t.height, t.rgba.clone()).unwrap();
    // These sky tiles are opaque. Clamp sampling at each tile boundary.
    image::imageops::resize(&source, t.width * 4, t.height * 4, image::imageops::FilterType::Lanczos3)
}
