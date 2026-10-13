//! Print the recovered animation catalog and each bank's sampled tracks.
use ssx_rust::{animation, animation_actions, archive};
fn main() {
    let path = std::env::args()
        .nth(1)
        .unwrap_or_else(|| "extracted/DATA/CHAR/ANM.BIG".into());
    let big = std::fs::read(path).unwrap();
    let members = archive::index(&big).unwrap();
    let banks: Vec<_> = animation_actions::BANKS
        .iter()
        .map(|name| {
            let member = members
                .iter()
                .find(|m| m.path.to_lowercase().ends_with(name))
                .unwrap();
            animation::decode(&archive::extract(&big, member).unwrap()).unwrap()
        })
        .collect();
    for (state, &[action, handler, flags]) in animation_actions::STATES.iter().enumerate() {
        let clips: Vec<_> = (0..3)
            .map(|style| {
                let (bank, clip) = animation::action(action as usize, style);
                let name =
                    animation::track(&banks[bank], clip, 0).map_or("non-body", |t| t.name.as_str());
                format!("{bank}:{clip}:{name}")
            })
            .collect();
        println!(
            "state {state:03x} action {action:3} handler {handler} flags {flags:#x} {}",
            clips.join(" ")
        );
    }
    for (bank, tracks) in banks.iter().enumerate() {
        println!("BANK {bank} {}", animation_actions::BANKS[bank]);
        for track in tracks {
            println!(
                "  group {} model {} name {} bones {} frames {} fps {}",
                track.group,
                track.model,
                track.name,
                track.frames[0].rotations.len(),
                track.frames.len(),
                track.fps
            );
        }
    }
}
