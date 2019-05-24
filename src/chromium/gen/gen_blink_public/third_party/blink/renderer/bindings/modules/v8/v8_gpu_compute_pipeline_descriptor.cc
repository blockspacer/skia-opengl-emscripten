// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_gpu_compute_pipeline_descriptor.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_gpu_pipeline_descriptor_base.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_gpu_pipeline_stage_descriptor.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8GPUComputePipelineDescriptorKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "computeStage",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8GPUComputePipelineDescriptor::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, GPUComputePipelineDescriptor* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    exception_state.ThrowTypeError("Missing required member(s): computeStage.");
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  V8GPUPipelineDescriptorBase::ToImpl(isolate, v8_value, impl, exception_state);
  if (exception_state.HadException())
    return;

  const v8::Eternal<v8::Name>* keys = eternalV8GPUComputePipelineDescriptorKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> compute_stage_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&compute_stage_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (compute_stage_value.IsEmpty() || compute_stage_value->IsUndefined()) {
    exception_state.ThrowTypeError("required member computeStage is undefined.");
    return;
  } else {
    GPUPipelineStageDescriptor* compute_stage_cpp_value = NativeValueTraits<GPUPipelineStageDescriptor>::NativeValue(isolate, compute_stage_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setComputeStage(compute_stage_cpp_value);
  }
}

v8::Local<v8::Value> GPUComputePipelineDescriptor::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8GPUComputePipelineDescriptor(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8GPUComputePipelineDescriptor(const GPUComputePipelineDescriptor* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8GPUPipelineDescriptorBase(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8GPUComputePipelineDescriptorKeys(isolate);
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

  v8::Local<v8::Value> compute_stage_value;
  bool compute_stage_has_value_or_default = false;
  if (impl->hasComputeStage()) {
    compute_stage_value = ToV8(impl->computeStage(), creationContext, isolate);
    compute_stage_has_value_or_default = true;
  } else {
    NOTREACHED();
  }
  if (compute_stage_has_value_or_default &&
      !create_property(0, compute_stage_value)) {
    return false;
  }

  return true;
}

GPUComputePipelineDescriptor* NativeValueTraits<GPUComputePipelineDescriptor>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  GPUComputePipelineDescriptor* impl = GPUComputePipelineDescriptor::Create();
  V8GPUComputePipelineDescriptor::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
