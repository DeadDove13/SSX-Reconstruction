//! CPU skinning of the original MPF vertices and ADF tracks.
use crate::lighting::CourseMaterial;
use bevy::{
    asset::RenderAssetUsages, mesh::Indices, prelude::*, render::render_resource::PrimitiveTopology,
};
use ssx_rust::{Result, animation, archive, character, texture};
use std::{collections::BTreeMap, path::Path};
#[path = "rider_motion.rs"]
mod motion;
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
    for (bank, name) in ssx_rust::animation_actions::BANKS.iter().enumerate() {
        tracks.insert(
            bank,
            animation::decode(&member(&anims, &format!("/{name}"))?)?,
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
    // The PS2 path steps translated tracks. Interpolate local translations too
    // so character-specific gestures remain smooth at modern render rates.
    let fraction = t.fract();
    (
        Vec3::from_array(a.position).lerp(Vec3::from_array(b.position), fraction),
        a.rotations
            .iter()
            .zip(&b.rotations)
            .map(|(&a, &b)| rotation(a).slerp(rotation(b), fraction))
            .collect(),
        a.bone_positions.as_ref().map(|p| {
            p.iter()
                .enumerate()
                .map(|(i, p)| {
                    let a = Vec3::from_array(*p);
                    let b = b
                        .bone_positions
                        .as_ref()
                        .map_or(a, |p| Vec3::from_array(p[i]));
                    a.lerp(b, fraction)
                })
                .collect()
        }),
    )
}
fn palette(data: &Data, rider: usize, bank: usize, clip: usize, time: f32) -> Vec<Mat4> {
    blended_palette(data, rider, (bank, clip, time), None)
}

fn blended_palette(
    data: &Data,
    rider: usize,
    (bank, clip, time): (usize, usize, f32),
    blend: Option<((usize, usize, f32), f32)>,
) -> Vec<Mat4> {
    let body = animation::track(&data.tracks[&bank], clip, 0).expect("Body animation");
    let board = animation::track(&data.tracks[&bank], clip, 1);
    let (mut root, mut angles, mut positions) = sample(body, time);
    let mut board_pose = board.map(|board| sample(board, time));
    if let Some(((bank, clip, time), weight)) = blend {
        let other = animation::track(&data.tracks[&bank], clip, 0).expect("Blend body animation");
        let (other_root, other_angles, other_positions) = sample(other, time);
        let weight = weight.clamp(0., 1.);
        root = root.lerp(other_root, weight);
        for (a, b) in angles.iter_mut().zip(other_angles) {
            *a = a.slerp(b, weight);
        }
        if positions.is_some() || other_positions.is_some() {
            positions = Some(
                data.riders[rider]
                    .bones
                    .iter()
                    .enumerate()
                    .map(|(i, bone)| {
                        let bind = Vec3::from_array(bone.position);
                        positions
                            .as_ref()
                            .map_or(bind, |p| p[i])
                            .lerp(other_positions.as_ref().map_or(bind, |p| p[i]), weight)
                    })
                    .collect(),
            );
        }
        if let Some(other_board) = animation::track(&data.tracks[&bank], clip, 1) {
            let (p, q, _) = sample(other_board, time);
            if let Some((position, angles, _)) = &mut board_pose {
                *position = position.lerp(p, weight);
                angles[0] = angles[0].slerp(q[0], weight);
            } else {
                board_pose = Some((p, q, None));
            }
        }
    }
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
    if let Some((position, angles, _)) = board_pose {
        out.push(Mat4::from_rotation_translation(angles[0], position));
    } else {
        // Frontend/warmup clips have no board track. Keep its bind pose.
        out.push(Mat4::IDENTITY);
    }
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
    mut motions: Local<[motion::Motion; 8]>,
    mut anchors: ResMut<super::presentation::RiderAnchors>,
    library: Res<Library>,
    probes: Res<crate::lighting::Probes>,
    mut meshes: ResMut<Assets<Mesh>>,
    mut skins: Query<(&mut Skin, &Mesh3d, &ViewVisibility)>,
    mut roots: Query<(&CharacterRoot, &mut Transform, &mut Visibility)>,
) {
    // State-to-clip selection remains a host adapter.
    let _span = crate::performance::span("riders");
    let palettes: Vec<_> = (0..8)
        .map(|i| {
            let session = if i == world.rider {
                &world.session
            } else {
                &world.opponents[if i < world.rider { i } else { i - 1 }].session
            };
            let player = i == world.rider;
            motions[i].tick(
                session,
                frame.delta_secs(),
                if player { world.tricks.spin } else { 0. },
                session.ground_inputs.steer.value,
            );
            if session.phase == super::Phase::Finished
                && session.grounded
                && session.recovery.is_none()
                && session.finish_elapsed >= 3.5
            {
                let rank = world
                    .opponents
                    .iter()
                    .filter(|o| {
                        o.session.phase == super::Phase::Finished
                            && o.session.elapsed < session.elapsed
                    })
                    .count()
                    + usize::from(
                        !player
                            && world.session.phase == super::Phase::Finished
                            && world.session.elapsed < session.elapsed,
                    );
                let target = finish_palette(&library.data, i, session, rank < 4, &mut motions[i]);
                return motions[i].present(&library.data, i, target, false);
            }
            motions[i].rotation_inputs(
                session,
                if player { world.tricks.spin } else { 0. },
                if player { world.tricks.flip } else { 0. },
            );
            let spin_input = motions[i].spin_input;
            let flip_input = motions[i].flip_input;
            let target = motion::gameplay(
                &library.data,
                i,
                session,
                &mut motions[i],
                if player { world.tricks.grab } else { None },
                player && world.tricks.tweak,
                if player { world.tricks.grab_time } else { 0. },
                spin_input,
                flip_input,
            );
            let target = motion::apply_stance(&library.data, i, session, target);
            motions[i].present(
                &library.data,
                i,
                target,
                session.phase == super::Phase::Paused,
            )
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
        let display_forward = if session.grounded {
            (session.forward - session.normal * session.forward.dot(session.normal))
                .normalize_or_zero()
        } else {
            session.forward
        };
        transform.rotation = Transform::IDENTITY
            .looking_to(
                super::super::world(display_forward.to_array()),
                super::super::world(session.normal.to_array()).normalize_or_zero(),
            )
            .rotation;
        if session.phase == super::Phase::Ready {
            let rock = session.start_rock.offset;
            transform.translation += super::super::world((session.forward * rock * 32.).to_array());
        }
        if session.phase != super::Phase::Finished || session.finish_elapsed < 3.5 {
            // Stance changes the visible leading foot, never the travel/camera basis.
            let flip =
                if root.rider == world.rider && !session.grounded && session.recovery.is_none() {
                    world.tricks.flip
                } else {
                    0.
                };
            transform.rotation *= trick_rotation(motions[root.rider].yaw, flip);
        }
        lights[root.rider] = probes.sample(session.position);
        let hands: Vec<_> = library.data.riders[root.rider]
            .bones
            .iter()
            .enumerate()
            .filter(|(_, b)| b.name == "l_hand" || b.name == "r_hand")
            .map(|(i, _)| {
                transform.transform_point(super::super::world(
                    palettes[root.rider][i].w_axis.truncate().to_array(),
                ))
            })
            .collect();
        anchors.0[root.rider] = hands.try_into().ok();
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

fn finish_palette(
    data: &Data,
    rider: usize,
    session: &super::Session,
    happy: bool,
    motion: &mut motion::Motion,
) -> Vec<Mat4> {
    let mut pose = |bank, clip, age| {
        motion.finish_context(bank, clip);
        palette(data, rider, bank, clip, age)
    };
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
        let t = animation::track(&data.tracks[&bank], clip, 0).unwrap();
        (t.frames.len() - 1) as f32 / t.fps as f32
    };
    let (bank, settle) = [(1, 153), (3, 153), (2, 156)][session.board_style.clamp(0, 2) as usize];
    let mut time = session.finish_elapsed - 3.5;
    if time < duration(bank, settle) {
        return pose(bank, settle, time);
    }
    time -= duration(bank, settle);
    // Each rider has authored finish gestures in addition to the shared bank.
    let character_bank = [11, 20, 14, 27, 24, 30, 17, 8][rider];
    let character_clips: Vec<_> = data.tracks[&character_bank]
        .iter()
        .filter(|t| t.model == 0)
        .map(|t| t.group)
        .collect();
    let intro = character_clips[0];
    if happy && time < duration(character_bank, intro) {
        return pose(character_bank, intro, time);
    }
    if happy {
        time -= duration(character_bank, intro);
    }
    // FLC/FLD groups are the rider's three celebration/disappointment variants.
    // Follow the gesture with the shared result loop instead of freezing its
    // final frame while the other riders finish.
    let personal: Vec<_> = data.tracks[&character_bank]
        .iter()
        .filter(|t| t.model == 0 && t.name == if happy { "FLC_" } else { "FLD_" })
        .map(|t| t.group)
        .collect();
    if !personal.is_empty() {
        let clip = personal[(session.resets as usize + rider) % personal.len()];
        let length = duration(character_bank, clip);
        if time < length {
            return pose(character_bank, clip, time);
        }
        time -= length;
    }
    let choices: Vec<_> = (if happy { 0..7 } else { 7..16 })
        .filter(|i| MASKS[rider] & (1 << i) != 0)
        .collect();
    let selected = choices[(session.resets as usize + rider) % choices.len()];
    let (reaction, idle) = CLIPS[selected];
    if time < duration(4, reaction) {
        pose(4, reaction, time)
    } else {
        pose(4, idle, time - duration(4, reaction))
    }
}

fn trick_rotation(yaw: f32, flip: f32) -> Quat {
    // Flip about the travel frame's lateral axis. Applying it after stance yaw
    // in local space reverses forward/backward when the rider is switch.
    Quat::from_rotation_x(flip.to_radians()) * Quat::from_rotation_y(yaw.to_radians())
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
    fn forward_flip_keeps_travel_direction_when_riding_switch() {
        for flip in [-60., -30., 30., 60.] {
            let regular = trick_rotation(0., flip) * Vec3::Y;
            let switch = trick_rotation(180., flip) * Vec3::Y;
            assert!(
                regular.abs_diff_eq(switch, 0.0001),
                "Switch inverted the flip direction"
            );
        }
    }
    #[test]
    #[ignore = "requires the original disc"]
    fn crouched_riding_pose_responds_to_speed() {
        let data = load(Path::new("extracted/DATA")).unwrap();
        let path = Path::new("extracted/DATA/MODELS/SNOW.BIG");
        let (level, _) = ssx_rust::load_track(path).unwrap();
        let terrain = ssx_rust::playtest::TerrainContact::from_level(&level);
        let mut session =
            ssx_rust::playtest::Session::new(ssx_rust::load_track_paths(path).unwrap(), &terrain)
                .unwrap();
        session.phase = ssx_rust::playtest::Phase::Running;
        session.ground_inputs.crouch.value = 1.;
        session.elapsed = 5.;
        let motion = motion::Motion::default();
        for style in 0..3 {
            session.board_style = style;
            session.velocity = Vec3::ZERO;
            let slow = motion::riding(&data, 0, &session, &motion);
            session.velocity = Vec3::Y * 3000.;
            let fast = motion::riding(&data, 0, &session, &motion);
            let difference: f32 = slow
                .iter()
                .zip(fast)
                .map(|(a, b)| {
                    a.to_cols_array()
                        .iter()
                        .zip(b.to_cols_array())
                        .map(|(a, b)| (a - b).abs())
                        .sum::<f32>()
                })
                .sum();
            assert!(
                difference > 1.,
                "style {style}: standing and high-speed tuck use the same pose"
            );
        }
    }
    #[test]
    #[ignore = "requires the original disc"]
    fn complete_original_animation_catalog_has_valid_groups_and_poses() {
        let data = load(Path::new("extracted/DATA")).unwrap();
        assert_eq!(data.tracks.len(), 34);
        for action in 0..ssx_rust::animation_actions::ACTIONS.len() {
            for style in 0..3 {
                let (bank, clip) = animation::action(action, style);
                assert!(
                    data.tracks[&bank].iter().any(|t| t.group == clip),
                    "Missing action {action}, style {style}, bank {bank}, descriptor {clip}"
                );
            }
        }
        let mut body_clips = 0;
        for (&bank, tracks) in &data.tracks {
            for body in tracks.iter().filter(|t| t.model == 0) {
                body_clips += 1;
                assert_eq!(body.frames[0].rotations.len(), 19);
                for frame in [0, body.frames.len() / 2, body.frames.len() - 1] {
                    for rider in 0..8 {
                        let p = palette(
                            &data,
                            rider,
                            bank,
                            body.group,
                            frame as f32 / body.fps as f32,
                        );
                        assert!(
                            p.iter().all(|m| m.is_finite()),
                            "Bank {bank}, group {}, rider {rider}",
                            body.group
                        );
                    }
                }
            }
        }
        println!(
            "Validated {} states, {} actions, {body_clips} body clips across 34 banks",
            ssx_rust::animation_actions::STATES.len(),
            ssx_rust::animation_actions::ACTIONS.len()
        );
    }

    #[test]
    #[ignore = "requires the original disc"]
    fn switch_stance_survives_landing_and_the_next_jump() {
        let path = Path::new("extracted/DATA/MODELS/SNOW.BIG");
        let (level, _) = ssx_rust::load_track(path).unwrap();
        let terrain = ssx_rust::playtest::TerrainContact::from_level(&level);
        let mut session =
            super::super::Session::new(ssx_rust::load_track_paths(path).unwrap(), &terrain)
                .unwrap();
        session.phase = super::super::Phase::Running;
        let mut motion = motion::Motion::default();
        motion.tick(&session, 1. / 60., 0., 0.);
        session.grounded = false;
        motion.tick(&session, 1. / 60., 180., 0.);
        assert_eq!(motion.yaw, 180.);
        session.landed_this_tick = true;
        session.grounded = true;
        session.finish_air_trick(180., 0.);
        let forward = session.forward;
        for _ in 0..60 {
            motion.tick(&session, 1. / 60., 0., 0.);
        }
        assert!((motion.yaw - 180.).abs() < 0.01);
        assert_eq!(session.forward, forward);
        session.grounded = false;
        motion.tick(&session, 1. / 60., 0., 0.);
        assert_eq!(motion.yaw, 180.);
        motion.tick(&session, 1. / 60., 180., 0.);
        session.grounded = true;
        session.finish_air_trick(180., 0.);
        motion.tick(&session, 1. / 60., 0., 0.);
        assert!(!session.riding_switch);
        assert!(motion.yaw.rem_euclid(360.).abs() < 0.01);
    }
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
