#version 100

uniform highp float u_skRTHeight;
precision mediump float;
uniform vec4 uinnerRect_Stage2;
uniform vec4 uinvRadiiLTRB_Stage2;
uniform highp sampler2D uTextureSampler_0_Stage1;
varying mediump vec4 vcolor_Stage0;
varying highp vec2 vTransformedCoords_0_Stage0;
void main() {
highp     vec2 _sktmpCoord = gl_FragCoord.xy;
highp     vec4 sk_FragCoord = vec4(_sktmpCoord.x, u_skRTHeight - _sktmpCoord.y, 1.0, 1.0);
    vec4 outputColor_Stage0;
    {
        outputColor_Stage0 = vcolor_Stage0;
    }
    vec4 output_Stage1;
    {
        vec4 child;
        {
            child = texture2D(uTextureSampler_0_Stage1, vTransformedCoords_0_Stage0).xyzw;
        }
        output_Stage1 = child * outputColor_Stage0.w;
    }
    vec4 output_Stage2;
    {
        vec2 dxy0 = uinnerRect_Stage2.xy - sk_FragCoord.xy;
        vec2 dxy1 = sk_FragCoord.xy - uinnerRect_Stage2.zw;
        vec2 dxy = max(max(dxy0, dxy1), 0.0);
        vec2 Z = max(max(dxy0 * uinvRadiiLTRB_Stage2.xy, dxy1 * uinvRadiiLTRB_Stage2.zw), 0.0);
        float implicit = dot(Z, dxy) - 1.0;
        float grad_dot = 4.0 * dot(Z, Z);
        grad_dot = max(grad_dot, 0.0001);
        float approx_dist = implicit * inversesqrt(grad_dot);
        float alpha = clamp(0.5 - approx_dist, 0.0, 1.0);
        output_Stage2 = vec4(alpha);
    }
    {
        gl_FragColor = output_Stage1 * output_Stage2;
    }
}
