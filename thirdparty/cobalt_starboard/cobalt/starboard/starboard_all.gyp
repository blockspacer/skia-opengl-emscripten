# Copyright 2015 The Cobalt Authors. All Rights Reserved.
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

# The Starboard "all" target, which includes all interesting targets for the
# Starboard project.

{
  'variables': {
    'has_platform_tests%' : '<!(python ../build/file_exists.py <(DEPTH)/<(starboard_path)/starboard_platform_tests.gyp)',
  },
  'conditions': [
    # If 'starboard_platform_tests' is not defined by the platform, then an
    # empty 'starboard_platform_tests' target is defined.
    ['has_platform_tests=="False"', {
      'targets': [
        {
          'target_name': 'starboard_platform_tests',
          'type': '<(gtest_target_type)',
          'sources': [
            '<(DEPTH)/starboard/common/test_main.cc',
           ],
          'dependencies': [
            '<(DEPTH)/starboard/starboard.gyp:starboard',
            '<(DEPTH)/testing/gmock.gyp:gmock',
            '<(DEPTH)/testing/gtest.gyp:gtest',
          ],
        },
        {
          'target_name': 'starboard_platform_tests_deploy',
          'type': 'none',
          'dependencies': [
            'starboard_platform_tests',
          ],
          'variables': {
            'executable_name': 'starboard_platform_tests',
          },
          'includes': [ '<(DEPTH)/starboard/build/deploy.gypi' ],
        },
      ],
    }],
  ],
  'targets': [
    {
      # Note that this target must be in a separate GYP file from starboard.gyp,
      # or else it produces a GYP file loop (which is not allowed by GYP).
      'target_name': 'starboard_all',
      'type': 'none',
      'dependencies': [
        '<(DEPTH)/starboard/client_porting/eztime/eztime.gyp:*',
        '<(DEPTH)/starboard/client_porting/eztime/eztime_test.gyp:*',
        '<(DEPTH)/starboard/client_porting/icu_init/icu_init.gyp:*',
        '<(DEPTH)/starboard/client_porting/poem/poem.gyp:*',
        '<(DEPTH)/starboard/examples/blitter/blitter.gyp:*',
        '<(DEPTH)/starboard/examples/window/window.gyp:*',
        '<(DEPTH)/starboard/nplb/blitter_pixel_tests/blitter_pixel_tests.gyp:*',
        '<(DEPTH)/starboard/nplb/nplb.gyp:*',
        '<(DEPTH)/starboard/starboard.gyp:*',
      ],
      'conditions': [
        ['gl_type != "none"', {
          'dependencies': [
            '<(DEPTH)/starboard/examples/glclear/glclear.gyp:starboard_glclear_example',
          ],
        }],
        ['has_platform_tests=="True"', {
          'dependencies': [
            '<(DEPTH)/<(starboard_path)/starboard_platform_tests.gyp:*',
          ],
        }, {
          'dependencies': [
            'starboard_platform_tests',
          ],
        }],
        ['sb_filter_based_player==1', {
          'dependencies': [
            '<(DEPTH)/starboard/shared/starboard/player/filter/testing/player_filter_tests.gyp:*',
            '<(DEPTH)/starboard/shared/starboard/player/filter/tools/tools.gyp:*',
          ],
        }],
      ],
    },
  ],
}
