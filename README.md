<img src="assets/branding/ssx-icon.png" alt="SSX icon" width="400">

# SSX Reconstruction

This is a reconstruction of the PS2 game SSX in Rust and Bevy. The core game loop and physics are in place, but the project is still in progress.

## How it’s made
AI has effectively reduced the time spend needed for reversing binaries of this scale.

I use Ghidra and IDA Pro to decompile and study the original software from a PS2 ISO. AI helps me interpret the results, trace how game systems work, and turn those findings into a Rust and Bevy implementation.

This is a port built from that understanding. I aim to preserve how SSX plays, while making implementation choices that suit Rust, Bevy, and my own sense of how the game should feel.

Asset creation and upscaling is made using the following process. 
 [Play on YouTube](https://youtu.be/mcYl70vq_Ns)

## Current limitations

- Clipping and camera issues remain.
- Several world events are missing.
- Story mode, progression, and other features are still to come.

## Build

Pull the Git LFS assets before building:

```powershell
git lfs pull
cargo build --release --locked --features viewer --bin ssx-play
```

## License

The reconstruction source uses GPL-3.0-or-later. See `LICENSE`. Extracted game files are separate local inputs and are not covered by the source license.
