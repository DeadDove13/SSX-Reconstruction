//! Chase camera settings and the normal follow path recovered from SSX.
//! Camera collision, crash framing, bone targets, and landing look-ahead remain
//! outside this port. Native trigonometry is not PS2 bit-exact.
use crate::{Result, binary::*};
use std::{
    collections::HashSet,
    f32::consts::{PI, TAU},
};

#[derive(Debug, Clone)]
pub struct ChaseSettings {
    pub name: String,
    pub offset: [f32; 3],
    pub target_offset: [f32; 3],
    pub pole_length: f32,
    /// Multiplies rider field +0xa8, not the rider's physical speed.
    pub speed_length: f32,
    pub yaw_offset: f32,
    pub pitch_offset: f32,
    pub pitch_relative: bool,
    pub down_pitch_divisor: f32,
    pub up_pitch_divisor: f32,
    pub pitch_limits: Option<[f32; 2]>,
    pub pre_seek: f32,
    pub post_average: usize,
    pub post_seek: f32,
    pub target_angles: [f32; 3],
    pub target_damping: f32,
    pub terrain_roll_divisor: Option<f32>,
    pub zoom: f32,
    pub near: f32,
}

/// Traverse the camera list used by 0x00160828. Ignore saved runtime pointers.
pub fn decode_chase(data: &[u8], name: &str) -> Result<ChaseSettings> {
    let mut node = u32le(data, 0)?;
    let mut seen = HashSet::new();
    while node != u32::MAX {
        if !seen.insert(node) {
            return Err("CM2 camera list contains a cycle".into());
        }
        let n = node as usize;
        let raw_name = range(data, n + 16, 16)?;
        let len = raw_name.iter().position(|&x| x == 0).unwrap_or(16);
        if &raw_name[..len] == name.as_bytes() {
            let base = u32le(data, n + 8)? as usize;
            let d = range(data, base, 0x170)?;
            // This implementation supports the primary rider's pole cameras.
            for (offset, expected) in [
                (0, 1),
                (4, 0),
                (0x28, 0),
                (0xc4, 1),
                (0xd0, 1),
                (0xd4, 0),
                (0xdc, 0),
                (0xf8, 0),
                (0x11c, 1),
                (0x120, 0),
                (0x14c, 0),
                (0x154, 0),
                (0x15c, 0),
            ] {
                if u32le(d, offset)? != expected {
                    return Err(format!("Camera {name} uses unsupported field {offset:#x}"));
                }
            }
            let pre_seek = if u32le(d, 0x10)? != 0 {
                f32le(d, 0x14)?
            } else {
                1.0
            };
            let post_average = if u32le(d, 0x18)? != 0 {
                u32le(d, 0x1c)? as usize
            } else {
                0
            };
            let post_seek = if u32le(d, 0x20)? != 0 {
                f32le(d, 0x24)?
            } else {
                1.0
            };
            let down = f32le(d, 0x110)?;
            let up = f32le(d, 0x114)?;
            let damping = f32le(d, 0x140)?.max(1.0);
            let roll = if u32le(d, 0x148)? != 0 {
                Some(f32le(d, 0x144)?)
            } else {
                None
            };
            let limits = if u32le(d, 0x104)? != 0 {
                Some([f32le(d, 0x108)?, f32le(d, 0x10c)?])
            } else {
                None
            };
            if post_average > 15
                || down <= 0.0
                || up <= 0.0
                || roll.is_some_and(|x| x <= 0.0)
                || limits.is_some_and(|x| x[0] > x[1])
            {
                return Err(format!("Camera {name} has invalid damping or pitch limits"));
            }
            return Ok(ChaseSettings {
                name: name.into(),
                offset: [f32le(d, 0x38)?, f32le(d, 0x64)?, f32le(d, 0x90)?],
                target_offset: vec3(d, 0x124)?,
                pole_length: f32le(d, 0xc8)?,
                speed_length: f32le(d, 0xcc)?,
                yaw_offset: f32le(d, 0xd8)?,
                pitch_offset: f32le(d, 0xfc)?,
                pitch_relative: u32le(d, 0xf4)? != 0,
                down_pitch_divisor: down,
                up_pitch_divisor: up,
                pitch_limits: limits,
                pre_seek: if pre_seek == 0.0 { 1.0 } else { pre_seek },
                post_average,
                post_seek: if post_seek == 0.0 { 1.0 } else { post_seek },
                target_angles: vec3(d, 0x130)?,
                target_damping: damping,
                terrain_roll_divisor: roll,
                zoom: f32le(d, 0x13c)?,
                near: f32le(d, 0x164)?,
            });
        }
        node = u32le(data, n)?;
    }
    Err(format!("CM2 has no camera named {name}"))
}

#[derive(Debug, Clone, Copy)]
pub struct RiderReference {
    pub position: [f32; 3],
    /// The original camera subsystem supplies a filtered heading vector.
    pub direction: [f32; 3],
    pub ground_normal: [f32; 3],
    pub grounded: bool,
    pub input_a8: f32,
}
#[derive(Debug, Clone, Copy)]
pub struct CameraPose {
    pub position: [f32; 3],
    /// World yaw, elevation, and roll in radians. Coordinates are Z-up.
    pub angles: [f32; 3],
    pub zoom: f32,
}
pub struct ChaseCamera {
    settings: ChaseSettings,
    pole_yaw: f32,
    pole_pitch: f32,
    history: [[f32; 3]; 16],
    pose: Option<CameraPose>,
    last_direction: [f32; 3],
}

/// 0x0015bec0. Keep the original signed boundary at plus/minus pi.
pub fn angle_delta(target: f32, current: f32) -> f32 {
    let mut angle = target - current;
    while angle > PI {
        angle -= TAU;
    }
    while angle < -PI {
        angle += TAU;
    }
    angle
}
fn dot(a: [f32; 3], b: [f32; 3]) -> f32 {
    (a[0] * b[0] + a[1] * b[1]) + a[2] * b[2]
}
fn normalized(v: [f32; 3]) -> [f32; 3] {
    let len = dot(v, v).sqrt();
    if len > 0.0 {
        v.map(|x| x / len)
    } else {
        [0.0; 3]
    }
}
impl ChaseCamera {
    pub fn new(settings: ChaseSettings) -> Self {
        Self {
            settings,
            pole_yaw: 0.0,
            pole_pitch: 0.0,
            history: [[0.0; 3]; 16],
            pose: None,
            last_direction: [0.0, 1.0, 0.0],
        }
    }
    pub fn settings(&self) -> &ChaseSettings {
        &self.settings
    }
    pub fn reset(&mut self) {
        self.pose = None;
    }

    /// One original camera tick. Call at 60 Hz, then interpolate for rendering.
    /// Uses the normal pole and target branches of 0x00160d98/0x00163f68,
    /// followed by position history and angular damping from 0x0015bf40.
    pub fn tick(&mut self, rider: RiderReference) -> CameraPose {
        let s = &self.settings;
        let reset = self.pose.is_none();
        let mut direction = rider.direction;
        let mut horizontal = (direction[0] * direction[0] + direction[1] * direction[1]).sqrt();
        if horizontal <= 0.00001 {
            direction = self.last_direction;
            horizontal = (direction[0] * direction[0] + direction[1] * direction[1]).sqrt();
        } else {
            self.last_direction = direction;
        }
        let yaw = -direction[0].atan2(direction[1]) + s.yaw_offset;
        let mut pitch = s.pitch_offset;
        if s.pitch_relative && horizontal > 0.1 {
            pitch += direction[2].atan2(horizontal)
                / if direction[2] < 0.0 {
                    s.down_pitch_divisor
                } else {
                    s.up_pitch_divisor
                };
            if let Some([min, max]) = s.pitch_limits {
                pitch = pitch.clamp(min, max);
            }
        }
        if reset {
            self.pole_yaw = yaw;
            self.pole_pitch = pitch;
        } else {
            self.pole_yaw += angle_delta(yaw, self.pole_yaw) / s.pre_seek;
            self.pole_pitch += (pitch - self.pole_pitch) / s.pre_seek;
        }
        let length = s.pole_length + s.speed_length * rider.input_a8;
        let (sp, cp) = self.pole_pitch.sin_cos();
        let (sy, cy) = self.pole_yaw.sin_cos();
        let raw = [
            rider.position[0] + s.offset[0] + sy * length * cp,
            rider.position[1] + s.offset[1] - cy * length * cp,
            rider.position[2] + s.offset[2] - sp * length,
        ];
        let target: [f32; 3] = std::array::from_fn(|i| rider.position[i] + s.target_offset[i]);
        let look: [f32; 3] = std::array::from_fn(|i| target[i] - raw[i]);
        let target_yaw = look[1].atan2(look[0]) + s.target_angles[0];
        let target_pitch =
            look[2].atan2((look[0] * look[0] + look[1] * look[1]).sqrt()) + s.target_angles[1];
        let mut roll = 0.0;
        if rider.grounded
            && let Some(divisor) = s.terrain_roll_divisor
        {
            let forward = normalized(look);
            let along = dot(rider.ground_normal, forward);
            let ground_up = normalized(std::array::from_fn(|i| {
                rider.ground_normal[i] - along * forward[i]
            }));
            let vertical_up = normalized([
                -forward[2] * forward[0],
                -forward[2] * forward[1],
                1.0 - forward[2] * forward[2],
            ]);
            let right = [
                forward[1] * vertical_up[2] - forward[2] * vertical_up[1],
                forward[2] * vertical_up[0] - forward[0] * vertical_up[2],
                forward[0] * vertical_up[1] - forward[1] * vertical_up[0],
            ];
            roll = dot(ground_up, vertical_up).clamp(-1.0, 1.0).acos() / divisor;
            if dot(right, ground_up) < 0.0 {
                roll = -roll;
            }
        }
        let angles = [target_yaw, target_pitch, roll + s.target_angles[2]];
        let pose = if let Some(previous) = self.pose {
            let mut average = raw;
            for old in &self.history[..s.post_average] {
                for i in 0..3 {
                    average[i] += old[i];
                }
            }
            average = average.map(|x| x * (1.0 / (s.post_average + 1) as f32));
            CameraPose {
                position: std::array::from_fn(|i| {
                    previous.position[i] + (average[i] - previous.position[i]) / s.post_seek
                }),
                angles: std::array::from_fn(|i| {
                    previous.angles[i]
                        + angle_delta(angles[i], previous.angles[i])
                            / if i == 2 { 25.0 } else { s.target_damping }
                }),
                zoom: previous.zoom + (s.zoom - previous.zoom) / s.target_damping,
            }
        } else {
            self.history.fill(raw);
            CameraPose {
                position: raw,
                angles,
                zoom: s.zoom,
            }
        };
        self.history.copy_within(0..15, 1);
        self.history[0] = raw;
        self.pose = Some(pose);
        pose
    }
}
