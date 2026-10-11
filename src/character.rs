//! Original MPF rider geometry. Weighted vertices retain each bone-local position.
use crate::{Result, binary::*};

#[derive(Debug, Clone)]
pub struct Bone {
    pub name: String,
    pub parent_file: i16,
    pub parent: i16,
    pub position: [f32; 3],
}
#[derive(Debug, Clone)]
pub struct Influence {
    pub bone: usize,
    pub position: [f32; 3],
    pub weight: f32,
}
#[derive(Debug, Clone)]
pub struct Vertex {
    pub influences: Vec<Influence>,
    pub normal: [f32; 3],
    pub normal_bone: usize,
    pub uv: [f32; 2],
}
#[derive(Debug, Clone)]
pub struct Mesh {
    pub material: String,
    pub vertices: Vec<Vertex>,
    pub indices: Vec<u32>,
}
#[derive(Debug, Clone)]
pub struct Model {
    pub name: String,
    pub bones: Vec<Bone>,
    pub meshes: Vec<Mesh>,
}

fn name(data: &[u8], p: usize, len: usize) -> Result<String> {
    Ok(String::from_utf8_lossy(range(data, p, len)?)
        .trim_end_matches('\0')
        .to_string())
}
fn short(data: &[u8], p: usize) -> Result<i16> {
    Ok(u16le(data, p)? as i16)
}
fn aligned(p: usize) -> usize {
    (p + 15) & !15
}
fn bone(word: u32) -> Result<usize> {
    if word < 14 || (word - 14) % 4 != 0 {
        return Err(format!("Invalid MPF bone address {word}"));
    }
    Ok(((word - 14) / 4) as usize)
}
fn triangles(strips: &[usize], vertices: usize) -> Result<Vec<u32>> {
    let mut result = Vec::new();
    let mut base = 0;
    for &len in strips {
        if base + len > vertices {
            return Err("MPF strip exceeds vertex count".into());
        }
        for i in 2..len {
            let tri = if i % 2 == 0 {
                [base + i - 2, base + i - 1, base + i]
            } else {
                [base + i, base + i - 1, base + i - 2]
            };
            result.extend(tri.map(|v| v as u32));
        }
        base += len;
    }
    if base != vertices {
        return Err("MPF strips do not cover the vertices".into());
    }
    Ok(result)
}
pub fn decode(data: &[u8]) -> Result<Vec<Model>> {
    let count = u16le(data, 4)? as usize;
    let headers = u16le(data, 6)? as usize;
    let start = u32le(data, 8)? as usize;
    range(data, headers, count * 64)?;
    let mut models = Vec::new();
    for i in 0..count {
        let h = headers + i * 64;
        let d = range(
            data,
            start + u32le(data, h + 16)? as usize,
            u32le(data, h + 20)? as usize,
        )?;
        let mut model = Model {
            name: name(data, h, 16)?,
            bones: Vec::new(),
            meshes: Vec::new(),
        };
        let b = u32le(data, h + 24)? as usize;
        for j in 0..u16le(data, h + 42)? as usize {
            let p = b + j * 32;
            model.bones.push(Bone {
                name: name(d, p, 16)?,
                parent_file: short(d, p + 16)?,
                parent: short(d, p + 18)?,
                position: vec3(d, p + 20)?,
            });
        }
        // Shadow geometry uses a separate format and is not part of the visible rider.
        if model.name.to_ascii_lowercase().contains("shdw") {
            models.push(model);
            continue;
        }
        let materials = (0..range(data, h + 46, 1)?[0] as usize)
            .map(|j| name(d, j * 16, 4))
            .collect::<Result<Vec<_>>>()?;
        let group = u32le(data, h + 32)? as usize;
        for j in 0..u16le(data, h + 40)? as usize {
            let g = group + j * 28;
            let kind = u32le(d, g)?;
            let material = materials
                .get(u32le(d, g + 4)? as usize)
                .ok_or("MPF material index is invalid")?;
            let offset = u32le(d, g + 12)?;
            if offset != u32::MAX {
                let end = u32le(d, g + 16)? as usize;
                let mut p = offset as usize;
                while p + 48 < end {
                    p += 48;
                    let strips = u32le(d, p)? as usize;
                    let joint = bone(u32le(d, p + 4)?)?;
                    let count = u32le(d, p + 12)? as usize;
                    p += 16;
                    let lengths = (0..strips)
                        .map(|k| u32le(d, p + k * 16).map(|v| v as usize))
                        .collect::<Result<Vec<_>>>()?;
                    p += strips * 16 + 16 + 48;
                    let uv = (0..count)
                        .map(|k| {
                            Ok([
                                short(d, p + k * 4)? as f32 / 4096.,
                                short(d, p + k * 4 + 2)? as f32 / 4096.,
                            ])
                        })
                        .collect::<Result<Vec<_>>>()?;
                    p = aligned(p + count * 4) + 48;
                    let normals = (0..count)
                        .map(|k| {
                            Ok([
                                short(d, p + k * 6)? as f32 / 32768.,
                                short(d, p + k * 6 + 2)? as f32 / 32768.,
                                short(d, p + k * 6 + 4)? as f32 / 32768.,
                            ])
                        })
                        .collect::<Result<Vec<_>>>()?;
                    p = aligned(p + count * 6) + 48;
                    let vertices = (0..count)
                        .map(|k| {
                            Ok(Vertex {
                                influences: vec![Influence {
                                    bone: joint,
                                    position: vec3(d, p + k * 12)?,
                                    weight: 1.,
                                }],
                                normal: normals[k],
                                normal_bone: joint,
                                uv: uv[k],
                            })
                        })
                        .collect::<Result<Vec<_>>>()?;
                    p = aligned(p + count * 12) + 16;
                    model.meshes.push(Mesh {
                        material: material.clone(),
                        vertices,
                        indices: triangles(&lengths, count)?,
                    });
                }
            }
            let offset = u32le(d, g + 20)?;
            if offset != u32::MAX {
                if kind != 2 && kind != 3 {
                    return Err(format!("Unsupported MPF weighted group {kind}"));
                }
                let end = u32le(d, g + 24)? as usize;
                let mut p = offset as usize;
                while p + 48 < end {
                    p += 48;
                    let assignments = u32le(d, p)? as usize;
                    let strips = u32le(d, p + 4)? as usize;
                    p += 16;
                    let mut input_bones = Vec::new();
                    for k in 0..assignments {
                        let joint = bone(u32le(d, p + k * 16)?)?;
                        let count =
                            u32le(d, p + k * 16 + 4)? as usize + u32le(d, p + k * 16 + 8)? as usize;
                        input_bones.extend(std::iter::repeat_n(joint, count));
                    }
                    p += assignments * 16;
                    let inputs = range(d, p + 46, 1)?[0] as usize;
                    p += 48;
                    if inputs != input_bones.len() {
                        return Err("MPF weighted input count differs from bone records".into());
                    }
                    let positions = (0..inputs)
                        .map(|k| vec3(d, p + k * 12))
                        .collect::<Result<Vec<_>>>()?;
                    p = aligned(p + inputs * 12);
                    let records = range(d, p + 46, 1)?[0] as usize;
                    p += 48;
                    let counts = [
                        u16le(d, p)? as usize,
                        u16le(d, p + 2)? as usize,
                        u16le(d, p + 4)? as usize,
                    ];
                    p += 6;
                    if 1 + counts[0] * 2 + counts[1] * 2 + counts[2] != records {
                        return Err("MPF weight record count mismatch".into());
                    }
                    let mut blends = Vec::new();
                    for (count, weights) in counts.into_iter().zip([3, 2, 1]) {
                        for _ in 0..count {
                            let mut blend = Vec::new();
                            for k in 0..weights {
                                let index = u16le(d, p + k * 2)? as usize;
                                let weight = if weights == 1 {
                                    1.
                                } else {
                                    u16le(d, p + 6 + k * 2)? as f32 / 32768.
                                };
                                blend.push(Influence {
                                    bone: *input_bones
                                        .get(index)
                                        .ok_or("MPF weight index exceeds input count")?,
                                    position: positions[index],
                                    weight,
                                });
                            }
                            p += if weights == 1 { 6 } else { 12 };
                            blends.push(blend);
                        }
                    }
                    p = aligned(p);
                    let strip_count = range(d, p + 14, 1)?[0] as usize;
                    p += 16;
                    if strip_count != strips {
                        return Err("MPF weighted strip count mismatch".into());
                    }
                    let lengths = (0..strips)
                        .map(|k| u16le(d, p + k * 2).map(|v| v as usize))
                        .collect::<Result<Vec<_>>>()?;
                    p = aligned(p + strips * 2);
                    let unpack_count = range(d, p + 46, 1)?[0] as usize;
                    p += 48;
                    // VIF V2-16 has twice as many unpack elements as complete vertex records.
                    if unpack_count % 2 != 0 {
                        return Err("MPF vertex record is incomplete".into());
                    }
                    let count = unpack_count / 2;
                    let mut vertices = Vec::new();
                    for k in 0..count {
                        let q = p + k * 8;
                        let index = u16le(d, q)? as usize;
                        let normal = u16le(d, q + 2)? as usize;
                        vertices.push(Vertex {
                            influences: blends
                                .get(index)
                                .ok_or("MPF blended vertex index is invalid")?
                                .clone(),
                            normal: *positions.get(normal).ok_or("MPF normal index is invalid")?,
                            normal_bone: input_bones[normal],
                            uv: [
                                short(d, q + 4)? as f32 / 4096.,
                                short(d, q + 6)? as f32 / 4096.,
                            ],
                        });
                    }
                    p = aligned(p + count * 8) + 16;
                    model.meshes.push(Mesh {
                        material: material.clone(),
                        vertices,
                        indices: triangles(&lengths, count)?,
                    });
                }
            }
        }
        models.push(model);
    }
    Ok(models)
}
