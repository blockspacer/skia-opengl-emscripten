// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_gpu_pipeline_stage_descriptor.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_gpu_shader_module.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8GPUPipelineStageDescriptorKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "entryPoint",
    "module",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8GPUPipelineStageDescriptor::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, GPUPipelineStageDescriptor* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    exception_state.ThrowTypeError("Missing required member(s): entryPoint, module.");
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8GPUPipelineStageDescriptorKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> entry_point_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&entry_point_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (entry_point_value.IsEmpty() || entry_point_value->IsUndefined()) {
    exception_state.ThrowTypeError("required member entryPoint is undefined.");
    return;
  } else {
    V8StringResource<> entry_point_cpp_value = entry_point_value;
    if (!entry_point_cpp_value.Prepare(exception_state))
      return;
    impl->setEntryPoint(entry_point_cpp_value);
  }

  v8::Local<v8::Value> module_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&module_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (module_value.IsEmpty() || module_value->IsUndefined()) {
    exception_state.ThrowTypeError("required member module is undefined.");
    return;
  } else {
    GPUShaderModule* module_cpp_value = V8GPUShaderModule::ToImplWithTypeCheck(isolate, module_value);
    if (!module_cpp_value) {
      exception_state.ThrowTypeError("member module is not of type GPUShaderModule.");
      return;
    }
    impl->setModule(module_cpp_value);
  }
}

v8::Local<v8::Value> GPUPipelineStageDescriptor::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8GPUPipelineStageDescriptor(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8GPUPipelineStageDescriptor(const GPUPipelineStageDescriptor* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8GPUPipelineStageDescriptorKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();

  auto create_property = [dictionary, context, keys, isolate](
                             size_t key_index, v8::Local<v8::Value> value) {
    bool added_property;
    v8::Local<v8::Name> key = keys[key_index].Get(isolate);
    if (!dictionary->CreateDataProperty(context, key, value)
             .To(&added_property)) {
      return false;
    }
    return added_property;
  };

  v8::Local<v8::Value> entry_point_value;
  bool entry_point_has_value_or_default = false;
  if (impl->hasEntryPoint()) {
    entry_point_value = V8String(isolate, impl->entryPoint());
    entry_point_has_value_or_default = true;
  } else {
    NOTREACHED();
  }
  if (entry_point_has_value_or_default &&
      !create_property(0, entry_point_value)) {
    return false;
  }

  v8::Local<v8::Value> module_value;
  bool module_has_value_or_default = false;
  if (impl->hasModule()) {
    module_value = ToV8(impl->module(), creationContext, isolate);
    module_has_value_or_default = true;
  } else {
    NOTREACHED();
  }
  if (module_has_value_or_default &&
      !create_property(1, module_value)) {
    return false;
  }

  return true;
}

GPUPipelineStageDescriptor* NativeValueTraits<GPUPipelineStageDescriptor>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  GPUPipelineStageDescriptor* impl = GPUPipelineStageDescriptor::Create();
  V8GPUPipelineStageDescriptor::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
