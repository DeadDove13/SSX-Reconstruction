//! Recovered score arithmetic with a provisional host event adapter.
//! The original animation completion gates and full trick-name classifier remain unported.
mod constants {
    include!("trick_constants.rs");
}
pub use constants::GRABS;
use constants::*;

#[derive(Default, Clone, Copy)]
pub struct Input {
    pub spin: f32,
    pub flip: f32,
    pub grab: Option<usize>,
    pub tweak: bool,
}

/// Forward held on snow cannot start a front flip at an unexpected takeoff.
#[derive(Default)]
pub struct ForwardGate {
    blocked: bool,
}
impl ForwardGate {
    pub fn filter(&mut self, grounded_before_step: bool, mut input: Input) -> Input {
        if grounded_before_step {
            self.blocked = input.flip < -0.1;
        } else if input.flip >= -0.1 {
            self.blocked = false;
        }
        if self.blocked && input.flip < 0. {
            input.flip = 0.;
        }
        input
    }
}
#[derive(Default, Clone, Debug)]
pub struct State {
    pub grind_started: bool,
    grind_time: f32,
    pub landing: Option<Landing>,
    pub total: u32,
    pub pending: u32,
    pub last_award: u32,
    /// Host classification until the original packed combo classifier is ported.
    pub combo: bool,
    pub label: String,
    pub spin: f32,
    pub flip: f32,
    pub grab: Option<usize>,
    pub tweak: bool,
    pub grab_time: f32,
    pub airborne: f32,
    pub landed: bool,
    pub bailed: bool,
    raw: f32,
    spin_max: i32,
    flip_max: i32,
    grabs: Vec<(usize, bool)>,
    bailing: bool,
    history: Vec<(i32, i32, Vec<(usize, bool)>)>,
}
#[derive(Clone, Debug)]
pub struct Landing {
    pub spin: i32,
    pub flip: i32,
    pub award: u32,
    pub bailed: bool,
}
/// 0x00137d50. Ties at 90 degrees round toward zero.
pub fn round_rotation(angle: i32) -> i32 {
    let remainder = angle % 180;
    if remainder < -90 {
        angle - 180 - remainder
    } else if remainder > 90 {
        angle + 180 - remainder
    } else {
        angle - remainder
    }
}
/// 0x00136a70. Score rounds to the nearest ten points.
pub fn score(raw: f32, multiplier: f32) -> u32 {
    let points = (multiplier * raw * SCORE_SCALE).max(0.);
    let n = (points * SCORE_UNITS + 5.) as u32;
    n - n % 10
}
impl State {
    /// Course return discards the current trick but keeps secured points and history.
    pub fn cancel_pending(&mut self) {
        self.clear_air();
        self.grind_time = 0.;
        self.landing = None;
        self.landed = false;
        self.bailed = false;
        self.bailing = false;
        self.last_award = 0;
        self.label.clear();
        self.combo = false;
    }
    /// Provisional rail score rate. Original rail award arithmetic is not yet ported.
    pub fn tick_grind(&mut self, active: bool, bail: bool) {
        self.grind_started = active && self.grind_time == 0.;
        if active {
            self.grind_time += 1. / 60.;
            self.pending = (self.grind_time * 100.) as u32;
            self.label = "50/50 Rail".into();
        } else if self.grind_time > 0. {
            let award = if bail {
                0
            } else {
                (self.grind_time * 100.) as u32
            };
            self.total = self.total.saturating_add(award);
            self.last_award = award;
            self.grind_time = 0.;
            self.pending = 0;
        }
    }
    fn end_grab(&mut self) {
        if let Some(grab) = self.grab {
            let id = (grab, self.tweak);
            if !self.grabs.contains(&id) && self.grabs.len() < 3 {
                self.grabs.push(id);
            }
        }
        self.grab = None;
        self.grab_time = 0.;
    }
    fn clear_air(&mut self) {
        self.raw = 0.;
        self.pending = 0;
        self.spin = 0.;
        self.flip = 0.;
        self.spin_max = 0;
        self.flip_max = 0;
        self.grab = None;
        self.grab_time = 0.;
        self.airborne = 0.;
        self.grabs.clear();
    }
    pub fn tick(&mut self, grounded: bool, input: Input, impact: bool) {
        self.landing = None;
        self.landed = false;
        self.bailed = false;
        if self.bailing {
            if grounded {
                self.bailing = false;
                self.bailed = true;
                self.landed = true;
                self.landing = Some(Landing {
                    spin: 0,
                    flip: 0,
                    award: 0,
                    bailed: true,
                });
            }
            return;
        }
        if !grounded {
            self.airborne += 1. / 60.;
            // Host rotation rate. The original angular dynamics are not yet connected.
            self.spin += input.spin * 300. / 60.;
            self.flip += input.flip * 300. / 60.;
            let spin = round_rotation(self.spin.abs() as i32);
            let flip = round_rotation(self.flip.abs() as i32);
            if spin > self.spin_max {
                self.raw += SPIN_GAIN;
                self.spin_max = spin;
            }
            if flip > self.flip_max && flip % 360 == 0 {
                self.raw += FLIP_GAIN;
                self.flip_max = flip;
            }
            let grab = input.grab.filter(|&g| g < GRABS.len());
            if grab != self.grab {
                self.end_grab();
                self.grab = grab;
                self.tweak = input.tweak;
                if grab.is_some() {
                    self.raw += (self.grabs.len() + 1) as f32 * GRAB_GAIN;
                }
            }
            self.tweak = input.tweak;
            if let Some(g) = self.grab {
                self.grab_time += 1. / 60.;
                self.raw += GRABS[g].rates[self.tweak as usize] * HOLD_GAIN;
            }
            self.pending = score(self.raw, 1.);
            self.combo = self.grabs.len()
                + usize::from(
                    self.grab
                        .is_some_and(|g| !self.grabs.contains(&(g, self.tweak))),
                )
                >= 2;
            self.label = self.description();
            if impact {
                self.bailed = true;
                self.bailing = true;
                self.last_award = 0;
                self.label = "Wipeout".into();
                self.clear_air();
            }
        } else if self.airborne > 0. {
            self.end_grab();
            self.landed = true;
            // Host landing check. Original orientation and bail thresholds remain unported.
            let flip_error = (self.flip + 180.).rem_euclid(360.) - 180.;
            if impact || flip_error.abs() > 75. {
                self.bailed = true;
                self.last_award = 0;
                self.label = "Wipeout".into();
            } else {
                self.label = self.description();
                let key = (
                    round_rotation(self.spin as i32),
                    round_rotation(self.flip as i32),
                    self.grabs.clone(),
                );
                let repeats = self.history.iter().filter(|old| **old == key).count() as u32;
                self.last_award = score(self.raw, 1.) / (1 + repeats);
                self.total = self.total.saturating_add(self.last_award);
                if self.last_award > 0 {
                    if self.history.len() == 5 {
                        self.history.remove(0);
                    }
                    self.history.push(key);
                }
            }
            self.landing = Some(Landing {
                spin: round_rotation(self.spin as i32),
                flip: round_rotation(self.flip as i32),
                award: self.last_award,
                bailed: self.bailed,
            });
            self.clear_air();
        }
    }
    fn description(&self) -> String {
        let mut parts = Vec::new();
        let spin = round_rotation(self.spin as i32).abs();
        let flip = round_rotation(self.flip as i32).abs() / 360;
        if spin > 0 {
            parts.push(format!("{spin}"));
        }
        if flip > 0 {
            parts.push(format!(
                "{}{} Flip",
                if flip > 1 {
                    format!("{flip}x ")
                } else {
                    String::new()
                },
                if self.flip > 0. { "Front" } else { "Back" }
            ));
        }
        for &(g, t) in &self.grabs {
            parts.push(GRABS[g].names[t as usize].to_string());
        }
        if let Some(g) = self.grab {
            let name = GRABS[g].names[self.tweak as usize].to_string();
            if !parts.contains(&name) {
                parts.push(name);
            }
        }
        parts.join(" + ")
    }
}
#[cfg(test)]
mod tests {
    use super::*;
    #[test]
    fn held_forward_requires_release_in_air_but_other_directions_do_not() {
        let mut gate = ForwardGate::default();
        let input = Input {
            flip: -1.,
            spin: 1.,
            grab: Some(0),
            ..Default::default()
        };
        assert_eq!(gate.filter(true, input).flip, 0.);
        for _ in 0..90 {
            let out = gate.filter(false, input);
            assert_eq!(out.flip, 0.);
            assert_eq!(out.spin, 1.);
            assert_eq!(out.grab, Some(0));
        }
        gate.filter(false, Input::default());
        assert_eq!(gate.filter(false, input).flip, -1.);
        gate.filter(true, input);
        assert_eq!(gate.filter(false, Input { flip: 1., ..input }).flip, 1.);
        gate.filter(true, Input::default());
        assert_eq!(gate.filter(false, input).flip, -1.);
    }
    #[test]
    fn rail_score_banks_once_and_bail_cancels_it() {
        let mut s = State::default();
        for _ in 0..120 {
            s.tick_grind(true, false);
        }
        assert!(s.pending >= 199);
        s.tick_grind(false, false);
        let total = s.total;
        assert!(total >= 199);
        s.tick_grind(false, false);
        assert_eq!(s.total, total);
        for _ in 0..60 {
            s.tick_grind(true, false);
        }
        s.tick_grind(false, true);
        assert_eq!(s.total, total);
    }
    #[test]
    fn rotation_rounding_matches_original_boundaries() {
        assert_eq!(round_rotation(90), 0);
        assert_eq!(round_rotation(91), 180);
        assert_eq!(round_rotation(-90), 0);
        assert_eq!(round_rotation(-91), -180);
    }
    #[test]
    fn clean_landing_banks_once_and_repeat_penalty_persists() {
        let mut s = State::default();
        for _ in 0..2 {
            for _ in 0..60 {
                s.tick(
                    false,
                    Input {
                        grab: Some(7),
                        ..Default::default()
                    },
                    false,
                );
            }
            s.tick(true, Input::default(), false);
        }
        let total = s.total;
        let last = s.last_award;
        s.tick(true, Input::default(), false);
        assert_eq!(s.total, total);
        assert!(total >= last * 3 && last > 0);
    }
    #[test]
    fn inverted_landing_loses_pending_points() {
        let mut s = State::default();
        for _ in 0..36 {
            s.tick(
                false,
                Input {
                    flip: 1.,
                    grab: Some(7),
                    ..Default::default()
                },
                false,
            );
        }
        assert!(s.pending > 0);
        s.tick(true, Input::default(), false);
        assert_eq!(s.total, 0);
        assert_eq!(s.pending, 0);
        assert!(s.bailed);
    }
    #[test]
    fn impact_blocks_new_points_until_ground_contact() {
        let mut s = State::default();
        let input = Input {
            grab: Some(7),
            ..Default::default()
        };
        s.tick(false, input, true);
        for _ in 0..60 {
            s.tick(false, input, false);
        }
        s.tick(true, input, false);
        assert_eq!(s.total, 0);
        assert!(s.bailed);
        s.tick(false, input, false);
        assert!(s.pending > 0);
    }
}
