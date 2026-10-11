//! Original frontend narrator and character voices, queued without overlap.
use super::interface::{Menu, Screen};
use bevy::{audio::Volume, prelude::*};
use std::collections::VecDeque;
#[derive(Clone, Copy, Debug)]
enum Cue {
    Narrator(usize),
    Character(usize),
}
#[derive(Component)]
pub struct MenuVoice;
#[derive(Resource)]
pub struct Voices {
    narrator: Vec<Handle<AudioSource>>,
    characters: Vec<Handle<AudioSource>>,
    queue: VecDeque<Cue>,
    last: Option<(Screen, usize, usize)>,
    pub played: Vec<String>,
}
pub fn setup(mut commands: Commands, assets: Res<AssetServer>) {
    commands.insert_resource(Voices {
        narrator: (1..=51)
            .map(|i| assets.load(format!("audio/frontend/{i}.wav")))
            .collect(),
        characters: (1..=24)
            .map(|i| assets.load(format!("audio/character-menu/{i}.wav")))
            .collect(),
        queue: VecDeque::new(),
        last: None,
        played: Vec::new(),
    });
}
// FE HDR contexts (4, character) and nonempty CHARSPFE bank stream groups.
const NAMES: [usize; 8] = [23, 24, 28, 21, 22, 27, 26, 25];
// Rider order: Hiro, Kaori, Jurgen, Mac, Moby, Zoe, JP, Elise.
const CHARACTER: [usize; 8] = [10, 16, 22, 1, 4, 13, 19, 7];
fn cues(screen: Screen, index: usize, entered: bool) -> Vec<Cue> {
    use Cue::*;
    match screen {
        Screen::Title => vec![Narrator(15)],
        Screen::Mode => vec![Narrator(16)],
        Screen::Players => vec![Narrator(1)],
        Screen::Event => vec![Narrator(13)],
        Screen::Rider if entered => vec![
            Narrator(20),
            Narrator(NAMES[index]),
            Character(CHARACTER[index]),
        ],
        Screen::Rider | Screen::RiderSetup => {
            vec![Narrator(NAMES[index]), Character(CHARACTER[index])]
        }
        Screen::Course => vec![Narrator(32)],
        Screen::Options => vec![Narrator(41)],
        Screen::SoundOptions => vec![Narrator(42)],
        Screen::Controls => vec![Narrator(43)],
        _ => vec![],
    }
}
pub fn tick(
    mut commands: Commands,
    menu: Res<Menu>,
    mut state: ResMut<Voices>,
    mut voices: Query<(Entity, Option<&mut AudioSink>, &mut PlaybackSettings), With<MenuVoice>>,
) {
    let index = if menu.screen == Screen::Rider {
        menu.cursor.min(7)
    } else if menu.screen == Screen::RiderSetup {
        menu.rider
    } else {
        0
    };
    let row = if menu.screen == Screen::RiderSetup {
        menu.cursor
    } else {
        0
    };
    let key = (menu.screen, index, row);
    let changed = state.last != Some(key);
    let volume = Volume::Linear(menu.audio_gain(menu.settings.speech));
    for (entity, sink, mut settings) in &mut voices {
        if changed {
            commands.entity(entity).despawn();
        } else {
            settings.volume = volume;
            if let Some(mut sink) = sink {
                sink.set_volume(volume);
            }
        }
    }
    if changed {
        let entered = state.last.is_none_or(|k| k.0 != menu.screen);
        state.queue = if !entered && menu.screen == Screen::RiderSetup {
            match row {
                0 => vec![Cue::Narrator(29)],
                1 => vec![Cue::Narrator(31)],
                2 => vec![Cue::Narrator(30)],
                _ => vec![],
            }
        } else {
            cues(menu.screen, index, entered)
        }
        .into();
        state.last = Some(key);
    }
    if (changed || voices.is_empty())
        && let Some(cue) = state.queue.pop_front()
    {
        let handle = match cue {
            Cue::Narrator(i) => state.narrator[i - 1].clone(),
            Cue::Character(i) => state.characters[i - 1].clone(),
        };
        state.played.push(format!("{cue:?}"));
        if state.played.len() > 128 {
            state.played.remove(0);
        }
        commands.spawn((
            MenuVoice,
            AudioPlayer::new(handle),
            PlaybackSettings::DESPAWN.with_volume(volume),
        ));
    }
}
#[cfg(test)]
mod tests {
    use super::*;
    #[test]
    fn frontend_contexts_and_character_pairs_are_distinct() {
        assert!(matches!(cues(Screen::Title, 0, true)[0], Cue::Narrator(15)));
        assert!(matches!(cues(Screen::Mode, 0, true)[0], Cue::Narrator(16)));
        assert!(matches!(
            cues(Screen::Options, 0, true)[0],
            Cue::Narrator(41)
        ));
        for i in 0..8 {
            let c = cues(Screen::RiderSetup, i, true);
            assert_eq!(c.len(), 2);
            assert!(matches!(c[1], Cue::Character(_)));
        }
    }
}
