//! Landing response at the host contact boundary. This is not the complete PS2 rider state machine.
#[derive(Clone, Copy, Debug, Default, PartialEq, Eq, PartialOrd, Ord)]
pub enum Quality {
    #[default]
    Clean,
    Stagger,
    Bail,
}
/// Impact bands from 0x00110cb0, constants 0x002c1344 and 0x002c134c.
/// The caller supplies the collision response magnitude, not incoming speed.
pub fn impact(speed: f32, alignment: f32) -> Quality {
    let limit = 833.3333 * alignment.clamp(0., 1.);
    if speed > limit + 1944.4443 {
        Quality::Bail
    } else if speed > limit {
        Quality::Stagger
    } else {
        Quality::Clean
    }
}
/// Upright board contact using the response magnitude in 0x00110940.
/// At 0x00110b1c..38, the response is half the inward speed, with a
/// 55.555553 floor. Passing full speed made ordinary landings too severe.
/// Board orientation is evaluated separately by the host trick adapter.
#[cfg(feature = "viewer")]
pub fn contact(velocity: bevy::math::Vec3, normal: bevy::math::Vec3) -> Quality {
    let inward = (-velocity.dot(normal)).max(0.);
    impact((inward * 0.5).max(55.555553), 1.)
}
/// Temporary orientation gates, pending the full 0x00114f78 state adapter.
pub fn orientation(spin: f32, flip: f32) -> Quality {
    let flip_error = ((flip + 180.).rem_euclid(360.) - 180.).abs();
    let spin_error = ((spin + 90.).rem_euclid(180.) - 90.).abs();
    if flip_error > 75. {
        Quality::Bail
    } else if flip_error > 35. || spin_error > 60. {
        Quality::Stagger
    } else {
        Quality::Clean
    }
}
#[derive(Clone, Copy, Debug)]
pub struct Recovery {
    pub quality: Quality,
    pub elapsed: f32,
    pub duration: f32,
}
impl Recovery {
    pub fn new(quality: Quality) -> Self {
        Self {
            quality,
            elapsed: 0.,
            duration: if quality == Quality::Bail { 1.8 } else { 0.8 },
        }
    }
    pub fn fraction(self) -> f32 {
        (self.elapsed / self.duration).clamp(0., 1.)
    }
}
#[cfg(test)]
mod tests {
    use super::*;
    #[test]
    fn impact_and_orientation_distinguish_staggers_from_bails() {
        assert_eq!(impact(250., 1.), Quality::Clean);
        assert_eq!(impact(1800., 1.), Quality::Stagger);
        assert_eq!(impact(3000., 1.), Quality::Bail);
        assert_eq!(orientation(180., 360.), Quality::Clean);
        assert_eq!(orientation(65., 0.), Quality::Stagger);
        assert_eq!(orientation(0., 180.), Quality::Bail);
    }
}
