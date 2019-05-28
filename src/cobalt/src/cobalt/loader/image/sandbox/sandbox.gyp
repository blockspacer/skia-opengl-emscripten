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

# This is a sample sandbox application for experimenting with the Cobalt
# ImageDecoder.

{
  'targets': [
    # This target will build a sandbox application that allows for easy
    # experimentation with the ImageDecoder on any platform.
    {
      'target_name': 'image_decoder_sandbox',
      'type': '<(final_executable_type)',
      'sources': [
        'image_decoder_sandbox.cc',
      ],
      'dependencies': [
        '<(DEPTH)/cobalt/base/base.gyp:base',
        '<(DEPTH)/cobalt/loader/loader.gyp:loader_copy_test_data',
        '<(DEPTH)/cobalt/loader/loader.gyp:loader',
        '<(DEPTH)/cobalt/renderer/renderer.gyp:renderer',
        '<(DEPTH)/cobalt/system_window/system_window.gyp:system_window',
        '<(DEPTH)/cobalt/trace_event/trace_event.gyp:trace_event',
        '<(DEPTH)/url/url.gyp:url',
      ],
    },

    {
      'target_name': 'image_decoder_sandbox_deploy',
      'type': 'none',
      'dependencies': [
        'image_decoder_sandbox',
      ],
      'variables': {
        'executable_name': 'image_decoder_sandbox',
      },
      'includes': [ '<(DEPTH)/starboard/build/deploy.gypi' ],
    },
  ],
}
