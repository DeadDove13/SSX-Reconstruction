//! Rider contact adapter. Original response: 0x0010e6d8/0x0010ee48.
//! Capsule dimensions, equal masses, shove timing and hit gates remain host choices.
use crate::{
    landing::Quality,
    playtest::{Phase, Session, TerrainContact},
};
use bevy::math::Vec3;

#[derive(Default, Clone, Copy)]
pub struct Shove {
    pub side: i8,
    pub age: f32,
    hit: u16,
}
impl Shove {
    pub fn begin(&mut self, side: i8) {
        if self.side == 0 {
            *self = Self {
                side: side.signum(),
                age: 0.,
                hit: 0,
            };
        }
    }
    pub fn tick(&mut self) {
        if self.side != 0 {
            self.age += 1. / 60.;
            if self.age >= 0.65 {
                *self = Self::default();
            }
        }
    }
    pub fn fraction(self) -> f32 {
        (self.age / 0.65).clamp(0., 1.)
    }
}

#[derive(Default)]
pub struct Contacts {
    cooldown: [[f32; 8]; 8],
}
#[derive(Default)]
pub struct Cues {
    pub bump: bool,
    pub shove: bool,
}
impl Contacts {
    pub fn tick(&mut self, riders: &mut [(&mut Session, Vec3)], terrain: &TerrainContact) -> Cues {
        let mut cues = Cues::default();
        for i in 0..riders.len() {
            for j in i + 1..riders.len() {
                self.cooldown[i][j] = (self.cooldown[i][j] - 1. / 60.).max(0.);
                let (left, right) = riders.split_at_mut(j);
                let (a, old_a) = &mut left[i];
                let (b, old_b) = &mut right[0];
                if a.phase != Phase::Running
                    || b.phase != Phase::Running
                    || a.returning.is_some()
                    || b.returning.is_some()
                {
                    continue;
                }
                let hit_a = shove(a, b, j);
                let hit_b = shove(b, a, i);
                cues.shove |= (hit_a || hit_b) && i == 0;
                let start = *old_b - *old_a;
                let end = b.position - a.position;
                let delta = end - start;
                let t = (-start.truncate().dot(delta.truncate())
                    / delta.truncate().length_squared().max(1e-6))
                .clamp(0., 1.);
                let close = start + delta * t;
                if close.z.abs() > 150. || close.truncate().length() > 90. {
                    continue;
                }
                let normal = if close.truncate().length_squared() > 1e-4 {
                    close.with_z(0.).normalize()
                } else {
                    start.with_z(0.).try_normalize().unwrap_or(Vec3::X)
                };
                // Preserve ordering for fast crossings, including a complete pass within one tick.
                let separation = (90. - end.dot(normal)).max(0.) * 0.5;
                shift(a, -normal * separation, terrain);
                shift(b, normal * separation, terrain);
                let closing = (a.velocity - b.velocity).dot(normal).max(0.);
                let impulse = closing * 0.5;
                a.velocity -= normal * impulse;
                b.velocity += normal * impulse;
                if self.cooldown[i][j] == 0. && closing > 100. {
                    // Original 0x0010ee48 impact band (0x002c12c4).
                    if impulse > 530.50287 {
                        a.recover(Quality::Bail);
                        b.recover(Quality::Bail);
                    }
                    cues.bump |= i == 0;
                    self.cooldown[i][j] = 0.25;
                }
            }
        }
        cues
    }
}
fn shift(rider: &mut Session, delta: Vec3, terrain: &TerrainContact) {
    let delta = if rider.grounded {
        delta - rider.normal * delta.dot(rider.normal)
    } else {
        delta
    };
    let t = [30., 70., 110.]
        .into_iter()
        .filter_map(|h| {
            terrain
                .objects
                .sweep(
                    rider.position + Vec3::Z * h,
                    delta,
                    28.,
                    &rider.objects.disabled,
                    &Default::default(),
                )
                .map(|hit| hit.time)
        })
        .fold(1f32, f32::min);
    let next = rider.position + delta * t;
    rider.position = terrain
        .swept_board(rider.position, next)
        .map_or(next, |h| h.0);
}
fn shove(attacker: &mut Session, victim: &mut Session, id: usize) -> bool {
    let s = attacker.shove;
    if !attacker.grounded
        || attacker.recovery.is_some()
        || s.side == 0
        || !(0.10..=0.42).contains(&s.age)
        || s.hit & (1 << id) != 0
    {
        return false;
    }
    let delta = victim.position - attacker.position;
    if delta.z.abs() > 150. || delta.truncate().length() > 158.32506 {
        return false;
    }
    let forward = attacker.forward.with_z(0.).normalize_or_zero();
    let toward = delta.with_z(0.).normalize_or_zero();
    let right = forward.cross(Vec3::Z);
    let angle = (toward.dot(right) * s.side as f32).atan2(toward.dot(forward));
    if !(0.2604379..2.5065284).contains(&angle) {
        return false;
    }
    attacker.shove.hit |= 1 << id;
    victim.velocity += toward * 249.59549;
    victim.recover(Quality::Stagger);
    true
}
