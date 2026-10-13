//! WDR cubic transform channels and WFX animation playback.
//! Track sampling: SLUS_200.95 0x001d7e00. Playback: 0x0019cc48 / 0x0019d348.
use crate::{Result, binary::*};

#[derive(Debug, Clone)]
struct Segment {
    coefficients: [f32; 4],
    start: f32,
    end: f32,
}

#[derive(Debug, Clone)]
pub struct Track {
    channels: [Vec<Segment>; 9],
    pub end: f32,
}

impl Track {
    pub fn decode(data: &[u8], base: usize, end: f32) -> Result<Option<Self>> {
        let mask = u16le(data, base + 64)?;
        if mask == 0 {
            return Ok(None);
        }
        let count = u16le(data, base + 66)?;
        if mask & !0x1ff != 0 || mask.count_ones() != u32::from(count) {
            return Err("Invalid object animation channel mask".into());
        }
        let table = base
            .checked_add(u32le(data, base + 68)? as usize)
            .ok_or("Animation offset overflow")?;
        range(data, table, usize::from(count) * 8)?;
        let mut channels: [Vec<Segment>; 9] = std::array::from_fn(|_| Vec::new());
        let mut entry = table;
        for (axis, channel) in channels.iter_mut().enumerate() {
            if mask & (1 << axis) == 0 {
                continue;
            }
            let count = u32le(data, entry)? as usize;
            let offset = base
                .checked_add(u32le(data, entry + 4)? as usize)
                .ok_or("Animation offset overflow")?;
            range(
                data,
                offset,
                count
                    .checked_mul(32)
                    .ok_or("Animation segment count overflow")?,
            )?;
            if count == 0 {
                return Err("Object animation channel has no segments".into());
            }
            for i in 0..count {
                let p = offset + i * 32;
                let mut values = [0.; 6];
                for (j, v) in values.iter_mut().enumerate() {
                    *v = f32le(data, p + j * 4)?;
                }
                if values.iter().any(|v| !v.is_finite()) || values[5] < values[4] {
                    return Err("Invalid object animation segment".into());
                }
                channel.push(Segment {
                    coefficients: values[..4].try_into().unwrap(),
                    start: values[4],
                    end: values[5],
                });
            }
            entry += 8;
        }
        if !end.is_finite() || end < 1. {
            return Err("Invalid object animation duration".into());
        }
        Ok(Some(Self { channels, end }))
    }

    pub fn channels(&self, frame: f32) -> [f32; 9] {
        std::array::from_fn(|axis| {
            let channel = &self.channels[axis];
            let Some(segment) = channel
                .iter()
                .find(|s| frame >= s.start && frame < s.end)
                .or_else(|| {
                    if frame < channel.first()?.start {
                        channel.first()
                    } else {
                        channel.last()
                    }
                })
            else {
                return if axis >= 6 { 1. } else { 0. };
            };
            let t = frame.clamp(segment.start, segment.end);
            let [a, b, c, d] = segment.coefficients;
            ((a * t + b) * t + c) * t + d
        })
    }

    #[cfg(feature = "viewer")]
    pub fn matrix(&self, frame: f32) -> bevy::math::Mat4 {
        use bevy::math::{Mat4, Vec3};
        let c = self.channels(frame);
        let mut m = Mat4::from_scale(Vec3::new(c[6], c[7], c[8]))
            * Mat4::from_rotation_z(-c[5])
            * Mat4::from_rotation_y(-c[4])
            * Mat4::from_rotation_x(-c[3]);
        m.w_axis = Vec3::new(c[0], c[1], c[2]).extend(1.);
        m
    }
}

#[derive(Debug, Clone)]
pub struct Playback {
    pub age: u32,
    words: [u32; 8],
    random: f32,
    pause: u32,
    credits: Option<f32>,
    seek: Option<f32>,
}
impl Playback {
    pub fn new(words: &[u32], seed: u32) -> Option<Self> {
        let words: [u32; 8] = words.get(..8)?.try_into().ok()?;
        if words[2..7].iter().any(|v| !f32::from_bits(*v).is_finite()) {
            return None;
        }
        Some(Self {
            age: 0,
            words,
            random: (seed.wrapping_mul(1664525).wrapping_add(1013904223) >> 8) as f32 / 16777216.,
            pause: 0,
            credits: (words[0] == 257).then_some(0.),
            seek: None,
        })
    }
    fn speed(&self) -> f32 {
        (f32::from_bits(self.words[4]) + (self.random * 2. - 1.) * f32::from_bits(self.words[5]))
            * 0.5
            * if self.words[1] >> 16 == 4 { -1. } else { 1. }
    }
    pub fn advance(&mut self) {
        if self.pause > 0 {
            self.pause -= 1;
            return;
        }
        let speed = self.speed().abs();
        if let Some(credits) = &mut self.credits {
            if *credits <= 0. {
                return;
            }
            *credits = (*credits - speed).max(0.);
        }
        self.age = self.age.saturating_add(1);
    }
    /// Virtual animation commands at 0x0019e0c8 and 0x0019e770.
    pub fn control(&mut self, operation: u32, value: f32) -> bool {
        if !value.is_finite() {
            return false;
        }
        match operation {
            1 => self.pause = (value * 60.).max(0.) as u32,
            2 if self.credits.is_some() => *self.credits.as_mut().unwrap() += value,
            4 => {
                self.seek = Some(value);
                self.age = 0;
            }
            _ => return false,
        }
        true
    }
    pub fn frame(&self, end: f32, fraction: f32) -> f32 {
        let f = |i| f32::from_bits(self.words[i]);
        let start = if f(2) < 0. { 1. } else { f(2) };
        let end = if f(3) < 0. { end } else { f(3) };
        let length = end - start;
        if length <= 0. {
            return start;
        }
        let initial = self
            .seek
            .filter(|f| *f >= start && *f <= end)
            .unwrap_or_else(|| {
                if self.words[7] != 0 {
                    start + self.random * length
                } else {
                    start
                }
            });
        let speed = self.speed();
        let frame = initial + (self.age as f32 + fraction) * speed;
        match self.words[1] & 0xffff {
            1 => start + (frame - start).rem_euclid(length),
            2 => {
                let x = (frame - start).rem_euclid(length * 2.);
                start + if x > length { length * 2. - x } else { x }
            }
            _ => frame.clamp(start, end),
        }
    }
}

#[cfg(feature = "viewer")]
pub fn delta(
    level: &crate::level::Level,
    state: &crate::object_rules::ObjectState,
    object: usize,
    part: usize,
    fraction: f32,
) -> bevy::math::Mat4 {
    use bevy::math::Mat4;
    let instance = &level.instances[object];
    let mesh = &level.prefabs[instance.prefab][part];
    let (Some(track), Some(playback)) = (&mesh.animation, state.animations.get(&object)) else {
        return Mat4::IDENTITY;
    };
    let placement = Mat4::from_cols_array(&instance.transform);
    let initial = mesh
        .transform
        .map(|m| Mat4::from_cols_array(&m))
        .unwrap_or(Mat4::IDENTITY);
    placement * track.matrix(playback.frame(track.end, fraction)) * (placement * initial).inverse()
}

#[cfg(test)]
mod tests {
    use super::*;
    #[test]
    #[cfg(feature = "viewer")]
    #[ignore = "requires the original disc"]
    fn city_finish_beams_move_and_have_no_collision() {
        let (level, _) =
            crate::load_track(std::path::Path::new("extracted/DATA/MODELS/MERQUERY.BIG")).unwrap();
        let mut state = crate::object_rules::ObjectState::default();
        let properties: Vec<_> = level
            .instances
            .iter()
            .map(|i| i.properties.clone())
            .collect();
        state.tick_scripts(&properties, &level.effects.scripts);
        let beams: Vec<_> = level
            .object_names
            .iter()
            .enumerate()
            .filter(|(_, n)| n.starts_with("floodlightBeam") && !n.ends_with("9999"))
            .map(|(i, _)| i)
            .collect();
        assert_eq!(beams.len(), 4);
        let before: Vec<_> = beams
            .iter()
            .map(|&i| delta(&level, &state, i, 0, 0.))
            .collect();
        for _ in 0..60 {
            state.advance_effects();
        }
        for (k, &i) in beams.iter().enumerate() {
            assert!(!properties[i].contact_enabled());
            assert_eq!(properties[i].collision_mode, 0);
            assert_ne!(
                before[k],
                delta(&level, &state, i, 0, 0.),
                "Beam {} did not move",
                level.object_names[i]
            );
        }
    }
    fn playback(mode: u32) -> Playback {
        Playback::new(
            &[
                256,
                mode,
                1f32.to_bits(),
                11f32.to_bits(),
                1f32.to_bits(),
                0,
                0,
                0,
            ],
            0,
        )
        .unwrap()
    }
    #[test]
    fn playback_obeys_loop_reflection_pause_and_seek() {
        let mut once = playback(0);
        once.age = 24;
        let mut looping = playback(1);
        looping.age = 24;
        let mut reflecting = playback(2);
        reflecting.age = 24;
        assert_eq!(once.frame(11., 0.), 11.);
        assert_eq!(looping.frame(11., 0.), 3.);
        assert_eq!(reflecting.frame(11., 0.), 9.);
        looping.control(1, 0.1);
        for _ in 0..6 {
            looping.advance();
        }
        assert_eq!(looping.frame(11., 0.), 3.);
        looping.control(4, 7.);
        assert_eq!(looping.frame(11., 0.), 7.);
        looping.advance();
        assert_eq!(looping.frame(11., 0.), 7.5);
        let mut gate = Playback::new(
            &[
                257,
                0,
                1f32.to_bits(),
                51f32.to_bits(),
                1f32.to_bits(),
                0,
                0,
                0,
            ],
            0,
        )
        .unwrap();
        for _ in 0..60 {
            gate.advance();
        }
        assert_eq!(gate.frame(51., 0.), 1.);
        gate.control(2, 10.);
        for _ in 0..60 {
            gate.advance();
        }
        assert_eq!(gate.frame(51., 0.), 11.);
    }
    #[test]
    #[ignore = "Requires original disc files"]
    fn original_tracks_decode_finite_animation_channels() {
        let mut count = 0;
        for entry in std::fs::read_dir("extracted/DATA/MODELS").unwrap() {
            let path = entry.unwrap().path();
            if ![
                "SNOW", "MEGAPLEX", "MERQUERY", "MESA", "PIPE", "WARMUP", "ALOHA", "ELYSIUM",
                "UNTRACK",
            ]
            .contains(&path.file_stem().unwrap().to_str().unwrap())
            {
                continue;
            }
            let (level, _) = crate::load_track(&path).unwrap();
            for m in level.prefabs.iter().flatten() {
                if let Some(a) = &m.animation {
                    count += 1;
                    for frame in [1., a.end * 0.5, a.end] {
                        assert!(a.channels(frame).iter().all(|v| v.is_finite()));
                    }
                }
            }
        }
        assert!(
            count > 100,
            "Expected original world animation tracks, found {count}"
        );
    }
    #[cfg(feature = "viewer")]
    #[test]
    #[ignore = "Requires original disc files"]
    fn moving_object_collision_and_supported_board_follow_original_track() {
        use bevy::math::{Mat4, Vec3};
        for object in [336] {
            let (mut level, _) =
                crate::load_track(std::path::Path::new("extracted/DATA/MODELS/MEGAPLEX.BIG"))
                    .unwrap();
            let ramp = level.instances.remove(object);
            level.instances = vec![ramp];
            let properties = level
                .instances
                .iter()
                .map(|i| i.properties.clone())
                .collect::<Vec<_>>();
            let mut state = crate::object_rules::ObjectState::default();
            state.tick_scripts(&properties, &level.effects.scripts);
            assert!(state.animations.contains_key(&0));
            let mut collision = crate::collision::CollisionWorld::from_level(&level);
            collision.animate(&level, &state);
            let initial = delta(&level, &state, 0, 0, 0.);
            let i = &level.instances[0];
            let m = &level.prefabs[i.prefab][0];
            let placement = Mat4::from_cols_array(&i.transform)
                * m.transform
                    .map(|m| Mat4::from_cols_array(&m))
                    .unwrap_or(Mat4::IDENTITY);
            let transform = initial * placement;
            let query = m
                .indices
                .chunks_exact(3)
                .find_map(|face| {
                    let p: [Vec3; 3] = std::array::from_fn(|j| {
                        transform.transform_point3(Vec3::from_array(m.positions[face[j] as usize]))
                    });
                    let normal = (p[1] - p[0]).cross(p[2] - p[0]).normalize_or_zero();
                    if normal.z.abs() < 0.2 {
                        return None;
                    }
                    let q = (p[0] + p[1] + p[2]) / 3. + Vec3::Z * 2000.;
                    collision
                        .ground_below(q, q.z - 4000., &state.disabled)
                        .map(|h| (q, h.0))
                })
                .expect("Ramp must have a supporting face");
            let (query, height) = query;
            let board = Vec3::new(query.x, query.y, height + 2.);
            for _ in 0..240 {
                state.advance_effects();
            }
            let next = delta(&level, &state, 0, 0, 0.);
            let expected = (next * initial.inverse()).transform_point3(board);
            assert!(
                board.distance(expected) > 300.,
                "Ramp must move along its recorded track"
            );
            collision.animate(&level, &state);
            let carried = board + collision.support_motion(board, &state.disabled);
            assert!(
                carried.distance(expected) < 0.1,
                "Ramp {object}: board did not follow surface: {carried:?} vs {expected:?}"
            );
            let ground = collision
                .ground_below(carried + Vec3::Z * 10., carried.z - 20., &state.disabled)
                .unwrap()
                .0;
            assert!(
                (ground + 2. - carried.z).abs() < 0.1,
                "Visible and collision surfaces disagree"
            );
            // A race reset must restore the initial collision and model positions.
            state = Default::default();
            collision.animate(&level, &state);
            assert_eq!(delta(&level, &state, 0, 0, 0.), Mat4::IDENTITY);
        }
    }
    #[cfg(feature = "viewer")]
    #[test]
    #[ignore = "Requires original disc files"]
    fn original_roof_ramp_trigger_animates_and_plays_sound_once_per_contact_window() {
        use bevy::math::Vec3;
        let (level, _) =
            crate::load_track(std::path::Path::new("extracted/DATA/MODELS/MEGAPLEX.BIG")).unwrap();
        let terrain = crate::playtest::TerrainContact::from_level(&level);
        assert!(
            terrain.script_triggers.contains(&307),
            "Roof ramp trigger must be included in the swept trigger test"
        );
        let properties = &terrain.objects.properties;
        let scripts = &level.effects.scripts;
        let mut state = crate::object_rules::ObjectState::default();
        state.tick_scripts(properties, scripts);
        let part = level.prefabs[level.instances[306].prefab]
            .iter()
            .position(|m| m.animation.is_some())
            .unwrap();
        let start = delta(&level, &state, 306, part, 0.);
        for _ in 0..90 {
            state.advance_effects();
        }
        assert_eq!(
            delta(&level, &state, 306, part, 0.),
            start,
            "Ramp must wait for its trigger"
        );
        state.events.clear();
        state.contact(307, properties, scripts);
        state.contact(307, properties, scripts);
        assert_eq!(
            state
                .events
                .iter()
                .filter(|e| matches!(e, crate::object_rules::ObjectEvent::Sound { id: 97, .. }))
                .count(),
            1
        );
        let i = &level.instances[306];
        let m = &level.prefabs[i.prefab][part];
        let point = bevy::math::Mat4::from_cols_array(&i.transform)
            .transform_point3(Vec3::from_array(m.bounds[0]));
        let initial = start.transform_point3(point);
        let mut maximum = 0f32;
        for _ in 0..45 {
            state.advance_effects();
            maximum = maximum.max(
                delta(&level, &state, 306, part, 0.)
                    .transform_point3(point)
                    .distance(initial),
            );
        }
        assert!(
            maximum > 100.,
            "Original roof ramp must move after contact, maximum displacement {maximum}"
        );
        let stopped = delta(&level, &state, 306, part, 0.);
        for _ in 0..60 {
            state.advance_effects();
        }
        assert_eq!(
            delta(&level, &state, 306, part, 0.),
            stopped,
            "Ramp must stop when the script's frame credit expires"
        );
        state.events.clear();
        state.contact(307, properties, scripts);
        assert!(
            state
                .events
                .iter()
                .any(|e| matches!(e, crate::object_rules::ObjectEvent::Sound { id: 97, .. }))
        );
    }
}
