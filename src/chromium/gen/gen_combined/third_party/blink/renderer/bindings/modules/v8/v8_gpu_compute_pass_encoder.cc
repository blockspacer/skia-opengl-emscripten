// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_gpu_compute_pass_encoder.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_gpu_bind_group.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_gpu_compute_pipeline.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/platform/bindings/exception_messages.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
#include "third_party/blink/renderer/platform/bindings/v8_object_constructor.h"
#include "third_party/blink/renderer/platform/runtime_enabled_features.h"
#include "third_party/blink/renderer/platform/scheduler/public/cooperative_scheduling_manager.h"
#include "third_party/blink/renderer/platform/wtf/get_ptr.h"

namespace blink {

// Suppress warning: global constructors, because struct WrapperTypeInfo is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
const WrapperTypeInfo v8_gpu_compute_pass_encoder_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8GPUComputePassEncoder::DomTemplate,
    nullptr,
    "GPUComputePassEncoder",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in GPUComputePassEncoder.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& GPUComputePassEncoder::wrapper_type_info_ = v8_gpu_compute_pass_encoder_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, GPUComputePassEncoder>::value,
    "GPUComputePassEncoder inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&GPUComputePassEncoder::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "GPUComputePassEncoder is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace gpu_compute_pass_encoder_v8_internal {

static void SetBindGroupMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "GPUComputePassEncoder", "setBindGroup");

  GPUComputePassEncoder* impl = V8GPUComputePassEncoder::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  uint32_t index;
  GPUBindGroup* bind_group;
  Vector<uint64_t> dynamic_offsets;
  index = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  bind_group = V8GPUBindGroup::ToImplWithTypeCheck(info.GetIsolate(), info[1]);
  if (!bind_group) {
    exception_state.ThrowTypeError("parameter 2 is not of type 'GPUBindGroup'.");
    return;
  }

  if (!info[2]->IsUndefined()) {
    dynamic_offsets = NativeValueTraits<IDLSequence<IDLUnsignedLongLong>>::NativeValue(info.GetIsolate(), info[2], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    /* Nothing to do */;
  }

  impl->setBindGroup(index, bind_group, dynamic_offsets);
}

static void SetPipelineMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  GPUComputePassEncoder* impl = V8GPUComputePassEncoder::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("setPipeline", "GPUComputePassEncoder", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  GPUComputePipeline* pipeline;
  pipeline = V8GPUComputePipeline::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!pipeline) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("setPipeline", "GPUComputePassEncoder", "parameter 1 is not of type 'GPUComputePipeline'."));
    return;
  }

  impl->setPipeline(pipeline);
}

static void DispatchMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "GPUComputePassEncoder", "dispatch");

  GPUComputePassEncoder* impl = V8GPUComputePassEncoder::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  uint32_t x;
  uint32_t y;
  uint32_t z;
  x = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  if (!info[1]->IsUndefined()) {
    y = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    y = 1u;
  }
  if (!info[2]->IsUndefined()) {
    z = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    z = 1u;
  }

  impl->dispatch(x, y, z);
}

static void EndPassMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  GPUComputePassEncoder* impl = V8GPUComputePassEncoder::ToImpl(info.Holder());

  impl->endPass();
}

}  // namespace gpu_compute_pass_encoder_v8_internal

void V8GPUComputePassEncoder::SetBindGroupMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_GPUComputePassEncoder_setBindGroup");

  gpu_compute_pass_encoder_v8_internal::SetBindGroupMethod(info);
}

void V8GPUComputePassEncoder::SetPipelineMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_GPUComputePassEncoder_setPipeline");

  gpu_compute_pass_encoder_v8_internal::SetPipelineMethod(info);
}

void V8GPUComputePassEncoder::DispatchMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_GPUComputePassEncoder_dispatch");

  gpu_compute_pass_encoder_v8_internal::DispatchMethod(info);
}

void V8GPUComputePassEncoder::EndPassMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_GPUComputePassEncoder_endPass");

  gpu_compute_pass_encoder_v8_internal::EndPassMethod(info);
}

static constexpr V8DOMConfiguration::MethodConfiguration kV8GPUComputePassEncoderMethods[] = {
    {"setBindGroup", V8GPUComputePassEncoder::SetBindGroupMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setPipeline", V8GPUComputePassEncoder::SetPipelineMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"dispatch", V8GPUComputePassEncoder::DispatchMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"endPass", V8GPUComputePassEncoder::EndPassMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void InstallV8GPUComputePassEncoderTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8GPUComputePassEncoder::GetWrapperTypeInfo()->interface_name, v8::Local<v8::FunctionTemplate>(), V8GPUComputePassEncoder::kInternalFieldCount);

  if (!RuntimeEnabledFeatures::WebGPUEnabled()) {
    return;
  }

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallMethods(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8GPUComputePassEncoderMethods, base::size(kV8GPUComputePassEncoderMethods));

  // Custom signature

  V8GPUComputePassEncoder::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8GPUComputePassEncoder::InstallRuntimeEnabledFeaturesOnTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  if (!RuntimeEnabledFeatures::WebGPUEnabled()) {
    return;
  }

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.

  // Custom signature
}

v8::Local<v8::FunctionTemplate> V8GPUComputePassEncoder::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8GPUComputePassEncoder::GetWrapperTypeInfo()),
      InstallV8GPUComputePassEncoderTemplate);
}

bool V8GPUComputePassEncoder::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8GPUComputePassEncoder::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8GPUComputePassEncoder::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8GPUComputePassEncoder::GetWrapperTypeInfo(), v8_value);
}

GPUComputePassEncoder* V8GPUComputePassEncoder::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

GPUComputePassEncoder* NativeValueTraits<GPUComputePassEncoder>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  GPUComputePassEncoder* native_value = V8GPUComputePassEncoder::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "GPUComputePassEncoder"));
  }
  return native_value;
}

}  // namespace blink
