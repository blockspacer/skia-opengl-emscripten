// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_gpu_render_pipeline_descriptor.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_gpu_color_state_descriptor.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_gpu_depth_stencil_state_descriptor.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_gpu_pipeline_descriptor_base.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_gpu_pipeline_stage_descriptor.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_gpu_rasterization_state_descriptor.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_gpu_vertex_input_descriptor.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8GPURenderPipelineDescriptorKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "colorStates",
    "depthStencilState",
    "fragmentStage",
    "primitiveTopology",
    "rasterizationState",
    "sampleCount",
    "vertexInput",
    "vertexStage",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8GPURenderPipelineDescriptor::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, GPURenderPipelineDescriptor* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    exception_state.ThrowTypeError("Missing required member(s): colorStates, fragmentStage, primitiveTopology, rasterizationState, vertexInput, vertexStage.");
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

  const v8::Eternal<v8::Name>* keys = eternalV8GPURenderPipelineDescriptorKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> color_states_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&color_states_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (color_states_value.IsEmpty() || color_states_value->IsUndefined()) {
    exception_state.ThrowTypeError("required member colorStates is undefined.");
    return;
  } else {
    HeapVector<Member<GPUColorStateDescriptor>> color_states_cpp_value = NativeValueTraits<IDLSequence<GPUColorStateDescriptor>>::NativeValue(isolate, color_states_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setColorStates(color_states_cpp_value);
  }

  v8::Local<v8::Value> depth_stencil_state_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&depth_stencil_state_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (depth_stencil_state_value.IsEmpty() || depth_stencil_state_value->IsUndefined()) {
    // Do nothing.
  } else {
    GPUDepthStencilStateDescriptor* depth_stencil_state_cpp_value = NativeValueTraits<GPUDepthStencilStateDescriptor>::NativeValue(isolate, depth_stencil_state_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setDepthStencilState(depth_stencil_state_cpp_value);
  }

  v8::Local<v8::Value> fragment_stage_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&fragment_stage_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (fragment_stage_value.IsEmpty() || fragment_stage_value->IsUndefined()) {
    exception_state.ThrowTypeError("required member fragmentStage is undefined.");
    return;
  } else {
    GPUPipelineStageDescriptor* fragment_stage_cpp_value = NativeValueTraits<GPUPipelineStageDescriptor>::NativeValue(isolate, fragment_stage_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setFragmentStage(fragment_stage_cpp_value);
  }

  v8::Local<v8::Value> primitive_topology_value;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&primitive_topology_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (primitive_topology_value.IsEmpty() || primitive_topology_value->IsUndefined()) {
    exception_state.ThrowTypeError("required member primitiveTopology is undefined.");
    return;
  } else {
    V8StringResource<> primitive_topology_cpp_value = primitive_topology_value;
    if (!primitive_topology_cpp_value.Prepare(exception_state))
      return;
    const char* kValidValues[] = {
        "point-list",
        "line-list",
        "line-strip",
        "triangle-list",
        "triangle-strip",
    };
    if (!IsValidEnum(primitive_topology_cpp_value, kValidValues, base::size(kValidValues), "GPUPrimitiveTopology", exception_state))
      return;
    impl->setPrimitiveTopology(primitive_topology_cpp_value);
  }

  v8::Local<v8::Value> rasterization_state_value;
  if (!v8Object->Get(context, keys[4].Get(isolate)).ToLocal(&rasterization_state_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (rasterization_state_value.IsEmpty() || rasterization_state_value->IsUndefined()) {
    exception_state.ThrowTypeError("required member rasterizationState is undefined.");
    return;
  } else {
    GPURasterizationStateDescriptor* rasterization_state_cpp_value = NativeValueTraits<GPURasterizationStateDescriptor>::NativeValue(isolate, rasterization_state_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setRasterizationState(rasterization_state_cpp_value);
  }

  v8::Local<v8::Value> sample_count_value;
  if (!v8Object->Get(context, keys[5].Get(isolate)).ToLocal(&sample_count_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (sample_count_value.IsEmpty() || sample_count_value->IsUndefined()) {
    // Do nothing.
  } else {
    uint32_t sample_count_cpp_value = NativeValueTraits<IDLUnsignedLong>::NativeValue(isolate, sample_count_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setSampleCount(sample_count_cpp_value);
  }

  v8::Local<v8::Value> vertex_input_value;
  if (!v8Object->Get(context, keys[6].Get(isolate)).ToLocal(&vertex_input_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (vertex_input_value.IsEmpty() || vertex_input_value->IsUndefined()) {
    exception_state.ThrowTypeError("required member vertexInput is undefined.");
    return;
  } else {
    GPUVertexInputDescriptor* vertex_input_cpp_value = NativeValueTraits<GPUVertexInputDescriptor>::NativeValue(isolate, vertex_input_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setVertexInput(vertex_input_cpp_value);
  }

  v8::Local<v8::Value> vertex_stage_value;
  if (!v8Object->Get(context, keys[7].Get(isolate)).ToLocal(&vertex_stage_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (vertex_stage_value.IsEmpty() || vertex_stage_value->IsUndefined()) {
    exception_state.ThrowTypeError("required member vertexStage is undefined.");
    return;
  } else {
    GPUPipelineStageDescriptor* vertex_stage_cpp_value = NativeValueTraits<GPUPipelineStageDescriptor>::NativeValue(isolate, vertex_stage_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setVertexStage(vertex_stage_cpp_value);
  }
}

v8::Local<v8::Value> GPURenderPipelineDescriptor::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8GPURenderPipelineDescriptor(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8GPURenderPipelineDescriptor(const GPURenderPipelineDescriptor* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8GPUPipelineDescriptorBase(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8GPURenderPipelineDescriptorKeys(isolate);
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

  v8::Local<v8::Value> color_states_value;
  bool color_states_has_value_or_default = false;
  if (impl->hasColorStates()) {
    color_states_value = ToV8(impl->colorStates(), creationContext, isolate);
    color_states_has_value_or_default = true;
  } else {
    NOTREACHED();
  }
  if (color_states_has_value_or_default &&
      !create_property(0, color_states_value)) {
    return false;
  }

  v8::Local<v8::Value> depth_stencil_state_value;
  bool depth_stencil_state_has_value_or_default = false;
  if (impl->hasDepthStencilState()) {
    depth_stencil_state_value = ToV8(impl->depthStencilState(), creationContext, isolate);
    depth_stencil_state_has_value_or_default = true;
  } else {
    depth_stencil_state_value = v8::Null(isolate);
    depth_stencil_state_has_value_or_default = true;
  }
  if (depth_stencil_state_has_value_or_default &&
      !create_property(1, depth_stencil_state_value)) {
    return false;
  }

  v8::Local<v8::Value> fragment_stage_value;
  bool fragment_stage_has_value_or_default = false;
  if (impl->hasFragmentStage()) {
    fragment_stage_value = ToV8(impl->fragmentStage(), creationContext, isolate);
    fragment_stage_has_value_or_default = true;
  } else {
    NOTREACHED();
  }
  if (fragment_stage_has_value_or_default &&
      !create_property(2, fragment_stage_value)) {
    return false;
  }

  v8::Local<v8::Value> primitive_topology_value;
  bool primitive_topology_has_value_or_default = false;
  if (impl->hasPrimitiveTopology()) {
    primitive_topology_value = V8String(isolate, impl->primitiveTopology());
    primitive_topology_has_value_or_default = true;
  } else {
    NOTREACHED();
  }
  if (primitive_topology_has_value_or_default &&
      !create_property(3, primitive_topology_value)) {
    return false;
  }

  v8::Local<v8::Value> rasterization_state_value;
  bool rasterization_state_has_value_or_default = false;
  if (impl->hasRasterizationState()) {
    rasterization_state_value = ToV8(impl->rasterizationState(), creationContext, isolate);
    rasterization_state_has_value_or_default = true;
  } else {
    NOTREACHED();
  }
  if (rasterization_state_has_value_or_default &&
      !create_property(4, rasterization_state_value)) {
    return false;
  }

  v8::Local<v8::Value> sample_count_value;
  bool sample_count_has_value_or_default = false;
  if (impl->hasSampleCount()) {
    sample_count_value = v8::Integer::NewFromUnsigned(isolate, impl->sampleCount());
    sample_count_has_value_or_default = true;
  } else {
    sample_count_value = v8::Integer::NewFromUnsigned(isolate, 1u);
    sample_count_has_value_or_default = true;
  }
  if (sample_count_has_value_or_default &&
      !create_property(5, sample_count_value)) {
    return false;
  }

  v8::Local<v8::Value> vertex_input_value;
  bool vertex_input_has_value_or_default = false;
  if (impl->hasVertexInput()) {
    vertex_input_value = ToV8(impl->vertexInput(), creationContext, isolate);
    vertex_input_has_value_or_default = true;
  } else {
    NOTREACHED();
  }
  if (vertex_input_has_value_or_default &&
      !create_property(6, vertex_input_value)) {
    return false;
  }

  v8::Local<v8::Value> vertex_stage_value;
  bool vertex_stage_has_value_or_default = false;
  if (impl->hasVertexStage()) {
    vertex_stage_value = ToV8(impl->vertexStage(), creationContext, isolate);
    vertex_stage_has_value_or_default = true;
  } else {
    NOTREACHED();
  }
  if (vertex_stage_has_value_or_default &&
      !create_property(7, vertex_stage_value)) {
    return false;
  }

  return true;
}

GPURenderPipelineDescriptor* NativeValueTraits<GPURenderPipelineDescriptor>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  GPURenderPipelineDescriptor* impl = GPURenderPipelineDescriptor::Create();
  V8GPURenderPipelineDescriptor::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
