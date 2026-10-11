//! SFN glyph metrics and 4-bit coverage. Layout: 0x001a0518, 0x001a0d20,
//! and 0x001a1780 in SLUS_200.95. GPU projection and UI layout are host code.
use crate::{Result, binary::*};
use std::collections::BTreeMap;
pub struct Glyph {
    pub rect: [u16; 4],
    pub advance: i8,
    pub bearing: [i8; 2],
}
pub struct BitmapFont {
    pub glyphs: BTreeMap<char, Glyph>,
    pub width: u32,
    pub height: u32,
    pub rgba: Vec<u8>,
    pub line_height: u8,
}
pub fn decode(data: &[u8]) -> Result<BitmapFont> {
    if range(data, 0, 4)? != b"FNTS" {
        return Err("Expected an FNTS font".into());
    }
    let count = u16le(data, 10)? as usize;
    let table = u32le(data, 20)? as usize;
    let atlas = u32le(data, 28)? as usize;
    range(
        data,
        table,
        count.checked_mul(11).ok_or("Font glyph count overflow")?,
    )?;
    if range(data, atlas, 1)?[0] != 1 {
        return Err("Expected a 4-bit font atlas".into());
    }
    let width = u16le(data, atlas + 4)? as u32;
    let height = u16le(data, atlas + 6)? as u32;
    if width == 0 || height == 0 || width > 4096 || height > 4096 {
        return Err("Invalid font dimensions".into());
    }
    let pixels = (width * height) as usize;
    let coverage = range(data, atlas + 16, pixels.div_ceil(2))?;
    let mut rgba = Vec::with_capacity(pixels * 4);
    for i in 0..pixels {
        let n = (coverage[i / 2] >> (4 * (i % 2))) & 15;
        rgba.extend_from_slice(&[255, 255, 255, ((n as u16 * 128 / 15) * 2).min(255) as u8]);
    }
    let mut glyphs = BTreeMap::new();
    for i in 0..count {
        let p = table + i * 11;
        let Some(ch) = char::from_u32(u16le(data, p)? as u32) else {
            continue;
        };
        let w = data[p + 2] as u16;
        let h = data[p + 3] as u16;
        let x = u16le(data, p + 4)?;
        let y = u16le(data, p + 6)?;
        if x as u32 + w as u32 > width || y as u32 + h as u32 > height {
            return Err("Font glyph exceeds its atlas".into());
        }
        glyphs.insert(
            ch,
            Glyph {
                rect: [x, y, w, h],
                advance: data[p + 8] as i8,
                bearing: [data[p + 9] as i8, data[p + 10] as i8],
            },
        );
    }
    // The loader derives the line extent from glyph height plus signed Y bearing.
    let line_height = glyphs
        .values()
        .map(|g| g.rect[3] as i16 + g.bearing[1] as i16)
        .max()
        .unwrap_or(1)
        .clamp(1, 255) as u8;
    Ok(BitmapFont {
        glyphs,
        width,
        height,
        rgba,
        line_height,
    })
}
#[cfg(test)]
mod tests {
    use super::*;
    #[test]
    fn rejects_short_font() {
        assert!(decode(b"FNTS").is_err());
    }
    #[test]
    #[ignore = "requires the extracted disc"]
    fn original_fonts_have_bounded_glyphs_and_alpha() {
        for name in ["FEHEMI", "HEMI", "LOCALE", "SMLFONT"] {
            let f = decode(&std::fs::read(format!("extracted/DATA/FONTS/{name}.SFN")).unwrap())
                .unwrap();
            assert!(f.glyphs.contains_key(&'A'));
            assert!(f.glyphs.contains_key(&'0'));
            assert!(f.line_height > 0);
            assert!(f.rgba.chunks_exact(4).any(|p| p[3] == 0));
            assert!(f.rgba.chunks_exact(4).any(|p| p[3] == 255));
        }
    }
}
