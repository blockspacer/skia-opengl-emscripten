# Copyright 2019 The Cobalt Authors. All Rights Reserved.
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

# This file was initially generated by starboard/tools/create_derived_build.py,
# though it may have been modified since its creation.

{
  'target_defaults': {
    'default_configuration': 'linux-x64x11-blittergles-sbversion-11_debug',
    'configurations': {
      'linux-x64x11-blittergles-sbversion-11_debug': {
        'inherit_from': ['debug_base'],
      },
      'linux-x64x11-blittergles-sbversion-11_devel': {
        'inherit_from': ['devel_base'],
      },
      'linux-x64x11-blittergles-sbversion-11_qa': {
        'inherit_from': ['qa_base'],
      },
      'linux-x64x11-blittergles-sbversion-11_gold': {
        'inherit_from': ['gold_base'],
      },
    }, # end of configurations
  },

  'includes': [
    '<(DEPTH)/starboard/linux/x64x11/blittergles/gyp_configuration.gypi',
  ],
}
