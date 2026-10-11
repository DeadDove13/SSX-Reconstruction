//! SHPS texture records. Layout checked against SSX-Library and the supplied disc.
use crate::{Result, archive, binary::*};

#[derive(Debug, Clone)]
pub struct Texture {
    pub name: String,
    pub width: u32,
    pub height: u32,
    pub rgba: Vec<u8>,
}

pub fn decode(data: &[u8]) -> Result<Vec<Texture>> {
    if range(data, 0, 4)? != b"SHPS" {
        return Err("Expected an SHPS texture package".into());
    }
    let count = u32le(data, 8)? as usize;
    range(
        data,
        16,
        count.checked_mul(8).ok_or("Texture count overflow")?,
    )?;
    let mut textures = Vec::with_capacity(count);
    for i in 0..count {
        let name = String::from_utf8_lossy(range(data, 16 + 8 * i, 4)?)
            .trim_end_matches('\0')
            .to_owned();
        let start = u32le(data, 20 + 8 * i)? as usize;
        let end = if i + 1 < count {
            u32le(data, 28 + 8 * i)? as usize
        } else {
            data.len()
        };
        if start < 16 + count * 8 || end < start {
            return Err(format!("Invalid texture bounds for {name}"));
        }
        let record = range(data, start, end - start)?;
        textures.push(
            decode_record(record, name).map_err(|e| format!("Texture {i} at {start:#x}: {e}"))?,
        );
    }
    Ok(textures)
}

fn decode_record(record: &[u8], name: String) -> Result<Texture> {
    let kind = range(record, 0, 1)?[0];
    let base_kind = kind & 0x7f;
    if !matches!(base_kind, 1 | 2 | 3 | 5) {
        return Err(format!("Unsupported image type {kind:#x}"));
    }
    let width = u16le(record, 4)? as usize;
    let height = u16le(record, 6)? as usize;
    if width == 0 || height == 0 || width > 8192 || height > 8192 {
        return Err("Invalid image dimensions".into());
    }
    let pixels = width.checked_mul(height).ok_or("Image size overflow")?;
    let flags = u16le(record, 12)?;
    let declared = range(record, 1, 3)?
        .iter()
        .rev()
        .fold(0usize, |v, b| (v << 8) | *b as usize);
    let required = match base_kind {
        1 => pixels.div_ceil(2),
        2 => pixels,
        3 => pixels * 2,
        _ => pixels * 4,
    };
    let chunk_size = if declared == 0 {
        16 + required
    } else {
        declared
    };
    let payload = range(
        record,
        16,
        chunk_size
            .checked_sub(16)
            .ok_or("Image chunk is too short")?,
    )?;
    let mut indices = if kind & 0x80 != 0 {
        archive::refpack(payload)?
    } else {
        payload.to_vec()
    };
    range(&indices, 0, required)?;
    if flags & 0x2000 != 0 {
        if base_kind != 2 {
            return Err("Swizzled images currently require 8-bit indices".into());
        }
        let mut linear = vec![0; pixels];
        for y in 0..height {
            for x in 0..width {
                let block = (y & !15) * width + (x & !15) * 2;
                let swap = (((y + 2) >> 2) & 1) * 4;
                let row = (((y & !3) >> 1) + (y & 1)) & 7;
                let source = block
                    + row * width * 2
                    + ((x + swap) & 7) * 4
                    + ((y >> 1) & 1)
                    + ((x >> 2) & 2);
                linear[y * width + x] = *indices
                    .get(source)
                    .ok_or("Swizzled image address exceeds the image")?;
            }
        }
        indices = linear;
    }
    let rgba = if base_kind == 3 {
        // PSMCT16 channel layout. The paired JCHAIR.FSH RGB565 image confirms
        // RGB channels within one 5-bit quantization step on this disc.
        let mut rgba = Vec::with_capacity(pixels * 4);
        for bytes in indices[..required].chunks_exact(2) {
            let pixel = u16::from_le_bytes([bytes[0], bytes[1]]);
            for shift in [0, 5, 10] {
                let channel = ((pixel >> shift) & 31) as u8;
                rgba.push((channel << 3) | (channel >> 2));
            }
            rgba.push(if pixel & 0x8000 != 0 { 255 } else { 0 });
        }
        rgba
    } else if base_kind == 5 {
        indices[..required].to_vec()
    } else {
        let palette = range(record, chunk_size, record.len() - chunk_size)?;
        if range(palette, 0, 1)?[0] != 0x21 {
            return Err("Expected an RGBA palette after image data".into());
        }
        let colors = (u16le(palette, 4)? as usize)
            .checked_mul(u16le(palette, 6)? as usize)
            .ok_or("Palette size overflow")?;
        if colors == 0 || colors > 256 {
            return Err("Invalid palette size".into());
        }
        let palette_flags = u16le(palette, 12)?;
        let color_data = range(palette, 16, colors * 4)?;
        let scale_alpha = color_data.chunks_exact(4).all(|p| p[3] <= 128);
        let mut rgba = Vec::with_capacity(pixels * 4);
        for pixel in 0..pixels {
            let mut index = if base_kind == 1 {
                ((indices[pixel / 2] >> (4 * (pixel & 1))) & 15) as usize
            } else {
                indices[pixel] as usize
            };
            if palette_flags & 0x2000 != 0 {
                index = (index & 0xe7) | ((index & 8) << 1) | ((index & 16) >> 1);
            }
            let color = range(color_data, index * 4, 4)?;
            rgba.extend_from_slice(&color[..3]);
            rgba.push(if scale_alpha {
                color[3].saturating_mul(2)
            } else {
                color[3]
            });
        }
        rgba
    };
    Ok(Texture {
        name,
        width: width as u32,
        height: height as u32,
        rgba,
    })
}

#[cfg(test)]
mod tests {
    use super::*;
    #[test]
    fn rejects_truncated_packages() {
        assert!(decode(b"SHPS").is_err());
        let mut data = vec![0; 24];
        data[..4].copy_from_slice(b"SHPS");
        data[8] = 1;
        data[20] = 250;
        assert!(decode(&data).is_err());
    }
}
