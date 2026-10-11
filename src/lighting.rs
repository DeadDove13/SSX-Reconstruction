//! WDF instance lighting. The colour scale and normal evaluation are a host
//! adapter until the original VU lighting program is recovered.
use crate::{Result, binary::*};

#[derive(Debug, Clone, Copy)]
pub struct Lighting {
    pub valid: bool,
    pub directions: [[f32; 3]; 3],
    pub colours: [[f32; 3]; 3],
    pub ambient: [f32; 3],
}
impl Default for Lighting {
    fn default() -> Self {
        Self {
            valid: true,
            directions: [[0.; 3]; 3],
            colours: [[0.; 3]; 3],
            ambient: [1.; 3],
        }
    }
}
impl Lighting {
    pub fn decode(data: &[u8], instance: usize) -> Result<Self> {
        let mut result = Self::default();
        // One supplied Mesablanca instance contains saved allocator data here.
        // Read bounded words, then reject the whole lighting record if invalid.
        let value = |offset| u32le(data, offset).map(f32::from_bits);
        for i in 0..3 {
            for axis in 0..3 {
                result.directions[i][axis] = value(instance + 64 + (axis * 4 + i) * 4)?;
                result.colours[i][axis] = value(instance + 128 + i * 16 + axis * 4)? / 128.;
            }
            result.ambient[i] = value(instance + 176 + i * 4)? / 128.;
        }
        if result
            .directions
            .iter()
            .chain(result.colours.iter())
            .flatten()
            .chain(result.ambient.iter())
            .any(|v| !v.is_finite())
        {
            return Ok(Self {
                valid: false,
                ..Self::default()
            });
        }
        Ok(result)
    }
    pub fn colour(&self, normal: [f32; 3]) -> [f32; 4] {
        let mut out = self.ambient;
        for (direction, colour) in self.directions.iter().zip(self.colours) {
            let dot = direction
                .iter()
                .zip(normal)
                .map(|(a, b)| a * b)
                .sum::<f32>()
                .max(0.);
            for axis in 0..3 {
                out[axis] += dot * colour[axis];
            }
        }
        [
            out[0].clamp(0., 2.),
            out[1].clamp(0., 2.),
            out[2].clamp(0., 2.),
            1.,
        ]
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    #[test]
    fn lighting_uses_normal_direction_and_keeps_ambient_on_back_faces() {
        let lighting = Lighting {
            valid: true,
            directions: [[1., 0., 0.], [0.; 3], [0.; 3]],
            colours: [[0.5, 0.25, 0.], [0.; 3], [0.; 3]],
            ambient: [0.1, 0.2, 0.3],
        };
        assert_eq!(lighting.colour([-1., 0., 0.]), [0.1, 0.2, 0.3, 1.]);
        assert_eq!(lighting.colour([1., 0., 0.]), [0.6, 0.45, 0.3, 1.]);
    }
    #[test]
    fn invalid_saved_lighting_uses_a_neutral_fallback() {
        let mut data = vec![0; 272];
        data[176..180].copy_from_slice(&u32::MAX.to_le_bytes());
        let lighting = Lighting::decode(&data, 0).unwrap();
        assert!(!lighting.valid);
        assert_eq!(lighting.colour([0., 0., 1.]), [1.; 4]);
        assert!(Lighting::decode(&data[..100], 0).is_err());
    }
}
