//! Gameplay events select original actions. Transition timing is a host adapter.
use super::*;
use ssx_rust::playtest::{Phase, Session};

#[derive(Clone, Default)]
pub struct Motion {
    initialized: bool,
    elapsed: f32,
    resets: u32,
    respawns: u32,
    grounded: bool,
    switch: bool,
    takeoff_switch: bool,
    pub yaw: f32,
    pub air: f32,
    pub landing: f32,
    pub launch: f32,
    turn_variant: usize,
    last_steer: f32,
    clock: f32,
    pub spin_input: f32,
    pub flip_input: f32,
    last_spin: f32,
    last_flip: f32,
    sample_elapsed: f32,
    gate_offset: f32,
    pose_key: u32,
    pose_age: f32,
    displayed: Vec<Mat4>,
    transition_from: Vec<Mat4>,
    transition_age: f32,
}

impl Motion {
    pub fn rotation_inputs(&mut self, session: &Session, spin: f32, flip: f32) {
        if session.elapsed != self.sample_elapsed {
            self.spin_input = if !session.grounded {
                (spin - self.last_spin).signum()
                    * if (spin - self.last_spin).abs() > 0.01 {
                        1.
                    } else {
                        0.
                    }
            } else {
                0.
            };
            self.flip_input = if !session.grounded {
                (flip - self.last_flip).signum()
                    * if (flip - self.last_flip).abs() > 0.01 {
                        1.
                    } else {
                        0.
                    }
            } else {
                0.
            };
            self.last_spin = spin;
            self.last_flip = flip;
            self.sample_elapsed = session.elapsed;
        }
    }

    pub fn finish_context(&mut self, bank: usize, clip: usize) {
        self.context(2000 + bank as u32 * 1000 + clip as u32);
    }

    fn context(&mut self, key: u32) {
        if key != self.pose_key {
            self.pose_key = key;
            self.pose_age = 0.;
            self.transition_age = 0.;
            self.transition_from = self.displayed.clone();
        }
    }

    /// Blend local rigid transforms before rebuilding the skeleton. Interpolating
    /// global matrices would shorten limbs and introduce shear during transitions.
    pub fn present(
        &mut self,
        data: &Data,
        rider: usize,
        target: Vec<Mat4>,
        paused: bool,
    ) -> Vec<Mat4> {
        if paused && !self.displayed.is_empty() {
            return self.displayed.clone();
        }
        let mut out = target.clone();
        let t = (self.transition_age / 0.18).clamp(0., 1.);
        let t = t * t * (3. - 2. * t);
        if self.transition_from.len() == target.len() && t < 1. {
            for i in 0..target.len() {
                let parent = data.riders[rider].bones.get(i).map_or(-1, |b| b.parent);
                let (a, b) = if parent < 0 {
                    (self.transition_from[i], target[i])
                } else {
                    let p = parent as usize;
                    (
                        self.transition_from[p].inverse() * self.transition_from[i],
                        target[p].inverse() * target[i],
                    )
                };
                let (_, aq, ap) = a.to_scale_rotation_translation();
                let (_, bq, bp) = b.to_scale_rotation_translation();
                let local = Mat4::from_rotation_translation(aq.slerp(bq, t), ap.lerp(bp, t));
                out[i] = if parent < 0 {
                    local
                } else {
                    out[parent as usize] * local
                };
            }
        }
        self.displayed = out.clone();
        out
    }

    pub fn tick(&mut self, session: &Session, delta: f32, spin: f32, steer: f32) {
        if session.phase == Phase::Paused {
            return;
        }
        if !self.initialized
            || session.elapsed < self.elapsed
            || session.resets != self.resets
            || session.respawns != self.respawns
        {
            *self = Self {
                initialized: true,
                grounded: session.grounded,
                switch: session.riding_switch,
                takeoff_switch: session.riding_switch,
                yaw: if session.riding_switch { 180. } else { 0. },
                landing: 100.,
                launch: 100.,
                ..Default::default()
            };
        }
        let dt = delta.min(0.1);
        self.clock += dt;
        self.pose_age += dt;
        self.transition_age += dt;
        if session.phase == Phase::Ready {
            self.gate_offset +=
                (session.start_rock.offset - self.gate_offset) * (1. - (-dt / 0.035).exp());
        }
        if session.grounded && !self.grounded {
            self.landing = if self.air >= 0.12 { 0. } else { 100. };
        } else {
            self.landing += dt;
        }
        if !session.grounded {
            if self.grounded {
                self.takeoff_switch = self.switch;
                self.air = 0.;
            }
            self.air += dt;
            self.yaw = spin + if self.takeoff_switch { 180. } else { 0. };
        } else {
            let target = if session.riding_switch { 180. } else { 0. };
            let error = (target - self.yaw + 180.).rem_euclid(360.) - 180.;
            self.yaw += error * (1. - (-dt / 0.075).exp());
        }
        if session.phase == Phase::Ready {
            self.launch = 0.;
        } else {
            self.launch += dt;
        }
        if steer * self.last_steer < 0. {
            self.turn_variant = (self.turn_variant + 1) % 3;
        }
        if steer.abs() > 0.05 {
            self.last_steer = steer;
        }
        self.grounded = session.grounded;
        self.switch = session.riding_switch;
        self.elapsed = session.elapsed;
        self.resets = session.resets;
        self.respawns = session.respawns;
    }
}

fn duration(data: &Data, (bank, clip): (usize, usize)) -> f32 {
    let t = animation::track(&data.tracks[&bank], clip, 0).expect("Original action body");
    (t.frames.len() - 1) as f32 / t.fps as f32
}

fn action_pose(data: &Data, rider: usize, style: i32, action: usize, age: f32) -> Vec<Mat4> {
    let (bank, clip) = animation::action(action, style);
    palette(
        data,
        rider,
        bank,
        clip,
        age.min(duration(data, (bank, clip))),
    )
}

/// Original 0x0014c1d0 stance transform. The shared Bx/Fr poses exchange the
/// left/right limbs and change their local angles before the root stance yaw.
/// Rotating the unchanged pose makes the rider look uphill.
pub fn apply_stance(data: &Data, rider: usize, session: &Session, pose: Vec<Mat4>) -> Vec<Mat4> {
    if !session.riding_switch || session.board_style == 2 {
        return pose;
    }
    const SOURCE: [usize; 19] = [
        0, 1, 2, 3, 4, 9, 10, 11, 12, 5, 6, 7, 8, 16, 17, 18, 13, 14, 15,
    ];
    let bones = &data.riders[rider].bones;
    let locals: Vec<_> = bones
        .iter()
        .enumerate()
        .map(|(i, b)| {
            if b.parent < 0 {
                pose[i]
            } else {
                pose[b.parent as usize].inverse() * pose[i]
            }
        })
        .collect();
    let mirrored_rotation = |matrix: Mat4, index: usize| {
        let (_, q, _) = matrix.to_scale_rotation_translation();
        let (z, y, x) = q.to_euler(EulerRot::ZYX);
        let (x, y, z) = (-x, -y, -z);
        let pi = std::f32::consts::PI;
        let angles = match index {
            0 => [x, -y, -pi - z],
            1 => [-pi - x, y, -pi - z],
            5 | 9 => [-pi - x, -y, z],
            6 | 10 => [pi - x, y, -z],
            13 | 16 => [pi - x, y, pi - z],
            _ => [-x, -y, z],
        };
        super::rotation(angles)
    };
    let mut out = Vec::with_capacity(pose.len());
    for (i, bone) in bones.iter().enumerate() {
        let mut position = locals[i].w_axis.truncate();
        if bone.parent < 0 {
            position.y = -position.y;
        }
        let local =
            Mat4::from_rotation_translation(mirrored_rotation(locals[SOURCE[i]], i), position);
        out.push(if bone.parent < 0 {
            local
        } else {
            out[bone.parent as usize] * local
        });
    }
    let board = pose[bones.len()];
    let mut position = board.w_axis.truncate();
    position.y = -position.y;
    out.push(Mat4::from_rotation_translation(
        mirrored_rotation(board, 0),
        position,
    ));
    out
}

pub(super) fn riding(data: &Data, rider: usize, session: &Session, motion: &Motion) -> Vec<Mat4> {
    let style = session.board_style;
    // Original slow-push boundary: 0x001388e8, DAT_002c1cf4 = 833.3333 (30 km/h).
    // The visual ramp above that boundary is host tuning. Keep it out of physics.
    let tuck = ((session.velocity.length() - 833.3333) / 277.7778).clamp(0., 1.);
    let crouch = session.ground_inputs.crouch.value.clamp(0., 1.) * tuck;
    let stance = session.riding_switch ^ (session.rider_stats.preferred_stance != 0);
    let steer = session.ground_inputs.steer.value * if stance { -1. } else { 1. };
    let brake = session.ground_inputs.brake.value;
    // 0x0014a1c8: neutral/crouch layers, three turn variants, and brake blend.
    // 0x0014a0f8: switch and switch-crouch actions.
    let (a, b, weight, sample_fraction) = if session.riding_switch && style == 2 {
        // State 0x37 selects the authored Alpine fakie ride (action 96).
        // Advance the clip, as with regular riding. Holding its last frame
        // leaves the rider locked in the end pose after every 180 landing.
        (96, 96, 0., -1.)
    } else if steer.abs() < 0.01 && brake.abs() < 0.01 {
        (106, 107, crouch, -1.)
    } else {
        let base = if steer > 0. { 127 } else { 128 } + motion.turn_variant * 4;
        if brake.abs() > 0.01 {
            (
                base,
                if brake * (if stance { -1. } else { 1. }) > 0. {
                    100
                } else {
                    99
                },
                brake.abs(),
                steer.abs(),
            )
        } else {
            (base, base + 2, crouch, steer.abs())
        }
    };
    let (ab, ac) = animation::action(a, style);
    let (bb, bc) = animation::action(b, style);
    let at = if sample_fraction < 0. {
        session.elapsed
    } else {
        duration(data, (ab, ac)) * sample_fraction.clamp(0., 1.)
    };
    let bt = if sample_fraction < 0. {
        session.elapsed
    } else {
        duration(data, (bb, bc))
            * if brake.abs() > 0.01 {
                brake.abs().min(1.)
            } else {
                sample_fraction.clamp(0., 1.)
            }
    };
    blended_palette(data, rider, (ab, ac, at), Some(((bb, bc, bt), weight)))
}

pub(super) fn gameplay(
    data: &Data,
    rider: usize,
    session: &Session,
    motion: &mut Motion,
    grab: Option<usize>,
    tweak: bool,
    grab_time: f32,
    spin_input: f32,
    flip_input: f32,
) -> Vec<Mat4> {
    let style = session.board_style;
    if session.phase == Phase::Ready {
        motion.context(1);
        let (bank, clip) = animation::action(57, style);
        let t = super::gate_fraction(motion.gate_offset) * duration(data, (bank, clip));
        // The neutral frame is already the start-gate pose. Keep the same clip
        // before input, during rocking, and when input returns to neutral.
        return palette(data, rider, bank, clip, t);
    }
    if let Some(recovery) = session.recovery {
        motion.context(if recovery.quality == ssx_rust::landing::Quality::Bail {
            2
        } else {
            3
        });
        if recovery.quality != ssx_rust::landing::Quality::Bail {
            let action = if session.ground_inputs.steer.value.abs() > 0.3 {
                if session.ground_inputs.steer.value > 0. {
                    31
                } else {
                    32
                }
            } else if session.riding_switch {
                36
            } else {
                35
            };
            let pair = animation::action(action, style);
            return action_pose(
                data,
                rider,
                style,
                action,
                duration(data, pair) * recovery.fraction(),
            );
        }
        // Preserve an authored tumble in the air. Start the authored get-up
        // only after contact, so the rider never stands in mid-air.
        let tumble = if session.riding_switch { 12 } else { 9 };
        let roll_time = if session.grounded {
            recovery.fraction().min(0.55)
        } else {
            (motion.air * 0.7).min(0.5)
        };
        let roll_duration = duration(data, (0, tumble));
        if !session.grounded || recovery.fraction() < 0.55 {
            return palette(data, rider, 0, tumble, roll_time * roll_duration);
        }
        let action = if session.riding_switch { 62 } else { 59 };
        let (bank, clip) = animation::action(action, style);
        let progress = ((recovery.fraction() - 0.55) / 0.45).clamp(0., 1.);
        return blended_palette(
            data,
            rider,
            (0, tumble, 0.55 * roll_duration),
            Some((
                (bank, clip, progress * duration(data, (bank, clip))),
                (progress / 0.2).min(1.),
            )),
        );
    }
    if session.shove.side != 0 {
        motion.context(if session.shove.side < 0 { 4 } else { 5 });
        let (bank, clip) = super::shove_clip(session);
        return palette(
            data,
            rider,
            bank,
            clip,
            session.shove.fraction() * duration(data, (bank, clip)),
        );
    }
    if session.grind.is_some() {
        motion.context(6);
        // Rail balance clips encode lean, not a time loop. Crouch uses the
        // paired center/crouched actions (0x0014b550, 0x2ad8a8/0x2ad8bc).
        let a = animation::action(146, style);
        let b = animation::action(154, style);
        return blended_palette(
            data,
            rider,
            (a.0, a.1, motion.clock),
            Some((
                (b.0, b.1, motion.clock),
                session.ground_inputs.crouch.value.clamp(0., 1.),
            )),
        );
    }
    if let Some(grab) = grab.filter(|_| !session.grounded) {
        let state = ssx_rust::tricks::GRABS[grab].state as usize + if tweak { 26 } else { 0 };
        motion.context(1000 + state as u32);
        let (bank, clip) = animation::state(state, style);
        return palette(
            data,
            rider,
            bank,
            clip,
            grab_time.min(duration(data, (bank, clip))),
        );
    }
    if !session.grounded {
        let action = if flip_input.abs() > 0.1 {
            if flip_input > 0. { 1 } else { 2 }
        } else if spin_input.abs() > 0.1 {
            if spin_input > 0. { 7 } else { 8 }
        } else if motion.air < 0.2 {
            75
        } else {
            66
        };
        motion.context(100 + action as u32);
        return action_pose(data, rider, style, action, motion.pose_age);
    }
    if motion.launch < duration(data, animation::action(58, style)) {
        motion.context(7);
        return action_pose(data, rider, style, 58, motion.launch);
    }
    // State 0x70 maps action 90 to L_No in every board style. Actions
    // 85 (L_At) and 89 (L_Fa) must not be the default for clean contact.
    // Recovery poses are selected above only when physics reports a fall.
    let land_action = 90;
    if motion.landing < duration(data, animation::action(land_action, style)) {
        motion.context(8);
        return action_pose(data, rider, style, land_action, motion.landing);
    }
    let pushing = session.phase == Phase::Running
        && !session.riding_switch
        && session.velocity.length() < 833.3333
        && session.ground_inputs.crouch.value > 0.1
        && session.ground_inputs.steer.value.abs() < 0.2
        && session.ground_inputs.brake.value.abs() < 0.01;
    if pushing {
        motion.context(9);
        let length = duration(data, animation::action(84, style));
        return action_pose(data, rider, style, 84, motion.pose_age.rem_euclid(length));
    }
    motion.context(20 + motion.turn_variant as u32 + u32::from(session.riding_switch) * 4);
    riding(data, rider, session, motion)
}

#[cfg(test)]
mod tests {
    use super::*;
    #[test]
    #[ignore = "requires the original disc"]
    fn initial_gate_pose_does_not_require_input() {
        let (data, session) = fixture();
        for rider in 0..8 {
            let mut motion = Motion::default();
            motion.tick(&session, 1. / 60., 0., 0.);
            let actual = gameplay(&data, rider, &session, &mut motion, None, false, 0., 0., 0.);
            let (bank, clip) = animation::action(57, session.board_style);
            let expected = palette(
                &data,
                rider,
                bank,
                clip,
                duration(&data, (bank, clip)) * 0.5,
            );
            assert!(
                actual
                    .iter()
                    .zip(expected)
                    .all(|(a, b)| a.abs_diff_eq(b, 0.001)),
                "Rider {rider} starts outside the gate pose until input is pressed"
            );
        }
    }
    #[test]
    #[ignore = "requires the original disc"]
    fn alpine_switch_keeps_animating() {
        let (data, mut session) = fixture();
        session.phase = Phase::Running;
        session.board_style = 2;
        session.riding_switch = true;
        session.velocity = Vec3::Y * 1400.;
        let motion = Motion::default();
        for rider in 0..8 {
            session.elapsed = 0.1;
            let first = riding(&data, rider, &session, &motion);
            session.elapsed = 0.4;
            let next = riding(&data, rider, &session, &motion);
            assert!(
                first
                    .iter()
                    .zip(&next)
                    .any(|(a, b)| !a.abs_diff_eq(*b, 0.001)),
                "Alpine switch rider {rider} must not freeze on the last frame"
            );
        }
    }
    #[test]
    #[ignore = "requires the original disc"]
    fn switch_rider_looks_along_travel() {
        let (data, mut session) = fixture();
        session.phase = Phase::Running;
        session.elapsed = 5.;
        session.velocity = Vec3::Y * 1400.;
        let motion = Motion::default();
        for rider in 0..8 {
            let bone = |name: &str| {
                data.riders[rider]
                    .bones
                    .iter()
                    .position(|b| b.name == name)
                    .unwrap()
            };
            let head = bone("head");
            let left = bone("l_foot");
            let right = bone("r_foot");
            for style in 0..3 {
                for crouch in [0., 1.] {
                    session.ground_inputs.crouch.value = crouch;
                    session.board_style = style;
                    session.riding_switch = false;
                    let normal = riding(&data, rider, &session, &motion);
                    // Identify the head's forward axis from the normal riding pose.
                    let axis = [
                        Vec3::X,
                        Vec3::NEG_X,
                        Vec3::Y,
                        Vec3::NEG_Y,
                        Vec3::Z,
                        Vec3::NEG_Z,
                    ]
                    .into_iter()
                    .max_by(|a, b| {
                        normal[head]
                            .transform_vector3(*a)
                            .y
                            .total_cmp(&normal[head].transform_vector3(*b).y)
                    })
                    .unwrap();
                    session.riding_switch = true;
                    let switch = apply_stance(
                        &data,
                        rider,
                        &session,
                        riding(&data, rider, &session, &motion),
                    );
                    let twice = apply_stance(&data, rider, &session, switch.clone());
                    if style != 2 {
                        for (a, b) in normal.iter().zip(twice.iter()) {
                            assert!(
                                a.abs_diff_eq(*b, 0.001),
                                "Applying the stance mirror twice must restore the pose"
                            );
                        }
                    }
                    let look = Quat::from_rotation_z(std::f32::consts::PI)
                        * switch[head].transform_vector3(axis);
                    assert!(
                        look.y > 0.,
                        "Switch rider {rider}, style {style}, crouch {crouch} looks uphill"
                    );
                    let normal_lead = normal[left].w_axis.y - normal[right].w_axis.y;
                    let switch_lead = -(switch[left].w_axis.y - switch[right].w_axis.y);
                    assert!(
                        normal_lead * switch_lead < 0.,
                        "Switch must change the leading foot"
                    );
                    if style != 2 {
                        assert!((normal[left].w_axis.z - switch[right].w_axis.z).abs() < 1.);
                        assert!((normal[right].w_axis.z - switch[left].w_axis.z).abs() < 1.);
                    }
                }
            }
        }
    }
    #[test]
    #[ignore = "requires the original disc"]
    fn clean_small_jump_uses_normal_landing_for_every_rider_and_style() {
        let (data, mut session) = fixture();
        session.phase = Phase::Running;
        session.velocity = Vec3::Y * 1600.;
        for style in 0..3 {
            session.board_style = style;
            for switch in [false, true] {
                session.riding_switch = switch;
                for rider in 0..8 {
                    let mut motion = Motion::default();
                    session.grounded = true;
                    motion.tick(&session, 1. / 60., 0., 0.);
                    session.grounded = false;
                    for _ in 0..15 {
                        motion.tick(&session, 1. / 60., 0., 0.);
                    }
                    session.grounded = true;
                    motion.tick(&session, 1. / 60., 0., 0.);
                    assert!(session.recovery.is_none());
                    for _ in 0..10 {
                        let actual =
                            gameplay(&data, rider, &session, &mut motion, None, false, 0., 0., 0.);
                        // Original state 0x70 maps to L_No for all three styles.
                        let expected = action_pose(&data, rider, style, 90, motion.landing);
                        assert!(
                            distance(&actual, &expected) < 0.01,
                            "Clean small jump selected a different landing: rider {rider}, style {style}, switch {switch}, time {}",
                            motion.landing
                        );
                        motion.tick(&session, 1. / 60., 0., 0.);
                    }
                }
            }
        }
    }
    fn fixture() -> (Data, Session) {
        let data = super::super::load(Path::new("extracted/DATA")).unwrap();
        let path = Path::new("extracted/DATA/MODELS/SNOW.BIG");
        let (level, _) = ssx_rust::load_track(path).unwrap();
        let terrain = ssx_rust::playtest::TerrainContact::from_level(&level);
        let session = Session::new(ssx_rust::load_track_paths(path).unwrap(), &terrain).unwrap();
        (data, session)
    }
    fn draw(data: &Data, session: &Session, motion: &mut Motion, grab: Option<usize>) -> Vec<Mat4> {
        motion.tick(session, 1. / 60., 0., 0.);
        let target = gameplay(data, 0, session, motion, grab, false, 0., 0., 0.);
        let target = apply_stance(data, 0, session, target);
        motion.present(data, 0, target, session.phase == Phase::Paused)
    }
    fn distance(a: &[Mat4], b: &[Mat4]) -> f32 {
        a.iter()
            .zip(b)
            .map(|(a, b)| a.w_axis.distance(b.w_axis))
            .fold(0., f32::max)
    }
    #[test]
    #[ignore = "requires the original disc"]
    fn contextual_poses_crossfade_without_detaching_limbs() {
        let (data, mut session) = fixture();
        let mut motion = Motion::default();
        session.phase = Phase::Ready;
        for _ in 0..20 {
            draw(&data, &session, &mut motion, None);
        }
        session.start_rock.offset = -1.;
        let mut previous = draw(&data, &session, &mut motion, None);
        for _ in 0..30 {
            let next = draw(&data, &session, &mut motion, None);
            assert!(
                distance(&previous, &next) < 25.,
                "Gate pose jumped between frames"
            );
            previous = next;
        }
        session.phase = Phase::Running;
        let release = draw(&data, &session, &mut motion, None);
        assert!(
            distance(&previous, &release) < 0.01,
            "Gate release cut to an unrelated first frame"
        );
        session.elapsed = 5.;
        for _ in 0..80 {
            draw(&data, &session, &mut motion, None);
        }
        session.velocity = Vec3::Y * 100.;
        session.ground_inputs.crouch.value = 1.;
        draw(&data, &session, &mut motion, None);
        assert_eq!(
            motion.pose_key, 9,
            "Slow forward input must select push, not tuck"
        );
        session.velocity = Vec3::Y * 1500.;
        draw(&data, &session, &mut motion, None);
        assert!((20..28).contains(&motion.pose_key));
        session.grounded = false;
        session.grind = Some(ssx_rust::rails::Grind {
            rail: 0,
            segment: 0,
            fraction: 0.,
            speed: 1500.,
        });
        draw(&data, &session, &mut motion, Some(0));
        assert_eq!(
            motion.pose_key, 6,
            "Held grab must not replace rail contact animation"
        );
        session.grind = None;
        for _ in 0..30 {
            draw(&data, &session, &mut motion, None);
        }
        assert_eq!(
            motion.pose_key, 166,
            "Held forward must not select airborne pre-windup"
        );
        let last = motion.displayed.clone();
        for _ in 0..12 {
            let next = draw(&data, &session, &mut motion, Some(0));
            assert!(next.iter().all(|m| m.is_finite()));
            for (i, bone) in data.riders[0].bones.iter().enumerate() {
                if bone.parent >= 0 {
                    let local = next[bone.parent as usize].inverse() * next[i];
                    let (scale, _, _) = local.to_scale_rotation_translation();
                    assert!(
                        scale.distance(Vec3::ONE) < 0.001,
                        "Pose blend introduced skeletal scale/shear"
                    );
                }
            }
        }
        assert!(
            distance(&last, &motion.displayed) > 1.,
            "Grab never blended in"
        );
        session.phase = Phase::Paused;
        let paused = motion.displayed.clone();
        for _ in 0..30 {
            assert_eq!(draw(&data, &session, &mut motion, None), paused);
        }
    }
}
