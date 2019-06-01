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

#include "cobalt/script/v8c/v8c_script_value_factory.h"

#include "cobalt/base/polymorphic_downcast.h"

namespace cobalt {
namespace script {

// Implementation of template function declared in the base class.
template <typename T>
Handle<Promise<T>> ScriptValueFactory::CreatePromise() {
  v8c::V8cScriptValueFactory* v8c_this =
      base::polymorphic_downcast<v8c::V8cScriptValueFactory*>(this);
  return v8c_this->CreatePromise<T>();
}

}  // namespace script
}  // namespace cobalt

// Explicit template instantiations must go after the template function
// implementation.
#include "cobalt/script/script_value_factory_instantiations.h"
