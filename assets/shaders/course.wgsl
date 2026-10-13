#import bevy_pbr::forward_io::VertexOutput

@group(#{MATERIAL_BIND_GROUP}) @binding(0) var base_texture: texture_2d<f32>;
@group(#{MATERIAL_BIND_GROUP}) @binding(1) var base_sampler: sampler;
@group(#{MATERIAL_BIND_GROUP}) @binding(2) var light_texture: texture_2d<f32>;
@group(#{MATERIAL_BIND_GROUP}) @binding(3) var light_sampler: sampler;
@group(#{MATERIAL_BIND_GROUP}) @binding(4) var<uniform> parameters: vec4<f32>;

fn display_to_linear(value: vec3<f32>) -> vec3<f32> {
    return select(pow((value + 0.055) / 1.055, vec3<f32>(2.4)), value / 12.92, value <= vec3<f32>(0.04045));
}

@fragment
fn fragment(in: VertexOutput) -> @location(0) vec4<f32> {
    let texel = textureSample(base_texture, base_sampler, in.uv);
    if texel.a < parameters.y { discard; }
    // WDF light maps carry subtractive colour and a separate brightness channel.
    // Work in the source display colour space, then convert for Bevy's target.
    var rgb = texel.rgb;
#ifdef VERTEX_UVS_B
    if parameters.x > 0.5 {
        rgb = clamp(rgb * 2.0 - vec3<f32>(1.0 / 255.0), vec3<f32>(0.0), vec3<f32>(1.0));
        let light = textureSample(light_texture, light_sampler, in.uv_b);
        let subtract = clamp(light.rgb * 2.0 - vec3<f32>(1.0 / 255.0), vec3<f32>(0.0), vec3<f32>(1.0));
        rgb = max(rgb - subtract, vec3<f32>(0.0)) * light.a;
    }
#endif
#ifdef VERTEX_COLORS
    rgb *= in.color.rgb;
#endif
    if parameters.z > 1.5 {
        // Countdown lamp artwork contains red, amber and green lens pixels.
        let red = rgb.r > rgb.g * 1.45 && rgb.r > rgb.b * 1.5;
        let amber = rgb.r > rgb.b * 1.8 && rgb.g > rgb.b * 1.8 && !red;
        let green = rgb.g > rgb.r * 1.2 && rgb.g > rgb.b * 1.25;
        let lit = (red && parameters.w >= 1.0) || (amber && parameters.w >= 2.0) || (green && parameters.w >= 3.0);
        if red || amber || green { rgb *= select(0.16, 1.35, lit); }
    }
    let alpha = select(1.0, texel.a * parameters.w, parameters.z > 0.5 && parameters.z < 1.5);
    return vec4<f32>(display_to_linear(clamp(rgb, vec3<f32>(0.0), vec3<f32>(1.0))), alpha);
}
