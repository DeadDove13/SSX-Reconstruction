//! Start rocking adapter, matched to the supplied footage. Tuning is provisional.
#[derive(Default, Clone, Copy, Debug)]
pub struct Rocking {
    pub offset: f32,
    velocity: f32,
    input: f32,
    age: f32,
}
impl Rocking {
    pub fn tick(&mut self, input: f32) {
        let input = input.clamp(-1., 1.);
        if (input - self.input).abs() > 0.15 {
            self.age = 0.;
        }
        self.input = input;
        self.age += 1. / 60.;
        self.velocity += (100. * (input - self.offset) - 12. * self.velocity) / 60.;
        self.offset += self.velocity / 60.;
    }
    pub fn launch_speed(&self) -> f32 {
        if self.input < 0.5 || self.age > 0.65 {
            return 0.;
        }
        let peak = ((self.offset - 0.8) / 0.3).clamp(0., 1.);
        240. * peak * (1. - self.velocity.abs() / 6.).clamp(0., 1.)
    }
}

pub fn opponent_forward(remaining: f32, slot: usize) -> bool {
    // Host timing for repeated rocking, followed by a timed final push.
    // Offsets prevent the whole starting field from moving in lockstep.
    if remaining < 0.8 {
        remaining < 0.29 + (slot % 4) as f32 * 0.045
    } else {
        (remaining + slot as f32 * 0.13).rem_euclid(1.1) < 0.55
    }
}
#[cfg(test)]
mod tests {
    use super::*;
    #[test]
    fn opponents_rock_both_ways_during_countdown() {
        for slot in 0..7 {
            let mut r = Rocking::default();
            let mut peaks = 0;
            let mut previous = 0.;
            for tick in 0..180 {
                let remaining = (180 - tick) as f32 / 60.;
                r.tick(if opponent_forward(remaining, slot) {
                    1.
                } else {
                    -1.
                });
                if previous <= 0.5 && r.offset > 0.5 {
                    peaks += 1;
                }
                previous = r.offset;
            }
            assert!(peaks >= 2, "NPC {slot} only leans once instead of rocking");
        }
    }
    #[test]
    fn forward_peak_rewards_timing_and_holding_cannot_bank_a_start() {
        let mut r = Rocking::default();
        for _ in 0..45 {
            r.tick(-1.);
        }
        assert!(r.offset < -0.9);
        assert_eq!(r.launch_speed(), 0.);
        let mut best = 0f32;
        for _ in 0..40 {
            r.tick(1.);
            best = best.max(r.launch_speed());
        }
        assert!(best > 150.);
        for _ in 0..120 {
            r.tick(1.);
        }
        assert_eq!(r.launch_speed(), 0.);
    }
}
