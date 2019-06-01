# Copyright 2016 The Cobalt Authors. All Rights Reserved.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

{
  'variables': {
    'conditions': [
      ['javascript_engine == "mozjs-45"', {
        'generated_bindings_prefix': 'mozjs',
        'engine_include_dirs': [],
        'engine_dependencies': [
          '<(DEPTH)/third_party/mozjs-45/mozjs-45.gyp:mozjs-45_lib',
          '<(DEPTH)/net/net.gyp:net',
        ],
        'engine_defines': [],
        'engine_templates_dir': [
          '<(DEPTH)/cobalt/bindings/mozjs45/templates',
        ],
        'engine_template_files': [
          '<(DEPTH)/cobalt/bindings/mozjs45/templates/callback-interface.cc.template',
          '<(DEPTH)/cobalt/bindings/mozjs45/templates/callback-interface.h.template',
          '<(DEPTH)/cobalt/bindings/mozjs45/templates/dictionary-conversion.cc.template',
          '<(DEPTH)/cobalt/bindings/mozjs45/templates/enumeration-conversion.cc.template',
          '<(DEPTH)/cobalt/bindings/mozjs45/templates/generated-types.h.template',
          '<(DEPTH)/cobalt/bindings/mozjs45/templates/interface.cc.template',
          '<(DEPTH)/cobalt/bindings/mozjs45/templates/interface.h.template',
          '<(DEPTH)/cobalt/bindings/mozjs45/templates/macros.cc.template',
        ],
        'engine_bindings_scripts': [
          '<(DEPTH)/cobalt/bindings/mozjs45/code_generator_mozjs45.py',
          '<(DEPTH)/cobalt/bindings/mozjs45/idl_compiler_mozjs45.py',
          '<(DEPTH)/cobalt/bindings/mozjs45/generate_conversion_header_mozjs45.py',
        ],
        'engine_idl_compiler':
            '<(DEPTH)/cobalt/bindings/mozjs45/idl_compiler_mozjs45.py',
        'engine_conversion_header_generator_script':
            '<(DEPTH)/cobalt/bindings/mozjs45/generate_conversion_header_mozjs45.py',
      }],
    ],
  },
}
