//! WDR static object geometry. This reads the SSX 2000 packet layout, not a
//! general PS2 VIF interpreter. Every packet remains bounded by its prefab.
use crate::{Result, binary::*};

#[derive(Debug)]
pub struct ObjectMesh {
    pub positions: Vec<[f32; 3]>,
    pub normals: Vec<[f32; 3]>,
    pub uv: Vec<[f32; 2]>,
    pub indices: Vec<u32>,
    pub material: usize,
    pub transform: Option<[f32; 16]>,
    pub bounds: [[f32; 3]; 2],
}

#[derive(Debug)]
pub struct Instance {
    pub prefab: usize,
    pub transform: [f32; 16],
    pub lighting: crate::lighting::Lighting,
    pub properties: crate::object_rules::Properties,
}

pub fn matrix(data: &[u8], start: usize) -> Result<[f32; 16]> {
    let mut output = [0.0; 16];
    for (index, value) in output.iter_mut().enumerate() {
        *value = f32le(data, start + index * 4)?;
    }
    Ok(output)
}

fn align16(value: usize) -> usize {
    (value + 15) & !15
}

pub fn decode(wdx: &[u8], wdr: &[u8]) -> Result<Vec<Vec<ObjectMesh>>> {
    let count = u32le(wdx, 48)? as usize;
    let mut prefabs = Vec::with_capacity(count);
    for prefab in 0..count {
        let start = u32le(wdx, 72 + prefab * 8)? as usize;
        let size = u32le(wdx, 76 + prefab * 8)? as usize;
        let data = range(wdr, start, size)?;
        prefabs.push(decode_mdr(data)?);
    }
    Ok(prefabs)
}

/// Standalone MDR files use the same mesh packets as a WDR prefab.
pub fn decode_mdr(data: &[u8]) -> Result<Vec<ObjectMesh>> {
    let mesh_count = u32le(data, 0)? as usize;
    range(
        data,
        36,
        mesh_count
            .checked_mul(4)
            .ok_or("Object mesh count overflow")?,
    )?;
    let scale = vec3(data, 16)?;
    let mut meshes = Vec::with_capacity(mesh_count);
    for mesh_index in 0..mesh_count {
        let model_start = u32le(data, 36 + mesh_index * 4)? as usize;
        range(data, model_start, 64)?;
        let matrix_offset = u32le(data, model_start + 28)?;
        let transform = if matrix_offset == 0xdeadbeef {
            None
        } else {
            Some(matrix(data, model_start + matrix_offset as usize)?)
        };
        let material = u32le(data, model_start + 36)? as usize;
        let mut mesh = ObjectMesh {
            positions: vec![],
            normals: vec![],
            uv: vec![],
            indices: vec![],
            material,
            transform,
            bounds: [vec3(data, model_start)?, vec3(data, model_start + 12)?],
        };
        let mut cursor = (model_start + 64 + 127) & !127;
        loop {
            let strips = u32le(data, cursor + 48)? as usize;
            let vertices = u32le(data, cursor + 56)? as usize;
            if vertices > 65535 || strips > vertices {
                return Err(format!(
                    "Invalid MDR/WDR packet in mesh {mesh_index}"
                ));
            }
            cursor += 80;
            let mut lengths = Vec::with_capacity(strips);
            for index in 0..strips {
                let encoded = u16le(data, cursor + index * 2)? as usize;
                if encoded % 3 != 0 {
                    return Err("Invalid WDR strip length".into());
                }
                lengths.push(encoded / 3);
            }
            if lengths.iter().sum::<usize>() != vertices {
                return Err(format!(
                    "MDR/WDR strips do not cover their vertices: mesh {mesh_index}"
                ));
            }
            cursor = align16(cursor + strips * 2) + 64;
            for index in 0..vertices {
                mesh.uv.push([
                    (u16le(data, cursor + index * 4)? as i16) as f32 / 4096.0,
                    (u16le(data, cursor + index * 4 + 2)? as i16) as f32 / 4096.0,
                ]);
            }
            cursor = align16(cursor + vertices * 4) + 48;
            for index in 0..vertices {
                let mut normal = [0.0; 3];
                for axis in 0..3 {
                    normal[axis] =
                        (u16le(data, cursor + index * 6 + axis * 2)? as i16) as f32 / 32768.0;
                }
                mesh.normals.push(normal);
            }
            cursor = align16(cursor + vertices * 6) + 16;
            let mut base = mesh.positions.len() as u32;
            for index in 0..vertices {
                let mut position = [0.0; 3];
                for axis in 0..3 {
                    position[axis] =
                        (u16le(data, cursor + index * 6 + axis * 2)? as i16) as f32 / 32768.0
                            * scale[axis];
                }
                mesh.positions.push(position);
            }
            for length in lengths {
                for index in 2..length as u32 {
                    let (a, b, c) = if index % 2 == 0 {
                        (base + index, base + index - 1, base + index - 2)
                    } else {
                        (base + index - 2, base + index - 1, base + index)
                    };
                    mesh.indices.extend_from_slice(&[a, b, c]);
                }
                base += length as u32;
            }
            cursor = align16(cursor + vertices * 6) + 16;
            if u32le(data, cursor + 60)? == 0xdeadbeef {
                break;
            }
        }
        meshes.push(mesh);
    }
    Ok(meshes)
}
