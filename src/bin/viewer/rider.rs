//! CPU skinning of the original MPF vertices and ADF tracks.
use crate::lighting::CourseMaterial;
use bevy::{
    asset::RenderAssetUsages, mesh::Indices, prelude::*, render::render_resource::PrimitiveTopology,
};
use ssx_rust::{Result, animation, archive, character, texture};
use std::{collections::BTreeMap, path::Path};
#[path = "rider_preview.rs"]
pub(super) mod preview;

pub const NAMES: [&str; 8] = [
    "hiro", "kaori", "jurgen", "mac", "moby", "zoe", "jp", "elise",
];
pub struct Rider {
    bones: Vec<character::Bone>,
    meshes: Vec<character::Mesh>,
    textures: BTreeMap<String, texture::Texture>,
    frontend: Vec<animation::Track>,
}
pub struct Data {
    riders: Vec<Rider>,
    tracks: BTreeMap<usize, Vec<animation::Track>>,
    boards: Vec<Vec<character::Mesh>>,
}
#[derive(Component)]
pub struct Skin {
    source: character::Mesh,
    pub rider: usize,
    was_visible: bool,
    board_part: Option<usize>,
    board_style: usize,
}
#[derive(Component)]
pub struct CharacterRoot {
    pub rider: usize,
}
#[derive(Resource)]
pub struct Library {
    pub data: Data,
    materials: Vec<BTreeMap<String, Handle<CourseMaterial>>>,
}

fn member(bytes: &[u8], suffix: &str) -> Result<Vec<u8>> {
    let members = archive::index(bytes)?;
    let m = members
        .iter()
        .find(|m| m.path.to_ascii_lowercase().ends_with(suffix))
        .ok_or_else(|| format!("Missing character asset {suffix}"))?;
    archive::extract(bytes, m)
}
pub fn load(root: &Path) -> Result<Data> {
    let read = |s: &str| std::fs::read(root.join(s)).map_err(|e| e.to_string());
    let models = read("CHAR/MDLPS2.BIG")?;
    let textures = read("CHAR/TEXPS2.BIG")?;
    let anims = read("CHAR/ANM.BIG")?;
    let board_models = character::decode(&member(&models, "/board.mpf")?)?;
    let boards: Vec<_> = ["Bx", "Fr", "Al"]
        .iter()
        .map(|name| {
            board_models
                .iter()
                .find(|m| m.name == *name)
                .expect("Original board style")
                .meshes
                .clone()
        })
        .collect();
    let mut riders = Vec::new();
    for (index, name) in NAMES.into_iter().enumerate() {
        let bodies = character::decode(&member(&models, &format!("/{name}_body_lo.mpf"))?)?;
        let heads = character::decode(&member(&models, &format!("/{name}_head_lo.mpf"))?)?;
        let bones = bodies
            .iter()
            .find(|m| !m.bones.is_empty())
            .ok_or("Missing rider skeleton")?
            .bones
            .clone();
        let mut meshes = Vec::new();
        for model_name in ["BodyBasic1200", "GloveBasic1200", "HeadBasic1200"] {
            let model = bodies
                .iter()
                .chain(&heads)
                .find(|m| m.name == model_name)
                .ok_or_else(|| format!("{name}: missing {model_name}"))?;
            meshes.extend(model.meshes.clone());
        }
        meshes.extend(boards[0].clone());
        let mut maps = BTreeMap::new();
        for (material, file) in [
            ("suit", format!("{name}1_suit")),
            ("boot", format!("{name}1_boot")),
            ("bord", format!("{name}1_bord")),
            ("face", format!("{name}_face")),
            ("hair", format!("{name}_hair")),
            ("head", format!("{name}_head")),
            ("helm", format!("{name}_helm")),
        ] {
            let t = texture::decode(&member(&textures, &format!("/{file}.ssh"))?)?
                .into_iter()
                .next()
                .ok_or("Empty character texture")?;
            maps.insert(material.to_string(), t);
        }
        for mesh in &meshes {
            if !maps.contains_key(&mesh.material) {
                return Err(format!(
                    "{name}: unknown character material {}",
                    mesh.material
                ));
            }
        }
        for (material, count) in [("suit", 4), ("boot", 4), ("bord", 11)] {
            for variant in 1..=count {
                let t = texture::decode(&member(
                    &textures,
                    &format!("/{name}{variant}_{material}.ssh"),
                )?)?
                .into_iter()
                .next()
                .ok_or("Empty equipment texture")?;
                maps.insert(format!("{material}{variant}"), t);
            }
        }
        let fe = ["hr", "kr", "jg", "mc", "mb", "z", "jp", "el"][index];
        let frontend = animation::decode(&member(&anims, &format!("/{fe}feanim.adf"))?)?;
        riders.push(Rider {
            bones,
            meshes,
            textures: maps,
            frontend,
        });
    }
    let mut tracks = BTreeMap::new();
    for (bank, name) in [
        (0, "cmanim"),
        (1, "bxanim"),
        (2, "exanim"),
        (3, "franim"),
        (4, "genflanim"),
    ] {
        tracks.insert(
            bank,
            animation::decode(&member(&anims, &format!("/{name}.adf"))?)?,
        );
    }
    println!(
        "Loaded {} original rider models and {} animation tracks",
        riders.len(),
        tracks.values().map(Vec::len).sum::<usize>()
    );
    Ok(Data {
        riders,
        tracks,
        boards,
    })
}
// ADF uses clockwise angles. This pose adapter is visually checked against the
// board and ankle positions. The original VU matrix implementation is unported.
fn rotation(r: [f32; 3]) -> Quat {
    Quat::from_euler(EulerRot::ZYX, -r[2], -r[1], -r[0])
}
fn sample(track: &animation::Track, time: f32) -> (Vec3, Vec<Quat>, Option<Vec<Vec3>>) {
    let t = (time * track.fps as f32).rem_euclid(track.frames.len() as f32);
    let a = &track.frames[t.floor() as usize];
    let b = &track.frames[(t.floor() as usize + 1) % track.frames.len()];
    // 0x00147670 does not interpolate tracks that include bone translations.
    let fraction = if a.bone_positions.is_some() {
        0.
    } else {
        t.fract()
    };
    (
        Vec3::from_array(a.position).lerp(Vec3::from_array(b.position), fraction),
        a.rotations
            .iter()
            .zip(&b.rotations)
            .map(|(&a, &b)| rotation(a).slerp(rotation(b), fraction))
            .collect(),
        a.bone_positions
            .as_ref()
            .map(|p| p.iter().copied().map(Vec3::from_array).collect()),
    )
}
fn palette(data: &Data, rider: usize, bank: usize, clip: usize, time: f32) -> Vec<Mat4> {
    let body = data.tracks[&bank]
        .iter()
        .find(|t| t.header == clip + 1)
        .unwrap();
    let board = data.tracks[&bank]
        .iter()
        .find(|t| t.header == clip + 2)
        .unwrap();
    let (root, angles, positions) = sample(body, time);
    let mut out = Vec::new();
    for (i, bone) in data.riders[rider].bones.iter().enumerate() {
        let translation = positions
            .as_ref()
            .map_or(Vec3::from_array(bone.position), |p| p[i]);
        let local = Mat4::from_rotation_translation(
            angles[i],
            if bone.parent < 0 { root } else { translation },
        );
        out.push(if bone.parent < 0 {
            local
        } else {
            out[bone.parent as usize] * local
        });
    }
    let (position, angles, _) = sample(board, time);
    out.push(Mat4::from_rotation_translation(angles[0], position));
    out
}
fn skin(source: &character::Mesh, palette: &[Mat4]) -> (Vec<[f32; 3]>, Vec<[f32; 3]>) {
    let mut positions = Vec::new();
    let mut normals = Vec::new();
    for vertex in &source.vertices {
        let p = vertex.influences.iter().fold(Vec3::ZERO, |p, w| {
            p + palette[w.bone].transform_point3(Vec3::from_array(w.position)) * w.weight
        });
        positions.push(super::super::world(p.to_array()).to_array());
        let n = palette[vertex.normal_bone].transform_vector3(Vec3::from_array(vertex.normal));
        normals.push(
            super::super::world(n.to_array())
                .normalize_or_zero()
                .to_array(),
        );
    }
    (positions, normals)
}
pub fn spawn(
    commands: &mut Commands,
    data: Data,
    meshes: &mut Assets<Mesh>,
    materials: &mut Assets<CourseMaterial>,
    images: &mut Assets<Image>,
) {
    let mut all_handles = Vec::new();
    for (index, rider) in data.riders.iter().enumerate() {
        let mut handles = BTreeMap::new();
        for (name, t) in &rider.textures {
            let image = images.add(crate::textures::image(t));
            handles.insert(
                name.clone(),
                materials.add(CourseMaterial {
                    texture: image,
                    lightmap: None,
                    parameters: Vec4::new(0., 0.3, 0., 0.),
                }),
            );
        }
        let palette = palette(&data, index, 1, 651, 0.);
        commands
            .spawn((
                CharacterRoot { rider: index },
                Transform::default(),
                Visibility::Hidden,
            ))
            .with_children(|root| {
                let mut board_part = 0;
                for source in &rider.meshes {
                    let (positions, normals) = skin(source, &palette);
                    let mesh = Mesh::new(
                        PrimitiveTopology::TriangleList,
                        RenderAssetUsages::MAIN_WORLD | RenderAssetUsages::RENDER_WORLD,
                    )
                    .with_inserted_attribute(crate::lighting::PREVIOUS_POSITION, positions.clone())
                    .with_inserted_attribute(Mesh::ATTRIBUTE_POSITION, positions)
                    .with_inserted_attribute(Mesh::ATTRIBUTE_NORMAL, normals)
                    .with_inserted_attribute(
                        Mesh::ATTRIBUTE_UV_0,
                        source.vertices.iter().map(|v| v.uv).collect::<Vec<_>>(),
                    )
                    .with_inserted_indices(Indices::U32(source.indices.clone()));
                    root.spawn((
                        Skin {
                            source: source.clone(),
                            rider: index,
                            was_visible: false,
                            board_part: if source.material == "bord" {
                                let part = board_part;
                                board_part += 1;
                                Some(part)
                            } else {
                                None
                            },
                            board_style: 0,
                        },
                        Mesh3d(meshes.add(mesh)),
                        MeshMaterial3d(handles[&source.material].clone()),
                        // A fixed bound covers the skinned rider and board in
                        // every pose. Bevy can then cull invisible mesh uploads.
                        bevy::camera::primitives::Aabb {
                            center: Vec3::new(0., 0.8, 0.).into(),
                            half_extents: Vec3::splat(3.).into(),
                        },
                    ));
                }
            });
        all_handles.push(handles);
    }
    preview::spawn(commands, &data, &all_handles, meshes, images);
    commands.insert_resource(Library {
        data,
        materials: all_handles,
    });
}

pub fn appearance(
    world: Res<super::PlayWorld>,
    menu: Res<super::interface::Menu>,
    library: Res<Library>,
    mut meshes: ResMut<Assets<Mesh>>,
    mut skins: Query<(&mut Skin, &Mesh3d, &mut MeshMaterial3d<CourseMaterial>)>,
) {
    for (mut skin, mesh, mut material) in &mut skins {
        let selected = skin.rider == world.rider;
        let board = if selected {
            menu.settings.boards[skin.rider]
        } else {
            0
        };
        let outfit = if selected {
            menu.settings.outfits[skin.rider]
        } else {
            0
        };
        let style = ssx_rust::equipment::catalog()[skin.rider].boards[board].style;
        let key = match skin.source.material.as_str() {
            "bord" => format!("bord{}", board + 1),
            "suit" => format!("suit{}", outfit + 1),
            "boot" => format!("boot{}", outfit + 1),
            other => other.to_string(),
        };
        material.set_if_neq(MeshMaterial3d(library.materials[skin.rider][&key].clone()));
        if let Some(part) = skin.board_part
            && style != skin.board_style
        {
            skin.source = library.data.boards[style][part].clone();
            skin.board_style = style;
            skin.was_visible = false;
            if let Some(mut mesh) = meshes.get_mut(&mesh.0) {
                let p = palette(&library.data, skin.rider, 1, 651, 0.);
                let (positions, normals) = self::skin(&skin.source, &p);
                mesh.insert_attribute(Mesh::ATTRIBUTE_POSITION, positions.clone());
                mesh.insert_attribute(crate::lighting::PREVIOUS_POSITION, positions);
                mesh.insert_attribute(Mesh::ATTRIBUTE_NORMAL, normals);
                mesh.insert_attribute(
                    Mesh::ATTRIBUTE_COLOR,
                    vec![[1.; 4]; skin.source.vertices.len()],
                );
                mesh.insert_attribute(
                    Mesh::ATTRIBUTE_UV_0,
                    skin.source
                        .vertices
                        .iter()
                        .map(|v| v.uv)
                        .collect::<Vec<_>>(),
                );
                mesh.insert_indices(Indices::U32(skin.source.indices.clone()));
            }
        }
    }
}
pub fn animate(
    world: Res<super::PlayWorld>,
    menu: Res<super::interface::Menu>,
    time: Res<Time<Fixed>>,
    frame: Res<Time>,
    mut landing_spin: Local<f32>,
    library: Res<Library>,
    probes: Res<crate::lighting::Probes>,
    mut meshes: ResMut<Assets<Mesh>>,
    mut skins: Query<(&mut Skin, &Mesh3d, &ViewVisibility)>,
    mut roots: Query<(&CharacterRoot, &mut Transform, &mut Visibility)>,
) {
    // State-to-clip selection remains a host adapter.
    let _span = crate::performance::span("riders");
    if !world.session.grounded {
        *landing_spin = (world.tricks.spin + 180.).rem_euclid(360.) - 180.;
    } else {
        *landing_spin *= (-frame.delta_secs() / 0.075).exp();
        if landing_spin.abs() < 0.1 {
            *landing_spin = 0.;
        }
    }
    // All sampled motion comes from the disc.
    let (bank, clip) = if world.session.phase == super::Phase::Ready {
        gate_clip(world.session.board_style)
    } else if world.session.shove.side != 0 {
        shove_clip(&world.session)
    } else if let Some(g) = world.tricks.grab {
        ssx_rust::tricks::GRABS[g].clips[world.tricks.tweak as usize]
    } else {
        (
            1,
            if !world.session.grounded {
                360
            } else if world.controls.brake {
                519
            } else if world.session.ground_inputs.crouch.value > 0.1 {
                if world.controls.steer < 0. { 660 } else { 669 }
            } else if world.controls.steer < 0. {
                642
            } else {
                651
            },
        )
    };
    let track = library.data.tracks[&bank]
        .iter()
        .find(|t| t.header == clip + 1)
        .unwrap();
    let t = if world.session.phase == super::Phase::Ready {
        gate_fraction(world.session.start_rock.offset) * (track.frames.len() - 1) as f32
            / track.fps as f32
    } else if world.session.shove.side != 0 {
        world.session.shove.fraction() * (track.frames.len() - 1) as f32 / track.fps as f32
    } else if world.tricks.grab.is_some() {
        world
            .tricks
            .grab_time
            .min((track.frames.len() - 1) as f32 / track.fps as f32)
    } else if !world.session.grounded || world.controls.brake {
        world.session.elapsed
    } else {
        world.controls.steer.abs() * (track.frames.len() - 1) as f32 / track.fps as f32
    };
    let palettes: Vec<_> = (0..8)
        .map(|i| {
            if i == world.rider {
                if world.session.recovery.is_some() {
                    return recovery_palette(&library.data, i, &world.session);
                }
                if world.session.phase == super::Phase::Finished
                    && world.session.grounded
                    && world.session.recovery.is_none()
                    && world.session.finish_elapsed >= 3.5
                {
                    return finish_palette(
                        &library.data,
                        i,
                        &world.session,
                        world
                            .opponents
                            .iter()
                            .filter(|o| {
                                o.session.phase == super::Phase::Finished
                                    && o.session.elapsed < world.session.elapsed
                            })
                            .count()
                            < 4,
                    );
                }
                palette(&library.data, i, bank, clip, t)
            } else {
                let opponent = &world.opponents[if i < world.rider { i } else { i - 1 }];
                if opponent.session.recovery.is_some() {
                    return recovery_palette(&library.data, i, &opponent.session);
                }
                if opponent.session.phase == super::Phase::Finished
                    && opponent.session.grounded
                    && opponent.session.recovery.is_none()
                    && opponent.session.finish_elapsed >= 3.5
                {
                    let rank = world
                        .opponents
                        .iter()
                        .filter(|o| {
                            o.session.phase == super::Phase::Finished
                                && o.session.elapsed < opponent.session.elapsed
                        })
                        .count()
                        + usize::from(
                            world.session.phase == super::Phase::Finished
                                && world.session.elapsed < opponent.session.elapsed,
                        );
                    return finish_palette(&library.data, i, &opponent.session, rank < 4);
                }
                let (bank, clip) = if opponent.session.phase == super::Phase::Ready {
                    gate_clip(opponent.session.board_style)
                } else if opponent.steer < 0. {
                    (1, 642)
                } else {
                    (1, 651)
                };
                let track = library.data.tracks[&bank]
                    .iter()
                    .find(|t| t.header == clip + 1)
                    .unwrap();
                palette(
                    &library.data,
                    i,
                    bank,
                    clip,
                    (if opponent.session.phase == super::Phase::Ready {
                        gate_fraction(opponent.session.start_rock.offset)
                    } else {
                        opponent.steer.abs()
                    }) * (track.frames.len() - 1) as f32
                        / track.fps as f32,
                )
            }
        })
        .collect();
    let mut lights = [ssx_rust::lighting::Lighting::default(); 8];
    let mut rotations = [Quat::IDENTITY; 8];
    for (root, mut transform, mut visible) in &mut roots {
        *visible = if root.rider != world.rider && menu.event != ssx_rust::front_end::Event::Race {
            Visibility::Hidden
        } else {
            Visibility::Inherited
        };
        let session = if root.rider == world.rider {
            &world.session
        } else {
            &world.opponents[if root.rider < world.rider {
                root.rider
            } else {
                root.rider - 1
            }]
            .session
        };
        let previous = if root.rider == world.rider {
            world.previous_player
        } else {
            world.opponents[if root.rider < world.rider {
                root.rider
            } else {
                root.rider - 1
            }]
            .previous_position
        };
        transform.translation = super::super::world(
            previous
                .lerp(session.position, time.overstep_fraction())
                .to_array(),
        );
        transform.rotation = Transform::IDENTITY
            .looking_to(
                super::super::world(session.forward.to_array()),
                super::super::world(session.normal.to_array()).normalize_or_zero(),
            )
            .rotation;
        if session.phase == super::Phase::Ready {
            let rock = session.start_rock.offset;
            transform.translation += super::super::world((session.forward * rock * 32.).to_array());
        }
        if root.rider == world.rider
            && session.phase != super::Phase::Finished
            && session.recovery.is_none()
        {
            // Switch remains a physics/scoring stance. Settle the visual pose toward travel.
            transform.rotation *= Quat::from_rotation_y(landing_spin.to_radians());
            if !session.grounded {
                transform.rotation *= Quat::from_rotation_x(world.tricks.flip.to_radians());
            }
        }
        lights[root.rider] = probes.sample(session.position);
        rotations[root.rider] = transform.rotation;
    }
    for (mut source, handle, visible) in &mut skins {
        if !visible.get() {
            source.was_visible = false;
            continue;
        }
        if let Some(mut mesh) = meshes.get_mut(&handle.0) {
            let (positions, normals) = skin(&source.source, &palettes[source.rider]);
            if !source.was_visible {
                mesh.insert_attribute(crate::lighting::PREVIOUS_POSITION, positions.clone());
            } else if let Some(previous) = mesh.attribute(Mesh::ATTRIBUTE_POSITION).cloned() {
                mesh.insert_attribute(crate::lighting::PREVIOUS_POSITION, previous);
            }
            source.was_visible = true;
            mesh.insert_attribute(Mesh::ATTRIBUTE_POSITION, positions);
            let colours = normals
                .iter()
                .map(|n| {
                    let n = rotations[source.rider] * Vec3::from_array(*n);
                    lights[source.rider]
                        .colour([n.x, -n.z, n.y])
                        .map(|c| c.min(1.))
                })
                .collect::<Vec<_>>();
            mesh.insert_attribute(Mesh::ATTRIBUTE_NORMAL, normals);
            mesh.insert_attribute(Mesh::ATTRIBUTE_COLOR, colours);
        }
    }
}

fn recovery_palette(data: &Data, rider: usize, session: &super::Session) -> Vec<Mat4> {
    let recovery = session.recovery.unwrap();
    let style = session.board_style.clamp(0, 2) as usize;
    // The original common CC_R roll includes the descent and return to standing.
    // CC_B/CC_F depend on the original crash-body rotation, which is not ported.
    // Clip choice and duration remain host adapters.
    let (bank, clip, fraction) = if recovery.quality == ssx_rust::landing::Quality::Bail {
        (0, 9, recovery.fraction())
    } else {
        ([1, 3, 2][style], 108, recovery.fraction())
    };
    let track = data.tracks[&bank]
        .iter()
        .find(|t| t.header == clip + 1)
        .unwrap();
    palette(
        data,
        rider,
        bank,
        clip,
        fraction * (track.frames.len() - 1) as f32 / track.fps as f32,
    )
}

fn finish_palette(data: &Data, rider: usize, session: &super::Session, happy: bool) -> Vec<Mat4> {
    // 0x0013d068: settle (state EC), result reaction, then follow-up loop.
    // 0x279548 / 0x279598 hold the state list and per-rider eligibility masks.
    const MASKS: [u32; 8] = [
        1015743, 1015787, 1015739, 1048575, 1048575, 1015791, 1048575, 1015787,
    ];
    const CLIPS: [(usize, usize); 16] = [
        (112, 120),
        (160, 168),
        (64, 72),
        (80, 88),
        (96, 104),
        (128, 136),
        (144, 152),
        (176, 184),
        (216, 224),
        (192, 280),
        (200, 288),
        (208, 296),
        (232, 240),
        (248, 256),
        (272, 264),
        (304, 312),
    ];
    let duration = |bank, clip| {
        let t = data.tracks[&bank]
            .iter()
            .find(|t| t.header == clip + 1)
            .unwrap();
        (t.frames.len() - 1) as f32 / t.fps as f32
    };
    let (bank, settle) = [(1, 153), (3, 153), (2, 156)][session.board_style.clamp(0, 2) as usize];
    let mut time = session.finish_elapsed - 3.5;
    if time < duration(bank, settle) {
        return palette(data, rider, bank, settle, time);
    }
    time -= duration(bank, settle);
    let choices: Vec<_> = (if happy { 0..7 } else { 7..16 })
        .filter(|i| MASKS[rider] & (1 << i) != 0)
        .collect();
    let selected = choices[(session.resets as usize + rider) % choices.len()];
    let (reaction, idle) = CLIPS[selected];
    if time < duration(4, reaction) {
        palette(data, rider, 4, reaction, time)
    } else {
        palette(data, rider, 4, idle, time - duration(4, reaction))
    }
}

// Animation state 2 -> action 57 at 0x2ac2d8. Packed style entries at
// 0x279920 + 57*6 select the original start-gate body and board tracks.
fn gate_clip(style: i32) -> (usize, usize) {
    [(1, 189), (3, 189), (2, 201)][style.clamp(0, 2) as usize]
}
fn gate_fraction(offset: f32) -> f32 {
    (0.5 - offset * 0.5).clamp(0., 1.)
}
fn shove_clip(session: &super::Session) -> (usize, usize) {
    // 0x00111af8 -> states 0x3a/0x3b -> actions 108/111.
    let left = (session.shove.side < 0)
        ^ session.riding_switch
        ^ (session.rider_stats.preferred_stance != 0);
    let style = session.board_style.clamp(0, 2) as usize;
    if left {
        [(1, 444), (3, 447), (2, 432)][style]
    } else {
        [(1, 453), (3, 456), (2, 447)][style]
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    #[test]
    #[ignore = "requires the original disc"]
    fn all_riders_and_grabs_skin_to_finite_geometry() {
        let data = load(Path::new("extracted/DATA")).unwrap();
        let fall = data.tracks[&0].iter().find(|t| t.header == 10).unwrap();
        let start = fall.frames.first().unwrap().position[2];
        let low = fall
            .frames
            .iter()
            .map(|f| f.position[2])
            .fold(f32::INFINITY, f32::min);
        assert!(
            start - low > 50.,
            "The wipeout must visibly lower the rider"
        );
        assert!(
            (fall.frames.last().unwrap().position[2] - start).abs() < 2.,
            "The roll must return to standing"
        );
        let mut clips = vec![
            (0, 9),
            (3, 108),
            (2, 108),
            (1, 105),
            (1, 108),
            (1, 360),
            (1, 519),
            (1, 642),
            (1, 651),
            (1, 660),
            (1, 669),
        ];
        clips.extend(ssx_rust::tricks::GRABS.iter().flat_map(|g| g.clips));
        clips.extend((64..320).step_by(8).map(|clip| (4, clip)));
        clips.extend([(1, 153), (3, 153), (2, 156)]);
        clips.extend([
            (1, 189),
            (3, 189),
            (2, 201),
            (1, 444),
            (3, 447),
            (2, 432),
            (1, 453),
            (3, 456),
            (2, 447),
        ]);
        clips.sort_unstable();
        clips.dedup();
        for rider in 0..8 {
            for &(bank, clip) in &clips {
                let track = data.tracks[&bank]
                    .iter()
                    .find(|t| t.header == clip + 1)
                    .unwrap();
                for frame in [0, track.frames.len() / 2, track.frames.len() - 1] {
                    let palette =
                        palette(&data, rider, bank, clip, frame as f32 / track.fps as f32);
                    for mesh in &data.riders[rider].meshes {
                        let (positions, normals) = skin(mesh, &palette);
                        assert!(
                            positions
                                .iter()
                                .flatten()
                                .all(|v| v.is_finite() && v.abs() < 20.),
                            "{} bank {bank} clip {clip} frame {frame}",
                            NAMES[rider]
                        );
                        assert!(normals.iter().flatten().all(|v| v.is_finite()));
                        assert!(
                            positions.iter().all(|p| (Vec3::from_array(*p)
                                - Vec3::new(0., 0.8, 0.))
                            .abs()
                            .max_element()
                                <= 3.),
                            "Rider {rider}, bank {bank}, clip {clip} exceeds the culling bound"
                        );
                    }
                }
            }
        }
    }
}
