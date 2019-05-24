// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_gpu_pipeline_layout_descriptor.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_gpu_bind_group_layout.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8GPUPipelineLayoutDescriptorKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "bindGroupLayouts",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8GPUPipelineLayoutDescriptor::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, GPUPipelineLayoutDescriptor* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    exception_state.ThrowTypeError("Missing required member(s): bindGroupLayouts.");
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8GPUPipelineLayoutDescriptorKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> bind_group_layouts_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&bind_group_layouts_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (bind_group_layouts_value.IsEmpty() || bind_group_layouts_value->IsUndefined()) {
    exception_state.ThrowTypeError("required member bindGroupLayouts is undefined.");
    return;
  } else {
    HeapVector<Member<GPUBindGroupLayout>> bind_group_layouts_cpp_value = NativeValueTraits<IDLSequence<GPUBindGroupLayout>>::NativeValue(isolate, bind_group_layouts_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setBindGroupLayouts(bind_group_layouts_cpp_value);
  }
}

v8::Local<v8::Value> GPUPipelineLayoutDescriptor::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8GPUPipelineLayoutDescriptor(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8GPUPipelineLayoutDescriptor(const GPUPipelineLayoutDescriptor* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8GPUPipelineLayoutDescriptorKeys(isolate);
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

  v8::Local<v8::Value> bind_group_layouts_value;
  bool bind_group_layouts_has_value_or_default = false;
  if (impl->hasBindGroupLayouts()) {
    bind_group_layouts_value = ToV8(impl->bindGroupLayouts(), creationContext, isolate);
    bind_group_layouts_has_value_or_default = true;
  } else {
    NOTREACHED();
  }
  if (bind_group_layouts_has_value_or_default &&
      !create_property(0, bind_group_layouts_value)) {
    return false;
  }

  return true;
}

GPUPipelineLayoutDescriptor* NativeValueTraits<GPUPipelineLayoutDescriptor>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  GPUPipelineLayoutDescriptor* impl = GPUPipelineLayoutDescriptor::Create();
  V8GPUPipelineLayoutDescriptor::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
