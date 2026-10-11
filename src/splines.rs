//! WDX spline headers and WDF cubic segments. The rail flag is bit 0 at +0x24
//! (0x0021c970). Position evaluation follows the cubic basis in 0x00218710.
use crate::{Result, binary::*};
use std::collections::HashMap;
#[derive(Debug)]
pub struct Spline {
    pub surface: u32,
    pub curves: Vec<[[f32; 3]; 4]>,
}
pub fn decode(wdx: &[u8], wdf: &[u8]) -> Result<Vec<Spline>> {
    let models = u32le(wdx, 48)? as usize;
    let grids = u32le(wdx, 40)? as usize * u32le(wdx, 44)? as usize;
    let grid_start = 72 + models * 8;
    let headers =
        grid_start + grids * 8 + u32le(wdx, 56)? as usize * 20 + u32le(wdx, 52)? as usize * 12;
    let mut records = HashMap::new();
    for grid in 0..grids {
        let start = u32le(wdx, grid_start + grid * 8)? as usize;
        let size = u32le(wdx, grid_start + grid * 8 + 4)? as usize;
        if size == 0 {
            continue;
        }
        let chunk = range(wdf, start, size)?;
        let offset = ((816 + u16le(chunk, 44)? as usize * 4 + 15) & !15)
            + u16le(chunk, 36)? as usize * 272
            + u16le(chunk, 38)? as usize * 448;
        for index in 0..u16le(chunk, 42)? as usize {
            let p = offset + index * 128;
            range(chunk, p, 128)?;
            let coefficients = [
                vec3(chunk, p)?,
                vec3(chunk, p + 16)?,
                vec3(chunk, p + 32)?,
                vec3(chunk, p + 48)?,
            ];
            records.insert(
                (grid as u16, index as u16),
                (coefficients, (u16le(chunk, p + 84)?, u16le(chunk, p + 86)?)),
            );
        }
    }
    let mut rails = Vec::new();
    for index in 0..u32le(wdx, 60)? as usize {
        let p = headers + index * 52;
        range(wdx, p, 52)?;
        if u16le(wdx, p + 36)? & 1 == 0 {
            continue;
        }
        let mut key = (u16le(wdx, p + 44)?, u16le(wdx, p + 46)?);
        let mut curves = Vec::new();
        for _ in 0..u16le(wdx, p + 40)? {
            let (curve, next) = records
                .get(&key)
                .ok_or("Spline segment reference is missing")?;
            curves.push(*curve);
            key = *next;
        }
        rails.push(Spline {
            surface: u16le(wdx, p + 48)? as u32,
            curves,
        });
    }
    Ok(rails)
}
pub fn position(c: &[[f32; 3]; 4], t: f32) -> [f32; 3] {
    std::array::from_fn(|i| ((c[0][i] * t + c[1][i]) * t + c[2][i]) * t + c[3][i])
}
