//! Original SSX terrain coefficients and material references from WDX/WDF files.
use crate::{Result, binary::*};
use serde::Serialize;

#[derive(Debug, Clone)]
pub struct Patch {
    pub source_offset: usize,
    pub coefficients: [[f32; 3]; 16],
    pub uv: [[f32; 2]; 4],
    pub material: usize,
    pub lightmap: u32,
    pub lightmap_rect: [f32; 4],
    pub surface_type: u32,
    pub corners: [[f32; 3]; 4],
}

impl Patch {
    pub fn lightmap_uv(&self, u: f32, v: f32, dimensions: [u32; 2]) -> [f32; 2] {
        let [x, y, width, height] = self.lightmap_rect;
        let pixel = [1. / dimensions[0] as f32, 1. / dimensions[1] as f32];
        [
            x + pixel[0] * 0.5 + u * (width - pixel[0]),
            y + pixel[1] * 0.5 + v * (height - pixel[1]),
        ]
    }
    /// Evaluate the bicubic power basis stored by the game.
    pub fn position(&self, u: f32, v: f32) -> [f32; 3] {
        let up = [1.0, u, u * u, u * u * u];
        let vp = [1.0, v, v * v, v * v * v];
        let mut out = [0.0; 3];
        for row in 0..4 {
            for col in 0..4 {
                for (axis, value) in out.iter_mut().enumerate() {
                    *value += self.coefficients[row * 4 + col][axis] * up[col] * vp[row];
                }
            }
        }
        out
    }

    pub fn texcoord(&self, u: f32, v: f32) -> [f32; 2] {
        let mut out = [0.0; 2];
        for (axis, value) in out.iter_mut().enumerate() {
            *value = self.uv[0][axis] * (1.0 - u) * (1.0 - v)
                + self.uv[1][axis] * (1.0 - u) * v
                + self.uv[2][axis] * u * (1.0 - v)
                + self.uv[3][axis] * u * v;
        }
        out
    }
}

#[derive(Debug)]
pub struct Level {
    /// Authored MAP names, indexed by WDF instance. Empty when MAP is absent.
    pub object_names: Vec<String>,
    pub rails: Vec<crate::splines::Spline>,
    pub lightmaps: Vec<crate::texture::Texture>,
    pub patches: Vec<Patch>,
    pub instances: Vec<crate::model::Instance>,
    pub prefabs: Vec<Vec<crate::model::ObjectMesh>>,
    pub effects: crate::object_rules::WorldEffects,
    pub material_textures: Vec<usize>,
    pub stats: LevelStats,
}

#[derive(Debug, Serialize)]
pub struct LevelStats {
    pub format_version: f32,
    pub grid: [usize; 2],
    pub model_count: usize,
    pub instance_count: usize,
    pub patch_count: usize,
    pub material_count: usize,
    pub spline_count: usize,
    pub bounds_min: [f32; 3],
    pub bounds_max: [f32; 3],
    pub largest_corner_error: f32,
    pub decoded_object_meshes: usize,
    pub object_triangles: usize,
}

pub fn decode(wdx: &[u8], wdf: &[u8]) -> Result<Level> {
    range(wdx, 0, 72)?;
    let rows = u32le(wdx, 40)? as usize;
    let cols = u32le(wdx, 44)? as usize;
    let models = u32le(wdx, 48)? as usize;
    let materials = u32le(wdx, 52)? as usize;
    let unknown_count = u32le(wdx, 56)? as usize;
    let splines = u32le(wdx, 60)? as usize;
    let grids = rows.checked_mul(cols).ok_or("Grid size overflow")?;
    let grid_start = 72usize
        .checked_add(models.checked_mul(8).ok_or("Model count overflow")?)
        .ok_or("Model table overflow")?;
    range(
        wdx,
        grid_start,
        grids.checked_mul(8).ok_or("Grid table overflow")?,
    )?;
    let material_start = grid_start
        + grids * 8
        + unknown_count
            .checked_mul(20)
            .ok_or("Effect table overflow")?;
    range(
        wdx,
        material_start,
        materials.checked_mul(12).ok_or("Material table overflow")?,
    )?;
    let material_textures = (0..materials)
        .map(|i| u16le(wdx, material_start + i * 12 + 4).map(|v| v as usize))
        .collect::<Result<Vec<_>>>()?;
    let mut patches = Vec::new();
    let mut object_instances = Vec::new();
    let mut instance_count = 0;
    let mut min = [f32::INFINITY; 3];
    let mut max = [f32::NEG_INFINITY; 3];
    let mut largest_corner_error = 0.0f32;
    for grid in 0..grids {
        let start = u32le(wdx, grid_start + grid * 8)? as usize;
        let size = u32le(wdx, grid_start + grid * 8 + 4)? as usize;
        if size == 0 {
            continue;
        }
        let chunk = range(wdf, start, size)?;
        let instances = u16le(chunk, 36)? as usize;
        let count = u16le(chunk, 38)? as usize;
        let unknown = u16le(chunk, 44)? as usize;
        let patch_start = ((816 + unknown * 4 + 15) & !15) + instances * 272;
        range(chunk, patch_start, count * 448)?;
        instance_count += instances;
        for index in 0..instances {
            let position = ((816 + unknown * 4 + 15) & !15) + index * 272;
            let prefab = u32le(chunk, position + 204)? as usize;
            if prefab >= models {
                return Err(format!("Instance references missing prefab {prefab}"));
            }
            object_instances.push(crate::model::Instance {
                prefab,
                transform: crate::model::matrix(chunk, position)?,
                lighting: crate::lighting::Lighting::decode(chunk, position)?,
                properties: crate::object_rules::Properties::decode(chunk, position)?,
            });
        }
        for i in 0..count {
            let p = patch_start + i * 448;
            let mut coefficients = [[0.0; 3]; 16];
            for (index, coefficient) in coefficients.iter_mut().enumerate() {
                *coefficient = vec3(chunk, p + 80 + (15 - index) * 16)?;
            }
            let mut uv = [[0.0; 2]; 4];
            for (index, value) in uv.iter_mut().enumerate() {
                *value = [
                    f32le(chunk, p + 16 + index * 16)?,
                    f32le(chunk, p + 20 + index * 16)?,
                ];
            }
            let mut corners = [[0.0; 3]; 4];
            // This disc stores four corners before the bounds. The reference
            // library labels these six vectors differently. Polynomial endpoint
            // comparisons establish this ordering for the supplied game.
            for (index, value) in corners.iter_mut().enumerate() {
                *value = vec3(chunk, p + 336 + index * 16)?;
            }
            let material = u32le(chunk, p + 432)? as usize;
            if material >= materials {
                return Err(format!(
                    "Patch at {:#x} references missing material {material}",
                    start + p
                ));
            }
            let patch = Patch {
                source_offset: start + p,
                coefficients,
                uv,
                material,
                lightmap: u32le(chunk, p + 436)?,
                lightmap_rect: [
                    f32le(chunk, p)?,
                    f32le(chunk, p + 4)?,
                    f32le(chunk, p + 8)?,
                    f32le(chunk, p + 12)?,
                ],
                surface_type: u32le(chunk, p + 440)?,
                corners,
            };
            // Independently stored corners check coefficient order and record alignment.
            for (index, (u, v)) in [(0.0, 0.0), (0.0, 1.0), (1.0, 0.0), (1.0, 1.0)]
                .into_iter()
                .enumerate()
            {
                let point = patch.position(u, v);
                let error = (0..3)
                    .map(|a| (corners[index][a] - point[a]).powi(2))
                    .sum::<f32>()
                    .sqrt();
                largest_corner_error = largest_corner_error.max(error);
                for axis in 0..3 {
                    min[axis] = min[axis].min(point[axis]);
                    max[axis] = max[axis].max(point[axis]);
                }
            }
            patches.push(patch);
        }
    }
    if patches.is_empty() {
        return Err("No terrain patches found".into());
    }
    let stats = LevelStats {
        format_version: f32le(wdx, 0)?,
        grid: [rows, cols],
        model_count: models,
        instance_count,
        patch_count: patches.len(),
        material_count: materials,
        spline_count: splines,
        bounds_min: min,
        bounds_max: max,
        largest_corner_error,
        decoded_object_meshes: 0,
        object_triangles: 0,
    };
    Ok(Level {
        object_names: Vec::new(),
        rails: crate::splines::decode(wdx, wdf)?,
        lightmaps: vec![],
        patches,
        instances: object_instances,
        prefabs: vec![],
        effects: Default::default(),
        material_textures,
        stats,
    })
}

#[cfg(test)]
mod tests {
    use super::*;
    #[test]
    fn evaluates_a_plane_and_a_cubic_term() {
        let mut patch = Patch {
            source_offset: 0,
            coefficients: [[0.0; 3]; 16],
            uv: [[0.0; 2]; 4],
            material: 0,
            lightmap: 0,
            lightmap_rect: [0., 0., 1., 1.],
            surface_type: 0,
            corners: [[0.0; 3]; 4],
        };
        patch.coefficients[0] = [10.0, 20.0, 30.0];
        patch.coefficients[1] = [2.0, 0.0, 0.0];
        patch.coefficients[4] = [0.0, 3.0, 0.0];
        patch.coefficients[15] = [0.0, 0.0, 8.0];
        assert_eq!(patch.position(0.5, 0.5), [11.0, 21.5, 30.125]);
    }
}
