//! Native rider physics recovered from SLUS_200.95.
//!
//! Coordinates use the original Z-up units. No renderer scale is applied here.
//! This module contains arithmetic routines, not the complete rider state machine.
//! See docs/PHYSICS.md for source addresses and validation limits.

use serde::{Deserialize, Serialize};
mod recovered {
    include!("physics_constants.rs");
}
use recovered::*;

/// The state handlers multiply this value by rider field +0xa4.
pub const BASE_STEP_SECONDS: f32 = f32::from_bits(0x3c888889);

/// Ground-handler bank contribution (0x00113040 and 0x0013fe28..0x0013ff60).
/// Returns normal and lateral components. Positive input banks toward normal x forward.
/// Uses the original sine/cosine approximation.
pub fn banked_contact_force(normal: f32, gravity: f32, steer: f32) -> (f32, f32) {
    let angle = steer.clamp(-1., 1.) * C_2C145C;
    let (sin, cos) = original_sin_cos(angle);
    let bank_load = normal.min(gravity + gravity) / cos;
    (normal - bank_load + cos * bank_load, sin * bank_load)
}

/// Scalar steering section of 0x0013fcb0. Positive input turns toward normal x forward.
/// Ratios come from the current velocity, board basis, and fall-line basis (+0x230).
/// Zero speed is guarded instead of reproducing PS2 exceptions.
pub fn ground_turn_angle(
    steer: f32,
    crouch: f32,
    style: i32,
    speed: f32,
    forward_ratio: f32,
    slip_sine: f32,
    grade_ratio: f32,
    dt: f32,
) -> f32 {
    if speed <= f32::EPSILON {
        return 0.;
    }
    let (shape, angle) = match style {
        2 => (C_2C2170, C_2C2174),
        0 => (C_2C2178, C_2C217C),
        _ => (C_2C2180, C_2C2184),
    };
    let mut error = -original_asin(slip_sine.clamp(C_2C2168, C_2C216C))
        + ((shape * 0.5 * (1. - steer * steer) + 1.) * steer * angle) / (crouch * C_2C2188 + 1.);
    if forward_ratio < 0. {
        error = -error;
    }
    let speed_response = (speed * C_2C218C * speed * dt).min(1.);
    let grade_response =
        (((speed / C_2C2190).min(1.) * (0.5 - grade_ratio.abs()) * 40.).max(0.) + C_2C2194).min(1.);
    let input_response = if error > 0. { steer } else { -steer };
    error * speed_response * grade_response.max(input_response)
}

/// Polynomial and quadrant selection from 0x00218128.
pub fn original_sin_cos(mut angle: f32) -> (f32, f32) {
    let scaled = angle * C_2C3A38 + if angle < 0. { -0.5 } else { 0.5 };
    let quadrant = scaled as i32;
    angle -= quadrant as f32 * C_2C3A3C;
    let square = angle * angle;
    let sin = ((((square * C_2C3A40 + C_2C3A44) * square + C_2C3A48) * square + C_2C3A4C) * square
        + 1.)
        * angle;
    let cos = (1. - sin * sin).sqrt();
    match quadrant & 3 {
        0 => (sin, cos),
        1 => (cos, -sin),
        2 => (-sin, -cos),
        _ => (-cos, sin),
    }
}

/// Polynomial branches from 0x00218410.
pub fn original_asin(value: f32) -> f32 {
    let polynomial = |square: f32| {
        square * (C_2C58B8 + square * (C_2C58BC + square * (C_2C58C0 + square * C_2C58C4)))
    };
    if value < C_2C3A98 {
        let square = 1. - value * value;
        square.sqrt() * (polynomial(square) + 1.) + C_2C3A9C
    } else if value <= C_2C3AA0 {
        polynomial(value * value) * value + value
    } else {
        let square = 1. - value * value;
        C_2C3AA4 - square.sqrt() * (polynomial(square) + 1.)
    }
}

#[derive(Default, Clone, Copy, Debug)]
pub struct InputSignal {
    pub value: f32,
    pub rate: f32,
    pub target: f32,
}
impl InputSignal {
    fn advance(&mut self, step: f32) {
        let change = self.rate * step;
        self.value = if self.target + change < self.value {
            self.value - change
        } else if self.value < self.target - change {
            self.value + change
        } else {
            self.target
        };
    }
}

/// Input targets (0x001110f0/0x00111248) and slew section of 0x00105870.
#[derive(Default, Clone, Copy, Debug)]
pub struct GroundInputs {
    pub steer: InputSignal,
    pub brake: InputSignal,
    pub crouch: InputSignal,
}
impl GroundInputs {
    pub fn tick(
        &mut self,
        steer: f32,
        crouch: f32,
        brake: f32,
        speed: f32,
        style: i32,
        surface: u32,
        boost: bool,
    ) {
        let mut target = if boost {
            steer
        } else {
            steer.clamp(C_2C1368, C_2C136C)
        };
        let limit = match style {
            2 => C_2C1370,
            0 => C_2C1378,
            _ => C_2C1374,
        };
        let fraction = speed / limit;
        if fraction < 1. {
            target *= fraction;
        }
        self.steer.target = target;
        self.steer.rate = ((target - self.steer.value).abs() * C_2C137C).clamp(C_2C1380, C_2C1384);
        if surface == 3 || surface == 4 {
            self.steer.rate *= C_2C1388;
        }
        // 0x00111248 first releases the conflicting posture before selecting another.
        if crouch > 0. && self.brake.value != 0. {
            self.brake.target = 0.;
            self.brake.rate = C_2C1398;
        } else if brake != 0. && self.crouch.value > 0. {
            self.crouch.target = 0.;
            self.crouch.rate = C_2C139C;
        } else {
            self.crouch.target = if crouch > 0. && self.brake.value != 0. {
                0.
            } else {
                crouch
            };
            self.crouch.rate =
                (self.crouch.target - self.crouch.value).abs().max(C_2C13A0) * C_2C13A4;
            self.brake.target = if brake != 0. && self.crouch.value > 0. {
                0.
            } else {
                brake
            };
            if (self.steer.target < 0. && self.brake.target > 0.)
                || (self.steer.target > 0. && self.brake.target < 0.)
            {
                self.brake.target = -brake;
            }
            let distance = (self.brake.target - self.brake.value).abs().max(C_2C13A8);
            self.brake.rate = if self.brake.target == 0. {
                C_2C13AC - distance
            } else {
                distance
            } * C_2C13B0;
        }
        self.brake.advance(C_2C1088);
        self.crouch.advance(C_2C108C);
        self.steer.advance(C_2C1090);
    }
}

/// Surface-depth transition limits in 0x00105870.
pub fn contact_depths(shallow: &mut f32, deep: &mut f32, surface: &Surface) {
    *shallow += (surface.coefficient(6) - *shallow).clamp(-C_2C10C0, C_2C10C0);
    *deep += (surface.coefficient(7) - *deep).clamp(-C_2C10C4, C_2C10C4);
}

/// Contact projection at 0x00140558. Retains speed and some normal velocity.
pub fn ground_velocity(velocity: [f32; 3], normal: [f32; 3], surface: u32) -> [f32; 3] {
    if surface == 3 || surface == 4 {
        return velocity;
    }
    let dot = |a: [f32; 3], b: [f32; 3]| (a[0] * b[0] + a[1] * b[1]) + a[2] * b[2];
    let speed = dot(velocity, velocity).sqrt();
    let inward = dot(velocity, normal) * C_2C2198;
    let result = std::array::from_fn(|i| velocity[i] - normal[i] * inward);
    let length = dot(result, result).sqrt();
    if length == 0. {
        result
    } else {
        result.map(|v| v * (speed / length))
    }
}

/// Persistent w/x/y/z orientation from 0x001129e8 and 0x00112bd8.
#[derive(Clone, Copy, Debug)]
pub struct GroundOrientation(pub [f32; 4]);
impl GroundOrientation {
    pub fn from_heading(heading: f32) -> Self {
        let (s, c) = original_sin_cos((heading - std::f32::consts::FRAC_PI_2) * 0.5);
        Self([c, 0., 0., s])
    }
    pub fn rotate(&mut self, angle: f32, axis: [f32; 3]) {
        let (s, c) = original_sin_cos(angle * 0.5);
        let [a, b, d] = axis.map(|v| v * s);
        let [w, x, y, z] = self.0;
        self.0 = [
            ((c * w - a * x) - b * y) - d * z,
            ((c * x + a * w) + b * z) - d * y,
            ((c * y + b * w) + d * x) - a * z,
            ((c * z + d * w) + a * y) - b * x,
        ];
        let [w, x, y, z] = self.0;
        let length = (((x * x + y * y) + z * z) + w * w).sqrt();
        self.0 = if length == 0. {
            [1., 0., 0., 0.]
        } else {
            self.0.map(|v| v * (1. / length))
        };
    }
    fn vector(self, v: [f32; 3]) -> [f32; 3] {
        let [w, x, y, z] = self.0;
        let cross = |a: [f32; 3], b: [f32; 3]| {
            [
                a[1] * b[2] - a[2] * b[1],
                a[2] * b[0] - a[0] * b[2],
                a[0] * b[1] - a[1] * b[0],
            ]
        };
        let first = cross([x, y, z], v);
        let second = cross([x, y, z], first);
        std::array::from_fn(|i| (((w + w) * first[i] + v[i]) + second[i]) + second[i])
    }
    pub fn forward(self) -> [f32; 3] {
        self.vector([0., 1., 0.])
    }
    pub fn align_contact(&mut self, normal: [f32; 3], surface: u32) {
        if matches!(surface, 6 | 9 | 10) {
            return;
        } // Specialized ride states remain outside this handler.
        let up = self.vector([0., 0., 1.]);
        let mut target = [normal[0], normal[1], normal[2] + normal[2] * 0.5];
        let length = (target[0] * target[0] + target[1] * target[1] + target[2] * target[2]).sqrt();
        if length == 0. {
            return;
        }
        target = target.map(|v| v / length);
        let axis = [
            target[1] * up[2] - target[2] * up[1],
            target[2] * up[0] - target[0] * up[2],
            target[0] * up[1] - target[1] * up[0],
        ];
        let length = (axis[0] * axis[0] + axis[1] * axis[1] + axis[2] * axis[2]).sqrt();
        if length > C_2C219C {
            self.rotate(
                -original_asin(length.min(C_2C21A0)) * C_2C21A4,
                axis.map(|v| v / length),
            );
        }
    }
}

pub const GRADE_EPSILON: f32 = C_2C1424;

/// Three boost-effort bands from 0x001099f0. Charge accounting is separate.
pub fn boost_effort(active: bool, charge: f32) -> f32 {
    if !active || charge <= 0. {
        0.
    } else if charge > C_2C11C4 {
        1.
    } else if charge > C_2C11CC {
        C_2C11D0
    } else {
        C_2C11D8
    }
}

#[derive(Debug, Clone, Copy, PartialEq, Serialize, Deserialize)]
pub struct Motion {
    pub position: [f32; 4],
    pub velocity: [f32; 4],
}

fn add(a: [f32; 4], b: [f32; 4]) -> [f32; 4] {
    std::array::from_fn(|i| a[i] + b[i])
}
fn scale(a: [f32; 4], k: f32) -> [f32; 4] {
    a.map(|v| v * k)
}
fn air_acceleration(v: [f32; 4]) -> [f32; 4] {
    [
        0.0 + v[0] * C_2C14D0,
        0.0 + v[1] * C_2C14D0,
        if v[2] > 0.0 { C_2C14CC } else { C_2C14C8 } + 0.0,
        0.0,
    ]
}

/// Port of 0x001148c8. Gravity is selected again at each RK4 stage.
/// Preserve all four lanes, including the original homogeneous coordinate.
pub fn step_air(motion: &mut Motion, dt: f32) {
    let v = motion.velocity;
    let p1 = scale(v, dt);
    let v1 = scale(air_acceleration(v), dt);
    let mid1 = add(v, scale(v1, 0.5));
    let p2 = scale(mid1, dt);
    let v2 = scale(air_acceleration(mid1), dt);
    let mid2 = add(v, scale(v2, 0.5));
    let p3 = scale(mid2, dt);
    let v3 = scale(air_acceleration(mid2), dt);
    let end = add(v, v3);
    let p4 = scale(end, dt);
    let v4 = scale(air_acceleration(end), dt);
    motion.position = add(
        add(motion.position, scale(add(p1, p4), 1.0 / 6.0)),
        scale(add(p2, p3), 1.0 / 3.0),
    );
    motion.velocity = add(
        add(v, scale(add(v1, v4), 1.0 / 6.0)),
        scale(add(v2, v3), 1.0 / 3.0),
    );
}

/// Original 0x60-byte surface record. Some fields contain integers.
#[derive(Debug, Clone, Copy)]
pub struct Surface {
    pub words: [u32; 24],
}
impl Surface {
    pub fn coefficient(&self, index: usize) -> f32 {
        f32::from_bits(self.words[index])
    }
}

/// Initial values written by 0x0021aa98. Surface names remain unresolved.
pub fn original_surfaces() -> [Surface; 18] {
    SURFACE_WORDS.map(|words| Surface { words })
}

/// Only the rider fields read by the four recovered force routines.
/// Offset names retain uncertainty about controls that are not yet traced.
#[derive(Debug, Clone, Copy, Serialize, Deserialize)]
pub struct ForceState {
    pub velocity: [f32; 4],     // +0xd0
    pub board_axis: [f32; 4],   // +0x110
    pub speed: f32,             // +0xe0
    pub heading: f32,           // +0x140
    pub reference_heading: f32, // +0x2e0
    pub stance: i32,            // +0x144
    pub board_style: i32,       // +0x344
    pub motion_state: i32,      // +0x350
    pub animation_state: i32,   // *(+0x6cf4) +8
    pub input_a8: f32,
    pub input_ac: f32,
    pub input_18c: f32,
    pub input_198: f32,
    pub input_1a4: f32,
    pub ground_forward_z: f32, // +0x298
    pub surface_kind: u32,     // +0x210
    pub height: f32,           // +0x14c
    pub shallow_depth: f32,    // +0x214
    pub deep_depth: f32,       // +0x218
    pub stats: RiderStats,     // *(+0x394)
}

#[derive(Debug, Clone, Copy, Serialize, Deserialize)]
pub struct RiderStats {
    pub stat_0e: u8,
    pub stat_11: u8,
    pub stat_13: u8,
    pub stat_19: u8,
    pub preferred_stance: i32, // +0x28
}

/// Port of 0x0013f678. Positive height is above the contact reference.
pub fn normal_force(height: f32, normal_velocity: f32, r: &ForceState, s: &Surface) -> f32 {
    let gravity = s.coefficient(0);
    let damping = s.coefficient(8);
    if height > 0.0 {
        let mut force = -(gravity / 30.0) * height;
        if normal_velocity > 0.0 {
            force += -damping * normal_velocity;
        }
        force
    } else {
        let spring = if height > -r.shallow_depth {
            (-gravity * height) / r.shallow_depth
        } else {
            let clamped = if -r.deep_depth < height {
                height
            } else {
                -r.deep_depth
            };
            let displacement = clamped + r.shallow_depth;
            gravity * (1.0 - (displacement + displacement) / (r.deep_depth - r.shallow_depth))
        };
        spring + -damping * normal_velocity
    }
}

/// Port of 0x0013f758. Includes heading, speed, and animation gates.
pub fn drive_force(r: &ForceState, s: &Surface) -> f32 {
    if r.input_18c > 0.0 || r.motion_state == 0xb || r.motion_state == 0xc {
        return 0.0;
    }
    let products: [f32; 4] = std::array::from_fn(|i| r.velocity[i] * r.board_axis[i]);
    if ((products[0] + products[1]) + products[2]) + products[3] < 0.0 {
        return 0.0;
    }
    let difference = r.heading - r.reference_heading;
    let turns = difference * C_2C20BC + 0.5;
    let mut whole_turns = (turns as i32) as f32;
    if turns < whole_turns {
        whole_turns -= 1.0;
    }
    let mut heading = (C_2C20C4 - (difference - whole_turns * C_2C20C0).abs()) / C_2C20C8;
    if heading >= 1.0 {
        heading = 1.0;
    }
    let mut effort = r.input_a8;
    if r.input_ac > 0.0 && effort < heading * 5.5 {
        effort = heading * 5.5;
    }
    let mut result = 0.0;
    let turn = C_2C20CC - r.input_1a4.abs();
    if effort > 0.0 && turn > 0.0 {
        let slope = if r.ground_forward_z < 0.0 {
            C_2C20D0
        } else {
            r.ground_forward_z * C_2C20D4 + C_2C20D8
        };
        result = 0.0 + (effort * turn) * slope;
    }
    let headroom = s.coefficient(10) * C_2C20DC - r.speed;
    let headroom = if headroom < C_2C20E0 {
        headroom
    } else {
        C_2C20E0
    };
    if headroom > 0.0 {
        let stat = r.stats.stat_0e as f32 * C_2C20E4 * C_2C20E8 + C_2C20EC;
        let regular = if heading >= 0.0 {
            heading * stat * headroom + 0.0
        } else {
            0.0
        };
        let animation = if r.animation_state == 0x50 {
            stat * C_2C20F0 * headroom + 0.0
        } else {
            0.0
        };
        result += if animation < regular {
            regular
        } else {
            animation
        };
    }
    s.coefficient(11) * result
}

/// Port of 0x0013f9c8. The multiplication order follows the instructions.
pub fn longitudinal_force(velocity: f32, load: f32, r: &ForceState, s: &Surface) -> f32 {
    let load = if load < 1.0 { 1.0 } else { load };
    let mut a = r.stats.stat_19 as f32 * C_2C20F4 * C_2C2100 + C_2C2108;
    let mut b = r.stats.stat_0e as f32 * C_2C20F8 * C_2C2100 + C_2C210C;
    let mut c = r.stats.stat_11 as f32 * C_2C20FC * C_2C2100 + C_2C2110;
    if r.stance != r.stats.preferred_stance && r.board_style != 1 {
        let factor = if r.board_style == 0 {
            C_2C2118
        } else {
            C_2C2114
        };
        a *= factor;
        b *= factor;
        c *= factor;
    }
    let depth = if r.surface_kind == 3 || r.surface_kind == 4 {
        0.5 - r.height / r.deep_depth
    } else {
        1.0
    };
    let speed = velocity.abs() * C_2C2104;
    let linear = (load * s.coefficient(1)) * b;
    let quadratic = load * s.coefficient(2);
    let cubic = (load * s.coefficient(3)) * a;
    let posture = (1.0 - r.input_198) * C_2C2120;
    let brake = (((r.input_a8 + 1.0) * C_2C211C) * r.input_18c) * r.input_18c * c;
    (-velocity * depth) * (((linear + posture) + brake) + speed * (quadratic + speed * cubic))
}

/// Port of 0x0013fb58. Preserve the original piecewise speed response.
pub fn lateral_force(
    velocity: f32,
    forward_velocity: f32,
    steer: f32,
    r: &ForceState,
    s: &Surface,
) -> f32 {
    let speed = forward_velocity.abs();
    let response = if speed < C_2C2124 {
        (speed - 0.0) * C_2C2128 + C_2C212C
    } else if speed < C_2C2130 {
        (speed - C_2C2124) * C_2C2134 + C_2C2138
    } else {
        (speed - C_2C2130) * C_2C2140 + C_2C213C
    };
    let mut lateral = velocity * response;
    let turn = steer.abs() * C_2C2144 + 0.0;
    if turn >= 1.0 {
        lateral *= turn;
    }
    let mut stat = r.stats.stat_13 as f32 * C_2C2148 * C_2C214C + C_2C2150;
    if r.stance != r.stats.preferred_stance && r.board_style != 1 {
        stat *= if r.board_style == 0 {
            C_2C2158
        } else {
            C_2C2154
        };
    }
    let mut result = (lateral * -s.coefficient(4)) * stat;
    if r.input_a8 > 0.0 {
        result *= 1.0 / (r.input_a8 * 0.0 + 1.0);
    }
    result
}
