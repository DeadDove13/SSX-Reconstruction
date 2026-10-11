# SSX reconstruction in Rust and Bevy

## Status

Figured id hop on the recon bandwagon. In its current state this is a recon of the core game loop and physics engine.

This recon was built using the PS2 .iso file.

### TODO

- There are issues with clipping
- There are issues with the camera
- A number of world events need to be added
- There are a number of features that need to be added such as the story mode and progression system

## Build

```powershell
cargo build --release --locked --features viewer --bin ssx-play
```

## License

The reconstruction source uses GPL-3.0-or-later. See `LICENSE`. Extracted game files are separate local inputs and are not covered by this source license.
