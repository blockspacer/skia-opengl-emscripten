#version 100

precision highp float;
uniform highp vec4 urtAdjustment_Stage0;
attribute highp vec2 inPosition;
void main() {
    vec2 pos2 = inPosition;
    gl_Position = vec4(pos2.x * urtAdjustment_Stage0.x + urtAdjustment_Stage0.y, pos2.y * urtAdjustment_Stage0.z + urtAdjustment_Stage0.w, 0.0, 1.0);
}
