// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_gpu_render_pass_encoder.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_gpu_bind_group.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_gpu_buffer.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_gpu_color.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_gpu_render_pipeline.h"
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
const WrapperTypeInfo v8_gpu_render_pass_encoder_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8GPURenderPassEncoder::DomTemplate,
    nullptr,
    "GPURenderPassEncoder",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in GPURenderPassEncoder.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& GPURenderPassEncoder::wrapper_type_info_ = v8_gpu_render_pass_encoder_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, GPURenderPassEncoder>::value,
    "GPURenderPassEncoder inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&GPURenderPassEncoder::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "GPURenderPassEncoder is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace gpu_render_pass_encoder_v8_internal {

static void SetBindGroupMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "GPURenderPassEncoder", "setBindGroup");

  GPURenderPassEncoder* impl = V8GPURenderPassEncoder::ToImpl(info.Holder());

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
  GPURenderPassEncoder* impl = V8GPURenderPassEncoder::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("setPipeline", "GPURenderPassEncoder", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  GPURenderPipeline* pipeline;
  pipeline = V8GPURenderPipeline::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!pipeline) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("setPipeline", "GPURenderPassEncoder", "parameter 1 is not of type 'GPURenderPipeline'."));
    return;
  }

  impl->setPipeline(pipeline);
}

static void SetBlendColorMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "GPURenderPassEncoder", "setBlendColor");

  GPURenderPassEncoder* impl = V8GPURenderPassEncoder::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  GPUColor* color;
  if (!info[0]->IsNullOrUndefined() && !info[0]->IsObject()) {
    exception_state.ThrowTypeError("parameter 1 ('color') is not an object.");
    return;
  }
  color = NativeValueTraits<GPUColor>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  impl->setBlendColor(color);
}

static void SetStencilReferenceMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "GPURenderPassEncoder", "setStencilReference");

  GPURenderPassEncoder* impl = V8GPURenderPassEncoder::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  uint32_t reference;
  reference = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  impl->setStencilReference(reference);
}

static void SetViewportMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "GPURenderPassEncoder", "setViewport");

  GPURenderPassEncoder* impl = V8GPURenderPassEncoder::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 6)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(6, info.Length()));
    return;
  }

  float x;
  float y;
  float width;
  float height;
  float min_depth;
  float max_depth;
  x = NativeValueTraits<IDLFloat>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  y = NativeValueTraits<IDLFloat>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  width = NativeValueTraits<IDLFloat>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  height = NativeValueTraits<IDLFloat>::NativeValue(info.GetIsolate(), info[3], exception_state);
  if (exception_state.HadException())
    return;

  min_depth = NativeValueTraits<IDLFloat>::NativeValue(info.GetIsolate(), info[4], exception_state);
  if (exception_state.HadException())
    return;

  max_depth = NativeValueTraits<IDLFloat>::NativeValue(info.GetIsolate(), info[5], exception_state);
  if (exception_state.HadException())
    return;

  impl->setViewport(x, y, width, height, min_depth, max_depth);
}

static void SetScissorRectMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "GPURenderPassEncoder", "setScissorRect");

  GPURenderPassEncoder* impl = V8GPURenderPassEncoder::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 4)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(4, info.Length()));
    return;
  }

  uint32_t x;
  uint32_t y;
  uint32_t width;
  uint32_t height;
  x = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  y = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  width = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  height = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[3], exception_state);
  if (exception_state.HadException())
    return;

  impl->setScissorRect(x, y, width, height);
}

static void SetIndexBufferMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "GPURenderPassEncoder", "setIndexBuffer");

  GPURenderPassEncoder* impl = V8GPURenderPassEncoder::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  GPUBuffer* buffer;
  uint64_t offset;
  buffer = V8GPUBuffer::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!buffer) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'GPUBuffer'.");
    return;
  }

  offset = NativeValueTraits<IDLUnsignedLongLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  impl->setIndexBuffer(buffer, offset);
}

static void SetVertexBuffersMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "GPURenderPassEncoder", "setVertexBuffers");

  GPURenderPassEncoder* impl = V8GPURenderPassEncoder::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 3)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
    return;
  }

  uint32_t start_slot;
  HeapVector<Member<GPUBuffer>> buffers;
  Vector<uint64_t> offsets;
  start_slot = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  buffers = NativeValueTraits<IDLSequence<GPUBuffer>>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  offsets = NativeValueTraits<IDLSequence<IDLUnsignedLongLong>>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  impl->setVertexBuffers(start_slot, buffers, offsets, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void DrawMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "GPURenderPassEncoder", "draw");

  GPURenderPassEncoder* impl = V8GPURenderPassEncoder::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 4)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(4, info.Length()));
    return;
  }

  uint32_t vertex_count;
  uint32_t instance_count;
  uint32_t first_vertex;
  uint32_t first_instance;
  vertex_count = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  instance_count = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  first_vertex = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  first_instance = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[3], exception_state);
  if (exception_state.HadException())
    return;

  impl->draw(vertex_count, instance_count, first_vertex, first_instance);
}

static void DrawIndexedMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "GPURenderPassEncoder", "drawIndexed");

  GPURenderPassEncoder* impl = V8GPURenderPassEncoder::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 5)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(5, info.Length()));
    return;
  }

  uint32_t index_count;
  uint32_t instance_count;
  uint32_t first_index;
  int32_t base_vertex;
  uint32_t first_instance;
  index_count = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  instance_count = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  first_index = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  base_vertex = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[3], exception_state);
  if (exception_state.HadException())
    return;

  first_instance = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[4], exception_state);
  if (exception_state.HadException())
    return;

  impl->drawIndexed(index_count, instance_count, first_index, base_vertex, first_instance);
}

static void EndPassMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  GPURenderPassEncoder* impl = V8GPURenderPassEncoder::ToImpl(info.Holder());

  impl->endPass();
}

}  // namespace gpu_render_pass_encoder_v8_internal

void V8GPURenderPassEncoder::SetBindGroupMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_GPURenderPassEncoder_setBindGroup");

  gpu_render_pass_encoder_v8_internal::SetBindGroupMethod(info);
}

void V8GPURenderPassEncoder::SetPipelineMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_GPURenderPassEncoder_setPipeline");

  gpu_render_pass_encoder_v8_internal::SetPipelineMethod(info);
}

void V8GPURenderPassEncoder::SetBlendColorMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_GPURenderPassEncoder_setBlendColor");

  gpu_render_pass_encoder_v8_internal::SetBlendColorMethod(info);
}

void V8GPURenderPassEncoder::SetStencilReferenceMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_GPURenderPassEncoder_setStencilReference");

  gpu_render_pass_encoder_v8_internal::SetStencilReferenceMethod(info);
}

void V8GPURenderPassEncoder::SetViewportMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_GPURenderPassEncoder_setViewport");

  gpu_render_pass_encoder_v8_internal::SetViewportMethod(info);
}

void V8GPURenderPassEncoder::SetScissorRectMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_GPURenderPassEncoder_setScissorRect");

  gpu_render_pass_encoder_v8_internal::SetScissorRectMethod(info);
}

void V8GPURenderPassEncoder::SetIndexBufferMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_GPURenderPassEncoder_setIndexBuffer");

  gpu_render_pass_encoder_v8_internal::SetIndexBufferMethod(info);
}

void V8GPURenderPassEncoder::SetVertexBuffersMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_GPURenderPassEncoder_setVertexBuffers");

  gpu_render_pass_encoder_v8_internal::SetVertexBuffersMethod(info);
}

void V8GPURenderPassEncoder::DrawMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_GPURenderPassEncoder_draw");

  gpu_render_pass_encoder_v8_internal::DrawMethod(info);
}

void V8GPURenderPassEncoder::DrawIndexedMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_GPURenderPassEncoder_drawIndexed");

  gpu_render_pass_encoder_v8_internal::DrawIndexedMethod(info);
}

void V8GPURenderPassEncoder::EndPassMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_GPURenderPassEncoder_endPass");

  gpu_render_pass_encoder_v8_internal::EndPassMethod(info);
}

static constexpr V8DOMConfiguration::MethodConfiguration kV8GPURenderPassEncoderMethods[] = {
    {"setBindGroup", V8GPURenderPassEncoder::SetBindGroupMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setPipeline", V8GPURenderPassEncoder::SetPipelineMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setBlendColor", V8GPURenderPassEncoder::SetBlendColorMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setStencilReference", V8GPURenderPassEncoder::SetStencilReferenceMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setViewport", V8GPURenderPassEncoder::SetViewportMethodCallback, 6, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setScissorRect", V8GPURenderPassEncoder::SetScissorRectMethodCallback, 4, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setIndexBuffer", V8GPURenderPassEncoder::SetIndexBufferMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setVertexBuffers", V8GPURenderPassEncoder::SetVertexBuffersMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"draw", V8GPURenderPassEncoder::DrawMethodCallback, 4, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"drawIndexed", V8GPURenderPassEncoder::DrawIndexedMethodCallback, 5, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"endPass", V8GPURenderPassEncoder::EndPassMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void InstallV8GPURenderPassEncoderTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8GPURenderPassEncoder::GetWrapperTypeInfo()->interface_name, v8::Local<v8::FunctionTemplate>(), V8GPURenderPassEncoder::kInternalFieldCount);

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
      signature, kV8GPURenderPassEncoderMethods, base::size(kV8GPURenderPassEncoderMethods));

  // Custom signature

  V8GPURenderPassEncoder::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8GPURenderPassEncoder::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8GPURenderPassEncoder::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8GPURenderPassEncoder::GetWrapperTypeInfo()),
      InstallV8GPURenderPassEncoderTemplate);
}

bool V8GPURenderPassEncoder::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8GPURenderPassEncoder::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8GPURenderPassEncoder::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8GPURenderPassEncoder::GetWrapperTypeInfo(), v8_value);
}

GPURenderPassEncoder* V8GPURenderPassEncoder::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

GPURenderPassEncoder* NativeValueTraits<GPURenderPassEncoder>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  GPURenderPassEncoder* native_value = V8GPURenderPassEncoder::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "GPURenderPassEncoder"));
  }
  return native_value;
}

}  // namespace blink
