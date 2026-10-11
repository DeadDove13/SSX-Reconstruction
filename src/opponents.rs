//! Playtest opponents use original start slots and paths with host steering.
//! Original AI tactics, difficulty and path events remain unported. The host
//! rider_contact adapter handles physical contact with other riders.
use crate::{
    Result,
    playtest::{Controls, Phase, Session, TerrainContact},
    race_path::Network,
};
use bevy::math::Vec3;
pub struct Opponent {
    pub session: Session,
    route: usize,
    pub steer: f32,
    pub previous_position: Vec3,
    finishing: bool,
}
impl Opponent {
    pub fn field(network: &Network, terrain: &TerrainContact) -> Result<Vec<Self>> {
        (1..8)
            .map(|slot| {
                let mut paths = network.clone();
                let route = paths.starts[slot];
                paths.starts.swap(0, slot);
                let mut session = Session::new(paths, terrain)?;
                session.legacy_ai_steering = true;
                let previous_position = session.position;
                Ok(Self {
                    session,
                    route,
                    steer: 0.,
                    previous_position,
                    finishing: false,
                })
            })
            .collect()
    }
    pub fn reset(&mut self) {
        self.session.reset();
        self.route = self.session.network.starts[0];
        self.steer = 0.;
        self.previous_position = self.session.position;
        self.finishing = false;
    }
    pub fn tick(&mut self, phase: Phase, terrain: &TerrainContact) {
        self.previous_position = self.session.position;
        if self.session.phase == Phase::Finished {
            if phase == Phase::Running {
                self.session.tick(Controls::default(), terrain);
            }
            return;
        }
        self.session.phase = phase;
        if phase != Phase::Running {
            return;
        }
        let paths = &self.session.network.ai;
        let position = self.session.position;
        // Reacquire a forward path after a missed branch or an airborne exit.
        // This changes the steering target without moving the rider through walls.
        if paths[self.route]
            .project(position.to_array())
            .is_some_and(|p| p.lateral > 2000.)
        {
            let travel = self.session.velocity.truncate().normalize_or_zero();
            if let Some((route, _)) = paths
                .iter()
                .enumerate()
                .filter_map(|(i, p)| {
                    let q = p.project(position.to_array())?;
                    let heading = Vec3::from_array(p.direction(q.along)?)
                        .truncate()
                        .normalize_or_zero();
                    let height = (q.point[2] - position.z).abs();
                    (heading.dot(travel) > 0.5 && q.along < p.length() - 350. && height < 2000.)
                        .then_some((i, q.lateral * q.lateral + height * height))
                })
                .min_by(|a, b| a.1.total_cmp(&b.1))
            {
                self.route = route;
            }
        }
        let path = &paths[self.route];
        let along = path.project(position.to_array()).map_or(0., |p| p.along);
        let lookahead = (self.session.velocity.length() * 0.5).clamp(350., 1400.);
        self.finishing |= self.session.progress > 0.98;
        let target = if self.finishing {
            // Original AI finish events are not connected. Follow the final
            // race-path segment through the host's existing finish threshold.
            let finish = self
                .session
                .network
                .race
                .iter()
                .min_by(|a, b| {
                    (f32::from_bits(a.header_word) - a.length())
                        .total_cmp(&(f32::from_bits(b.header_word) - b.length()))
                })
                .unwrap();
            Vec3::from_array(finish.sample(finish.length()).0)
                + Vec3::from_array(finish.direction(finish.length()).unwrap()) * 500.
        } else if along + lookahead >= path.length() {
            let end = Vec3::from_array(path.sample(path.length()).0);
            // Select a nearby continuation that points forward. This is a host
            // route adapter, not the original AI branch selector.
            let direction = Vec3::from_array(path.direction(path.length()).unwrap());
            let next = paths
                .iter()
                .enumerate()
                .filter(|(i, p)| *i != self.route && !p.segments.is_empty())
                .filter_map(|(i, p)| {
                    let delta = Vec3::from_array(p.origin) - end;
                    let heading = Vec3::from_array(p.direction(0.).unwrap());
                    // Some AI paths return uphill. The host has no trick-route
                    // state, so select a continuation that advances the race.
                    (delta.length() < 4000.
                        && heading.dot(direction) > 0.
                        && (Vec3::from_array(p.sample(p.length()).0) - Vec3::from_array(p.origin))
                            .dot(direction)
                            > 0.)
                        .then_some((i, delta.length_squared()))
                })
                .min_by(|a, b| a.1.total_cmp(&b.1));
            if let Some((next, _)) = next {
                let target = Vec3::from_array(
                    paths[next]
                        .sample((along + lookahead - path.length()).max(100.))
                        .0,
                );
                // Move to the continuation when its lookahead target is selected.
                // Waiting for the endpoint traps riders on offset junctions.
                self.route = next;
                target
            } else {
                Vec3::from_array(path.sample(path.length()).0)
            }
        } else {
            Vec3::from_array(path.sample(along + lookahead).0)
        };
        let desired = (target - position).truncate().normalize_or_zero();
        let forward = self.session.forward.truncate().normalize_or_zero();
        let angle = forward.perp_dot(desired).atan2(forward.dot(desired));
        self.steer = (-angle * 1.8).clamp(-1., 1.);
        let resets = self.session.resets;
        let objects = self.session.objects.clone();
        self.session.tick(
            Controls {
                steer: self.steer,
                push: true,
                brake: angle.abs() > 0.8 && self.session.velocity.length() > 1400.,
                ..Default::default()
            },
            terrain,
        );
        if self.session.resets != resets {
            self.route = self.session.network.starts[0];
            self.previous_position = self.session.position;
            self.session.objects = objects;
            self.finishing = false;
        }
    }
}
