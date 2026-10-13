//! Original frontend animation rendered into the character selection panel.
use super::super::PreviewCamera;
use super::super::interface::{Menu, Screen};
use super::*;
use bevy::{
    camera::{RenderTarget, visibility::RenderLayers},
    render::render_resource::TextureFormat,
};

#[derive(Resource)]
pub struct PreviewImage(pub Handle<Image>);
#[derive(Component)]
pub struct PreviewMesh {
    source: character::Mesh,
    board: bool,
}

pub fn spawn(
    commands: &mut Commands,
    _data: &Data,
    _materials: &[BTreeMap<String, Handle<CourseMaterial>>],
    _meshes: &mut Assets<Mesh>,
    images: &mut Assets<Image>,
) {
    let image = images.add(Image::new_target_texture(
        640,
        640,
        TextureFormat::Rgba8Unorm,
        Some(TextureFormat::Rgba8UnormSrgb),
    ));
    commands.spawn((
        PreviewCamera,
        Camera3d::default(),
        Camera {
            order: -1,
            is_active: false,
            clear_color: Color::NONE.into(),
            ..default()
        },
        RenderTarget::Image(image.clone().into()),
        RenderLayers::layer(1),
        Msaa::Sample4,
        Projection::Perspective(PerspectiveProjection {
            fov: 45_f32.to_radians(),
            ..default()
        }),
        Transform::from_xyz(0.2, 1., 2.8).looking_at(Vec3::new(0.2, 1., 0.), Vec3::Y),
    ));
    commands.insert_resource(PreviewImage(image));
}

fn frontend_palette(data: &Data, rider: usize, time: f32) -> Vec<Mat4> {
    let r = &data.riders[rider];
    // Selection confirmations and result gestures need their own events.
    // Browsing the menu plays only the authored frontend idle.
    let track = r
        .frontend
        .iter()
        .find(|t| t.model == 0 && t.name == "FE_Z" && t.frames[0].rotations.len() == r.bones.len())
        .expect("Frontend body pose");
    let (root, angles, positions) = sample(track, time);
    let mut out: Vec<Mat4> = Vec::new();
    for (i, bone) in r.bones.iter().enumerate() {
        let p = positions
            .as_ref()
            .map_or(Vec3::from_array(bone.position), |p| p[i]);
        let local =
            Mat4::from_rotation_translation(angles[i], if bone.parent < 0 { root } else { p });
        out.push(if bone.parent < 0 {
            local
        } else {
            out[bone.parent as usize] * local
        });
    }
    // The board is displayed upright beside the rider, using its own original mesh.
    out.push(Mat4::from_scale_rotation_translation(
        Vec3::splat(0.7),
        Quat::from_rotation_y(-std::f32::consts::FRAC_PI_2),
        Vec3::new(70., 0., 100.),
    ));
    out
}

pub fn animate(
    mut commands: Commands,
    menu: Res<Menu>,
    library: Res<Library>,
    time: Res<Time>,
    mut last: Local<Option<(usize, usize, usize)>>,
    mut age: Local<f32>,
    mut meshes: ResMut<Assets<Mesh>>,
    mut camera: Single<&mut Camera, With<PreviewCamera>>,
    mut items: Query<(Entity, &PreviewMesh, &Mesh3d, &mut Transform)>,
) {
    let active = matches!(menu.screen, Screen::Rider | Screen::RiderSetup);
    camera.is_active = active;
    if !active {
        return;
    }
    let rider = if menu.screen == Screen::Rider {
        menu.cursor.min(7)
    } else {
        menu.rider
    };
    let board = menu.settings.boards[rider];
    let outfit = menu.settings.outfits[rider];
    let selection = (rider, board, outfit);
    if *last != Some(selection) {
        for (entity, _, handle, _) in &items {
            commands.entity(entity).despawn();
            meshes.remove(handle.0.id());
        }
        *last = Some(selection);
        *age = 0.;
        let p = frontend_palette(&library.data, rider, 0.);
        let style = ssx_rust::equipment::catalog()[rider].boards[board].style;
        for source in library.data.riders[rider]
            .meshes
            .iter()
            .filter(|m| m.material != "bord")
            .chain(&library.data.boards[style])
        {
            let (positions, normals) = skin(source, &p);
            let key = match source.material.as_str() {
                "bord" => format!("bord{}", board + 1),
                "suit" => format!("suit{}", outfit + 1),
                "boot" => format!("boot{}", outfit + 1),
                s => s.to_string(),
            };
            let mesh = Mesh::new(
                PrimitiveTopology::TriangleList,
                RenderAssetUsages::MAIN_WORLD | RenderAssetUsages::RENDER_WORLD,
            )
            .with_inserted_attribute(crate::lighting::PREVIOUS_POSITION, positions.clone())
            .with_inserted_attribute(Mesh::ATTRIBUTE_POSITION, positions)
            .with_inserted_attribute(Mesh::ATTRIBUTE_NORMAL, normals)
            .with_inserted_attribute(Mesh::ATTRIBUTE_COLOR, vec![[1.; 4]; source.vertices.len()])
            .with_inserted_attribute(
                Mesh::ATTRIBUTE_UV_0,
                source.vertices.iter().map(|v| v.uv).collect::<Vec<_>>(),
            )
            .with_inserted_indices(Indices::U32(source.indices.clone()));
            commands.spawn((
                PreviewMesh {
                    source: source.clone(),
                    board: source.material == "bord",
                },
                Mesh3d(meshes.add(mesh)),
                MeshMaterial3d(library.materials[rider][&key].clone()),
                RenderLayers::layer(1),
                bevy::camera::visibility::NoFrustumCulling,
                Transform::default(),
            ));
        }
    }
    *age += time.delta_secs();
    let p = frontend_palette(&library.data, rider, *age);
    for (_, item, handle, mut transform) in &mut items {
        // Keep the board stationary. The rider shows the original menu idle.
        transform.rotation = if item.board {
            Quat::IDENTITY
        } else {
            Quat::from_rotation_y(-std::f32::consts::FRAC_PI_2)
        };
        transform.translation = if item.board {
            Vec3::ZERO
        } else {
            Vec3::new(-0.25, 0., 0.)
        };
        if let Some(mut mesh) = meshes.get_mut(&handle.0) {
            let (positions, normals) = skin(&item.source, &p);
            let colours = normals
                .iter()
                .map(|n| {
                    let light = (0.65
                        + Vec3::from_array(*n).dot(Vec3::new(-0.3, 0.8, 0.5).normalize()) * 0.35)
                        .clamp(0.35, 1.);
                    [light, light, light, 1.]
                })
                .collect::<Vec<_>>();
            mesh.insert_attribute(crate::lighting::PREVIOUS_POSITION, positions.clone());
            mesh.insert_attribute(Mesh::ATTRIBUTE_POSITION, positions);
            mesh.insert_attribute(Mesh::ATTRIBUTE_NORMAL, normals);
            mesh.insert_attribute(Mesh::ATTRIBUTE_COLOR, colours);
        }
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    #[test]
    #[ignore = "requires original character assets"]
    fn original_frontend_poses_and_all_boards_are_finite() {
        let data = load(Path::new("extracted/DATA")).unwrap();
        for rider in 0..8 {
            for time in [0., 0.5, 1., 2.] {
                let p = frontend_palette(&data, rider, time);
                for mesh in data.riders[rider]
                    .meshes
                    .iter()
                    .chain(data.boards.iter().flatten())
                {
                    let (positions, normals) = skin(mesh, &p);
                    assert!(
                        positions
                            .iter()
                            .flatten()
                            .all(|v| v.is_finite() && v.abs() < 10.),
                        "Rider {rider} at {time}"
                    );
                    assert!(normals.iter().flatten().all(|v| v.is_finite()));
                }
            }
        }
    }
}
