// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_multi_draw_instanced.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_array_buffer_view.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_int32_array.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/typed_arrays/array_buffer_view_helpers.h"
#include "third_party/blink/renderer/core/typed_arrays/flexible_array_buffer_view.h"
#include "third_party/blink/renderer/platform/bindings/exception_messages.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
#include "third_party/blink/renderer/platform/bindings/v8_object_constructor.h"
#include "third_party/blink/renderer/platform/scheduler/public/cooperative_scheduling_manager.h"
#include "third_party/blink/renderer/platform/wtf/get_ptr.h"

namespace blink {

// Suppress warning: global constructors, because struct WrapperTypeInfo is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
const WrapperTypeInfo v8_webgl_multi_draw_instanced_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8WebGLMultiDrawInstanced::DomTemplate,
    nullptr,
    "WebGLMultiDrawInstanced",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in WebGLMultiDrawInstanced.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& WebGLMultiDrawInstanced::wrapper_type_info_ = v8_webgl_multi_draw_instanced_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, WebGLMultiDrawInstanced>::value,
    "WebGLMultiDrawInstanced inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&WebGLMultiDrawInstanced::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "WebGLMultiDrawInstanced is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace webgl_multi_draw_instanced_v8_internal {

static void MultiDrawArraysInstancedWEBGLMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLMultiDrawInstanced", "multiDrawArraysInstancedWEBGL");

  WebGLMultiDrawInstanced* impl = V8WebGLMultiDrawInstanced::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 8)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(8, info.Length()));
    return;
  }

  uint32_t mode;
  Int32ArrayOrLongSequence firsts_list;
  uint32_t firsts_offset;
  Int32ArrayOrLongSequence counts_list;
  uint32_t counts_offset;
  Int32ArrayOrLongSequence instance_counts_list;
  uint32_t instance_counts_offset;
  int32_t drawcount;
  mode = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  V8Int32ArrayOrLongSequence::ToImpl(info.GetIsolate(), info[1], firsts_list, UnionTypeConversionMode::kNotNullable, exception_state);
  if (exception_state.HadException())
    return;

  firsts_offset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  V8Int32ArrayOrLongSequence::ToImpl(info.GetIsolate(), info[3], counts_list, UnionTypeConversionMode::kNotNullable, exception_state);
  if (exception_state.HadException())
    return;

  counts_offset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[4], exception_state);
  if (exception_state.HadException())
    return;

  V8Int32ArrayOrLongSequence::ToImpl(info.GetIsolate(), info[5], instance_counts_list, UnionTypeConversionMode::kNotNullable, exception_state);
  if (exception_state.HadException())
    return;

  instance_counts_offset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[6], exception_state);
  if (exception_state.HadException())
    return;

  drawcount = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[7], exception_state);
  if (exception_state.HadException())
    return;

  impl->multiDrawArraysInstancedWEBGL(mode, firsts_list, firsts_offset, counts_list, counts_offset, instance_counts_list, instance_counts_offset, drawcount);
}

static void MultiDrawElementsInstancedWEBGLMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLMultiDrawInstanced", "multiDrawElementsInstancedWEBGL");

  WebGLMultiDrawInstanced* impl = V8WebGLMultiDrawInstanced::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 9)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(9, info.Length()));
    return;
  }

  uint32_t mode;
  Int32ArrayOrLongSequence counts_list;
  uint32_t counts_offset;
  uint32_t type;
  Int32ArrayOrLongSequence offsets_list;
  uint32_t offsets_offset;
  Int32ArrayOrLongSequence instance_counts_list;
  uint32_t instance_counts_offset;
  int32_t drawcount;
  mode = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  V8Int32ArrayOrLongSequence::ToImpl(info.GetIsolate(), info[1], counts_list, UnionTypeConversionMode::kNotNullable, exception_state);
  if (exception_state.HadException())
    return;

  counts_offset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  type = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[3], exception_state);
  if (exception_state.HadException())
    return;

  V8Int32ArrayOrLongSequence::ToImpl(info.GetIsolate(), info[4], offsets_list, UnionTypeConversionMode::kNotNullable, exception_state);
  if (exception_state.HadException())
    return;

  offsets_offset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[5], exception_state);
  if (exception_state.HadException())
    return;

  V8Int32ArrayOrLongSequence::ToImpl(info.GetIsolate(), info[6], instance_counts_list, UnionTypeConversionMode::kNotNullable, exception_state);
  if (exception_state.HadException())
    return;

  instance_counts_offset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[7], exception_state);
  if (exception_state.HadException())
    return;

  drawcount = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[8], exception_state);
  if (exception_state.HadException())
    return;

  impl->multiDrawElementsInstancedWEBGL(mode, counts_list, counts_offset, type, offsets_list, offsets_offset, instance_counts_list, instance_counts_offset, drawcount);
}

}  // namespace webgl_multi_draw_instanced_v8_internal

void V8WebGLMultiDrawInstanced::MultiDrawArraysInstancedWEBGLMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLMultiDrawInstanced_multiDrawArraysInstancedWEBGL");

  webgl_multi_draw_instanced_v8_internal::MultiDrawArraysInstancedWEBGLMethod(info);
}

void V8WebGLMultiDrawInstanced::MultiDrawElementsInstancedWEBGLMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLMultiDrawInstanced_multiDrawElementsInstancedWEBGL");

  webgl_multi_draw_instanced_v8_internal::MultiDrawElementsInstancedWEBGLMethod(info);
}

static constexpr V8DOMConfiguration::MethodConfiguration kV8WebGLMultiDrawInstancedMethods[] = {
    {"multiDrawArraysInstancedWEBGL", V8WebGLMultiDrawInstanced::MultiDrawArraysInstancedWEBGLMethodCallback, 8, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"multiDrawElementsInstancedWEBGL", V8WebGLMultiDrawInstanced::MultiDrawElementsInstancedWEBGLMethodCallback, 9, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void InstallV8WebGLMultiDrawInstancedTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8WebGLMultiDrawInstanced::GetWrapperTypeInfo()->interface_name, v8::Local<v8::FunctionTemplate>(), V8WebGLMultiDrawInstanced::kInternalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallMethods(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8WebGLMultiDrawInstancedMethods, base::size(kV8WebGLMultiDrawInstancedMethods));

  // Custom signature

  V8WebGLMultiDrawInstanced::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8WebGLMultiDrawInstanced::InstallRuntimeEnabledFeaturesOnTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.

  // Custom signature
}

v8::Local<v8::FunctionTemplate> V8WebGLMultiDrawInstanced::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8WebGLMultiDrawInstanced::GetWrapperTypeInfo()),
      InstallV8WebGLMultiDrawInstancedTemplate);
}

bool V8WebGLMultiDrawInstanced::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8WebGLMultiDrawInstanced::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8WebGLMultiDrawInstanced::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8WebGLMultiDrawInstanced::GetWrapperTypeInfo(), v8_value);
}

WebGLMultiDrawInstanced* V8WebGLMultiDrawInstanced::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

WebGLMultiDrawInstanced* NativeValueTraits<WebGLMultiDrawInstanced>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  WebGLMultiDrawInstanced* native_value = V8WebGLMultiDrawInstanced::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "WebGLMultiDrawInstanced"));
  }
  return native_value;
}

}  // namespace blink
