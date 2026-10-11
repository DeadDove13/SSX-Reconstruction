//! Recovered HUD timing with host event inputs. See docs/RACE_FEEDBACK.md.
pub const COUNTDOWN_SECONDS: f32 = 5.; // 0x00102280: -300, 0x00102358: +2 at 30 Hz.
pub const AWARD_SECONDS: f32 = 2.5; // 0x001377d0: event 2/3, 0x40200000.

/// Scale impulse from 0x001bcff0. The original uses its sine approximation.
pub fn pulse(fraction: f32, amplitude: f32) -> f32 {
    if !(0. ..=0.25).contains(&fraction) {
        return 0.;
    }
    (fraction * std::f32::consts::PI * 4.).sin() * (1. - fraction) * 0.5 * amplitude
}

#[derive(Default, Debug)]
pub struct Feedback {
    pub pending: u32,
    pub award: u32,
    pub award_age: f32,
    pub combo: bool,
    pub label: String,
    pub lost: bool,
    total: u32,
    cadence: bool,
}
#[derive(Default, Debug)]
pub struct Cues {
    pub gain: bool,
    pub bank: bool,
}
impl Feedback {
    pub fn tick(&mut self, tricks: &crate::tricks::State) -> Cues {
        self.award_age += 1. / 60.;
        if tricks.pending > 0 && self.lost {
            self.award = 0;
            self.award_age = AWARD_SECONDS;
            self.lost = false;
        }
        let mut cues = Cues::default();
        if tricks.total > self.total {
            self.award = tricks.total - self.total;
            self.award_age = 0.;
            self.combo = tricks.combo;
            self.label = tricks.label.clone();
            self.lost = false;
            cues.bank = true;
        } else if tricks.bailed && !self.lost {
            self.award = self.pending;
            self.award_age = 0.;
            self.lost = true;
            self.combo = false;
            self.label = "WIPEOUT".into();
        }
        self.total = tricks.total;
        // 0x001b9fd0 advances by 50 at the original 30 Hz update rate.
        self.cadence = !self.cadence;
        if tricks.pending < self.pending {
            self.pending = 0;
        }
        if self.cadence {
            let before = self.pending;
            self.pending = tricks.pending.min(self.pending.saturating_add(50));
            cues.gain = self.pending / 100 > before / 100;
        }
        cues
    }
    pub fn award_visible(&self) -> bool {
        self.award > 0 && self.award_age < AWARD_SECONDS
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    #[test]
    fn score_feedback_banks_once_and_bail_cannot_bank() {
        let mut f = Feedback::default();
        let mut t = crate::tricks::State::default();
        let mut gains = 0;
        for _ in 0..60 {
            t.tick(
                false,
                crate::tricks::Input {
                    grab: Some(7),
                    ..Default::default()
                },
                false,
            );
            gains += usize::from(f.tick(&t).gain);
        }
        assert!(gains > 0);
        t.tick(true, Default::default(), false);
        assert!(f.tick(&t).bank);
        assert_eq!(f.award, t.total);
        assert!(!f.tick(&t).bank);
        for _ in 0..160 {
            f.tick(&t);
        }
        assert!(!f.award_visible());
        t.tick(
            false,
            crate::tricks::Input {
                grab: Some(7),
                ..Default::default()
            },
            false,
        );
        f.tick(&t);
        t.tick(true, Default::default(), true);
        assert!(!f.tick(&t).bank);
        assert!(f.lost);
        t.tick(
            false,
            crate::tricks::Input {
                grab: Some(7),
                ..Default::default()
            },
            false,
        );
        f.tick(&t);
        assert!(!f.lost);
        assert!(!f.award_visible());
    }
    #[test]
    fn pulse_has_no_initial_jolt_and_settles() {
        assert_eq!(pulse(0., 0.6), 0.);
        assert!(pulse(0.125, 0.6) > 0.);
        assert_eq!(pulse(0.5, 0.6), 0.);
    }
}
