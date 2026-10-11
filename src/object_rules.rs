//! Original WDF object properties and WFX collision/effect records.
//! Field meanings follow the executable. See docs/OBJECTS_AND_INPUT.md.
use crate::{Result, binary::*};

#[derive(Debug, Clone, Default)]
pub struct Properties {
    pub id: [u16; 2],
    pub flags: u16,
    pub mass: f32,
    pub collision_mode: i16,
    pub collision_model: i16,
    pub physics_model: i16,
    pub sound: i16,
    pub restitution: f32,
    pub effect_slot: i16,
    pub runtime_index: i16,
    pub bounds: [[f32; 3]; 2],
}
impl Properties {
    pub fn decode(data: &[u8], p: usize) -> Result<Self> {
        range(data, p, 272)?;
        Ok(Self {
            id: [u16le(data, p + 192)?, u16le(data, p + 194)?],
            flags: u16le(data, p + 234)?,
            mass: f32le(data, p + 236)?,
            collision_mode: u16le(data, p + 240)? as i16,
            collision_model: u16le(data, p + 242)? as i16,
            physics_model: u16le(data, p + 244)? as i16,
            sound: u16le(data, p + 246)? as i16,
            restitution: f32le(data, p + 248)?,
            effect_slot: u16le(data, p + 252)? as i16,
            runtime_index: u16le(data, p + 254)? as i16,
            bounds: [vec3(data, p + 208)?, vec3(data, p + 220)?],
        })
    }
    pub fn contact_enabled(&self) -> bool {
        self.flags & 0x20 != 0
    }
    pub fn response_enabled(&self) -> bool {
        self.flags & 0x80 != 0
    }
}
#[derive(Debug)]
pub struct Hull {
    pub vertices: Vec<[f32; 3]>,
    pub indices: Vec<u32>,
}
#[derive(Debug, Clone)]
pub struct Effect {
    pub kind: u16,
    pub words: Vec<u32>,
}
#[derive(Debug, Default, Clone)]
pub struct Scripts {
    pub slots: Vec<[i32; 7]>,
    pub programs: Vec<Vec<Effect>>,
}
#[derive(Debug, Default)]
pub struct WorldEffects {
    pub scripts: Scripts,
    pub collision_models: Vec<Vec<Hull>>,
}
impl WorldEffects {
    pub fn decode(data: &[u8]) -> Result<Self> {
        range(data, 0, 40)?;
        let mut result = Self::default();
        let count = u32le(data, 8)? as usize;
        let start = u32le(data, 12)? as usize;
        range(
            data,
            start,
            count.checked_mul(28).ok_or("WFX slot count overflow")?,
        )?;
        for i in 0..count {
            let mut slot = [0; 7];
            for (j, v) in slot.iter_mut().enumerate() {
                *v = u32le(data, start + i * 28 + j * 4)? as i32;
            }
            result.scripts.slots.push(slot);
        }
        let count = u32le(data, 24)? as usize;
        let start = u32le(data, 28)? as usize;
        range(
            data,
            start,
            count.checked_mul(12).ok_or("WFX model count overflow")?,
        )?;
        for i in 0..count {
            let offset = u32le(data, start + i * 12)? as usize;
            let size = u32le(data, start + i * 12 + 4)? as usize;
            let models = u32le(data, start + i * 12 + 8)? as usize;
            let bytes = range(data, offset, size)?;
            let mut cursor = 0;
            let mut group = Vec::new();
            for _ in 0..models {
                let faces = u32le(bytes, cursor)? as usize;
                let vertices = u32le(bytes, cursor + 4)? as usize;
                let padding = u32le(bytes, cursor + 8)? as usize;
                cursor += 12;
                range(
                    bytes,
                    cursor,
                    faces.checked_mul(12).ok_or("WFX face count overflow")?,
                )?;
                let mut indices = Vec::new();
                for j in 0..faces * 3 {
                    let index = u32le(bytes, cursor + j * 4)?;
                    if index as usize >= vertices {
                        return Err("WFX collision vertex index is out of range".into());
                    }
                    indices.push(index);
                }
                cursor += faces * 12;
                range(bytes, cursor, padding)?;
                cursor += padding;
                range(
                    bytes,
                    cursor,
                    vertices
                        .checked_mul(16)
                        .ok_or("WFX vertex count overflow")?,
                )?;
                let points = (0..vertices)
                    .map(|j| vec3(bytes, cursor + j * 16))
                    .collect::<Result<Vec<_>>>()?;
                cursor += vertices * 16;
                range(bytes, cursor, faces * 16)?;
                cursor += faces * 16;
                group.push(Hull {
                    vertices: points,
                    indices,
                });
            }
            result.collision_models.push(group);
        }
        let count = u32le(data, 32)? as usize;
        let start = u32le(data, 36)? as usize;
        range(
            data,
            start,
            count.checked_mul(8).ok_or("WFX effect count overflow")?,
        )?;
        for i in 0..count {
            let commands = u32le(data, start + i * 8)? as usize;
            let mut cursor = start + count * 8 + u32le(data, start + i * 8 + 4)? as usize;
            let mut program = Vec::new();
            for _ in 0..commands {
                let kind = u16le(data, cursor)?;
                let size = u16le(data, cursor + 2)? as usize;
                if size < 4 || size % 4 != 0 {
                    return Err("Invalid WFX effect size".into());
                }
                range(data, cursor, size)?;
                let words = (4..size)
                    .step_by(4)
                    .map(|j| u32le(data, cursor + j))
                    .collect::<Result<Vec<_>>>()?;
                program.push(Effect { kind, words });
                cursor += size;
            }
            result.scripts.programs.push(program);
        }
        Ok(result)
    }
}
impl Scripts {
    pub fn contact_program(&self, properties: &Properties) -> Option<usize> {
        let slot = self
            .slots
            .get(usize::try_from(properties.effect_slot).ok()?)?;
        usize::try_from(slot[1]).ok()
    }
}

/// Runtime state for the recovered contact-script subset.
#[derive(Debug, Default, Clone)]
pub struct ObjectState {
    started: bool,
    pending: Vec<Continuation>,
    reported: std::collections::HashSet<(usize, usize, u16)>,
    random: u32,
    pub damage: std::collections::HashMap<usize, f32>,
    damage_cooldown: std::collections::HashMap<usize, u32>,
    pub rigid: std::collections::HashMap<usize, FragmentEffect>,
    pub disabled: std::collections::HashSet<usize>,
    pub activated_debris: std::collections::HashSet<usize>,
    pub events: Vec<ObjectEvent>,
    pub fragments: std::collections::HashMap<usize, FragmentEffect>,
}
#[derive(Debug, Clone)]
struct Continuation {
    object: usize,
    program: usize,
    next: usize,
    delay: f32,
    impact: [f32; 3],
}
/// Subtype 20 settings from 0x0012d4f8. Values remain in original game units.
#[derive(Debug, Clone)]
pub struct FragmentEffect {
    pub age: u32,
    pub lifetime: u32,
    pub gravity: f32,
    pub velocity: [f32; 3],
    pub scatter: [f32; 3],
}
impl FragmentEffect {
    fn decode(words: &[u32], impact: [f32; 3]) -> Self {
        let mut velocity = [
            f32::from_bits(words[4]),
            f32::from_bits(words[5]),
            f32::from_bits(words[6]),
        ];
        if velocity == [0.; 3] {
            velocity = impact.map(|v| v * 0.8);
        }
        Self {
            age: 0,
            lifetime: (f32::from_bits(words[3]) * 60.).max(1.) as u32,
            gravity: f32::from_bits(words[2]),
            velocity,
            scatter: [
                f32::from_bits(words[7]),
                f32::from_bits(words[8]),
                f32::from_bits(words[9]),
            ],
        }
    }
    pub fn active(&self) -> bool {
        self.age < self.lifetime
    }
    /// Per-frame velocity and gravity order follows 0x0012dc68.
    pub fn displacement(&self, initial: [f32; 3], fraction: f32) -> [f32; 3] {
        let n = (self.age as f32 + fraction).min(self.lifetime as f32);
        let mut p = initial.map(|v| v * n / 60.);
        p[2] += -16.333334 * self.gravity * n * (n - 1.).max(0.) * 0.5;
        p
    }
}
#[derive(Debug, Clone)]
pub enum ObjectEvent {
    ReturnToCourse {
        object: usize,
    },
    Particle {
        object: usize,
        words: Vec<u32>,
    },
    RiderEffect {
        object: usize,
        kind: u16,
        value: f32,
    },
    Sound {
        object: usize,
        id: u32,
    },
    Debris {
        object: usize,
    },
    Unsupported {
        object: usize,
        program: usize,
        kind: u16,
    },
}
impl ObjectState {
    /// Start each original load program once. Resume delays in their original command order.
    pub fn tick_scripts(&mut self, properties: &[Properties], scripts: &Scripts) {
        // Bound recursion per invocation, without dropping later course objects.
        let pending = std::mem::take(&mut self.pending);
        if !self.started {
            self.started = true;
            for (object, p) in properties.iter().enumerate() {
                if let Some(slot) = scripts.slots.get(p.effect_slot as usize) {
                    if let Ok(program) = usize::try_from(slot[0]) {
                        self.execute(object, program, properties, scripts, &mut 128, [0.; 3]);
                    }
                }
            }
        }
        for mut task in pending {
            task.delay -= 1. / 60.;
            if task.delay > 0. {
                self.pending.push(task);
            } else {
                self.execute_at(
                    task.object,
                    task.program,
                    task.next,
                    properties,
                    scripts,
                    &mut 128,
                    task.impact,
                );
            }
        }
    }
    fn unsupported(&mut self, object: usize, program: usize, kind: u16) {
        if self.reported.insert((object, program, kind)) {
            self.events.push(ObjectEvent::Unsupported {
                object,
                program,
                kind,
            });
        }
    }
    pub fn contact(&mut self, object: usize, properties: &[Properties], scripts: &Scripts) {
        self.contact_with_velocity(object, properties, scripts, [0.; 3]);
    }
    pub fn advance_effects(&mut self) {
        self.damage_cooldown.retain(|_, ticks| {
            *ticks = ticks.saturating_sub(1);
            *ticks > 0
        });
        for effect in self.rigid.values_mut() {
            effect.age = effect.age.saturating_add(1);
        }
        for effect in self.fragments.values_mut() {
            effect.age = effect.age.saturating_add(1);
        }
    }
    pub fn contact_with_velocity(
        &mut self,
        object: usize,
        properties: &[Properties],
        scripts: &Scripts,
        impact: [f32; 3],
    ) {
        if self.disabled.contains(&object) {
            return;
        }
        if let Some(program) = scripts.contact_program(&properties[object]) {
            let mut budget = 128;
            self.execute(object, program, properties, scripts, &mut budget, impact);
        }
    }
    fn execute(
        &mut self,
        object: usize,
        program: usize,
        properties: &[Properties],
        scripts: &Scripts,
        budget: &mut usize,
        impact: [f32; 3],
    ) {
        self.execute_at(object, program, 0, properties, scripts, budget, impact);
    }
    fn execute_at(
        &mut self,
        object: usize,
        program: usize,
        start: usize,
        properties: &[Properties],
        scripts: &Scripts,
        budget: &mut usize,
        impact: [f32; 3],
    ) {
        let Some(commands) = scripts.programs.get(program) else {
            return;
        };
        for (command_index, command) in commands.iter().enumerate().skip(start) {
            if *budget == 0 {
                return;
            }
            *budget -= 1;
            match (command.kind, command.words.as_slice()) {
                // Breakable health: 0x0012b3d0, 0x0012b788, 0x0012b520.
                // The caller supplies the contact-normal component of velocity.
                (0, [14, _, health]) => {
                    if self.damage_cooldown.contains_key(&object) {
                        return;
                    }
                    if !self.damage_cooldown.contains_key(&object) {
                        let remaining =
                            self.damage.entry(object).or_insert(f32::from_bits(*health));
                        *remaining -=
                            impact.iter().map(|v| v * v).sum::<f32>().sqrt() * 0.036000002;
                        let broken = *remaining <= 0.;
                        self.damage_cooldown.insert(object, 30);
                        if broken {
                            let slot = &scripts.slots[properties[object].effect_slot as usize];
                            if let Ok(program) = usize::try_from(slot[4]) {
                                self.execute(object, program, properties, scripts, budget, impact);
                            } else {
                                self.disabled.insert(object);
                            }
                            return;
                        }
                    }
                }
                // 0x00122488 -> 0x001226c0: remove contact/bounce and start disabled state.
                (0, [5, 2 | 3]) => {
                    self.disabled.insert(object);
                }
                // 0x001243d0: rigid debris. 0x0012d4f8: mesh-fragment debris (subtype 20).
                (0, [20, _, _, _, _, _, _, _, _, _]) => {
                    if self.fragments.contains_key(&object) {
                        continue;
                    }
                    self.fragments
                        .insert(object, FragmentEffect::decode(&command.words, impact));
                    self.activated_debris.insert(object);
                    self.disabled.insert(object);
                    self.events.push(ObjectEvent::Debris { object });
                }
                (0, [0, lifetime, ..]) => {
                    if self.rigid.contains_key(&object) {
                        continue;
                    }
                    self.rigid.insert(
                        object,
                        FragmentEffect {
                            age: 0,
                            lifetime: (f32::from_bits(*lifetime) * 60.).max(60.) as u32,
                            gravity: 1. / 60.,
                            velocity: impact.map(|v| v * 0.65),
                            scatter: [0.; 3],
                        },
                    );
                    self.activated_debris.insert(object);
                    self.disabled.insert(object);
                    self.events.push(ObjectEvent::Debris { object });
                }
                (7, [id]) => self.events.push(ObjectEvent::Sound { object, id: *id }),
                // Particle creation is not a branch. It must not prevent the
                // following sound or destruction command from running.
                (1, [0, ..]) => self.events.push(ObjectEvent::Particle {
                    object,
                    words: command.words.clone(),
                }),
                (12, _) => self.events.push(ObjectEvent::ReturnToCourse { object }),
                (13 | 16 | 17, [value]) => self.events.push(ObjectEvent::RiderEffect {
                    object,
                    kind: command.kind,
                    value: f32::from_bits(*value),
                }),
                (3, [delay]) => {
                    let delay = f32::from_bits(*delay);
                    if delay.is_finite() && delay > 0. {
                        // Latch one instance of a delayed contact program per object.
                        if !self.pending.iter().any(|p| {
                            p.object == object
                                && p.program == program
                                && p.next == command_index + 1
                        }) {
                            self.pending.push(Continuation {
                                object,
                                program,
                                next: command_index + 1,
                                delay,
                                impact,
                            });
                        }
                        return;
                    }
                }
                (4, [source, op, threshold]) if *source <= 1 && *op <= 1 => {
                    // 0x00123098 returns -1 when the recorded rejection condition is true.
                    self.random = self.random.wrapping_mul(1664525).wrapping_add(1013904223);
                    let value = if *source == 1 {
                        (self.random >> 8) as f32 / 16777216.
                    } else {
                        impact.iter().map(|v| v * v).sum::<f32>().sqrt()
                    };
                    let threshold = f32::from_bits(*threshold)
                        * if *source == 0 && *op == 1 {
                            27.777777
                        } else {
                            1.
                        };
                    if (*op == 0 && value > threshold) || (*op == 1 && value < threshold) {
                        return;
                    }
                }
                // Constructors and virtual animation commands do not branch the VM.
                // Existing collision/lift/render adapters own these actor types.
                (0, [7 | 15 | 16 | 18 | 21, ..]) => {}
                (0, [17 | 256..=259, ..]) | (1, [1 | 2, ..]) | (2 | 8 | 9 | 10, _) => {
                    self.unsupported(object, program, command.kind);
                }
                // 0x00123098 case 6: invoke a program on a grid/instance target.
                (6, [grid, index, next]) => {
                    if let Some(target) = properties
                        .iter()
                        .position(|p| p.id == [*grid as u16, *index as u16])
                    {
                        self.execute(target, *next as usize, properties, scripts, budget, impact);
                    }
                }
                _ => {
                    self.unsupported(object, program, command.kind);
                    // Do not execute later actions past an unported condition or delay.
                    return;
                }
            }
        }
    }
}

/// Material category selected by 0x001f8aa0 for contact sounds.
/// These names do not define whether an object breaks. WFX contact scripts do that.
pub fn sound_surface(surface: u32) -> &'static str {
    match surface {
        0 | 3 => "POWDER",
        2 => "LOOSE",
        5 | 6 => "ICE",
        9..=11 => "ROCK",
        12 => "WOOD",
        13 => "METAL",
        14 => "GLASS",
        _ => "PACK",
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    #[test]
    fn world_script_delay_preserves_order_and_linked_target() {
        let properties = vec![
            Properties {
                effect_slot: 0,
                ..Default::default()
            },
            Properties {
                id: [7, 9],
                effect_slot: -1,
                ..Default::default()
            },
        ];
        let scripts = Scripts {
            slots: vec![[0, -1, -1, -1, -1, -1, -1]],
            programs: vec![
                vec![
                    Effect {
                        kind: 7,
                        words: vec![10],
                    },
                    Effect {
                        kind: 3,
                        words: vec![0.1f32.to_bits()],
                    },
                    Effect {
                        kind: 6,
                        words: vec![7, 9, 1],
                    },
                    Effect {
                        kind: 7,
                        words: vec![12],
                    },
                ],
                vec![Effect {
                    kind: 7,
                    words: vec![11],
                }],
            ],
        };
        let mut state = ObjectState::default();
        state.tick_scripts(&properties, &scripts);
        assert_eq!(state.events.len(), 1);
        for _ in 0..5 {
            state.tick_scripts(&properties, &scripts);
        }
        assert_eq!(state.events.len(), 1, "Delay fired before its deadline");
        for _ in 0..3 {
            state.tick_scripts(&properties, &scripts);
        }
        let sounds: Vec<_> = state
            .events
            .iter()
            .filter_map(|e| {
                if let ObjectEvent::Sound { object, id } = e {
                    Some((*object, *id))
                } else {
                    None
                }
            })
            .collect();
        assert_eq!(sounds, vec![(0, 10), (1, 11), (0, 12)]);
        for _ in 0..60 {
            state.tick_scripts(&properties, &scripts);
        }
        assert_eq!(state.events.len(), 3, "Load programs must run only once");
    }

    #[test]
    fn speed_condition_prevents_later_actions() {
        let properties = vec![Properties {
            effect_slot: 0,
            ..Default::default()
        }];
        let scripts = Scripts {
            slots: vec![[-1, 0, -1, -1, -1, -1, -1]],
            programs: vec![vec![
                Effect {
                    kind: 4,
                    words: vec![0, 1, 36f32.to_bits()],
                },
                Effect {
                    kind: 7,
                    words: vec![7],
                },
            ]],
        };
        let mut state = ObjectState::default();
        state.contact_with_velocity(0, &properties, &scripts, [0., 900., 0.]);
        assert!(state.events.is_empty());
        state.contact_with_velocity(0, &properties, &scripts, [0., 1100., 0.]);
        assert!(matches!(
            state.events.as_slice(),
            [ObjectEvent::Sound { id: 7, .. }]
        ));
    }

    #[test]
    #[ignore = "requires the original disc"]
    fn original_pickup_scripts_emit_effects_then_disable_once() {
        let (level, _) =
            crate::load_track(std::path::Path::new("extracted/DATA/MODELS/SNOW.BIG")).unwrap();
        let properties: Vec<_> = level
            .instances
            .iter()
            .map(|i| i.properties.clone())
            .collect();
        let scripts = &level.effects.scripts;
        for kind in [13, 16, 17] {
            let index = properties
                .iter()
                .position(|p| {
                    scripts
                        .contact_program(p)
                        .is_some_and(|n| scripts.programs[n].iter().any(|e| e.kind == kind))
                })
                .unwrap();
            let mut state = ObjectState::default();
            state.contact_with_velocity(index, &properties, scripts, [0., 2000., 0.]);
            assert!(state.disabled.contains(&index));
            assert!(
                state
                    .events
                    .iter()
                    .any(|e| matches!(e,ObjectEvent::RiderEffect{kind:k,..} if *k==kind))
            );
            assert!(
                state
                    .events
                    .iter()
                    .any(|e| matches!(e,ObjectEvent::Particle{words,..} if words.len()==52))
            );
            let count = state.events.len();
            state.contact(index, &properties, scripts);
            assert_eq!(state.events.len(), count);
        }
    }
    #[test]
    #[ignore = "requires the extracted disc"]
    fn original_barrier_scripts_disable_once_and_activate_recorded_debris() {
        let (level, _) =
            crate::load_track(std::path::Path::new("extracted/DATA/MODELS/SNOW.BIG")).unwrap();
        let properties: Vec<_> = level
            .instances
            .iter()
            .map(|i| i.properties.clone())
            .collect();
        for id in [[75, 14], [169, 3], [201, 3], [274, 2], [275, 3]] {
            let index = properties.iter().position(|p| p.id == id).unwrap();
            let mut state = ObjectState::default();
            state.contact(index, &properties, &level.effects.scripts);
            assert!(state.disabled.contains(&index), "barrier {id:?}");
            assert_eq!(
                state.activated_debris.len(),
                1,
                "barrier {id:?}, events {:?}",
                state.events
            );
            assert!(
                state
                    .events
                    .iter()
                    .any(|e| matches!(e, ObjectEvent::Sound { id: 64, .. }))
            );
            assert!(
                !state
                    .events
                    .iter()
                    .any(|e| matches!(e, ObjectEvent::Unsupported { .. }))
            );
            let count = state.events.len();
            state.contact(index, &properties, &level.effects.scripts);
            assert_eq!(
                state.events.len(),
                count,
                "A broken object must not replay its contact script"
            );
        }
    }
    #[test]
    fn surface_sound_mapping_uses_original_branches() {
        for (id, name) in [
            (0, "POWDER"),
            (1, "PACK"),
            (2, "LOOSE"),
            (3, "POWDER"),
            (4, "PACK"),
            (5, "ICE"),
            (6, "ICE"),
            (9, "ROCK"),
            (12, "WOOD"),
            (13, "METAL"),
            (14, "GLASS"),
            (u32::MAX, "PACK"),
        ] {
            assert_eq!(sound_surface(id), name);
        }
    }
}
