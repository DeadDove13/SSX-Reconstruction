use super::PlayWorld;
use bevy::{
    audio::{AudioSinkPlayback, Volume},
    prelude::*,
};
use ssx_rust::{audio_bank, object_rules::ObjectEvent, playtest::Phase};

#[derive(Resource, Default)]
pub(super) struct GameSounds {
    pub clips: Vec<Option<Handle<AudioSource>>>,
}
#[derive(Component)]
pub(super) struct GameVoice {
    pub position: Option<Vec3>,
}

// Host distance curve in metres. Original spatial mixing remains unported.
fn distance_gain(distance: f32) -> f32 {
    ((45. - distance) / 41.).clamp(0., 1.).powi(2)
}

pub(super) fn load_bank(
    track: &std::path::Path,
) -> ssx_rust::Result<Vec<Option<audio_bank::Clip>>> {
    use ssx_rust::archive;
    let data_root = track
        .parent()
        .and_then(std::path::Path::parent)
        .ok_or("Missing DATA directory")?;
    let archive_data = std::fs::read(track).map_err(|e| e.to_string())?;
    let track_name = archive::index(&archive_data)?
        .into_iter()
        .find(|m| m.path.ends_with(".wdx"))
        .ok_or("Missing track name")?
        .path
        .to_ascii_uppercase();
    let config =
        std::fs::read_to_string(data_root.join("CONFIG/BANKS.INF")).map_err(|e| e.to_string())?;
    let mut selected = false;
    let mut bank = None;
    for line in config.lines() {
        let line = line.trim();
        if line.starts_with('[') {
            selected = track_name.contains(line.trim_matches(['[', ']']));
        }
        if selected
            && let Some((key, value)) = line.split_once('=')
            && key.trim() == "BANK"
        {
            bank = Some(value.trim().trim_matches('"').to_owned());
            break;
        }
    }
    let bank = bank.ok_or("BANKS.INF has no bank for this track")?;
    let bytes = std::fs::read(data_root.join("AUDIO/AUDIO.BIG")).map_err(|e| e.to_string())?;
    let members = archive::index(&bytes)?;
    let member = members
        .iter()
        .find(|m| m.path.to_ascii_lowercase().ends_with(&format!("/{bank}")))
        .ok_or_else(|| format!("Audio archive has no {bank}"))?;
    audio_bank::decode(&archive::extract(&bytes, member)?)
}
pub(super) fn setup(
    mut commands: Commands,
    mut world: ResMut<PlayWorld>,
    mut assets: ResMut<Assets<AudioSource>>,
) {
    let clips = std::mem::take(&mut world.sound_clips)
        .into_iter()
        .map(|clip| {
            clip.map(|c| {
                assets.add(AudioSource {
                    bytes: c.wav().into(),
                })
            })
        })
        .collect();
    commands.insert_resource(GameSounds { clips });
}
pub(super) fn events(
    commands: &mut Commands,
    sounds: &GameSounds,
    events: &[ObjectEvent],
    world: &PlayWorld,
    volume: f32,
) {
    for event in events {
        if let ObjectEvent::Sound { id, object } = event
            && let Some(Some(clip)) = sounds.clips.get(*id as usize)
        {
            let Some(properties) = world.terrain.objects.properties.get(*object) else {
                continue;
            };
            let position = super::super::world(std::array::from_fn(|i| {
                (properties.bounds[0][i] + properties.bounds[1][i]) * 0.5
            }));
            let gain = distance_gain(position.distance(world.current_camera.translation));
            if gain == 0. {
                continue;
            }
            commands.spawn((
                GameVoice {
                    position: Some(position),
                },
                AudioPlayer::new(clip.clone()),
                PlaybackSettings::DESPAWN.with_volume(Volume::Linear(volume * gain)),
            ));
        }
    }
}
pub(super) fn lifecycle(
    mut commands: Commands,
    world: Res<PlayWorld>,
    menu: Res<super::interface::Menu>,
    mut voices: Query<(
        Entity,
        &GameVoice,
        Option<&mut AudioSink>,
        &mut PlaybackSettings,
    )>,
) {
    for (entity, voice, mut sink, mut settings) in &mut voices {
        let volume = menu.audio_gain(menu.settings.effects)
            * voice.position.map_or(1., |p| {
                distance_gain(p.distance(world.current_camera.translation))
            });
        settings.volume = Volume::Linear(volume);
        if let Some(sink) = sink.as_mut() {
            sink.set_volume(Volume::Linear(volume));
        }
        settings.paused = world.session.phase == Phase::Paused;
        match world.session.phase {
            Phase::Ready => {
                commands.entity(entity).despawn();
            }
            Phase::Paused => {
                if let Some(sink) = sink {
                    sink.pause();
                }
            }
            Phase::Running | Phase::Finished => {
                if let Some(sink) = sink {
                    sink.play();
                }
            }
        }
    }
}

#[cfg(test)]
mod tests {
    #[test]
    fn object_audio_fades_and_is_silent_across_the_map() {
        assert_eq!(super::distance_gain(4.), 1.);
        assert!(super::distance_gain(20.) < super::distance_gain(10.));
        assert_eq!(super::distance_gain(45.), 0.);
        assert_eq!(super::distance_gain(1000.), 0.);
    }
    #[test]
    #[ignore = "requires the extracted disc"]
    fn original_bank_config_resolves_every_track() {
        for name in [
            "ALOHA", "ELYSIUM", "MEGAPLEX", "MERQUERY", "MESA", "PIPE", "SNOW", "UNTRACK", "WARMUP",
        ] {
            let path = std::path::PathBuf::from(format!("extracted/DATA/MODELS/{name}.BIG"));
            assert!(
                !super::load_bank(&path)
                    .unwrap_or_else(|e| panic!("{name}: {e}"))
                    .is_empty()
            );
        }
    }
}
