use bevy::{
    audio::{AudioSinkPlayback, ChannelCount, Decodable, SampleRate, Source, Volume},
    prelude::*,
};
use ssx_rust::{
    Result, archive,
    audio_bank::{self, Clip},
    music::{self, Graph},
    object_rules::sound_surface,
    playtest::Phase,
    sound_vm,
};
use std::{collections::BTreeMap, path::Path, sync::Arc, time::Duration};
pub struct Song {
    graph: Graph,
    clips: Vec<Clip>,
}
#[derive(Asset, TypePath, Clone)]
pub struct MusicSource {
    song: Arc<Song>,
}
pub struct MusicDecoder {
    song: Arc<Song>,
    node: usize,
    offset: usize,
    random: u32,
}
impl Iterator for MusicDecoder {
    type Item = f32;
    fn next(&mut self) -> Option<f32> {
        if self.offset == self.song.clips[self.node].samples.len() {
            self.random = self.random.wrapping_mul(1664525).wrapping_add(1013904223);
            self.node = self
                .song
                .graph
                .next(self.node, ((self.random >> 8) % 101) as u8);
            self.offset = 0;
        }
        let sample = self.song.clips[self.node].samples[self.offset] as f32 / 32768.;
        self.offset += 1;
        Some(sample)
    }
}
impl Source for MusicDecoder {
    fn current_span_len(&self) -> Option<usize> {
        None
    }
    fn channels(&self) -> ChannelCount {
        ChannelCount::new(self.song.clips[0].channels).unwrap()
    }
    fn sample_rate(&self) -> SampleRate {
        SampleRate::new(self.song.clips[0].rate).unwrap()
    }
    fn total_duration(&self) -> Option<Duration> {
        None
    }
}
impl Decodable for MusicSource {
    type Decoder = MusicDecoder;
    fn decoder(&self) -> MusicDecoder {
        MusicDecoder {
            song: self.song.clone(),
            node: self.song.graph.start,
            offset: 0,
            random: 0x535358,
        }
    }
}
pub struct Data {
    main: Vec<Option<Clip>>,
    programs: sound_vm::Programs,
    song: Song,
    speech: BTreeMap<String, Vec<Vec<u8>>>,
    contexts: BTreeMap<String, Vec<Vec<u8>>>,
    pub song_name: String,
}
#[derive(Resource)]
pub struct Media {
    main: Vec<Option<Handle<AudioSource>>>,
    loops: Vec<Option<Handle<AudioSource>>>,
    programs: sound_vm::Programs,
    music: Handle<MusicSource>,
    speech: BTreeMap<String, Vec<Handle<AudioSource>>>,
    reset: u32,
    last_phase: Phase,
    last_grounded: bool,
    contexts: BTreeMap<String, Vec<Vec<u8>>>,
    last_voice: BTreeMap<String, usize>,
    cooldown: f32,
    pending: ssx_rust::announcer::Queue,
    last_air: f32,
    last_charge: f32,
    last_rank: usize,
    last_recovering: bool,
    holeshot_checked: bool,
    pickup_serial: u32,
}
#[derive(Component)]
pub struct MusicVoice;
#[derive(Component)]
pub struct MenuMusicVoice;
#[derive(Resource)]
pub struct MenuMusicClip(Handle<AudioSource>);
pub fn setup_menu_music(mut commands: Commands, assets: Res<AssetServer>) {
    commands.insert_resource(MenuMusicClip(assets.load("audio/menu-friendless.wav")));
}
pub fn menu_music(
    mut commands: Commands,
    menu: Res<super::interface::Menu>,
    world: Res<super::PlayWorld>,
    clip: Res<MenuMusicClip>,
    mut voices: Query<
        (Entity, Option<&mut AudioSink>, &mut PlaybackSettings),
        With<MenuMusicVoice>,
    >,
) {
    let active = world.session.phase == Phase::Ready
        && menu.open()
        && menu.screen != super::interface::Screen::Loading;
    let volume = Volume::Linear(menu.audio_gain(menu.settings.music));
    for (entity, sink, mut settings) in &mut voices {
        if !active {
            commands.entity(entity).despawn();
            continue;
        }
        settings.volume = volume;
        if let Some(mut sink) = sink {
            sink.set_volume(volume);
        }
    }
    if active && voices.is_empty() {
        commands.spawn((
            MenuMusicVoice,
            AudioPlayer::new(clip.0.clone()),
            PlaybackSettings::LOOP.with_volume(volume),
        ));
    }
}
#[derive(Component)]
pub struct Announcer;
#[derive(Component)]
pub struct BoardLoop {
    surface: usize,
    mode: &'static str,
}
fn read(path: impl AsRef<Path>) -> Result<Vec<u8>> {
    std::fs::read(path.as_ref()).map_err(|e| format!("{}: {e}", path.as_ref().display()))
}
fn find(bytes: &[u8], suffix: &str) -> Result<Vec<u8>> {
    let members = archive::index(bytes)?;
    let member = members
        .iter()
        .find(|m| m.path.to_ascii_lowercase().ends_with(suffix))
        .ok_or_else(|| format!("Missing audio member {suffix}"))?;
    archive::extract(bytes, member)
}
fn values(config: &str, section: &str, key: &str) -> Vec<String> {
    let clean = |s: &str| {
        s.chars()
            .filter(|c| !c.is_whitespace())
            .collect::<String>()
            .to_ascii_lowercase()
    };
    let mut active = false;
    let mut result = Vec::new();
    for line in config.lines() {
        let line = line.split('#').next().unwrap().trim();
        if line.starts_with('[') {
            active = clean(line.trim_matches(['[', ']'])).contains(&clean(section));
        } else if active
            && let Some((k, v)) = line.split_once('=')
            && k.trim() == key
        {
            result.push(v.trim().trim_matches('"').to_string());
        }
    }
    result
}
pub fn load(track: &Path) -> Result<Data> {
    let root = track
        .parent()
        .and_then(Path::parent)
        .ok_or("Missing DATA root")?;
    let bytes = read(track)?;
    let name = archive::index(&bytes)?
        .into_iter()
        .find(|m| m.path.ends_with(".wdx"))
        .ok_or("Missing track name")?
        .path
        .to_uppercase();
    let map =
        String::from_utf8(read(root.join("CONFIG/MUSICMAP.INF"))?).map_err(|e| e.to_string())?;
    let section = map
        .lines()
        .map(str::trim)
        .filter(|l| l.starts_with('['))
        .map(|l| l.trim_matches(['[', ']']))
        .find(|s| name.contains(*s))
        .ok_or("Missing track music mapping")?;
    let song_name = values(&map, section, "SONG")
        .into_iter()
        .next()
        .ok_or("Missing track song")?;
    let config =
        String::from_utf8(read(root.join("CONFIG/MUSIC.INF"))?).map_err(|e| e.to_string())?;
    let file = values(&config, &song_name, "PATHDATA")
        .into_iter()
        .next()
        .ok_or_else(|| format!("Missing music definition for {song_name}"))?
        .to_ascii_lowercase();
    let stem = file.trim_end_matches(".mpf");
    let manifest: serde_json::Value =
        serde_json::from_slice(&read("assets/audio/manifest.json").map_err(
            |_| "Run python scripts/prepare_audio.py to prepare the original audio cache",
        )?)
        .map_err(|e| e.to_string())?;
    let graph = Graph::decode(&find(
        &read(root.join("AUDIO/MUSIC.BIG"))?,
        &format!("/{file}"),
    )?)?;
    let paths = manifest["music"][stem]
        .as_array()
        .ok_or("Song is missing from audio cache")?;
    let clips = paths
        .iter()
        .map(|p| music::pcm_wave(&read(p.as_str().ok_or("Invalid music cache path")?)?))
        .collect::<Result<Vec<_>>>()?;
    if clips.len() != graph.nodes.len()
        || clips
            .iter()
            .any(|c| c.channels != clips[0].channels || c.rate != clips[0].rate)
    {
        return Err("Music segments have incompatible formats".into());
    }
    let mut speech = BTreeMap::new();
    for (name, paths) in manifest["speech"]
        .as_object()
        .ok_or("Missing speech cache")?
    {
        speech.insert(
            name.clone(),
            paths
                .as_array()
                .ok_or("Invalid speech cache")?
                .iter()
                .map(|p| read(p.as_str().ok_or("Invalid speech path")?))
                .collect::<Result<Vec<_>>>()?,
        );
    }
    let contexts: BTreeMap<String, Vec<Vec<u8>>> =
        serde_json::from_value(manifest["speech_contexts"].clone())
            .map_err(|_| "Audio context cache is missing. Run python scripts/prepare_audio.py.")?;
    for (name, clips) in &speech {
        if contexts
            .get(name)
            .is_none_or(|tags| tags.len() != clips.len())
        {
            return Err(format!("Speech contexts do not match {name}"));
        }
    }
    let main = audio_bank::decode(&find(&read(root.join("AUDIO/AUDIO.BIG"))?, "/zbxsfx.bnk")?)?;
    let programs = sound_vm::parse_config(
        &String::from_utf8(read(root.join("CONFIG/SNOW.INF"))?).map_err(|e| e.to_string())?,
    )?;
    println!(
        "Loaded original soundtrack {song_name}, {} segments, {} announcer categories",
        clips.len(),
        speech.len()
    );
    Ok(Data {
        main,
        programs,
        song: Song { graph, clips },
        speech,
        song_name,
        contexts,
    })
}
pub fn setup(
    mut commands: Commands,
    mut world: ResMut<super::PlayWorld>,
    mut assets: ResMut<Assets<AudioSource>>,
    mut music_assets: ResMut<Assets<MusicSource>>,
) {
    let data = world.media_data.take().unwrap();
    let mut loops = Vec::new();
    let main = data
        .main
        .into_iter()
        .map(|clip| {
            clip.map(|mut c| {
                let full = assets.add(AudioSource {
                    bytes: c.wav().into(),
                });
                if let Some((a, b)) = c.loop_samples {
                    c.samples = c.samples
                        [a as usize * c.channels as usize..b as usize * c.channels as usize]
                        .to_vec();
                }
                loops.push(Some(assets.add(AudioSource {
                    bytes: c.wav().into(),
                })));
                full
            })
            .or_else(|| {
                loops.push(None);
                None
            })
        })
        .collect();
    let speech = data
        .speech
        .into_iter()
        .map(|(k, clips)| {
            (
                k,
                clips
                    .into_iter()
                    .map(|bytes| {
                        assets.add(AudioSource {
                            bytes: bytes.into(),
                        })
                    })
                    .collect(),
            )
        })
        .collect();
    let music = music_assets.add(MusicSource {
        song: Arc::new(data.song),
    });
    commands.insert_resource(Media {
        main,
        loops,
        programs: data.programs,
        music,
        speech,
        reset: 0,
        last_phase: Phase::Ready,
        last_grounded: true,
        contexts: data.contexts,
        last_voice: BTreeMap::new(),
        cooldown: 0.,
        pending: Default::default(),
        last_air: 0.,
        last_charge: 0.,
        last_rank: 0,
        last_recovering: false,
        holeshot_checked: false,
        pickup_serial: 0,
    });
}
fn category(surface: u32) -> usize {
    match surface {
        0 | 3 => 1,
        2 => 2,
        5 | 6 => 3,
        9..=11 => 7,
        12 => 5,
        13 => 4,
        14 => 8,
        _ => 0,
    }
}
pub fn tick(
    mut commands: Commands,
    world: Res<super::PlayWorld>,
    menu: Res<super::interface::Menu>,
    mut media: ResMut<Media>,
    mut voices: Query<
        (
            Entity,
            Option<&mut AudioSink>,
            &mut PlaybackSettings,
            Option<&MusicVoice>,
            Option<&Announcer>,
            Option<&BoardLoop>,
        ),
        Or<(With<MusicVoice>, With<Announcer>, With<BoardLoop>)>,
    >,
) {
    let reset = media.reset != world.session.resets;
    let ready = world.session.phase == Phase::Ready;
    if reset || ready {
        for (e, ..) in &mut voices {
            commands.entity(e).despawn();
        }
        media.reset = world.session.resets;
        media.last_phase = Phase::Ready;
        media.last_grounded = true;
        media.last_voice.clear();
        media.last_air = 0.;
        media.last_charge = 0.;
        media.last_rank = 0;
        media.last_recovering = false;
        media.holeshot_checked = false;
        media.pickup_serial = world.session.power.pickup_serial;
        media.cooldown = 0.;
        media.pending.clear();
        return;
    }
    let running = world.session.phase == Phase::Running;
    if running {
        media.cooldown = (media.cooldown - 1. / 60.).max(0.);
        media.pending.tick(1. / 60.);
        if media.pickup_serial != world.session.power.pickup_serial {
            media.pickup_serial = world.session.power.pickup_serial;
            let (kind, value) = world.session.power.last_pickup;
            if kind == 13 {
                let id = ssx_rust::announcer::multiplier_sample(value);
                if let Some(Some(clip)) = media.main.get(id) {
                    commands.spawn((
                        super::audio::GameVoice { position: None },
                        AudioPlayer::new(clip.clone()),
                        PlaybackSettings::DESPAWN
                            .with_volume(Volume::Linear(menu.audio_gain(menu.settings.effects))),
                    ));
                }
            }
            if kind == 17 {
                media
                    .pending
                    .push(ssx_rust::announcer::Cue::new("boost_icon", vec![0]));
            }
        }
    }
    let cat = category(world.session.surface);
    let mut has_music = false;
    let mut has_announcer = false;
    let mut has_loops = [false; 2];
    // +0xe4 and +0x290 are not yet connected to the recovered rider state.
    // Speed and lateral speed are explicit host inputs to the original sound VM.
    let dig = world.session.velocity.dot(world.session.forward).abs() as i32;
    let slip = world
        .session
        .velocity
        .dot(world.session.normal.cross(world.session.forward))
        .abs() as i32;
    let lean = (world.controls.steer * 127.).abs() as i32;
    let board = (slip >> 2) + dig * 2;
    for (entity, sink, mut settings, music, announcer, board_loop) in &mut voices {
        has_music |= music.is_some();
        has_announcer |= announcer.is_some();
        settings.paused = !running;
        if let Some(mut sink) = sink {
            if running {
                sink.play();
            } else {
                sink.pause();
            }
            if music.is_some() {
                sink.set_volume(Volume::Linear(menu.audio_gain(menu.settings.music)));
            }
            if announcer.is_some() {
                sink.set_volume(Volume::Linear(menu.audio_gain(menu.settings.speech)));
            }
            if let Some(looping) = board_loop {
                if looping.surface != cat {
                    commands.entity(entity).despawn();
                    continue;
                }
                has_loops[if looping.mode == "GLIDE" { 0 } else { 1 }] = true;
                let key = (
                    sound_surface(world.session.surface).to_string(),
                    looping.mode.to_string(),
                );
                let mut state = sound_vm::State {
                    bend: 64,
                    ..Default::default()
                };
                if let Some(program) = media.programs.get(&key) {
                    if let Err(error) =
                        program.evaluate([slip, dig, lean, board, board + slip], &mut state)
                    {
                        eprintln!("Board sound: {error}");
                    }
                }
                sink.set_volume(Volume::Linear(if world.session.grounded {
                    state.volume.clamp(0, 127) as f32 / 127.
                        * 0.45
                        * menu.audio_gain(menu.settings.effects)
                        / 0.7
                } else {
                    0.
                }));
                sink.set_speed(2f32.powf((state.bend.clamp(0, 127) as f32 - 64.) / 128.));
            }
        } else if let Some(looping) = board_loop {
            if looping.surface == cat {
                has_loops[if looping.mode == "GLIDE" { 0 } else { 1 }] = true;
            } else {
                commands.entity(entity).despawn();
            }
        }
    }
    if !has_music && running {
        commands.spawn((
            MusicVoice,
            AudioPlayer(media.music.clone()),
            PlaybackSettings::ONCE
                .with_volume(Volume::Linear(menu.audio_gain(menu.settings.music))),
        ));
    }
    for (i, mode, slot) in [(0, "GLIDE", 4), (1, "CARVE", 3)] {
        if !has_loops[i]
            && running
            && let Some(Some(clip)) = media.loops.get(cat * 8 + slot)
        {
            commands.spawn((
                BoardLoop { surface: cat, mode },
                AudioPlayer::new(clip.clone()),
                PlaybackSettings::LOOP.with_volume(Volume::Linear(0.)),
            ));
        }
    }
    if media.last_phase == Phase::Ready && running {
        media.pending.push(ssx_rust::announcer::start());
    }
    if running {
        if world.session.grounded && !media.last_grounded {
            if let Some(Some(clip)) = media.main.get(cat * 8 + 2) {
                commands.spawn((
                    super::audio::GameVoice { position: None },
                    AudioPlayer::new(clip.clone()),
                    PlaybackSettings::DESPAWN
                        .with_volume(Volume::Linear(menu.audio_gain(menu.settings.effects))),
                ));
            }
        }
        if world.tricks.grind_started {
            media.pending.push(ssx_rust::announcer::Cue {
                category: "land",
                tags: vec![2, 1, 0, 0],
                ttl: 2.,
            });
        } else if let Some(landing) = &world.tricks.landing {
            // Do not describe a stagger as a clean landing or play an older success call.
            if world.session.recovery.is_some() && !landing.bailed {
                media.pending.clear();
            } else if !landing.bailed && world.tricks.combo {
                media.pending.push(ssx_rust::announcer::Cue::new(
                    if landing.award >= 5000 {
                        "big_combo_trick"
                    } else {
                        "combo_trick"
                    },
                    vec![],
                ));
            } else if let Some(cue) = ssx_rust::announcer::landing(landing) {
                media.pending.push(cue);
            }
        }
    }
    if running {
        use ssx_rust::announcer::Cue;
        let recovering = world.session.recovery.is_some();
        if recovering
            && !media.last_recovering
            && world
                .session
                .recovery
                .is_some_and(|r| r.quality == ssx_rust::landing::Quality::Bail)
        {
            media.pending.push(Cue::new("wipeout", vec![]));
        }
        if !recovering && world.tricks.airborne >= 2. && media.last_air < 2. {
            media.pending.push(Cue::new("big_air", vec![]));
        }
        if world.session.power.charge >= 0.99 && media.last_charge < 0.99 {
            media.pending.push(Cue::new("turbo", vec![0]));
        }
        let rank = world
            .opponents
            .iter()
            .filter(|o| o.session.progress > world.session.progress + 0.001)
            .count();
        if menu.event == ssx_rust::front_end::Event::Race {
            if !media.holeshot_checked && world.session.elapsed >= 3. {
                media.holeshot_checked = true;
                if rank == 0 {
                    media.pending.push(Cue::new("holeshot", vec![]));
                }
            } else if world.session.elapsed > 5.
                && rank < media.last_rank
                && world.session.returning.is_none()
            {
                media.pending.push(Cue::new("pass", vec![]));
            }
        }
        media.last_rank = rank;
        media.last_air = world.tricks.airborne;
        media.last_charge = world.session.power.charge;
        media.last_recovering = recovering;
        if world.session.grounded {
            media.pending.discard("big_air");
        }
        if world.session.power.charge < 0.99 {
            media.pending.discard("turbo");
        }
        if world.session.returning.is_some() {
            media.pending.clear();
        }
    }

    if running
        && !has_announcer
        && media.cooldown == 0.
        && let Some(cue) = media.pending.pop()
    {
        if let Some(tags) = media.contexts.get(cue.category)
            && let Some(index) =
                ssx_rust::announcer::select(tags, &cue, media.last_voice.get(cue.category).copied())
        {
            let clip = media.speech[cue.category][index].clone();
            media.last_voice.insert(cue.category.to_string(), index);
            media.cooldown = 1.;
            commands.spawn((
                Announcer,
                AudioPlayer::new(clip),
                PlaybackSettings::DESPAWN
                    .with_volume(Volume::Linear(menu.audio_gain(menu.settings.speech))),
            ));
        }
    }
    media.last_phase = world.session.phase;
    media.last_grounded = world.session.grounded;
}

#[cfg(test)]
mod tests {
    use super::*;
    #[test]
    fn music_decoder_crosses_segments_without_inserting_silence() {
        use ssx_rust::music::Edge;
        let song = Song {
            graph: Graph {
                start: 0,
                nodes: vec![
                    vec![Edge {
                        low: 0,
                        high: 100,
                        target: 1,
                    }],
                    vec![Edge {
                        low: 0,
                        high: 100,
                        target: 0,
                    }],
                ],
            },
            clips: vec![
                Clip {
                    channels: 1,
                    rate: 24000,
                    samples: vec![1000, 2000],
                    loop_samples: None,
                },
                Clip {
                    channels: 1,
                    rate: 24000,
                    samples: vec![3000],
                    loop_samples: None,
                },
            ],
        };
        let source = MusicSource {
            song: Arc::new(song),
        };
        let actual: Vec<_> = source
            .decoder()
            .take(8)
            .map(|s| (s * 32768.) as i16)
            .collect();
        assert_eq!(actual, vec![1000, 2000, 3000, 1000, 2000, 3000, 1000, 2000]);
    }
    #[test]
    #[ignore = "requires the original disc and prepared audio cache"]
    fn every_track_loads_music_speech_and_board_sounds() {
        for track in [
            "ALOHA", "ELYSIUM", "MEGAPLEX", "MERQUERY", "MESA", "PIPE", "SNOW", "UNTRACK", "WARMUP",
        ] {
            let data = load(&Path::new("extracted/DATA/MODELS").join(format!("{track}.BIG")))
                .unwrap_or_else(|e| panic!("{track}: {e}"));
            assert!(!data.song.clips.is_empty());
            assert!(data.speech.contains_key("go"));
            assert!(data.main[4].is_some());
            for clips in data.speech.values() {
                for wav in clips {
                    music::pcm_wave(wav).unwrap();
                }
            }
        }
    }
}

/// Original main bank. Cue scheduling is handled by the race feedback adapter.
pub(super) fn feedback_clip(media: &Media, slot: usize) -> Option<Handle<AudioSource>> {
    media.main.get(slot).and_then(Clone::clone)
}
