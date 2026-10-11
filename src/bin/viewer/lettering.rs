//! Original SFN glyphs in Bevy UI. Reuses glyph nodes when a counter changes.
use bevy::{
    asset::RenderAssetUsages,
    prelude::*,
    render::render_resource::{Extent3d, TextureDimension, TextureFormat},
};
#[derive(Component)]
#[require(Node)]
pub struct Label(pub String, pub f32);
#[derive(Component)]
pub struct Tint(pub Color);
#[derive(Component)]
pub struct InGameFont;
#[derive(Resource)]
pub struct HudFont(Font);
#[derive(Resource)]
pub struct Font {
    data: ssx_rust::bitmap_font::BitmapFont,
    image: Handle<Image>,
}
pub fn setup(mut commands: Commands, mut images: ResMut<Assets<Image>>) {
    let mut data = ssx_rust::bitmap_font::decode(
        &std::fs::read("extracted/DATA/FONTS/FEHEMI.SFN").expect("Read original font"),
    )
    .expect("Decode original font");
    let image = images.add(Image::new(
        Extent3d {
            width: data.width,
            height: data.height,
            depth_or_array_layers: 1,
        },
        TextureDimension::D2,
        std::mem::take(&mut data.rgba),
        TextureFormat::Rgba8UnormSrgb,
        RenderAssetUsages::RENDER_WORLD,
    ));
    commands.insert_resource(Font { data, image });
    let mut data = ssx_rust::bitmap_font::decode(
        &std::fs::read("extracted/DATA/FONTS/HEMI.SFN").expect("Read HUD font"),
    )
    .expect("Decode HUD font");
    let image = images.add(Image::new(
        Extent3d {
            width: data.width,
            height: data.height,
            depth_or_array_layers: 1,
        },
        TextureDimension::D2,
        std::mem::take(&mut data.rgba),
        TextureFormat::Rgba8UnormSrgb,
        RenderAssetUsages::RENDER_WORLD,
    ));
    commands.insert_resource(HudFont(Font { data, image }));
}
pub fn render(
    mut commands: Commands,
    font: Res<Font>,
    hud_font: Res<HudFont>,
    mut labels: Query<
        (
            Entity,
            &Label,
            &mut Node,
            Option<&Children>,
            Option<&Tint>,
            Option<&InGameFont>,
        ),
        Or<(Changed<Label>, Changed<Tint>)>,
    >,
    mut quads: Query<(&mut ImageNode, &mut Node, &mut Visibility), Without<Label>>,
) {
    let _span = crate::performance::span("letters");
    for (entity, label, mut node, children, tint, hud) in &mut labels {
        let font = if hud.is_some() { &hud_font.0 } else { &*font };
        let scale = label.1 / font.data.glyphs[&'A'].rect[3] as f32;
        let line = font.data.line_height as f32 * scale;
        let mut x = 0f32;
        let mut y = 0f32;
        let mut width = 0f32;
        let mut index = 0;
        for ch in label.0.chars() {
            if ch == '\n' {
                width = width.max(x);
                x = 0.;
                y += line;
                continue;
            }
            let Some(g) = font
                .data
                .glyphs
                .get(&ch)
                .or_else(|| font.data.glyphs.get(&'?'))
            else {
                continue;
            };
            let [gx, gy, gw, gh] = g.rect;
            for (color, offset) in [
                (Color::srgba(0., 0., 0., 0.8), 1.5),
                (tint.map_or(Color::WHITE, |t| t.0), 0.),
            ] {
                let image = ImageNode {
                    color,
                    image: font.image.clone(),
                    rect: Some(Rect::new(
                        gx as f32,
                        gy as f32,
                        (gx + gw) as f32,
                        (gy + gh) as f32,
                    )),
                    image_mode: bevy::ui::widget::NodeImageMode::Stretch,
                    ..default()
                };
                let n = Node {
                    position_type: PositionType::Absolute,
                    left: px(x + g.bearing[0] as f32 * scale + offset),
                    top: px(y + g.bearing[1] as f32 * scale + offset),
                    width: px(gw as f32 * scale),
                    height: px(gh as f32 * scale),
                    ..default()
                };
                if let Some(e) = children.and_then(|c| c.get(index)) {
                    if let Ok((mut old, mut old_node, mut v)) = quads.get_mut(*e) {
                        *old = image;
                        *old_node = n;
                        *v = Visibility::Inherited;
                    }
                } else {
                    let e = commands
                        .spawn((image, n, Visibility::Inherited, bevy::ui::FocusPolicy::Pass))
                        .id();
                    commands.entity(entity).add_child(e);
                }
                index += 1;
            }
            x += g.advance as f32 * scale;
        }
        if let Some(children) = children {
            for e in children.iter().skip(index) {
                if let Ok((_, _, mut v)) = quads.get_mut(e) {
                    *v = Visibility::Hidden;
                }
            }
        }
        node.width = px(width.max(x));
        node.height = px(if label.0.is_empty() { 0. } else { y + line });
        node.flex_shrink = 0.;
    }
}
