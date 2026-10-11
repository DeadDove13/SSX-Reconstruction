use serde::Serialize;
use ssx_rust::{Result, archive, load_track, texture};
use std::{
    fs,
    path::{Path, PathBuf},
};

#[derive(Serialize)]
struct Report {
    archives: usize,
    members: usize,
    unpacked_bytes: usize,
    texture_packages: usize,
    textures: usize,
    archive_errors: Vec<String>,
    texture_errors: Vec<String>,
    tracks: Vec<(String, ssx_rust::level::LevelStats)>,
    track_errors: Vec<String>,
}

fn files(path: &Path, list: &mut Vec<PathBuf>) -> Result<()> {
    for entry in fs::read_dir(path).map_err(|e| e.to_string())? {
        let path = entry.map_err(|e| e.to_string())?.path();
        if path.is_dir() {
            files(&path, list)?;
        } else {
            list.push(path);
        }
    }
    Ok(())
}

fn run() -> Result<()> {
    let args: Vec<String> = std::env::args().collect();
    if args.get(1).map(String::as_str) == Some("sound") {
        let path = args
            .get(2)
            .ok_or("Usage: ssx-assets sound BANK SLOT OUTPUT.wav")?;
        let slot: usize = args
            .get(3)
            .ok_or("Missing sound slot")?
            .parse()
            .map_err(|_| "Invalid sound slot")?;
        let output = args.get(4).ok_or("Missing output WAV path")?;
        let clips = ssx_rust::audio_bank::decode(&fs::read(path).map_err(|e| e.to_string())?)?;
        let clip = clips
            .get(slot)
            .and_then(Option::as_ref)
            .ok_or("The sound slot is empty or out of range")?;
        fs::write(output, clip.wav()).map_err(|e| e.to_string())?;
        println!(
            "Decoded slot {slot}: {} Hz, {} channels, {} samples",
            clip.rate,
            clip.channels,
            clip.samples.len()
        );
        return Ok(());
    }
    if args.get(1).map(String::as_str) == Some("extract") {
        let path = args
            .get(2)
            .ok_or("Usage: ssx-assets extract ARCHIVE OUTPUT_DIRECTORY")?;
        let output = Path::new(args.get(3).ok_or("Missing output directory")?);
        let data = fs::read(path).map_err(|e| e.to_string())?;
        let members = archive::index(&data)?;
        for member in &members {
            let target = output.join(&member.path);
            fs::create_dir_all(target.parent().unwrap()).map_err(|e| e.to_string())?;
            fs::write(target, archive::extract(&data, member)?).map_err(|e| e.to_string())?;
        }
        println!("Extracted {} members from {path}", members.len());
        return Ok(());
    }
    let root = Path::new(args.get(1).map(String::as_str).unwrap_or("extracted/DATA"));
    let mut paths = Vec::new();
    files(root, &mut paths)?;
    paths.sort();
    let mut report = Report {
        archives: 0,
        members: 0,
        unpacked_bytes: 0,
        texture_packages: 0,
        textures: 0,
        archive_errors: vec![],
        texture_errors: vec![],
        tracks: vec![],
        track_errors: vec![],
    };
    for path in paths {
        let ext = path.extension().and_then(|s| s.to_str()).unwrap_or("");
        if ext.eq_ignore_ascii_case("ssh") {
            let data = fs::read(&path).map_err(|e| e.to_string())?;
            report.texture_packages += 1;
            match texture::decode(&data) {
                Ok(images) => report.textures += images.len(),
                Err(e) => report
                    .texture_errors
                    .push(format!("{}: {e}", path.display())),
            }
        } else if ext.eq_ignore_ascii_case("big") {
            report.archives += 1;
            let data = fs::read(&path).map_err(|e| e.to_string())?;
            let members = match archive::index(&data) {
                Ok(members) => members,
                Err(e) => {
                    report
                        .archive_errors
                        .push(format!("{}: {e}", path.display()));
                    continue;
                }
            };
            let is_track = members.iter().any(|m| m.path.ends_with(".wdx"));
            report.members += members.len();
            for member in members {
                let unpacked = match archive::extract(&data, &member) {
                    Ok(bytes) => bytes,
                    Err(e) => {
                        report.archive_errors.push(format!(
                            "{} / {}: {e}",
                            path.display(),
                            member.path
                        ));
                        continue;
                    }
                };
                report.unpacked_bytes += unpacked.len();
                if unpacked.starts_with(b"SHPS") {
                    report.texture_packages += 1;
                    match texture::decode(&unpacked) {
                        Ok(images) => report.textures += images.len(),
                        Err(e) => report.texture_errors.push(format!(
                            "{} / {}: {e}",
                            path.display(),
                            member.path
                        )),
                    }
                }
            }
            if is_track {
                match load_track(&path) {
                    Ok((level, textures)) => {
                        println!(
                            "{}: {} patches, {} textures, corner error {:.4}",
                            path.display(),
                            level.patches.len(),
                            textures.len(),
                            level.stats.largest_corner_error
                        );
                        report
                            .tracks
                            .push((path.display().to_string(), level.stats));
                    }
                    Err(e) => report.track_errors.push(format!("{}: {e}", path.display())),
                }
            }
        }
    }
    fs::create_dir_all("analysis").map_err(|e| e.to_string())?;
    fs::write(
        "analysis/asset_report.json",
        serde_json::to_vec_pretty(&report).map_err(|e| e.to_string())?,
    )
    .map_err(|e| e.to_string())?;
    println!(
        "Archives: {}, members: {}, texture packages: {}, decoded textures: {}, loaded tracks: {}",
        report.archives,
        report.members,
        report.texture_packages,
        report.textures,
        report.tracks.len()
    );
    println!(
        "Errors: {} archive, {} texture, {} track. Details: analysis/asset_report.json",
        report.archive_errors.len(),
        report.texture_errors.len(),
        report.track_errors.len()
    );
    if !report.archive_errors.is_empty()
        || !report.texture_errors.is_empty()
        || !report.track_errors.is_empty()
    {
        return Err("Asset validation has unresolved errors".into());
    }
    Ok(())
}

fn main() {
    if let Err(error) = run() {
        eprintln!("{error}");
        std::process::exit(1);
    }
}
