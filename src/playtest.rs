//! Temporary test-play host for recovered routines.
//!
//! Recovered input and ground-movement arithmetic run through provisional terrain
//! contact, collision, jump/landing, and race-state adapters. See docs/PHYSICS.md.
use crate::{
    level::Level,
    physics::{self, ForceState, Motion, RiderStats, Surface},
    race_path::Network,
};
use bevy::math::Vec3;
use std::collections::HashMap;

const CELL: f32 = 500.0;
const DT: f32 = physics::BASE_STEP_SECONDS;

fn debris_resistance(velocity: Vec3, normal: Vec3, mass: f32) -> Vec3 {
    // Host impact transfer. Some movable props retain a static/sentinel mass.
    let mass = if mass.is_finite() && mass > 0. && mass < 10000. {
        mass
    } else {
        25.
    };
    let retained = (80. / (80. + mass)).clamp(0.55, 0.9);
    velocity - normal * velocity.dot(normal).min(0.) * (1. - retained)
}

struct Triangle {
    a: Vec3,
    b: Vec3,
    c: Vec3,
    normal: Vec3,
    surface: u32,
    curved: bool,
}
pub struct TerrainContact {
    pub rails: Vec<crate::rails::Rail>,
    pub powerups: Vec<crate::powerups::Field>,
    pub script_triggers: Vec<usize>,
    pub objects: crate::collision::CollisionWorld,
    pub camera_geometry: crate::collision::CollisionWorld,
    triangles: Vec<Triangle>,
    grid: HashMap<(i32, i32), Vec<usize>>,
}
#[derive(Clone, Copy, Debug)]
pub struct Contact {
    pub height: f32,
    pub normal: Vec3,
    pub surface: u32,
}
impl Contact {
    fn board_distance(self, point: Vec3) -> f32 {
        (point.z - self.height - 2.) * self.normal.z
    }
}
impl TerrainContact {
    /// Full 3D snow support. Orient each face toward the preceding contact so
    /// a continuous bank can pass through vertical without reversing its normal.
    pub fn surface_contact(
        &self,
        point: Vec3,
        previous_normal: Vec3,
        reach: f32,
    ) -> Option<(Vec3, Vec3, u32)> {
        let mut best = None;
        let mut nearest = reach * reach;
        let low = point - Vec3::splat(reach);
        let high = point + Vec3::splat(reach);
        for y in (low.y / CELL).floor() as i32..=(high.y / CELL).floor() as i32 {
            for x in (low.x / CELL).floor() as i32..=(high.x / CELL).floor() as i32 {
                for &i in self.grid.get(&(x, y)).into_iter().flatten() {
                    let t = &self.triangles[i];
                    // Types 6, 9 and 10 enter the original crash handler.
                    if t.surface >= 9 || t.surface == 6 {
                        continue;
                    }
                    let mut normal = t.normal;
                    if normal.dot(previous_normal) < 0. {
                        normal = -normal;
                    }
                    if normal.dot(previous_normal) < 0.7 {
                        continue;
                    }
                    let distance = (point - t.a).dot(normal);
                    let projected = point - normal * distance;
                    let a = t.b - t.a;
                    let b = t.c - t.a;
                    let c = projected - t.a;
                    let det = a.length_squared() * b.length_squared() - a.dot(b).powi(2);
                    if det <= 0.001 {
                        continue;
                    }
                    let u = (c.dot(a) * b.length_squared() - c.dot(b) * a.dot(b)) / det;
                    let v = (c.dot(b) * a.length_squared() - c.dot(a) * a.dot(b)) / det;
                    let contact = if u >= 0. && v >= 0. && u + v <= 1. {
                        projected
                    } else {
                        [(t.a, t.b), (t.b, t.c), (t.c, t.a)]
                            .map(|(a, b)| {
                                let ab = b - a;
                                a + ab
                                    * ((point - a).dot(ab) / ab.length_squared().max(0.001))
                                        .clamp(0., 1.)
                            })
                            .into_iter()
                            .min_by(|a, b| {
                                a.distance_squared(point)
                                    .total_cmp(&b.distance_squared(point))
                            })
                            .unwrap()
                    };
                    let d = contact.distance_squared(point);
                    if d < nearest {
                        nearest = d;
                        best = Some((contact, normal, t.surface));
                    }
                }
            }
        }
        best
    }
    /// Local-normal ray used by 0x001125e8. The original spans -100 to +200
    /// units. Use this only on curved banks or while continuing inverted contact.
    /// Triangle intersection replaces the original bicubic collision routine.
    fn oriented_contact(&self, point: Vec3, previous_normal: Vec3) -> Option<(Vec3, Vec3, u32)> {
        let mut best = None;
        let mut nearest = f32::INFINITY;
        for y in ((point.y - 200.) / CELL).floor() as i32..=((point.y + 200.) / CELL).floor() as i32
        {
            for x in
                ((point.x - 200.) / CELL).floor() as i32..=((point.x + 200.) / CELL).floor() as i32
            {
                for &i in self.grid.get(&(x, y)).into_iter().flatten() {
                    let t = &self.triangles[i];
                    if t.surface >= 9 || t.surface == 6 || (!t.curved && previous_normal.z >= 0.) {
                        continue;
                    }
                    let mut n = t.normal;
                    if n.dot(previous_normal) < 0. {
                        n = -n;
                    }
                    let alignment = n.dot(previous_normal);
                    if alignment < 0.7 {
                        continue;
                    }
                    let distance = (point - t.a).dot(n) / alignment;
                    if !(-200. ..=100.).contains(&distance) || distance.abs() >= nearest {
                        continue;
                    }
                    let p = point - previous_normal * distance;
                    let a = t.b - t.a;
                    let b = t.c - t.a;
                    let c = p - t.a;
                    let det = a.length_squared() * b.length_squared() - a.dot(b).powi(2);
                    if det < 0.001 {
                        continue;
                    }
                    let u = (c.dot(a) * b.length_squared() - c.dot(b) * a.dot(b)) / det;
                    let v = (c.dot(b) * a.length_squared() - c.dot(a) * a.dot(b)) / det;
                    if u >= -0.0001 && v >= -0.0001 && u + v <= 1.0001 {
                        nearest = distance.abs();
                        best = Some((p, n, t.surface));
                    }
                }
            }
        }
        best
    }
    /// A lower layer must not hide snow that already touches the board.
    fn closest_snow(&self, point: Vec3, support: Option<Contact>) -> Option<Contact> {
        self.nearby_snow(point)
            .filter(|snow| {
                support.is_none_or(|hit| {
                    snow.board_distance(point).abs() + 0.1 < hit.board_distance(point).abs()
                })
            })
            .or(support)
    }

    fn board_support(
        &self,
        point: Vec3,
        objects: &crate::object_rules::ObjectState,
        surface: u32,
    ) -> Option<Contact> {
        self.closest_snow(
            point,
            self.support(point + Vec3::Z * 60., point.z - 80., objects, surface),
        )
    }
    /// Board-plane crossing across the full step, including short rail exits.
    pub(crate) fn swept_board(&self, from: Vec3, to: Vec3) -> Option<(Vec3, Contact)> {
        let from = from - Vec3::Z * 2.;
        let to = to - Vec3::Z * 2.;
        let low = from.min(to);
        let high = from.max(to);
        let mut best: Option<(f32, Vec3, Contact)> = None;
        let mut visited = std::collections::HashSet::new();
        for y in (low.y / CELL).floor() as i32..=(high.y / CELL).floor() as i32 {
            for x in (low.x / CELL).floor() as i32..=(high.x / CELL).floor() as i32 {
                for &i in self.grid.get(&(x, y)).into_iter().flatten() {
                    if !visited.insert(i) {
                        continue;
                    }
                    let t = &self.triangles[i];
                    let a = (from - t.a).dot(t.normal);
                    let b = (to - t.a).dot(t.normal);
                    if a < -0.1 || b >= 0. || a <= b {
                        continue;
                    }
                    let fraction = (a / (a - b)).clamp(0., 1.);
                    let p = from.lerp(to, fraction);
                    let v0 = (t.b - t.a).truncate();
                    let v1 = (t.c - t.a).truncate();
                    let v2 = (p - t.a).truncate();
                    let det = v0.perp_dot(v1);
                    if det.abs() < 0.0001 {
                        continue;
                    }
                    let u = v2.perp_dot(v1) / det;
                    let v = v0.perp_dot(v2) / det;
                    if u >= -0.00001
                        && v >= -0.00001
                        && u + v <= 1.00001
                        && best.is_none_or(|h| fraction < h.0)
                    {
                        best = Some((
                            fraction,
                            p + Vec3::Z * 2.,
                            Contact {
                                height: p.z,
                                normal: t.normal,
                                surface: t.surface,
                            },
                        ));
                    }
                }
            }
        }
        best.map(|(_, p, c)| (p, c))
    }
    /// Use the same supporting surface at the beginning and end of a step.
    fn support(
        &self,
        point: Vec3,
        min_z: f32,
        objects: &crate::object_rules::ObjectState,
        surface: u32,
    ) -> Option<Contact> {
        let mut support = self.below(point, min_z);
        if let Some((height, normal)) = self.objects.ground_below(point, min_z, &objects.disabled)
            && support.is_none_or(|hit| height > hit.height)
        {
            support = Some(Contact {
                height,
                normal,
                surface,
            });
        }
        support
    }
    pub fn from_level(level: &Level) -> Self {
        let mut result = Self {
            script_triggers: level
                .instances
                .iter()
                .enumerate()
                .filter_map(|(i, o)| {
                    let p = level.effects.scripts.contact_program(&o.properties)?;
                    level
                        .effects
                        .scripts
                        .programs
                        .get(p)?
                        .iter()
                        .any(|e| matches!(e.kind, 6 | 12 | 13 | 16 | 17))
                        .then_some(i)
                })
                .collect(),
            rails: crate::rails::from_level(level),
            powerups: crate::powerups::fields(level),
            objects: crate::collision::CollisionWorld::from_level(level),
            camera_geometry: crate::collision::CollisionWorld::for_camera(level),
            triangles: Vec::new(),
            grid: HashMap::new(),
        };
        for patch in &level.patches {
            const N: usize = 8;
            let points: Vec<_> = (0..=N)
                .flat_map(|j| {
                    (0..=N).map(move |i| {
                        Vec3::from_array(patch.position(i as f32 / N as f32, j as f32 / N as f32))
                    })
                })
                .collect();
            let normals: Vec<_> = (0..N)
                .flat_map(|j| (0..N).map(move |i| (i, j)))
                .map(|(i, j)| {
                    let a = points[j * (N + 1) + i];
                    (points[j * (N + 1) + i + 1] - a)
                        .cross(points[(j + 1) * (N + 1) + i] - a)
                        .normalize_or_zero()
                })
                .filter(|n| n.length_squared() > 0.5)
                .collect();
            let curved = normals
                .iter()
                .any(|a| normals.iter().any(|b| a.dot(*b).abs() < 0.94));
            for j in 0..N {
                for i in 0..N {
                    let a = points[j * (N + 1) + i];
                    let b = points[j * (N + 1) + i + 1];
                    let c = points[(j + 1) * (N + 1) + i];
                    let d = points[(j + 1) * (N + 1) + i + 1];
                    for [a, b, c] in [[a, b, c], [b, d, c]] {
                        result.camera_geometry.add([a, b, c], None);
                        let mut normal = (b - a).cross(c - a).normalize_or_zero();
                        if normal.z < 0.0 {
                            normal = -normal;
                        }
                        // Flat walls remain solid. Curved riding patches use the board's
                        // local-normal contact ray through their vertical sections.
                        // Board contact handles the upper side of hard slopes.
                        // Their underside must also block the body inside caves.
                        if patch.surface_type != 17
                            && ((normal.z < 0.05 && !curved)
                                || patch.surface_type >= 9
                                || patch.surface_type == 6)
                        {
                            if normal.z >= 0.45 {
                                result.objects.add_underside([a, b, c]);
                            } else {
                                result.objects.add([a, b, c], None);
                            }
                        }
                        if normal.length_squared() < 0.5 {
                            continue;
                        }
                        let low = a.min(b).min(c);
                        let high = a.max(b).max(c);
                        let index = result.triangles.len();
                        for y in (low.y / CELL).floor() as i32..=(high.y / CELL).floor() as i32 {
                            for x in (low.x / CELL).floor() as i32..=(high.x / CELL).floor() as i32
                            {
                                result.grid.entry((x, y)).or_default().push(index);
                            }
                        }
                        result.triangles.push(Triangle {
                            a,
                            b,
                            c,
                            normal,
                            surface: patch.surface_type,
                            curved,
                        });
                    }
                }
            }
        }
        result
    }

    /// Highest terrain intersection within the specified vertical interval.
    pub fn below(&self, point: Vec3, min_z: f32) -> Option<Contact> {
        let cell = (
            (point.x / CELL).floor() as i32,
            (point.y / CELL).floor() as i32,
        );
        let mut best: Option<Contact> = None;
        for &i in self.grid.get(&cell)? {
            let t = &self.triangles[i];
            if t.normal.z < 0.05 {
                continue;
            }
            let v0 = (t.b - t.a).truncate();
            let v1 = (t.c - t.a).truncate();
            let v2 = (point - t.a).truncate();
            let det = v0.perp_dot(v1);
            if det.abs() < 0.0001 {
                continue;
            }
            let u = v2.perp_dot(v1) / det;
            let v = v0.perp_dot(v2) / det;
            if u < -0.00001 || v < -0.00001 || u + v > 1.00001 {
                continue;
            }
            // Evaluate the plane directly. Barycentric interpolation of large Z
            // coordinates can move a contact across the spring's zero-height branch.
            let height =
                (t.normal.dot(t.a) - t.normal.x * point.x - t.normal.y * point.y) / t.normal.z;
            if height <= point.z && height >= min_z && best.is_none_or(|b| height > b.height) {
                best = Some(Contact {
                    height,
                    normal: t.normal,
                    surface: t.surface,
                });
            }
        }
        best
    }

    /// Contact measured along the surface normal for steep and curved snow.
    fn nearby_snow(&self, point: Vec3) -> Option<Contact> {
        let cell = (
            (point.x / CELL).floor() as i32,
            (point.y / CELL).floor() as i32,
        );
        let mut best: Option<(f32, Contact)> = None;
        for y in cell.1 - 1..=cell.1 + 1 {
            for x in cell.0 - 1..=cell.0 + 1 {
                for &i in self.grid.get(&(x, y)).into_iter().flatten() {
                    let t = &self.triangles[i];
                    if t.normal.z < 0.05 || t.surface >= 9 {
                        continue;
                    }
                    let distance = (point - Vec3::Z * 2. - t.a).dot(t.normal);
                    if !(-80. ..=25.).contains(&distance) {
                        continue;
                    }
                    let p = point - Vec3::Z * 2. - t.normal * distance;
                    let a = t.b - t.a;
                    let b = t.c - t.a;
                    let c = p - t.a;
                    let det = a.dot(a) * b.dot(b) - a.dot(b).powi(2);
                    if det < 0.001 {
                        continue;
                    }
                    let u = (c.dot(a) * b.dot(b) - c.dot(b) * a.dot(b)) / det;
                    let v = (c.dot(b) * a.dot(a) - c.dot(a) * a.dot(b)) / det;
                    if u < -0.001 || v < -0.001 || u + v > 1.001 {
                        continue;
                    }
                    if best.is_none_or(|h| distance.abs() < h.0) {
                        best = Some((
                            distance.abs(),
                            Contact {
                                height: point.z - 2. - distance / t.normal.z,
                                normal: t.normal,
                                surface: t.surface,
                            },
                        ));
                    }
                }
            }
        }
        best.map(|h| h.1)
    }
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum Phase {
    Ready,
    Running,
    Paused,
    Finished,
}
#[derive(Default, Clone, Copy)]
pub struct Controls {
    pub boost: bool,
    pub steer: f32,
    pub brake: bool,
    pub brake_axis: f32,
    pub crouch_axis: f32,
    pub push: bool,
    pub crouch: bool,
    pub jump: bool,
}

pub struct Session {
    pub shove: crate::rider_contact::Shove,
    pub grind: Option<crate::rails::Grind>,
    grind_cooldown: f32,
    pub power: crate::powerups::State,
    pub recovery: Option<crate::landing::Recovery>,
    pub landed_this_tick: bool,
    pub objects: crate::object_rules::ObjectState,
    pub phase: Phase,
    pub position: Vec3,
    pub velocity: Vec3,
    pub forward: Vec3,
    /// Stance relative to the rider's preferred stance. Forward remains the riding axis.
    pub riding_switch: bool,
    pub start_rock: crate::start_gate::Rocking,
    pub respawns: u32,
    pub return_requests: u32,
    /// Original fade-out and delay, followed by a host fade-in.
    pub returning: Option<f32>,
    safe_position: Vec3,
    safe_forward: Vec3,
    unsupported_time: f32,
    stuck_time: f32,
    return_cooldown: f32,
    pub normal: Vec3,
    pub grounded: bool,
    pub elapsed: f32,
    /// Presentation clock. The recorded race time remains fixed after finishing.
    pub finish_elapsed: f32,
    pub score_pickups: bool,
    pub progress: f32,
    pub input_a8: f32,
    pub surface: u32,
    pub resets: u32,
    pub rider_stats: RiderStats,
    pub board_style: i32,
    // The provisional AI route follower was tuned for the earlier yaw controller.
    // Keep that adapter until its steering decisions are ported as well.
    pub(crate) legacy_ai_steering: bool,
    pub ground_inputs: physics::GroundInputs,
    orientation: Option<physics::GroundOrientation>,
    shallow_depth: f32,
    deep_depth: f32,
    pub network: Network,
    spawn: Vec3,
    spawn_direction: Vec3,
    spawn_contact: Contact,
    yaw: f32,
    jump_charge: f32,
    airborne_grace: f32,
    surfaces: [Surface; 18],
    finish_remaining: f32,
    start_remaining: f32,
}
impl Session {
    pub fn new(network: Network, terrain: &TerrainContact) -> crate::Result<Self> {
        let start = &network.ai[network.starts[0]];
        let mut spawn = Vec3::from_array(start.origin);
        let contact = terrain
            .below(spawn + Vec3::Z * 300.0, spawn.z - 3000.0)
            .ok_or("No terrain contact exists below the original start path")?;
        spawn.z = contact.height + 2.0;
        let direction =
            Vec3::from_array(start.direction(0.0).ok_or("Start path has no direction")?)
                .normalize_or_zero();
        let mut session = Self {
            shove: Default::default(),
            grind: None,
            grind_cooldown: 0.,
            power: Default::default(),
            recovery: None,
            landed_this_tick: false,
            objects: Default::default(),
            phase: Phase::Ready,
            position: spawn,
            velocity: Vec3::ZERO,
            forward: direction,
            riding_switch: false,
            start_rock: Default::default(),
            respawns: 0,
            return_requests: 0,
            returning: None,
            safe_position: spawn,
            safe_forward: direction,
            unsupported_time: 0.,
            stuck_time: 0.,
            return_cooldown: 0.,
            normal: contact.normal,
            grounded: true,
            elapsed: 0.0,
            finish_elapsed: 0.,
            score_pickups: false,
            progress: 0.0,
            input_a8: 0.0,
            surface: contact.surface,
            resets: 0,
            rider_stats: RiderStats {
                stat_0e: 128,
                stat_11: 128,
                stat_13: 128,
                stat_19: 128,
                preferred_stance: 0,
            },
            board_style: 1,
            legacy_ai_steering: false,
            ground_inputs: Default::default(),
            orientation: None,
            shallow_depth: physics::original_surfaces()[contact.surface.min(17) as usize]
                .coefficient(6),
            deep_depth: physics::original_surfaces()[contact.surface.min(17) as usize]
                .coefficient(7),
            network,
            spawn,
            spawn_direction: direction,
            spawn_contact: contact,
            yaw: direction.y.atan2(direction.x),
            jump_charge: 0.0,
            airborne_grace: 0.0,
            surfaces: physics::original_surfaces(),
            finish_remaining: 0.0,
            start_remaining: 1.0,
        };
        session.finish_remaining = session
            .network
            .race
            .iter()
            .flat_map(|p| {
                p.events
                    .iter()
                    .filter(|e| e.kind == 10)
                    .map(|e| f32::from_bits(p.header_word) - e.start)
            })
            .fold(f32::INFINITY, f32::min);
        if !session.finish_remaining.is_finite() {
            session.finish_remaining = 0.;
        }
        session.start_remaining = session.remaining();
        Ok(session)
    }
    pub fn toggle_run(&mut self) {
        self.phase = match self.phase {
            Phase::Ready | Phase::Paused => Phase::Running,
            Phase::Running => Phase::Paused,
            Phase::Finished => Phase::Finished,
        };
    }
    pub fn reset(&mut self) {
        self.finish_elapsed = 0.;
        self.grind = None;
        self.grind_cooldown = 0.;
        self.power = Default::default();
        self.recovery = None;
        self.landed_this_tick = false;
        self.objects = Default::default();
        self.position = self.spawn;
        self.velocity = Vec3::ZERO;
        self.forward = self.spawn_direction;
        self.riding_switch = false;
        self.start_rock = Default::default();
        self.returning = None;
        self.return_requests = 0;
        self.safe_position = self.spawn;
        self.safe_forward = self.spawn_direction;
        self.unsupported_time = 0.;
        self.stuck_time = 0.;
        self.return_cooldown = 0.;
        self.shove = Default::default();
        self.normal = self.spawn_contact.normal;
        self.surface = self.spawn_contact.surface;
        self.yaw = self.forward.y.atan2(self.forward.x);
        self.grounded = true;
        self.phase = Phase::Ready;
        self.elapsed = 0.0;
        self.progress = 0.0;
        self.input_a8 = 0.0;
        self.ground_inputs = Default::default();
        self.orientation = None;
        self.shallow_depth = self.surfaces[self.surface.min(17) as usize].coefficient(6);
        self.deep_depth = self.surfaces[self.surface.min(17) as usize].coefficient(7);
        self.jump_charge = 0.0;
        self.airborne_grace = 0.0;
        self.resets += 1;
    }
    fn remaining(&self) -> f32 {
        self.network
            .race
            .iter()
            .filter_map(|p| {
                p.project(self.position.to_array())
                    .map(|q| (q.lateral, f32::from_bits(p.header_word) - q.along))
            })
            .min_by(|a, b| a.0.total_cmp(&b.0))
            .map(|p| p.1)
            .unwrap_or(self.start_remaining)
    }
    fn course_heading(&self) -> f32 {
        // 0x001065a8 samples 800 units ahead on the selected course path.
        // Nearest race-path selection remains a host adapter.
        let direction = self
            .network
            .race
            .iter()
            .filter_map(|path| {
                path.project(self.position.to_array()).map(|projection| {
                    let ahead = Vec3::from_array(path.sample(projection.along + 800.).0);
                    (
                        projection.lateral,
                        ahead - Vec3::from_array(projection.point),
                    )
                })
            })
            .min_by(|a, b| a.0.total_cmp(&b.0))
            .map(|p| p.1)
            .filter(|v| v.truncate().length_squared() > 0.001)
            .unwrap_or(self.spawn_direction);
        direction.y.atan2(direction.x)
    }
    /// Host speed loss and recovery timing. Stronger impacts can escalate a stagger.
    pub fn recover(&mut self, quality: crate::landing::Quality) {
        use crate::landing::{Quality, Recovery};
        if quality == Quality::Clean || self.recovery.is_some_and(|r| r.quality >= quality) {
            return;
        }
        self.velocity *= if quality == Quality::Bail { 0.25 } else { 0.65 };
        self.jump_charge = 0.;
        self.recovery = Some(Recovery::new(quality));
    }
    /// Call once on contact, before the trick state clears its accumulated rotation.
    /// The original separates stance (+0x144) from the movement basis. This remains
    /// a host landing adapter until the complete original transition handler is ported.
    pub fn finish_air_trick(&mut self, spin: f32, flip: f32) {
        if !self.landed_this_tick {
            return;
        }
        self.recover(crate::landing::orientation(spin, flip));
        if !self
            .recovery
            .is_some_and(|r| r.quality == crate::landing::Quality::Bail)
            && ((spin / 180.).round() as i32).rem_euclid(2) != 0
        {
            self.riding_switch = !self.riding_switch;
        }
    }
    /// Host counterpart of the missing backward-slide state transition.
    /// Keep momentum and physical stance; restore a travel-facing control basis.
    fn correct_reverse_slide(&mut self) {
        if !self.grounded || self.legacy_ai_steering || self.normal.z <= 0.05 {
            return;
        }
        let travel = self.velocity - self.normal * self.velocity.dot(self.normal);
        let forward =
            (self.forward - self.normal * self.forward.dot(self.normal)).normalize_or_zero();
        if travel.length() < 250. || forward.dot(travel.normalize_or_zero()) >= -0.25 {
            return;
        }
        if let Some(orientation) = &mut self.orientation {
            orientation.rotate(std::f32::consts::PI, self.normal.to_array());
            self.forward = Vec3::from_array(orientation.forward());
        } else {
            self.forward = -forward;
        }
        self.yaw = self.forward.y.atan2(self.forward.x);
        self.riding_switch = !self.riding_switch;
    }
    /// Prepare input and jump charge while the start gate holds position and time.
    pub fn prime_start(&mut self, controls: Controls) {
        if self.phase != Phase::Ready {
            return;
        }
        self.start_rock.tick(
            (if controls.push {
                1.
            } else {
                controls.crouch_axis
            }) - if controls.brake {
                1.
            } else {
                controls.brake_axis
            },
        );
        self.ground_inputs.tick(
            -controls.steer,
            if controls.crouch || controls.push {
                1.
            } else {
                controls.crouch_axis
            },
            controls.brake_axis,
            0.,
            self.board_style,
            self.surface,
            false,
        );
        self.jump_charge = if controls.crouch {
            (self.jump_charge + DT * 2.).min(1.)
        } else {
            0.
        };
    }
    pub fn start_charge(&self) -> f32 {
        self.jump_charge
    }
    pub fn release_start(&mut self) {
        if self.phase == Phase::Ready {
            let bonus = self.start_rock.launch_speed();
            self.velocity += self.forward * bonus;
            if bonus > 30. {
                self.power.start_boost = 0.65;
            }
            self.phase = Phase::Running;
        }
    }
    pub fn tick(&mut self, controls: Controls, terrain: &TerrainContact) {
        if self.phase == Phase::Running
            && let Some(age) = self.returning
        {
            self.elapsed += DT;
            self.objects.events.clear();
            let next = age + DT;
            if age < 0.8 && next >= 0.8 {
                self.return_to_course(terrain);
            }
            self.returning = (next < 1.3).then_some(next);
            return;
        }

        if self.phase == Phase::Finished {
            let race_time = self.elapsed;
            self.finish_elapsed += DT;
            // Keep the collision and recovery solver during the run-out. Input,
            // scoring and the race clock have already ended. Timing is host tuning.
            if !self.grounded || self.finish_elapsed < 3.5 || self.recovery.is_some() {
                self.phase = Phase::Running;
                self.velocity *= (-DT * 0.9).exp();
                self.tick_motion(
                    Controls {
                        brake: self.finish_elapsed > 1.,
                        ..Default::default()
                    },
                    terrain,
                );
            } else {
                self.velocity = Vec3::ZERO;
                self.objects.events.clear();
            }
            self.phase = Phase::Finished;
            self.elapsed = race_time;
            self.progress = 1.;
            self.grind = None;
            self.power.active = false;
            return;
        }
        self.tick_motion(controls, terrain);
    }
    fn tick_motion(&mut self, mut controls: Controls, terrain: &TerrainContact) {
        self.landed_this_tick = false;
        if self.phase != Phase::Running {
            return;
        }
        if let Some(recovery) = &mut self.recovery {
            if self.grounded {
                recovery.elapsed += DT;
            }
            if recovery.elapsed >= recovery.duration {
                self.recovery = None;
            }
        }
        if let Some(recovery) = self.recovery {
            controls.push = false;
            controls.crouch = false;
            controls.crouch_axis = 0.;
            controls.jump = false;
            controls.steer *= if recovery.quality == crate::landing::Quality::Bail {
                0.
            } else {
                0.25 + 0.75 * recovery.fraction()
            };
            // Extra ground drag is a host approximation of the recovery state.
            if self.grounded {
                self.velocity *= (-DT
                    * if recovery.quality == crate::landing::Quality::Bail {
                        1.5
                    } else {
                        0.6
                    })
                .exp();
            }
        }
        self.elapsed += DT;
        self.shove.tick();
        self.return_cooldown = (self.return_cooldown - DT).max(0.);
        self.grind_cooldown = (self.grind_cooldown - DT).max(0.);
        let charge_before_step = self.power.charge;
        self.power
            .tick(controls.boost, self.grounded, self.recovery.is_some(), DT);
        self.objects.events.clear();
        if let Some(mut grind) = self.grind {
            if controls.jump || self.recovery.is_some() {
                self.velocity = grind.tangent(&terrain.rails) * grind.speed + Vec3::Z * 450.;
                self.grind = None;
                self.grounded = false;
                self.grind_cooldown = 0.3;
                self.airborne_grace = 0.12;
            } else {
                let previous = self.position;
                // Original tangent drive, 0x00140b10. Charge selects the effort band.
                let effort = physics::boost_effort(self.power.active, charge_before_step);
                grind.speed +=
                    grind.speed.signum() * effort * physics::RAIL_BOOST_ACCELERATION * DT;
                let attached = grind.step(&terrain.rails, DT, controls.brake);
                self.position = grind.point(&terrain.rails) + Vec3::Z * 2.;
                self.velocity = grind.tangent(&terrain.rails) * grind.speed;
                self.forward = grind.tangent(&terrain.rails) * grind.speed.signum();
                self.yaw = self.forward.y.atan2(self.forward.x);
                self.normal = (Vec3::Z - self.forward * self.forward.z).normalize_or_zero();
                self.surface = terrain.rails[grind.rail].surface;
                self.grounded = attached;
                self.grind = attached.then_some(grind);
                if !attached {
                    self.grind_cooldown = 0.15;
                    // Only rail recapture needs a delay. Landing must remain active.
                    self.airborne_grace = 0.;
                }
                self.touch_scripts(previous, terrain);
                self.update_progress();
                return;
            }
        }
        self.input_a8 = if self.legacy_ai_steering {
            if controls.push { 1. } else { 0. }
        } else {
            physics::boost_effort(self.power.active, charge_before_step)
        };
        // Air spin belongs to the trick pose. It must not also rotate the
        // movement basis that ground forces will use after landing.
        if self.legacy_ai_steering {
            self.yaw -= controls.steer.clamp(-1.0, 1.0) * 2.0 * DT;
        }
        let heading = Vec3::new(self.yaw.cos(), self.yaw.sin(), 0.0);
        let oriented = if self.grounded && !self.legacy_ai_steering && self.normal.z < 0.7 {
            terrain.oriented_contact(self.position, self.normal)
        } else {
            None
        };
        if self.grounded {
            if let Some((_, normal, surface)) = oriented {
                self.normal = normal;
                self.surface = surface;
                let orientation = self.orientation.get_or_insert_with(|| {
                    let right = self.forward.cross(normal).normalize_or_zero();
                    let forward = normal.cross(right).normalize_or_zero();
                    let q = bevy::math::Quat::from_mat3(&bevy::math::Mat3::from_cols(
                        right, forward, normal,
                    ));
                    physics::GroundOrientation([q.w, q.x, q.y, q.z])
                });
                self.forward = Vec3::from_array(orientation.forward());
                physics::contact_depths(
                    &mut self.shallow_depth,
                    &mut self.deep_depth,
                    &self.surfaces[surface.min(17) as usize],
                );
            } else if self.normal.z < 0. {
                // A lost ceiling contact must enter free flight. A downward
                // floor query cannot replace support above an inverted board.
                self.grounded = false;
            } else if let Some(hit) =
                terrain.board_support(self.position, &self.objects, self.surface)
            {
                self.normal = hit.normal;
                self.surface = hit.surface;
                if self.legacy_ai_steering {
                    self.forward =
                        (heading - self.normal * heading.dot(self.normal)).normalize_or_zero();
                } else {
                    let orientation = self
                        .orientation
                        .get_or_insert_with(|| physics::GroundOrientation::from_heading(self.yaw));
                    self.forward = Vec3::from_array(orientation.forward());
                    physics::contact_depths(
                        &mut self.shallow_depth,
                        &mut self.deep_depth,
                        &self.surfaces[self.surface.min(17) as usize],
                    );
                }
            } else {
                self.grounded = false;
            }
        }
        self.correct_reverse_slide();
        self.ground_inputs.tick(
            -controls.steer,
            if controls.crouch || controls.push {
                1.
            } else {
                controls.crouch_axis
            },
            if controls.brake_axis != 0. {
                controls.brake_axis
            } else if controls.brake {
                1.
            } else {
                0.
            },
            self.velocity.length(),
            self.board_style,
            self.surface,
            self.input_a8 > 0.,
        );
        if self.grounded && controls.crouch {
            self.jump_charge = (self.jump_charge + DT * 2.0).min(1.0);
        }
        if self.grounded && controls.jump {
            // Magnitude from 0x00112008. Charge mapping and direction are temporary.
            let speed = self.velocity.length();
            let speed_gain = if speed < 993.4801 {
                speed * 0.88093346 + 24.678448
            } else {
                899.86835
            };
            let charge = self.jump_charge.max(0.7);
            let magnitude =
                charge * charge * (128.0 * 0.78700274 * 0.003921569 + 0.09851468) * speed_gain;
            self.velocity += (self.normal + self.forward * 0.2).normalize_or_zero() * magnitude;
            self.grounded = false;
            self.airborne_grace = 0.12;
            self.jump_charge = 0.0;
        }
        let previous = self.position;
        let was_grounded = self.grounded;
        if self.grounded {
            let ground_forward =
                (self.forward - self.normal * self.forward.dot(self.normal)).normalize_or_zero();
            let lateral = self.normal.cross(ground_forward).normalize_or_zero();
            let hit = terrain.board_support(self.position, &self.objects, self.surface);
            let contact_height = oriented.map_or_else(
                || (self.position.z - hit.unwrap().height - 2.) * self.normal.z,
                |(p, n, _)| (self.position - p).dot(n) - 2.,
            );

            let state = ForceState {
                velocity: self.velocity.extend(0.0).to_array(),
                board_axis: self.forward.extend(0.0).to_array(),
                speed: self.velocity.length(),
                heading: self.yaw,
                reference_heading: if self.legacy_ai_steering {
                    self.yaw
                } else {
                    self.course_heading()
                },
                stance: self.rider_stats.preferred_stance ^ i32::from(self.riding_switch),
                board_style: self.board_style,
                motion_state: 0,
                animation_state: 0,
                input_a8: self.input_a8,
                input_ac: if self.power.super_boost > 0.
                    || (self.legacy_ai_steering && self.power.active)
                {
                    1.
                } else {
                    0.
                },
                input_18c: if self.legacy_ai_steering {
                    if controls.brake { 1. } else { 0. }
                } else {
                    self.ground_inputs.brake.value
                },
                input_198: if self.legacy_ai_steering {
                    if controls.crouch { 1. } else { 0. }
                } else {
                    self.ground_inputs.crouch.value
                },
                input_1a4: if self.legacy_ai_steering {
                    controls.steer
                } else {
                    self.ground_inputs.steer.value
                },
                ground_forward_z: ground_forward.z,
                surface_kind: self.surface,
                height: if self.legacy_ai_steering {
                    (self.position.z - hit.unwrap().height) * self.normal.z - 5.
                } else {
                    contact_height
                },
                shallow_depth: if self.legacy_ai_steering {
                    5.
                } else {
                    self.shallow_depth
                },
                deep_depth: if self.legacy_ai_steering {
                    20.
                } else {
                    self.deep_depth
                },
                stats: self.rider_stats,
            };
            // Unknown terrain IDs use profile 1 only within this test host.
            let surface = &self.surfaces[if self.surface < 18 {
                self.surface as usize
            } else {
                1
            }];
            let gravity = surface.coefficient(0);
            let mut normal = physics::normal_force(
                state.height,
                self.velocity.dot(self.normal),
                &state,
                surface,
            );
            let longitudinal = physics::longitudinal_force(
                self.velocity.dot(ground_forward),
                normal / gravity.max(1.0),
                &state,
                surface,
            ) + physics::drive_force(&state, surface)
                + if self.power.active && !self.legacy_ai_steering && self.power.super_boost <= 0. {
                    // Host boost-strength adjustment. Keep native force arithmetic
                    // and its braking/heading gates intact. Scale only boost drive.
                    let mut unboosted = state;
                    unboosted.input_a8 = 0.;
                    3. * (physics::drive_force(&state, surface)
                        - physics::drive_force(&unboosted, surface))
                    .max(0.)
                } else {
                    0.
                };
            let sideways = physics::lateral_force(
                self.velocity.dot(lateral),
                self.velocity.dot(ground_forward),
                state.input_1a4,
                &state,
                surface,
            );
            // 0x0013fcb0 clamps after evaluating longitudinal/lateral forces.
            // Inverted contact cannot pull the rider toward the ceiling.
            if self.normal.z < 0. {
                normal = normal.max(0.);
            }
            // Controls use positive-right. The original bank uses positive-left.
            let (bank_normal, carve) = if self.legacy_ai_steering {
                (normal, 0.)
            } else {
                physics::banked_contact_force(normal, gravity, state.input_1a4)
            };
            let mut acceleration = self.normal * bank_normal
                + lateral * carve
                + ground_forward * longitudinal
                + lateral * sideways
                - Vec3::Z * gravity;
            if !self.legacy_ai_steering {
                let penetration = (state.deep_depth + state.height).max(-10.);
                if penetration < 0. {
                    self.position -= self.normal * penetration;
                    self.velocity -= self.normal * self.velocity.dot(self.normal);
                    acceleration -= self.normal * acceleration.dot(self.normal).min(0.);
                }
            }
            self.position += self.velocity * DT;
            self.velocity += acceleration * DT;
            // Ground orientation follows slip plus the original style-dependent steering
            // angle. It must not accumulate yaw while the actual path stays unchanged.
            let speed = self.velocity.length();
            if !self.legacy_ai_steering && speed > f32::EPSILON {
                let travel = self.velocity / speed;
                let contour = self.normal.cross(Vec3::Z);
                let grade = if contour.length() > physics::GRADE_EPSILON {
                    self.normal.cross(contour).normalize_or_zero()
                } else {
                    ground_forward
                };
                let turn = physics::ground_turn_angle(
                    state.input_1a4,
                    state.input_198,
                    self.board_style,
                    speed,
                    travel.dot(ground_forward),
                    travel.cross(ground_forward).dot(self.normal),
                    travel.dot(grade),
                    DT,
                );
                self.orientation
                    .as_mut()
                    .unwrap()
                    .rotate(turn, self.normal.to_array());
                self.forward = Vec3::from_array(self.orientation.unwrap().forward());
                self.yaw = self.forward.y.atan2(self.forward.x);
            }
        } else {
            self.orientation = None;
            let mut motion = Motion {
                position: self.position.extend(1.0).to_array(),
                velocity: self.velocity.extend(0.0).to_array(),
            };
            physics::step_air(&mut motion, DT);
            self.position = Vec3::from_slice(&motion.position[..3]);
            self.velocity = Vec3::from_slice(&motion.velocity[..3]);
            self.forward = heading;
        }
        // Sweep the rider body through the entire step. Radius and height remain host parameters.
        let body_up = if oriented.is_some() {
            self.normal
        } else {
            Vec3::Z
        };
        let offset = body_up * 65.0;
        let mut center = previous + offset;
        let mut remaining = self.position - previous;
        let mut ignored = std::collections::HashSet::new();
        let mut touched = std::collections::HashSet::new();
        let mut collided = false;
        // A sweep only removes inward motion. Resolve an existing overlap too,
        // otherwise each following tick can remain blocked at time zero.
        for _ in 0..6 {
            let correction = [30., 70., 110.]
                .into_iter()
                .filter_map(|h| {
                    terrain.objects.penetration_contact(
                        center + body_up * (h - 65.),
                        28.,
                        &self.objects.disabled,
                    )
                })
                .max_by(|a, b| a.0.length_squared().total_cmp(&b.0.length_squared()));
            let Some((correction, object)) = correction else {
                break;
            };
            if let Some(object) = object {
                let first_contact = touched.insert(object);
                if first_contact {
                    let normal = correction.normalize_or_zero();
                    self.objects.contact_with_velocity(
                        object,
                        &terrain.objects.properties,
                        &terrain.objects.scripts,
                        (normal * self.velocity.dot(normal).min(0.)).to_array(),
                    );
                }
                if self.objects.disabled.contains(&object) {
                    if first_contact {
                        self.velocity = debris_resistance(
                            self.velocity,
                            correction.normalize_or_zero(),
                            terrain.objects.properties[object].mass,
                        );
                    }
                    continue;
                }
            }
            center += correction;
            collided = true;
        }
        for _ in 0..12 {
            let hit = [30.0, 70.0, 110.0]
                .into_iter()
                .filter_map(|height| {
                    terrain.objects.sweep(
                        center + body_up * (height - 65.0),
                        remaining,
                        28.0,
                        &self.objects.disabled,
                        &ignored,
                    )
                })
                .min_by(|a, b| a.time.total_cmp(&b.time));
            let Some(hit) = hit else {
                center += remaining;
                break;
            };
            collided = true;
            if let Some(object) = hit.object {
                let first_contact = touched.insert(object);
                if first_contact {
                    self.objects.contact_with_velocity(
                        object,
                        &terrain.objects.properties,
                        &terrain.objects.scripts,
                        (hit.normal * self.velocity.dot(hit.normal).min(0.)).to_array(),
                    );
                }
                if self.objects.disabled.contains(&object)
                    || !terrain.objects.properties[object].response_enabled()
                {
                    if first_contact && self.objects.disabled.contains(&object) {
                        self.velocity = debris_resistance(
                            self.velocity,
                            hit.normal,
                            terrain.objects.properties[object].mass,
                        );
                    }
                    ignored.insert(object);
                    continue;
                }
            }
            center += remaining * hit.time + hit.normal * 0.02;
            remaining *= 1.0 - hit.time;
            remaining -= hit.normal * remaining.dot(hit.normal).min(0.0);
            self.velocity -= hit.normal * self.velocity.dot(hit.normal).min(0.0);
            if remaining.length_squared() < 0.0001 {
                break;
            }
        }
        if collided {
            self.position = center - offset;
        }
        self.airborne_grace = (self.airborne_grace - DT).max(0.0);
        let swept_contact = if !was_grounded
            && !self.power.lift_active()
            && let Some((position, hit)) = terrain.swept_board(previous, self.position)
            && self.velocity.dot(hit.normal) <= 0.
        {
            self.position = position;
            self.airborne_grace = 0.;
            // The ordinary landing branch below applies the impact response once.
            self.normal = hit.normal;
            Some(hit)
        } else {
            None
        };
        let high = previous.z.max(self.position.z) + if self.grounded { 60.0 } else { 2.0 };
        let query = Vec3::new(self.position.x, self.position.y, high);
        let mut support = swept_contact.or_else(|| terrain.below(query, self.position.z - 200.0));
        if let Some((height, normal)) =
            terrain
                .objects
                .ground_below(query, self.position.z - 200.0, &self.objects.disabled)
            && support.is_none_or(|hit| height > hit.height)
        {
            // Object material response still needs reconstruction. Retain the previous profile.
            support = Some(Contact {
                height,
                normal,
                surface: self.surface,
            });
        }
        if !self.power.lift_active() {
            // A compressed airborne board is still a landing. Search along the
            // receiving normal when the vertical query starts below the bank.
            if let Some(hit) = terrain.closest_snow(self.position, support)
                && (was_grounded
                    || (self.airborne_grace == 0. && self.velocity.dot(hit.normal) <= 0.))
            {
                support = Some(hit);
            }
        }
        let next_oriented = if self.grounded && oriented.is_some() {
            terrain.oriented_contact(self.position, self.normal)
        } else {
            None
        };
        if let Some((point, normal, surface)) = next_oriented {
            self.normal = normal;
            self.surface = surface;
            self.velocity = Vec3::from_array(physics::ground_velocity(
                self.velocity.to_array(),
                normal.to_array(),
                surface,
            ));
            self.grounded = (self.position - point).dot(normal) - 2.
                <= self.surfaces[surface.min(17) as usize].coefficient(5);
            if self.grounded {
                self.orientation
                    .as_mut()
                    .unwrap()
                    .align_contact(normal.to_array(), surface);
                self.forward = Vec3::from_array(self.orientation.unwrap().forward());
                self.yaw = self.forward.y.atan2(self.forward.x);
            }
        } else if oriented.is_some() && self.grounded {
            self.grounded = false;
        } else if let Some(hit) = support {
            if self.grounded && !self.legacy_ai_steering {
                self.normal = hit.normal;
                self.surface = hit.surface;
                self.velocity = Vec3::from_array(physics::ground_velocity(
                    self.velocity.to_array(),
                    self.normal.to_array(),
                    self.surface,
                ));
                self.grounded = (self.position.z - hit.height - 2.) * self.normal.z
                    <= self.surfaces[self.surface.min(17) as usize].coefficient(5);
                if self.grounded {
                    self.orientation
                        .as_mut()
                        .unwrap()
                        .align_contact(self.normal.to_array(), self.surface);
                    self.forward = Vec3::from_array(self.orientation.unwrap().forward());
                    self.yaw = self.forward.y.atan2(self.forward.x);
                }
            } else if !self.power.lift_active()
                && (self.airborne_grace == 0.0 || previous.z >= hit.height + 1.)
                // Sweeps stop exactly at contact. Re-evaluating the plane can
                // leave a positive rounding residual, especially on steep banks.
                // Rejecting that contact pins the board there on every tick.
                && hit.board_distance(self.position) <= 0.05
                && self.velocity.dot(hit.normal) <= 0.0
            {
                let landing_quality = crate::landing::contact(self.velocity, hit.normal);
                self.landed_this_tick = !self.grounded;
                // Resolve compression along the surface normal. A vertical snap
                // on a steep bank can move the rider metres up the slope.
                let depth = (self.position.z - hit.height - 2.) * hit.normal.z;
                self.position -= hit.normal * depth;
                self.velocity -= hit.normal * self.velocity.dot(hit.normal);
                if self.landed_this_tick {
                    self.recover(landing_quality);
                }
                self.normal = hit.normal;
                self.surface = hit.surface;
                self.grounded = true;
            } else if self.position.z > hit.height + 50.0 {
                self.grounded = false;
            }
        } else {
            self.grounded = false;
        }
        if self.grind_cooldown == 0. && self.recovery.is_none() && !self.power.lift_active() {
            if let Some(grind) =
                crate::rails::capture(&terrain.rails, previous, self.position, self.velocity)
            {
                self.position = grind.point(&terrain.rails) + Vec3::Z * 2.;
                self.velocity = grind.tangent(&terrain.rails) * grind.speed;
                self.grind = Some(grind);
                self.grounded = true;
                self.surface = terrain.rails[grind.rail].surface;
            }
        }
        self.touch_scripts(previous, terrain);
        let power_events = self.power.sweep(
            previous,
            self.position,
            &mut self.velocity,
            &terrain.powerups,
        );
        self.objects.events.extend(power_events);
        if self.power.lift_active() {
            self.grounded = false;
            self.airborne_grace = 0.12;
        }
        let stalled = self.position.distance(previous) < 40. * DT;
        let wants_motion = controls.push
            || controls.crouch
            || controls.crouch_axis > 0.1
            || controls.steer.abs() > 0.2;
        // Recovery only advances on the ground. If collision holds an airborne
        // rider still, waiting for recovery to finish would prevent return forever.
        let blocked_in_air = !self.grounded && (collided || support.is_some());
        let blocked_on_ground = !controls.brake
            && controls.brake_axis < 0.1
            && self.recovery.is_none()
            && (collided || wants_motion);
        if self.return_cooldown == 0.
            && !self.power.lift_active()
            && self.grind.is_none()
            && stalled
            && (blocked_in_air || blocked_on_ground)
        {
            self.stuck_time += DT;
            if self.stuck_time >= 2. {
                self.request_return();
            }
        } else {
            self.stuck_time = 0.;
        }
        self.check_course_support(terrain);
        self.update_progress();
        if !self.position.is_finite() || !self.velocity.is_finite() {
            self.request_return();
        }
    }
    fn touch_scripts(&mut self, previous: Vec3, terrain: &TerrainContact) {
        for object in
            terrain
                .objects
                .reset_contacts(previous, self.position, 6., &self.objects.disabled)
        {
            self.objects.contact_with_velocity(
                object,
                &terrain.objects.properties,
                &terrain.objects.scripts,
                self.velocity.to_array(),
            );
        }
        for &object in &terrain.script_triggers {
            let p = &terrain.objects.properties[object];
            let reset_zone = terrain
                .objects
                .scripts
                .contact_program(p)
                .and_then(|n| terrain.objects.scripts.programs.get(n))
                .is_some_and(|program| program.iter().any(|e| e.kind == 12));
            // Reset objects use their authored collision faces. A rotated bank's
            // world AABB can also enclose the playable lift or road beside it.
            if reset_zone {
                continue;
            }
            if crate::powerups::crosses(
                previous + Vec3::Z * 60.,
                self.position + Vec3::Z * 60.,
                Vec3::from_array(p.bounds[0]) - Vec3::splat(35.),
                Vec3::from_array(p.bounds[1]) + Vec3::splat(35.),
            ) {
                self.objects.contact_with_velocity(
                    object,
                    &terrain.objects.properties,
                    &terrain.objects.scripts,
                    self.velocity.to_array(),
                );
            }
        }
        let reset = self
            .objects
            .events
            .iter()
            .any(|e| matches!(e, crate::object_rules::ObjectEvent::ReturnToCourse { .. }));
        for event in &self.objects.events {
            if let crate::object_rules::ObjectEvent::RiderEffect { kind, value, .. } = event {
                if *kind != 13 || self.score_pickups {
                    self.power.script_effect(*kind, *value);
                }
            }
        }
        if reset {
            self.request_return();
        }
    }
    pub fn request_return(&mut self) -> bool {
        if self.phase != Phase::Running || self.return_cooldown > 0. || self.returning.is_some() {
            return false;
        }
        self.returning = Some(0.);
        self.return_requests += 1;
        self.grind = None;
        self.power.bail();
        true
    }
    pub fn return_opacity(&self) -> f32 {
        self.returning.map_or(0., |age| {
            if age < 0.8 {
                ((age - 0.2) / 0.3).clamp(0., 1.)
            } else {
                (1. - (age - 0.8) / 0.5).clamp(0., 1.)
            }
        })
    }
    /// Course return uses original path exclusion zones and the 30 km/h restart
    /// speed from 0x001071f0. Destination clearance and stuck detection are host logic.
    pub fn return_to_course(&mut self, terrain: &TerrainContact) -> bool {
        if self.phase != Phase::Running || self.return_cooldown > 0. {
            return false;
        }
        let reference =
            if self.position.is_finite() && self.position.z > self.safe_position.z - 1200. {
                self.position
            } else {
                self.safe_position
            };
        // Use all segments and include height so stacked city routes cannot alias.
        let mut candidates = Vec::new();
        for path in &self.network.race {
            let mut start = Vec3::from_array(path.origin);
            let mut along = 0.;
            for segment in &path.segments {
                let dir = Vec3::from_array(segment.direction);
                let offset = ((reference - start).dot(dir) / dir.length_squared().max(0.001))
                    .clamp(0., segment.length);
                for back in [0., 400., 800.] {
                    let mut distance = (along + offset - back).max(0.);
                    let point = Vec3::from_array(path.adjusted_sample(&mut distance));
                    let direction = Vec3::from_array(
                        path.direction(distance)
                            .unwrap_or(self.safe_forward.to_array()),
                    );
                    candidates.push((point.distance_squared(reference), point, direction));
                }
                start += dir * segment.length;
                along += segment.length;
            }
        }
        candidates.sort_by(|a, b| a.0.total_cmp(&b.0));
        // The last supported point is the fallback if imported routes lack contact.
        candidates.push((f32::MAX, self.safe_position, self.safe_forward));
        let destination = candidates.into_iter().find_map(|(_, point, direction)| {
            let hit = terrain.support(
                point + Vec3::Z * 300.,
                point.z - 600.,
                &self.objects,
                self.surface,
            )?;
            if hit.normal.z < 0.45 {
                return None;
            }
            let position = Vec3::new(point.x, point.y, hit.height + 2.);
            let clear = [32., 72., 112.].into_iter().all(|h| {
                terrain
                    .objects
                    .penetration(position + Vec3::Z * h, 28., &self.objects.disabled)
                    .is_none()
            });
            let escape =
                (direction - hit.normal * direction.dot(hit.normal)).normalize_or_zero() * 250.;
            let clear_ahead = [32., 72., 112.].into_iter().all(|h| {
                terrain
                    .objects
                    .sweep(
                        position + Vec3::Z * h,
                        escape,
                        28.,
                        &self.objects.disabled,
                        &Default::default(),
                    )
                    .is_none()
            });
            (clear && clear_ahead).then_some((position, direction, hit))
        });
        let Some((position, direction, hit)) = destination else {
            return false;
        };
        self.position = position;
        self.forward = (direction - hit.normal * direction.dot(hit.normal)).normalize_or_zero();
        self.yaw = self.forward.y.atan2(self.forward.x);
        self.velocity = self.forward * 833.3333;
        self.normal = hit.normal;
        self.surface = hit.surface;
        self.grounded = true;
        self.riding_switch = false;
        self.orientation = None;
        self.ground_inputs = Default::default();
        self.grind = None;
        self.grind_cooldown = 0.5;
        self.airborne_grace = 0.;
        self.jump_charge = 0.;
        self.recovery = None;
        self.power.bail();
        self.shove = Default::default();
        self.unsupported_time = 0.;
        self.stuck_time = 0.;
        self.return_cooldown = 2.;
        self.landed_this_tick = false;
        self.safe_position = position;
        self.safe_forward = self.forward;
        self.respawns += 1;
        true
    }
    fn check_course_support(&mut self, terrain: &TerrainContact) {
        let contact = terrain.support(
            self.position + Vec3::Z * 100.,
            self.position.z - 300.,
            &self.objects,
            self.surface,
        );
        if self.grounded
            && let Some(hit) = contact
        {
            // Original suspension permits compression below the contact plane.
            // Track a recovery point without changing that force integration.
            if hit.normal.z > 0.3 && self.grind.is_none() && !self.power.lift_active() {
                self.safe_position = Vec3::new(self.position.x, self.position.y, hit.height + 2.);
                self.safe_forward = self.forward;
            }
            self.unsupported_time = 0.;
        } else {
            self.unsupported_time += DT;
        }
        if self.power.lift_active() {
            self.unsupported_time = 0.;
            return;
        }
        if self.unsupported_time < 0.75
            || self.velocity.z >= 0.
            || self.position.z >= self.safe_position.z - 1200.
        {
            return;
        }
        let below_route = self
            .network
            .race
            .iter()
            .filter_map(|p| p.project(self.position.to_array()))
            .min_by(|a, b| a.lateral.total_cmp(&b.lateral))
            .is_some_and(|q| self.position.z < q.point[2] - 1200.);
        let no_floor = terrain
            .support(
                self.position + Vec3::Z * 20.,
                self.position.z - 5000.,
                &self.objects,
                self.surface,
            )
            .is_none();
        if no_floor
            && (below_route
                || (self.unsupported_time > 2. && self.position.z < self.safe_position.z - 1800.))
        {
            self.request_return();
        }
    }
    fn update_progress(&mut self) {
        let span = (self.start_remaining - self.finish_remaining).max(1.0);
        let remaining = self.remaining();
        self.progress = ((self.start_remaining - remaining) / span).clamp(0.0, 1.0);
        // Tokyo's lower route passes below the finish route in XY. A path
        // projection alone cannot distinguish these stacked course sections.
        let near_finish = remaining <= self.finish_remaining + 1.
            && self.network.race.iter().any(|p| {
                p.events.iter().filter(|e| e.kind == 10).any(|e| {
                    let delta = self.position - Vec3::from_array(p.sample(e.start).0);
                    delta.truncate().length() < 5000. && delta.z.abs() < 2000.
                })
            });
        if near_finish {
            self.progress = 1.;
            self.phase = Phase::Finished;
        }
    }
}

#[cfg(test)]
mod steering_regression {
    use super::*;
    #[test]
    #[ignore = "requires original ground instruction traces and Snowdream assets"]
    fn player_movement_matches_original_ground_trace() {
        let cases: serde_json::Value =
            serde_json::from_slice(&std::fs::read("analysis/ground_movement_cases.json").unwrap())
                .unwrap();
        let path = std::path::Path::new("extracted/DATA/MODELS/SNOW.BIG");
        let (mut level, _) = crate::load_track(path).unwrap();
        let original = TerrainContact::from_level(&level);
        let mut patch = level.patches[0].clone();
        patch.coefficients = [[0.; 3]; 16];
        patch.coefficients[0] = [-10000., -10000., 0.];
        patch.coefficients[1] = [20000., 0., 0.];
        patch.coefficients[4] = [0., 20000., 0.];
        patch.surface_type = 1;
        level.instances.clear();
        level.rails.clear();
        let mut max_error = Vec3::ZERO;
        for case in cases.as_array().unwrap() {
            let speed = case["speed"].as_f64().unwrap() as f32;
            let steer = -case["steer"].as_f64().unwrap() as f32;
            let slope = case["slope"].as_f64().unwrap() as f32;
            let surface = case["surface"].as_u64().unwrap() as u32;
            patch.surface_type = surface;
            patch.coefficients[0][2] = -10000. * slope;
            patch.coefficients[4][2] = 20000. * slope;
            level.patches = vec![patch.clone()];
            let terrain = TerrainContact::from_level(&level);
            let mut s = Session::new(crate::load_track_paths(path).unwrap(), &original).unwrap();
            s.position = Vec3::Z * 2.;
            s.network.race.clear();
            s.spawn_direction = Vec3::Y;
            s.phase = Phase::Running;
            s.yaw = std::f32::consts::FRAC_PI_2;
            s.forward = Vec3::Y;
            s.normal = Vec3::new(0., -slope, 1.).normalize();
            s.velocity = Vec3::new(0., 1., slope).normalize() * speed;
            s.board_style = case["style"].as_i64().unwrap() as i32;
            s.surface = surface;
            s.shallow_depth = s.surfaces[surface as usize].coefficient(6);
            s.deep_depth = s.surfaces[surface as usize].coefficient(7);
            for (frame, expected) in case["frames"].as_array().unwrap().iter().enumerate() {
                // Soft-surface depth caps are discontinuous. Replay their recorded
                // starting state to test each real player step without accumulating
                // differences from the provisional triangle-contact adapter.
                if surface == 3 || surface == 4 {
                    let previous = if frame == 0 {
                        &case["initial"]
                    } else {
                        &case["frames"][frame - 1]
                    };
                    let floats = |name: &str| {
                        std::array::from_fn::<_, 4, _>(|i| {
                            previous[name][i].as_f64().unwrap() as f32
                        })
                    };
                    s.position = Vec3::from_slice(&floats("position")[..3]);
                    s.velocity = Vec3::from_slice(&floats("velocity")[..3]);
                    s.orientation = Some(physics::GroundOrientation(floats("quaternion")));
                    s.forward = Vec3::from_slice(&floats("forward")[..3]);
                    s.yaw = s.forward.y.atan2(s.forward.x);
                    let signal = |name: &str| physics::InputSignal {
                        value: previous[name][0].as_f64().unwrap() as f32,
                        rate: previous[name][1].as_f64().unwrap() as f32,
                        target: previous[name][2].as_f64().unwrap() as f32,
                    };
                    s.ground_inputs = physics::GroundInputs {
                        steer: signal("steering"),
                        brake: signal("brake"),
                        crouch: signal("crouch"),
                    };
                }
                s.tick(
                    Controls {
                        steer: -expected["input"]["steer"].as_f64().unwrap() as f32,
                        brake: expected["input"]["brake"].as_f64().unwrap() > 0.,
                        crouch: expected["input"]["crouch"].as_f64().unwrap() > 0.,
                        ..Default::default()
                    },
                    &terrain,
                );
                let vector = |name: &str| {
                    Vec3::new(
                        expected[name][0].as_f64().unwrap() as f32,
                        expected[name][1].as_f64().unwrap() as f32,
                        expected[name][2].as_f64().unwrap() as f32,
                    )
                };
                let velocity = vector("velocity");
                max_error = max_error.max(Vec3::new(
                    s.position.distance(vector("position")),
                    s.velocity.distance(velocity),
                    s.forward.distance(vector("forward")),
                ));
                assert!(
                    s.grounded,
                    "Synthetic ground trace lost support at frame={frame}"
                );
                assert!(
                    s.velocity.distance(velocity) < 0.1,
                    "Original movement mismatch at speed={speed}, steer={steer}, slope={slope}, surface={surface}, style={}, frame={frame}: host={:?}, original={velocity:?}",
                    s.board_style,
                    s.velocity
                );
                assert!(
                    s.forward.distance(vector("forward")) < 0.002,
                    "Original board orientation mismatch at frame={frame}"
                );
                assert!(
                    s.position.distance(vector("position")) < 0.1,
                    "Original position mismatch at frame={frame}: {:?} vs {:?}",
                    s.position,
                    vector("position")
                );
            }
        }
        println!(
            "36 traces: 24 continuous, 12 with recorded starts per step. Maximum position/velocity/direction errors: {max_error:?}"
        );
    }
    #[test]
    #[ignore = "requires original Snowdream assets"]
    fn grounded_turn_changes_travel_direction() {
        let path = std::path::Path::new("extracted/DATA/MODELS/SNOW.BIG");
        let (mut level, _) = crate::load_track(path).unwrap();
        let original = TerrainContact::from_level(&level);
        let spawn = Session::new(crate::load_track_paths(path).unwrap(), &original)
            .unwrap()
            .position;
        let mut patch = level.patches[0].clone();
        patch.coefficients = [[0.; 3]; 16];
        patch.coefficients[0] = [spawn.x - 10000., spawn.y - 10000., spawn.z - 2.];
        patch.coefficients[1] = [20000., 0., 0.];
        patch.coefficients[4] = [0., 20000., 0.];
        patch.surface_type = 1;
        level.patches = vec![patch];
        level.instances.clear();
        level.rails.clear();
        let terrain = TerrainContact::from_level(&level);
        for (steer, legacy, style, speed) in [
            (-0.5, true, 1, 2000.),
            (-0.5, false, 1, 2000.),
            (0.5, false, 1, 2000.),
            (-0.5, false, 0, 2000.),
            (0.5, false, 2, 2000.),
            (-0.5, false, 1, 700.),
            (0.5, false, 1, 3500.),
        ] {
            let mut s = Session::new(crate::load_track_paths(path).unwrap(), &terrain).unwrap();
            s.phase = Phase::Running;
            s.yaw = std::f32::consts::FRAC_PI_2;
            s.forward = Vec3::Y;
            s.velocity = Vec3::Y * speed;
            s.board_style = style;
            s.rider_stats = crate::equipment::catalog()[3].physics_stats(8);
            if legacy {
                s.rider_stats.stat_13 = 128;
            }
            let mut grounded = 0;
            for _ in 0..60 {
                s.tick(
                    Controls {
                        steer,
                        ..Default::default()
                    },
                    &terrain,
                );
                grounded += s.grounded as usize;
            }
            let board = s.forward.x.atan2(s.forward.y).to_degrees();
            let travel = s.velocity.x.atan2(s.velocity.y).to_degrees();
            println!(
                "legacy={legacy} style={style} initial_speed={speed} steer={steer}: board={board:.2}deg travel={travel:.2}deg speed={:.2} grounded={grounded}/60",
                s.velocity.length()
            );
            assert!(grounded >= 55, "Fixture lost ground contact");
            assert!(
                travel * steer.signum() > 10.,
                "Board turns but trajectory stays straight: board={board:.2}, travel={travel:.2}"
            );
            assert!(
                (board - travel).abs() < 25.,
                "Board rotated too far ahead of travel"
            );
            let slip = s.forward.angle_between(s.velocity.normalize());
            for _ in 0..120 {
                s.tick(Controls::default(), &terrain);
                assert!(s.grounded, "Release fixture lost ground contact");
            }
            assert!(
                s.forward.angle_between(s.velocity.normalize()) < slip * 0.5,
                "Board did not settle toward travel after releasing steering"
            );

            // Air steering must not redirect momentum. Tricks and camera heading
            // remain independent of the board's airborne yaw.
            s.position.z += 10000.;
            s.grounded = false;
            s.velocity = Vec3::Y * 2000. + Vec3::Z * 200.;
            for _ in 0..30 {
                s.tick(
                    Controls {
                        steer: 1.,
                        ..Default::default()
                    },
                    &terrain,
                );
                assert!(!s.grounded);
                assert!(
                    s.velocity.x.abs() < 0.001,
                    "Ground carving leaked into flight"
                );
            }
        }
    }
}

#[cfg(test)]
mod collision_regression {
    use super::*;
    #[test]
    #[ignore = "requires the extracted disc"]
    fn fast_rider_cannot_cross_a_wall() {
        let path = std::path::Path::new("extracted/DATA/MODELS/SNOW.BIG");
        let (mut level, _) = crate::load_track(path).unwrap();
        let terrain = TerrainContact::from_level(&level);
        let mut session = Session::new(crate::load_track_paths(path).unwrap(), &terrain).unwrap();
        level.patches.clear();
        level.prefabs.clear();
        level.effects.collision_models = vec![vec![crate::object_rules::Hull {
            vertices: vec![
                [-500., 0., -100.],
                [500., 0., -100.],
                [500., 0., 400.],
                [-500., 0., 400.],
            ],
            indices: vec![0, 1, 2, 0, 2, 3],
        }]];
        level.instances = vec![crate::model::Instance {
            lighting: Default::default(),
            prefab: 0,
            transform: bevy::math::Mat4::IDENTITY.to_cols_array(),
            properties: crate::object_rules::Properties {
                flags: 0xa1,
                collision_mode: 1,
                collision_model: 0,
                effect_slot: -1,
                mass: 1e30,
                ..Default::default()
            },
        }];
        let terrain = TerrainContact::from_level(&level);
        session.position = Vec3::new(0., -100., 2.);
        session.velocity = Vec3::new(0., 12000., 0.);
        session.grounded = false;
        session.phase = Phase::Running;
        session.tick(Controls::default(), &terrain);
        assert!(
            session.position.y < 0.,
            "Rider crossed wall: {:?}",
            session.position
        );

        // Rotated and translated collision must use the object's full placement.
        let placement = bevy::math::Mat4::from_rotation_translation(
            bevy::math::Quat::from_rotation_z(0.71),
            Vec3::new(1700., -800., 0.),
        );
        level.instances[0].transform = placement.to_cols_array();
        let terrain = TerrainContact::from_level(&level);
        session.position = placement.transform_point3(Vec3::new(0., -100., 2.));
        session.velocity = placement.transform_vector3(Vec3::new(0., 12000., 0.));
        session.tick(Controls::default(), &terrain);
        assert!(placement.inverse().transform_point3(session.position).y < 0.);

        // Contact-only objects must not acquire solid response from their geometry.
        level.instances[0].transform = bevy::math::Mat4::IDENTITY.to_cols_array();
        level.instances[0].properties.flags = 0x21;
        let terrain = TerrainContact::from_level(&level);
        session.position = Vec3::new(0., -100., 2.);
        session.velocity = Vec3::new(0., 12000., 0.);
        session.tick(Controls::default(), &terrain);
        assert!(session.position.y > 0.);

        // A recovered disable/sound script must run before the solid response.
        level.instances[0].properties.flags = 0xa1;
        level.instances[0].properties.effect_slot = 0;
        level.effects.scripts = crate::object_rules::Scripts {
            slots: vec![[-1, 0, -1, -1, -1, -1, -1]],
            programs: vec![vec![
                crate::object_rules::Effect {
                    kind: 0,
                    words: vec![5, 2],
                },
                crate::object_rules::Effect {
                    kind: 7,
                    words: vec![64],
                },
            ]],
        };
        let terrain = TerrainContact::from_level(&level);
        session.position = Vec3::new(0., -100., 2.);
        session.velocity = Vec3::new(0., 12000., 0.);
        session.tick(Controls::default(), &terrain);
        assert!(session.position.y > 0.);
        assert!(session.objects.disabled.contains(&0));
        assert_eq!(session.objects.events.len(), 1);
        session.phase = Phase::Paused;
        let position = session.position;
        session.tick(Controls::default(), &terrain);
        assert_eq!(session.position, position);
        session.reset();
        assert!(session.objects.disabled.is_empty());
        assert!(session.objects.events.is_empty());
    }
}

#[cfg(test)]
mod slope_landing_regression {
    use super::*;
    #[test]
    #[ignore = "requires the original disc"]
    fn oblique_slope_touchdown_exits_air_without_course_return() {
        for degrees in [20f32, 45., 65., 80.] {
            let (base, terrain) = slope_surface(degrees.to_radians(), 1);
            for heading in (0..360).step_by(15) {
                for speed in [0., 600., 1800.] {
                    let angle = (heading as f32).to_radians();
                    let mut network = base.network.clone();
                    network.race.clear();
                    network.ai[network.starts[0]].segments[0].direction =
                        [angle.cos(), angle.sin(), 0.];
                    let mut rider = Session::new(network, &terrain).unwrap();
                    rider.phase = Phase::Running;
                    rider.position = Vec3::Z * 2. + rider.normal * 0.01;
                    rider.forward = Vec3::new(angle.cos(), angle.sin(), 0.);
                    let tangent = (rider.forward - rider.normal * rider.forward.dot(rider.normal))
                        .normalize_or_zero();
                    rider.velocity = tangent * speed - rider.normal * 120.;
                    rider.grounded = false;
                    rider.recovery = None;
                    let mut contact = false;
                    for _ in 0..90 {
                        rider.tick(Controls::default(), &terrain);
                        contact |= rider.landed_this_tick;
                        assert!(
                            rider.returning.is_none(),
                            "{degrees}/{heading}/{speed}: reset masked failed contact"
                        );
                    }
                    assert!(
                        contact,
                        "{degrees}/{heading}/{speed}: no touchdown, position {:?}, velocity {:?}, normal {:?}, grounded {}",
                        rider.position, rider.velocity, rider.normal, rider.grounded
                    );
                    assert!(
                        rider.grounded,
                        "{degrees}/{heading}/{speed}: still airborne at {:?}, velocity {:?}",
                        rider.position, rider.velocity
                    );
                }
            }
        }
    }
    fn slope_surface(angle: f32, surface: u32) -> (Session, TerrainContact) {
        let path = std::path::Path::new("extracted/DATA/MODELS/SNOW.BIG");
        let (mut level, _) = crate::load_track(path).unwrap();
        let mut patch = level.patches[0].clone();
        patch.coefficients = [[0.; 3]; 16];
        patch.coefficients[0] = [-10000., -10000., 10000. * angle.tan()];
        patch.coefficients[1] = [20000., 0., -20000. * angle.tan()];
        patch.coefficients[4] = [0., 20000., 0.];
        patch.surface_type = surface;
        level.patches = vec![patch];
        level.instances.clear();
        level.rails.clear();
        let terrain = TerrainContact::from_level(&level);
        let mut network = crate::load_track_paths(path).unwrap();
        network.ai[network.starts[0]].origin = [0., 0., 0.];
        network.ai[network.starts[0]].segments[0].direction = [1., 0., 0.];
        let mut session = Session::new(network, &terrain).unwrap();
        session.phase = Phase::Running;
        (session, terrain)
    }
}

#[cfg(test)]
mod authored_loop_regression {
    use super::*;

    fn elysium_rider(index: usize, speed: f32) -> (Session, TerrainContact) {
        let path = std::path::Path::new("extracted/DATA/MODELS/ELYSIUM.BIG");
        let (level, _) = crate::load_track(path).unwrap();
        let terrain = TerrainContact::from_level(&level);
        // Original rideable ice ribbon. Keep adjacent geometry, objects and scripts.
        let patch = &level.patches[index];
        assert_eq!(patch.surface_type, 5);
        let center = Vec3::from_array(patch.position(0.5, 0.5));
        let du = Vec3::from_array(patch.position(0.51, 0.5)) - center;
        let dv = Vec3::from_array(patch.position(0.5, 0.51)) - center;
        let normal = -du.cross(dv).normalize();
        let forward = du.normalize();
        let mut network = crate::load_track_paths(path).unwrap();
        network.race.clear();
        network.ai[network.starts[0]].segments[0].direction = forward.to_array();
        let mut rider = Session::new(network, &terrain).unwrap();
        let (point, normal, _) = terrain.surface_contact(center, normal, 150.).unwrap();
        rider.position = point + normal * 2.;
        rider.normal = normal;
        rider.forward = forward;
        rider.velocity = forward * speed;
        let f = (forward - normal * forward.dot(normal)).normalize();
        let q =
            bevy::math::Quat::from_mat3(&bevy::math::Mat3::from_cols(f.cross(normal), f, normal));
        rider.orientation = Some(physics::GroundOrientation([q.w, q.x, q.y, q.z]));
        rider.grounded = true;
        rider.phase = Phase::Running;
        rider.power.charge = 1.;
        (rider, terrain)
    }

    #[test]
    #[ignore = "requires the original disc"]
    fn elysium_authored_loop_supports_momentum_and_boost() {
        for (speed, boost) in [(4500., false), (2500., true)] {
            let (mut rider, terrain) = elysium_rider(4446, speed);
            let mut inverted = false;
            let mut completed = false;
            for frame in 0..200 {
                rider.tick(
                    Controls {
                        boost,
                        ..Default::default()
                    },
                    &terrain,
                );
                assert!(rider.returning.is_none(), "Reset masked lost loop contact");
                assert!(
                    rider.grounded,
                    "Lost loop at {frame}, boost={boost}: {:?}",
                    rider.position
                );
                inverted |= rider.normal.z < -0.7;
                if inverted && rider.normal.z > 0.8 {
                    completed = true;
                    break;
                }
            }
            assert!(completed, "Did not complete the loop, boost={boost}");
        }
    }

    #[test]
    #[ignore = "requires the original disc"]
    fn stationary_rider_falls_away_from_inverted_ice() {
        let (mut rider, terrain) = elysium_rider(4445, 0.);
        assert!(rider.normal.z < -0.7);
        let start = rider.position;
        for _ in 0..60 {
            rider.tick(Controls::default(), &terrain);
            assert!(rider.returning.is_none());
            if !rider.grounded {
                assert!(rider.position.z < start.z);
                assert!(rider.velocity.z < 0.);
                return;
            }
        }
        panic!("Stationary rider remained attached to the ceiling");
    }

    #[test]
    #[ignore = "requires the original disc"]
    fn flat_vertical_snow_blocks_motion_without_attaching_or_climbing() {
        let path = std::path::Path::new("extracted/DATA/MODELS/SNOW.BIG");
        let (mut level, _) = crate::load_track(path).unwrap();
        let mut wall = level.patches[0].clone();
        wall.coefficients = [[0.; 3]; 16];
        wall.coefficients[0] = [-5000., 0., -5000.];
        wall.coefficients[1] = [10000., 0., 0.];
        wall.coefficients[4] = [0., 0., 10000.];
        wall.surface_type = 1;
        let mut floor = wall.clone();
        floor.coefficients[0] = [-5000., -5000., -1000.];
        floor.coefficients[4] = [0., 10000., 0.];
        level.patches = vec![wall, floor];
        level.instances.clear();
        level.rails.clear();
        let terrain = TerrainContact::from_level(&level);
        assert!(
            terrain
                .oriented_contact(Vec3::new(0., -2., 0.), -Vec3::Y)
                .is_none()
        );
        let mut network = crate::load_track_paths(path).unwrap();
        network.race.clear();
        network.ai[network.starts[0]].origin = [0., -100., 500.];
        let mut rider = Session::new(network, &terrain).unwrap();
        rider.position = Vec3::new(0., -100., 500.);
        rider.velocity = Vec3::Y * 6000.;
        rider.grounded = false;
        rider.phase = Phase::Running;
        for _ in 0..30 {
            rider.tick(
                Controls {
                    steer: 1.,
                    boost: true,
                    ..Default::default()
                },
                &terrain,
            );
            assert!(rider.position.y < 0.);
            assert!(rider.position.z <= 500.);
            assert!(!rider.grounded, "Flat wall became riding support");
            assert!(rider.returning.is_none());
        }
    }
}
