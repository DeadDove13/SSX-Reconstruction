#import bevy_pbr::{mesh_functions, mesh_view_bindings::view, prepass_bindings, prepass_io::{VertexOutput, FragmentOutput}, view_transformations::position_world_to_clip}

@group(#{MATERIAL_BIND_GROUP}) @binding(0) var base_texture: texture_2d<f32>;
@group(#{MATERIAL_BIND_GROUP}) @binding(1) var base_sampler: sampler;
@group(#{MATERIAL_BIND_GROUP}) @binding(4) var<uniform> parameters: vec4<f32>;

struct Input {
    @builtin(instance_index) instance: u32,
    @location(0) position: vec3<f32>,
    @location(1) uv: vec2<f32>,
#ifdef SSX_PREVIOUS_POSITION
    @location(8) previous: vec3<f32>,
#endif
}
@vertex
fn vertex(input: Input) -> VertexOutput {
    var out: VertexOutput;
    out.uv = input.uv;
    out.world_position = mesh_functions::mesh_position_local_to_world(mesh_functions::get_world_from_local(input.instance), vec4<f32>(input.position, 1.0));
    out.position = position_world_to_clip(out.world_position.xyz);
#ifdef MOTION_VECTOR_PREPASS
    var previous = input.position;
#ifdef SSX_PREVIOUS_POSITION
    previous = input.previous;
#endif
    out.previous_world_position = mesh_functions::mesh_position_local_to_world(mesh_functions::get_previous_world_from_local(input.instance), vec4<f32>(previous, 1.0));
#endif
    return out;
}
#ifdef PREPASS_FRAGMENT
@fragment
fn fragment(in: VertexOutput) -> FragmentOutput {
    if textureSample(base_texture, base_sampler, in.uv).a < parameters.y { discard; }
    var out: FragmentOutput;
#ifdef MOTION_VECTOR_PREPASS
    let now = view.unjittered_clip_from_world * in.world_position;
    let before = prepass_bindings::previous_view_uniforms.clip_from_world * in.previous_world_position;
    out.motion_vector = (now.xy / now.w - before.xy / before.w) * vec2<f32>(0.5, -0.5);
#endif
    return out;
}
#endif
