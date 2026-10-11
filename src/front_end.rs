//! Native menu choices. The original frontend state machine is not yet ported.
use serde::{Deserialize, Serialize};
pub const TRACKS: [(&str, &str, usize); 9] = [
    ("SNOW", "Snowdream", 120),
    ("ALOHA", "Aloha Ice Jam", 123),
    ("ELYSIUM", "Elysium Alps", 121),
    ("MERQUERY", "Merqury City Meltdown", 126),
    ("MEGAPLEX", "Tokyo Megaplex", 127),
    ("MESA", "Mesablanca", 122),
    ("PIPE", "Pipedream", 125),
    ("UNTRACK", "Untracked", 124),
    ("WARMUP", "Warmup", 128),
];
#[derive(Clone, Copy, Debug, PartialEq, Eq, Default)]
pub enum Event {
    #[default]
    Race,
    Showoff,
    Freeride,
    Warmup,
}
impl Event {
    pub fn name(self) -> &'static str {
        match self {
            Self::Race => "Race",
            Self::Showoff => "Showoff",
            Self::Freeride => "Freeride",
            Self::Warmup => "Warmup",
        }
    }
}
#[derive(Clone, Debug, Serialize, Deserialize)]
#[serde(default)]
pub struct Settings {
    pub video: VideoSettings,
    pub music: f32,
    pub effects: f32,
    pub speech: f32,
    pub mph: bool,
    pub input_map: usize,
    pub camera: usize,
    pub boards: [usize; 8],
    pub outfits: [usize; 8],
}
impl Default for Settings {
    fn default() -> Self {
        Self {
            video: VideoSettings::default(),
            music: 0.35,
            effects: 0.7,
            speech: 0.9,
            mph: false,
            input_map: 0,
            camera: 0,
            boards: [0; 8],
            outfits: [0; 8],
        }
    }
}
impl Settings {
    pub fn load() -> Self {
        let mut s: Self = std::fs::read(crate::storage::settings_file())
            .ok()
            .and_then(|b| serde_json::from_slice(&b).ok())
            .unwrap_or_default();
        s.music = s.music.clamp(0., 1.);
        s.effects = s.effects.clamp(0., 1.);
        s.speech = s.speech.clamp(0., 1.);
        s.input_map %= 8;
        s.camera %= 3;
        for b in &mut s.boards {
            *b %= 11;
        }
        for o in &mut s.outfits {
            *o %= 4;
        }
        s.video.validate();
        s
    }
    pub fn save(&self) -> crate::Result<()> {
        let path = crate::storage::settings_file();
        std::fs::create_dir_all(path.parent().unwrap()).map_err(|e| e.to_string())?;
        std::fs::write(path, serde_json::to_vec_pretty(self).unwrap()).map_err(|e| e.to_string())
    }
}

#[derive(Clone, Copy, Debug, Default, Serialize, Deserialize, PartialEq, Eq)]
pub enum DisplayMode {
    #[default]
    Windowed,
    Borderless,
    Fullscreen,
}
impl DisplayMode {
    pub fn name(self) -> &'static str {
        match self {
            Self::Windowed => "Windowed",
            Self::Borderless => "Borderless",
            Self::Fullscreen => "Fullscreen",
        }
    }
    pub fn cycle(self, delta: i32) -> Self {
        let i = match self {
            Self::Windowed => 0,
            Self::Borderless => 1,
            Self::Fullscreen => 2,
        };
        [Self::Windowed, Self::Borderless, Self::Fullscreen][(i + delta).rem_euclid(3) as usize]
    }
}
#[derive(Clone, Copy, Debug, Serialize, Deserialize, PartialEq, Eq)]
#[serde(default)]
pub struct VideoSettings {
    pub mode: DisplayMode,
    pub resolution: [u32; 2],
    pub vsync: bool,
    pub taa: bool,
    pub bloom: bool,
}
impl Default for VideoSettings {
    fn default() -> Self {
        Self {
            mode: DisplayMode::Windowed,
            resolution: [1440, 900],
            vsync: true,
            taa: true,
            bloom: false,
        }
    }
}
impl VideoSettings {
    pub fn validate(&mut self) {
        if self.resolution[0] < 800
            || self.resolution[1] < 600
            || self.resolution[0] > 7680
            || self.resolution[1] > 4320
        {
            self.resolution = Self::default().resolution;
        }
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    #[test]
    fn older_settings_keep_audio_and_gain_video_defaults() {
        let s: Settings = serde_json::from_str(r#"{"music":0.2,"input_map":3}"#).unwrap();
        assert_eq!(s.music, 0.2);
        assert_eq!(s.input_map, 3);
        assert_eq!(s.video, VideoSettings::default());
        let roundtrip: Settings = serde_json::from_slice(&serde_json::to_vec(&s).unwrap()).unwrap();
        assert_eq!(roundtrip.video, s.video);
    }
    #[test]
    fn obsolete_camera_options_do_not_break_saved_settings() {
        let s: Settings = serde_json::from_str(r#"{"music":0.2,"input_map":3,"mouse_camera_sensitivity":0.6,"controller_camera_sensitivity":1.7}"#).unwrap();
        assert_eq!(s.music, 0.2);
        assert_eq!(s.input_map, 3);
        let saved = serde_json::to_value(s).unwrap();
        assert!(saved.get("mouse_camera_sensitivity").is_none());
        assert!(saved.get("controller_camera_sensitivity").is_none());
    }
    #[test]
    fn display_modes_cycle_both_ways_and_invalid_sizes_reset() {
        assert_eq!(DisplayMode::Windowed.cycle(-1), DisplayMode::Fullscreen);
        assert_eq!(DisplayMode::Fullscreen.cycle(1), DisplayMode::Windowed);
        let mut s = VideoSettings {
            resolution: [0, u32::MAX],
            ..Default::default()
        };
        s.validate();
        assert_eq!(s.resolution, [1440, 900]);
    }
}
pub fn race_time(seconds: f32) -> String {
    let ticks = (seconds.max(0.) * 100.) as u32;
    format!(
        "{}:{:02}.{:02}",
        ticks / 6000,
        ticks / 100 % 60,
        ticks % 100
    )
}
