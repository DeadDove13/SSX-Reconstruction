//! PFDx version 1 segment graph and cached PCM reader.
//! Branch ranges are inferred from the disc. Game-specific events remain unported.
use crate::{Result, audio_bank::Clip, binary::*};
#[derive(Clone, Debug)]
pub struct Edge {
    pub low: u8,
    pub high: u8,
    pub target: usize,
}
#[derive(Clone, Debug)]
pub struct Graph {
    pub start: usize,
    pub nodes: Vec<Vec<Edge>>,
}
impl Graph {
    pub fn decode(data: &[u8]) -> Result<Self> {
        if range(data, 0, 5)? != b"PFDx\x01" {
            return Err("Unsupported music graph".into());
        }
        let count = range(data, 6, 1)?[0] as usize;
        let start = *range(data, 12 + count * 28, 1)?.first().unwrap() as usize;
        if count == 0 || start >= count {
            return Err("Invalid music start node".into());
        }
        let mut nodes = Vec::new();
        for i in 0..count {
            let record = range(data, 12 + i * 28, 28)?;
            let count = record[1] as usize;
            if count > 8 {
                return Err("Invalid music branch count".into());
            }
            let mut edges = Vec::new();
            for j in 0..count {
                let p = 4 + j * 3;
                let (low, high, target) = (record[p], record[p + 1], record[p + 2] as usize);
                if low > high || high > 100 || target >= data[6] as usize {
                    return Err("Invalid music branch".into());
                }
                edges.push(Edge { low, high, target });
            }
            for draw in 0..=100 {
                if !edges.is_empty() && !edges.iter().any(|e| e.low <= draw && draw <= e.high) {
                    return Err("Music branch ranges have a gap".into());
                }
            }
            nodes.push(edges);
        }
        Ok(Self { start, nodes })
    }
    pub fn next(&self, node: usize, draw: u8) -> usize {
        self.nodes[node]
            .iter()
            .find(|e| e.low <= draw && draw <= e.high)
            .map_or(self.start, |e| e.target)
    }
}
pub fn pcm_wave(data: &[u8]) -> Result<Clip> {
    if range(data, 0, 4)? != b"RIFF" || range(data, 8, 4)? != b"WAVE" {
        return Err("Expected cached PCM WAV".into());
    }
    let mut p = 12;
    let mut format = None;
    let mut samples = None;
    while p + 8 <= data.len() {
        let len = u32le(data, p + 4)? as usize;
        let chunk = range(data, p + 8, len)?;
        match &data[p..p + 4] {
            b"fmt " => {
                if u16le(chunk, 0)? != 1 || u16le(chunk, 14)? != 16 {
                    return Err("Expected 16-bit PCM".into());
                }
                format = Some((u16le(chunk, 2)?, u32le(chunk, 4)?));
            }
            b"data" => {
                if len % 2 != 0 {
                    return Err("Truncated PCM sample".into());
                }
                samples = Some(
                    chunk
                        .chunks_exact(2)
                        .map(|v| i16::from_le_bytes([v[0], v[1]]))
                        .collect::<Vec<_>>(),
                );
            }
            _ => {}
        }
        p += 8 + len + (len & 1);
    }
    let (channels, rate) = format.ok_or("WAV has no format")?;
    let samples = samples.ok_or("WAV has no samples")?;
    if !(1..=2).contains(&channels)
        || rate == 0
        || samples.is_empty()
        || samples.len() % channels as usize != 0
    {
        return Err("Invalid PCM format or length".into());
    }
    Ok(Clip {
        channels,
        rate,
        samples,
        loop_samples: None,
    })
}
#[cfg(test)]
mod tests {
    use super::*;
    #[test]
    #[ignore = "requires original disc music"]
    fn every_original_graph_has_valid_branches() {
        for path in std::fs::read_dir("extracted/music/data/audio").unwrap() {
            let path = path.unwrap().path();
            if path.extension().is_some_and(|e| e == "mpf") {
                Graph::decode(&std::fs::read(&path).unwrap())
                    .unwrap_or_else(|e| panic!("{}: {e}", path.display()));
            }
        }
    }
    #[test]
    fn wave_round_trip() {
        let clip = Clip {
            samples: vec![-32768, 32767, 0, 1],
            rate: 24000,
            channels: 2,
            loop_samples: None,
        };
        let decoded = pcm_wave(&clip.wav()).unwrap();
        assert_eq!(decoded.samples, clip.samples);
        assert_eq!(decoded.rate, 24000);
    }
}
