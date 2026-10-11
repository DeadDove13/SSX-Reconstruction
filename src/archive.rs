//! BIGF/BIG4 containers and RefPack streams used by the supplied SSX disc.
use crate::{Result, binary::*};
use serde::Serialize;

#[derive(Debug, Clone, Serialize)]
pub struct Member {
    pub path: String,
    pub offset: usize,
    pub packed_size: usize,
}

pub fn index(data: &[u8]) -> Result<Vec<Member>> {
    if !matches!(range(data, 0, 4)?, b"BIGF" | b"BIG4") {
        return Err("Unsupported archive signature. Expected BIGF or BIG4".into());
    }
    let count = u32be(data, 8)? as usize;
    let header_end = u32be(data, 12)? as usize;
    if count > data.len() / 9 || !(16..=data.len()).contains(&header_end) {
        return Err("Invalid BIG archive header bounds".into());
    }
    let mut cursor = 16;
    let mut members = Vec::with_capacity(count);
    for _ in 0..count {
        let offset = u32be(data, cursor)? as usize;
        let packed_size = u32be(data, cursor + 4)? as usize;
        cursor += 8;
        let names = range(
            data,
            cursor,
            header_end
                .checked_sub(cursor)
                .ok_or("BIG header is too short")?,
        )?;
        let length = names
            .iter()
            .position(|b| *b == 0)
            .ok_or("Unterminated BIG member path")?;
        let path = std::str::from_utf8(&names[..length])
            .map_err(|e| e.to_string())?
            .replace('\\', "/");
        if path.is_empty()
            || path.starts_with('/')
            || path.contains(':')
            || path
                .split('/')
                .any(|p| p == ".." || p == "." || p.is_empty())
        {
            return Err(format!("Unsafe archive member path: {path}"));
        }
        range(data, offset, packed_size)?;
        if offset < header_end {
            return Err(format!("Member overlaps the archive header: {path}"));
        }
        members.push(Member {
            path,
            offset,
            packed_size,
        });
        cursor += length + 1;
    }
    Ok(members)
}

pub fn extract(data: &[u8], member: &Member) -> Result<Vec<u8>> {
    let packed = range(data, member.offset, member.packed_size)?;
    if packed.starts_with(&[0x10, 0xfb]) {
        refpack(packed)
    } else {
        Ok(packed.to_vec())
    }
}

pub fn refpack(data: &[u8]) -> Result<Vec<u8>> {
    if range(data, 0, 2)? != [0x10, 0xfb] {
        return Err("Unsupported RefPack header".into());
    }
    let size = range(data, 2, 3)?
        .iter()
        .fold(0usize, |v, b| (v << 8) | *b as usize);
    let mut out = Vec::with_capacity(size);
    let mut pos = 5;
    loop {
        let code = range(data, pos, 1)?[0] as usize;
        pos += 1;
        let (literals, distance, length, stop) = if code < 0x80 {
            let next = range(data, pos, 1)?[0] as usize;
            pos += 1;
            (
                code & 3,
                ((code & 0x60) << 3) + next + 1,
                ((code & 0x1c) >> 2) + 3,
                false,
            )
        } else if code < 0xc0 {
            let bytes = range(data, pos, 2)?;
            pos += 2;
            (
                (bytes[0] >> 6) as usize,
                (((bytes[0] & 0x3f) as usize) << 8) + bytes[1] as usize + 1,
                (code & 0x3f) + 4,
                false,
            )
        } else if code < 0xe0 {
            let bytes = range(data, pos, 3)?;
            pos += 3;
            (
                code & 3,
                ((code & 0x10) << 12) + ((bytes[0] as usize) << 8) + bytes[1] as usize + 1,
                ((code & 0x0c) << 6) + bytes[2] as usize + 5,
                false,
            )
        } else if code < 0xfc {
            (((code & 0x1f) + 1) * 4, 0, 0, false)
        } else {
            (code & 3, 0, 0, true)
        };
        if out.len() + literals + length > size {
            return Err("RefPack command exceeds the declared output size".into());
        }
        out.extend_from_slice(range(data, pos, literals)?);
        pos += literals;
        if length > 0 {
            if distance == 0 || distance > out.len() {
                return Err("RefPack back-reference precedes the output".into());
            }
            for _ in 0..length {
                out.push(out[out.len() - distance]);
            }
        }
        if stop {
            if out.len() != size {
                return Err(format!(
                    "RefPack produced {} bytes; expected {size}",
                    out.len()
                ));
            }
            return Ok(out);
        }
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn decodes_overlapping_match_and_stop() {
        // One literal A followed by a three-byte match at distance one.
        assert_eq!(
            refpack(&[0x10, 0xfb, 0, 0, 4, 1, 0, b'A', 0xfc]).unwrap(),
            b"AAAA"
        );
    }

    #[test]
    fn rejects_invalid_reference_and_truncation() {
        assert!(refpack(&[0x10, 0xfb, 0, 0, 3, 0, 0, 0xfc]).is_err());
        assert!(refpack(&[0x10, 0xfb, 0, 0, 4, 0xe0, b'A']).is_err());
        assert!(refpack(&[0x10, 0xfb, 0, 0, 5, 0xfc]).is_err());
    }
}
