// Copyright 2017 The Cobalt Authors. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

precision mediump float;
uniform sampler2D u_texture;
uniform vec4 u_texcoord_transform;  // (u-scale, u-add, u-max, v-center)
uniform float u_opacity;
varying vec2 v_offset;

void main() {
  vec2 texcoord = vec2(
      min(length(v_offset) * u_texcoord_transform.x + u_texcoord_transform.y,
          u_texcoord_transform.z),
      u_texcoord_transform.w);
  gl_FragColor = texture2D(u_texture, texcoord) * u_opacity;
}
