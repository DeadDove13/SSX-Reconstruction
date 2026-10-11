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
        self.speed += -981. * self.tangent(rails).z * dt;
        self.speed *= (-dt * if brake { 2. } else { 0.06 }).exp();
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
/// Board contact must approach the rail from above and along its direction.
pub fn capture(rails: &[Rail], from: Vec3, to: Vec3, velocity: Vec3) -> Option<Grind> {
    if velocity.length() < 150. {
        return None;
    }
    let mut best = None;
    let mut distance = 70f32 * 70.;
    for (rail, r) in rails.iter().enumerate() {
        if r.bounds[0].cmpgt(from.max(to) + Vec3::splat(70.)).any()
            || r.bounds[1].cmplt(from.min(to) - Vec3::splat(70.)).any()
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
            if speed.abs() / velocity.length() < 0.5 {
                continue;
            }
            let fraction = ((to - p[0]).dot(d) / d.length_squared()).clamp(0., 1.);
            let point = p[0] + d * fraction;
            let sweep = to - from;
            let t = ((point - from).dot(sweep) / sweep.length_squared().max(0.001)).clamp(0., 1.);
            let board = from + sweep * t;
            let delta = board - point;
            if from.z < point.z - 6.
                || to.z > point.z + 40.
                || velocity.z - tangent.z * speed > 100.
            {
                continue;
            }
            if delta.length_squared() < distance {
                distance = delta.length_squared();
                best = Some(Grind {
                    rail,
                    segment,
                    fraction,
                    speed,
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
    fn forgiving_capture_still_requires_an_approach_from_above() {
        let rail = [Rail {
            points: vec![Vec3::ZERO, Vec3::Y * 1000.],
            surface: 0,
            bounds: [Vec3::ZERO, Vec3::Y * 1000.],
        }];
        let attempt =
            |x, z, v| capture(&rail, Vec3::new(x, 100., z), Vec3::new(x, 115., z - 5.), v);
        assert!(attempt(55., 20., Vec3::new(0., 900., -300.)).is_some());
        assert!(attempt(80., 20., Vec3::new(0., 900., -300.)).is_none());
        assert!(attempt(0., -10., Vec3::new(0., 900., -300.)).is_none());
        assert!(attempt(0., 20., Vec3::new(0., 900., 400.)).is_none());
        assert!(attempt(0., 20., Vec3::new(900., 0., -300.)).is_none());
    }
}
