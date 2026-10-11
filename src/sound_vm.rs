//! Snow-contact sound expression VM reconstructed from SLUS_200.95.
//! Compiler: 0x00202c48. Evaluator: 0x00203310. Config loader: 0x001f9cb8.
//! Inputs are the integer values supplied to the original VM. Their conversion
//! from rider state and the audio playback backend are not reconstructed here.
use crate::Result;
use std::collections::BTreeMap;

#[derive(Debug, Clone, Default)]
pub struct Program {
    pub bytecode: Vec<u8>,
    pub ignored_tokens: Vec<String>,
}

#[derive(Debug, Clone, Copy, Default, PartialEq)]
pub struct State {
    pub accumulator: i32,
    pub volume: i32,
    pub bend: i32,
}

pub type Programs = BTreeMap<(String, String), Program>;

pub fn compile(source: &str) -> Result<Program> {
    let tokens: Vec<String> = source
        .lines()
        .flat_map(|line| {
            line.split('#')
                .next()
                .unwrap_or("")
                .split(|c: char| c.is_whitespace() || c == ',')
                .filter(|word| !word.is_empty())
                .map(str::to_ascii_uppercase)
        })
        .collect();
    let mut result = Program::default();
    let mut index = 0;
    while index < tokens.len() {
        let token = &tokens[index];
        index += 1;
        let (opcode, operands) = match token.as_str() {
            "LOAD" => {
                let variable = tokens.get(index).ok_or("LOAD requires a variable")?;
                let slot = ["SLIP", "DIG", "LEAN", "BOARD", "BEND"]
                    .iter()
                    .position(|name| name == variable)
                    .ok_or_else(|| format!("Unknown LOAD variable {variable}"))?;
                index += 1;
                result.bytecode.extend_from_slice(&[0, slot as u8]);
                continue;
            }
            "LOADCONST" => (1, 1),
            "MAP" => (2, 1),
            "SQUARE" => (3, 0),
            "SQRT" => (4, 0),
            "LOG" => (5, 0),
            "ADD" => (6, 1),
            "SUB" => (7, 1),
            "MUL" => (8, 1),
            "DIV" => (9, 1),
            "NEG" => (10, 0),
            "ABS" => (11, 0),
            "BOUND" => (12, 2),
            "PUSH" => (13, 0),
            "POP" => (14, 0),
            "SADD" => (15, 0),
            "SSUB" => (16, 0),
            "SMUL" => (17, 0),
            "SDIV" => (18, 0),
            "ASSIGNVOL" => (19, 0),
            "ASSIGNBEND" => (20, 0),
            _ => {
                // The original compiler skips unrecognized tokens. In particular,
                // the supplied SNOW.INF contains ADDS, which is not SADD.
                result.ignored_tokens.push(token.clone());
                continue;
            }
        };
        result.bytecode.push(opcode);
        for _ in 0..operands {
            let operand = tokens
                .get(index)
                .ok_or_else(|| format!("{token} is missing an operand"))?;
            let number = operand
                .parse::<i32>()
                .map_err(|_| format!("Invalid integer operand: {operand}"))?;
            result.bytecode.extend_from_slice(&number.to_le_bytes());
            index += 1;
        }
    }
    result.bytecode.push(0x7f);
    Ok(result)
}

pub fn parse_config(source: &str) -> Result<Programs> {
    let mut programs = Programs::new();
    let mut surfaces = Vec::<String>::new();
    let mut mode = None::<String>;
    let mut body = String::new();
    let flush = |programs: &mut Programs,
                 surfaces: &[String],
                 mode: &Option<String>,
                 body: &mut String|
     -> Result<()> {
        if let Some(mode) = mode {
            let program = compile(body)?;
            for surface in surfaces {
                programs.insert((surface.clone(), mode.clone()), program.clone());
            }
        }
        body.clear();
        Ok(())
    };
    for line in source.lines() {
        let line = line.split('#').next().unwrap_or("").trim();
        if line.is_empty() {
            continue;
        }
        if let Some(section) = line
            .strip_prefix('[')
            .and_then(|text| text.strip_suffix(']'))
        {
            let section = section.to_ascii_uppercase();
            if ["GLIDE", "AIGLIDE", "CARVE"].contains(&section.as_str()) {
                flush(&mut programs, &surfaces, &mode, &mut body)?;
                mode = Some(section);
            } else {
                if mode.is_some() {
                    flush(&mut programs, &surfaces, &mode, &mut body)?;
                    mode = None;
                    surfaces.clear();
                }
                surfaces.push(section);
            }
        } else {
            if mode.is_none() {
                return Err("Instruction appears outside a sound mode".into());
            }
            body.push_str(line);
            body.push('\n');
        }
    }
    flush(&mut programs, &surfaces, &mode, &mut body)?;
    Ok(programs)
}

impl Program {
    pub fn evaluate(&self, inputs: [i32; 5], state: &mut State) -> Result<()> {
        let mut cursor = 0;
        let mut stack = Vec::new();
        let read = |cursor: &mut usize| -> Result<i32> {
            let bytes = crate::binary::range(&self.bytecode, *cursor, 4)?;
            *cursor += 4;
            Ok(i32::from_le_bytes(bytes.try_into().unwrap()))
        };
        let divide = |a: i32, b: i32| -> Result<i32> {
            if b == 0 {
                Err("Sound VM division by zero".into())
            } else {
                Ok(a.wrapping_div(b))
            }
        };
        loop {
            let opcode = *self
                .bytecode
                .get(cursor)
                .ok_or("Sound VM has no stop instruction")?;
            cursor += 1;
            match opcode {
                0 => {
                    let slot = *self
                        .bytecode
                        .get(cursor)
                        .ok_or("Truncated LOAD instruction")?
                        as usize;
                    cursor += 1;
                    state.accumulator = *inputs.get(slot).ok_or("Invalid sound input index")?;
                }
                1 => state.accumulator = read(&mut cursor)?,
                2 => {
                    state.accumulator =
                        divide(state.accumulator.wrapping_mul(127), read(&mut cursor)?)?
                            .clamp(0, 127)
                }
                3 => state.accumulator = state.accumulator.wrapping_mul(state.accumulator),
                4 => {
                    if state.accumulator < 0 {
                        return Err(
                            "Negative SQRT input requires PS2 FPU behavior validation".into()
                        );
                    }
                    state.accumulator = (state.accumulator as f32).sqrt() as i32;
                }
                5 => {} // LOG is emitted by the compiler but has no evaluator case.
                6 => state.accumulator = state.accumulator.wrapping_add(read(&mut cursor)?),
                7 => state.accumulator = state.accumulator.wrapping_sub(read(&mut cursor)?),
                8 => state.accumulator = state.accumulator.wrapping_mul(read(&mut cursor)?),
                9 => state.accumulator = divide(state.accumulator, read(&mut cursor)?)?,
                10 => state.accumulator = state.accumulator.wrapping_neg(),
                11 => state.accumulator = state.accumulator.wrapping_abs(),
                12 => {
                    let low = read(&mut cursor)?;
                    let high = read(&mut cursor)?;
                    state.accumulator = state.accumulator.min(high).max(low);
                }
                13 => {
                    if stack.len() == 16 {
                        return Err("Sound VM stack exceeds 16 entries".into());
                    }
                    stack.push(state.accumulator);
                }
                14 => state.accumulator = stack.pop().ok_or("Sound VM stack underflow")?,
                15..=18 => {
                    let top = stack.pop().ok_or("Sound VM stack underflow")?;
                    let previous = stack.pop().ok_or("Sound VM stack underflow")?;
                    let value = match opcode {
                        15 => top.wrapping_add(previous),
                        16 => top.wrapping_sub(previous),
                        17 => top.wrapping_mul(previous),
                        _ => divide(top, previous)?,
                    };
                    stack.push(value);
                }
                19 => state.volume = state.accumulator,
                20 => state.bend = state.accumulator,
                0x7f => return Ok(()),
                _ => return Err(format!("Unknown sound VM opcode {opcode:#x}")),
            }
        }
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    #[test]
    fn preserves_integer_map_clamping_and_top_first_subtraction() {
        let program = compile(
            "LoadConst 2 Push LoadConst 5 Push SSub Pop AssignVol LoadConst 200 Map 100 AssignBend",
        )
        .unwrap();
        let mut state = State::default();
        program.evaluate([0; 5], &mut state).unwrap();
        assert_eq!((state.volume, state.bend), (3, 127));
    }
    #[test]
    fn preserves_the_disc_adds_typo() {
        let program = compile("LoadConst 10 Push LoadConst 20 Push AddS Pop AssignBend").unwrap();
        let mut state = State::default();
        program.evaluate([0; 5], &mut state).unwrap();
        assert_eq!(state.bend, 20);
        assert_eq!(program.ignored_tokens, ["ADDS"]);
    }
    #[test]
    fn reports_stack_and_division_faults() {
        assert!(
            compile("Pop")
                .unwrap()
                .evaluate([0; 5], &mut State::default())
                .is_err()
        );
        assert!(
            compile("Div 0")
                .unwrap()
                .evaluate([0; 5], &mut State::default())
                .is_err()
        );
    }
    #[test]
    fn expands_surface_aliases() {
        let programs = parse_config(
            "[PACK]\n[ICE]\n[GLIDE]\nLoad Slip\nAssignVol\n[WOOD]\n[GLIDE]\nLoadConst 7\nAssignVol",
        )
        .unwrap();
        assert_eq!(programs.len(), 3);
        let mut state = State::default();
        programs[&("ICE".into(), "GLIDE".into())]
            .evaluate([42, 0, 0, 0, 0], &mut state)
            .unwrap();
        assert_eq!(state.volume, 42);
    }
}
