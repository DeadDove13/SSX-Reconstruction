//! Diagnostic scan for stationary airborne riders on the original Untracked mesh.
//! Run with `cargo run --offline --features viewer --example probe_snow_contact`.
use bevy::math::Vec3;
use ssx_rust::playtest::{Controls, Phase, Session, TerrainContact};

fn main() {
    let path = std::path::Path::new("extracted/DATA/MODELS/UNTRACK.BIG");
    let (level, _) = ssx_rust::load_track(path).unwrap();
    let terrain = TerrainContact::from_level(&level);
    let mut network = ssx_rust::load_track_paths(path).unwrap();
    let mut tested = 0;
    let mut failures = Vec::new();
    let mut surfaces = std::collections::BTreeMap::new();
    for (index, patch) in level.patches.iter().enumerate() {
        *surfaces.entry(patch.surface_type).or_insert(0) += 1;
        let point = Vec3::from_array(patch.position(0.5, 0.5));
        let a = Vec3::from_array(patch.position(0.51, 0.5)) - point;
        let b = Vec3::from_array(patch.position(0.5, 0.51)) - point;
        let mut normal = a.cross(b).normalize_or_zero();
        if normal.z < 0. { normal = -normal; }
        if !(0.1..0.9).contains(&normal.z) { continue; }
        for angle in [0f32, 90., 180., 270.] {
            let yaw = angle.to_radians();
            network.ai[network.starts[0]].segments[0].direction = [yaw.cos(), yaw.sin(), 0.];
            let mut rider = Session::new(network.clone(), &terrain).unwrap();
            rider.phase = Phase::Running;
            rider.position = point + Vec3::Z * 2. - normal * 12.;
            rider.velocity = Vec3::ZERO;
            rider.grounded = false;
            let mut frozen_air = 0;
            for _ in 0..480 {
                let old = rider.position;
                rider.tick(Controls::default(), &terrain);
                if !rider.grounded && rider.position.distance(old) < 0.7 && rider.returning.is_none() {
                    frozen_air += 1;
                } else { frozen_air = 0; }
                if frozen_air >= 180 { break; }
            }
            tested += 1;
            if frozen_air >= 180 {
                failures.push(serde_json::json!({"patch":index,"surface":patch.surface_type,"angle":angle,"start":point.to_array(),"normal":normal.to_array(),"position":rider.position.to_array(),"velocity":rider.velocity.to_array(),"recovery":format!("{:?}",rider.recovery)}));
            }
        }
        if failures.len() >= 12 { break; }
    }
    let result = serde_json::json!({"tested":tested,"surfaces":surfaces,"failures":failures});
    println!("{}", serde_json::to_string_pretty(&result).unwrap());
    assert!(failures.is_empty(), "Untracked riders remained motionless in air");
}
