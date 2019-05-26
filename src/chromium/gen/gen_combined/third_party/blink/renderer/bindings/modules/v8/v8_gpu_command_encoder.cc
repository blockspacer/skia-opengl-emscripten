// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_gpu_command_encoder.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_gpu_buffer.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_gpu_buffer_copy_view.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_gpu_command_buffer.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_gpu_compute_pass_encoder.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_gpu_extent_3d.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_gpu_render_pass_descriptor.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_gpu_render_pass_encoder.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_gpu_texture_copy_view.h"
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
const WrapperTypeInfo v8_gpu_command_encoder_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8GPUCommandEncoder::DomTemplate,
    nullptr,
    "GPUCommandEncoder",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in GPUCommandEncoder.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& GPUCommandEncoder::wrapper_type_info_ = v8_gpu_command_encoder_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, GPUCommandEncoder>::value,
    "GPUCommandEncoder inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&GPUCommandEncoder::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "GPUCommandEncoder is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace gpu_command_encoder_v8_internal {

static void BeginRenderPassMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "GPUCommandEncoder", "beginRenderPass");

  GPUCommandEncoder* impl = V8GPUCommandEncoder::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  GPURenderPassDescriptor* descriptor;
  if (!info[0]->IsNullOrUndefined() && !info[0]->IsObject()) {
    exception_state.ThrowTypeError("parameter 1 ('descriptor') is not an object.");
    return;
  }
  descriptor = NativeValueTraits<GPURenderPassDescriptor>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  V8SetReturnValue(info, impl->beginRenderPass(descriptor));
}

static void BeginComputePassMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  GPUCommandEncoder* impl = V8GPUCommandEncoder::ToImpl(info.Holder());

  V8SetReturnValue(info, impl->beginComputePass());
}

static void CopyBufferToBufferMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "GPUCommandEncoder", "copyBufferToBuffer");

  GPUCommandEncoder* impl = V8GPUCommandEncoder::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 5)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(5, info.Length()));
    return;
  }

  GPUBuffer* src;
  uint64_t src_offset;
  GPUBuffer* dst;
  uint64_t dst_offset;
  uint64_t size;
  src = V8GPUBuffer::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!src) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'GPUBuffer'.");
    return;
  }

  src_offset = NativeValueTraits<IDLUnsignedLongLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  dst = V8GPUBuffer::ToImplWithTypeCheck(info.GetIsolate(), info[2]);
  if (!dst) {
    exception_state.ThrowTypeError("parameter 3 is not of type 'GPUBuffer'.");
    return;
  }

  dst_offset = NativeValueTraits<IDLUnsignedLongLong>::NativeValue(info.GetIsolate(), info[3], exception_state);
  if (exception_state.HadException())
    return;

  size = NativeValueTraits<IDLUnsignedLongLong>::NativeValue(info.GetIsolate(), info[4], exception_state);
  if (exception_state.HadException())
    return;

  impl->copyBufferToBuffer(src, src_offset, dst, dst_offset, size);
}

static void CopyBufferToTextureMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "GPUCommandEncoder", "copyBufferToTexture");

  GPUCommandEncoder* impl = V8GPUCommandEncoder::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 3)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
    return;
  }

  GPUBufferCopyView* source;
  GPUTextureCopyView* destination;
  GPUExtent3D* copy_size;
  if (!info[0]->IsNullOrUndefined() && !info[0]->IsObject()) {
    exception_state.ThrowTypeError("parameter 1 ('source') is not an object.");
    return;
  }
  source = NativeValueTraits<GPUBufferCopyView>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  if (!info[1]->IsNullOrUndefined() && !info[1]->IsObject()) {
    exception_state.ThrowTypeError("parameter 2 ('destination') is not an object.");
    return;
  }
  destination = NativeValueTraits<GPUTextureCopyView>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  if (!info[2]->IsNullOrUndefined() && !info[2]->IsObject()) {
    exception_state.ThrowTypeError("parameter 3 ('copySize') is not an object.");
    return;
  }
  copy_size = NativeValueTraits<GPUExtent3D>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  impl->copyBufferToTexture(source, destination, copy_size);
}

static void CopyTextureToBufferMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "GPUCommandEncoder", "copyTextureToBuffer");

  GPUCommandEncoder* impl = V8GPUCommandEncoder::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 3)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
    return;
  }

  GPUTextureCopyView* source;
  GPUBufferCopyView* destination;
  GPUExtent3D* copy_size;
  if (!info[0]->IsNullOrUndefined() && !info[0]->IsObject()) {
    exception_state.ThrowTypeError("parameter 1 ('source') is not an object.");
    return;
  }
  source = NativeValueTraits<GPUTextureCopyView>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  if (!info[1]->IsNullOrUndefined() && !info[1]->IsObject()) {
    exception_state.ThrowTypeError("parameter 2 ('destination') is not an object.");
    return;
  }
  destination = NativeValueTraits<GPUBufferCopyView>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  if (!info[2]->IsNullOrUndefined() && !info[2]->IsObject()) {
    exception_state.ThrowTypeError("parameter 3 ('copySize') is not an object.");
    return;
  }
  copy_size = NativeValueTraits<GPUExtent3D>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  impl->copyTextureToBuffer(source, destination, copy_size);
}

static void CopyTextureToTextureMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "GPUCommandEncoder", "copyTextureToTexture");

  GPUCommandEncoder* impl = V8GPUCommandEncoder::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 3)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
    return;
  }

  GPUTextureCopyView* source;
  GPUTextureCopyView* destination;
  GPUExtent3D* copy_size;
  if (!info[0]->IsNullOrUndefined() && !info[0]->IsObject()) {
    exception_state.ThrowTypeError("parameter 1 ('source') is not an object.");
    return;
  }
  source = NativeValueTraits<GPUTextureCopyView>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  if (!info[1]->IsNullOrUndefined() && !info[1]->IsObject()) {
    exception_state.ThrowTypeError("parameter 2 ('destination') is not an object.");
    return;
  }
  destination = NativeValueTraits<GPUTextureCopyView>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  if (!info[2]->IsNullOrUndefined() && !info[2]->IsObject()) {
    exception_state.ThrowTypeError("parameter 3 ('copySize') is not an object.");
    return;
  }
  copy_size = NativeValueTraits<GPUExtent3D>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  impl->copyTextureToTexture(source, destination, copy_size);
}

static void FinishMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  GPUCommandEncoder* impl = V8GPUCommandEncoder::ToImpl(info.Holder());

  V8SetReturnValue(info, impl->finish());
}

}  // namespace gpu_command_encoder_v8_internal

void V8GPUCommandEncoder::BeginRenderPassMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_GPUCommandEncoder_beginRenderPass");

  gpu_command_encoder_v8_internal::BeginRenderPassMethod(info);
}

void V8GPUCommandEncoder::BeginComputePassMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_GPUCommandEncoder_beginComputePass");

  gpu_command_encoder_v8_internal::BeginComputePassMethod(info);
}

void V8GPUCommandEncoder::CopyBufferToBufferMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_GPUCommandEncoder_copyBufferToBuffer");

  gpu_command_encoder_v8_internal::CopyBufferToBufferMethod(info);
}

void V8GPUCommandEncoder::CopyBufferToTextureMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_GPUCommandEncoder_copyBufferToTexture");

  gpu_command_encoder_v8_internal::CopyBufferToTextureMethod(info);
}

void V8GPUCommandEncoder::CopyTextureToBufferMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_GPUCommandEncoder_copyTextureToBuffer");

  gpu_command_encoder_v8_internal::CopyTextureToBufferMethod(info);
}

void V8GPUCommandEncoder::CopyTextureToTextureMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_GPUCommandEncoder_copyTextureToTexture");

  gpu_command_encoder_v8_internal::CopyTextureToTextureMethod(info);
}

void V8GPUCommandEncoder::FinishMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_GPUCommandEncoder_finish");

  gpu_command_encoder_v8_internal::FinishMethod(info);
}

static constexpr V8DOMConfiguration::MethodConfiguration kV8GPUCommandEncoderMethods[] = {
    {"beginRenderPass", V8GPUCommandEncoder::BeginRenderPassMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"beginComputePass", V8GPUCommandEncoder::BeginComputePassMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"copyBufferToBuffer", V8GPUCommandEncoder::CopyBufferToBufferMethodCallback, 5, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"copyBufferToTexture", V8GPUCommandEncoder::CopyBufferToTextureMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"copyTextureToBuffer", V8GPUCommandEncoder::CopyTextureToBufferMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"copyTextureToTexture", V8GPUCommandEncoder::CopyTextureToTextureMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"finish", V8GPUCommandEncoder::FinishMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void InstallV8GPUCommandEncoderTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8GPUCommandEncoder::GetWrapperTypeInfo()->interface_name, v8::Local<v8::FunctionTemplate>(), V8GPUCommandEncoder::kInternalFieldCount);

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
      signature, kV8GPUCommandEncoderMethods, base::size(kV8GPUCommandEncoderMethods));

  // Custom signature

  V8GPUCommandEncoder::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8GPUCommandEncoder::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8GPUCommandEncoder::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8GPUCommandEncoder::GetWrapperTypeInfo()),
      InstallV8GPUCommandEncoderTemplate);
}

bool V8GPUCommandEncoder::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8GPUCommandEncoder::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8GPUCommandEncoder::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8GPUCommandEncoder::GetWrapperTypeInfo(), v8_value);
}

GPUCommandEncoder* V8GPUCommandEncoder::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

GPUCommandEncoder* NativeValueTraits<GPUCommandEncoder>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  GPUCommandEncoder* native_value = V8GPUCommandEncoder::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "GPUCommandEncoder"));
  }
  return native_value;
}

}  // namespace blink
