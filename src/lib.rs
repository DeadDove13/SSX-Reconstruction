pub mod animation;
pub mod animation_actions;
pub mod announcer;
pub mod archive;
pub mod audio_bank;
pub mod binary;
pub mod bitmap_font;
#[cfg(feature = "viewer")]
pub mod camera_rig;
pub mod character;
#[cfg(feature = "viewer")]
pub mod collision;
pub mod controls;
pub mod equipment;
#[cfg(feature = "viewer")]
pub mod fragments;
pub mod front_end;
pub mod grab_actions;
pub mod landing;
pub mod level;
pub mod lighting;
pub mod model;
pub mod music;
pub mod object_animation;
pub mod object_rules;
#[cfg(feature = "viewer")]
pub mod opponents;
pub mod physics;
pub mod player_camera;
#[cfg(feature = "viewer")]
pub mod playtest;
#[cfg(feature = "viewer")]
pub mod powerups;
pub mod race_path;
#[cfg(feature = "viewer")]
pub mod rails;
#[cfg(feature = "viewer")]
pub mod rider_contact;
pub mod sky;
pub mod sound_vm;
pub mod splines;
pub mod texture;
pub mod tricks;

pub type Result<T> = std::result::Result<T, String>;

pub fn load_track_paths(path: &std::path::Path) -> Result<race_path::Network> {
    let data = std::fs::read(path).map_err(|e| format!("{}: {e}", path.display()))?;
    let members = archive::index(&data)?;
    let member = members
        .iter()
        .find(|m| m.path.to_ascii_lowercase().ends_with(".aip"))
        .ok_or("Track archive has no AIP path file")?;
    race_path::decode(&archive::extract(&data, member)?)
}

pub fn load_track(path: &std::path::Path) -> Result<(level::Level, Vec<texture::Texture>)> {
    let data = std::fs::read(path).map_err(|e| format!("{}: {e}", path.display()))?;
    let members = archive::index(&data)?;
    let wdx = members
        .iter()
        .find(|m| m.path.to_ascii_lowercase().ends_with(".wdx"))
        .ok_or("Archive has no WDX file")?;
    let prefix = &wdx.path[..wdx.path.len() - 4];
    let find = |suffix: &str| -> Result<Vec<u8>> {
        let name = format!("{prefix}{suffix}");
        let member = members
            .iter()
            .find(|m| m.path.eq_ignore_ascii_case(&name))
            .ok_or_else(|| format!("Archive is missing {name}"))?;
        archive::extract(&data, member)
    };
    let wdx_bytes = find(".wdx")?;
    let mut level = level::decode(&wdx_bytes, &find(".wdf")?)?;
    level.prefabs = model::decode(&wdx_bytes, &find(".wdr")?)?;
    level.effects = object_rules::WorldEffects::decode(&find(".wfx")?)?;
    if let Ok(map) = find(".map") {
        let text = String::from_utf8_lossy(&map);
        let mut names = std::collections::HashMap::new();
        let mut previous = "";
        for line in text.lines() {
            let fields: Vec<_> = line.split_whitespace().collect();
            if fields.len() == 4 && fields[0] == "TGId:" && fields[2] == "TGIndex:" {
                if let (Ok(grid), Ok(index)) = (fields[1].parse::<u16>(), fields[3].parse::<u16>())
                {
                    names.insert([grid, index], previous.trim().to_string());
                }
            }
            previous = line;
        }
        level.object_names = level
            .instances
            .iter()
            .map(|i| names.get(&i.properties.id).cloned().unwrap_or_default())
            .collect();
    }
    level.lightmaps = texture::decode(&find("l.ssh")?)?;
    for patch in &level.patches {
        if patch.lightmap as usize >= level.lightmaps.len() {
            return Err(format!(
                "Patch references missing light map {}",
                patch.lightmap
            ));
        }
    }
    for prefab in &level.prefabs {
        for mesh in prefab {
            if mesh.material >= level.material_textures.len() {
                return Err(format!(
                    "Object mesh references missing material {}",
                    mesh.material
                ));
            }
            level.stats.decoded_object_meshes += 1;
            level.stats.object_triangles += mesh.indices.len() / 3;
        }
    }
    let textures = texture::decode(&find(".ssh")?)?;
    for &index in &level.material_textures {
        if index >= textures.len() {
            return Err(format!(
                "Material references texture {index}, but the package contains {} textures",
                textures.len()
            ));
        }
    }
    Ok((level, textures))
}

pub mod race_feedback;
pub mod start_gate;

pub mod crowd;
pub mod storage;
