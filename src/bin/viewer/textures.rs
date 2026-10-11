//! Always-on 2x texture preparation. Original disc bytes remain unchanged.
use bevy::{
    asset::RenderAssetUsages,
    image::{ImageSampler, ImageSamplerDescriptor},
    prelude::*,
    render::render_resource::{Extent3d, TextureDimension, TextureFormat},
};
use ssx_rust::texture::Texture;

fn enlarged(source: &Texture) -> Vec<u8> {
    // Premultiplied alpha prevents dark fringes around cutout textures.
    let input = image::ImageBuffer::from_fn(source.width, source.height, |x, y| {
        let p = ((y * source.width + x) * 4) as usize;
        let a = source.rgba[p + 3] as f32 / 255.;
        image::Rgba([
            source.rgba[p] as f32 / 255. * a,
            source.rgba[p + 1] as f32 / 255. * a,
            source.rgba[p + 2] as f32 / 255. * a,
            a,
        ])
    });
    let output = image::imageops::resize(
        &input,
        source.width * 2,
        source.height * 2,
        image::imageops::FilterType::Lanczos3,
    );
    let mut rgba = Vec::with_capacity((source.width * source.height * 16) as usize);
    for p in output.pixels() {
        for c in &p.0[..3] {
            rgba.push(if p[3] > 0.00001 {
                (*c / p[3] * 255.).round().clamp(0., 255.) as u8
            } else {
                0
            });
        }
        rgba.push((p[3] * 255.).round().clamp(0., 255.) as u8);
    }
    rgba
}
pub fn image(source: &Texture) -> Image {
    let mut hash = 0xcbf29ce484222325u64;
    for b in source
        .width
        .to_le_bytes()
        .iter()
        .chain(source.height.to_le_bytes().iter())
        .chain(source.rgba.iter())
    {
        hash = (hash ^ *b as u64).wrapping_mul(0x100000001b3);
    }
    let folder = ssx_rust::storage::texture_cache();
    let path = folder.join(format!("{hash:016x}.rgba"));
    let expected = (source.width * source.height * 16) as usize;
    let pixels = std::fs::read(&path)
        .or_else(|_| {
            std::fs::read(
                std::path::Path::new("assets/texture-cache-v2").join(path.file_name().unwrap()),
            )
        })
        .ok()
        .filter(|p| p.len() == expected)
        .unwrap_or_else(|| {
            let pixels = enlarged(source);
            if std::fs::create_dir_all(&folder).is_ok() {
                let _ = std::fs::write(path, &pixels);
            }
            pixels
        });
    let mut image = Image::new(
        Extent3d {
            width: source.width * 2,
            height: source.height * 2,
            depth_or_array_layers: 1,
        },
        TextureDimension::D2,
        pixels,
        TextureFormat::Rgba8Unorm,
        RenderAssetUsages::RENDER_WORLD,
    );
    image.sampler = ImageSampler::Descriptor(ImageSamplerDescriptor {
        anisotropy_clamp: 16,
        ..ImageSamplerDescriptor::linear()
    });
    image
}
#[cfg(test)]
mod tests {
    use super::*;
    #[test]
    fn upscaling_preserves_solid_colour_and_avoids_transparent_colour_bleed() {
        let t = Texture {
            name: "test".into(),
            width: 2,
            height: 1,
            rgba: vec![255, 0, 0, 255, 0, 255, 0, 0],
        };
        let p = enlarged(&t);
        assert_eq!(p.len(), 32);
        for pixel in p.chunks_exact(4) {
            if pixel[3] > 0 {
                assert_eq!(pixel[0], 255);
                assert_eq!(pixel[1], 0);
            }
        }
        let t = Texture {
            rgba: vec![30, 60, 90, 255, 30, 60, 90, 255],
            ..t
        };
        assert!(enlarged(&t).chunks_exact(4).all(|p| p == [30, 60, 90, 255]));
    }
}
