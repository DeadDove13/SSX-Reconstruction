//! Original WFX boost volumes and bonus triggers, connected through a host overlap adapter.
use bevy::math::Vec3;
use std::collections::HashSet;
#[derive(Clone, Debug)]
pub struct Field {
    pub object: usize,
    pub bounds: [Vec3; 2],
    pub kind: u32,
    pub words: Vec<u32>,
    pub sounds: Vec<u32>,
}
pub fn fields(level: &crate::level::Level) -> Vec<Field> {
    let mut result = Vec::new();
    for (object, instance) in level.instances.iter().enumerate() {
        let Some(slot) = level
            .effects
            .scripts
            .slots
            .get(instance.properties.effect_slot as usize)
        else {
            continue;
        };
        for program in slot
            .iter()
            .take(2)
            .filter_map(|i| level.effects.scripts.programs.get(*i as usize))
        {
            for (index, e) in program.iter().enumerate() {
                // Do not look through a condition or delayed command.
                if e.kind != 0 || !matches!(e.words.first(), Some(7 | 15 | 16 | 18 | 21)) {
                    break;
                }
                if e.kind == 0
                    && matches!(e.words.first(), Some(7 | 15 | 16 | 18 | 21))
                    && !result.iter().any(|f: &Field| f.object == object)
                {
                    result.push(Field {
                        object,
                        bounds: instance.properties.bounds.map(Vec3::from_array),
                        kind: e.words[0],
                        words: e.words.clone(),
                        sounds: program[index + 1..]
                            .iter()
                            .take_while(|e| e.kind == 7 && e.words.len() == 1)
                            .map(|e| e.words[0])
                            .collect(),
                    });
                }
            }
        }
    }
    result
}
#[derive(Default, Clone, Debug)]
pub struct State {
    pub multiplier: f32,
    pub super_boost: f32,
    pub sparkle_time: f32,
    rotation_boost: bool,
    pub charge: f32,
    pub active: bool,
    /// Visual duration of the timed start impulse. No charge is consumed.
    pub start_boost: f32,
    pub pickup_serial: u32,
    pub last_pickup: (u16, f32),
    pub message: String,
    pub message_time: f32,
    pub bonus: u32,
    pub bonus_time: f32,
    inside: HashSet<usize>,
    bail_latched: bool,
    lift: Option<usize>,
}
impl State {
    pub fn script_effect(&mut self, kind: u16, value: f32) {
        if !value.is_finite() {
            return;
        }
        match kind {
            13 => {
                self.multiplier = self.multiplier.max(value);
                self.message = format!("{}x MULTIPLIER", value as u32);
            }
            16 => {
                self.super_boost = self.super_boost.max(value);
                self.message = "SUPER BOOST".into();
            }
            17 => {
                self.sparkle_time = self.sparkle_time.max(value);
                self.message = "SUPER TRICKS".into();
            }
            _ => return,
        }
        self.message_time = 2.;
        self.pickup_serial = self.pickup_serial.wrapping_add(1);
        self.last_pickup = (kind, value);
    }

    /// 0x0013ae18 consumes field B0 and scales the starting rotation by 1.6.
    /// The host trick integrator applies that factor throughout this flight.
    pub fn rotation_factor(&mut self, grounded: bool) -> f32 {
        if grounded {
            self.rotation_boost = false;
        } else if self.sparkle_time > 0. {
            self.sparkle_time = 0.;
            self.rotation_boost = true;
        }
        if self.rotation_boost { 1.6 } else { 1. }
    }

    pub fn sparkling(&self) -> bool {
        self.sparkle_time > 0. || self.rotation_boost
    }

    pub fn lift_active(&self) -> bool {
        self.lift.is_some()
    }
    pub fn earn(&mut self, points: u32) {
        self.charge = (self.charge + points as f32 / 6000.).min(1.);
    }
    pub fn tick(&mut self, request: bool, grounded: bool, recovering: bool, dt: f32) {
        if grounded && !recovering {
            self.bail_latched = false;
        }
        self.active = request && grounded && !recovering && self.charge > 0.;
        if self.active {
            self.charge = (self.charge - dt * crate::physics::BOOST_DRAIN_PER_SECOND).max(0.);
        }
        self.super_boost = (self.super_boost - dt).max(0.);
        self.start_boost = (self.start_boost - dt).max(0.);
        self.sparkle_time = (self.sparkle_time - dt).max(0.);
        self.message_time = (self.message_time - dt).max(0.);
        self.bonus_time = (self.bonus_time - dt).max(0.);
        if self.bonus_time == 0. {
            self.bonus = 0;
        }
    }
    pub fn sweep(
        &mut self,
        from: Vec3,
        to: Vec3,
        velocity: &mut Vec3,
        fields: &[Field],
    ) -> Vec<crate::object_rules::ObjectEvent> {
        let mut events = Vec::new();
        let mut inside = HashSet::new();
        // ZBoost (0x00128450) latches contact until the recorded exit Z.
        if let Some(id) = self.lift {
            if let Some(f) = fields.iter().find(|f| f.object == id && f.kind == 18) {
                let exit = f32::from_bits(f.words[6]);
                if to.z < exit {
                    lift_velocity(f, velocity, 0.01);
                } else {
                    self.lift = None;
                }
            } else {
                self.lift = None;
            }
        }
        for f in fields {
            let min = f.bounds[0] - Vec3::splat(28.);
            let max = f.bounds[1] + Vec3::splat(28.);
            let at_end = to.cmpge(min).all() && to.cmple(max).all();
            if at_end {
                inside.insert(f.object);
            }
            // LapBoost (0x00127918) applies force on every overlapping tick.
            // The race-lap gate is not yet represented by the host session.
            if f.kind == 15 && at_end {
                lift_velocity(f, velocity, 1. / 60.);
                velocity.x *= 0.005;
                velocity.y *= 0.005;
            }
            if self.inside.contains(&f.object) || !crosses(from, to, min, max) {
                continue;
            }
            let value = |i: usize| f.words.get(i).copied().map(f32::from_bits).unwrap_or(0.);
            if f.kind == 18 && f.words.len() >= 7 {
                self.lift = Some(f.object);
                lift_velocity(f, velocity, 0.01);
                self.message = "LIFT".into();
            } else if f.kind == 15 {
                self.message = "LIFT".into();
            } else if f.kind == 21 {
                self.bonus = f.words.get(2).copied().unwrap_or(0);
                self.bonus_time = value(3).max(0.);
                self.message = format!("BONUS LINE  +{}", self.bonus);
            } else {
                // Constructors 0x00127240, 0x001276f8, 0x00128270 use metres/s * 100.
                // Impulse application and per-entry gating are provisional host behavior.
                let (speed, direction) = if matches!(f.kind, 7 | 16) {
                    (value(4) * 100., Vec3::new(value(5), value(6), value(7)))
                } else {
                    (value(2) * 100., Vec3::new(value(3), value(4), value(5)))
                };
                if direction.length_squared() > 0.0001 && speed.is_finite() {
                    *velocity = direction.normalize() * speed.max(0.);
                }
                self.charge = 1.;
                self.message = "BOOST!".into();
            }
            self.message_time = 2.;
            events.extend(
                f.sounds
                    .iter()
                    .map(|id| crate::object_rules::ObjectEvent::Sound {
                        object: f.object,
                        id: *id,
                    }),
            );
        }
        self.inside = inside;
        events
    }
    pub fn land(&mut self, points: u32) -> u32 {
        if points == 0 {
            return 0;
        }
        let bonus = std::mem::take(&mut self.bonus)
            .saturating_add((points as f32 * (self.multiplier.max(1.) - 1.)) as u32);
        self.multiplier = 1.;
        self.bonus_time = 0.;
        self.earn(points.saturating_add(bonus));
        bonus
    }
    pub fn bail(&mut self) {
        if !self.bail_latched {
            self.charge *= 0.5;
            self.bail_latched = true;
        }
        self.multiplier = 1.;
        self.bonus = 0;
        self.bonus_time = 0.;
        self.active = false;
    }
}
fn lift_velocity(f: &Field, velocity: &mut Vec3, step: f32) {
    if f.words.len() < 6 {
        return;
    }
    let gain = f32::from_bits(f.words[1]);
    let speed = f32::from_bits(f.words[2]) * 100.;
    let direction = Vec3::new(
        f32::from_bits(f.words[3]),
        f32::from_bits(f.words[4]),
        f32::from_bits(f.words[5]),
    );
    let deficit = speed - velocity.dot(direction);
    if deficit > 0. {
        *velocity += direction * (deficit * gain * step);
    }
    if f.kind == 18 {
        velocity.x = 0.;
        velocity.y = 0.;
    }
}
pub(crate) fn crosses(a: Vec3, b: Vec3, min: Vec3, max: Vec3) -> bool {
    let d = b - a;
    let mut enter = 0f32;
    let mut leave = 1f32;
    for axis in 0..3 {
        if d[axis].abs() < 1e-6 {
            if a[axis] < min[axis] || a[axis] > max[axis] {
                return false;
            }
        } else {
            let x = (min[axis] - a[axis]) / d[axis];
            let y = (max[axis] - a[axis]) / d[axis];
            enter = enter.max(x.min(y));
            leave = leave.min(x.max(y));
            if enter > leave {
                return false;
            }
        }
    }
    true
}
#[cfg(test)]
mod tests {
    use super::*;
    #[test]
    fn pickups_multiply_one_landing_and_boost_one_flight() {
        let mut s = State::default();
        s.script_effect(13, 5.);
        s.script_effect(13, 2.);
        assert_eq!(s.land(1000), 4000);
        assert_eq!(s.land(1000), 0);
        s.script_effect(16, 3.);
        s.tick(false, true, false, 1.);
        assert_eq!(s.super_boost, 2.);
        s.script_effect(17, 10.);
        assert_eq!(s.rotation_factor(true), 1.);
        assert_eq!(s.rotation_factor(false), 1.6);
        assert_eq!(s.rotation_factor(false), 1.6);
        assert_eq!(s.rotation_factor(true), 1.);
        assert_eq!(s.rotation_factor(false), 1.);
    }
    #[test]
    fn swept_boost_cannot_be_skipped_or_farmed_while_inside() {
        let f = Field {
            object: 1,
            bounds: [Vec3::splat(-10.), Vec3::splat(10.)],
            kind: 7,
            words: vec![7, 1, 0, 0, 40f32.to_bits(), 0, 1f32.to_bits(), 0],
            sounds: vec![],
        };
        let mut s = State::default();
        let mut v = Vec3::ZERO;
        s.sweep(Vec3::new(0., -200., 0.), Vec3::ZERO, &mut v, &[f.clone()]);
        assert_eq!(v, Vec3::Y * 4000.);
        s.charge = 0.2;
        s.sweep(Vec3::ZERO, Vec3::ZERO, &mut v, &[f]);
        assert_eq!(s.charge, 0.2);
    }
    #[test]
    fn boost_drains_only_when_usable_and_bonus_expires() {
        let mut s = State::default();
        s.earn(6000);
        s.tick(true, false, false, 1.);
        assert_eq!(s.charge, 1.);
        s.tick(true, true, true, 1.);
        assert_eq!(s.charge, 1.);
        s.tick(true, true, false, 1.);
        assert!(s.active && s.charge < 1.);
        s.bonus = 1000;
        s.bonus_time = 0.5;
        s.tick(false, true, false, 1.);
        assert_eq!(s.bonus, 0);
    }
}
