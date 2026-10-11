//! Host camera clearance. The original CM2 follower supplies the desired pose.
use crate::collision::CollisionWorld;
use bevy::math::Vec3;
use std::collections::HashSet;

#[derive(Default)]
pub struct Clearance {
    distance: Option<f32>,
    correction: Vec3,
    previous_offset: Option<Vec3>,
}

impl Clearance {
    /// Retract immediately at a blocker, then extend smoothly when it clears.
    /// Cast after interpolation and smoothing so neither can cross terrain.
    pub fn constrain(
        &mut self,
        geometry: &CollisionWorld,
        target: Vec3,
        desired: Vec3,
        radius: f32,
        disabled: &HashSet<usize>,
        dt: f32,
    ) -> Vec3 {
        // 0x00161ed8 removes the blocked component along the contact normal,
        // checks the projected segment again, then offsets away from the surface.
        // Use the host swept sphere so the whole near plane retains clearance.
        let mut projected = desired;
        for _ in 0..4 {
            let delta = projected - target;
            let Some(hit) = geometry.sweep(target, delta, radius, disabled, &HashSet::new()) else {
                break;
            };
            let contact = target + delta * hit.time;
            let penetration = (projected - contact).dot(hit.normal);
            if penetration >= 0. {
                break;
            }
            projected += hit.normal * (-penetration + 2.);
        }
        // A close bank can leave the plane projection beside the rider. Search
        // above it on the rear hemisphere before accepting a short pole.
        let pole = desired - target;
        let minimum = pole.length() * 0.7;
        if projected.distance_squared(desired) > 1. && projected.distance(target) < minimum {
            let rear = Vec3::new(pole.x, pole.y, 0.).normalize_or_zero();
            let length = pole.length();
            let mut best = projected;
            for degrees in [15f32, 25., 35., 45., 55., 65., 75., 80.] {
                let angle = degrees.to_radians();
                let candidate = target + (rear * angle.cos() + Vec3::Z * angle.sin()) * length;
                let clear = geometry.camera_position(target, candidate, radius, disabled);
                if clear.distance(target) > best.distance(target) {
                    best = clear;
                }
                if clear.distance(candidate) < 2. {
                    break;
                }
            }
            projected = best;
        }
        // A collision must never select a longer camera preset.
        projected = target + (projected - target).clamp_length_max(pole.length());
        let required = projected - desired;
        // Apply more clearance immediately. Ease back only after the bank clears.
        if required.length_squared() >= self.correction.length_squared()
            || required.dot(self.correction) < 0.
        {
            self.correction = required;
        } else {
            let previous = target + self.previous_offset.unwrap_or(desired - target);
            self.correction = previous.lerp(projected, 1. - (-dt / 0.3).exp()) - desired;
        }
        let desired = desired + self.correction;
        let safe = geometry.camera_position(target, desired, radius, disabled);
        let allowed = safe.distance(target);
        let distance = self.distance.map_or(allowed, |old| {
            if allowed < old {
                allowed
            } else {
                old + (allowed - old) * (1. - (-dt / 0.3).exp())
            }
        });
        self.distance = Some(distance);
        let result = geometry.camera_position(
            target,
            target + (desired - target).normalize_or_zero() * distance,
            radius,
            disabled,
        );
        self.previous_offset = Some(result - target);
        result
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    #[test]
    fn small_near_preset_obstruction_does_not_extend_camera_to_far_preset() {
        let mut geometry = CollisionWorld::default();
        for t in [
            [
                [-1000., -150., 0.],
                [1000., -150., 0.],
                [1000., -150., 180.],
            ],
            [
                [-1000., -150., 0.],
                [1000., -150., 180.],
                [-1000., -150., 180.],
            ],
        ] {
            geometry.add(t.map(Vec3::from_array), None);
        }
        let target = Vec3::Z * 120.;
        let desired = target - Vec3::Y * 180.;
        let safe = Clearance::default().constrain(
            &geometry,
            target,
            desired,
            15.,
            &HashSet::new(),
            1. / 60.,
        );
        assert!(
            safe.distance(target) <= 181.,
            "Near preset expanded: {safe:?}"
        );
    }
    #[test]
    fn terrain_beyond_camera_does_not_move_it_or_change_near_preset() {
        let mut geometry = CollisionWorld::default();
        geometry.add(
            [
                Vec3::new(-1000., -600., -1000.),
                Vec3::new(1000., -600., -1000.),
                Vec3::new(0., -600., 2000.),
            ],
            None,
        );
        let target = Vec3::Z * 120.;
        for distance in [180., 500.] {
            let desired = target - Vec3::Y * distance;
            let actual = Clearance::default().constrain(
                &geometry,
                target,
                desired,
                30.,
                &HashSet::new(),
                1. / 60.,
            );
            assert!(actual.distance(desired) < 0.01);
        }
    }
    #[test]
    fn close_bank_behind_rider_does_not_collapse_the_camera() {
        let mut geometry = CollisionWorld::default();
        for t in [
            [[-1000., -90., 0.], [1000., -90., 0.], [1000., -90., 220.]],
            [
                [-1000., -90., 0.],
                [1000., -90., 220.],
                [-1000., -90., 220.],
            ],
        ] {
            geometry.add(t.map(Vec3::from_array), None);
        }
        let target = Vec3::new(0., 0., 120.);
        let safe = Clearance::default().constrain(
            &geometry,
            target,
            Vec3::new(0., -500., 220.),
            30.,
            &HashSet::new(),
            1. / 60.,
        );
        assert!(
            safe.distance(target) > 250.,
            "Camera collapsed into rider: {safe:?}"
        );
        assert!(
            geometry
                .sweep(target, safe - target, 29., &HashSet::new(), &HashSet::new())
                .is_none()
        );
    }
    #[test]
    fn bank_obstruction_preserves_follow_distance() {
        let mut geometry = CollisionWorld::default();
        for t in [
            [
                [-2000., -2000., 0.],
                [2000., -2000., 0.],
                [2000., 2000., 0.],
            ],
            [
                [-2000., -2000., 0.],
                [2000., 2000., 0.],
                [-2000., 2000., 0.],
            ],
        ] {
            geometry.add(t.map(Vec3::from_array), None);
        }
        let target = Vec3::Z * 100.;
        let desired = Vec3::new(0., -500., -250.);
        let safe = Clearance::default().constrain(
            &geometry,
            target,
            desired,
            30.,
            &HashSet::new(),
            1. / 60.,
        );
        assert!(
            safe.distance(target) > 300.,
            "Camera collapsed into rider: {safe:?}"
        );
        assert!(safe.z >= 30.);
    }
    #[test]
    fn terrain_clearance_and_extension_remain_smooth() {
        let mut geometry = CollisionWorld::default();
        for t in [
            [
                [-2000., -2000., 0.],
                [2000., -2000., 0.],
                [2000., 2000., 0.],
            ],
            [
                [-2000., -2000., 0.],
                [2000., 2000., 0.],
                [-2000., 2000., 0.],
            ],
        ] {
            geometry.add(t.map(Vec3::from_array), None);
        }
        let target = Vec3::Z * 100.;
        let desired = Vec3::new(0., -300., -100.);
        let mut clearance = Clearance::default();
        let safe = clearance.constrain(&geometry, target, desired, 25., &HashSet::new(), 1. / 60.);
        assert!(safe.z >= 25., "Camera crossed ground: {safe:?}");
        let clear = target - Vec3::Y * 300.;
        let extended =
            clearance.constrain(&geometry, target, clear, 25., &HashSet::new(), 1. / 60.);
        assert!(extended.z >= 25.);
        assert!(
            extended.distance(safe) < 40.,
            "Clearance return must be smooth"
        );
        for i in 0..360 {
            let angle = (i as f32).to_radians();
            let desired =
                target + Vec3::new(angle.cos() * 300., angle.sin() * 300., angle.sin() * 200.);
            let safe =
                clearance.constrain(&geometry, target, desired, 25., &HashSet::new(), 1. / 60.);
            assert!(safe.z >= 25., "Ground clipping at frame {i}: {safe:?}");
        }
    }
}
