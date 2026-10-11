use super::play::interface::Menu;
use bevy::{
    anti_alias::taa::TemporalAntiAliasing,
    core_pipeline::prepass::{DepthPrepass, MotionVectorPrepass},
    prelude::*,
    render::{
        camera::{MipBias, TemporalJitter},
        renderer::RenderAdapterInfo,
    },
    window::{Monitor, MonitorSelection, OnMonitor, PresentMode, VideoModeSelection, WindowMode},
};
use ssx_rust::front_end::{DisplayMode, VideoSettings};

#[derive(Resource)]
pub struct Graphics {
    pub gpu: String,
    pub resolutions: Vec<[u32; 2]>,
    pub applied: Option<VideoSettings>,
}
impl Default for Graphics {
    fn default() -> Self {
        Self {
            gpu: "Detecting...".into(),
            resolutions: vec![
                [1280, 720],
                [1440, 900],
                [1600, 900],
                [1920, 1080],
                [2560, 1440],
                [3840, 2160],
            ],
            applied: None,
        }
    }
}
pub fn plugin(app: &mut App) {
    app.init_resource::<Graphics>()
        .add_systems(PostUpdate, (apply, history).chain());
}
fn apply(
    mut commands: Commands,
    mut graphics: ResMut<Graphics>,
    mut menu: Option<ResMut<Menu>>,
    adapter: Option<Res<RenderAdapterInfo>>,
    keys: Res<ButtonInput<KeyCode>>,
    mut windows: Query<(&mut Window, Option<&OnMonitor>)>,
    monitors: Query<(Entity, &Monitor)>,
    cameras: Query<
        (Entity, Option<&TemporalAntiAliasing>),
        (With<Camera3d>, Without<crate::play::PreviewCamera>),
    >,
    mut ui_scale: ResMut<UiScale>,
) {
    if let Some(adapter) = adapter {
        let name = format!("{} ({:?})", adapter.name, adapter.backend);
        if graphics.gpu != name {
            println!("GPU renderer: {name}, {:?}", adapter.device_type);
            graphics.gpu = name;
        }
    }
    let Some(ref mut menu) = menu else {
        return;
    };
    let Ok((mut window, monitor_id)) = windows.single_mut() else {
        return;
    };
    ui_scale.0 = (window.width() / 1440.)
        .min(window.height() / 900.)
        .clamp(0.4, 3.);
    let monitor = monitor_id
        .and_then(|m| monitors.get(m.0).ok())
        .or_else(|| monitors.iter().next());
    if let Some((_, monitor)) = monitor {
        let mut sizes: Vec<_> = monitor
            .video_modes
            .iter()
            .map(|m| m.physical_size.to_array())
            .filter(|s| s[0] >= 800 && s[1] >= 600)
            .collect();
        if menu.settings.video.mode != DisplayMode::Fullscreen {
            sizes.extend([[1280, 720], [1440, 900], [1600, 900], [1920, 1080]]);
        }
        sizes.sort_unstable();
        sizes.dedup();
        if !sizes.is_empty() {
            graphics.resolutions = sizes;
        }
    }
    if keys.just_pressed(KeyCode::F11) {
        menu.settings.video.mode = if menu.settings.video.mode == DisplayMode::Windowed {
            DisplayMode::Borderless
        } else {
            DisplayMode::Windowed
        };
        menu.refresh();
    }
    if keys.just_pressed(KeyCode::F10) {
        menu.settings.video = VideoSettings::default();
        menu.refresh();
    }
    let mut video = menu.settings.video;
    if graphics.applied == Some(video) {
        return;
    }
    let mode = match video.mode {
        DisplayMode::Windowed => WindowMode::Windowed,
        DisplayMode::Borderless => WindowMode::BorderlessFullscreen(MonitorSelection::Current),
        DisplayMode::Fullscreen => {
            let Some((id, monitor)) = monitor else {
                return;
            };
            let selected = monitor
                .video_modes
                .iter()
                .filter(|m| m.physical_size.to_array() == video.resolution)
                .max_by_key(|m| m.refresh_rate_millihertz)
                .or_else(|| {
                    monitor
                        .video_modes
                        .iter()
                        .filter(|m| m.physical_size == monitor.physical_size())
                        .max_by_key(|m| m.refresh_rate_millihertz)
                });
            let Some(selected) = selected else {
                menu.error = "No fullscreen mode is available. Use borderless fullscreen.".into();
                menu.settings.video.mode = DisplayMode::Borderless;
                menu.refresh();
                return;
            };
            video.resolution = selected.physical_size.to_array();
            WindowMode::Fullscreen(
                MonitorSelection::Entity(id),
                VideoModeSelection::Specific(*selected),
            )
        }
    };
    window.mode = mode;
    if video.mode == DisplayMode::Windowed {
        window
            .resolution
            .set_physical_resolution(video.resolution[0], video.resolution[1]);
    }
    window.present_mode = if video.vsync {
        PresentMode::AutoVsync
    } else {
        PresentMode::AutoNoVsync
    };
    for (entity, taa) in &cameras {
        let mut e = commands.entity(entity);
        if video.bloom {
            e.insert(bevy::post_process::bloom::Bloom {
                intensity: 0.12,
                ..default()
            });
        } else {
            e.remove::<(bevy::post_process::bloom::Bloom, bevy::camera::Hdr)>();
        }
        if video.taa {
            e.insert((Msaa::Off, TemporalAntiAliasing::default()));
        } else if taa.is_some() {
            e.remove::<(
                TemporalAntiAliasing,
                TemporalJitter,
                MipBias,
                DepthPrepass,
                MotionVectorPrepass,
            )>()
            .insert(Msaa::Sample4);
        }
    }
    menu.settings.video = video;
    if graphics.applied.is_some() && !menu.automated() {
        if let Err(error) = menu.settings.save() {
            menu.error = format!("Cannot save video options: {error}");
        }
    }
    graphics.applied = Some(video);
    menu.refresh();
}
fn history(
    mut previous: Local<Option<(Vec3, Quat, String, usize)>>,
    track: Res<super::Track>,
    menu: Option<Res<Menu>>,
    mut camera: Query<
        (&Transform, &mut TemporalAntiAliasing),
        (With<Camera3d>, Without<crate::play::PreviewCamera>),
    >,
) {
    let mode = menu.as_ref().map_or(0, |m| m.settings.camera);
    for (pose, mut taa) in &mut camera {
        if previous.as_ref().is_none_or(|(p, r, t, m)| {
            p.distance(pose.translation) > 30.
                || r.dot(pose.rotation).abs() < 0.75
                || *t != track.name
                || *m != mode
        }) {
            taa.reset = true;
        }
        *previous = Some((pose.translation, pose.rotation, track.name.clone(), mode));
    }
}
