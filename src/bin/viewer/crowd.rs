//! Original crowd model frames, batched per texture at the recovered 12 Hz cadence.
use super::{PlayWorld, interface::Menu};
use crate::{SurfaceMesh, Track, TrackGeometry, lighting::CourseMaterial};
use bevy::{
    asset::RenderAssetUsages, mesh::Indices, prelude::*, render::render_resource::PrimitiveTopology,
};
use std::collections::BTreeMap;
#[derive(Resource, Default)]
pub struct Crowds {
    definitions: Vec<ssx_rust::crowd::Crowd>,
    batches: BTreeMap<usize, Handle<Mesh>>,
    tick: u64,
    pub updates: u64,
    pub visible_spectators: usize,
    pub peak_spectators: usize,
}
fn to_mesh(s: SurfaceMesh) -> Mesh {
    Mesh::new(
        PrimitiveTopology::TriangleList,
        RenderAssetUsages::MAIN_WORLD | RenderAssetUsages::RENDER_WORLD,
    )
    .with_inserted_attribute(Mesh::ATTRIBUTE_POSITION, s.positions)
    .with_inserted_attribute(Mesh::ATTRIBUTE_NORMAL, s.normals)
    .with_inserted_attribute(Mesh::ATTRIBUTE_UV_0, s.uv)
    .with_inserted_attribute(Mesh::ATTRIBUTE_UV_1, s.light_uv)
    .with_inserted_attribute(Mesh::ATTRIBUTE_COLOR, s.colours)
    .with_inserted_indices(Indices::U32(s.indices))
}
pub fn spawn(
    commands: &mut Commands,
    track: &Track,
    handles: &[Handle<Image>],
    meshes: &mut Assets<Mesh>,
    materials: &mut Assets<CourseMaterial>,
) {
    let mut state = Crowds {
        definitions: ssx_rust::crowd::from_level(&track.level),
        ..default()
    };
    for c in &state.definitions {
        for frame in c.animations.iter().flatten() {
            for part in &track.level.prefabs[*frame] {
                let texture = track.level.material_textures[part.material];
                state.batches.entry(texture).or_insert_with(|| {
                    let mesh = meshes.add(to_mesh(SurfaceMesh {
                        positions: vec![[0.; 3]; 3],
                        normals: vec![[0., 1., 0.]; 3],
                        uv: vec![[0.; 2]; 3],
                        light_uv: vec![[0.; 2]; 3],
                        colours: vec![[1.; 4]; 3],
                        indices: vec![0, 1, 2],
                    }));
                    commands.spawn((
                        TrackGeometry,
                        Mesh3d(mesh.clone()),
                        MeshMaterial3d(materials.add(CourseMaterial {
                            texture: handles[texture].clone(),
                            lightmap: None,
                            parameters: Vec4::new(0., 0.1, 0., 0.),
                        })),
                        bevy::camera::visibility::NoFrustumCulling,
                    ));
                    mesh
                });
            }
        }
    }
    commands.insert_resource(state);
}
pub fn animate(
    track: Res<Track>,
    world: Res<PlayWorld>,
    menu: Res<Menu>,
    mut state: ResMut<Crowds>,
    mut meshes: ResMut<Assets<Mesh>>,
) {
    if world.session.phase == ssx_rust::playtest::Phase::Paused {
        return;
    }
    if world.session.phase == ssx_rust::playtest::Phase::Ready && menu.countdown <= 0. {
        return;
    }
    state.tick += 1;
    if state.tick % 5 != 1 {
        return;
    }
    let mut batches: BTreeMap<usize, SurfaceMesh> = state
        .batches
        .keys()
        .map(|k| (*k, SurfaceMesh::default()))
        .collect();
    let mut visible = 0;
    for crowd in &state.definitions {
        let instance = &track.level.instances[crowd.object];
        let m = Mat4::from_cols_array(&instance.transform);
        let origin = m.w_axis.truncate();
        if origin.distance_squared(world.session.position) > 20000f32.powi(2) {
            continue;
        }
        // Original near-distance layout: three rows, four people, two-metre spacing.
        let right = m.x_axis.truncate().with_z(0.);
        let depth = m.z_axis.truncate();
        for row in 0..3 {
            for column in 0..4 {
                let seed = crowd.object as u64 * 17 + row * 13 + column * 7;
                let variant =
                    (seed / 3 + (state.tick / 5 + seed) / 8) as usize % crowd.animations.len();
                let prefab = crowd.animations[variant][ssx_rust::crowd::frame(state.tick, seed)];
                let position = origin + m.x_axis.truncate() * ((column as f32 - 1.5) * 200.)
                    - depth * (row as f32 * crowd.row_spacing);
                let pose = Mat4::from_cols(
                    right.extend(0.),
                    Vec3::Z.extend(0.),
                    (-depth.with_z(0.)).extend(0.),
                    position.extend(1.),
                );
                visible += 1;
                for part in &track.level.prefabs[prefab] {
                    let transform = pose
                        * part
                            .transform
                            .map(|m| Mat4::from_cols_array(&m))
                            .unwrap_or(Mat4::IDENTITY);
                    let normals = transform.inverse().transpose();
                    let b = batches
                        .get_mut(&track.level.material_textures[part.material])
                        .unwrap();
                    let base = b.positions.len() as u32;
                    for (p, n) in part.positions.iter().zip(&part.normals) {
                        b.positions.push(
                            crate::world(
                                transform.transform_point3(Vec3::from_array(*p)).to_array(),
                            )
                            .to_array(),
                        );
                        let normal = normals
                            .transform_vector3(Vec3::from_array(*n))
                            .normalize_or_zero();
                        b.normals.push(
                            crate::world(normal.to_array())
                                .normalize_or_zero()
                                .to_array(),
                        );
                        b.colours.push(instance.lighting.colour(normal.to_array()));
                        b.light_uv.push([0.; 2]);
                    }
                    b.uv.extend_from_slice(&part.uv);
                    b.indices.extend(part.indices.iter().map(|i| base + i));
                }
            }
        }
    }
    for (texture, mut b) in batches {
        if b.positions.is_empty() {
            b = SurfaceMesh {
                positions: vec![[0.; 3]; 3],
                normals: vec![[0., 1., 0.]; 3],
                uv: vec![[0.; 2]; 3],
                light_uv: vec![[0.; 2]; 3],
                colours: vec![[0.; 4]; 3],
                indices: vec![0, 1, 2],
            };
        }
        if let Some(mut mesh) = meshes.get_mut(&state.batches[&texture]) {
            *mesh = to_mesh(b);
        }
    }
    state.updates += 1;
    state.visible_spectators = visible;
    state.peak_spectators = state.peak_spectators.max(visible);
}
