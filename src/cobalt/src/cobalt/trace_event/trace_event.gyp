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

{
  'targets': [
    # Cobalt-specific support for dealing with Chromium's tracing system.
    {
      'target_name': 'trace_event',
      'type': 'static_library',
      'sources': [
        'json_file_outputter.cc',
        'json_file_outputter.h',
        'scoped_event_parser_trace.cc',
        'scoped_event_parser_trace.h',
        'scoped_trace_to_file.cc',
        'scoped_trace_to_file.h',
        'switches.cc',
        'switches.h',
      ],
      'dependencies': [
        '<(DEPTH)/base/base.gyp:base',
      ],
    },
  ],
}
