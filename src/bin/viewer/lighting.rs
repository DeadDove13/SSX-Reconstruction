use bevy::{
    mesh::{MeshVertexAttribute, MeshVertexBufferLayoutRef},
    pbr::{MaterialPipeline, MaterialPipelineKey},
    prelude::*,
    render::render_resource::{
        AsBindGroup, RenderPipelineDescriptor, SpecializedMeshPipelineError, VertexFormat,
    },
    shader::ShaderRef,
};
use ssx_rust::lighting::Lighting;

const COURSE_SHADER: Handle<Shader> =
    bevy::asset::uuid_handle!("aed7c865-6b9c-4ab9-907b-6b601f3a39d8");
const PREPASS_SHADER: Handle<Shader> =
    bevy::asset::uuid_handle!("dbe74920-c24d-4b6b-a2ab-69a8ce662a5a");
pub const PREVIOUS_POSITION: MeshVertexAttribute =
    MeshVertexAttribute::new("Previous_Position", 98273142, VertexFormat::Float32x3);
pub fn register(app: &mut App) {
    bevy::asset::load_internal_asset!(
        app,
        PREPASS_SHADER,
        "../../../assets/shaders/course_prepass.wgsl",
        Shader::from_wgsl
    );
    bevy::asset::load_internal_asset!(
        app,
        COURSE_SHADER,
        "../../../assets/shaders/course.wgsl",
        Shader::from_wgsl
    );
}

#[derive(Asset, TypePath, AsBindGroup, Debug, Clone)]
pub struct CourseMaterial {
    #[texture(0)]
    #[sampler(1)]
    pub texture: Handle<Image>,
    #[texture(2)]
    #[sampler(3)]
    pub lightmap: Option<Handle<Image>>,
    // x: light map present, y: alpha test threshold.
    #[uniform(4)]
    pub parameters: Vec4,
}
impl Material for CourseMaterial {
    fn prepass_vertex_shader() -> ShaderRef {
        PREPASS_SHADER.into()
    }
    fn prepass_fragment_shader() -> ShaderRef {
        PREPASS_SHADER.into()
    }
    fn fragment_shader() -> ShaderRef {
        COURSE_SHADER.into()
    }
    fn alpha_mode(&self) -> AlphaMode {
        if self.parameters.z > 0.5 && self.parameters.z < 1.5 {
            AlphaMode::Blend
        } else {
            AlphaMode::Mask(self.parameters.y)
        }
    }
    fn specialize(
        _: &MaterialPipeline,
        descriptor: &mut RenderPipelineDescriptor,
        layout: &MeshVertexBufferLayoutRef,
        _: MaterialPipelineKey<Self>,
    ) -> Result<(), SpecializedMeshPipelineError> {
        descriptor.primitive.cull_mode = None;
        if descriptor.vertex.shader == PREPASS_SHADER {
            let mut attributes = vec![
                Mesh::ATTRIBUTE_POSITION.at_shader_location(0),
                Mesh::ATTRIBUTE_UV_0.at_shader_location(1),
            ];
            if layout.0.contains(PREVIOUS_POSITION) {
                attributes.push(PREVIOUS_POSITION.at_shader_location(8));
                descriptor
                    .vertex
                    .shader_defs
                    .push("SSX_PREVIOUS_POSITION".into());
            }
            descriptor.vertex.buffers = vec![layout.0.get_layout(&attributes)?];
        }
        Ok(())
    }
}

#[derive(Resource, Default)]
pub struct Probes(Vec<(Vec3, Lighting)>);
impl Probes {
    pub fn new(level: &ssx_rust::level::Level) -> Self {
        Self(
            level
                .instances
                .iter()
                .filter_map(|instance| {
                    let mut light = instance.lighting;
                    if !light.valid
                        || light.ambient.iter().all(|v| *v <= 0.)
                        || light.ambient.iter().all(|v| *v >= 1.99)
                    {
                        return None;
                    }
                    let matrix = Mat4::from_cols_array(&instance.transform);
                    for direction in &mut light.directions {
                        *direction = matrix
                            .transform_vector3(Vec3::from_array(*direction))
                            .normalize_or_zero()
                            .to_array();
                    }
                    Some((matrix.w_axis.truncate(), light))
                })
                .collect(),
        )
    }
    // Nearby WDF instance values supply a continuous host lighting estimate for
    // moving riders. This does not reproduce the PS2 dynamic-light selector.
    pub fn sample(&self, position: Vec3) -> Lighting {
        let mut nearest = [(f32::INFINITY, 0usize); 4];
        for (index, (p, _)) in self.0.iter().enumerate() {
            let distance = p.distance_squared(position);
            if let Some(slot) = nearest.iter().position(|(d, _)| distance < *d) {
                for i in (slot + 1..4).rev() {
                    nearest[i] = nearest[i - 1];
                }
                nearest[slot] = (distance, index);
            }
        }
        // Blend the ambient colour and use the nearest probe's light directions.
        let mut result = Lighting::default();
        let mut colour = [0.; 3];
        let mut sum = 0.;
        for (distance, index) in nearest {
            if !distance.is_finite() {
                continue;
            }
            let weight = 1. / (distance + 10000.);
            let l = &self.0[index].1;
            for a in 0..3 {
                colour[a] += l.ambient[a] * weight;
            }
            sum += weight;
        }
        if sum > 0. {
            result.ambient = colour.map(|c| c / sum);
        }
        if nearest[0].0.is_finite() {
            result.directions = self.0[nearest[0].1].1.directions;
            result.colours = self.0[nearest[0].1].1.colours;
        }
        result
    }
}
