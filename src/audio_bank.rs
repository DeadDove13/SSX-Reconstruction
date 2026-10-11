//! EA BNKl v4 PS2 bank reader. Slot numbers remain identical to the disc.
//! Format reference: vgmstream src/meta/ea_schl.c (ISC license).
use crate::{Result, binary::*};
#[derive(Clone, Debug)]
pub struct Clip {
    pub samples: Vec<i16>,
    pub rate: u32,
    pub channels: u16,
    pub loop_samples: Option<(u32, u32)>,
}
impl Clip {
    pub fn wav(&self) -> Vec<u8> {
        let size = (self.samples.len() * 2) as u32;
        let mut b = Vec::with_capacity(size as usize + 44);
        b.extend(b"RIFF");
        b.extend((size + 36).to_le_bytes());
        b.extend(b"WAVEfmt ");
        b.extend(16u32.to_le_bytes());
        b.extend(1u16.to_le_bytes());
        b.extend(self.channels.to_le_bytes());
        b.extend(self.rate.to_le_bytes());
        b.extend((self.rate * self.channels as u32 * 2).to_le_bytes());
        b.extend((self.channels * 2).to_le_bytes());
        b.extend(16u16.to_le_bytes());
        b.extend(b"data");
        b.extend(size.to_le_bytes());
        for sample in &self.samples {
            b.extend(sample.to_le_bytes());
        }
        b
    }
}
pub fn decode(data: &[u8]) -> Result<Vec<Option<Clip>>> {
    if range(data, 0, 4)? != b"BNKl" || *range(data, 4, 1)?.first().unwrap() != 4 {
        return Err("Expected an EA BNKl version 4 bank".into());
    }
    let count = u16le(data, 6)? as usize;
    range(data, 20, count * 4)?;
    (0..count)
        .map(|i| {
            let entry = 20 + i * 4;
            let offset = u32le(data, entry)? as usize;
            if offset == 0 {
                return Ok(None);
            }
            let mut cursor = entry + offset;
            if range(data, cursor, 4)? != b"PT\x05\0" {
                return Err(format!("Unsupported bank platform at slot {i}"));
            }
            cursor += 4;
            let mut tags = std::collections::BTreeMap::new();
            loop {
                let tag = range(data, cursor, 1)?[0];
                cursor += 1;
                if tag == 0xff || tag == 0xfe {
                    break;
                }
                if tag == 0xfd || tag == 0xfc {
                    continue;
                }
                let mut size = range(data, cursor, 1)?[0] as usize;
                cursor += 1;
                if size == 255 {
                    size = u32be(data, cursor)? as usize;
                    cursor += 4;
                }
                let raw = range(data, cursor, size)?;
                if size <= 4 {
                    tags.insert(tag, raw.iter().fold(0u32, |a, &v| (a << 8) | v as u32));
                }
                cursor += size;
            }
            if tags.get(&0xa0).is_some_and(|&c| c != 5) || tags.get(&0x83).is_some_and(|&c| c != 3)
            {
                return Err(format!("Unsupported bank codec at slot {i}"));
            }
            let channels = *tags.get(&0x82).unwrap_or(&1);
            if !(1..=2).contains(&channels) {
                return Err(format!("Unsupported channel count at slot {i}"));
            }
            let rate = *tags.get(&0x84).unwrap_or(&22050);
            if rate == 0 {
                return Err("Audio sample rate is zero".into());
            }
            let count = *tags.get(&0x85).ok_or("Bank sound has no sample count")?;
            let mut samples = vec![0i16; count as usize * channels as usize];
            for channel in 0..channels as usize {
                let offset = *tags
                    .get(&(0x88 + channel as u8))
                    .ok_or("Bank sound has no channel offset")?
                    as usize;
                let bytes = range(data, offset, (count as usize).div_ceil(28) * 16)?;
                let mut history = [0i32; 2];
                let mut frame_sample = 0;
                const COEF: [[i32; 2]; 5] = [[0, 0], [60, 0], [115, -52], [98, -55], [122, -60]];
                for frame in bytes.chunks_exact(16) {
                    let shift = frame[0] & 15;
                    let filter = (frame[0] >> 4) as usize;
                    if filter >= 5 || shift > 12 {
                        return Err(format!("Invalid PS ADPCM frame at slot {i}"));
                    }
                    for &byte in &frame[2..] {
                        for nibble in [byte & 15, byte >> 4] {
                            let signed = (nibble as i32 ^ 8) - 8;
                            let value = ((signed << 12) >> shift)
                                + ((history[0] * COEF[filter][0]
                                    + history[1] * COEF[filter][1]
                                    + 32)
                                    >> 6);
                            let value = value.clamp(-32768, 32767);
                            history = [value, history[0]];
                            if frame_sample < count as usize {
                                samples[frame_sample * channels as usize + channel] = value as i16;
                            }
                            frame_sample += 1;
                        }
                    }
                }
            }
            let loop_samples = tags
                .get(&0x87)
                .map(|&end| (*tags.get(&0x86).unwrap_or(&0), end + 1));
            if loop_samples.is_some_and(|(start, end)| start >= end || end > count) {
                return Err(format!("Invalid loop bounds at slot {i}"));
            }
            Ok(Some(Clip {
                samples,
                rate,
                channels: channels as u16,
                loop_samples,
            }))
        })
        .collect()
}
#[cfg(test)]
mod tests {
    use super::*;
    #[test]
    #[ignore = "requires extracted audio"]
    fn snow_bank_preserves_sparse_ids_and_loops() {
        let main =
            decode(&std::fs::read("extracted/audio/data/audio/zbxsfx.bnk").unwrap()).unwrap();
        let track =
            decode(&std::fs::read("extracted/audio/data/audio/snowdream1.bnk").unwrap()).unwrap();
        assert_eq!(main.len(), 128);
        assert!(main[64].is_none());
        assert!(main[0].as_ref().unwrap().loop_samples.is_some());
        let glass = track[64].as_ref().unwrap();
        assert!(glass.samples.iter().any(|&s| s != 0));
        assert!(glass.rate > 8000);
    }
    #[test]
    #[ignore = "requires extracted audio"]
    fn all_track_banks_decode() {
        for name in [
            "snowdream1",
            "mesablanca1",
            "elysium1",
            "iceberg1",
            "merqurycity1",
            "megaplex1",
            "untracked1",
            "pipedream1",
            "circuit1",
        ] {
            let data = std::fs::read(format!("extracted/audio/data/audio/{name}.bnk")).unwrap();
            let clips = decode(&data).unwrap_or_else(|e| panic!("{name}: {e}"));
            assert!(clips.iter().any(Option::is_some), "{name}");
        }
    }
}
