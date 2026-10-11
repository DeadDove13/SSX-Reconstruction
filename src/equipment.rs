//! Original rider and equipment records. Progression unlocks remain unported.
use serde::Deserialize;
use std::sync::OnceLock;
#[derive(Deserialize)]
pub struct Board {
    pub name: String,
    pub style: usize,
    pub stats: [u8; 4],
}
#[derive(Deserialize)]
pub struct Rider {
    pub name: String,
    pub base_stats: [u8; 16],
    pub limits: [u8; 4],
    pub stance: i32,
    pub boards: Vec<Board>,
    pub outfits: Vec<String>,
}
pub fn catalog() -> &'static [Rider] {
    static DATA: OnceLock<Vec<Rider>> = OnceLock::new();
    DATA.get_or_init(|| {
        serde_json::from_str(include_str!("../assets/frontend/catalog.json"))
            .expect("Invalid equipment catalog")
    })
}
const GROUPS: [&[usize]; 4] = [&[3, 5], &[0, 11], &[4, 8], &[6, 12, 15]];
impl Rider {
    /// The original no-progression branch of 0x00158808: 75% rider + 25% board.
    pub fn stats(&self, board: usize) -> [u8; 16] {
        let mut stats = self.base_stats;
        for (group, &bonus) in GROUPS.iter().zip(&self.boards[board].stats) {
            for &i in *group {
                stats[i] = (self.base_stats[i] as f32 * 0.75 + bonus as f32 * 0.25) as u8;
            }
        }
        stats
    }
    pub fn display_stats(&self, board: usize) -> [u8; 4] {
        let stats = self.stats(board);
        GROUPS.map(|g| (g.iter().map(|&i| stats[i] as u32).sum::<u32>() / g.len() as u32) as u8)
    }
    pub fn physics_stats(&self, board: usize) -> crate::physics::RiderStats {
        let s = self.stats(board).map(|v| ((v as u32 * 255) / 100) as u8);
        crate::physics::RiderStats {
            stat_0e: s[0],
            stat_11: s[3],
            stat_13: s[5],
            stat_19: s[11],
            preferred_stance: self.stance,
        }
    }
}
#[cfg(test)]
mod tests {
    use super::*;
    #[test]
    fn original_equipment_has_all_riders_boards_and_outfits() {
        assert_eq!(catalog().len(), 8);
        for r in catalog() {
            assert_eq!(r.boards.len(), 11);
            assert_eq!(r.outfits.len(), 4);
            for b in &r.boards {
                assert!(b.style < 3);
            }
        }
        assert_eq!(
            catalog()[3].boards[10].name,
            "Interrupting Pirate (Freestyle)"
        );
        assert_eq!(catalog()[3].outfits[0], "Sunday Best");
        assert_ne!(
            catalog()[3].display_stats(0),
            catalog()[3].display_stats(10)
        );
    }
}
