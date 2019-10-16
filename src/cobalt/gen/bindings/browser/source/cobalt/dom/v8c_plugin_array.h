
// Copyright 2019 The Cobalt Authors. All Rights Reserved.
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

// clang-format off

// This file has been auto-generated by bindings/code_generator_cobalt.py. DO NOT MODIFY!
// Auto-generated from template: bindings/v8c/templates/interface.h.template

#ifndef V8cPluginArray_h
#define V8cPluginArray_h

#include "cobalt/bindings/shared/idl_conditional_macros.h"

#include "base/containers/hash_tables.h"
#include "base/lazy_instance.h"
#include "base/memory/ref_counted.h"
#include "base/threading/thread_checker.h"
#include "cobalt/base/polymorphic_downcast.h"
#include "cobalt/script/wrappable.h"
#include "cobalt/dom/plugin_array.h"

#include "cobalt/script/v8c/v8c_global_environment.h"
#include "v8/include/v8.h"

namespace cobalt {
namespace dom {

class V8cPluginArray {
 public:
  static v8::Local<v8::Object> CreateWrapper(v8::Isolate* isolate, const scoped_refptr<script::Wrappable>& wrappable);
  static v8::Local<v8::FunctionTemplate> GetTemplate(v8::Isolate* isolate);
};

}  // namespace dom
}  // namespace cobalt

#endif  // V8cPluginArray_h
