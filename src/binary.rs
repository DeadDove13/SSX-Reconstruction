use crate::Result;

pub fn range(data: &[u8], offset: usize, size: usize) -> Result<&[u8]> {
    let end = offset.checked_add(size).ok_or("File offset overflow")?;
    data.get(offset..end)
        .ok_or_else(|| format!("Range {offset:#x}..{end:#x} exceeds {} bytes", data.len()))
}

pub fn u16le(data: &[u8], offset: usize) -> Result<u16> {
    Ok(u16::from_le_bytes(
        range(data, offset, 2)?.try_into().unwrap(),
    ))
}

pub fn u32le(data: &[u8], offset: usize) -> Result<u32> {
    Ok(u32::from_le_bytes(
        range(data, offset, 4)?.try_into().unwrap(),
    ))
}

pub fn u32be(data: &[u8], offset: usize) -> Result<u32> {
    Ok(u32::from_be_bytes(
        range(data, offset, 4)?.try_into().unwrap(),
    ))
}

pub fn f32le(data: &[u8], offset: usize) -> Result<f32> {
    let value = f32::from_bits(u32le(data, offset)?);
    if !value.is_finite() {
        return Err(format!("Non-finite float at {offset:#x}"));
    }
    Ok(value)
}

pub fn vec3(data: &[u8], offset: usize) -> Result<[f32; 3]> {
    Ok([
        f32le(data, offset)?,
        f32le(data, offset + 4)?,
        f32le(data, offset + 8)?,
    ])
}
