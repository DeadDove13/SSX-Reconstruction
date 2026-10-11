//! Installed copies keep writable data in the current user's profile.
use std::path::{Path, PathBuf};

fn data_root(installation: &Path, local_app_data: Option<PathBuf>) -> PathBuf {
    if installation.join("installed.txt").is_file() {
        if let Some(profile) = local_app_data {
            return profile.join("DeadDove13").join("SSX Reconstruction");
        }
    }
    installation.to_path_buf()
}

pub fn writable_root() -> PathBuf {
    data_root(
        Path::new("."),
        std::env::var_os("LOCALAPPDATA").map(PathBuf::from),
    )
}

pub fn settings_file() -> PathBuf {
    writable_root().join("save/settings.json")
}

pub fn texture_cache() -> PathBuf {
    writable_root().join("assets/texture-cache-v2")
}

#[cfg(test)]
mod tests {
    use super::*;
    #[test]
    fn installation_uses_profile_and_portable_copy_uses_its_own_folder() {
        let root = std::env::temp_dir().join(format!("ssx-storage-{}", std::process::id()));
        std::fs::create_dir_all(&root).unwrap();
        let profile = root.join("profile");
        assert_eq!(data_root(&root, Some(profile.clone())), root);
        std::fs::write(root.join("installed.txt"), "Installed copy").unwrap();
        assert_eq!(
            data_root(&root, Some(profile.clone())),
            profile.join("DeadDove13/SSX Reconstruction")
        );
        std::fs::remove_file(root.join("installed.txt")).unwrap();
        std::fs::remove_dir(root).unwrap();
    }
}
