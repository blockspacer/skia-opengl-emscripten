#version 100
precision mediump float;
uniform sampler2D uSampler0_Stage0;
uniform vec2 uscale_Stage1;
uniform vec4 uellipse_Stage1;
uniform float uRTHeight;
varying vec4 vColor;
varying vec2 vMatrixCoord_Stage0;

void main() {
  vec4 fragCoordYDown =
      vec4(gl_FragCoord.x, uRTHeight - gl_FragCoord.y, 1.0, 1.0);

  vec4 output_Stage0;
  {
    // Stage 0: Texture
    output_Stage0 = (vColor * texture2D(uSampler0_Stage0, vMatrixCoord_Stage0));
  }

  vec4 output_Stage1;
  {
    // Stage 1: Ellipse
    vec2 d = fragCoordYDown.xy - uellipse_Stage1.xy;
    d *= uscale_Stage1.y;
    vec2 Z = d * uellipse_Stage1.zw;
    float implicit = dot(Z, d) - 1.0;
    float grad_dot = 4.0 * dot(Z, Z);
    grad_dot = max(grad_dot, 1.0e-4);
    float approx_dist = implicit * inversesqrt(grad_dot);
    approx_dist *= uscale_Stage1.x;
    float alpha = clamp(0.5 + approx_dist, 0.0, 1.0);
    output_Stage1 = (output_Stage0 * alpha);
  }

  gl_FragColor = output_Stage1;
}