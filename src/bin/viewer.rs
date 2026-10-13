use bevy::{
    app::AppExit,
    asset::RenderAssetUsages,
    image::{ImageAddressMode, ImageSampler, ImageSamplerDescriptor},
    input::mouse::AccumulatedMouseMotion,
    mesh::Indices,
    prelude::*,
    render::{
        render_resource::{Extent3d, PrimitiveTopology, TextureDimension, TextureFormat},
        view::screenshot::{Screenshot, save_to_disk},
    },
};
use ssx_rust::{level::Level, texture::Texture};
use std::{collections::BTreeMap, path::PathBuf};
#[path = "viewer/desktop.rs"]
mod desktop;
#[path = "viewer/graphics.rs"]
mod graphics;
#[path = "viewer/lighting.rs"]
mod lighting;
#[path = "viewer/performance.rs"]
mod performance;
#[path = "viewer/play.rs"]
mod play;
#[path = "viewer/sky.rs"]
mod sky;
#[path = "viewer/textures.rs"]
mod textures;
use lighting::CourseMaterial;

#[derive(Resource)]
struct Track {
    level: Level,
    textures: Vec<Texture>,
    name: String,
    focus_patch: Option<usize>,
}

#[derive(Resource)]
struct Capture {
    path: Option<PathBuf>,
    frames: u32,
    requested: bool,
}

#[derive(Component)]
struct FlyCamera {
    yaw: f32,
    pitch: f32,
    speed: f32,
    initial: Transform,
}

fn main() {
    // Direct EXE launches and shortcuts do not need a particular working folder.
    if let Ok(exe) = std::env::current_exe() {
        if let Some(root) = exe
            .ancestors()
            .skip(1)
            .find(|p| p.join("extracted/DATA").is_dir() && p.join("assets").is_dir())
        {
            let _ = std::env::set_current_dir(root);
        }
    }
    let mut archive = PathBuf::from("extracted/DATA/MODELS/SNOW.BIG");
    let mut capture = None;
    let mut focus_patch = None;
    let mut test_play = std::env::current_exe().ok().is_some_and(|path| {
        path.file_stem()
            .is_some_and(|name| name == "ssx-play" || name == "SSX")
    });
    let mut smoke = false;
    let mut effects_smoke = false;
    let mut args = std::env::args().skip(1);
    while let Some(arg) = args.next() {
        match arg.as_str() {
            "--mute" => {}
            a if a.starts_with("--test-resolution=")
                || a.starts_with("--test-camera=")
                || a.starts_with("--test-rider=")
                || a.starts_with("--test-board-style=") => {}
            "--play" => test_play = true,
            "--race-feedback-smoke-test"
            | "--menu-smoke-test"
            | "--video-smoke-test"
            | "--perf-test" => test_play = true,
            "--smoke-test"
            | "--recovery-smoke-test"
            | "--world-animation-smoke-test"
            | "--start-animation-smoke-test" => {
                test_play = true;
                smoke = true;
            }
            "--pickup-feedback-smoke-test" => {
                test_play = true;
                smoke = true;
            }
            "--effects-smoke-test" => {
                test_play = true;
                smoke = true;
                effects_smoke = true;
            }
            "--screenshot" => {
                capture = Some(PathBuf::from(
                    args.next().expect("--screenshot requires a path"),
                ))
            }
            "--patch" => {
                focus_patch = Some(
                    args.next()
                        .expect("--patch requires an index")
                        .parse::<usize>()
                        .expect("Patch index must be a nonnegative integer"),
                )
            }
            "--help" | "-h" => {
                println!(
                    "ssx-bevy [TRACK.BIG] [--play] [--patch INDEX] [--screenshot FILE.png]\nUse --play for the rider test. Enter: start. A/D: steer. S: brake. W: push. Hold/release Space: jump. C: camera. R: reset. Esc: pause. Q: exit.\nWithout --play: WASD: fly. Right mouse: look. Space/Ctrl: rise/fall. Shift: faster. R: reset. Esc: exit."
                );
                return;
            }
            _ => archive = PathBuf::from(arg),
        }
    }
    let (level, textures) = match ssx_rust::load_track(&archive) {
        Ok(track) => track,
        Err(error) => {
            eprintln!("Cannot load {}: {error}", archive.display());
            std::process::exit(1);
        }
    };
    let name = archive
        .file_stem()
        .unwrap_or_default()
        .to_string_lossy()
        .into_owned();
    if focus_patch.is_some_and(|index| index >= level.patches.len()) {
        eprintln!("Patch index must be less than {}.", level.patches.len());
        std::process::exit(1);
    }
    println!(
        "Loaded {name}: {} original terrain patches and {} textures",
        level.patches.len(),
        textures.len()
    );
    println!(
        "This is a reconstruction test build. Original animation, object collision, race rules, and audio playback remain incomplete."
    );
    let mut app = App::new();
    if std::env::args().any(|a| a == "--perf-test") {
        app.insert_resource(bevy::winit::WinitSettings::continuous());
        app.insert_resource(bevy::time::TimeUpdateStrategy::ManualDuration(
            std::time::Duration::from_secs_f64(1. / 60.),
        ));
    }
    if test_play {
        let session = play::load(&archive, &level, smoke, effects_smoke).unwrap_or_else(|error| {
            eprintln!("Cannot start test play: {error}");
            std::process::exit(1);
        });
        app.insert_resource(session);
    }
    app.insert_resource(Track {
        level,
        textures,
        name: name.clone(),
        focus_patch,
    })
    .insert_resource(Capture {
        path: capture,
        frames: 0,
        requested: false,
    })
    .insert_resource(ClearColor(Color::srgb(0.055, 0.09, 0.14)))
    .add_plugins(
        DefaultPlugins
            .set(bevy::render::RenderPlugin {
                render_creation: bevy::render::settings::RenderCreation::Automatic(Box::new(
                    bevy::render::settings::WgpuSettings {
                        power_preference: bevy::render::settings::PowerPreference::HighPerformance,
                        ..default()
                    },
                )),
                ..default()
            })
            .set(WindowPlugin {
                primary_window: Some(Window {
                    title: format!(
                        "SSX | {name} | {}",
                        if test_play {
                            "Test play"
                        } else {
                            "Track preview"
                        }
                    ),
                    resolution: bevy::window::WindowResolution::new(1440, 900)
                        .with_scale_factor_override(1.0),
                    ..default()
                }),
                ..default()
            }),
    )
    .add_plugins(MaterialPlugin::<CourseMaterial>::default())
    .add_plugins(desktop::plugin)
    .add_systems(Startup, setup)
    .add_systems(
        PostUpdate,
        sky::follow_camera.before(bevy::transform::TransformSystems::Propagate),
    )
    .add_systems(Update, (move_camera, capture_frame));
    if std::env::args().any(|a| a == "--perf-test") {
        app.add_plugins(bevy::render::diagnostic::RenderDiagnosticsPlugin);
        performance::plugin(&mut app);
    }
    lighting::register(&mut app);
    graphics::plugin(&mut app);
    if test_play {
        play::plugin(&mut app);
    }
    app.run();
}

// The disc uses Z-up coordinates. A fixed scale keeps mesh coordinates convenient
// for Bevy. This scale is a viewer convention, not a recovered physics constant.
fn world(point: [f32; 3]) -> Vec3 {
    Vec3::new(point[0], point[2], -point[1]) * 0.01
}

#[derive(Default)]
struct SurfaceMesh {
    positions: Vec<[f32; 3]>,
    normals: Vec<[f32; 3]>,
    uv: Vec<[f32; 2]>,
    indices: Vec<u32>,
    light_uv: Vec<[f32; 2]>,
    colours: Vec<[f32; 4]>,
}

#[derive(Component)]
struct TrackGeometry;
fn spawn_track(
    commands: &mut Commands,
    track: &Track,
    images: &mut Assets<Image>,
    meshes: &mut Assets<Mesh>,
    materials: &mut Assets<CourseMaterial>,
) -> usize {
    if let Err(error) = sky::spawn(commands, &track.name, images, meshes, materials) {
        error!("Cannot load sky for {}: {error}", track.name);
    }
    commands.insert_resource(lighting::Probes::new(&track.level));
    let mut lightmaps = Vec::new();
    for texture in &track.level.lightmaps {
        let mut image = Image::new(
            Extent3d {
                width: texture.width,
                height: texture.height,
                depth_or_array_layers: 1,
            },
            TextureDimension::D2,
            texture.rgba.clone(),
            TextureFormat::Rgba8Unorm,
            RenderAssetUsages::RENDER_WORLD,
        );
        image.sampler = ImageSampler::Descriptor(ImageSamplerDescriptor::linear());
        lightmaps.push(images.add(image));
    }
    let mut handles = Vec::with_capacity(track.textures.len());
    for texture in &track.textures {
        let mut image = textures::image(texture);
        image.sampler = ImageSampler::Descriptor(ImageSamplerDescriptor {
            address_mode_u: ImageAddressMode::Repeat,
            address_mode_v: ImageAddressMode::Repeat,
            anisotropy_clamp: 16,
            ..ImageSamplerDescriptor::linear()
        });
        handles.push(images.add(image));
    }
    let mut grouped =
        BTreeMap::<(usize, Option<usize>, Option<(usize, usize)>, (i32, i32)), SurfaceMesh>::new();
    const STEPS: u32 = 8;
    for patch in &track.level.patches {
        let texture = track.level.material_textures[patch.material];
        let lightmap = &track.level.lightmaps[patch.lightmap as usize];
        let surface = grouped
            .entry((
                texture,
                Some(patch.lightmap as usize),
                None,
                spatial_chunk(patch.position(0.5, 0.5)),
            ))
            .or_default();
        let base = surface.positions.len() as u32;
        for row in 0..=STEPS {
            for col in 0..=STEPS {
                let u = col as f32 / STEPS as f32;
                let v = row as f32 / STEPS as f32;
                let point = world(patch.position(u, v));
                let du = world(patch.position(u + 0.001, v)) - point;
                let dv = world(patch.position(u, v + 0.001)) - point;
                let normal = du.cross(dv).normalize_or_zero();
                surface.positions.push(point.to_array());
                surface.normals.push(normal.to_array());
                surface.uv.push(patch.texcoord(u, v));
                surface
                    .light_uv
                    .push(patch.lightmap_uv(u, v, [lightmap.width, lightmap.height]));
                surface.colours.push([1.; 4]);
            }
        }
        for row in 0..STEPS {
            for col in 0..STEPS {
                let a = base + row * (STEPS + 1) + col;
                let b = a + 1;
                let c = a + STEPS + 1;
                let d = c + 1;
                surface.indices.extend_from_slice(&[a, b, c, b, d, c]);
            }
        }
    }
    let crowds = ssx_rust::crowd::from_level(&track.level);
    play::crowd::spawn(commands, track, &handles, meshes, materials);
    for (index, instance) in track.level.instances.iter().enumerate() {
        if crowds.iter().any(|c| c.object == index) {
            continue;
        }
        let placement = Mat4::from_cols_array(&instance.transform);
        for (part, object) in track.level.prefabs[instance.prefab].iter().enumerate() {
            let local = object
                .transform
                .map(|matrix| Mat4::from_cols_array(&matrix))
                .unwrap_or(Mat4::IDENTITY);
            let transform = placement * local;
            let local_normals = local.inverse().transpose();
            let world_normals = transform.inverse().transpose();
            let texture = track.level.material_textures[object.material];
            let dynamic = instance.properties.effect_slot >= 0
                || instance.properties.flags & 1 == 0
                || object.animation.is_some()
                || track
                    .level
                    .object_names
                    .get(index)
                    .is_some_and(|n| n.starts_with("startlightshang_"));
            let surface = grouped
                .entry((
                    texture,
                    None,
                    dynamic.then_some((index, part)),
                    if dynamic {
                        (0, 0)
                    } else {
                        spatial_chunk(instance.transform[12..15].try_into().unwrap())
                    },
                ))
                .or_default();
            let base = surface.positions.len() as u32;
            for position in &object.positions {
                surface.positions.push(
                    world(
                        transform
                            .transform_point3(Vec3::from_array(*position))
                            .to_array(),
                    )
                    .to_array(),
                );
            }
            for normal in &object.normals {
                let instance_normal = local_normals
                    .transform_vector3(Vec3::from_array(*normal))
                    .normalize_or_zero();
                surface
                    .colours
                    .push(instance.lighting.colour(instance_normal.to_array()));
                surface.light_uv.push([0.; 2]);
                let normal = world_normals.transform_vector3(Vec3::from_array(*normal));
                surface
                    .normals
                    .push(world(normal.to_array()).normalize_or_zero().to_array());
            }
            surface.uv.extend_from_slice(&object.uv);
            surface
                .indices
                .extend(object.indices.iter().map(|index| base + index));
        }
    }
    let draw_calls = grouped.len();
    let mut material_handles = BTreeMap::new();
    for ((texture, lightmap, object, _), surface) in grouped {
        let beam = object.is_some_and(|(i, _)| {
            track
                .level
                .object_names
                .get(i)
                .is_some_and(|n| n.starts_with("floodlightBeam"))
        });
        let start_light = object.is_some_and(|(i, _)| {
            track
                .level
                .object_names
                .get(i)
                .is_some_and(|n| n.starts_with("startlightshang_"))
        });
        let material = material_handles
            .entry((texture, lightmap, beam, start_light))
            .or_insert_with(|| {
                materials.add(CourseMaterial {
                    texture: handles[texture].clone(),
                    lightmap: lightmap.map(|index| lightmaps[index].clone()),
                    parameters: Vec4::new(
                        if lightmap.is_some() { 1. } else { 0. },
                        if beam { 0. } else { 0.1 },
                        if beam {
                            1.
                        } else if start_light {
                            2.
                        } else {
                            0.
                        },
                        if beam { 0.3 } else { 0. },
                    ),
                })
            })
            .clone();
        let low = surface
            .positions
            .iter()
            .map(|p| Vec3::from_array(*p))
            .fold(Vec3::splat(f32::INFINITY), Vec3::min);
        let high = surface
            .positions
            .iter()
            .map(|p| Vec3::from_array(*p))
            .fold(Vec3::splat(f32::NEG_INFINITY), Vec3::max);
        let pivot = (low + high) * 0.5;
        let mesh = Mesh::new(
            PrimitiveTopology::TriangleList,
            RenderAssetUsages::RENDER_WORLD,
        )
        .with_inserted_attribute(Mesh::ATTRIBUTE_POSITION, surface.positions)
        .with_inserted_attribute(Mesh::ATTRIBUTE_NORMAL, surface.normals)
        .with_inserted_attribute(Mesh::ATTRIBUTE_UV_0, surface.uv)
        .with_inserted_attribute(Mesh::ATTRIBUTE_UV_1, surface.light_uv)
        .with_inserted_attribute(Mesh::ATTRIBUTE_COLOR, surface.colours)
        .with_inserted_indices(Indices::U32(surface.indices));
        let mut entity = commands.spawn((
            TrackGeometry,
            Mesh3d(meshes.add(mesh)),
            MeshMaterial3d(material),
        ));
        if let Some((index, part)) = object {
            entity.insert(play::TrackObject {
                index,
                part,
                pivot,
                bounds: [low, high],
                initially_visible: track.level.instances[index].properties.flags & 1 != 0,
            });
            if track.level.instances[index].properties.flags & 1 == 0 {
                entity.insert(Visibility::Hidden);
            }
        }
    }
    draw_calls
}

fn spatial_chunk(point: [f32; 3]) -> (i32, i32) {
    // Keep distant pieces of the course out of a visible mesh's bounding box.
    (
        (point[0] / 5000.).floor() as i32,
        (point[1] / 5000.).floor() as i32,
    )
}

fn setup(
    mut commands: Commands,
    track: Res<Track>,
    mut images: ResMut<Assets<Image>>,
    mut meshes: ResMut<Assets<Mesh>>,
    mut materials: ResMut<Assets<CourseMaterial>>,
    mut play_world: Option<ResMut<play::PlayWorld>>,
) {
    let draw_calls = spawn_track(
        &mut commands,
        &track,
        &mut images,
        &mut meshes,
        &mut materials,
    );
    let low = world(track.level.stats.bounds_min);
    let high = world(track.level.stats.bounds_max);
    let (center, radius) = if let Some(index) = track.focus_patch {
        let patch = &track.level.patches[index];
        let center = world(patch.position(0.5, 0.5));
        let radius = patch
            .corners
            .iter()
            .map(|point| world(*point).distance(center))
            .fold(10.0_f32, f32::max);
        (center, radius)
    } else {
        ((low + high) * 0.5, low.distance(high).max(10.0) * 0.5)
    };
    let initial =
        Transform::from_translation(center + Vec3::new(0.65, 0.9, 0.8).normalize() * radius * 2.8)
            .looking_at(center, Vec3::Y);
    let (yaw, pitch, _) = initial.rotation.to_euler(EulerRot::YXZ);
    let camera_entity = commands
        .spawn((
            Camera3d::default(),
            // These prebatched course meshes cost less with direct GPU draws.
            // The matched Mesablanca benchmark confirms lower preparation cost.
            bevy::render::view::NoIndirectDrawing,
            Projection::Perspective(PerspectiveProjection {
                far: 100_000.0,
                near: 0.1,
                ..default()
            }),
            initial,
            FlyCamera {
                yaw,
                pitch,
                speed: radius * 0.3,
                initial,
            },
        ))
        .id();
    if let Some(ref mut play_world) = play_world {
        play::spawn(
            &mut commands,
            play_world,
            camera_entity,
            &mut meshes,
            &mut materials,
            &mut images,
        );
    } else {
        commands.spawn((
        Text::new(format!("SSX / {}\nOriginal track preview\n{} patches | {} object instances | {} textures\n\nWASD: move   Right mouse: look\nSpace / Ctrl: rise / fall   Shift: faster\nR: reset   F12: screenshot   Esc: exit", track.name, track.level.patches.len(), track.level.instances.len(), track.textures.len())),
        TextFont { font_size: bevy::text::FontSize::Px(19.0), ..default() },
        TextColor(Color::WHITE),
        Node { position_type: PositionType::Absolute, top: px(18), left: px(18), padding: UiRect::all(px(12)), ..default() },
        BackgroundColor(Color::srgba(0.015, 0.025, 0.04, 0.85)),
      ));
    }
    println!("Spawned {draw_calls} track batches. Camera radius {radius:.1}");
}

fn move_camera(
    play_world: Option<Res<play::PlayWorld>>,
    keyboard: Res<ButtonInput<KeyCode>>,
    buttons: Res<ButtonInput<MouseButton>>,
    mouse: Res<AccumulatedMouseMotion>,
    time: Res<Time>,
    mut camera: Single<(&mut Transform, &mut FlyCamera)>,
    mut exit: MessageWriter<AppExit>,
) {
    if play_world.is_some() {
        return;
    }
    if keyboard.just_pressed(KeyCode::Escape) {
        exit.write(AppExit::Success);
    }
    let (transform, control) = &mut *camera;
    if keyboard.just_pressed(KeyCode::KeyR) {
        **transform = control.initial;
        let (yaw, pitch, _) = transform.rotation.to_euler(EulerRot::YXZ);
        control.yaw = yaw;
        control.pitch = pitch;
    }
    if buttons.pressed(MouseButton::Right) {
        control.yaw -= mouse.delta.x * 0.003;
        control.pitch = (control.pitch - mouse.delta.y * 0.003).clamp(-1.54, 1.54);
        transform.rotation = Quat::from_euler(EulerRot::YXZ, control.yaw, control.pitch, 0.0);
    }
    let mut direction = Vec3::ZERO;
    if keyboard.pressed(KeyCode::KeyW) {
        direction += *transform.forward();
    }
    if keyboard.pressed(KeyCode::KeyS) {
        direction -= *transform.forward();
    }
    if keyboard.pressed(KeyCode::KeyD) {
        direction += *transform.right();
    }
    if keyboard.pressed(KeyCode::KeyA) {
        direction -= *transform.right();
    }
    if keyboard.pressed(KeyCode::Space) {
        direction += Vec3::Y;
    }
    if keyboard.pressed(KeyCode::ControlLeft) {
        direction -= Vec3::Y;
    }
    let boost = if keyboard.pressed(KeyCode::ShiftLeft) {
        4.0
    } else {
        1.0
    };
    transform.translation +=
        direction.normalize_or_zero() * control.speed * boost * time.delta_secs();
}

fn capture_frame(
    mut commands: Commands,
    keyboard: Res<ButtonInput<KeyCode>>,
    mut capture: ResMut<Capture>,
    mut exit: MessageWriter<AppExit>,
) {
    capture.frames += 1;
    if keyboard.just_pressed(KeyCode::F12) {
        commands
            .spawn(Screenshot::primary_window())
            .observe(save_to_disk("analysis/ssx-viewer.png"));
    }
    if capture.path.is_some() && capture.frames == 180 {
        commands
            .spawn(Screenshot::primary_window())
            .observe(save_to_disk(capture.path.clone().unwrap()));
        capture.requested = true;
    }
    if capture.requested && capture.frames == 300 {
        exit.write(AppExit::Success);
    }
}
