//! Original rider recordings. Event thresholds and voice scheduling are host adapters.
use super::{PlayWorld, interface::Menu};
use bevy::{
    audio::{AudioSinkPlayback, Volume},
    prelude::*,
};
use ssx_rust::playtest::Phase;
use std::collections::BTreeMap;
#[derive(Resource, Default)]
pub struct Speech {
    clips: BTreeMap<String, Vec<Vec<String>>>,
    next: BTreeMap<(String, usize), usize>,
    cooldown: [f32; 8],
    grounded: [bool; 8],
    recovering: [bool; 8],
    air: [f32; 8],
    velocity: [Vec3; 8],
    last_spin: i32,
    pending: [ssx_rust::announcer::Queue; 8],
    ahead: [Option<bool>; 8],
    reset: Option<(usize, u32)>,
    pub played: u32,
}
#[derive(Component)]
pub struct Voice {
    rider: usize,
}
// 0x00158808 catalog ID -> 0x001f24d8 speech mask bit.
const SPEECH_TAGS: [usize; 8] = [4, 5, 6, 0, 1, 3, 7, 2];

pub fn setup(mut commands: Commands) {
    let manifest: serde_json::Value = serde_json::from_slice(
        &std::fs::read("assets/audio/riders/contexts.json").expect("Rider speech cache"),
    )
    .expect("Rider speech contexts");
    let mut state = Speech::default();
    for (name, bank) in manifest.as_object().unwrap() {
        let mut riders = vec![vec![]; 8];
        for (i, tag) in bank["riders"].as_array().unwrap().iter().enumerate() {
            let tag = tag.as_u64().unwrap() as usize;
            if let Some(r) = SPEECH_TAGS.iter().position(|t| *t == tag) {
                riders[r].push(format!("audio/riders/{name}/{}.wav", i + 1));
            }
        }
        state.clips.insert(name.clone(), riders);
    }
    commands.insert_resource(state);
}
pub fn tick(
    mut commands: Commands,
    world: Res<PlayWorld>,
    menu: Res<Menu>,
    assets: Res<AssetServer>,
    mut speech: ResMut<Speech>,
    mut voices: Query<(
        Entity,
        &Voice,
        Option<&mut AudioSink>,
        &mut PlaybackSettings,
    )>,
) {
    let key = (menu.track, world.session.resets);
    let reset = speech.reset != Some(key);
    if reset {
        speech.reset = Some(key);
        speech.cooldown = [0.; 8];
        speech.grounded = [true; 8];
        speech.recovering = [false; 8];
        speech.air = [0.; 8];
        speech.velocity = [Vec3::ZERO; 8];
        speech.last_spin = 0;
        speech.pending = Default::default();
        speech.ahead = [None; 8];
    }
    let running = world.session.phase == Phase::Running;
    for (e, voice, sink, mut settings) in &mut voices {
        if reset || matches!(world.session.phase, Phase::Ready | Phase::Finished) {
            commands.entity(e).despawn();
            continue;
        }
        let session = if voice.rider == world.rider {
            &world.session
        } else {
            &world.opponents[if voice.rider < world.rider {
                voice.rider
            } else {
                voice.rider - 1
            }]
            .session
        };
        let gain = if voice.rider == world.rider {
            1.
        } else {
            ((2200. - session.position.distance(world.session.position)) / 1800.)
                .clamp(0., 1.)
                .powi(2)
                * 0.65
        };
        let volume = Volume::Linear(menu.audio_gain(menu.settings.effects) * gain * 0.85);
        settings.volume = volume;
        if let Some(mut sink) = sink {
            sink.set_volume(volume);
            if running {
                sink.play();
            } else {
                sink.pause();
            }
        }
    }
    if !running {
        return;
    }
    // A margin avoids alternating calls while riders remain side by side.
    if menu.event == ssx_rust::front_end::Event::Race && world.session.returning.is_none() {
        for r in (0..8).filter(|r| *r != world.rider) {
            let npc = &world.opponents[if r < world.rider { r } else { r - 1 }].session;
            let delta = world.session.progress - npc.progress;
            if delta.abs() <= 0.001 {
                continue;
            }
            let ahead = delta > 0.;
            if speech.ahead[r].is_some_and(|old| old != ahead)
                && world.session.elapsed > 3.
                && npc.phase == Phase::Running
                && npc.returning.is_none()
                && npc.position.distance(world.session.position) < 2200.
            {
                let (player_cue, npc_cue) = if ahead {
                    ("passing", "passed")
                } else {
                    ("passed", "passing")
                };
                speech.pending[world.rider].push(ssx_rust::announcer::Cue::new(player_cue, vec![]));
                speech.pending[r].push(ssx_rust::announcer::Cue::new(npc_cue, vec![]));
            }
            speech.ahead[r] = Some(ahead);
        }
    }
    let mut spawned = 0;
    // Player first. At most two nearby rider recordings at once.
    for r in std::iter::once(world.rider).chain((0..8).filter(|i| *i != world.rider)) {
        let player = r == world.rider;
        let session = if player {
            &world.session
        } else {
            &world.opponents[if r < world.rider { r } else { r - 1 }].session
        };
        speech.cooldown[r] = (speech.cooldown[r] - 1. / 60.).max(0.);
        speech.pending[r].tick(1. / 60.);
        let recovering = session.recovery.is_some();
        let air_before = speech.air[r];
        speech.air[r] = if session.grounded {
            0.
        } else {
            air_before + 1. / 60.
        };
        let spin = (world.tricks.spin.abs() / 180.) as i32;
        let cue = if recovering && !speech.recovering[r] {
            Some(
                if session
                    .recovery
                    .is_some_and(|r| r.quality == ssx_rust::landing::Quality::Bail)
                {
                    "wipeout"
                } else {
                    "collision"
                },
            )
        } else if recovering {
            None
        } else if player && (world.contact_cues.bump || world.contact_cues.shove) {
            Some("bump")
        } else if player
            && world.tricks.landed
            && !world.tricks.bailed
            && world.tricks.last_award >= 500
        {
            Some("trick")
        } else if !session.grounded && air_before < 1.8 && speech.air[r] >= 1.8 {
            Some("air")
        } else if player && !session.grounded && spin > speech.last_spin {
            Some("spin")
        } else if !reset
            && !session.landed_this_tick
            && speech.velocity[r].length() - session.velocity.length() > 600.
        {
            Some("collision")
        } else {
            None
        };
        speech.grounded[r] = session.grounded;
        speech.recovering[r] = recovering;
        speech.velocity[r] = session.velocity;
        if player {
            speech.last_spin = if session.grounded { 0 } else { spin };
        }
        if let Some(cue) = cue {
            speech.pending[r].push(ssx_rust::announcer::Cue::new(cue, vec![]));
        }
        if session.grounded {
            speech.pending[r].discard("air");
            speech.pending[r].discard("spin");
        }
        if session.returning.is_some() {
            speech.pending[r].clear();
        }
        if speech.cooldown[r] > 0.
            || voices.iter().any(|(_, v, _, _)| v.rider == r)
            || voices.iter().count() + spawned >= 2
        {
            continue;
        }
        if !player
            && (menu.event != ssx_rust::front_end::Event::Race
                || session.position.distance(world.session.position) > 2200.)
        {
            continue;
        }
        let Some(cue) = speech.pending[r].pop() else {
            continue;
        };
        let cue = cue.category;
        if matches!(cue, "air" | "spin") && session.grounded {
            continue;
        }
        if session.returning.is_some() {
            speech.pending[r].clear();
            continue;
        }
        let index = *speech.next.entry((cue.into(), r)).or_default();
        let candidates = &speech.clips[cue][r];
        if candidates.is_empty() {
            continue;
        }
        let path = candidates[index % candidates.len()].clone();
        speech.next.insert((cue.into(), r), index + 1);
        speech.cooldown[r] = if cue == "spin" { 1.5 } else { 2.5 };
        speech.played += 1;
        spawned += 1;
        let gain = if player {
            1.
        } else {
            ((2200. - session.position.distance(world.session.position)) / 1800.)
                .clamp(0., 1.)
                .powi(2)
                * 0.65
        };
        commands.spawn((
            Voice { rider: r },
            AudioPlayer::new(assets.load(path)),
            PlaybackSettings::DESPAWN.with_volume(Volume::Linear(
                menu.audio_gain(menu.settings.effects) * gain * 0.85,
            )),
        ));
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    #[test]
    #[ignore = "requires the original executable"]
    fn rider_speech_uses_original_character_ids() {
        let bin = std::fs::read("extracted/SLUS_200.95").unwrap();
        let masks: [u32; 9] = [256, 2, 32, 128, 8, 16, 4, 1, 64];
        for (rider, tag) in SPEECH_TAGS.iter().enumerate() {
            let id = bin[0x27c3b8 - 0x100000 + 4096 + rider * 0x3c] as usize;
            assert_eq!(*tag, masks[id].trailing_zeros() as usize, "Rider {rider}");
        }
        assert_eq!(SPEECH_TAGS[3], 0, "Mac must use speech tag zero");
    }
}
