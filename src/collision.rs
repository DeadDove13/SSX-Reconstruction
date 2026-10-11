//! Continuous contact for the test host. Geometry and object flags come from the disc.
//! The swept sphere solver is a host implementation, not recovered PS2 arithmetic.
use crate::{
    level::Level,
    object_rules::{Properties, Scripts},
};
use bevy::math::{Mat4, Vec3};
use std::collections::{HashMap, HashSet};
const CELL: f32 = 500.;
#[derive(Clone, Copy)]
struct Triangle {
    p: [Vec3; 3],
    object: Option<usize>,
}
#[derive(Clone, Copy, Debug)]
pub struct Hit {
    pub time: f32,
    pub normal: Vec3,
    pub object: Option<usize>,
}
#[derive(Default)]
pub struct CollisionWorld {
    triangles: Vec<Triangle>,
    grid: HashMap<(i32, i32), Vec<usize>>,
    pub properties: Vec<Properties>,
    pub scripts: Scripts,
}
impl CollisionWorld {
    /// Camera occlusion uses visible object triangles, including decorative meshes.
    pub fn visual_objects(level: &Level) -> Self {
        let mut world = Self::default();
        for (index, instance) in level.instances.iter().enumerate() {
            if instance.properties.flags & 1 == 0 {
                continue;
            }
            let placement = Mat4::from_cols_array(&instance.transform);
            let Some(meshes) = level.prefabs.get(instance.prefab) else {
                continue;
            };
            for mesh in meshes {
                let transform = placement
                    * mesh
                        .transform
                        .map(|m| Mat4::from_cols_array(&m))
                        .unwrap_or(Mat4::IDENTITY);
                for face in mesh.indices.chunks_exact(3) {
                    world.add(
                        face.map_array(|i| {
                            transform.transform_point3(Vec3::from_array(mesh.positions[i as usize]))
                        }),
                        Some(index),
                    );
                }
            }
        }
        world
    }
    pub fn camera_position(
        &self,
        target: Vec3,
        desired: Vec3,
        radius: f32,
        disabled: &HashSet<usize>,
    ) -> Vec3 {
        let delta = desired - target;
        self.sweep(target, delta, radius, disabled, &HashSet::new())
            .map_or(desired, |hit| {
                target + delta * (hit.time - 0.5 / delta.length().max(0.5)).max(0.)
            })
    }
    pub fn from_level(level: &Level) -> Self {
        Self::build(level, false)
    }
    /// Solid objects only. Trigger volumes must not push the camera into the rider.
    pub fn for_camera(level: &Level) -> Self {
        Self::build(level, true)
    }
    fn build(level: &Level, camera: bool) -> Self {
        let mut world = Self {
            properties: level
                .instances
                .iter()
                .map(|i| i.properties.clone())
                .collect(),
            scripts: level.effects.scripts.clone(),
            ..Default::default()
        };
        for (index, instance) in level.instances.iter().enumerate() {
            let p = &instance.properties;
            if !p.contact_enabled() || p.collision_mode == 0 || (camera && !p.response_enabled()) {
                continue;
            }
            let placement = Mat4::from_cols_array(&instance.transform);
            match p.collision_mode {
                1 => {
                    if let Some(hulls) = level
                        .effects
                        .collision_models
                        .get(p.collision_model as usize)
                    {
                        for (j, hull) in hulls.iter().enumerate() {
                            let local = level
                                .prefabs
                                .get(instance.prefab)
                                .and_then(|m| m.get(j))
                                .and_then(|m| m.transform)
                                .map(|m| Mat4::from_cols_array(&m))
                                .unwrap_or(Mat4::IDENTITY);
                            let transform = placement * local;
                            for face in hull.indices.chunks_exact(3) {
                                world.add(
                                    face.map_array(|v| {
                                        transform.transform_point3(Vec3::from_array(
                                            hull.vertices[v as usize],
                                        ))
                                    }),
                                    Some(index),
                                );
                            }
                        }
                    }
                }
                2 => {
                    if let Some(meshes) = level.prefabs.get(instance.prefab) {
                        for mesh in meshes {
                            let local = mesh
                                .transform
                                .map(|m| Mat4::from_cols_array(&m))
                                .unwrap_or(Mat4::IDENTITY);
                            world.add_box(mesh.bounds, placement * local, index);
                        }
                    }
                }
                // Host fallback for unported WFX mode-3 volumes. The original
                // solid/contact flags still gate collision. Use the authored
                // surface mesh instead of allowing these objects to be crossed.
                3 => {
                    if let Some(meshes) = level.prefabs.get(instance.prefab) {
                        for mesh in meshes {
                            let local = mesh
                                .transform
                                .map(|m| Mat4::from_cols_array(&m))
                                .unwrap_or(Mat4::IDENTITY);
                            for face in mesh.indices.chunks_exact(3) {
                                world.add(
                                    face.map_array(|i| {
                                        (placement * local).transform_point3(Vec3::from_array(
                                            mesh.positions[i as usize],
                                        ))
                                    }),
                                    Some(index),
                                );
                            }
                        }
                    }
                }
                _ => {}
            }
        }
        world
    }
    fn add_box(&mut self, bounds: [[f32; 3]; 2], transform: Mat4, object: usize) {
        let points: [Vec3; 8] = std::array::from_fn(|i| {
            transform.transform_point3(Vec3::new(
                bounds[i & 1][0],
                bounds[(i >> 1) & 1][1],
                bounds[(i >> 2) & 1][2],
            ))
        });
        for [a, b, c] in [
            [0, 1, 3],
            [0, 3, 2],
            [4, 6, 7],
            [4, 7, 5],
            [0, 4, 5],
            [0, 5, 1],
            [2, 3, 7],
            [2, 7, 6],
            [0, 2, 6],
            [0, 6, 4],
            [1, 5, 7],
            [1, 7, 3],
        ] {
            self.add([points[a], points[b], points[c]], Some(object));
        }
    }
    pub fn add(&mut self, points: [Vec3; 3], object: Option<usize>) {
        if (points[1] - points[0])
            .cross(points[2] - points[0])
            .length_squared()
            < 1e-8
        {
            return;
        }
        let low = points[0].min(points[1]).min(points[2]);
        let high = points[0].max(points[1]).max(points[2]);
        let index = self.triangles.len();
        for y in (low.y / CELL).floor() as i32..=(high.y / CELL).floor() as i32 {
            for x in (low.x / CELL).floor() as i32..=(high.x / CELL).floor() as i32 {
                self.grid.entry((x, y)).or_default().push(index);
            }
        }
        self.triangles.push(Triangle { p: points, object });
    }
    /// Highest solid object surface below the board. Material selection remains unported.
    pub fn ground_below(
        &self,
        point: Vec3,
        min_z: f32,
        disabled: &HashSet<usize>,
    ) -> Option<(f32, Vec3)> {
        let cell = (
            (point.x / CELL).floor() as i32,
            (point.y / CELL).floor() as i32,
        );
        let mut best: Option<(f32, Vec3)> = None;
        for &index in self.grid.get(&cell).into_iter().flatten() {
            let t = self.triangles[index];
            let Some(object) = t.object else {
                continue;
            };
            if disabled.contains(&object) || !self.properties[object].response_enabled() {
                continue;
            }
            let mut n = (t.p[1] - t.p[0]).cross(t.p[2] - t.p[0]).normalize_or_zero();
            if n.z < 0.0 {
                n = -n;
            }
            if n.z < 0.05 {
                continue;
            }
            let a = (t.p[1] - t.p[0]).truncate();
            let b = (t.p[2] - t.p[0]).truncate();
            let c = (point - t.p[0]).truncate();
            let det = a.perp_dot(b);
            if det.abs() < 0.0001 {
                continue;
            }
            let u = c.perp_dot(b) / det;
            let v = a.perp_dot(c) / det;
            if u < -0.00001 || v < -0.00001 || u + v > 1.00001 {
                continue;
            }
            let height = t.p[0].z + u * (t.p[1].z - t.p[0].z) + v * (t.p[2].z - t.p[0].z);
            if height <= point.z && height >= min_z && best.is_none_or(|h| height > h.0) {
                best = Some((height, n));
            }
        }
        best
    }
    /// Deepest sphere overlap. Sweep queries intentionally ignore stationary
    /// overlaps, so spawn clearance and depenetration need a separate query.
    pub fn penetration(&self, point: Vec3, radius: f32, disabled: &HashSet<usize>) -> Option<Vec3> {
        self.penetration_contact(point, radius, disabled)
            .map(|(correction, _)| correction)
    }
    /// Include the object so overlap correction can run its contact script.
    pub fn penetration_contact(
        &self,
        point: Vec3,
        radius: f32,
        disabled: &HashSet<usize>,
    ) -> Option<(Vec3, Option<usize>)> {
        let mut visited = HashSet::new();
        let mut best = Vec3::ZERO;
        let mut object = None;
        for y in
            ((point.y - radius) / CELL).floor() as i32..=((point.y + radius) / CELL).floor() as i32
        {
            for x in ((point.x - radius) / CELL).floor() as i32
                ..=((point.x + radius) / CELL).floor() as i32
            {
                for &index in self.grid.get(&(x, y)).into_iter().flatten() {
                    if !visited.insert(index) {
                        continue;
                    }
                    let t = self.triangles[index];
                    if t.object.is_some_and(|i| {
                        disabled.contains(&i) || !self.properties[i].response_enabled()
                    }) {
                        continue;
                    }
                    let n = (t.p[1] - t.p[0]).cross(t.p[2] - t.p[0]).normalize_or_zero();
                    let plane = point - n * (point - t.p[0]).dot(n);
                    let nearest = if inside(plane, t.p, n) {
                        plane
                    } else {
                        (0..3)
                            .map(|i| {
                                let e = t.p[(i + 1) % 3] - t.p[i];
                                t.p[i]
                                    + e * ((point - t.p[i]).dot(e) / e.length_squared().max(1e-8))
                                        .clamp(0., 1.)
                            })
                            .min_by(|a, b| {
                                a.distance_squared(point)
                                    .total_cmp(&b.distance_squared(point))
                            })
                            .unwrap()
                    };
                    let delta = point - nearest;
                    let distance = delta.length();
                    if distance < radius - 0.001 {
                        let correction = if distance > 0.001 {
                            delta / distance
                        } else {
                            n
                        } * (radius - distance + 0.05);
                        if correction.length_squared() > best.length_squared() {
                            best = correction;
                            object = t.object;
                        }
                    }
                }
            }
        }
        (best.length_squared() > 0.).then_some((best, object))
    }
    pub fn sweep(
        &self,
        start: Vec3,
        delta: Vec3,
        radius: f32,
        disabled: &HashSet<usize>,
        ignored: &HashSet<usize>,
    ) -> Option<Hit> {
        let low = start.min(start + delta) - Vec3::splat(radius);
        let high = start.max(start + delta) + Vec3::splat(radius);
        let mut visited = HashSet::new();
        let mut best: Option<Hit> = None;
        for y in (low.y / CELL).floor() as i32..=(high.y / CELL).floor() as i32 {
            for x in (low.x / CELL).floor() as i32..=(high.x / CELL).floor() as i32 {
                for &index in self.grid.get(&(x, y)).into_iter().flatten() {
                    if !visited.insert(index) {
                        continue;
                    }
                    let t = self.triangles[index];
                    if t.object
                        .is_some_and(|i| disabled.contains(&i) || ignored.contains(&i))
                    {
                        continue;
                    }
                    if let Some((time, normal)) = sweep_triangle(start, delta, radius, t.p) {
                        if best.is_none_or(|h| time < h.time) {
                            best = Some(Hit {
                                time,
                                normal,
                                object: t.object,
                            });
                        }
                    }
                }
            }
        }
        best
    }
}
// Small slice helper keeps index conversion explicit.
trait FaceArray {
    fn map_array(self, f: impl Fn(u32) -> Vec3) -> [Vec3; 3];
}
impl FaceArray for &[u32] {
    fn map_array(self, f: impl Fn(u32) -> Vec3) -> [Vec3; 3] {
        [f(self[0]), f(self[1]), f(self[2])]
    }
}
fn inside(p: Vec3, t: [Vec3; 3], normal: Vec3) -> bool {
    (0..3).all(|i| (t[(i + 1) % 3] - t[i]).cross(p - t[i]).dot(normal) >= -0.001)
}
fn root(a: f32, b: f32, c: f32) -> Option<f32> {
    if a <= 1e-12 {
        return None;
    }
    let d = b * b - a * c;
    if d < 0. {
        return None;
    }
    let t = (-b - d.sqrt()) / a;
    (0. ..=1.).contains(&t).then_some(t)
}
fn sweep_triangle(start: Vec3, delta: Vec3, r: f32, t: [Vec3; 3]) -> Option<(f32, Vec3)> {
    let n = (t[1] - t[0]).cross(t[2] - t[0]).normalize_or_zero();
    let mut best: Option<(f32, Vec3)> = None;
    let mut accept = |time: f32, normal: Vec3| {
        if delta.dot(normal) < -1e-6 && best.is_none_or(|h| time < h.0) {
            best = Some((time, normal));
        }
    };
    let distance = (start - t[0]).dot(n);
    let approach = delta.dot(n);
    let nearest = start - n * distance;
    if distance.abs() <= r && inside(nearest, t, n) {
        accept(0., n * if distance < 0. { -1. } else { 1. });
    }
    if approach.abs() > 1e-8 {
        for side in [-1., 1.] {
            let time = (side * r - distance) / approach;
            if (0. ..=1.).contains(&time) && inside(start + delta * time - n * side * r, t, n) {
                accept(time, n * side);
            }
        }
    }
    for i in 0..3 {
        let q = start - t[i];
        if let Some(time) = root(
            delta.length_squared(),
            q.dot(delta),
            q.length_squared() - r * r,
        ) {
            accept(time, (q + delta * time).normalize_or_zero());
        }
        let edge = t[(i + 1) % 3] - t[i];
        let len = edge.length_squared();
        if len < 1e-10 {
            continue;
        }
        let q_perp = q - edge * (q.dot(edge) / len);
        let v_perp = delta - edge * (delta.dot(edge) / len);
        let time = if q_perp.length_squared() <= r * r {
            Some(0.)
        } else {
            root(
                v_perp.length_squared(),
                q_perp.dot(v_perp),
                q_perp.length_squared() - r * r,
            )
        };
        if let Some(time) = time {
            let along = (q + delta * time).dot(edge) / len;
            if (0. ..=1.).contains(&along) {
                accept(time, (q_perp + v_perp * time).normalize_or_zero());
            }
        }
    }
    best
}
#[cfg(test)]
mod tests {
    use super::*;
    #[test]
    fn object_support_respects_solid_flags_and_breakage() {
        let mut world = CollisionWorld::default();
        world.properties.push(Properties {
            flags: 0xa1,
            ..Default::default()
        });
        world.add(
            [
                Vec3::new(-100., -100., 50.),
                Vec3::new(100., -100., 50.),
                Vec3::new(0., 100., 50.),
            ],
            Some(0),
        );
        let p = Vec3::new(0., 0., 100.);
        assert_eq!(
            world.ground_below(p, 0., &HashSet::new()),
            Some((50., Vec3::Z))
        );
        assert!(world.ground_below(p, 0., &HashSet::from([0])).is_none());
        world.properties[0].flags = 0x21;
        assert!(world.ground_below(p, 0., &HashSet::new()).is_none());
    }
    #[test]
    fn fast_crossings_edges_and_parallel_motion() {
        let wall = [
            Vec3::new(0., -10., -10.),
            Vec3::new(0., 10., -10.),
            Vec3::new(0., 0., 10.),
        ];
        let (time, n) =
            sweep_triangle(Vec3::new(-100., 0., 0.), Vec3::new(200., 0., 0.), 1., wall).unwrap();
        assert!((time - 0.495).abs() < 1e-5);
        assert_eq!(n, -Vec3::X);
        assert!(
            sweep_triangle(Vec3::new(-100., 0., 0.), Vec3::new(-200., 0., 0.), 1., wall).is_none()
        );
        assert!(sweep_triangle(Vec3::new(-2., 0., 0.), Vec3::Y, 1., wall).is_none());
        assert!(
            sweep_triangle(
                Vec3::new(-100., 0., 10.5),
                Vec3::new(200., 0., 0.),
                1.,
                wall
            )
            .is_some()
        );
    }
}
