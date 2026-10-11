use crate::lighting::CourseMaterial;
#[path = "lettering.rs"]
mod lettering;
#[path = "race_hud.rs"]
mod race_hud;
// Original UI textures with native menu navigation and race HUD.
use super::{Phase, PlayWorld, rider};
use bevy::{
    asset::RenderAssetUsages,
    prelude::*,
    render::render_resource::{Extent3d, TextureDimension, TextureFormat},
};
use ssx_rust::front_end::{self, Event, Settings, TRACKS};
#[derive(Clone, Copy, PartialEq, Eq, Debug)]
pub enum Screen {
    Title,
    Main,
    Mode,
    Players,
    Rider,
    RiderSetup,
    Event,
    Course,
    Options,
    GameOptions,
    SoundOptions,
    VideoOptions,
    Controls,
    Pause,
    Results,
    Loading,
    Game,
}
#[derive(Resource)]
pub struct Menu {
    muted: bool,
    pub screen: Screen,
    pub cursor: usize,
    pub rider: usize,
    pub track: usize,
    pub event: Event,
    pub settings: Settings,
    pub block_input: bool,
    pub pending: bool,
    pub countdown: f32,
    dirty: bool,
    options_return: Screen,
    axis: i32,
    pub error: String,
    pub debug: bool,
    loading_shown: bool,
    smoke: bool,
    award_time: f32,
    last_score: u32,
    finish_time: f32,
}
impl Default for Menu {
    fn default() -> Self {
        Self {
            muted: std::env::args()
                .any(|a| a == "--mute" || a == "--perf-test" || a.contains("smoke-test")),
            screen: Screen::Title,
            cursor: 0,
            rider: 3,
            track: 0,
            event: Event::Race,
            settings: Settings::load(),
            block_input: false,
            pending: false,
            countdown: 0.,
            dirty: true,
            options_return: Screen::Main,
            axis: 0,
            error: String::new(),
            debug: false,
            loading_shown: false,
            smoke: std::env::args().any(|a| a == "--menu-smoke-test"),
            award_time: 0.,
            last_score: 0,
            finish_time: 0.,
        }
    }
}
impl Menu {
    pub fn audio_gain(&self, value: f32) -> f32 {
        if self.muted { 0. } else { value }
    }
    pub(crate) fn refresh(&mut self) {
        self.dirty = true;
    }
    pub(crate) fn automated(&self) -> bool {
        self.smoke || std::env::args().any(|a| a.contains("smoke-test") || a == "--perf-test")
    }

    pub fn open(&self) -> bool {
        self.screen != Screen::Game
    }
    fn page(&mut self, screen: Screen) {
        self.screen = screen;
        self.cursor = 0;
        self.dirty = true;
        self.block_input = true;
    }
    fn start(&mut self) {
        self.error.clear();
        self.pending = true;
        self.loading_shown = false;
        self.page(Screen::Loading);
    }
}
#[derive(Resource)]
struct Art {
    fe: Vec<Handle<Image>>,
    hud: Vec<Handle<Image>>,
    logo: Handle<Image>,
    logo_aspect: f32,
}
#[derive(Component)]
struct StartPrompt;
#[derive(Component)]
struct TitleStartButton;
#[derive(Component)]
struct MenuRoot;
#[derive(Component)]
struct HudRoot;
#[derive(Component, Clone, Copy)]
enum Field {
    Rank,
    Score,
    Time,
    Speed,
    Status,
    Debug,
}
#[derive(Component)]
struct Preview;
#[derive(Component)]
pub struct Choice(usize, Action);
#[derive(Clone, Copy)]
enum Action {
    Page(Screen),
    Rider(usize),
    Board,
    Outfit,
    Continue,
    Unavailable,
    Event(Event),
    Course(usize),
    Resume,
    Restart,
    Main,
    Quit,
    Music,
    Effects,
    Speech,
    Units,
    Map,
    DisplayMode,
    Resolution,
    Vsync,
    Taa,
    Bloom,
    Back,
}
const WHITE: Color = Color::srgb(0.90, 0.94, 1.);
const GOLD: Color = Color::srgb(1., 0.78, 0.13);
fn rows(m: &Menu) -> Vec<(String, Action)> {
    let simple = |s: &str, a| (s.to_string(), a);
    match m.screen {
        Screen::Title => vec![simple("PRESS START", Action::Page(Screen::Main))],
        Screen::Main => vec![
            simple("Play", Action::Page(Screen::Mode)),
            simple("Options", Action::Page(Screen::Options)),
            simple("Quit", Action::Quit),
        ],
        Screen::Mode => vec![
            simple("Single Event", Action::Page(Screen::Players)),
            simple("Freeride", Action::Event(Event::Freeride)),
            simple("Warmup", Action::Event(Event::Warmup)),
            simple("Back", Action::Back),
        ],
        Screen::Players => vec![
            simple("Single Player", Action::Page(Screen::Event)),
            simple("Multiplayer (Unavailable)", Action::Unavailable),
            simple("Back", Action::Back),
        ],
        Screen::RiderSetup => {
            let rider = &ssx_rust::equipment::catalog()[m.rider];
            vec![
                simple("Continue", Action::Continue),
                simple(
                    &format!("Board: {}", rider.boards[m.settings.boards[m.rider]].name),
                    Action::Board,
                ),
                simple(
                    &format!("Clothing: {}", rider.outfits[m.settings.outfits[m.rider]]),
                    Action::Outfit,
                ),
                simple("Back", Action::Back),
            ]
        }
        Screen::Rider => rider::NAMES
            .iter()
            .enumerate()
            .map(|(i, n)| (n.to_uppercase(), Action::Rider(i)))
            .collect(),
        Screen::Event => [Event::Race, Event::Showoff]
            .into_iter()
            .map(|e| (e.name().into(), Action::Event(e)))
            .collect(),
        Screen::Course => TRACKS
            .iter()
            .enumerate()
            .map(|(i, (_, n, _))| (n.to_string(), Action::Course(i)))
            .collect(),
        Screen::Options => vec![
            simple("Game", Action::Page(Screen::GameOptions)),
            simple("Sound", Action::Page(Screen::SoundOptions)),
            simple("Video", Action::Page(Screen::VideoOptions)),
            simple("Controls", Action::Page(Screen::Controls)),
            simple("Back", Action::Back),
        ],
        Screen::GameOptions => vec![
            simple(
                if m.settings.mph {
                    "Speed Units     MPH"
                } else {
                    "Speed Units     KM/H"
                },
                Action::Units,
            ),
            simple("Back", Action::Back),
        ],
        Screen::SoundOptions => vec![
            simple(
                &format!("Music     {:.0}%", m.settings.music * 100.),
                Action::Music,
            ),
            simple(
                &format!("Sound Effects     {:.0}%", m.settings.effects * 100.),
                Action::Effects,
            ),
            simple(
                &format!("Announcer     {:.0}%", m.settings.speech * 100.),
                Action::Speech,
            ),
            simple("Back", Action::Back),
        ],
        Screen::VideoOptions => vec![
            simple(
                &format!("Display Mode     {}", m.settings.video.mode.name()),
                Action::DisplayMode,
            ),
            simple(
                &if m.settings.video.mode == front_end::DisplayMode::Borderless {
                    "Resolution     Desktop native".into()
                } else {
                    format!(
                        "Resolution     {} x {}",
                        m.settings.video.resolution[0], m.settings.video.resolution[1]
                    )
                },
                Action::Resolution,
            ),
            simple(
                &format!(
                    "VSync     {}",
                    if m.settings.video.vsync { "On" } else { "Off" }
                ),
                Action::Vsync,
            ),
            simple(
                &format!(
                    "TAA     {}",
                    if m.settings.video.taa { "On" } else { "Off" }
                ),
                Action::Taa,
            ),
            (
                format!(
                    "Bloom: {}",
                    if m.settings.video.bloom { "On" } else { "Off" }
                ),
                Action::Bloom,
            ),
            simple("Back", Action::Back),
        ],
        Screen::Controls => vec![
            simple(
                &format!("Controller Layout     {}", m.settings.input_map + 1),
                Action::Map,
            ),
            simple("Back", Action::Back),
        ],
        Screen::Pause => vec![
            simple("Resume", Action::Resume),
            simple("Restart Event", Action::Restart),
            simple("Options", Action::Page(Screen::Options)),
            simple("Main Menu", Action::Main),
        ],
        Screen::Results => vec![
            simple("Restart", Action::Restart),
            simple("Replay (Unavailable)", Action::Unavailable),
            simple("Records (Unavailable)", Action::Unavailable),
            simple("Quit", Action::Main),
        ],
        _ => vec![],
    }
}
fn rank(world: &PlayWorld) -> usize {
    1 + world
        .opponents
        .iter()
        .filter(|o| {
            if o.session.progress >= 0.999 && world.session.progress >= 0.999 {
                o.session.elapsed < world.session.elapsed
            } else {
                o.session.progress > world.session.progress
            }
        })
        .count()
}
pub fn plugin(app: &mut App) {
    race_hud::plugin(app);
    app.init_resource::<Menu>()
        .add_systems(Startup, (lettering::setup, setup))
        .add_systems(
            PreUpdate,
            smoke.before(input).after(bevy::input::InputSystems),
        )
        .add_systems(PreUpdate, input.after(bevy::ui::UiSystems::Focus))
        .add_systems(
            PreUpdate,
            video_smoke.before(input).after(bevy::input::InputSystems),
        )
        .add_systems(
            Update,
            (
                load_course,
                super::menu_audio::tick,
                super::audio::setup.run_if(|w: Res<PlayWorld>| !w.sound_clips.is_empty()),
                super::media::setup.run_if(|w: Res<PlayWorld>| w.media_data.is_some()),
                draw,
                animate_title,
                hud,
                lettering::render,
                race_hud::render,
            )
                .chain(),
        )
        .add_systems(FixedUpdate, countdown.before(super::simulate));
}
// Rendered regression. Injects the same keyboard input used by a player, after
// Bevy's input collection. Test option changes never write the user's save file.
fn smoke(
    mut state: Local<(usize, u32)>,
    menu: Res<Menu>,
    mut world: ResMut<PlayWorld>,
    track: Res<super::super::Track>,
    mut keys: ResMut<ButtonInput<KeyCode>>,
    mut commands: Commands,
    mut exit: MessageWriter<AppExit>,
    menu_voices: Query<Option<&AudioSink>, With<super::media::MenuMusicVoice>>,
    frontend: Res<super::menu_audio::Voices>,
    speech: Query<&AudioSink, With<super::menu_audio::MenuVoice>>,
) {
    if !menu.smoke {
        return;
    }
    use KeyCode::*;
    let steps = [
        (Screen::Title, Some(Enter), "title"),
        (Screen::Main, Some(Enter), "main"),
        (Screen::Mode, Some(Enter), "modes"),
        (Screen::Players, Some(ArrowDown), "players"),
        (Screen::Players, Some(ArrowUp), "players-skip"),
        (Screen::Players, Some(Enter), ""),
        (Screen::Event, Some(Enter), "events"),
        (Screen::Rider, Some(ArrowRight), "riders"),
        (Screen::Rider, Some(Enter), ""),
        (Screen::RiderSetup, None, "selected-voice"),
        (Screen::RiderSetup, Some(ArrowDown), "setup"),
        (Screen::RiderSetup, Some(ArrowRight), ""),
        (Screen::RiderSetup, Some(ArrowDown), ""),
        (Screen::RiderSetup, Some(ArrowRight), ""),
        (Screen::RiderSetup, Some(ArrowUp), ""),
        (Screen::RiderSetup, Some(ArrowUp), ""),
        (Screen::RiderSetup, Some(Enter), "loadout"),
        (Screen::Course, Some(ArrowDown), ""),
        (Screen::Course, Some(ArrowDown), ""),
        (Screen::Course, Some(ArrowDown), ""),
        (Screen::Course, Some(Enter), "venues"),
        (Screen::Game, Some(Escape), "hud"),
        (Screen::Pause, Some(ArrowDown), "pause"),
        (Screen::Pause, Some(ArrowDown), ""),
        (Screen::Pause, Some(Enter), ""),
        (Screen::Options, Some(Enter), "options"),
        (Screen::GameOptions, Some(Escape), "game-options"),
        (Screen::Options, Some(ArrowDown), ""),
        (Screen::Options, Some(Enter), ""),
        (Screen::SoundOptions, Some(ArrowRight), "sound"),
        (Screen::SoundOptions, Some(Escape), ""),
        (Screen::Options, Some(Escape), "sound-return"),
        (Screen::Pause, Some(Escape), ""),
        (Screen::Game, None, ""),
        (Screen::Results, Some(Enter), "results"),
        (Screen::Game, Some(Escape), "restarted"),
        (Screen::Pause, Some(ArrowUp), ""),
        (Screen::Pause, Some(Enter), ""),
        (Screen::Main, Some(Enter), ""),
        (Screen::Mode, Some(Enter), ""),
        (Screen::Players, Some(Enter), ""),
        (Screen::Event, Some(ArrowDown), ""),
        (Screen::Event, Some(Enter), ""),
        (Screen::Rider, Some(Enter), ""),
        (Screen::RiderSetup, Some(Enter), ""),
        (Screen::Course, Some(Enter), ""),
        (Screen::Game, Some(Escape), "solo-hud"),
        (Screen::Pause, Some(ArrowDown), ""),
        (Screen::Pause, Some(ArrowDown), ""),
        (Screen::Pause, Some(Enter), ""),
        (Screen::Options, Some(ArrowDown), ""),
        (Screen::Options, Some(ArrowDown), ""),
        (Screen::Options, Some(ArrowDown), ""),
        (Screen::Options, Some(Enter), ""),
        (Screen::Controls, Some(ArrowRight), ""),
        (Screen::Controls, Some(Escape), "controls"),
        (Screen::Options, Some(Escape), ""),
        (Screen::Pause, None, ""),
    ];
    if state.0 >= steps.len() {
        return;
    }
    state.1 += 1;
    let (screen, key, capture) = steps[state.0];
    // Course decoding is synchronous; allow the countdown and audio to start.
    if screen == Screen::Game && (menu.screen == Screen::Loading || menu.countdown > 0.) {
        if menu.countdown > 0. {
            assert_eq!(world.session.phase, Phase::Ready);
        }
        if menu.countdown > 1. {
            keys.press(Enter);
        } else {
            keys.release(Enter);
        }
        state.1 = 0;
        return;
    }
    if screen == Screen::Results
        && menu.screen == Screen::Game
        && world.session.phase == Phase::Finished
    {
        state.1 = 0;
        return;
    }
    if state.1 == 25 {
        if matches!(
            screen,
            Screen::Title
                | Screen::Main
                | Screen::Mode
                | Screen::Players
                | Screen::Rider
                | Screen::RiderSetup
                | Screen::Event
                | Screen::Course
        ) {
            let sink = menu_voices
                .single()
                .expect("Exactly one menu music player")
                .expect("Menu track must decode and play");
            assert_eq!(
                sink.volume().to_linear(),
                0.,
                "Automated tests must stay muted"
            );
        } else if matches!(screen, Screen::Game | Screen::Pause | Screen::Results) {
            assert!(
                menu_voices.is_empty(),
                "Menu music must stop outside the frontend"
            );
        }
        assert_eq!(
            menu.screen, screen,
            "menu smoke step {}: {}",
            state.0, menu.error
        );
        if !capture.is_empty() {
            commands
                .spawn(bevy::render::view::screenshot::Screenshot::primary_window())
                .observe(bevy::render::view::screenshot::save_to_disk(format!(
                    "analysis/menu-{capture}.png"
                )));
        }
        if capture == "title" {
            assert_eq!(
                speech
                    .single()
                    .expect("Startup voice must decode")
                    .volume()
                    .to_linear(),
                0.
            );
        }
        if capture == "players-skip" {
            assert_eq!(menu.cursor, 2, "Multiplayer must not be selectable");
        }
        if capture == "loadout" {
            assert_eq!(menu.settings.boards[1], 1);
            assert_eq!(menu.settings.outfits[1], 1);
        }
        if capture == "hud" {
            assert_eq!(track.name, "MERQUERY");
            assert_eq!(world.rider, 1);
            assert!(world.session.elapsed > 0.);
            let rider = &ssx_rust::equipment::catalog()[1];
            assert_eq!(world.session.board_style, rider.boards[1].style as i32);
            assert_eq!(
                world.session.rider_stats.stat_0e,
                rider.physics_stats(1).stat_0e
            );
        }
        if capture == "sound-return" {
            assert!((menu.settings.music - 0.40).abs() < 0.001);
            assert_eq!(world.session.phase, Phase::Paused);
        }
        if capture == "restarted" {
            assert_eq!(world.tricks.total, 0);
            assert_eq!(world.session.power.charge, 0.);
        }
        if capture == "results" {
            assert_eq!(rank(&world), 2);
        }
        if capture == "solo-hud" {
            assert_eq!(track.name, "SNOW");
            assert_eq!(menu.event, Event::Showoff);
            assert!(world.opponents.iter().all(|o| o.session.elapsed == 0.));
        }
        if capture == "controls" {
            assert_eq!(menu.settings.input_map, 1);
            assert_eq!(rows(&menu).len(), 2);
        }
        if capture == "game-options" {
            assert_eq!(
                rows(&menu).len(),
                2,
                "Game options must contain only speed units and Back"
            );
        }
    }
    if state.1 == 30 {
        if let Some(key) = key {
            keys.press(key);
        } else if screen == Screen::RiderSetup {
            // Keep the selection visible until the queued character reply starts.
        } else if screen == Screen::Game {
            world.session.progress = 1.;
            world.session.elapsed = 10.;
            for o in &mut world.opponents {
                o.session.progress = 0.5;
            }
            world.opponents[0].session.progress = 1.;
            world.opponents[0].session.elapsed = 8.;
            world.opponents[0].session.phase = Phase::Finished;
            world.session.phase = Phase::Finished;
        } else {
            for cue in ["Narrator(15)", "Narrator(16)", "Narrator(41)"] {
                assert!(
                    frontend.played.iter().any(|p| p == cue),
                    "Missing menu cue {cue}"
                );
            }
            std::fs::write("analysis/menu-smoke.json",serde_json::to_vec_pretty(&serde_json::json!({"passed":true,"steps":steps.len(),"course_switches":2,"restart":true,"pause_options_resume":true,"solo_opponents_frozen":true,"multiplayer_disabled":true,"equipment_selection":true,"frontend_voices":frontend.played})).unwrap()).unwrap();
            exit.write(AppExit::Success);
        }
    }
    if state.1 == 31 {
        if let Some(key) = key {
            keys.release(key);
        }
    }
    if state.1 >= 40 {
        if screen == Screen::RiderSetup
            && key.is_none()
            && !frontend.played.iter().any(|p| p == "Character(16)")
        {
            assert!(state.1 < 900, "Selected character voice did not start");
            return;
        }
        state.0 += 1;
        state.1 = 0;
    }
}
fn image_assets(path: &str, images: &mut Assets<Image>) -> Vec<Handle<Image>> {
    ssx_rust::texture::decode(&std::fs::read(path).expect("Read original UI package"))
        .expect("Decode original UI package")
        .into_iter()
        .map(|t| {
            images.add(Image::new(
                Extent3d {
                    width: t.width,
                    height: t.height,
                    depth_or_array_layers: 1,
                },
                TextureDimension::D2,
                t.rgba,
                TextureFormat::Rgba8UnormSrgb,
                RenderAssetUsages::RENDER_WORLD,
            ))
        })
        .collect()
}

fn video_smoke(
    mut state: Local<(usize, u32)>,
    menu: Res<Menu>,
    graphics: Res<crate::graphics::Graphics>,
    window: Single<&Window>,
    cameras: Query<
        (
            Option<&bevy::anti_alias::taa::TemporalAntiAliasing>,
            &Msaa,
            Option<&bevy::post_process::bloom::Bloom>,
        ),
        With<super::PlayerCamera>,
    >,
    mut keys: ResMut<ButtonInput<KeyCode>>,
    mut commands: Commands,
    mut exit: MessageWriter<AppExit>,
) {
    if !std::env::args().any(|a| a == "--video-smoke-test") {
        return;
    }
    use KeyCode::*;
    let steps = [
        (Screen::Title, Some(Enter)),
        (Screen::Main, Some(ArrowDown)),
        (Screen::Main, Some(Enter)),
        (Screen::Options, Some(Enter)),
        (Screen::GameOptions, Some(Escape)),
        (Screen::Options, Some(ArrowDown)),
        (Screen::Options, Some(Enter)),
        (Screen::SoundOptions, Some(Escape)),
        (Screen::Options, Some(ArrowDown)),
        (Screen::Options, Some(ArrowDown)),
        (Screen::Options, Some(Enter)),
        (Screen::VideoOptions, Some(Enter)),
        (Screen::VideoOptions, Some(Enter)),
        (Screen::VideoOptions, Some(Enter)),
        (Screen::VideoOptions, Some(ArrowDown)),
        (Screen::VideoOptions, Some(ArrowRight)),
        (Screen::VideoOptions, Some(ArrowDown)),
        (Screen::VideoOptions, Some(Enter)),
        (Screen::VideoOptions, Some(ArrowDown)),
        (Screen::VideoOptions, Some(Enter)),
        (Screen::VideoOptions, Some(Enter)),
        (Screen::VideoOptions, Some(ArrowDown)),
        (Screen::VideoOptions, Some(Enter)),
        (Screen::VideoOptions, Some(Enter)),
        (Screen::VideoOptions, Some(Escape)),
        (Screen::Options, Some(ArrowDown)),
        (Screen::Options, Some(ArrowDown)),
        (Screen::Options, Some(ArrowDown)),
        (Screen::Options, Some(Enter)),
        (Screen::Controls, Some(Escape)),
        (Screen::Options, Some(Escape)),
        (Screen::Main, None),
    ];
    if state.0 >= steps.len() {
        return;
    }
    state.1 += 1;
    let (screen, key) = steps[state.0];
    if state.1 == 50 {
        assert_eq!(menu.screen, screen, "Video smoke step {}", state.0);
        assert_eq!(graphics.applied, Some(menu.settings.video));
        match state.0 {
            12 => assert!(matches!(
                window.mode,
                bevy::window::WindowMode::BorderlessFullscreen(_)
            )),
            13 => assert!(matches!(
                window.mode,
                bevy::window::WindowMode::Fullscreen(_, _)
            )),
            14 => assert_eq!(window.mode, bevy::window::WindowMode::Windowed),
            16 => assert_eq!(
                [window.physical_width(), window.physical_height()],
                menu.settings.video.resolution
            ),
            18 => assert_eq!(window.present_mode, bevy::window::PresentMode::AutoNoVsync),
            20 => {
                let (taa, msaa, _) = cameras.single().unwrap();
                assert!(taa.is_none());
                assert_eq!(*msaa, Msaa::Sample4);
            }
            21 => {
                let (taa, msaa, _) = cameras.single().unwrap();
                assert!(taa.is_some());
                assert_eq!(*msaa, Msaa::Off);
            }
            23 => assert!(cameras.single().unwrap().2.is_some()),
            24 => assert!(cameras.single().unwrap().2.is_none()),
            _ => {}
        }
        if [3, 4, 7, 21, 23, 29].contains(&state.0) {
            commands
                .spawn(bevy::render::view::screenshot::Screenshot::primary_window())
                .observe(bevy::render::view::screenshot::save_to_disk(format!(
                    "analysis/video-menu-{}.png",
                    state.0
                )));
        }
    }
    if state.1 == 55 {
        if let Some(k) = key {
            keys.press(k);
        } else {
            std::fs::write("analysis/video-smoke.json", serde_json::to_vec_pretty(&serde_json::json!({"passed":true,"steps":steps.len(),"gpu":graphics.gpu,"video":menu.settings.video,"resolution":[window.physical_width(),window.physical_height()]})).unwrap()).unwrap();
            exit.write(AppExit::Success);
        }
    }
    if state.1 == 56 {
        if let Some(k) = key {
            keys.release(k);
        }
    }
    if state.1 >= 70 {
        state.0 += 1;
        state.1 = 0;
    }
}
fn label(text: impl Into<String>, size: f32) -> lettering::Label {
    lettering::Label(text.into(), size)
}

fn setup(
    mut commands: Commands,
    mut menu: ResMut<Menu>,
    mut world: ResMut<PlayWorld>,
    track: Res<super::super::Track>,
    mut images: ResMut<Assets<Image>>,
) {
    menu.track = TRACKS.iter().position(|t| t.0 == track.name).unwrap_or(0);
    if world.smoke {
        menu.screen = Screen::Game;
    }
    if std::env::args().any(|a| a == "--recovery-smoke-test") {
        menu.event = front_end::Event::Showoff;
    }
    if world.smoke || menu.automated() {
        menu.settings = Settings::default();
    }
    if menu.automated() {
        if let Some(size) =
            std::env::args().find_map(|a| a.strip_prefix("--test-resolution=").map(str::to_owned))
        {
            let (w, h) = size
                .split_once('x')
                .expect("Test resolution uses WIDTHxHEIGHT");
            menu.settings.video.mode = front_end::DisplayMode::Windowed;
            menu.settings.video.resolution = [w.parse().unwrap(), h.parse().unwrap()];
        }
    }
    world.input_map = menu.settings.input_map;
    world.mode = menu.settings.camera;
    world.camera = ssx_rust::player_camera::ChaseCamera::new(world.cameras[world.mode].clone());
    world.snap = true;
    let title =
        image::load_from_memory(&std::fs::read("assets/ui/ssx-logo.png").expect("Read menu logo"))
            .expect("Decode startup image")
            .into_rgba8();
    let title_aspect = title.width() as f32 / title.height() as f32;
    let title = images.add(Image::new(
        Extent3d {
            width: title.width(),
            height: title.height(),
            depth_or_array_layers: 1,
        },
        TextureDimension::D2,
        title.into_raw(),
        TextureFormat::Rgba8UnormSrgb,
        RenderAssetUsages::RENDER_WORLD,
    ));
    let art = Art {
        fe: image_assets("extracted/DATA/FEART/TRACK/BXFE3D.SSH", &mut images),
        hud: image_assets("extracted/DATA/TEXTURES/HUD.SSH", &mut images),
        logo: title,
        logo_aspect: title_aspect,
    };
    let root = commands
        .spawn((
            HudRoot,
            Node {
                position_type: PositionType::Absolute,
                width: percent(100),
                height: percent(100),
                ..default()
            },
            GlobalZIndex(5),
        ))
        .id();
    for (field, left, top, right, bottom, size) in [
        (Field::Rank, Some(100.), Some(54.), None, None, 20.),
        (Field::Score, None, Some(24.), Some(32.), None, 32.),
        (Field::Time, Some(32.), None, None, Some(24.), 30.),
        (Field::Speed, None, None, Some(32.), Some(24.), 30.),
        (Field::Status, Some(28.), Some(104.), None, None, 22.),
        (Field::Debug, Some(24.), Some(170.), None, None, 17.),
    ] {
        let mut n = Node {
            position_type: PositionType::Absolute,
            ..default()
        };
        if let Some(x) = left {
            n.left = px(x)
        }
        if let Some(x) = right {
            n.right = px(x)
        }
        if let Some(x) = top {
            n.top = px(x)
        }
        if let Some(x) = bottom {
            n.bottom = px(x)
        }
        let child = commands
            .spawn((
                field,
                n,
                label("", size),
                lettering::InGameFont,
                lettering::Tint(WHITE),
            ))
            .id();
        commands.entity(root).add_child(child);
    }
    commands.insert_resource(art);
}
fn activate(
    action: Action,
    menu: &mut Menu,
    world: &mut PlayWorld,
    exit: &mut MessageWriter<AppExit>,
    direction: i32,
    resolutions: &[[u32; 2]],
) {
    match action {
        Action::Page(p) => {
            if p == Screen::Options {
                menu.options_return = menu.screen;
            }
            menu.page(p);
        }
        Action::Rider(i) => {
            menu.rider = i;
            world.rider = i;
            menu.page(Screen::RiderSetup);
        }
        Action::Continue => {
            if menu.event == Event::Warmup {
                menu.track = 8;
                menu.start();
            } else {
                menu.page(Screen::Course);
            }
        }
        Action::Event(e) => {
            menu.event = e;
            menu.page(Screen::Rider);
        }
        Action::Board | Action::Outfit => {
            if matches!(action, Action::Board) {
                menu.settings.boards[menu.rider] =
                    (menu.settings.boards[menu.rider] as i32 + direction).rem_euclid(11) as usize;
            } else {
                menu.settings.outfits[menu.rider] =
                    (menu.settings.outfits[menu.rider] as i32 + direction).rem_euclid(4) as usize;
            }
            menu.dirty = true;
        }
        Action::Unavailable => return,
        Action::Course(i) => {
            menu.track = i;
            menu.start();
        }
        Action::Resume => {
            world.session.phase = Phase::Running;
            menu.page(Screen::Game);
        }
        Action::Restart => menu.start(),
        Action::Main => {
            world.session.reset();
            world.snap = true;
            menu.countdown = 0.;
            menu.page(Screen::Main);
        }
        Action::Quit => {
            exit.write(AppExit::Success);
        }
        Action::Back => {
            if menu.screen == Screen::Results {
                world.session.reset();
                world.snap = true;
                menu.countdown = 0.;
            }
            let p = match menu.screen {
                Screen::Mode => Screen::Main,
                Screen::Players => Screen::Mode,
                Screen::Rider => {
                    if matches!(menu.event, Event::Race | Event::Showoff) {
                        Screen::Event
                    } else {
                        Screen::Mode
                    }
                }
                Screen::RiderSetup => Screen::Rider,
                Screen::Event => Screen::Players,
                Screen::Course => Screen::RiderSetup,
                Screen::Options => menu.options_return,
                Screen::GameOptions | Screen::SoundOptions | Screen::VideoOptions => {
                    Screen::Options
                }
                Screen::Controls => Screen::Options,
                Screen::Pause => Screen::Game,
                _ => Screen::Main,
            };
            if p == Screen::Game {
                world.session.phase = Phase::Running;
            }
            menu.page(p);
        }
        Action::Music | Action::Effects | Action::Speech => {
            let v = match action {
                Action::Music => &mut menu.settings.music,
                Action::Effects => &mut menu.settings.effects,
                _ => &mut menu.settings.speech,
            };
            *v = ((*v * 20.).round() + direction as f32).clamp(0., 20.) / 20.;
            menu.dirty = true;
        }
        Action::Units => {
            menu.settings.mph = !menu.settings.mph;
            menu.dirty = true;
        }
        Action::Map => {
            menu.settings.input_map =
                (menu.settings.input_map as i32 + direction).rem_euclid(8) as usize;
            world.input_map = menu.settings.input_map;
            menu.dirty = true;
        }
        Action::DisplayMode => {
            menu.settings.video.mode = menu.settings.video.mode.cycle(direction);
            menu.dirty = true;
        }
        Action::Resolution => {
            if menu.settings.video.mode != front_end::DisplayMode::Borderless
                && !resolutions.is_empty()
            {
                let i = resolutions
                    .iter()
                    .position(|r| *r == menu.settings.video.resolution)
                    .unwrap_or(0);
                menu.settings.video.resolution = resolutions
                    [(i as i32 + direction).rem_euclid(resolutions.len() as i32) as usize];
                menu.dirty = true;
            }
        }
        Action::Vsync => {
            menu.settings.video.vsync = !menu.settings.video.vsync;
            menu.dirty = true;
        }
        Action::Bloom => {
            menu.settings.video.bloom = !menu.settings.video.bloom;
            menu.dirty = true;
        }
        Action::Taa => {
            menu.settings.video.taa = !menu.settings.video.taa;
            menu.dirty = true;
        }
    }
    if !menu.automated()
        && matches!(
            action,
            Action::Music
                | Action::Effects
                | Action::Speech
                | Action::Units
                | Action::Map
                | Action::Board
                | Action::Outfit
                | Action::DisplayMode
                | Action::Resolution
                | Action::Vsync
                | Action::Taa
                | Action::Bloom
        )
    {
        if let Err(e) = menu.settings.save() {
            menu.error = format!("Cannot save options: {e}");
        }
    }
}
pub fn input(
    mut menu: ResMut<Menu>,
    mut world: ResMut<PlayWorld>,
    keys: Res<ButtonInput<KeyCode>>,
    pads: Query<&Gamepad>,
    graphics: Res<crate::graphics::Graphics>,
    buttons: Query<(&Interaction, &Choice)>,
    mouse: Res<ButtonInput<MouseButton>>,
    windows: Query<&Window>,
    mut previous_pointer: Local<Option<Vec2>>,
    mut exit: MessageWriter<AppExit>,
) {
    menu.block_input = false;
    let pointer = windows.iter().next().and_then(Window::cursor_position);
    let pointer_moved = pointer != *previous_pointer;
    *previous_pointer = pointer;
    if world.smoke {
        return;
    }
    if keys.just_pressed(KeyCode::F1) {
        menu.debug = !menu.debug;
    }
    let pad = pads.iter().next();
    let pressed = |b| pad.is_some_and(|p| p.just_pressed(b));
    let pause = keys.just_pressed(KeyCode::Escape)
        || keys.just_pressed(KeyCode::Enter)
        || pressed(GamepadButton::Start);
    if !menu.open() {
        if pause
            && menu.countdown <= 0.
            && matches!(world.session.phase, Phase::Ready | Phase::Running)
        {
            world.session.phase = Phase::Paused;
            menu.page(Screen::Pause);
        }
        return;
    }
    if menu.screen == Screen::Loading {
        return;
    }
    let options = rows(&menu);
    if options.is_empty() {
        return;
    }
    let axis = pad.map_or(0., |p| {
        let stick = p.left_stick();
        if menu.screen == Screen::Rider && stick.x.abs() > stick.y.abs() {
            -stick.x
        } else {
            stick.y
        }
    });
    let axis = if axis > 0.55 {
        1
    } else if axis < -0.55 {
        -1
    } else {
        0
    };
    let edge = axis != 0 && axis != menu.axis;
    menu.axis = axis;
    let up = keys.just_pressed(KeyCode::ArrowUp)
        || keys.just_pressed(KeyCode::KeyW)
        || pressed(GamepadButton::DPadUp)
        || (edge && axis == 1)
        || (menu.screen == Screen::Rider
            && (keys.just_pressed(KeyCode::ArrowLeft) || pressed(GamepadButton::DPadLeft)));
    let down = keys.just_pressed(KeyCode::ArrowDown)
        || keys.just_pressed(KeyCode::KeyS)
        || pressed(GamepadButton::DPadDown)
        || (edge && axis == -1)
        || (menu.screen == Screen::Rider
            && (keys.just_pressed(KeyCode::ArrowRight) || pressed(GamepadButton::DPadRight)));
    if up || down {
        menu.cursor = (menu.cursor as i32 + if down { 1 } else { -1 })
            .rem_euclid(options.len() as i32) as usize;
        if matches!(options[menu.cursor].1, Action::Unavailable) {
            menu.cursor = (menu.cursor as i32 + if down { 1 } else { -1 })
                .rem_euclid(options.len() as i32) as usize;
        }
        if menu.screen == Screen::Rider {
            menu.dirty = true;
        }
    }
    let mut action = None;
    let mouse_enabled = !menu.automated();
    for (interaction, choice) in buttons.iter().filter(|_| mouse_enabled) {
        if matches!(choice.1, Action::Unavailable) {
            continue;
        }
        if *interaction == Interaction::Pressed && mouse.just_pressed(MouseButton::Left) {
            action = Some(choice.1);
            menu.cursor = choice.0;
        } else if *interaction == Interaction::Hovered && pointer_moved && !up && !down {
            if menu.screen == Screen::Rider && menu.cursor != choice.0 {
                menu.dirty = true;
            }
            menu.cursor = choice.0;
        }
    }
    let back = keys.just_pressed(KeyCode::Escape) || pressed(GamepadButton::East);
    let left = keys.just_pressed(KeyCode::ArrowLeft) || pressed(GamepadButton::DPadLeft);
    let right = keys.just_pressed(KeyCode::ArrowRight) || pressed(GamepadButton::DPadRight);
    if back {
        action = Some(Action::Back);
    } else if keys.just_pressed(KeyCode::Enter)
        || pressed(GamepadButton::South)
        || pressed(GamepadButton::Start)
        || (matches!(
            menu.screen,
            Screen::GameOptions
                | Screen::SoundOptions
                | Screen::VideoOptions
                | Screen::Controls
                | Screen::RiderSetup
        ) && (left || right))
    {
        action = Some(options[menu.cursor.min(options.len() - 1)].1);
    }
    if let Some(a) = action {
        activate(
            a,
            &mut menu,
            &mut world,
            &mut exit,
            if left { -1 } else { 1 },
            &graphics.resolutions,
        );
        menu.block_input = true;
    }
}
fn countdown(mut menu: ResMut<Menu>, mut world: ResMut<PlayWorld>, mut finished: Local<usize>) {
    let count = world
        .opponents
        .iter()
        .filter(|o| o.session.phase == Phase::Finished)
        .count();
    if count != *finished {
        *finished = count;
        if menu.screen == Screen::Results {
            menu.dirty = true;
        }
    }
    if world.session.phase == Phase::Running {
        menu.award_time = (menu.award_time - 1. / 60.).max(0.);
    }
    if world.tricks.total != menu.last_score {
        menu.award_time = 3.;
        menu.last_score = world.tricks.total;
    }
    if menu.countdown > 0. && menu.screen == Screen::Game {
        let controls = world.controls;
        world.session.prime_start(controls);
        if menu.event == Event::Race {
            for (i, opponent) in world.opponents.iter_mut().enumerate() {
                // Shared rocking and reward rules. AI timing remains a host adapter.
                let forward = menu.countdown < 0.29 + (i % 4) as f32 * 0.045;
                opponent.session.prime_start(ssx_rust::playtest::Controls {
                    push: forward,
                    brake: !forward,
                    ..default()
                });
            }
        }
        menu.countdown = ((menu.countdown * 60.).round() - 1.).max(0.) / 60.;
        if menu.countdown == 0. {
            world.session.release_start();
            if menu.event == Event::Race {
                for opponent in &mut world.opponents {
                    opponent.session.release_start();
                }
            }
        }
    }
    if world.session.phase == Phase::Finished && menu.screen == Screen::Game && !world.smoke {
        menu.finish_time += 1. / 60.;
        if menu.finish_time >= 3. {
            menu.page(Screen::Results);
        }
    }
}
fn load_course(
    mut commands: Commands,
    mut menu: ResMut<Menu>,
    mut world: ResMut<PlayWorld>,
    mut track: ResMut<super::super::Track>,
    objects: Query<Entity, With<super::super::TrackGeometry>>,
    voices: Query<
        Entity,
        Or<(
            With<super::media::MusicVoice>,
            With<super::media::Announcer>,
            With<super::media::BoardLoop>,
            With<super::audio::GameVoice>,
        )>,
    >,
    mut images: ResMut<Assets<Image>>,
    mut meshes: ResMut<Assets<Mesh>>,
    mut materials: ResMut<Assets<CourseMaterial>>,
) {
    if !menu.pending {
        return;
    }
    if !menu.loading_shown {
        menu.loading_shown = true;
        return;
    }
    menu.pending = false;
    let stem = TRACKS[menu.track].0;
    if track.name != stem {
        let path = std::path::Path::new("extracted/DATA/MODELS").join(format!("{stem}.BIG"));
        let loaded = ssx_rust::load_track(&path).and_then(|(level, textures)| {
            super::load(&path, &level, false, false).map(|w| (level, textures, w))
        });
        match loaded {
            Ok((level, textures, mut next)) => {
                for e in &objects {
                    commands.entity(e).despawn();
                }
                for e in &voices {
                    commands.entity(e).despawn();
                }
                next.rider_data = None;
                *world = next;
                *track = super::super::Track {
                    level,
                    textures,
                    name: stem.into(),
                    focus_patch: None,
                };
                super::super::spawn_track(
                    &mut commands,
                    &track,
                    &mut images,
                    &mut meshes,
                    &mut materials,
                );
            }
            Err(e) => {
                menu.error = format!("Cannot load course: {e}");
                menu.page(Screen::Course);
                return;
            }
        }
    } else {
        world.session.reset();
        world.tricks = Default::default();
        for o in &mut world.opponents {
            o.reset();
        }
    }
    world.rider = menu.rider;
    let equipment = &ssx_rust::equipment::catalog()[world.rider];
    let board = menu.settings.boards[world.rider];
    world.session.rider_stats = equipment.physics_stats(board);
    world.session.board_style = equipment.boards[board].style as i32;
    world.input_map = menu.settings.input_map;
    world.mode = menu.settings.camera;
    world.camera = ssx_rust::player_camera::ChaseCamera::new(world.cameras[world.mode].clone());
    world.snap = true;
    menu.award_time = 0.;
    menu.last_score = 0;
    menu.countdown = ssx_rust::race_feedback::COUNTDOWN_SECONDS;
    menu.finish_time = 0.;
    menu.page(Screen::Game);
}
fn animate_title(time: Res<Time>, mut prompts: Query<&mut lettering::Tint, With<StartPrompt>>) {
    let brightness = 0.78 + 0.22 * (time.elapsed_secs() * 2.).sin();
    for mut tint in &mut prompts {
        tint.0 = Color::srgb(brightness, brightness, brightness);
    }
}
fn draw(
    mut commands: Commands,
    mut menu: ResMut<Menu>,
    world: Res<PlayWorld>,
    art: Res<Art>,
    preview: Res<rider::preview::PreviewImage>,
    graphics: Res<crate::graphics::Graphics>,
    roots: Query<Entity, With<MenuRoot>>,
    mut buttons: Query<
        (&Choice, &mut BackgroundColor, &mut BorderColor),
        Without<TitleStartButton>,
    >,
    mut previews: Query<&mut ImageNode, With<Preview>>,
    mut window: Single<&mut Window>,
) {
    let _span = crate::performance::span("draw");
    for mut image in &mut previews {
        image.image = art.fe[TRACKS[menu.cursor.min(TRACKS.len() - 1)].2].clone();
    }
    for (c, mut bg, mut border) in &mut buttons {
        if matches!(c.1, Action::Unavailable) {
            bg.0 = Color::srgba(0.08, 0.08, 0.1, 0.65);
            *border = BorderColor::all(Color::srgb(0.2, 0.2, 0.24));
            continue;
        }
        let selected = c.0 == menu.cursor;
        bg.0 = if selected {
            Color::srgba(0.04, 0.42, 0.48, 0.94)
        } else {
            Color::srgba(0.015, 0.03, 0.12, 0.90)
        };
        *border = BorderColor::all(if selected {
            GOLD
        } else {
            Color::srgba(0.45, 0.6, 0.7, 0.35)
        });
    }
    if !menu.dirty {
        return;
    }
    menu.dirty = false;
    window.title = if menu.screen == Screen::Game {
        format!("SSX | {} | {}", TRACKS[menu.track].1, menu.event.name())
    } else {
        "SSX".into()
    };
    for e in &roots {
        commands.entity(e).despawn();
    }
    if !menu.open() {
        return;
    }
    let screen = menu.screen;
    if screen == Screen::Title {
        let root = commands
            .spawn((
                MenuRoot,
                GlobalZIndex(20),
                ImageNode::new(art.fe[133].clone())
                    .with_mode(bevy::ui::widget::NodeImageMode::Stretch),
                Node {
                    position_type: PositionType::Absolute,
                    width: percent(100),
                    height: percent(100),
                    align_items: AlignItems::Center,
                    justify_content: JustifyContent::Center,
                    ..default()
                },
            ))
            .id();
        let content = commands
            .spawn(Node {
                position_type: PositionType::Absolute,
                top: percent(3),
                width: percent(96),
                max_width: px(1130),
                flex_direction: FlexDirection::Column,
                align_items: AlignItems::Center,
                row_gap: px(48),
                ..default()
            })
            .id();
        commands.entity(root).add_child(content);
        let logo = commands
            .spawn((
                ImageNode::new(art.logo.clone()),
                Node {
                    width: percent(100),
                    aspect_ratio: Some(art.logo_aspect),
                    flex_shrink: 0.,
                    ..default()
                },
            ))
            .id();
        commands.entity(content).add_child(logo);
        let start = commands
            .spawn((
                Button,
                TitleStartButton,
                Choice(0, Action::Page(Screen::Main)),
                Node {
                    position_type: PositionType::Absolute,
                    top: percent(52),
                    width: percent(100),
                    padding: UiRect::axes(px(32), px(18)),
                    justify_content: JustifyContent::Center,
                    ..default()
                },
            ))
            .id();
        let prompt = commands
            .spawn((
                StartPrompt,
                label("PRESS START BUTTON", 30.),
                lettering::Tint(Color::WHITE),
            ))
            .id();
        commands.entity(start).add_child(prompt);
        commands.entity(root).add_child(start);
        let footer = commands
            .spawn(Node {
                position_type: PositionType::Absolute,
                bottom: percent(4),
                width: percent(100),
                flex_direction: FlexDirection::Column,
                align_items: AlignItems::Center,
                row_gap: px(10),
                ..default()
            })
            .id();
        for (text, size) in [
            ("Reconstruction by DeadDove13 2026", 16.),
            ("GNU GENERAL PUBLIC LICENSE - Version 3, 29 June 2007", 14.),
            (
                "Copyright © 2007 Free Software Foundation, Inc. http://fsf.org/",
                13.,
            ),
        ] {
            // FEHEMI and the bundled host font lack ©. Compose its circle and C.
            let line = if let Some((before, after)) = text.split_once('©') {
                let row = commands
                    .spawn(Node {
                        align_items: AlignItems::Center,
                        ..default()
                    })
                    .id();
                let prefix = commands.spawn(label(before, size)).id();
                let symbol = commands
                    .spawn((
                        Node {
                            width: px(size),
                            height: px(size),
                            border: UiRect::all(px(1.)),
                            border_radius: BorderRadius::all(percent(50)),
                            justify_content: JustifyContent::Center,
                            align_items: AlignItems::Center,
                            flex_shrink: 0.,
                            ..default()
                        },
                        BorderColor::all(Color::WHITE),
                    ))
                    .id();
                let c = commands.spawn(label("C", size * 0.62)).id();
                commands.entity(symbol).add_child(c);
                let suffix = commands.spawn(label(after, size)).id();
                commands.entity(row).add_children(&[prefix, symbol, suffix]);
                row
            } else {
                commands.spawn(label(text, size)).id()
            };
            commands.entity(footer).add_child(line);
        }
        commands.entity(root).add_child(footer);
        return;
    }
    if screen == Screen::Results {
        race_hud::results(&mut commands, &menu, &world, &art, &preview);
        return;
    }
    let root = commands
        .spawn((
            MenuRoot,
            GlobalZIndex(20),
            ImageNode::new(art.fe[133].clone()).with_mode(bevy::ui::widget::NodeImageMode::Stretch),
            BackgroundColor(Color::srgb(0.01, 0.02, 0.07)),
            Node {
                position_type: PositionType::Absolute,
                width: percent(100),
                height: percent(100),
                flex_direction: FlexDirection::Column,
                align_items: AlignItems::Center,
                justify_content: JustifyContent::Center,
                ..default()
            },
        ))
        .id();
    let panel = commands
        .spawn((
            Node {
                width: percent(88),
                max_width: px(1040),
                max_height: percent(96),
                border_radius: BorderRadius::all(px(30)),
                padding: UiRect::all(px(28)),
                row_gap: px(10),
                flex_direction: FlexDirection::Column,
                ..default()
            },
            BackgroundColor(Color::srgba(0.01, 0.02, 0.09, 0.90)),
        ))
        .id();
    commands.entity(root).add_child(panel);
    let title = match screen {
        Screen::Title => "SSX",
        Screen::Main => "MAIN MENU",
        Screen::Mode => "SELECT MODE",
        Screen::Players => "SINGLE EVENT",
        Screen::Rider => "SELECT CHARACTER",
        Screen::RiderSetup => "SETUP CHARACTER",
        Screen::Event => "SELECT EVENT",
        Screen::Course => "SELECT VENUE",
        Screen::Options => "OPTIONS",
        Screen::GameOptions => "GAME",
        Screen::SoundOptions => "SOUND",
        Screen::VideoOptions => "VIDEO",
        Screen::Controls => "CONTROLS",
        Screen::Pause => "PAUSED",
        Screen::Results => "EVENT COMPLETE",
        Screen::Loading => "LOADING",
        Screen::Game => "",
    };
    let heading = commands.spawn(label(title, 38.)).id();
    commands.entity(panel).add_child(heading);
    if screen == Screen::Main {
        let logo = commands
            .spawn((Node {
                height: px(150),
                justify_content: JustifyContent::Center,
                ..default()
            },))
            .id();
        commands.entity(panel).add_child(logo);
        {
            let e = commands
                .spawn((
                    ImageNode::new(art.logo.clone()),
                    Node {
                        width: px(360),
                        aspect_ratio: Some(art.logo_aspect),
                        ..default()
                    },
                ))
                .id();
            commands.entity(logo).add_child(e);
        }
    }
    if screen == Screen::Rider {
        let bar = commands
            .spawn(Node {
                column_gap: px(14),
                justify_content: JustifyContent::Center,
                ..default()
            })
            .id();
        commands.entity(panel).add_child(bar);
        for (i, index) in [96, 97, 98, 103, 102, 101, 99, 100].into_iter().enumerate() {
            let e = commands
                .spawn((
                    Button,
                    Choice(i, Action::Rider(i)),
                    ImageNode::new(art.fe[index].clone()),
                    Node {
                        width: px(82),
                        height: px(82),
                        border: UiRect::all(px(2)),
                        ..default()
                    },
                    BorderColor::all(WHITE),
                    BackgroundColor(Color::NONE),
                ))
                .id();
            commands.entity(bar).add_child(e);
        }
    }
    if screen == Screen::Course {
        let selected = menu.cursor.min(TRACKS.len() - 1);
        let e = commands
            .spawn((
                Preview,
                ImageNode::new(art.fe[TRACKS[selected].2].clone()),
                Node {
                    position_type: PositionType::Absolute,
                    right: px(24),
                    top: px(100),
                    width: percent(28),
                    aspect_ratio: Some(1.),
                    ..default()
                },
            ))
            .id();
        commands.entity(panel).add_child(e);
    }
    if matches!(screen, Screen::Rider | Screen::RiderSetup) {
        let index = if screen == Screen::Rider {
            menu.cursor.min(7)
        } else {
            menu.rider
        };
        let r = &ssx_rust::equipment::catalog()[index];
        let board = menu.settings.boards[index];
        let hero = commands
            .spawn(Node {
                height: px(340),
                column_gap: px(24),
                align_items: AlignItems::Center,
                ..default()
            })
            .id();
        commands.entity(panel).add_child(hero);
        let model = commands
            .spawn((
                ImageNode::new(preview.0.clone()),
                Node {
                    width: px(340),
                    height: px(340),
                    flex_shrink: 0.,
                    ..default()
                },
            ))
            .id();
        commands.entity(hero).add_child(model);
        let info = commands
            .spawn(Node {
                flex_direction: FlexDirection::Column,
                flex_grow: 1.,
                row_gap: px(8),
                ..default()
            })
            .id();
        commands.entity(hero).add_child(info);
        let name = commands
            .spawn(label(
                format!("PLAYER 1  |  {}\nRANKING: Rookie", r.name.to_uppercase()),
                25.,
            ))
            .id();
        commands.entity(info).add_child(name);
        for (i, stat) in ["EDGING", "SPEED", "STABILITY", "TRICKS"]
            .iter()
            .enumerate()
        {
            let value = r.display_stats(board)[i];
            let title = commands
                .spawn(label(format!("{stat}    {value} / 100"), 17.))
                .id();
            commands.entity(info).add_child(title);
            let bar = commands
                .spawn((
                    Node {
                        width: percent(100),
                        height: px(10),
                        ..default()
                    },
                    BackgroundColor(Color::srgb(0.12, 0.17, 0.26)),
                ))
                .id();
            let fill = commands
                .spawn((
                    Node {
                        width: percent(value as f32),
                        height: percent(100),
                        ..default()
                    },
                    BackgroundColor(GOLD),
                ))
                .id();
            commands.entity(bar).add_child(fill);
            commands.entity(info).add_child(bar);
        }
        let details = commands
            .spawn(label(
                format!(
                    "{}\nClothing: {}",
                    r.boards[board].name, r.outfits[menu.settings.outfits[index]]
                ),
                16.,
            ))
            .id();
        commands.entity(info).add_child(details);
    }
    if screen == Screen::VideoOptions {
        let e = commands
            .spawn(label(
                format!(
                    "GPU: {}\nTextures: 2x upscaled   |   F11: fullscreen   |   F10: reset video",
                    graphics.gpu
                ),
                16.,
            ))
            .id();
        commands.entity(panel).add_child(e);
    }
    if screen == Screen::Controls {
        let e=commands.spawn(label("Xbox layout 1: Left stick steer / rotate | A charge / jump\nAir: LB / RB / LT / RT grabs | Ground: LB / RB shove left / right\nX tweak / boost | Y camera | Menu pause | View return to course\nKeyboard: WASD | Space charge / jump | Shift boost | 1-4 grabs\nQ / E shove | R return to course | X tweak | Esc pause\nC / Y: Near, far, or overhead camera preset | F1 diagnostics",15.)).id();
        commands.entity(panel).add_child(e);
    }
    if screen == Screen::Results {
        let rank = rank(&world);
        let place = if menu.event == Event::Race {
            format!("Place {rank} / 8    ")
        } else {
            String::new()
        };
        let e = commands
            .spawn(label(
                format!(
                    "{}   |   {}\n{}Score {}    Time {}",
                    TRACKS[menu.track].1,
                    menu.event.name(),
                    place,
                    world.tricks.total,
                    front_end::race_time(world.session.elapsed)
                ),
                26.,
            ))
            .id();
        commands.entity(panel).add_child(e);
    }
    for (i, (name, action)) in rows(&menu)
        .into_iter()
        .enumerate()
        .filter(|_| screen != Screen::Rider)
    {
        let e = commands
            .spawn((
                Button,
                Choice(i, action),
                Node {
                    width: if screen == Screen::Course {
                        percent(65)
                    } else {
                        percent(100)
                    },
                    min_height: px(36),
                    padding: UiRect::axes(px(18), px(5)),
                    border: UiRect::all(px(1)),
                    border_radius: BorderRadius::all(px(8)),
                    ..default()
                },
                BackgroundColor(Color::srgba(0.02, 0.08, 0.2, 0.9)),
                BorderColor::all(WHITE),
            ))
            .id();
        commands.entity(panel).add_child(e);
        let t = commands.spawn(label(name, 22.)).id();
        commands.entity(e).add_child(t);
    }
    let foot = commands
        .spawn(label(
            if !menu.error.is_empty() {
                menu.error.clone()
            } else if screen == Screen::RiderSetup {
                "A / Enter  SELECT    B / Esc  BACK    Left / Right  CHANGE ITEM".into()
            } else {
                "A / Enter  SELECT       B / Esc  BACK       D-pad / arrows  MOVE".into()
            },
            16.,
        ))
        .id();
    commands.entity(panel).add_child(foot);
}
fn hud(
    menu: Res<Menu>,
    real_time: Res<Time<Real>>,
    mut frame_ms: Local<f32>,
    world: Res<PlayWorld>,
    mut roots: Query<&mut Visibility, With<HudRoot>>,
    mut texts: Query<(&Field, &mut lettering::Label, &mut lettering::Tint)>,
) {
    let _span = crate::performance::span("hud");
    *frame_ms += (real_time.delta_secs() * 1000. - *frame_ms) * 0.05;
    for mut v in &mut roots {
        *v = if menu.open() {
            Visibility::Hidden
        } else {
            Visibility::Inherited
        };
    }
    for (field, mut text, mut tint) in &mut texts {
        let color = if matches!(field, Field::Score) && menu.award_time > 0. {
            Color::srgb(0.35, 1., 0.08)
        } else {
            WHITE
        };
        if tint.0 != color {
            tint.0 = color;
        }
        let next = match field {
            Field::Rank => {
                if menu.event == Event::Race {
                    String::new()
                } else {
                    menu.event.name().to_uppercase()
                }
            }
            Field::Score => format!("SCORE\n{}", world.tricks.total),
            Field::Time => format!("TIME\n{}", front_end::race_time(world.session.elapsed)),
            Field::Speed => format!(
                "{:.0} {}",
                world.session.velocity.length() * if menu.settings.mph { 0.0223694 } else { 0.036 },
                if menu.settings.mph { "mph" } else { "km/h" }
            ),
            Field::Status => world.session.recovery.map_or(
                if world.session.phase == Phase::Ready && menu.countdown == 0. {
                    "A / ENTER TO START".into()
                } else if world.session.power.message_time > 0. {
                    world.session.power.message.clone()
                } else if world.session.power.active {
                    "BOOST".into()
                } else {
                    String::new()
                },
                |r| {
                    if r.quality == ssx_rust::landing::Quality::Bail {
                        "WIPEOUT".into()
                    } else {
                        "REGAINING BALANCE".into()
                    }
                },
            ),
            Field::Debug => {
                if menu.debug {
                    format!(
                        "{:.0} FPS | {:.1} ms\n{} | BTNMAP{} | {}\n{} | {:.1}% | {}",
                        1000. / (*frame_ms).max(0.01),
                        *frame_ms,
                        rider::NAMES[world.rider],
                        world.input_map,
                        if world.controller {
                            "Controller connected"
                        } else {
                            "No controller"
                        },
                        world.camera.settings().name,
                        world.session.progress * 100.,
                        world.song_name
                    )
                } else {
                    String::new()
                }
            }
        };
        if text.0 != next {
            text.0 = next;
        }
    }
}
