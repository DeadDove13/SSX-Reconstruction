//! Original ADF frame tracks. Descriptor records remain separate from sampled tracks.
use crate::{Result, binary::*};
#[derive(Debug, Clone)]
pub struct Frame {
    pub position: [f32; 3],
    pub bone_positions: Option<Vec<[f32; 3]>>,
    pub rotations: Vec<[f32; 3]>,
}
#[derive(Debug, Clone)]
pub struct Track {
    pub header: usize,
    pub name: String,
    pub model: u8,
    pub fps: u8,
    pub frames: Vec<Frame>,
}
pub fn decode(data: &[u8]) -> Result<Vec<Track>> {
    if u32le(data, 0)? != 9 {
        return Err("Unsupported ADF version".into());
    }
    let headers = u32le(data, 4)? as usize;
    let start = u32le(data, 8)? as usize;
    let count = u32le(data, 12)? as usize;
    range(data, headers, count * 44)?;
    let mut tracks = Vec::new();
    for i in 0..count {
        let h = headers + i * 44;
        let stride = u32le(data, h + 8)? as usize;
        if stride == 0 {
            continue;
        }
        let packed = data[h + 14];
        let bones = (packed >> 3) as usize;
        if packed & 7 != 0 {
            return Err(format!("Unsupported ADF sampled track type at header {i}"));
        }
        // 0x00147670: flag 0x20 inserts one translation per bone before angles.
        let translated = data[h + 12] & 0x20 != 0;
        let angles = 12 + if translated { bones * 12 } else { 0 };
        if stride < angles + bones * 6 {
            return Err("ADF frame stride is too small".into());
        }
        let offset = start + u32le(data, h + 4)? as usize;
        // The high bit beside the frame rate stores the low bit of the frame count.
        let count = ((u32le(data, h + 12)? >> 7) & 255) as usize;
        range(data, offset, count * stride)?;
        let mut track = Track {
            header: i,
            name: String::from_utf8_lossy(&data[h..h + 4]).into_owned(),
            model: data[h + 15],
            fps: data[h + 12] & 31,
            frames: Vec::new(),
        };
        if track.fps == 0 {
            return Err("ADF frame rate is zero".into());
        }
        for frame in 0..count {
            let p = offset + frame * stride;
            let rotations = (0..bones)
                .map(|j| {
                    Ok([
                        u16le(data, p + angles + j * 6)? as i16 as f32,
                        u16le(data, p + angles + 2 + j * 6)? as i16 as f32,
                        u16le(data, p + angles + 4 + j * 6)? as i16 as f32,
                    ]
                    .map(|v| v * std::f32::consts::TAU / 16384.))
                })
                .collect::<Result<Vec<_>>>()?;
            let bone_positions = if translated {
                Some(
                    (0..bones)
                        .map(|j| vec3(data, p + 12 + j * 12))
                        .collect::<Result<Vec<_>>>()?,
                )
            } else {
                None
            };
            track.frames.push(Frame {
                position: vec3(data, p)?,
                bone_positions,
                rotations,
            });
        }
        tracks.push(track);
    }
    Ok(tracks)
}
