use super::*;

#[derive(Component)]
pub struct SkyGeometry;

pub fn spawn(
    commands: &mut Commands,
    name: &str,
    images: &mut Assets<Image>,
    meshes: &mut Assets<Mesh>,
    materials: &mut Assets<CourseMaterial>,
) -> Result<(), String> {
    let path = std::path::Path::new("extracted/DATA/MODELS").join(format!("{name}.BIG"));
    let sky = ssx_rust::sky::load(&path)?;
    commands.insert_resource(ClearColor(Color::srgb_u8(sky.clear[0], sky.clear[1], sky.clear[2])));
    // The indoor courses have a tiny development quad rather than a sky dome.
    // Import their textures, but do not put the Warmup UV marker in the sky.
    if sky.meshes.len() == 1 {
        return Ok(());
    }
    let mut handles = Vec::new();
    for (i, t) in sky.textures.iter().enumerate() {
        let prepared = format!("assets/skyboxes-v1/{name}/{i:03}.png");
        let pixels = image::open(&prepared).ok().map(|p| p.to_rgba8())
            .filter(|p| p.dimensions() == (t.width * 4, t.height * 4))
            .unwrap_or_else(|| ssx_rust::sky::upscale(t));
        let mut image = Image::new(
            Extent3d { width: pixels.width(), height: pixels.height(), depth_or_array_layers: 1 },
            TextureDimension::D2,
            pixels.into_raw(),
            TextureFormat::Rgba8Unorm,
            RenderAssetUsages::RENDER_WORLD,
        );
        image.sampler = ImageSampler::Descriptor(ImageSamplerDescriptor {
            address_mode_u: ImageAddressMode::ClampToEdge,
            address_mode_v: ImageAddressMode::ClampToEdge,
            ..ImageSamplerDescriptor::linear()
        });
        handles.push(materials.add(CourseMaterial {
            texture: images.add(image), lightmap: None, parameters: Vec4::ZERO,
        }));
    }
    let radius = sky.meshes.iter().flat_map(|m| &m.positions)
        .map(|p| world(*p).length()).fold(1f32, f32::max);
    // Camera-relative geometry has no translational parallax. Keep it beyond
    // the course and inside the 100 km far plane, with the original orientation.
    let scale = 80_000. / radius;
    for object in sky.meshes {
        let local = object.transform.map(|m| Mat4::from_cols_array(&m)).unwrap_or(Mat4::IDENTITY);
        let positions: Vec<_> = object.positions.iter()
            .map(|p| (world(local.transform_point3(Vec3::from_array(*p)).to_array()) * scale).to_array()).collect();
        let mesh = Mesh::new(PrimitiveTopology::TriangleList, RenderAssetUsages::RENDER_WORLD)
            .with_inserted_attribute(Mesh::ATTRIBUTE_NORMAL, vec![[0., 1., 0.]; positions.len()])
            .with_inserted_attribute(Mesh::ATTRIBUTE_POSITION, positions)
            .with_inserted_attribute(Mesh::ATTRIBUTE_UV_0, object.uv)
            .with_inserted_indices(Indices::U32(object.indices));
        commands.spawn((
            Mesh3d(meshes.add(mesh)),
            MeshMaterial3d(handles[sky.material_textures[object.material]].clone()),
            Transform::default(),
            TrackGeometry,
            SkyGeometry,
            bevy::camera::visibility::NoFrustumCulling,
            bevy::light::NotShadowCaster,
            bevy::light::NotShadowReceiver,
        ));
    }
    Ok(())
}

pub fn follow_camera(
    camera: Single<&Transform, (With<FlyCamera>, Without<SkyGeometry>)>,
    mut skies: Query<&mut Transform, (With<SkyGeometry>, Without<FlyCamera>)>,
) {
    for mut transform in &mut skies {
        transform.translation = camera.translation;
    }
}
