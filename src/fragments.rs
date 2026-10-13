//! Original fragment settings and mesh pivots, with a deterministic host random seed.
use crate::object_rules::FragmentEffect;
use bevy::math::{Quat, Vec3};
/// Keep debris above terrain using the rotated mesh bounds in original units.
pub fn ground_offset(
    terrain: &crate::playtest::TerrainContact,
    bounds: [Vec3; 2],
    pivot: Vec3,
    rotation: Quat,
    offset: Vec3,
) -> Vec3 {
    let mut lift = 0f32;
    for x in [bounds[0].x, bounds[1].x] {
        for y in [bounds[0].y, bounds[1].y] {
            for z in [bounds[0].z, bounds[1].z] {
                let point = pivot + rotation * (Vec3::new(x, y, z) - pivot) + offset;
                // Start above the original prop so a fast falling piece cannot
                // pass below the query before the next rendered frame.
                let high = bounds[1].z.max(point.z) + 100.;
                if let Some(hit) = terrain.below(point.with_z(high), point.z - 200.) {
                    lift = lift.max(hit.height + 1. - point.z);
                }
            }
        }
    }
    offset + Vec3::Z * lift
}
fn random(seed: &mut u32) -> f32 {
    *seed = seed.wrapping_mul(1664525).wrapping_add(1013904223);
    (*seed >> 8) as f32 / 16777216.
}
pub fn motion(effect: &FragmentEffect, object: usize, part: usize, fraction: f32) -> (Vec3, Quat) {
    let mut seed = (object as u32)
        .wrapping_mul(747796405)
        .wrapping_add(part as u32 + 1);
    let group = (random(&mut seed) * 4.) as u32;
    let mut velocity = Vec3::from_array(effect.velocity);
    velocity.x += (random(&mut seed) * 2. - 1.) * effect.scatter[0];
    velocity.y += (random(&mut seed) * 2. - 1.) * effect.scatter[1];
    velocity.z += random(&mut seed) * effect.scatter[2];
    let mut group_seed = (object as u32)
        .wrapping_mul(2891336453)
        .wrapping_add(group + 1);
    let rate = 2. + random(&mut group_seed) * 8.;
    let axis = Vec3::new(
        random(&mut group_seed) * 2. - 1.,
        random(&mut group_seed) * 2. - 1.,
        random(&mut group_seed) * 2. - 1.,
    )
    .normalize_or_zero();
    let time = (effect.age as f32 + fraction).min(effect.lifetime as f32) / 60.;
    (
        Vec3::from_array(effect.displacement(velocity.to_array(), fraction)),
        Quat::from_axis_angle(axis, rate * time),
    )
}
#[cfg(test)]
mod tests {
    use super::*;
    #[test]
    #[ignore = "requires original disc"]
    fn fragments_move_expire_and_cannot_restore_broken_glass() {
        let (level, _) =
            crate::load_track(std::path::Path::new("extracted/DATA/MODELS/SNOW.BIG")).unwrap();
        let props: Vec<_> = level
            .instances
            .iter()
            .map(|i| i.properties.clone())
            .collect();
        let glass = props.iter().position(|p| p.id == [75, 14]).unwrap();
        let mut state = crate::object_rules::ObjectState::default();
        state.contact_with_velocity(glass, &props, &level.effects.scripts, [100., 400., 0.]);
        let debris = *state.fragments.keys().next().unwrap();
        let initial = state.fragments[&debris].clone();
        assert_eq!(initial.lifetime, 180);
        assert_eq!(initial.velocity, [80., 320., 0.]);
        let at_zero = motion(&initial, debris, 0, 0.);
        assert_eq!(at_zero.0, Vec3::ZERO);
        for _ in 0..30 {
            state.advance_effects();
        }
        let moved = motion(&state.fragments[&debris], debris, 0, 0.);
        assert!(moved.0.length() > 1.);
        assert_ne!(moved.1, Quat::IDENTITY);
        for _ in 0..200 {
            state.advance_effects();
        }
        assert!(!state.fragments[&debris].active());
        assert!(state.disabled.contains(&glass));
        let age = state.fragments[&debris].age;
        state.events.clear();
        state.contact(glass, &props, &level.effects.scripts);
        assert_eq!(state.fragments[&debris].age, age);
        assert!(state.events.is_empty());
    }
}
