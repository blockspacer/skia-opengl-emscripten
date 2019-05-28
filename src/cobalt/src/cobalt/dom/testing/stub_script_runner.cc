// Copyright 2014 The Cobalt Authors. All Rights Reserved.
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

#include "cobalt/dom/testing/stub_script_runner.h"

namespace cobalt {
namespace dom {
namespace testing {

std::string StubScriptRunner::Execute(
    const std::string& script_utf8, const base::SourceLocation& script_location,
    bool mute_errors, bool* out_succeeded) {
  SB_UNREFERENCED_PARAMETER(script_utf8);
  SB_UNREFERENCED_PARAMETER(script_location);
  SB_UNREFERENCED_PARAMETER(mute_errors);
  if (out_succeeded) {
    *out_succeeded = true;
  }
  return "";
}

}  // namespace testing
}  // namespace dom
}  // namespace cobalt
