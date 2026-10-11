//! Disc BTNMAP parser and the analog evaluator at 0x00181810.
use crate::Result;
use std::collections::BTreeMap;
mod recovered {
    include!("input_constants.rs");
}
pub use recovered::DEADZONE;

#[derive(Clone, Debug)]
pub struct Binding {
    pub mask: u32,
    pub valid: u32,
}
#[derive(Clone, Debug, Default)]
pub struct Map {
    pub buttons: BTreeMap<String, Binding>,
    pub grabs: Vec<(String, Binding)>,
    pub axes: BTreeMap<String, Binding>,
}
#[derive(Clone, Copy, Debug, Default)]
pub struct Pad {
    pub buttons: u32,
    /// Axes use the logical BTNMAP convention: positive right and up.
    pub dpad: [f32; 2],
    pub left: [f32; 2],
    pub right: [f32; 2],
}
pub fn token(name: &str) -> Result<u32> {
    recovered::TOKENS
        .iter()
        .find(|t| t.0 == name)
        .map(|t| t.1)
        .ok_or_else(|| format!("Unknown BTNMAP token: {name}"))
}
fn mask(text: &str) -> Result<u32> {
    text.trim()
        .trim_matches(['(', ')'])
        .split('|')
        .try_fold(0, |m, t| Ok(m | token(t.trim())?))
}
impl Map {
    pub fn parse(source: &str) -> Result<Self> {
        let mut result = Self::default();
        let mut section = "";
        for (line, text) in source.lines().enumerate() {
            let text = text.split("//").next().unwrap().trim();
            if ["IS_BOOL", "IS_BOOLGRAB", "IS_ANALOG"].contains(&text) {
                section = text;
                continue;
            }
            if !text.starts_with('{') || !text.contains(',') {
                continue;
            }
            let fields: Vec<_> = text
                .trim_start_matches('{')
                .split('}')
                .next()
                .unwrap()
                .split(',')
                .map(str::trim)
                .collect();
            if fields.len() != 3 {
                return Err(format!("Invalid BTNMAP record at line {}", line + 1));
            }
            let binding = Binding {
                mask: mask(fields[1])?,
                valid: mask(fields[2])?,
            };
            let name = fields[0].to_owned();
            match section {
                "IS_BOOL" => {
                    result.buttons.insert(name, binding);
                }
                "IS_BOOLGRAB" => result.grabs.push((name, binding)),
                "IS_ANALOG" => {
                    result.axes.insert(name, binding);
                }
                _ => return Err("BTNMAP record has no section".into()),
            }
        }
        if result.buttons.len() != 21 || result.grabs.len() != 15 || result.axes.len() != 15 {
            return Err("BTNMAP must contain 21 buttons, 15 grabs, and 15 analog actions".into());
        }
        Ok(result)
    }
    pub fn pressed(&self, name: &str, pad: Pad) -> bool {
        self.buttons
            .get(name)
            .is_some_and(|b| b.mask != u32::MAX && pad.buttons & b.mask != 0)
    }
    /// VM_Grab requires the complete shoulder chord, without extra shoulders.
    pub fn grab(&self, pad: Pad) -> Option<usize> {
        self.active_grabs(pad)
            .into_iter()
            .max_by_key(|&i| self.grabs[i].1.mask.count_ones())
    }
    pub fn active_grabs(&self, pad: Pad) -> Vec<usize> {
        self.grabs
            .iter()
            .enumerate()
            .filter(|(_, (_, b))| b.mask != u32::MAX && pad.buttons & (b.mask | b.valid) == b.mask)
            .map(|(i, _)| i)
            .collect()
    }
    /// Original action IDs for a rider and board-style index. This does not execute tricks.
    pub fn grab_actions(&self, rider: usize, style: usize, pad: Pad) -> Option<Vec<u8>> {
        let row = crate::grab_actions::GRAB_ACTIONS.get(rider)?.get(style)?;
        Some(
            self.active_grabs(pad)
                .into_iter()
                .map(|slot| row[slot])
                .collect(),
        )
    }
    pub fn axis(&self, name: &str, pad: Pad) -> f32 {
        self.axes
            .get(name)
            .map_or(0.0, |b| analog(b.mask, b.valid != 0, pad))
    }
}
/// Port of the original axis source priority, sign gates, and deadzone.
/// Pad axes here already have the sign applied by the original initial negation.
pub fn analog(mask: u32, negate: bool, pad: Pad) -> f32 {
    let axis = if mask & 0x71c7 != 0 { 0 } else { 1 };
    let mut value = 0.0;
    if mask & 0x3f000 != 0 {
        value = pad.dpad[axis];
    }
    if value == 0.0 && mask & 0x3f != 0 {
        value = pad.left[axis];
    }
    if value == 0.0 && mask & 0xfc0 != 0 {
        value = pad.right[axis];
    }
    if mask & 0x12492 != 0 && value < 0.0
        || mask & 0x24924 != 0 && value > 0.0
        || value.abs() < DEADZONE
    {
        return 0.0;
    }
    if negate { -value } else { value }
}

#[cfg(test)]
mod tests {
    use super::*;
    #[test]
    fn original_axis_priority_sign_and_deadzone() {
        let mut p = Pad {
            dpad: [-1.0, 0.0],
            left: [0.9, -0.8],
            ..Default::default()
        };
        assert_eq!(analog(0x1001, false, p), -1.0);
        p.dpad = [0.0; 2];
        assert_eq!(analog(0x1001, false, p), 0.9);
        assert_eq!(analog(0x20, true, p), 0.8);
        assert_eq!(analog(0x10, false, p), 0.0);
        p.left[0] = DEADZONE;
        assert_eq!(analog(1, false, p), DEADZONE);
        p.left[0] = f32::from_bits(DEADZONE.to_bits() - 1);
        assert_eq!(analog(1, false, p), 0.0);
    }
    #[test]
    #[ignore = "requires the extracted disc"]
    fn all_disc_maps_and_chords() {
        let elf = std::fs::read("extracted/SLUS_200.95").unwrap();
        for rider in 0..8 {
            for style in 0..3 {
                for slot in 0..15 {
                    let offset =
                        4096 + 0x27e248 - 0x100000 + rider * 0xb4 + style * 0x3c + slot * 4;
                    let original = u32::from_le_bytes(elf[offset..offset + 4].try_into().unwrap());
                    assert_eq!(
                        crate::grab_actions::GRAB_ACTIONS[rider][style][slot] as u32,
                        original
                    );
                }
            }
        }
        for i in 0..8 {
            let source =
                std::fs::read_to_string(format!("extracted/DATA/CONFIG/BTNMAP{i}.DAT")).unwrap();
            let map = Map::parse(&source).unwrap();
            for (index, (_, binding)) in map.grabs.iter().enumerate() {
                if binding.mask != u32::MAX {
                    assert!(
                        map.active_grabs(Pad {
                            buttons: binding.mask,
                            ..Default::default()
                        })
                        .contains(&index)
                    );
                }
            }
            assert!(!map.pressed("Boost", Pad::default()));
            assert_eq!(map.grab(Pad::default()), None);
        }
    }
}
