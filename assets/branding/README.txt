The built-in image_gen tool created ssx-icon.png from the user-supplied SSX cover.
ssx.ico contains 16, 24, 32, 48, 64, 128, and 256 pixel representations.
window-icon.rgba is the same artwork at 128x128, in RGBA byte order.
build.rs embeds the ICO in the Windows executables.
viewer/desktop.rs embeds the RGBA image for the window and taskbar.

Generation prompt:
Edit the attached SSX cover image into a circular Windows application icon. Preserve the original SSX logo, snowboarder, goggles, colours, and artwork as closely as possible. Reframe and scale the artwork inside a clean circular badge so the SSX logo and main rider remain legible. No additional text, no new symbols, no square border, no outside shadow. True transparent alpha outside the circle. The circular artwork should fill almost the entire square canvas with a small transparent margin. Crisp 1024x1024 PNG suitable for downsampling into a Windows ICO.
