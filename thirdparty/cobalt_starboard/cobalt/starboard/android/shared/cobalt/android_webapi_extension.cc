// Copyright 2018 The Cobalt Authors. All Rights Reserved.
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

#include "cobalt/browser/webapi_extension.h"

#include "base/compiler_specific.h"
#include "cobalt/script/global_environment.h"
#include "starboard/android/shared/cobalt/android.h"

namespace cobalt {
namespace browser {

base::Optional<std::string> GetWebAPIExtensionObjectPropertyName() {
  return std::string("android");
}

scoped_refptr<::cobalt::script::Wrappable> CreateWebAPIExtensionObject(
    const scoped_refptr<::cobalt::dom::Window>& window,
    ::cobalt::script::GlobalEnvironment* global_environment) {
  SB_UNREFERENCED_PARAMETER(global_environment);

  return scoped_refptr<::cobalt::script::Wrappable>(
      new webapi_extension::Android(window));
}

}  // namespace browser
}  // namespace cobalt
