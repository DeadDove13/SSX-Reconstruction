//! Original particle artwork and WFX emitters, rendered in bounded per-texture batches.
use super::{PlayWorld, PlayerCamera, interface::Menu};
use bevy::{
    asset::RenderAssetUsages,
    audio::{AudioSinkPlayback, Volume},
    mesh::Indices,
    prelude::*,
    render::render_resource::{Extent3d, PrimitiveTopology, TextureDimension, TextureFormat},
};
use ssx_rust::{object_rules::ObjectEvent, playtest::Phase};
const LIMIT: usize = 8192;
const TEXTURES: usize = 34;
// 0x001d7ce8 loads this order from 0x00296648. It differs from SSH directory order.
const TEXTURE_NAMES: [&str; TEXTURES] = [
    "part", "snfl", "clod", "spry", "halo", "brk1", "brk2", "brk3", "ndl1", "ndl2", "swd1", "swd2",
    "swp1", "swp2", "cnf1", "cnf2", "blb1", "blb2", "str1", "str2", "str3", "nois", "strk", "tral",
    "ex06", "ex07", "ex08", "ex09", "lens", "blnk", "mip1", "mip1", "mip2", "beam",
];
#[cfg(test)]
mod tests {
    use super::*;
    #[test]
    fn brief_burst_emits_every_authored_particle() {
        let mut words = vec![0u32; 52];
        words[1] = 40;
        words[3] = 0.01f32.to_bits();
        let mut e = Emitter {
            object: 0,
            matrix: Mat4::IDENTITY,
            words,
            remaining: 0.01,
            credit: 0.,
        };
        assert_eq!(e.emission_count(1. / 60.), 40);
    }
    #[test]
    #[ignore = "requires the original disc"]
    fn texture_ids_match_original_particle_table() {
        let bin = std::fs::read("extracted/SLUS_200.95").unwrap();
        let textures = ssx_rust::texture::decode(
            &std::fs::read("extracted/DATA/TEXTURES/PARTICLE.SSH").unwrap(),
        )
        .unwrap();
        for (i, name) in TEXTURE_NAMES.iter().enumerate() {
            let offset = 0x296648 - 0x100000 + 4096 + i * 12;
            assert_eq!(&bin[offset..offset + 4], name.as_bytes(), "Particle ID {i}");
            assert!(textures.iter().any(|t| &t.name == name));
        }
    }
}
#[derive(Component)]
pub struct Batch(usize);
#[derive(Resource, Default)]
pub struct RiderAnchors(pub [Option<[Vec3; 2]>; 8]);
struct Particle {
    p: Vec3,
    v: Vec3,
    a: Vec3,
    size: f32,
    age: f32,
    life: f32,
    colour: Vec4,
    end_colour: Vec4,
    texture: usize,
    tail: Option<Vec3>,
    surface_normal: Option<Vec3>,
}
struct Emitter {
    object: usize,
    matrix: Mat4,
    words: Vec<u32>,
    remaining: f32,
    credit: f32,
}
impl Emitter {
    fn emission_count(&mut self, dt: f32) -> usize {
        let duration = if f(&self.words, 3) < 0. {
            (f(&self.words, 6) + f(&self.words, 8) * 0.5).max(0.001)
        } else {
            f(&self.words, 3).max(0.001)
        };
        let step = if f(&self.words, 3) < 0. {
            dt
        } else {
            dt.min(self.remaining.max(0.))
        };
        self.credit += self.words[1].min(2048) as f32 * step / duration;
        let count = (self.credit + 0.0001).floor() as usize;
        self.credit -= count as f32;
        count
    }
}
#[derive(Resource, Default)]
pub struct Effects {
    trail_last: [Option<[Vec3; 2]>; 8],
    snow_last: [Option<[Vec3; 2]>; 8],
    particles: Vec<Particle>,
    emitters: Vec<Emitter>,
    meshes: Vec<Handle<Mesh>>,
    random: u32,
    key: Option<(usize, u32)>,
    crowd: Vec<[Vec3; 2]>,
    crowd_clips: Vec<Option<Handle<AudioSource>>>,
    crowd_wait: f32,
    pub emitted: u64,
    pub scripted: u64,
    pub unsupported: usize,
}
#[derive(Component)]
pub struct CrowdVoice {
    reaction: bool,
}
fn mesh() -> Mesh {
    Mesh::new(
        PrimitiveTopology::TriangleList,
        RenderAssetUsages::MAIN_WORLD | RenderAssetUsages::RENDER_WORLD,
    )
    // A degenerate quad gives the GPU allocator a valid initial buffer.
    .with_inserted_attribute(Mesh::ATTRIBUTE_POSITION, vec![[0.; 3]; 4])
    .with_inserted_attribute(Mesh::ATTRIBUTE_NORMAL, vec![[0., 1., 0.]; 4])
    .with_inserted_attribute(Mesh::ATTRIBUTE_UV_0, vec![[0.; 2]; 4])
    .with_inserted_attribute(Mesh::ATTRIBUTE_COLOR, vec![[0.; 4]; 4])
    .with_inserted_indices(Indices::U32(vec![0, 1, 2, 0, 2, 3]))
}
pub fn setup(
    mut commands: Commands,
    mut images: ResMut<Assets<Image>>,
    mut meshes: ResMut<Assets<Mesh>>,
    mut materials: ResMut<Assets<StandardMaterial>>,
) {
    let textures =
        ssx_rust::texture::decode(&std::fs::read("extracted/DATA/TEXTURES/PARTICLE.SSH").unwrap())
            .unwrap();
    let mut fx = Effects {
        random: 0x535358,
        ..default()
    };
    for i in 0..TEXTURES * 2 {
        let t = textures
            .iter()
            .find(|t| t.name == TEXTURE_NAMES[i % TEXTURES])
            .expect("Original particle texture");
        let image = images.add(Image::new(
            Extent3d {
                width: t.width as u32,
                height: t.height as u32,
                depth_or_array_layers: 1,
            },
            TextureDimension::D2,
            t.rgba.clone(),
            TextureFormat::Rgba8UnormSrgb,
            RenderAssetUsages::RENDER_WORLD,
        ));
        let m = meshes.add(mesh());
        fx.meshes.push(m.clone());
        commands.spawn((
            Batch(i),
            Mesh3d(m),
            MeshMaterial3d(materials.add(StandardMaterial {
                base_color_texture: Some(image),
                unlit: true,
                alpha_mode: if i >= TEXTURES {
                    AlphaMode::Add
                } else {
                    AlphaMode::Blend
                },
                cull_mode: None,
                ..default()
            })),
            Transform::default(),
            bevy::camera::visibility::NoFrustumCulling,
        ));
    }
    commands.insert_resource(fx);
    commands.init_resource::<RiderAnchors>();
}
fn rng(state: &mut u32) -> f32 {
    *state = state.wrapping_mul(1664525).wrapping_add(1013904223);
    (*state >> 8) as f32 / 16777216.
}
fn f(w: &[u32], n: usize) -> f32 {
    w.get(n)
        .copied()
        .map(f32::from_bits)
        .filter(|x| x.is_finite())
        .unwrap_or(0.)
}
fn v(w: &[u32], n: usize) -> Vec3 {
    Vec3::new(f(w, n), f(w, n + 1), f(w, n + 2))
}
impl Effects {
    fn add(&mut self, p: Particle) {
        // Reserve room for short bursts. Persistent snow tracks must not hide pickups.
        if p.surface_normal.is_some() && self.particles.len() >= LIMIT - 1024 {
            return;
        }
        if self.particles.len() >= LIMIT && p.surface_normal.is_none() {
            if let Some(index) = self
                .particles
                .iter()
                .position(|p| p.surface_normal.is_some())
            {
                self.particles.swap_remove(index);
            }
        }
        if self.particles.len() < LIMIT && p.p.is_finite() && p.v.is_finite() && p.life > 0. {
            self.emitted += 1;
            self.particles.push(p);
        }
    }
    fn script_particle(&mut self, e: &Emitter) {
        let w = &e.words;
        // 0x001dfb38: position, two position axes, velocity and three random axes.
        let mut pos = v(w, 10);
        let mut vel = v(w, 19);
        for axis in [13, 16] {
            pos += v(w, axis) * (rng(&mut self.random) * 3. - 1.5);
        }
        for axis in [22, 25, 28] {
            vel += v(w, axis) * (rng(&mut self.random) * 3. - 1.5);
        }
        let size = (f(w, 5) + (rng(&mut self.random) - 0.5) * f(w, 7))
            .abs()
            .clamp(1., 1200.)
            * 0.01;
        let life = (f(w, 6) + (rng(&mut self.random) - 0.5) * f(w, 8)).clamp(0.05, 30.);
        let colour = (Vec4::new(f(w, 35), f(w, 36), f(w, 37), f(w, 34))
            + Vec4::new(f(w, 39), f(w, 40), f(w, 41), f(w, 38)) * (rng(&mut self.random) - 0.5))
            .clamp(Vec4::ZERO, Vec4::ONE);
        let end_colour = (Vec4::new(f(w, 43), f(w, 44), f(w, 45), f(w, 42))
            + Vec4::new(f(w, 47), f(w, 48), f(w, 49), f(w, 46)) * (rng(&mut self.random) - 0.5))
            .clamp(Vec4::ZERO, Vec4::ONE);
        self.add(Particle {
            p: super::super::world(e.matrix.transform_point3(pos).to_array()),
            v: super::super::world(e.matrix.transform_vector3(vel).to_array()),
            a: super::super::world(v(w, 31).to_array()),
            size,
            age: 0.,
            life,
            colour,
            end_colour,
            texture: w[50] as usize + if w[51] == 1 { TEXTURES } else { 0 },
            tail: None,
            surface_normal: None,
        });
    }
}
pub fn tick(
    mut commands: Commands,
    world: Res<PlayWorld>,
    menu: Res<Menu>,
    track: Res<super::super::Track>,
    mut fx: ResMut<Effects>,
    anchors: Res<RiderAnchors>,
    mut audio: ResMut<Assets<AudioSource>>,
    mut voices: Query<(
        Entity,
        &CrowdVoice,
        Option<&mut AudioSink>,
        &mut PlaybackSettings,
    )>,
) {
    let key = (menu.track, world.session.resets);
    let changed = fx.key != Some(key);
    if changed {
        let course_changed = fx.key.is_none_or(|k| k.0 != key.0);
        fx.key = Some(key);
        fx.particles.clear();
        fx.emitters.clear();
        fx.trail_last = [None; 8];
        fx.snow_last = [None; 8];
        fx.crowd_wait = 0.;
        fx.crowd = track
            .level
            .instances
            .iter()
            .filter(|i| {
                track
                    .level
                    .effects
                    .scripts
                    .slots
                    .get(i.properties.effect_slot as usize)
                    .and_then(|s| track.level.effects.scripts.programs.get(s[0] as usize))
                    .is_some_and(|p| {
                        p.iter()
                            .any(|e| e.kind == 0 && e.words.first() == Some(&17))
                    })
            })
            .map(|i| i.properties.bounds.map(Vec3::from_array))
            .collect();
        if course_changed {
            let name = match track.name.as_str() {
                "SNOW" => "snowdream",
                "MEGAPLEX" => "megaplex",
                "MERQUERY" => "merqurycity",
                "MESA" => "mesablanca",
                "PIPE" => "pipe",
                "ALOHA" => "iceberg",
                "ELYSIUM" => "elysium",
                "UNTRACK" => "untracked",
                _ => "circuit",
            };
            fx.crowd_clips = std::fs::read(format!("extracted/audio/data/audio/{name}crowd.bnk"))
                .ok()
                .and_then(|b| ssx_rust::audio_bank::decode(&b).ok())
                .unwrap_or_default()
                .into_iter()
                .map(|c| {
                    c.map(|c| {
                        audio.add(AudioSource {
                            bytes: c.wav().into(),
                        })
                    })
                })
                .collect();
        }
    }
    let active =
        matches!(world.session.phase, Phase::Running | Phase::Finished) || menu.countdown > 0.;
    let distance = fx
        .crowd
        .iter()
        .map(|b| {
            world
                .session
                .position
                .distance(world.session.position.clamp(b[0], b[1]))
        })
        .fold(f32::INFINITY, f32::min);
    let crowd_gain =
        ((7000. - distance) / 6500.).clamp(0., 1.).powi(2) * menu.audio_gain(menu.settings.effects);
    for (entity, voice, sink, mut settings) in &mut voices {
        if changed || (world.session.phase == Phase::Ready && menu.countdown <= 0.) {
            commands.entity(entity).despawn();
            continue;
        }
        let volume = Volume::Linear(crowd_gain * if voice.reaction { 0.7 } else { 0.3 });
        settings.volume = volume;
        if let Some(mut sink) = sink {
            sink.set_volume(volume);
            if active {
                sink.play();
            } else {
                sink.pause();
            }
        }
    }
    if !active {
        return;
    }
    if let Some(Some(clip)) = fx.crowd_clips.first()
        && !fx.crowd.is_empty()
        && (changed || !voices.iter().any(|(_, v, _, _)| !v.reaction))
    {
        commands.spawn((
            CrowdVoice { reaction: false },
            AudioPlayer::new(clip.clone()),
            PlaybackSettings::LOOP.with_volume(Volume::Linear(crowd_gain * 0.3)),
        ));
    }
    fx.crowd_wait = (fx.crowd_wait - 1. / 60.).max(0.);
    if world.session.phase == Phase::Running
        && world.tricks.landed
        && world.tricks.last_award > 1500
        && fx.crowd_wait == 0.
        && fx.crowd_clips.len() > 3
        && crowd_gain > 0.
    {
        let index = 3 + (world.tricks.last_award as usize % 4).min(fx.crowd_clips.len() - 4);
        if let Some(clip) = fx.crowd_clips[index].clone() {
            commands.spawn((
                CrowdVoice { reaction: true },
                AudioPlayer::new(clip),
                PlaybackSettings::DESPAWN.with_volume(Volume::Linear(crowd_gain * 0.7)),
            ));
        }
        fx.crowd_wait = 5.;
    }
    for p in &mut fx.particles {
        p.age += 1. / 60.;
        p.v += p.a / 60.;
        p.p += p.v / 60.;
    }
    fx.particles.retain(|p| p.age < p.life);
    for event in &world.session.objects.events {
        match event {
            ObjectEvent::Particle { object, words } if words.len() == 52 => {
                fx.scripted += 1;
                if let Some(i) = track.level.instances.get(*object) {
                    if !fx
                        .emitters
                        .iter()
                        .any(|e| e.object == *object && e.words == *words)
                    {
                        fx.emitters.push(Emitter {
                            object: *object,
                            matrix: Mat4::from_cols_array(&i.transform),
                            words: words.clone(),
                            remaining: f(words, 3),
                            credit: 0.,
                        });
                    }
                }
            }
            ObjectEvent::Unsupported { .. } => fx.unsupported += 1,
            _ => {}
        }
    }
    let emitters = std::mem::take(&mut fx.emitters);
    for mut e in emitters {
        let continuous = f(&e.words, 3) < 0.;
        let count = e.emission_count(1. / 60.);
        let pos = e.matrix.transform_point3(v(&e.words, 10));
        if pos.distance(world.session.position) < 10000. {
            for _ in 0..count {
                fx.script_particle(&e);
            }
        }
        if !continuous {
            e.remaining -= 1. / 60.;
        }
        if continuous || e.remaining > 0. {
            fx.emitters.push(e);
        }
    }
    if world.session.phase == Phase::Running {
        for r in 0..8 {
            if r != world.rider && menu.event != ssx_rust::front_end::Event::Race {
                continue;
            }
            let s = if r == world.rider {
                &world.session
            } else {
                &world.opponents[if r < world.rider { r } else { r - 1 }].session
            };
            if s.position.distance(world.session.position) > 5000. {
                continue;
            }
            let speed = s.velocity.length();
            let side = s.forward.cross(s.normal).normalize_or_zero();
            let base = s.position - s.forward * 60. + s.normal * 4.;
            if s.grounded
                && speed > 200.
                && snow_surface(s.surface)
                && s.grind.is_none()
                && s.returning.is_none()
                // Object support currently inherits the previous physics material.
                // Require actual snow below the board before emitting snow effects.
                && world.terrain.surface_contact(s.position, s.normal, 30.)
                    .is_some_and(|(_, _, surface)| snow_surface(surface))
            {
                // Surface-aligned grooves remain on the snow after the spray disperses.
                let mut marks = [Vec3::ZERO; 2];
                let mut supported = true;
                for (edge, sign) in [-1., 1.].into_iter().enumerate() {
                    let Some((point, normal, surface)) =
                        world
                            .terrain
                            .surface_contact(base + side * sign * 13., s.normal, 100.)
                    else {
                        supported = false;
                        continue;
                    };
                    if !snow_surface(surface) {
                        supported = false;
                        continue;
                    }
                    let n = super::super::world(normal.to_array()).normalize_or_zero();
                    let p = super::super::world((point + normal * 1.).to_array());
                    marks[edge] = p;
                    let Some(tail) = fx.snow_last[r].map(|last| last[edge]).filter(|tail| {
                        let distance = tail.distance(p);
                        distance > 0.01 && distance < 2.5
                    }) else {
                        continue;
                    };
                    fx.add(Particle {
                        p,
                        v: Vec3::ZERO,
                        a: Vec3::ZERO,
                        size: 0.035,
                        age: 0.,
                        life: 8.,
                        colour: Vec4::new(0.48, 0.58, 0.68, 0.45),
                        end_colour: Vec4::new(0.55, 0.7, 0.8, 0.),
                        texture: 23,
                        tail: Some(tail),
                        surface_normal: Some(n),
                    });
                }
                fx.snow_last[r] = supported.then_some(marks);
                // Packed snow retains board marks without a powder cloud.
                let spray = matches!(s.surface, 0 | 2 | 3);
                for _ in 0..if !spray {
                    0
                } else if s.recovery.is_some() {
                    3
                } else {
                    1
                } {
                    let jitter = (rng(&mut fx.random) - 0.5) * 60.;
                    let vel = -s.velocity * 0.1
                        + side * jitter * 2.
                        + s.normal * (50. + rng(&mut fx.random) * 100.);
                    let size = 0.07 + rng(&mut fx.random) * 0.1;
                    fx.add(Particle {
                        p: super::super::world((base + side * jitter).to_array()),
                        v: super::super::world(vel.to_array()),
                        a: Vec3::Y * -1.5,
                        size,
                        age: 0.,
                        life: 0.35,
                        colour: Vec4::new(0.85, 0.94, 1., 0.4),
                        end_colour: Vec4::new(0.9, 0.97, 1., 0.),
                        texture: 10,
                        tail: None,
                        surface_normal: None,
                    });
                }
            } else {
                fx.snow_last[r] = None;
            }
            if speed > 300.
                && (s.power.active
                    || s.power.super_boost > 0.
                    || s.power.start_boost > 0.
                    || s.grind.is_some())
            {
                let hands = anchors.0[r].unwrap_or_else(|| {
                    [-1., 1.].map(|sign| {
                        super::super::world((base + side * sign * 28. + s.normal * 65.).to_array())
                    })
                });
                for (i, p) in hands.into_iter().enumerate() {
                    let tail = fx.trail_last[r]
                        .map(|v| v[i])
                        .filter(|v| v.distance(p) < 2.5)
                        .unwrap_or(p - super::super::world((s.velocity / 60.).to_array()));
                    fx.add(Particle {
                        p,
                        v: Vec3::ZERO,
                        a: Vec3::ZERO,
                        size: 0.085,
                        age: 0.,
                        life: 0.65,
                        colour: Vec4::new(1., 0.12, 0.035, 0.85),
                        end_colour: Vec4::new(1., 0.05, 0., 0.),
                        texture: 23,
                        tail: Some(tail),
                        surface_normal: None,
                    });
                }
                fx.trail_last[r] = Some(hands);
            } else {
                fx.trail_last[r] = None;
            }
            if s.power.sparkling()
                && let Some(hands) = anchors.0[r]
            {
                for p in hands {
                    for (texture, size, alpha) in
                        [(28 + TEXTURES, 0.18, 0.85), (19 + TEXTURES, 0.12, 1.)]
                    {
                        fx.add(Particle {
                            p,
                            v: Vec3::ZERO,
                            a: Vec3::ZERO,
                            size,
                            age: 0.,
                            life: 1. / 60.,
                            colour: Vec4::new(1., 1., 1., alpha),
                            end_colour: Vec4::new(1., 1., 1., alpha),
                            texture,
                            tail: None,
                            surface_normal: None,
                        });
                    }
                }
            }
            if s.grind.is_some() || s.power.sparkling() {
                let star = s.power.sparkling();
                let offset = Vec3::new(
                    rng(&mut fx.random) - 0.5,
                    rng(&mut fx.random) - 0.5,
                    rng(&mut fx.random),
                ) * if star { 240. } else { 30. };
                fx.add(Particle {
                    p: super::super::world((s.position + offset).to_array()),
                    v: super::super::world((-s.velocity * 0.08 + offset).to_array()),
                    a: Vec3::Y * -2.,
                    size: if star { 0.35 } else { 0.08 },
                    age: 0.,
                    life: 0.45,
                    colour: if star {
                        Vec4::ONE
                    } else {
                        Vec4::new(1., 0.7, 0.2, 1.)
                    },
                    end_colour: Vec4::new(1., 0.8, 1., 0.),
                    texture: if star { 19 + TEXTURES } else { 20 + TEXTURES },
                    tail: None,
                    surface_normal: None,
                });
            }
        }
    }
}
pub fn render(
    fx: Res<Effects>,
    camera: Single<&Transform, With<PlayerCamera>>,
    mut meshes: ResMut<Assets<Mesh>>,
    mut batches: Query<(&Batch, &mut Visibility)>,
) {
    let right = camera.rotation * Vec3::X;
    let up = camera.rotation * Vec3::Y;
    let mut positions = vec![Vec::<[f32; 3]>::new(); fx.meshes.len()];
    let mut colours = vec![Vec::<[f32; 4]>::new(); fx.meshes.len()];
    let mut uvs = vec![Vec::<[f32; 2]>::new(); fx.meshes.len()];
    for p in &fx.particles {
        if p.texture >= fx.meshes.len() {
            continue;
        }
        let c = p
            .colour
            .lerp(p.end_colour, (p.age / p.life).clamp(0., 1.))
            .to_array();
        let vertices = if let Some(tail) = p.tail {
            let edge = (p.p - tail)
                .cross(p.surface_normal.unwrap_or(camera.translation - p.p))
                .normalize_or_zero()
                * p.size;
            [tail - edge, tail + edge, p.p + edge, p.p - edge]
        } else {
            let r = right * p.size;
            let u = up * p.size;
            [p.p - r - u, p.p + r - u, p.p + r + u, p.p - r + u]
        };
        positions[p.texture].extend(vertices.map(|v| v.to_array()));
        colours[p.texture].extend([c; 4]);
        // Sample the middle of the streak along travel. Repeating its tapered
        // ends on every frame produces a dotted line instead of a snow groove.
        uvs[p.texture].extend(if p.surface_normal.is_some() {
            [[0., 0.5], [1., 0.5], [1., 0.5], [0., 0.5]]
        } else {
            [[0., 1.], [1., 1.], [1., 0.], [0., 0.]]
        });
    }
    for (batch, mut visibility) in &mut batches {
        let n = positions[batch.0].len();
        *visibility = if n == 0 {
            Visibility::Hidden
        } else {
            Visibility::Inherited
        };
        if n == 0 {
            continue;
        }
        if let Some(mut m) = meshes.get_mut(&fx.meshes[batch.0]) {
            m.insert_attribute(
                Mesh::ATTRIBUTE_POSITION,
                std::mem::take(&mut positions[batch.0]),
            );
            m.insert_attribute(Mesh::ATTRIBUTE_COLOR, std::mem::take(&mut colours[batch.0]));
            m.insert_attribute(Mesh::ATTRIBUTE_NORMAL, vec![[0., 1., 0.]; n]);
            m.insert_attribute(Mesh::ATTRIBUTE_UV_0, std::mem::take(&mut uvs[batch.0]));
            m.insert_indices(Indices::U32(
                (0..n as u32 / 4)
                    .flat_map(|i| [i * 4, i * 4 + 1, i * 4 + 2, i * 4, i * 4 + 2, i * 4 + 3])
                    .collect(),
            ));
        }
    }
}

pub fn start_lights(
    world: Res<PlayWorld>,
    menu: Res<Menu>,
    mut materials: ResMut<Assets<crate::lighting::CourseMaterial>>,
) {
    // Progressive illumination matched to the supplied countdown reference.
    let stage = if menu.countdown > 3. {
        1.
    } else if menu.countdown > 2. {
        2.
    } else if menu.countdown > 0. || matches!(world.session.phase, Phase::Running | Phase::Finished)
    {
        3.
    } else {
        0.
    };
    for (_, material) in materials.iter_mut() {
        if material.parameters.z == 2. {
            material.parameters.w = stage;
        }
    }
}

/// Presentation policy based on the recovered powder/loose/packed categories
/// in 0x001f8aa0. Ice, rock, wood, metal, glass and unknown IDs do not emit snow.
fn snow_surface(surface: u32) -> bool {
    matches!(surface, 0..=4 | 7 | 8)
}
