// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_angle_instanced_arrays.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
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
const WrapperTypeInfo v8_angle_instanced_arrays_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8ANGLEInstancedArrays::DomTemplate,
    nullptr,
    "ANGLEInstancedArrays",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in ANGLEInstancedArrays.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& ANGLEInstancedArrays::wrapper_type_info_ = v8_angle_instanced_arrays_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, ANGLEInstancedArrays>::value,
    "ANGLEInstancedArrays inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&ANGLEInstancedArrays::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "ANGLEInstancedArrays is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace angle_instanced_arrays_v8_internal {

static void DrawArraysInstancedANGLEMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "ANGLEInstancedArrays", "drawArraysInstancedANGLE");

  ANGLEInstancedArrays* impl = V8ANGLEInstancedArrays::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 4)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(4, info.Length()));
    return;
  }

  uint32_t mode;
  int32_t first;
  int32_t count;
  int32_t primcount;
  mode = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  first = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  count = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  primcount = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[3], exception_state);
  if (exception_state.HadException())
    return;

  impl->drawArraysInstancedANGLE(mode, first, count, primcount);
}

static void DrawElementsInstancedANGLEMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "ANGLEInstancedArrays", "drawElementsInstancedANGLE");

  ANGLEInstancedArrays* impl = V8ANGLEInstancedArrays::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 5)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(5, info.Length()));
    return;
  }

  uint32_t mode;
  int32_t count;
  uint32_t type;
  int64_t offset;
  int32_t primcount;
  mode = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  count = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  type = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  offset = NativeValueTraits<IDLLongLong>::NativeValue(info.GetIsolate(), info[3], exception_state);
  if (exception_state.HadException())
    return;

  primcount = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[4], exception_state);
  if (exception_state.HadException())
    return;

  impl->drawElementsInstancedANGLE(mode, count, type, offset, primcount);
}

static void VertexAttribDivisorANGLEMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "ANGLEInstancedArrays", "vertexAttribDivisorANGLE");

  ANGLEInstancedArrays* impl = V8ANGLEInstancedArrays::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  uint32_t index;
  int32_t divisor;
  index = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  divisor = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  impl->vertexAttribDivisorANGLE(index, divisor);
}

}  // namespace angle_instanced_arrays_v8_internal

void V8ANGLEInstancedArrays::DrawArraysInstancedANGLEMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ANGLEInstancedArrays_drawArraysInstancedANGLE");

  angle_instanced_arrays_v8_internal::DrawArraysInstancedANGLEMethod(info);
}

void V8ANGLEInstancedArrays::DrawElementsInstancedANGLEMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ANGLEInstancedArrays_drawElementsInstancedANGLE");

  angle_instanced_arrays_v8_internal::DrawElementsInstancedANGLEMethod(info);
}

void V8ANGLEInstancedArrays::VertexAttribDivisorANGLEMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ANGLEInstancedArrays_vertexAttribDivisorANGLE");

  angle_instanced_arrays_v8_internal::VertexAttribDivisorANGLEMethod(info);
}

static constexpr V8DOMConfiguration::MethodConfiguration kV8ANGLEInstancedArraysMethods[] = {
    {"drawArraysInstancedANGLE", V8ANGLEInstancedArrays::DrawArraysInstancedANGLEMethodCallback, 4, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"drawElementsInstancedANGLE", V8ANGLEInstancedArrays::DrawElementsInstancedANGLEMethodCallback, 5, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"vertexAttribDivisorANGLE", V8ANGLEInstancedArrays::VertexAttribDivisorANGLEMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void InstallV8ANGLEInstancedArraysTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8ANGLEInstancedArrays::GetWrapperTypeInfo()->interface_name, v8::Local<v8::FunctionTemplate>(), V8ANGLEInstancedArrays::kInternalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.
  {
    static constexpr V8DOMConfiguration::ConstantConfiguration kConstants[] = {
        {"VERTEX_ATTRIB_ARRAY_DIVISOR_ANGLE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x88FE)},
    };
    V8DOMConfiguration::InstallConstants(
        isolate, interface_template, prototype_template,
        kConstants, base::size(kConstants));
  }
  V8DOMConfiguration::InstallMethods(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8ANGLEInstancedArraysMethods, base::size(kV8ANGLEInstancedArraysMethods));

  // Custom signature

  V8ANGLEInstancedArrays::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8ANGLEInstancedArrays::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8ANGLEInstancedArrays::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8ANGLEInstancedArrays::GetWrapperTypeInfo()),
      InstallV8ANGLEInstancedArraysTemplate);
}

bool V8ANGLEInstancedArrays::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8ANGLEInstancedArrays::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8ANGLEInstancedArrays::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8ANGLEInstancedArrays::GetWrapperTypeInfo(), v8_value);
}

ANGLEInstancedArrays* V8ANGLEInstancedArrays::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

ANGLEInstancedArrays* NativeValueTraits<ANGLEInstancedArrays>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  ANGLEInstancedArrays* native_value = V8ANGLEInstancedArrays::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "ANGLEInstancedArrays"));
  }
  return native_value;
}

}  // namespace blink
