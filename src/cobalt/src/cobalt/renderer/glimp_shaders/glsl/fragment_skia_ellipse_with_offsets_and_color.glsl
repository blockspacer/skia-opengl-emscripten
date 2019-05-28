#version 100

uniform highp float u_skRTHeight;
precision mediump float;
uniform highp vec4 uellipse_Stage1;
varying mediump vec2 vEllipseOffsets_Stage0;
varying mediump vec4 vEllipseRadii_Stage0;
varying mediump vec4 vinColor_Stage0;
void main() {
highp     vec2 _sktmpCoord = gl_FragCoord.xy;
highp     vec4 sk_FragCoord = vec4(_sktmpCoord.x, u_skRTHeight - _sktmpCoord.y, 1.0, 1.0);
    vec4 outputColor_Stage0;
    vec4 outputCoverage_Stage0;
    {
        outputColor_Stage0 = vinColor_Stage0;
        vec2 scaledOffset = vEllipseOffsets_Stage0 * vEllipseRadii_Stage0.xy;
        float test = dot(scaledOffset, scaledOffset) - 1.0;
        vec2 grad = (2.0 * scaledOffset) * vEllipseRadii_Stage0.xy;
        float grad_dot = dot(grad, grad);
        grad_dot = max(grad_dot, 0.0001);
        float invlen = inversesqrt(grad_dot);
        float edgeAlpha = clamp(0.5 - test * invlen, 0.0, 1.0);
        outputCoverage_Stage0 = vec4(edgeAlpha);
    }
    vec4 output_Stage1;
    {
        vec2 d = sk_FragCoord.xy - uellipse_Stage1.xy;
        vec2 Z = d * uellipse_Stage1.zw;
        float implicit = dot(Z, d) - 1.0;
        float grad_dot = 4.0 * dot(Z, Z);
        grad_dot = max(grad_dot, 0.0001);
        float approx_dist = implicit * inversesqrt(grad_dot);
        float alpha;
        {
            alpha = clamp(0.5 + approx_dist, 0.0, 1.0);
        }
        output_Stage1 = outputCoverage_Stage0 * alpha;
    }
    {
        gl_FragColor = outputColor_Stage0 * output_Stage1;
    }
}
