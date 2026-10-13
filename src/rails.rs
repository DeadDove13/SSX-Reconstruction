//! Host grind attachment on the original rail splines. Capture tolerances,
//! friction, balance, and scoring remain host adapters.
use bevy::math::Vec3;
#[derive(Debug)]
pub struct Rail {
    pub points: Vec<Vec3>,
    pub surface: u32,
    bounds: [Vec3; 2],
}
pub fn from_level(level: &crate::level::Level) -> Vec<Rail> {
    level
        .rails
        .iter()
        .map(|s| {
            let mut points = Vec::new();
            for c in &s.curves {
                for i in 0..32 {
                    points.push(Vec3::from_array(crate::splines::position(
                        c,
                        i as f32 / 32.,
                    )));
                }
            }
            if let Some(c) = s.curves.last() {
                points.push(Vec3::from_array(crate::splines::position(c, 1.)));
            }
            let bounds = [
                points
                    .iter()
                    .copied()
                    .fold(Vec3::splat(f32::INFINITY), Vec3::min),
                points
                    .iter()
                    .copied()
                    .fold(Vec3::splat(f32::NEG_INFINITY), Vec3::max),
            ];
            Rail {
                points,
                surface: s.surface,
                bounds,
            }
        })
        .collect()
}
#[derive(Clone, Copy, Debug)]
pub struct Grind {
    pub rail: usize,
    pub segment: usize,
    pub fraction: f32,
    pub speed: f32,
}
impl Grind {
    pub fn point(self, rails: &[Rail]) -> Vec3 {
        let p = &rails[self.rail].points;
        p[self.segment].lerp(p[self.segment + 1], self.fraction)
    }
    pub fn tangent(self, rails: &[Rail]) -> Vec3 {
        let p = &rails[self.rail].points;
        (p[self.segment + 1] - p[self.segment]).normalize_or_zero()
    }
    pub fn step(&mut self, rails: &[Rail], dt: f32, brake: bool) -> bool {
        let direction = self.speed.signum();
        let gravity = -980. * self.tangent(rails).z * direction;
        let speed = self.speed.abs();
        if brake {
            self.speed = direction * ((speed + gravity * dt).max(0.) * (-2. * dt).exp());
        } else {
            // Host grind assist requested for uphill rails. The original rail
            // handler supplies gravity and manual boost, but no longitudinal drag.
            // Build toward 100 km/h without reducing a faster entry speed.
            let build = ((100. / 0.036 - speed).max(0.) * 0.8).min(450.);
            self.speed = direction * (speed + (gravity.max(0.) + build) * dt);
        }
        let p = &rails[self.rail].points;
        let mut distance =
            self.fraction * p[self.segment].distance(p[self.segment + 1]) + self.speed * dt;
        loop {
            let length = p[self.segment].distance(p[self.segment + 1]);
            if distance < 0. {
                if self.segment == 0 {
                    self.fraction = 0.;
                    return false;
                }
                self.segment -= 1;
                distance += p[self.segment].distance(p[self.segment + 1]);
            } else if distance > length {
                if self.segment + 2 >= p.len() {
                    self.fraction = 1.;
                    return false;
                }
                distance -= length;
                self.segment += 1;
            } else {
                self.fraction = distance / length.max(0.001);
                return true;
            }
        }
    }
}
/// Closest points on the finite board sweep and rail segment.
fn crossing(from: Vec3, to: Vec3, a: Vec3, b: Vec3) -> (Vec3, Vec3, f32) {
    let sweep = to - from;
    let rail = b - a;
    let aa = sweep.length_squared();
    let bb = rail.length_squared();
    let project_rail = |p: Vec3| ((p - a).dot(rail) / bb).clamp(0., 1.);
    let project_sweep = |p: Vec3| ((p - from).dot(sweep) / aa.max(0.001)).clamp(0., 1.);
    let first = (0., project_rail(from));
    let mut candidates = [
        first,
        (1., project_rail(to)),
        (project_sweep(a), 0.),
        (project_sweep(b), 1.),
        first,
    ];
    let ab = sweep.dot(rail);
    let offset = from - a;
    let determinant = aa * bb - ab * ab;
    if determinant > aa * bb * 1e-6 {
        let t = (ab * rail.dot(offset) - bb * sweep.dot(offset)) / determinant;
        let u = (aa * rail.dot(offset) - ab * sweep.dot(offset)) / determinant;
        if (0. ..=1.).contains(&t) && (0. ..=1.).contains(&u) {
            candidates[4] = (t, u);
        }
    }
    let (t, u) = candidates
        .into_iter()
        .min_by(|(t, u), (v, w)| {
            (from + sweep * *t - a - rail * *u)
                .length_squared()
                .total_cmp(&(from + sweep * *v - a - rail * *w).length_squared())
        })
        .unwrap();
    (from + sweep * t, a + rail * u, u)
}

/// Approach from above. Sideways landings redirect horizontal momentum onto the rail.
pub fn capture(rails: &[Rail], from: Vec3, to: Vec3, velocity: Vec3) -> Option<Grind> {
    if velocity.length() < 150. {
        return None;
    }
    let mut best = None;
    const REACH: f32 = 110.;
    let mut distance = REACH * REACH;
    for (rail, r) in rails.iter().enumerate() {
        if r.bounds[0].cmpgt(from.max(to) + Vec3::splat(REACH)).any()
            || r.bounds[1].cmplt(from.min(to) - Vec3::splat(REACH)).any()
        {
            continue;
        }
        for (segment, p) in r.points.windows(2).enumerate() {
            let d = p[1] - p[0];
            if d.length_squared() < 0.01 {
                continue;
            }
            let tangent = d.normalize();
            let speed = velocity.dot(tangent);
            let (board, point, fraction) = crossing(from, to, p[0], p[1]);
            let delta = board - point;
            if from.z < point.z - 6.
                || to.z > point.z + 40.
                || velocity.z - tangent.z * speed > 100.
            {
                continue;
            }
            if delta.length_squared() < distance {
                distance = delta.length_squared();
                let direction = if speed.abs() > 1. {
                    speed.signum()
                } else if tangent.z.abs() > 0.01 {
                    -tangent.z.signum()
                } else {
                    1.
                };
                let travel_speed = velocity.truncate().length().max(speed.abs()).max(150.);
                best = Some(Grind {
                    rail,
                    segment,
                    fraction,
                    // Host tuning: a single 5 km/h impulse on capture.
                    speed: direction * (travel_speed + 5. / 0.036),
                });
            }
        }
    }
    best
}

#[cfg(test)]
mod tests {
    use super::*;
    #[test]
    fn sideways_landings_and_near_misses_capture_without_losing_speed() {
        let rails = [Rail {
            points: vec![Vec3::ZERO, Vec3::Y * 10000.],
            surface: 0,
            bounds: [Vec3::ZERO, Vec3::Y * 10000.],
        }];
        for (from, to, velocity) in [
            (
                Vec3::new(-50., 500., 30.),
                Vec3::new(30., 500., 0.),
                Vec3::new(900., 0., -300.),
            ),
            (
                Vec3::new(-200., 200., 30.),
                Vec3::new(200., 800., -10.),
                Vec3::new(1200., 1800., -120.),
            ),
            (
                Vec3::new(95., 500., 25.),
                Vec3::new(95., 520., 0.),
                Vec3::new(0., 900., -300.),
            ),
        ] {
            let grind = capture(&rails, from, to, velocity).expect("Landing should grab the rail");
            assert!(grind.speed.abs() >= velocity.truncate().length());
        }
    }
    #[test]
    fn capture_impulse_and_sustained_drive_follow_travel_direction() {
        let rails = [Rail {
            points: vec![Vec3::ZERO, Vec3::Y * 10000.],
            surface: 0,
            bounds: [Vec3::ZERO, Vec3::Y * 10000.],
        }];
        for direction in [-1., 1.] {
            let velocity = Vec3::Y * (900. * direction) - Vec3::Z * 100.;
            let mut grind = capture(
                &rails,
                Vec3::new(0., 5000., 20.),
                Vec3::new(0., 5000., 3.),
                velocity,
            )
            .unwrap();
            assert_eq!(grind.speed.signum(), direction);
            assert!((grind.speed.abs() - 900. - 5. / 0.036).abs() < 0.01);
            let entry_speed = grind.speed.abs();
            for _ in 0..60 {
                assert!(grind.step(&rails, 1. / 60., false));
            }
            assert!(
                grind.speed.abs() > entry_speed && grind.speed.abs() <= entry_speed + 451.,
                "Grind acceleration must build continuously, without repeating the capture impulse"
            );
        }
    }
    #[test]
    fn forgiving_capture_still_requires_an_approach_from_above() {
        let rail = [Rail {
            points: vec![Vec3::ZERO, Vec3::Y * 1000.],
            surface: 0,
            bounds: [Vec3::ZERO, Vec3::Y * 1000.],
        }];
        let attempt =
            |x, z, v| capture(&rail, Vec3::new(x, 100., z), Vec3::new(x, 115., z - 5.), v);
        assert!(attempt(55., 20., Vec3::new(0., 900., -300.)).is_some());
        assert!(attempt(120., 20., Vec3::new(0., 900., -300.)).is_none());
        assert!(attempt(0., -10., Vec3::new(0., 900., -300.)).is_none());
        assert!(attempt(0., 20., Vec3::new(0., 900., 400.)).is_none());
        assert!(attempt(0., 20., Vec3::new(900., 0., -300.)).is_some());
    }
}
