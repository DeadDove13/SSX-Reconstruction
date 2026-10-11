//! Original SSX AIP paths and recovered path routines.
//!
//! Coordinates and distances stay in original game units. These routines do not
//! add a race state machine, physics constants, or inferred event meanings.
//! Source addresses refer to SLUS_200.95. See reconstruction coverage in docs.
use crate::{Result, binary::*};

#[derive(Debug, Clone)]
pub struct Segment {
    pub direction: [f32; 3],
    pub length: f32,
}

#[derive(Debug, Clone, PartialEq)]
pub struct Event {
    pub kind: u32,
    pub value: u32,
    pub start: f32,
    pub end: f32,
}

#[derive(Debug, Clone)]
pub struct Path {
    /// Race paths contain a float distance. AI paths use the same word as flags.
    pub header_word: u32,
    pub origin: [f32; 3],
    pub bounds_min: [f32; 3],
    pub bounds_max: [f32; 3],
    pub segments: Vec<Segment>,
    pub events: Vec<Event>,
}

#[derive(Debug, Clone)]
pub struct Network {
    pub race: Vec<Path>,
    pub ai: Vec<Path>,
    pub primary_race: usize,
    pub starts: [usize; 8],
}

#[derive(Debug, Clone, Copy, PartialEq)]
pub struct Projection {
    pub along: f32,
    pub lateral: f32,
    pub point: [f32; 3],
}

#[derive(Debug, Clone, Copy, Default)]
pub struct SearchCursor {
    pub segment: Option<usize>,
    pub segment_start: [f32; 3],
    pub distance_at_start: f32,
}

fn advance(point: [f32; 3], direction: [f32; 3], distance: f32) -> [f32; 3] {
    // Separate multiply and add match the instruction order. Do not use mul_add.
    std::array::from_fn(|i| point[i] + direction[i] * distance)
}

impl Path {
    /// 0x0019be28: sequential f32 sum of horizontal segment lengths.
    pub fn length(&self) -> f32 {
        self.segments.iter().fold(0.0, |sum, s| sum + s.length)
    }

    /// 0x0019bcf8. At the endpoint, the original returns `inside = false`.
    /// Negative distances extrapolate along the first segment.
    pub fn sample(&self, mut distance: f32) -> ([f32; 3], bool) {
        let mut point = self.origin;
        for segment in &self.segments {
            if distance < segment.length {
                return (advance(point, segment.direction, distance), true);
            }
            distance -= segment.length;
            point = advance(point, segment.direction, segment.length);
        }
        (point, false)
    }

    /// 0x0019ba80. Exact segment boundaries retain the preceding direction.
    pub fn direction(&self, mut distance: f32) -> Option<[f32; 3]> {
        for (index, segment) in self.segments.iter().enumerate() {
            if distance <= segment.length || index + 1 == self.segments.len() {
                return Some(segment.direction);
            }
            distance -= segment.length;
        }
        None
    }

    /// 0x0019b688: nearest point using XY distance. Z is interpolated, not used
    /// to choose a segment. Ties retain the first segment.
    pub fn project(&self, position: [f32; 3]) -> Option<Projection> {
        self.search(position, None)
    }

    /// 0x0019b848: resume at the cached segment and search at most 3000 units
    /// past the cached distance, including the first segment beyond that limit.
    pub fn project_cached(
        &self,
        position: [f32; 3],
        cursor: &mut SearchCursor,
    ) -> Option<Projection> {
        self.search(position, Some(cursor))
    }

    fn search(
        &self,
        position: [f32; 3],
        mut cursor: Option<&mut SearchCursor>,
    ) -> Option<Projection> {
        let cached = cursor.as_deref().copied().unwrap_or_default();
        let was_cached = cached.segment.is_some();
        let first = cached.segment.unwrap_or(0);
        let mut start = if was_cached {
            cached.segment_start
        } else {
            self.origin
        };
        let mut along = if was_cached {
            cached.distance_at_start
        } else {
            0.0
        };
        let limit = if was_cached { along + 3000.0 } else { 1.0e37 };
        let mut best_squared = 1.0e37;
        let mut best = None;
        for (index, segment) in self.segments.iter().enumerate().skip(first) {
            let dot = (position[0] - start[0]) * segment.direction[0]
                + (position[1] - start[1]) * segment.direction[1];
            let offset = dot.clamp(0.0, segment.length);
            let point = advance(start, segment.direction, offset);
            let dx = position[0] - point[0];
            let dy = position[1] - point[1];
            let squared = dx * dx + dy * dy;
            if squared < best_squared {
                best_squared = squared;
                best = Some(Projection {
                    along: along + offset,
                    lateral: squared.sqrt(),
                    point,
                });
                if let Some(cache) = cursor.as_deref_mut() {
                    *cache = SearchCursor {
                        segment: Some(index),
                        segment_start: start,
                        distance_at_start: along,
                    };
                }
                if was_cached && offset == dot {
                    break;
                }
            }
            if along > limit {
                break;
            }
            start = advance(start, segment.direction, segment.length);
            along += segment.length;
        }
        best
    }

    /// 0x0019bb78: maximum XY distance outside the stored bounding rectangle.
    pub fn bounds_distance(&self, position: [f32; 3]) -> f32 {
        let mut distance = 0.0_f32;
        for (axis, value) in position.iter().enumerate().take(2) {
            let delta = if *value < self.bounds_min[axis] {
                self.bounds_min[axis] - value
            } else if *value > self.bounds_max[axis] {
                value - self.bounds_max[axis]
            } else {
                0.0
            };
            distance = distance.max(delta);
        }
        distance
    }

    /// 0x0019bae8 and 0x0019bb38: first matching event in file order.
    pub fn find_event(&self, kind: u32, value: Option<u32>) -> Option<&Event> {
        self.events
            .iter()
            .find(|e| e.kind == kind && value.is_none_or(|v| e.value == v))
    }

    /// 0x0019bc00. Inclusive interval overlap preserves original file order.
    /// The bit mask omits an event when movement crosses its ending boundary
    /// from inside the event. A point event at the previous distance is omitted
    /// from the mask, but remains in the returned event list.
    pub fn events_between(
        &self,
        previous: f32,
        current: f32,
        initial_mask: u32,
    ) -> (Vec<&Event>, u32) {
        let mut mask = initial_mask;
        let mut found = Vec::new();
        if current < previous {
            return (found, mask);
        }
        for event in &self.events {
            if event.start <= current && previous <= event.end {
                found.push(event);
                if event.start > previous || current < event.end {
                    mask |= 1u32 << (event.kind & 31);
                }
            }
        }
        (found, mask)
    }

    /// 0x0019c0b0: adjust a path distance for original event types 14 and 15.
    /// Event names are deliberately unresolved until their callers are mapped.
    pub fn adjusted_sample(&self, distance: &mut f32) -> [f32; 3] {
        for event in &self.events {
            if event.start <= *distance && *distance <= event.end {
                if event.kind == 14 || (event.kind == 15 && event.value == 0) {
                    *distance = event.end;
                } else if event.kind == 15 {
                    *distance = event.start;
                }
            }
        }
        self.sample(*distance).0
    }
}

impl Network {
    /// 0x0019c810. Resolve remaining race distance to a path and position.
    pub fn at_remaining(&self, distance: f32) -> Option<(usize, [f32; 3])> {
        let distance = distance.min(f32::from_bits(self.race[self.primary_race].header_word));
        for (index, path) in self.race.iter().enumerate() {
            let local = f32::from_bits(path.header_word) - distance;
            if local >= 0.0 && local <= path.length() {
                return Some((index, path.sample(local).0));
            }
        }
        None
    }
}

/// 0x0019c230 and 0x0019b5e0, with checked host-memory access.
pub fn decode(data: &[u8]) -> Result<Network> {
    range(data, 0, 44)?;
    let races = u32le(data, 0)? as usize;
    let ais = u32le(data, 4)? as usize;
    let primary_race = u32le(data, 8)? as usize;
    if races == 0 || primary_race >= races {
        return Err("AIP primary race path is invalid".into());
    }
    let count = races.checked_add(ais).ok_or("AIP path count overflow")?;
    if count > (data.len() - 44) / 48 {
        return Err("AIP path table is truncated".into());
    }
    let mut starts = [0; 8];
    for (index, start) in starts.iter_mut().enumerate() {
        *start = u32le(data, 12 + 4 * index)? as usize;
        if *start >= ais {
            return Err("AIP start references a missing AI path".into());
        }
    }
    let mut offset = 44;
    let mut paths = Vec::with_capacity(count);
    for _ in 0..count {
        let header_word = u32le(data, offset)?;
        let segments = u32le(data, offset + 4)? as usize;
        let events = u32le(data, offset + 8)? as usize;
        let origin = vec3(data, offset + 12)?;
        let bounds_min = vec3(data, offset + 24)?;
        let bounds_max = vec3(data, offset + 36)?;
        offset += 48;
        let entries = segments
            .checked_add(events)
            .and_then(|n| n.checked_mul(16))
            .ok_or("AIP entry count overflow")?;
        range(data, offset, entries)?;
        let mut path = Path {
            header_word,
            origin,
            bounds_min,
            bounds_max,
            segments: Vec::with_capacity(segments),
            events: Vec::with_capacity(events),
        };
        for _ in 0..segments {
            let direction = vec3(data, offset)?;
            let length = f32le(data, offset + 12)?;
            if length < 0.0 {
                return Err("AIP segment has a negative length".into());
            }
            path.segments.push(Segment { direction, length });
            offset += 16;
        }
        for _ in 0..events {
            path.events.push(Event {
                kind: u32le(data, offset)?,
                value: u32le(data, offset + 4)?,
                start: f32le(data, offset + 8)?,
                end: f32le(data, offset + 12)?,
            });
            offset += 16;
        }
        paths.push(path);
    }
    if offset != data.len() {
        return Err(format!(
            "AIP has {} unparsed trailing bytes",
            data.len() - offset
        ));
    }
    let ai = paths.split_off(races);
    Ok(Network {
        race: paths,
        ai,
        primary_race,
        starts,
    })
}

#[cfg(test)]
mod tests {
    use super::*;
    fn path() -> Path {
        Path {
            header_word: 20.0_f32.to_bits(),
            origin: [0.0; 3],
            bounds_min: [0.0; 3],
            bounds_max: [10.0, 10.0, 10.0],
            segments: vec![
                Segment {
                    direction: [1.0, 0.0, 0.5],
                    length: 10.0,
                },
                Segment {
                    direction: [0.0, 1.0, 0.5],
                    length: 10.0,
                },
            ],
            events: vec![],
        }
    }
    #[test]
    fn boundaries_follow_original_comparisons() {
        let p = path();
        assert_eq!(p.sample(-2.0), ([-2.0, 0.0, -1.0], true));
        assert_eq!(p.sample(10.0), ([10.0, 0.0, 5.0], true));
        assert_eq!(p.direction(10.0), Some([1.0, 0.0, 0.5]));
        assert_eq!(p.sample(20.0), ([10.0, 10.0, 10.0], false));
        assert_eq!(p.sample(30.0), p.sample(20.0));
        let projected = p.project([6.0, 2.0, 900.0]).unwrap();
        assert_eq!(
            projected,
            Projection {
                along: 6.0,
                lateral: 2.0,
                point: [6.0, 0.0, 3.0]
            }
        );
    }
    #[test]
    fn events_preserve_inclusive_overlap_and_mask_edges() {
        let mut p = path();
        p.events = vec![
            Event {
                kind: 3,
                value: 7,
                start: 5.0,
                end: 8.0,
            },
            Event {
                kind: 9,
                value: 0,
                start: 10.0,
                end: 10.0,
            },
        ];
        assert_eq!(p.events_between(4.0, 11.0, 1).1, 1 | 8 | 512);
        assert_eq!(p.events_between(6.0, 9.0, 0).1, 0);
        assert_eq!(p.events_between(6.0, 7.0, 0).1, 8);
        assert_eq!(p.events_between(10.0, 11.0, 0), (vec![&p.events[1]], 0));
        assert!(p.events_between(11.0, 2.0, 0).0.is_empty());
    }
    #[test]
    fn rejects_truncated_and_invalid_aip() {
        assert!(decode(&[0; 44]).is_err());
    }
}
