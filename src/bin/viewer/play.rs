use crate::lighting::CourseMaterial;
#[path = "audio.rs"]
mod audio;
#[path = "crowd.rs"]
pub(super) mod crowd;
#[path = "interface.rs"]
pub(super) mod interface;
#[path = "media.rs"]
mod media;
#[path = "menu_audio.rs"]
mod menu_audio;
#[path = "presentation.rs"]
mod presentation;
#[path = "rider.rs"]
mod rider;
#[path = "rider_speech.rs"]
mod rider_speech;
use bevy::{app::AppExit, prelude::*};
use ssx_rust::{
    level::Level,
    player_camera::{self, CameraPose, ChaseCamera, ChaseSettings, RiderReference},
    playtest::{Controls, Phase, Session, TerrainContact},
};
use std::path::Path;

#[derive(Resource)]
pub(super) struct PlayWorld {
    session: Session,
    rider: usize,
    tricks: ssx_rust::tricks::State,
    trick_input: ssx_rust::tricks::Input,
    forward_gate: ssx_rust::tricks::ForwardGate,
    opponents: Vec<ssx_rust::opponents::Opponent>,
    seen_resets: u32,
    seen_respawns: u32,
    return_requested: bool,
    contacts: ssx_rust::rider_contact::Contacts,
    contact_cues: ssx_rust::rider_contact::Cues,
    media_data: Option<media::Data>,
    song_name: String,
    rider_data: Option<rider::Data>,
    sound_clips: Vec<Option<ssx_rust::audio_bank::Clip>>,
    terrain: TerrainContact,
    cameras: Vec<ChaseSettings>,
    camera: ChaseCamera,
    clearance: ssx_rust::camera_rig::Clearance,
    mode: usize,
    controls: Controls,
    input_maps: Vec<ssx_rust::controls::Map>,
    input_map: usize,
    pad: ssx_rust::controls::Pad,
    controller: bool,
    grab: Option<usize>,
    previous_player: Vec3,
    previous_camera: Transform,
    current_camera: Transform,
    snap: bool,
    smoke: bool,
    benchmark: bool,
    effects_smoke: bool,
    effects_focus: Vec3,
    smoke_audio_sink: bool,
    smoke_music: bool,
    smoke_announcer: bool,
    smoke_board: bool,
    smoke_stagger: bool,
    ticks: u32,
}
#[derive(Component)]
pub(super) struct TrackObject {
    pub index: usize,
    pub initially_visible: bool,
    pub part: usize,
    pub pivot: Vec3,
}
#[derive(Component)]
pub(super) struct PlayerCamera;
#[derive(Component)]
pub(crate) struct PreviewCamera;
#[derive(Component)]
struct RiderMarker;

fn reference(s: &Session) -> RiderReference {
    // Preserve normal grounded steering. A backwards landing must not turn the
    // camera against travel. In the air, ignore board rotation and jump pitch.
    // CM2 keeps its existing spring/damping when this reference changes.
    let moving = s.velocity.truncate().length_squared() > 100. * 100.;
    let direction = if s.grounded {
        if moving && s.forward.truncate().dot(s.velocity.truncate()) < 0. {
            s.velocity.normalize_or_zero()
        } else {
            s.forward
        }
    } else if moving {
        s.velocity.with_z(0.).normalize_or_zero()
    } else {
        Vec3::ZERO
    };
    RiderReference {
        position: s.position.to_array(),
        direction: direction.to_array(),
        ground_normal: s.normal.to_array(),
        grounded: s.grounded,
        input_a8: s.input_a8,
    }
}

#[cfg(test)]
mod camera_tests {
    use super::*;
    #[test]
    #[ignore = "requires original Snowdream assets"]
    fn gate_camera_clearance_keeps_distance() {
        let path = Path::new("extracted/DATA/MODELS/SNOW.BIG");
        let (level, _) = ssx_rust::load_track(path).unwrap();
        let terrain = TerrainContact::from_level(&level);
        let session = Session::new(ssx_rust::load_track_paths(path).unwrap(), &terrain).unwrap();
        let data = std::fs::read("extracted/DATA/CAMERA/COMMONOB.CM2").unwrap();
        for name in ["chase near", "chase far"] {
            let mut camera = ChaseCamera::new(player_camera::decode_chase(&data, name).unwrap());
            let desired = Vec3::from_array(camera.tick(reference(&session)).position);
            let settings = camera.settings();
            let target = session.position + Vec3::from_array(settings.target_offset);
            let radius = (settings.near.powi(2)
                + (settings.near / settings.zoom).powi(2) * (1. + (16f32 / 9.).powi(2)))
            .sqrt()
            .max(25.)
                + 5.;
            let safe = ssx_rust::camera_rig::Clearance::default().constrain(
                &terrain.camera_geometry,
                target,
                desired,
                radius,
                &Default::default(),
                1. / 60.,
            );
            assert!(
                safe.distance(target) > desired.distance(target) * 0.65,
                "{name}: target={target:?}, desired={desired:?}, safe={safe:?}, radius={radius}"
            );
        }
    }
    #[test]
    #[ignore = "requires original Snowdream assets"]
    fn starting_gate_prepares_inputs_without_advancing_physics() {
        let archive = Path::new("extracted/DATA/MODELS/SNOW.BIG");
        let (level, _) = ssx_rust::load_track(archive).unwrap();
        let terrain = TerrainContact::from_level(&level);
        let mut s = Session::new(ssx_rust::load_track_paths(archive).unwrap(), &terrain).unwrap();
        let start = s.position;
        let velocity = s.velocity;
        for _ in 0..180 {
            s.prime_start(Controls {
                crouch: true,
                steer: 1.,
                ..Default::default()
            });
        }
        assert_eq!(s.position, start);
        assert_eq!(s.velocity, velocity);
        assert_eq!(s.elapsed, 0.);
        assert_eq!(s.start_charge(), 1.);
        assert!(s.ground_inputs.crouch.value > 0.9);
        s.prime_start(Controls::default());
        assert_eq!(
            s.start_charge(),
            0.,
            "Release before GO must cancel the prepared jump"
        );
        for _ in 0..60 {
            s.prime_start(Controls {
                crouch: true,
                ..Default::default()
            });
        }
        s.toggle_run();
        assert_eq!(s.start_charge(), 1., "GO must retain held charge");
        s.reset();
        assert_eq!(s.start_charge(), 0.);
        assert_eq!(s.ground_inputs.crouch.value, 0.);
    }
    #[test]
    #[ignore = "requires original Snowdream assets"]
    fn half_turn_landing_keeps_downhill_movement() {
        let archive = Path::new("extracted/DATA/MODELS/SNOW.BIG");
        let (mut level, _) = ssx_rust::load_track(archive).unwrap();
        let original = TerrainContact::from_level(&level);
        let mut session =
            Session::new(ssx_rust::load_track_paths(archive).unwrap(), &original).unwrap();
        let start = session.position;
        let direction = session.forward.with_z(0.).normalize();
        let mut patch = level.patches[0].clone();
        patch.coefficients = [[0.; 3]; 16];
        patch.coefficients[0] = [start.x - 10000., start.y - 10000., start.z - 2.];
        patch.coefficients[1] = [20000., 0., 0.];
        patch.coefficients[4] = [0., 20000., 0.];
        patch.surface_type = 1;
        level.patches = vec![patch];
        level.instances.clear();
        level.rails.clear();
        let terrain = TerrainContact::from_level(&level);
        session.phase = Phase::Running;
        session.grounded = false;
        session.position.z += 120.;
        session.velocity = direction * 1800. + Vec3::Z * 300.;
        let mut tricks = ssx_rust::tricks::State::default();
        for _ in 0..36 {
            session.tick(
                Controls {
                    steer: -1.,
                    ..Default::default()
                },
                &terrain,
            );
            tricks.tick(
                session.grounded,
                ssx_rust::tricks::Input {
                    spin: 1.,
                    ..Default::default()
                },
                false,
            );
        }
        assert!((tricks.spin - 180.).abs() < 0.01);
        for _ in 0..120 {
            session.tick(Controls::default(), &terrain);
            if session.landed_this_tick {
                session.finish_air_trick(tricks.spin, tricks.flip);
            }
            tricks.tick(session.grounded, Default::default(), false);
            if session.grounded {
                break;
            }
        }
        assert!(session.grounded && session.recovery.is_none());
        assert!(
            session.riding_switch,
            "180 landing did not select switch stance"
        );
        assert!(
            session.forward.with_z(0.).normalize().dot(direction) > 0.99,
            "Air trick redirected the movement heading: forward={:?}, travel={:?}",
            session.forward,
            session.velocity
        );
        for _ in 0..60 {
            session.tick(Controls::default(), &terrain);
        }
        assert!(
            session.velocity.normalize().dot(direction) > 0.95,
            "A clean 180 redirected downhill momentum"
        );
        // Exercise both spin directions, repeated half-turns, starting in switch,
        // all board styles, and steering after the landing through the same update.
        for style in 0..3 {
            for initial_switch in [false, true] {
                for degrees in [-540f32, -360., -180., 180., 360., 540.] {
                    session.reset();
                    session.phase = Phase::Running;
                    session.board_style = style;
                    session.riding_switch = initial_switch;
                    session.grounded = false;
                    session.position.z += 10000.;
                    session.velocity = direction * 1800.;
                    tricks = Default::default();
                    for _ in 0..(degrees.abs() / 5.) as usize {
                        session.tick(
                            Controls {
                                steer: -degrees.signum(),
                                ..Default::default()
                            },
                            &terrain,
                        );
                        tricks.tick(
                            false,
                            ssx_rust::tricks::Input {
                                spin: degrees.signum(),
                                ..Default::default()
                            },
                            false,
                        );
                    }
                    // Supply a gentle touchdown to isolate stance from impact severity.
                    session.position.z = start.z;
                    session.velocity = direction * 1800. - Vec3::Z * 100.;
                    session.tick(Controls::default(), &terrain);
                    assert!(session.landed_this_tick);
                    session.finish_air_trick(tricks.spin, tricks.flip);
                    tricks.tick(session.grounded, Default::default(), false);
                    assert!(tricks.landed && !tricks.bailed && session.recovery.is_none());
                    let changed = ((degrees / 180.) as i32).rem_euclid(2) != 0;
                    assert_eq!(session.riding_switch, initial_switch ^ changed);
                    assert!(
                        Vec3::from_array(reference(&session).direction).dot(direction) > 0.99,
                        "Switch landing changed the camera reference"
                    );
                    for _ in 0..60 {
                        session.tick(Controls::default(), &terrain);
                    }
                    for _ in 0..30 {
                        session.tick(
                            Controls {
                                steer: 1.,
                                ..Default::default()
                            },
                            &terrain,
                        );
                    }
                    assert!(
                        direction.cross(session.velocity).z < 0.,
                        "Switch stance reversed right steering"
                    );
                }
            }
        }
        session.reset();
        assert!(!session.riding_switch);
    }
    #[test]
    #[ignore = "requires original Snowdream assets"]
    fn grounded_turn_moves_the_camera_around_behind_the_rider() {
        let archive = Path::new("extracted/DATA/MODELS/SNOW.BIG");
        let (mut level, _) = ssx_rust::load_track(archive).unwrap();
        let original = TerrainContact::from_level(&level);
        let spawn = Session::new(ssx_rust::load_track_paths(archive).unwrap(), &original)
            .unwrap()
            .position;
        let mut patch = level.patches[0].clone();
        patch.coefficients = [[0.; 3]; 16];
        patch.coefficients[0] = [spawn.x - 10000., spawn.y - 10000., spawn.z - 2.];
        patch.coefficients[1] = [20000., 0., 0.];
        patch.coefficients[4] = [0., 20000., 0.];
        patch.surface_type = 1;
        level.patches = vec![patch];
        level.instances.clear();
        level.rails.clear();
        let terrain = TerrainContact::from_level(&level);
        let data = std::fs::read("extracted/DATA/CAMERA/COMMONOB.CM2").unwrap();
        for preset in ["chase near", "chase far"] {
            for steer in [-0.5, 0.5] {
                let mut s =
                    Session::new(ssx_rust::load_track_paths(archive).unwrap(), &terrain).unwrap();
                s.phase = Phase::Running;
                s.velocity = s.forward * 2000.;
                let initial_heading = s.forward.y.atan2(s.forward.x);
                let mut camera =
                    ChaseCamera::new(player_camera::decode_chase(&data, preset).unwrap());
                let mut previous = camera.tick(reference(&s));
                for _ in 0..60 {
                    s.tick(
                        Controls {
                            steer,
                            ..Default::default()
                        },
                        &terrain,
                    );
                    let pose = camera.tick(reference(&s));
                    let offset = Vec3::from_array(pose.position) - s.position;
                    assert!(
                        offset.dot(s.forward) < 0.,
                        "Camera left the rear of the rider"
                    );
                    assert!(
                        player_camera::angle_delta(pose.angles[0], previous.angles[0]).abs() < 0.1,
                        "Camera snapped during the turn"
                    );
                    previous = pose;
                }
                let camera_turn = player_camera::angle_delta(previous.angles[0], initial_heading);
                assert!(
                    -camera_turn * steer.signum() > 0.15,
                    "Camera did not follow the turn"
                );
                let travel = s.velocity.y.atan2(s.velocity.x);
                assert!(
                    player_camera::angle_delta(previous.angles[0], travel).abs() < 0.5,
                    "Camera no longer shows the direction of travel"
                );
            }
        }
    }
    #[test]
    #[ignore = "requires original Snowdream assets"]
    fn airborne_spin_does_not_turn_the_follow_camera() {
        let archive = Path::new("extracted/DATA/MODELS/SNOW.BIG");
        let (level, _) = ssx_rust::load_track(archive).unwrap();
        let terrain = TerrainContact::from_level(&level);
        let mut session =
            Session::new(ssx_rust::load_track_paths(archive).unwrap(), &terrain).unwrap();
        session.grounded = false;
        session.velocity = Vec3::new(0., 1200., 300.);
        session.forward = Vec3::Y;
        let before = reference(&session).direction;
        session.forward = -Vec3::Y;
        assert_eq!(
            reference(&session).direction,
            before,
            "Board spin changed camera heading despite unchanged flight direction"
        );
        session.velocity = Vec3::Z * 300.;
        assert_eq!(
            reference(&session).direction,
            [0.; 3],
            "Retain camera heading when horizontal travel stops"
        );
        session.grounded = true;
        session.velocity = Vec3::Y * 1200.;
        session.forward = Vec3::new(0.2, 1., -0.2).normalize();
        assert_eq!(
            reference(&session).direction,
            session.forward.to_array(),
            "Grounded steering must retain the normal chase reference"
        );
        session.forward = -Vec3::Y;
        assert_eq!(
            reference(&session).direction,
            Vec3::Y.to_array(),
            "A backwards landing must not point the camera uphill"
        );
        let data = std::fs::read("extracted/DATA/CAMERA/COMMONOB.CM2").unwrap();
        for preset in ["chase near", "chase far"] {
            let mut camera = ChaseCamera::new(player_camera::decode_chase(&data, preset).unwrap());
            session.position = Vec3::ZERO;
            session.forward = Vec3::new(1., 1., 0.).normalize();
            let initial = camera.tick(reference(&session));
            let desired_yaw = std::f32::consts::FRAC_PI_2;
            let initial_error = player_camera::angle_delta(desired_yaw, initial.angles[0]).abs();
            session.grounded = false;
            let mut previous = initial;
            for i in 0..180 {
                let spin = i as f32 * 0.15;
                session.forward = Vec3::new(spin.cos(), spin.sin(), 0.);
                let pose = camera.tick(reference(&session));
                assert!(
                    pose.angles[0].sin() > 0.,
                    "Camera faced against flight direction during a spin"
                );
                assert!(
                    player_camera::angle_delta(pose.angles[0], previous.angles[0]).abs() < 0.1,
                    "Camera return jolted"
                );
                previous = pose;
            }
            assert!(
                player_camera::angle_delta(desired_yaw, previous.angles[0]).abs()
                    < initial_error * 0.1,
                "Camera did not spring toward travel"
            );
            session.grounded = true;
            session.forward = -Vec3::Y;
            for _ in 0..60 {
                let pose = camera.tick(reference(&session));
                assert!(
                    pose.angles[0].sin() > 0.,
                    "Landing turned the camera uphill"
                );
            }
        }
    }
    #[test]
    #[ignore = "requires original Snowdream assets"]
    fn right_stick_and_mouse_do_not_move_the_chase_camera() {
        let archive = Path::new("extracted/DATA/MODELS/SNOW.BIG");
        let (level, _) = ssx_rust::load_track(archive).unwrap();
        let mut world = load(archive, &level, false, false).unwrap();
        world.session.phase = Phase::Running;
        let mut menu = interface::Menu::default();
        menu.screen = interface::Screen::Game;
        let mut frame = Time::<()>::default();
        frame.advance_by(std::time::Duration::from_secs_f32(1. / 60.));
        let mut app = App::new();
        app.insert_resource(world)
            .insert_resource(menu)
            .insert_resource(frame)
            .init_resource::<Time<Fixed>>()
            .init_resource::<bevy::input::mouse::AccumulatedMouseMotion>()
            .init_resource::<ButtonInput<MouseButton>>()
            .init_resource::<ButtonInput<KeyCode>>()
            .add_message::<AppExit>()
            .add_systems(Update, (input, render).chain());
        app.world_mut().spawn((
            Window {
                focused: true,
                ..default()
            },
            bevy::window::PrimaryWindow,
        ));
        app.world_mut().spawn((
            PlayerCamera,
            Transform::default(),
            Projection::Perspective(PerspectiveProjection::default()),
        ));
        let camera_pose = |app: &mut App| {
            *app.world_mut()
                .query_filtered::<&Transform, With<PlayerCamera>>()
                .single(app.world())
                .unwrap()
        };
        app.update();
        let before = camera_pose(&mut app);
        let mut pad = Gamepad::default();
        pad.analog_mut().set(GamepadAxis::RightStickX, 1.);
        pad.analog_mut().set(GamepadAxis::RightStickY, -1.);
        app.world_mut().spawn(pad);
        app.world_mut()
            .resource_mut::<ButtonInput<MouseButton>>()
            .press(MouseButton::Right);
        app.world_mut()
            .resource_mut::<bevy::input::mouse::AccumulatedMouseMotion>()
            .delta = Vec2::splat(100.);
        for _ in 0..20 {
            app.update();
            let after = camera_pose(&mut app);
            assert!(after.translation.distance(before.translation) < 0.00001);
            assert_eq!(after.rotation, before.rotation);
        }
    }
}
fn transform(p: CameraPose) -> Transform {
    let [yaw, pitch, roll] = p.angles;
    let forward = [
        pitch.cos() * yaw.cos(),
        pitch.cos() * yaw.sin(),
        pitch.sin(),
    ];
    let mut t = Transform::from_translation(super::world(p.position))
        .looking_to(super::world(forward), Vec3::Y);
    t.rotation *= Quat::from_rotation_z(-roll);
    t
}
pub(super) fn load(
    archive: &Path,
    level: &Level,
    smoke: bool,
    effects_smoke: bool,
) -> ssx_rust::Result<PlayWorld> {
    let effects_focus = if effects_smoke {
        let object = level
            .instances
            .iter()
            .find(|o| o.properties.id == [75, 14])
            .ok_or("Effects smoke test requires the Snowdream glass barrier")?;
        Mat4::from_cols_array(&object.transform).transform_point3(Vec3::ZERO)
    } else {
        Vec3::ZERO
    };
    let camera_path = archive
        .parent()
        .and_then(Path::parent)
        .ok_or("Track archive has no DATA directory")?
        .join("CAMERA/COMMONOB.CM2");
    let data =
        std::fs::read(&camera_path).map_err(|e| format!("{}: {e}", camera_path.display()))?;
    let mut cameras = Vec::new();
    for name in ["chase near", "chase far", "chase over"] {
        cameras.push(player_camera::decode_chase(&data, name)?);
    }
    let terrain = TerrainContact::from_level(level);
    let network = ssx_rust::load_track_paths(archive)?;
    let opponents = ssx_rust::opponents::Opponent::field(&network, &terrain)?;
    let session = Session::new(network, &terrain)?;
    let mut camera = ChaseCamera::new(cameras[0].clone());
    let t = transform(camera.tick(reference(&session)));
    println!(
        "Test rider starts at {:?}, surface {}",
        session.position, session.surface
    );
    let input_maps = (0..8)
        .map(|i| {
            let path = camera_path
                .parent()
                .unwrap()
                .parent()
                .unwrap()
                .join(format!("CONFIG/BTNMAP{i}.DAT"));
            ssx_rust::controls::Map::parse(
                &std::fs::read_to_string(path).map_err(|e| e.to_string())?,
            )
        })
        .collect::<ssx_rust::Result<Vec<_>>>()?;
    let sound_clips = audio::load_bank(archive)?;
    let media = media::load(archive)?;
    Ok(PlayWorld {
        sound_clips,
        rider: 3,
        opponents,
        tricks: Default::default(),
        trick_input: Default::default(),
        seen_resets: 0,
        seen_respawns: 0,
        return_requested: false,
        contacts: Default::default(),
        contact_cues: Default::default(),
        song_name: media.song_name.clone(),
        media_data: Some(media),
        rider_data: Some(rider::load(
            camera_path.parent().unwrap().parent().unwrap(),
        )?),
        input_maps,
        input_map: 0,
        pad: Default::default(),
        controller: false,
        grab: None,
        forward_gate: Default::default(),
        previous_player: session.position,
        session,
        terrain,
        cameras,
        camera,
        clearance: Default::default(),
        mode: 0,
        controls: Controls::default(),
        previous_camera: t,
        current_camera: t,
        snap: true,
        smoke,
        benchmark: std::env::args().any(|a| a == "--perf-test"),
        effects_smoke,
        effects_focus,
        smoke_audio_sink: false,
        smoke_music: false,
        smoke_announcer: false,
        smoke_board: false,
        smoke_stagger: false,
        ticks: 0,
    })
}
pub(super) fn spawn(
    commands: &mut Commands,
    world: &mut PlayWorld,
    camera: Entity,
    meshes: &mut Assets<Mesh>,
    materials: &mut Assets<CourseMaterial>,
    images: &mut Assets<Image>,
) {
    commands
        .entity(camera)
        .insert((PlayerCamera, world.current_camera, IsDefaultUiCamera));
    rider::spawn(
        commands,
        world.rider_data.take().unwrap(),
        meshes,
        materials,
        images,
    );
}
pub(super) fn plugin(app: &mut App) {
    use bevy::audio::AddAudioSource;
    app.add_audio_source::<media::MusicSource>();
    interface::plugin(app);
    if std::env::args().any(|a| a == "--perf-test") {
        app.add_systems(Last, performance_test);
    }
    app.insert_resource(Time::<Fixed>::from_hz(60.0))
        .add_systems(
            Startup,
            (
                audio::setup,
                media::setup,
                media::setup_menu_music,
                menu_audio::setup,
                rider_speech::setup,
                presentation::setup,
            ),
        )
        .add_systems(
            PreUpdate,
            input
                .after(interface::input)
                .after(bevy::input::InputSystems),
        )
        .add_systems(
            FixedUpdate,
            (
                simulate,
                media::tick,
                rider_speech::tick,
                presentation::tick,
                crowd::animate,
            )
                .chain(),
        )
        .add_systems(
            Update,
            (
                render,
                render_objects,
                presentation::render.after(render),
                audio::lifecycle,
                (rider::appearance, rider::animate, rider::preview::animate).chain(),
                media::menu_music,
            ),
        );
}

#[derive(Default)]
struct PerformanceTest {
    previous: Option<std::time::Instant>,
    frames: usize,
    samples: Vec<f64>,
}
fn performance_test(
    mut state: Local<PerformanceTest>,
    mut world: ResMut<PlayWorld>,
    mut menu: ResMut<interface::Menu>,
    mut exit: MessageWriter<AppExit>,
    diagnostics: Res<bevy::diagnostic::DiagnosticsStore>,
    window: Single<&Window>,
) {
    let now = std::time::Instant::now();
    if let Some(previous) = state.previous
        && state.frames >= 120
    {
        state
            .samples
            .push(now.duration_since(previous).as_secs_f64() * 1000.);
    }
    state.previous = Some(now);
    state.frames += 1;
    if state.frames == 120 {
        crate::performance::take();
    }
    if state.frames == 2 {
        menu.screen = interface::Screen::Game;
        if std::env::var_os("SSX_PERF_SAVED_VIDEO").is_some() {
            menu.settings.video = ssx_rust::front_end::Settings::load().video;
        }
        menu.settings.video.vsync = false;
        menu.refresh();
        world.session.phase = Phase::Running;
    }
    world.controls.push = true;
    if state.frames == 600 {
        state.samples.sort_by(f64::total_cmp);
        let mean = state.samples.iter().sum::<f64>() / state.samples.len() as f64;
        let percentile = |p: f64| state.samples[((state.samples.len() - 1) as f64 * p) as usize];
        let report = serde_json::json!({"frames":state.samples.len(),"mean_ms":mean,"fps":1000./mean,"p50_ms":percentile(0.5),"p95_ms":percentile(0.95),"p99_ms":percentile(0.99),"meets_60fps":percentile(0.95)<=1000./60.,"position":world.session.position.to_array(),"progress":world.session.progress,"focused":window.focused,"resolution":[window.physical_width(),window.physical_height()],"present_mode":format!("{:?}",window.present_mode),"video":menu.settings.video});
        let tag = std::env::var("SSX_PERF_TAG").unwrap_or("latest".into());
        let gpu: Vec<_> = diagnostics
            .iter()
            .map(|d| serde_json::json!({"path":d.path().to_string(),"average":d.average()}))
            .collect();
        std::fs::write(
            format!("analysis/performance-render-{tag}.json"),
            serde_json::to_vec_pretty(&gpu).unwrap(),
        )
        .unwrap();
        std::fs::write(
            format!("analysis/performance-spans-{tag}.json"),
            serde_json::to_vec_pretty(&crate::performance::take()).unwrap(),
        )
        .unwrap();
        std::fs::write(
            format!("analysis/performance-{tag}.json"),
            serde_json::to_vec_pretty(&report).unwrap(),
        )
        .unwrap();
        println!("Frame-time benchmark: {report}");
        exit.write(AppExit::Success);
    }
}
fn input(
    mut world: ResMut<PlayWorld>,
    menu: Res<interface::Menu>,
    keys: Res<ButtonInput<KeyCode>>,
    pads: Query<&Gamepad>,
) {
    use ssx_rust::controls::{Pad, token};
    if std::env::args().any(|a| a == "--race-feedback-smoke-test") {
        return;
    }
    if menu.open() || menu.block_input {
        world.controls = Controls::default();
        world.trick_input = Default::default();
        world.pad = Default::default();
        return;
    }
    let was_running = world.session.phase == Phase::Running;
    let was_connected = world.controller;
    let mut pad = Pad::default();
    world.controller = !pads.is_empty();
    if let Some(gamepad) = pads.iter().next() {
        pad.left = gamepad.left_stick().to_array();
        pad.right = gamepad.right_stick().to_array();
        for (button, name) in [
            (GamepadButton::South, "J_BUTTOND"),
            (GamepadButton::West, "J_BUTTONA"),
            (GamepadButton::North, "J_BUTTONB"),
            (GamepadButton::East, "J_BUTTONC"),
            (GamepadButton::LeftTrigger, "J_LSHIFT"),
            (GamepadButton::RightTrigger, "J_RSHIFT"),
            (GamepadButton::LeftTrigger2, "J_LSHIFT2"),
            (GamepadButton::RightTrigger2, "J_RSHIFT2"),
            (GamepadButton::Select, "J_STOP"),
            (GamepadButton::Start, "J_START"),
            (GamepadButton::LeftThumb, "J_LJOY"),
            (GamepadButton::RightThumb, "J_RJOY"),
            (GamepadButton::DPadUp, "J_UP"),
            (GamepadButton::DPadDown, "J_DOWN"),
            (GamepadButton::DPadLeft, "J_LEFT"),
            (GamepadButton::DPadRight, "J_RIGHT"),
        ] {
            if gamepad.pressed(button) {
                pad.buttons |= token(name).unwrap();
            }
        }
        pad.dpad = [
            gamepad.pressed(GamepadButton::DPadRight) as u8 as f32
                - gamepad.pressed(GamepadButton::DPadLeft) as u8 as f32,
            gamepad.pressed(GamepadButton::DPadUp) as u8 as f32
                - gamepad.pressed(GamepadButton::DPadDown) as u8 as f32,
        ];
        for (value, positive, negative) in [
            (pad.left[0], "J_LJOY_RIGHT", "J_LJOY_LEFT"),
            (pad.left[1], "J_LJOY_UP", "J_LJOY_DOWN"),
        ] {
            if value.abs() >= ssx_rust::controls::DEADZONE {
                pad.buttons |= token(if value > 0. { positive } else { negative }).unwrap();
            }
        }
    }
    // Keyboard shoulder keys use the same PS2 bit masks as the controller.
    for (key, name) in [
        (KeyCode::Digit1, "J_LSHIFT"),
        (KeyCode::Digit2, "J_RSHIFT"),
        (KeyCode::Digit3, "J_LSHIFT2"),
        (KeyCode::Digit4, "J_RSHIFT2"),
        (KeyCode::KeyX, "J_BUTTONA"),
    ] {
        if keys.pressed(key) {
            pad.buttons |= token(name).unwrap();
        }
    }
    let previous = world.pad;
    let map = &world.input_maps[world.input_map];
    let pressed = |name| map.pressed(name, pad);
    let edge = |name| pressed(name) && !map.pressed(name, previous);
    let start = menu.countdown <= 0.
        && world.session.phase == Phase::Ready
        && ((pad.buttons & 0x80 != 0 && previous.buttons & 0x80 == 0) || edge("StartRace"));
    let reset = edge("Reset");
    let shoulder_edge = |name| {
        let mask = token(name).unwrap();
        pad.buttons & mask != 0 && previous.buttons & mask == 0
    };
    let left_shove = keys.just_pressed(KeyCode::KeyQ) || shoulder_edge("J_LSHIFT");
    let right_shove = keys.just_pressed(KeyCode::KeyE) || shoulder_edge("J_RSHIFT");
    let camera = edge("CameraToggle");
    let charge = pressed("Antic");
    let release = was_connected && world.controller && map.pressed("Antic", previous) && !charge;
    let turn = map.axis("Turn", pad);
    let brake = map.axis("Brake", pad);
    let crouch = map.axis("Crouch", pad);
    let spin = map.axis("Spin", pad);
    let flip = map.axis("Flip", pad);
    let tweak = pressed("Tweak");
    let boost = pressed("Boost") || pressed("Modifier");
    world.grab = map.grab(pad);
    world.trick_input = ssx_rust::tricks::Input {
        spin: if spin != 0. {
            spin
        } else {
            keys.pressed(KeyCode::KeyA) as u8 as f32 - keys.pressed(KeyCode::KeyD) as u8 as f32
        },
        flip: if flip != 0. {
            flip
        } else {
            keys.pressed(KeyCode::KeyS) as u8 as f32 - keys.pressed(KeyCode::KeyW) as u8 as f32
        },
        grab: world.grab.map(|slot| {
            ssx_rust::grab_actions::GRAB_ACTIONS[world.rider][world.session.board_style as usize]
                [slot] as usize
        }),
        tweak,
    };
    if world.session.phase == Phase::Running
        && world.session.grounded
        && world.session.recovery.is_none()
    {
        if left_shove {
            world.session.shove.begin(-1);
        } else if right_shove {
            world.session.shove.begin(1);
        }
    }
    if menu.countdown <= 0. && (keys.just_pressed(KeyCode::Enter) || start) {
        if world.session.phase == Phase::Finished {
            world.session.reset();
            world.snap = true;
        }
        world.session.toggle_run();
        world.controls.jump = false;
    }
    if keys.just_pressed(KeyCode::Escape)
        && matches!(world.session.phase, Phase::Running | Phase::Paused)
    {
        world.session.toggle_run();
    }
    if menu.countdown <= 0. && (keys.just_pressed(KeyCode::KeyR) || reset) {
        world.return_requested = true;
        world.controls.jump = false;
    }
    if keys.just_pressed(KeyCode::KeyC) || camera {
        world.mode = (world.mode + 1) % world.cameras.len();
        world.camera = ChaseCamera::new(world.cameras[world.mode].clone());
        world.snap = true;
    }
    if keys.just_pressed(KeyCode::F2) && world.session.phase != Phase::Running {
        world.input_map = (world.input_map + 1) % 8;
    }
    if keys.just_pressed(KeyCode::F3) && world.session.phase != Phase::Running {
        world.rider = (world.rider + 1) % 8;
    }
    world.controls.steer = if turn != 0. {
        turn
    } else {
        keys.pressed(KeyCode::KeyD) as u8 as f32 - keys.pressed(KeyCode::KeyA) as u8 as f32
    };
    world.controls.boost = boost || keys.pressed(KeyCode::ShiftLeft);
    world.controls.brake = brake != 0. || keys.pressed(KeyCode::KeyS);
    world.controls.brake_axis = if keys.pressed(KeyCode::KeyS) {
        1.
    } else {
        brake
    };
    world.controls.crouch_axis = crouch;
    world.controls.push = keys.pressed(KeyCode::KeyW);
    world.controls.crouch = charge || keys.pressed(KeyCode::Space);
    if was_running && world.session.phase == Phase::Running {
        world.controls.jump |= release || keys.just_released(KeyCode::Space);
    } else {
        world.controls.jump = false;
    }
    world.pad = pad;
}

fn simulate(
    mut world: ResMut<PlayWorld>,
    menu: Res<interface::Menu>,
    mut exit: MessageWriter<AppExit>,
    mut commands: Commands,
    sounds: Res<audio::GameSounds>,
    voices: Query<(
        &AudioSink,
        Option<&media::MusicVoice>,
        Option<&media::Announcer>,
        Option<&media::BoardLoop>,
    )>,
) {
    let w = &mut *world;
    let _span = crate::performance::span("simulate");
    if w.benchmark {
        w.controls.push = true;
    }
    w.ticks += 1;
    if w.smoke {
        let recovery_test = std::env::args().any(|a| a == "--recovery-smoke-test");
        w.smoke_stagger |= w
            .session
            .recovery
            .is_some_and(|r| r.quality == ssx_rust::landing::Quality::Stagger);
        if w.ticks == 350 && !w.effects_smoke {
            if recovery_test {
                w.session.recover(ssx_rust::landing::Quality::Bail);
                w.opponents[0]
                    .session
                    .recover(ssx_rust::landing::Quality::Bail);
            } else {
                w.session.grounded = false;
                let normal = w.session.normal;
                w.session.velocity -= normal * 1800.;
            }
        }
        if recovery_test && [380, 405, 435, 480].contains(&w.ticks) {
            commands
                .spawn(bevy::render::view::screenshot::Screenshot::primary_window())
                .observe(bevy::render::view::screenshot::save_to_disk(format!(
                    "analysis/recovery-{}.png",
                    w.ticks
                )));
        }
        if w.ticks == 375 && !w.effects_smoke {
            commands
                .spawn(bevy::render::view::screenshot::Screenshot::primary_window())
                .observe(bevy::render::view::screenshot::save_to_disk(
                    "analysis/landing-stagger.png",
                ));
        }
        w.smoke_audio_sink |= !voices.is_empty();
        for (_, music, announcer, board) in &voices {
            w.smoke_music |= music.is_some();
            w.smoke_announcer |= announcer.is_some();
            w.smoke_board |= board.is_some();
        }
        w.trick_input = ssx_rust::tricks::Input {
            grab: if (184..215).contains(&w.ticks) {
                Some(7)
            } else {
                None
            },
            spin: if (180..216).contains(&w.ticks) {
                1.
            } else {
                0.
            },
            ..Default::default()
        };
        if w.ticks == 60 {
            w.session.toggle_run();
        }
        w.controls.push = true;
        w.controls.crouch = (120..180).contains(&w.ticks);
        w.controls.jump = w.ticks == 180;
        if w.ticks == 300 {
            w.session.toggle_run();
        }
        if w.ticks == 330 {
            w.session.toggle_run();
        }
        if w.ticks == 270 {
            commands
                .spawn(bevy::render::view::screenshot::Screenshot::primary_window())
                .observe(bevy::render::view::screenshot::save_to_disk(
                    "analysis/play-camera.png",
                ));
        }
        if w.effects_smoke && [90, 135, 350].contains(&w.ticks) {
            commands
                .spawn(bevy::render::view::screenshot::Screenshot::primary_window())
                .observe(bevy::render::view::screenshot::save_to_disk(format!(
                    "analysis/glass-{}.png",
                    w.ticks
                )));
        }
        if w.ticks == if recovery_test { 510 } else { 420 } {
            if recovery_test {
                assert!(w.session.recovery.is_none(), "Wipeout did not recover");
            }
            if !w.effects_smoke {
                std::fs::write("analysis/landing-smoke.json",serde_json::to_vec_pretty(&serde_json::json!({"stagger_observed":w.smoke_stagger,"recovery_finished":w.session.recovery.is_none()})).unwrap()).unwrap();
            }
            let report = serde_json::json!({"ticks":w.ticks,"phase":format!("{:?}",w.session.phase),"position":w.session.position.to_array(),"speed":w.session.velocity.length(),"progress":w.session.progress,"elapsed":w.session.elapsed,"resets":w.session.resets,"audio_sink_observed":w.smoke_audio_sink,"music_sink":w.smoke_music,"announcer_sink":w.smoke_announcer,"board_loop_sink":w.smoke_board,"score":w.tricks.total,"switch_stance":w.session.riding_switch,"opponents":w.opponents.iter().map(|o|serde_json::json!({"position":o.session.position.to_array(),"progress":o.session.progress,"resets":o.session.resets})).collect::<Vec<_>>(),"disabled_objects":w.session.objects.disabled.len(),"debris_objects":w.session.objects.activated_debris.len()});
            std::fs::write(
                "analysis/play-smoke.json",
                serde_json::to_vec_pretty(&report).unwrap(),
            )
            .unwrap();
            if w.effects_smoke {
                let glass = w
                    .terrain
                    .objects
                    .properties
                    .iter()
                    .position(|p| p.id == [75, 14])
                    .unwrap();
                let report = serde_json::json!({"intact_glass_disabled":w.session.objects.disabled.contains(&glass),"fragments":w.session.objects.fragments.iter().map(|(object,e)|serde_json::json!({"object":object,"age":e.age,"lifetime":e.lifetime,"active":e.active()})).collect::<Vec<_>>()});
                std::fs::write(
                    "analysis/glass-smoke.json",
                    serde_json::to_vec_pretty(&report).unwrap(),
                )
                .unwrap();
            }
            exit.write(AppExit::Success);
        }
    }
    let old_phase = w.session.phase;
    if w.seen_resets != w.session.resets {
        w.seen_resets = w.session.resets;
        w.tricks = Default::default();
        w.contacts = Default::default();
        for opponent in &mut w.opponents {
            opponent.reset();
        }
    }
    let previous_velocity = w.session.velocity;
    if w.session.phase == Phase::Running {
        w.session.objects.advance_effects();
    }
    w.previous_player = w.session.position;
    w.previous_camera = w.current_camera;
    if w.return_requested {
        w.session.request_return();
        w.return_requested = false;
        w.tricks.cancel_pending();
    }
    w.session.score_pickups = menu.event == ssx_rust::front_end::Event::Showoff;
    let was_grounded = w.session.grounded;
    w.session.tick(w.controls, &w.terrain);
    if w.session.respawns != w.seen_respawns {
        w.seen_respawns = w.session.respawns;
        w.tricks.cancel_pending();
        w.snap = true;
        w.previous_player = w.session.position;
    }
    if w.effects_smoke && w.ticks == 120 {
        let glass = w
            .terrain
            .objects
            .properties
            .iter()
            .position(|p| p.id == [75, 14])
            .unwrap();
        w.session.objects.contact_with_velocity(
            glass,
            &w.terrain.objects.properties,
            &w.terrain.objects.scripts,
            [0., 500., 0.],
        );
    }
    if w.session.phase == Phase::Running && w.session.returning.is_none() {
        if w.session.landed_this_tick {
            w.session.finish_air_trick(w.tricks.spin, w.tricks.flip);
        }
        let impact = ((previous_velocity - w.session.velocity).length() > 1400.
            && !w.session.grounded)
            || w.session
                .recovery
                .is_some_and(|r| r.quality == ssx_rust::landing::Quality::Bail);
        let rotation_factor = w.session.power.rotation_factor(w.session.grounded);
        let mut trick_input = w.forward_gate.filter(was_grounded, w.trick_input);
        trick_input.spin *= rotation_factor;
        trick_input.flip *= rotation_factor;
        w.tricks.tick(w.session.grounded, trick_input, impact);
        w.tricks.tick_grind(w.session.grind.is_some(), impact);
        if w.tricks.landed && !w.tricks.bailed {
            let bonus = w.session.power.land(w.tricks.last_award);
            w.tricks.total = w.tricks.total.saturating_add(bonus);
            w.tricks.last_award = w.tricks.last_award.saturating_add(bonus);
            if let Some(landing) = &mut w.tricks.landing {
                landing.award = landing.award.saturating_add(bonus);
            }
        }
        if w.tricks.bailed {
            w.session.power.bail();
            w.session.recover(ssx_rust::landing::Quality::Bail);
        }
    }
    // All riders share the same broken barriers. Keep events on the player host
    // so the existing renderer and spatial sound system consume each event once.
    for opponent in w
        .opponents
        .iter_mut()
        .filter(|_| menu.event == ssx_rust::front_end::Event::Race)
    {
        let mut objects = std::mem::take(&mut w.session.objects);
        let mut events = std::mem::take(&mut objects.events);
        opponent.session.objects = objects;
        opponent.tick(
            if w.session.phase == Phase::Finished {
                Phase::Running
            } else {
                w.session.phase
            },
            &w.terrain,
        );
        objects = std::mem::take(&mut opponent.session.objects);
        events.append(&mut objects.events);
        objects.events = events;
        w.session.objects = objects;
    }
    if matches!(w.session.phase, Phase::Running | Phase::Finished) {
        w.session
            .objects
            .tick_scripts(&w.terrain.objects.properties, &w.terrain.objects.scripts);
    }
    if std::env::args().any(|a| a == "--race-feedback-smoke-test") && w.ticks == 450 {
        let properties = &w.terrain.objects.properties;
        let scripts = &w.terrain.objects.scripts;
        let index = properties
            .iter()
            .position(|p| {
                scripts
                    .contact_program(p)
                    .is_some_and(|n| scripts.programs[n].iter().any(|e| e.kind == 17))
            })
            .unwrap();
        let b = properties[index].bounds.map(Vec3::from_array);
        w.session.position = (b[0] + b[1]) * 0.5;
        w.session.grounded = false;
        w.session.velocity = Vec3::Z * 700.;
        w.session.power.script_effect(17, 10.);
        w.session
            .objects
            .contact_with_velocity(index, properties, scripts, [0., 1800., 0.]);
        w.snap = true;
    }
    w.contact_cues = Default::default();
    if w.session.phase == Phase::Running && menu.event == ssx_rust::front_end::Event::Race {
        let mut riders = vec![(&mut w.session, w.previous_player)];
        riders.extend(
            w.opponents
                .iter_mut()
                .map(|o| (&mut o.session, o.previous_position)),
        );
        w.contact_cues = w.contacts.tick(&mut riders, &w.terrain);
        if w.session
            .recovery
            .is_some_and(|r| r.quality == ssx_rust::landing::Quality::Bail)
        {
            w.tricks.cancel_pending();
        }
    }
    // Exercise the original Snowdream contact program through the renderer/audio pipeline.
    // The physical collision path is checked separately by the session regression.
    if w.smoke
        && w.ticks == 240
        && let Some(index) = w
            .terrain
            .objects
            .properties
            .iter()
            .position(|p| p.id == [75, 14])
    {
        w.session.objects.contact(
            index,
            &w.terrain.objects.properties,
            &w.terrain.objects.scripts,
        );
    }
    if matches!(w.session.phase, Phase::Running | Phase::Finished) {
        audio::events(
            &mut commands,
            &sounds,
            &w.session.objects.events,
            w,
            menu.audio_gain(menu.settings.effects),
        );
    }
    w.controls.jump = false;
    if old_phase == Phase::Running && w.session.phase == Phase::Ready {
        w.snap = true;
    }
    if w.snap {
        w.camera.reset();
        w.clearance = Default::default();
        w.previous_player = w.session.position;
    }
    if matches!(w.session.phase, Phase::Running | Phase::Finished) || w.snap {
        w.current_camera = transform(w.camera.tick(reference(&w.session)));
    }
    if w.session.phase == Phase::Finished {
        let forward = w.session.forward.with_z(0.).normalize_or_zero();
        let side = forward.cross(Vec3::Z);
        let focus = w.session.position + Vec3::Z * 100.;
        let desired = focus + forward * 510. + side * 120. + Vec3::Z * 100.;
        let safe = w.terrain.camera_geometry.camera_position(
            focus,
            desired,
            16.,
            &w.session.objects.disabled,
        );
        // Look to the left of the rider so the actual rider occupies the results panel's clear right side.
        let pose = Transform::from_translation(super::world(safe.to_array()))
            .looking_at(super::world((focus + side * 150.).to_array()), Vec3::Y);
        let blend = ((w.session.finish_elapsed - 1.) / 2.).clamp(0., 1.);
        let blend = blend * blend * (3. - 2. * blend);
        w.current_camera.translation = w.current_camera.translation.lerp(pose.translation, blend);
        w.current_camera.rotation = w.current_camera.rotation.slerp(pose.rotation, blend);
    }
    if w.snap {
        w.previous_camera = w.current_camera;
        w.snap = false;
    }
}
fn render(
    mut world: ResMut<PlayWorld>,
    time: Res<Time<Fixed>>,
    frame: Res<Time>,
    window: Single<&Window, With<bevy::window::PrimaryWindow>>,
    mut camera: Single<
        (&mut Transform, &mut Projection),
        (With<PlayerCamera>, Without<RiderMarker>),
    >,
) {
    let fraction = time.overstep_fraction();
    let (t, projection) = &mut *camera;
    t.translation = world
        .previous_camera
        .translation
        .lerp(world.current_camera.translation, fraction);
    t.rotation = world
        .previous_camera
        .rotation
        .slerp(world.current_camera.rotation, fraction);
    let w = &mut *world;
    // The camera must follow every simulation tick, including an unfocused window.
    // Pause is represented by the session phase.
    let active = matches!(w.session.phase, Phase::Running | Phase::Finished);
    let rider = w.previous_player.lerp(w.session.position, fraction);
    let target = rider + Vec3::from_array(w.camera.settings().target_offset);
    let follow = Vec3::new(t.translation.x, -t.translation.z, t.translation.y) * 100.;
    // Enclose the near-plane corners, including ultrawide displays, in the cast.
    let near = 8f32; // Host near plane: reduce unnecessary bank clearance (centimetres).
    let half_height = near / w.camera.settings().zoom;
    let aspect = window.width() / window.height().max(1.);
    let radius = (near * near + half_height * half_height * (1. + aspect * aspect))
        .sqrt()
        .max(12.)
        + 2.;
    let safe = if w.session.phase == Phase::Finished {
        follow
    } else {
        w.clearance.constrain(
            &w.terrain.camera_geometry,
            target,
            follow,
            radius,
            &w.session.objects.disabled,
            if active { frame.delta_secs() } else { 0. },
        )
    };
    t.translation = super::world(safe.to_array());
    if std::env::args().any(|a| a == "--race-feedback-smoke-test") && w.ticks == 465 {
        let report = serde_json::json!({"rider":rider.to_array(),"target":target.to_array(),"follow":follow.to_array(),"safe":safe.to_array(),"radius":radius,"settings":format!("{:?}",w.camera.settings()),"velocity":w.session.velocity.to_array(),"grounded":w.session.grounded});
        std::fs::write(
            "analysis/camera-particle-probe.json",
            serde_json::to_vec_pretty(&report).unwrap(),
        )
        .unwrap();
    }
    if safe.distance_squared(follow) > 1. {
        // Keep the rider framed after the collision routine slides the camera up a bank.
        t.look_at(super::world(target.to_array()), Vec3::Y);
    }
    if world.effects_smoke {
        **t = Transform::from_translation(super::world(
            (world.effects_focus + Vec3::new(0., -1100., 450.)).to_array(),
        ))
        .looking_at(
            super::world((world.effects_focus + Vec3::Z * 100.).to_array()),
            Vec3::Y,
        );
    }
    if let Projection::Perspective(p) = &mut **projection {
        p.near = 0.08;
        // Provisional projection adapter. Original GS projection remains unported.
        p.fov = 2.0 * (1.0 / world.camera.settings().zoom).atan();
    }
}

fn render_objects(
    world: Res<PlayWorld>,
    time: Res<Time<Fixed>>,
    mut objects: Query<(&TrackObject, &mut Visibility, &mut Transform)>,
) {
    let _span = crate::performance::span("objects");
    for (object, mut visibility, mut transform) in &mut objects {
        let mut next = Transform::IDENTITY;
        let visible = if let Some(effect) = world.session.objects.rigid.get(&object.index) {
            next.translation = super::world(effect.displacement(
                effect.velocity,
                if world.session.phase == Phase::Running {
                    time.overstep_fraction()
                } else {
                    0.
                },
            ));
            effect.active()
        } else if let Some(effect) = world.session.objects.fragments.get(&object.index) {
            if effect.active() {
                let fraction = if world.session.phase == Phase::Running {
                    time.overstep_fraction()
                } else {
                    0.
                };
                let (offset, rotation) =
                    ssx_rust::fragments::motion(effect, object.index, object.part, fraction);
                let (axis, angle) = rotation.to_axis_angle();
                let rotation =
                    Quat::from_axis_angle(super::world(axis.to_array()).normalize_or_zero(), angle);
                next.rotation = rotation;
                next.translation =
                    object.pivot + super::world(offset.to_array()) - rotation * object.pivot;
                true
            } else {
                false
            }
        } else {
            world
                .session
                .objects
                .activated_debris
                .contains(&object.index)
                || (object.initially_visible
                    && !world.session.objects.disabled.contains(&object.index))
        };
        transform.set_if_neq(next);
        visibility.set_if_neq(if visible {
            Visibility::Inherited
        } else {
            Visibility::Hidden
        });
    }
}
