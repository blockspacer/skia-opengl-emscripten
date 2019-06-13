# Copyright 2015 Google Inc. All Rights Reserved.
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
  'targets': [
    {
      'target_name': 'glimp',
      'type': 'none',

      'dependencies': [
        # Forward-depend on the platform-specific glimp implementation.
        '<(DEPTH)/glimp/<(target_arch)/glimp_platform.gyp:glimp_platform',
      ],

      'direct_dependent_settings': {
        'includes': [
          'glimp_settings.gypi',
        ],
      },
    },
  ],
}
