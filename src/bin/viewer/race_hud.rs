//! Original HUD sprites and event presentation. Layout uses a 1280x720 safe area.
use super::*;
use bevy::audio::{AudioSinkPlayback, Volume};
use ssx_rust::race_feedback::{AWARD_SECONDS, Feedback, pulse};
#[path = "hud_sprites.rs"]
mod sprites;

#[derive(Resource, Default)]
pub(super) struct State {
    feedback: Feedback,
    countdown: u32,
    resets: u32,
    respawns: u32,
    finishing: bool,
    result_refresh: u32,
    meter_phase: f32,
}
#[derive(Component)]
pub(super) struct Quad;
#[derive(Component)]
pub(super) struct Caption;
#[derive(Component)]
struct Voice(usize);
fn cue_gain(slot: usize) -> f32 {
    if slot == 0x4d { 0.75 } else { 1. }
}
#[derive(Component)]
pub(super) struct RankCount;

pub fn plugin(app: &mut App) {
    app.init_resource::<State>()
        .add_systems(Startup, setup)
        .add_systems(FixedUpdate, tick.after(super::super::simulate))
        .add_systems(Update, (voices, status_overlay))
        .add_systems(
            FixedUpdate,
            smoke.after(super::super::presentation::tick).before(tick),
        );
}
#[derive(Component)]
struct ReturnFade;
#[derive(Component)]
struct PowerStatus;
fn setup(mut commands: Commands) {
    commands.spawn((
        ReturnFade,
        BackgroundColor(Color::NONE),
        Node {
            position_type: PositionType::Absolute,
            width: percent(100),
            height: percent(100),
            ..default()
        },
        GlobalZIndex(15),
        bevy::ui::FocusPolicy::Pass,
    ));
    commands.spawn((
        PowerStatus,
        label("", 22.),
        lettering::InGameFont,
        lettering::Tint(GOLD),
        Node {
            position_type: PositionType::Absolute,
            top: percent(22),
            left: percent(30),
            width: percent(40),
            justify_content: JustifyContent::Center,
            ..default()
        },
        GlobalZIndex(8),
        bevy::ui::FocusPolicy::Pass,
    ));

    // Reuse a bounded pool, including during animated score changes.
    for _ in 0..80 {
        commands.spawn((
            Quad,
            UiTransform::default(),
            ImageNode::default(),
            Node::default(),
            Visibility::Hidden,
            GlobalZIndex(8),
            bevy::ui::FocusPolicy::Pass,
        ));
    }
    commands.spawn((
        RankCount,
        label("", 22.),
        lettering::InGameFont,
        Node {
            position_type: PositionType::Absolute,
            ..default()
        },
        GlobalZIndex(8),
        Visibility::Hidden,
    ));
    commands.spawn((
        Caption,
        label("", 22.),
        lettering::InGameFont,
        lettering::Tint(GOLD),
        Node {
            position_type: PositionType::Absolute,
            bottom: percent(10.),
            left: percent(22.),
            width: percent(65.),
            ..default()
        },
        GlobalZIndex(8),
        Visibility::Hidden,
    ));
}
fn sound(commands: &mut Commands, media: &super::super::media::Media, menu: &Menu, slot: usize) {
    if let Some(clip) = super::super::media::feedback_clip(media, slot) {
        commands.spawn((
            Voice(slot),
            AudioPlayer::new(clip),
            PlaybackSettings::DESPAWN.with_volume(Volume::Linear(
                menu.audio_gain(menu.settings.effects) * cue_gain(slot),
            )),
        ));
    }
}
fn voices(
    mut commands: Commands,
    menu: Res<Menu>,
    world: Res<PlayWorld>,
    mut voices: Query<(
        Entity,
        &Voice,
        Option<&mut AudioSink>,
        &mut PlaybackSettings,
    )>,
) {
    for (entity, voice, sink, mut settings) in &mut voices {
        if !matches!(
            menu.screen,
            Screen::Game
                | Screen::Pause
                | Screen::Results
                | Screen::Options
                | Screen::SoundOptions
                | Screen::VideoOptions
                | Screen::GameOptions
                | Screen::Controls
        ) {
            commands.entity(entity).despawn();
            continue;
        }
        settings.volume =
            Volume::Linear(menu.audio_gain(menu.settings.effects) * cue_gain(voice.0));
        settings.paused = world.session.phase == Phase::Paused;
        if let Some(mut sink) = sink {
            sink.set_volume(settings.volume);
            if settings.paused {
                sink.pause();
            } else {
                sink.play();
            }
        }
    }
}
fn tick(
    mut commands: Commands,
    mut state: ResMut<State>,
    mut menu: ResMut<Menu>,
    world: Res<PlayWorld>,
    media: Option<Res<super::super::media::Media>>,
    voices: Query<Entity, With<Voice>>,
) {
    let reset =
        state.resets != world.session.resets || (menu.countdown > 4.9 && state.countdown == 0);
    if reset {
        *state = State {
            resets: world.session.resets,
            respawns: world.session.return_requests,
            ..default()
        };
        for e in &voices {
            commands.entity(e).despawn();
        }
    }
    if menu.screen == Screen::Game && world.session.phase != Phase::Paused {
        let speed = if world.session.power.active { 9. } else { 2.2 };
        state.meter_phase = (state.meter_phase + speed / 60.).rem_euclid(std::f32::consts::TAU);
    }
    let Some(media) = media else {
        return;
    };
    if state.respawns != world.session.return_requests {
        state.respawns = world.session.return_requests;
        state.feedback = Default::default();
        // 0x00107070 -> 0x00200ca0: original course-return cue, bank 1 slot 0x7b.
        sound(&mut commands, &media, &menu, 0x7b);
    }
    if menu.screen == Screen::Game {
        let count = menu.countdown.ceil() as u32;
        if count != state.countdown {
            // 0x001feb30: bank 1, slot 0x4e. Start release: 0x001f9b30, slot 0x70.
            sound(
                &mut commands,
                &media,
                &menu,
                if count == 0 { 0x70 } else { 0x4e },
            );
            state.countdown = count;
        }
    }
    if world.session.phase == Phase::Running {
        if world.contact_cues.shove {
            sound(&mut commands, &media, &menu, 0x5b);
        } else if world.contact_cues.bump {
            sound(&mut commands, &media, &menu, 0x52);
        }
        let cues = state.feedback.tick(&world.tricks);
        if cues.bank {
            // Original boost-level confirmation, 0x00200ab0. Landing trigger is a host adapter.
            sound(&mut commands, &media, &menu, 0x69);
        } else if cues.gain {
            sound(&mut commands, &media, &menu, 0x4d); // 0x00202200.
        }
    }
    if world.session.phase == Phase::Finished && !state.finishing {
        state.finishing = true;
        sound(&mut commands, &media, &menu, 0x6d); // Finish event 0x001037f0 -> 0x00201b78.
    }
    if menu.screen == Screen::Results {
        state.result_refresh += 1;
        if state.result_refresh % 30 == 0 {
            menu.refresh();
        }
    }
}

struct Draw {
    edge: i8,
    id: usize,
    x: f32,
    y: f32,
    scale: f32,
    alpha: f32,
    stretch: Vec2,
    angle: f32,
}
fn number(
    out: &mut Vec<Draw>,
    value: u32,
    center: f32,
    y: f32,
    scale: f32,
    gold: bool,
    alpha: f32,
) {
    let ids: Vec<_> = value
        .to_string()
        .bytes()
        .map(|b| (b - b'0') as usize + if gold { 0 } else { 20 })
        .collect();
    let width: f32 = ids.iter().map(|i| sprites::SPRITES[*i].1[0] * scale).sum();
    let mut x = center - width * 0.5;
    for id in ids {
        out.push(Draw {
            edge: 0,
            id,
            x,
            y,
            scale,
            alpha,
            stretch: Vec2::ONE,
            angle: 0.,
        });
        x += sprites::SPRITES[id].1[0] * scale;
    }
}
fn sprite(out: &mut Vec<Draw>, id: usize, cx: f32, y: f32, scale: f32, alpha: f32) {
    out.push(Draw {
        edge: 0,
        id,
        x: cx - sprites::SPRITES[id].1[0] * scale * 0.5,
        y,
        scale,
        alpha,
        stretch: Vec2::ONE,
        angle: 0.,
    });
}
pub fn render(
    menu: Res<Menu>,
    state: Res<State>,
    world: Res<PlayWorld>,
    art: Res<Art>,
    window: Single<&Window>,
    ui_scale: Res<UiScale>,
    mut quads: Query<(&mut ImageNode, &mut Node, &mut UiTransform, &mut Visibility), With<Quad>>,
    mut caption: Query<
        (&mut lettering::Label, &mut Visibility),
        (With<Caption>, Without<Quad>, Without<RankCount>),
    >,
    mut rank_count: Query<
        (&mut lettering::Label, &mut Node, &mut Visibility),
        (With<RankCount>, Without<Quad>, Without<Caption>),
    >,
) {
    let mut draw = Vec::with_capacity(80);
    let f = &state.feedback;
    if menu.screen == Screen::Game {
        // Original spine, flag, cap, coloured rings, and BOOST glyphs.
        sprite(&mut draw, 0x25, 1220., 155., 2.8, 1.);
        for i in 0..14 {
            let id = if i < 5 {
                0x41
            } else if i < 10 {
                0x40
            } else {
                0x3f
            };
            sprite(
                &mut draw,
                id,
                1220.,
                580. - i as f32 * 28.,
                0.95,
                if world.session.power.charge * 14. > i as f32 {
                    1.
                } else {
                    0.62
                },
            );
            // Host animation of the original ring artwork. Staggered phases
            // show rotation without moving the meter's charge thresholds.
            let phase = state.meter_phase - i as f32 * 0.38;
            let ring = draw.last_mut().unwrap();
            ring.stretch = Vec2::new(1. + phase.sin() * 0.08, 0.2 + phase.cos().abs() * 0.8);
            ring.angle = phase.sin() * 0.09;
        }
        let cap = if world.session.power.charge < 0.333 {
            0x39
        } else if world.session.power.charge < 0.667 {
            0x38
        } else {
            0x37
        };
        let bounce = if f.award_visible() {
            1. + pulse(f.award_age / AWARD_SECONDS, 0.6)
        } else {
            1.
        };
        sprite(&mut draw, 0x36, 1220., 131., 1.4 * bounce, 1.);
        sprite(&mut draw, cap, 1220., 137., 1.4 * bounce, 1.);
        draw.last_mut().unwrap().angle = state.meter_phase;
        for (id, y) in [
            (0x32, 209.),
            (0x33, 293.),
            (0x33, 377.),
            (0x34, 461.),
            (0x35, 545.),
        ] {
            sprite(&mut draw, id, 1220., y, 1., 1.);
        }
        let right_end = draw.len();
        for d in &mut draw {
            d.edge = 1;
        }
        if menu.event == Event::Race {
            sprite(&mut draw, 0x25, 42., 175., 2.8, 1.);
            for opponent in &world.opponents {
                sprite(
                    &mut draw,
                    0x2b,
                    29.,
                    180. + opponent.session.progress * 397.,
                    0.85,
                    0.9,
                );
            }
            sprite(
                &mut draw,
                0x27,
                30.,
                175. + world.session.progress * 397.,
                1.1,
                1.,
            );
            let place = rank(&world) as u32;
            number(&mut draw, place, 65., 22., 1.65, place == 1, 1.);
            let suffix = match place {
                1 => 0x10,
                2 => 0x11,
                3 => 0x12,
                _ => 0x13,
            };
            sprite(&mut draw, suffix, 120., 27., 0.8, 1.);
        }
        for d in &mut draw[right_end..] {
            d.edge = -1;
        }
        if menu.countdown > 0. {
            let age = 1. - menu.countdown.fract();
            number(
                &mut draw,
                menu.countdown.ceil() as u32,
                640.,
                275.,
                2.5 + pulse(age, 1.5),
                true,
                1.,
            );
        } else if world.session.phase == Phase::Running && world.session.elapsed < 1. {
            sprite(
                &mut draw,
                0xb,
                640.,
                275.,
                2.5,
                1. - world.session.elapsed * 0.5,
            );
        }
        if f.pending > 0 {
            number(&mut draw, f.pending, 640., 34., 2.3, false, 1.);
        }
        if f.award_visible() {
            let t = f.award_age / AWARD_SECONDS;
            let s = 2.7 * (1. - t * 0.5) * (1. + pulse(t, 0.6));
            number(
                &mut draw,
                f.award,
                640. + t * 370.,
                38. - t * 10.,
                s,
                !f.lost,
                1. - t,
            );
            if f.combo && !f.lost {
                sprite(&mut draw, 0x24, 640., 295., 2.1 + t * 0.75, 1. - t);
            }
        }
        if world.session.phase == Phase::Finished {
            if menu.event == Event::Race {
                number(&mut draw, rank(&world) as u32, 310., 295., 3.2, true, 1.);
                let suffix = match rank(&world) {
                    1 => 0x10,
                    2 => 0x11,
                    3 => 0x12,
                    _ => 0x13,
                };
                sprite(&mut draw, suffix, 382., 300., 1.2, 1.);
                sprite(&mut draw, 0x22, 760., 295., 3., 1.);
            } else {
                sprite(&mut draw, 0xf, 640., 295., 3., 1.);
            }
        }
        if world.session.riding_switch {
            sprite(&mut draw, 0x43, 1230., 619., 0.85, 1.);
            draw.last_mut().unwrap().edge = 1;
        }
    }
    // px() is already multiplied by Bevy's UiScale during layout.
    let width = window.width() / ui_scale.0;
    let height = window.height() / ui_scale.0;
    let scale = (width / 1280.).min(height / 720.);
    let ox = (width - 1280. * scale) * 0.5;
    let oy = (height - 720. * scale) * 0.5;
    for (mut label, mut node, mut visibility) in &mut rank_count {
        *visibility = if menu.screen == Screen::Game && menu.event == Event::Race {
            Visibility::Inherited
        } else {
            Visibility::Hidden
        };
        let next = format!("/ {}", world.opponents.len() + 1);
        if label.0 != next {
            label.0 = next;
        }
        node.left = px(98. * scale);
        node.top = px(oy + 52. * scale);
    }
    for (index, (mut image, mut node, mut transform, mut visible)) in quads.iter_mut().enumerate() {
        let Some(d) = draw.get(index) else {
            *visible = Visibility::Hidden;
            continue;
        };
        let (bank, size, uv) = sprites::SPRITES[d.id];
        let texture = match bank {
            2 => 2,
            3 => 3,
            7 => 4,
            _ => 0,
        };
        *image = ImageNode {
            image: art.hud[texture].clone(),
            rect: Some(Rect::new(
                (uv[0] * 255.).round(),
                (uv[1] * 255.).round(),
                (uv[2] * 255.).round() + 1.,
                (uv[3] * 255.).round() + 1.,
            )),
            color: Color::srgba(1., 1., 1., d.alpha),
            image_mode: bevy::ui::widget::NodeImageMode::Stretch,
            ..default()
        };
        *node = Node {
            position_type: PositionType::Absolute,
            left: px((match d.edge {
                -1 => 0.,
                1 => ox * 2.,
                _ => ox,
            }) + d.x * scale),
            top: px(oy + d.y * scale),
            width: px(size[0] * d.scale * scale),
            height: px(size[1] * d.scale * scale),
            ..default()
        };
        transform.scale = d.stretch;
        transform.rotation = Rot2::radians(d.angle);
        *visible = Visibility::Inherited;
    }
    for (mut label, mut visibility) in &mut caption {
        *visibility = if menu.screen == Screen::Game {
            Visibility::Inherited
        } else {
            Visibility::Hidden
        };
        let next = if world.tricks.pending > 0 {
            world.tricks.label.clone()
        } else if f.award_visible() {
            f.label.clone()
        } else if world.session.phase == Phase::Finished {
            front_end::race_time(world.session.elapsed)
        } else {
            String::new()
        };
        if label.0 != next {
            label.0 = next;
        }
    }
}

pub(super) fn results(
    commands: &mut Commands,
    menu: &Menu,
    world: &PlayWorld,
    _art: &Art,
    _preview: &rider::preview::PreviewImage,
) {
    let root = commands
        .spawn((
            MenuRoot,
            GlobalZIndex(20),
            BackgroundColor(Color::srgba(0.015, 0.025, 0.14, 0.72)),
            Node {
                position_type: PositionType::Absolute,
                width: percent(100),
                height: percent(100),
                padding: UiRect::axes(percent(7), percent(5)),
                flex_direction: FlexDirection::Column,
                row_gap: px(12),
                ..default()
            },
        ))
        .id();
    let heading = commands
        .spawn((
            label(TRACKS[menu.track].1.to_uppercase(), 38.),
            lettering::Tint(GOLD),
        ))
        .id();
    commands.entity(root).add_child(heading);
    let subtitle = commands
        .spawn(label(
            format!("Single Event Results   |   {}", menu.event.name()),
            22.,
        ))
        .id();
    commands.entity(root).add_child(subtitle);
    let body = commands
        .spawn(Node {
            width: percent(100),
            flex_grow: 1.,
            column_gap: percent(3),
            ..default()
        })
        .id();
    commands.entity(root).add_child(body);
    let table = commands
        .spawn(Node {
            width: percent(63),
            flex_direction: FlexDirection::Column,
            row_gap: px(10),
            ..default()
        })
        .id();
    commands.entity(body).add_child(table);
    let row = |commands: &mut Commands, cells: [String; 4], color| {
        let r = commands
            .spawn(Node {
                width: percent(100),
                min_height: px(30),
                ..default()
            })
            .id();
        commands.entity(table).add_child(r);
        for (cell, width) in cells.into_iter().zip([14., 29., 27., 30.]) {
            let container = commands
                .spawn(Node {
                    width: percent(width),
                    ..default()
                })
                .id();
            let text = commands
                .spawn((label(cell, 21.), lettering::Tint(color)))
                .id();
            commands.entity(container).add_child(text);
            commands.entity(r).add_child(container);
        }
    };
    row(
        commands,
        [
            "Rank".into(),
            "Name".into(),
            "with".into(),
            if menu.event == Event::Showoff {
                "Score".into()
            } else {
                "Time".into()
            },
        ],
        WHITE,
    );
    let mut entries = vec![(true, world.rider, &world.session)];
    if menu.event == Event::Race {
        for (i, o) in world.opponents.iter().enumerate() {
            entries.push((false, if i < world.rider { i } else { i + 1 }, &o.session));
        }
    }
    entries.sort_by(
        |a, b| match (a.2.phase == Phase::Finished, b.2.phase == Phase::Finished) {
            (true, true) => a.2.elapsed.total_cmp(&b.2.elapsed),
            (true, false) => std::cmp::Ordering::Less,
            (false, true) => std::cmp::Ordering::Greater,
            _ => b.2.progress.total_cmp(&a.2.progress),
        },
    );
    for (i, (player, rider, session)) in entries.into_iter().enumerate() {
        row(
            commands,
            [
                (i + 1).to_string(),
                if player {
                    "SSX".into()
                } else {
                    rider::NAMES[rider].into()
                },
                rider::NAMES[rider].into(),
                if menu.event == Event::Showoff {
                    world.tricks.total.to_string()
                } else if session.phase == Phase::Finished {
                    front_end::race_time(session.elapsed)
                } else {
                    "Racing...".into()
                },
            ],
            if player { GOLD } else { WHITE },
        );
    }
    let side = commands
        .spawn(Node {
            width: percent(34),
            flex_direction: FlexDirection::Column,
            ..default()
        })
        .id();
    commands.entity(body).add_child(side);
    // The course camera shows the animated race rider through the panel.
    commands.entity(side).insert(Node {
        width: percent(34),
        justify_content: JustifyContent::FlexEnd,
        flex_direction: FlexDirection::Column,
        ..default()
    });
    for (i, (name, action)) in rows(menu).into_iter().enumerate() {
        let button = commands
            .spawn((
                Button,
                Choice(i, action),
                Node {
                    padding: UiRect::all(px(7)),
                    ..default()
                },
                BackgroundColor(Color::NONE),
                BorderColor::all(Color::NONE),
            ))
            .id();
        let text = commands
            .spawn((
                label(name, 22.),
                lettering::Tint(if matches!(action, Action::Unavailable) {
                    Color::srgb(0.35, 0.38, 0.48)
                } else {
                    WHITE
                }),
            ))
            .id();
        commands.entity(button).add_child(text);
        commands.entity(side).add_child(button);
    }
}

#[derive(Default)]
struct Smoke {
    frame: u32,
    start: Vec3,
    tricks: ssx_rust::tricks::State,
    sinks: std::collections::BTreeSet<usize>,
    primed: bool,
    banked: bool,
    return_before: (u32, f32, u32),
    finish_time: f32,
}
// Script presentation inputs through the real trick model. The separate play
// smoke test checks actual flight, touchdown, and banking through physics.
fn smoke(
    mut state: Local<Smoke>,
    mut menu: ResMut<Menu>,
    mut world: ResMut<PlayWorld>,
    mut commands: Commands,
    voices: Query<(&Voice, &AudioSink)>,
    all_audio: Query<&AudioSink>,
    effects: Res<super::super::presentation::Effects>,
    speech: Res<super::super::rider_speech::Speech>,
    crowds: Res<super::super::crowd::Crowds>,
    quads: Query<(&ComputedNode, &UiGlobalTransform, &Visibility), With<Quad>>,
    window: Single<&Window>,
    mut exit: MessageWriter<AppExit>,
) {
    if !std::env::args().any(|a| a == "--race-feedback-smoke-test") {
        return;
    }
    state.frame += 1;
    let frame = state.frame;
    for sink in &all_audio {
        assert_eq!(
            sink.volume().to_linear(),
            0.,
            "Smoke tests must remain muted"
        );
    }
    for (voice, sink) in &voices {
        assert_eq!(sink.volume().to_linear(), 0.);
        state.sinks.insert(voice.0);
    }
    if frame == 1 {
        menu.page(Screen::Game);
        menu.countdown = ssx_rust::race_feedback::COUNTDOWN_SECONDS;
        world.session.reset();
        state.start = world.session.position;
        world.controls.crouch = true;
        world.snap = true;
    }
    if frame == 290 {
        assert_eq!(world.session.elapsed, 0.);
        assert_eq!(world.session.position, state.start);
        assert_eq!(world.session.start_charge(), 1.);
        assert!(world.session.ground_inputs.crouch.value > 0.9);
        state.primed = true;
    }
    if frame == 15 {
        world.controls.crouch = false;
        world.controls.brake = true;
    }
    if frame == 100 {
        world.controls.brake = false;
        world.controls.crouch = true;
    }
    if frame == 305 {
        world.controls.crouch = false;
    }
    if (340..400).contains(&frame) {
        state.tricks.tick(
            false,
            ssx_rust::tricks::Input {
                grab: Some(if frame < 370 { 7 } else { 4 }),
                spin: 1.,
                ..default()
            },
            false,
        );
        world.tricks = state.tricks.clone();
    }
    if frame == 400 {
        state.tricks.tick(true, Default::default(), false);
        assert!(state.tricks.combo && state.tricks.total > 0);
        world.tricks = state.tricks.clone();
        state.banked = true;
    }
    if frame == 500 {
        state.return_before = (
            world.tricks.total,
            world.session.elapsed,
            world.session.respawns,
        );
        world.return_requested = true;
    }
    if frame == 580 {
        assert_eq!(world.tricks.total, state.return_before.0);
        assert!(world.session.elapsed > state.return_before.1);
        assert_eq!(world.session.respawns, state.return_before.2 + 1);
        world.session.shove.begin(-1);
    }
    if frame == 600 {
        let finish = world
            .session
            .network
            .race
            .iter()
            .find_map(|p| {
                p.events
                    .iter()
                    .find(|e| e.kind == 10)
                    .map(|e| p.sample(e.start + 50.).0)
            })
            .unwrap();
        world.session.position = Vec3::from_array(finish) + Vec3::Z * 50.;
        world.session.grounded = false;
        world.session.velocity = Vec3::ZERO;
        world.snap = true;
    }
    if frame == 900 {
        state.finish_time = world.session.elapsed;
        let opponent = &mut world.opponents[0];
        let finish = opponent
            .session
            .network
            .race
            .iter()
            .find_map(|p| {
                p.events
                    .iter()
                    .find(|e| e.kind == 10)
                    .map(|e| p.sample(e.start + 50.).0)
            })
            .unwrap();
        opponent.session.position = Vec3::from_array(finish) + Vec3::Z * 50.;
        opponent.session.grounded = false;
        opponent.session.velocity = Vec3::ZERO;
    }
    if [75, 150, 375, 420, 465, 525, 620, 805, 1030, 1170].contains(&frame) {
        if frame < 805 {
            let size = Vec2::new(
                window.physical_width() as f32,
                window.physical_height() as f32,
            );
            for (node, transform, visibility) in &quads {
                if *visibility == Visibility::Hidden {
                    continue;
                }
                let center = transform.affine().translation;
                let half = node.size() * 0.5;
                assert!(
                    (center - half).cmpge(Vec2::splat(-2.)).all()
                        && (center + half).cmple(size + Vec2::splat(2.)).all(),
                    "HUD outside viewport: center={center:?}, half={half:?}, viewport={size:?}"
                );
            }
        }
        commands
            .spawn(bevy::render::view::screenshot::Screenshot::primary_window())
            .observe(bevy::render::view::screenshot::save_to_disk(format!(
                "analysis/race-feedback-{frame}.png"
            )));
    }
    if frame == 1200 {
        assert_eq!(menu.screen, Screen::Results);
        assert_eq!(world.session.elapsed, state.finish_time);
        assert_eq!(
            world.opponents[0].session.phase,
            Phase::Finished,
            "Opponents must finish while results remain open"
        );
        assert!(
            effects.scripted > 0 && effects.emitted > 0,
            "Original WFX must emit particles"
        );
        assert!(speech.played > 0, "Rider speech must be scheduled");
        assert!(
            crowds.updates > 100 && crowds.peak_spectators > 0,
            "Original crowd models must animate: updates={}, peak={}",
            crowds.updates,
            crowds.peak_spectators
        );
        assert!(
            world.session.finish_elapsed > 8.
                && world.session.grounded
                && world.session.recovery.is_none()
        );
        assert!(state.primed && state.banked);
        for slot in [0x4e, 0x70, 0x4d, 0x69, 0x6d, 0x7b] {
            assert!(
                state.sinks.contains(&slot),
                "Missing audio sink for {slot:#x}"
            );
        }
        let report = serde_json::json!({"primed_without_moving":state.primed,"combo_banked":state.banked,
            "score":state.tricks.total,"muted_audio_slots":state.sinks,"results":true,"return_preserved_score_and_time":true,
            "script_emitters":effects.scripted,"particles_emitted":effects.emitted,"rider_lines":speech.played,
            "crowd_updates":crowds.updates,"peak_spectators":crowds.peak_spectators,
            "finish_elapsed":world.session.finish_elapsed,"finish_recovered":world.session.recovery.is_none(),"late_opponent_finished":true,"unsupported_events":effects.unsupported});
        std::fs::write(
            "analysis/race-feedback-smoke.json",
            serde_json::to_vec_pretty(&report).unwrap(),
        )
        .unwrap();
        exit.write(AppExit::Success);
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    #[test]
    fn score_ding_gain_does_not_change_other_cues() {
        assert_eq!(cue_gain(0x4d), 0.75);
        for slot in [0x4e, 0x70, 0x69, 0x6d] {
            assert_eq!(cue_gain(slot), 1.);
        }
    }
    #[test]
    fn recovered_hud_rectangles_stay_inside_the_atlas() {
        for &(bank, size, uv) in sprites::SPRITES.iter().filter(|s| matches!(s.0, 2 | 3 | 7)) {
            assert!(matches!(bank, 2 | 3 | 7));
            assert!(size.into_iter().all(|v| v > 0.));
            assert!(uv.into_iter().all(|v| (0. ..=1.).contains(&v)));
            assert!(uv[0] < uv[2] && uv[1] < uv[3]);
        }
    }
    #[test]
    #[ignore = "requires original disc assets"]
    fn recovered_cues_have_decoded_audio() {
        let bytes = std::fs::read("extracted/DATA/AUDIO/AUDIO.BIG").unwrap();
        let entries = ssx_rust::archive::index(&bytes).unwrap();
        let entry = entries
            .iter()
            .find(|e| e.path.to_lowercase().ends_with("/zbxsfx.bnk"))
            .unwrap();
        let clips =
            ssx_rust::audio_bank::decode(&ssx_rust::archive::extract(&bytes, entry).unwrap())
                .unwrap();
        for slot in [0x4d, 0x4e, 0x69, 0x6d, 0x70, 0x7b, 0x52, 0x5b] {
            let clip = clips[slot].as_ref().unwrap();
            assert!(clip.samples.iter().any(|s| *s != 0));
        }
    }
}

fn status_overlay(
    world: Res<PlayWorld>,
    menu: Res<Menu>,
    mut fade: Single<&mut BackgroundColor, With<ReturnFade>>,
    mut status: Single<&mut lettering::Label, With<PowerStatus>>,
) {
    fade.0 = Color::srgba(
        0.,
        0.,
        0.,
        if menu.screen == Screen::Game {
            world.session.return_opacity()
        } else {
            0.
        },
    );
    let p = &world.session.power;
    status.0 = if menu.screen != Screen::Game {
        String::new()
    } else if world.session.returning.is_some() {
        "RETURNING TO COURSE".into()
    } else if p.message_time > 0. {
        p.message.clone()
    } else {
        let mut parts = Vec::new();
        if p.multiplier > 1. {
            parts.push(format!("{}x NEXT TRICK", p.multiplier as u32));
        }
        if p.super_boost > 0. {
            parts.push(format!("SUPER BOOST  {:.0}s", p.super_boost.ceil()));
        }
        if p.sparkling() {
            parts.push("SUPER TRICKS".into());
        }
        if parts.is_empty() && p.message_time > 0. {
            parts.push(p.message.clone());
        }
        parts.join("   |   ")
    };
}
