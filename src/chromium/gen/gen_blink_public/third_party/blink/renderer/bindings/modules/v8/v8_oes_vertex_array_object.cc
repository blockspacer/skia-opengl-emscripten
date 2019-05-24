// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_oes_vertex_array_object.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_vertex_array_object_oes.h"
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
const WrapperTypeInfo v8_oes_vertex_array_object_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8OESVertexArrayObject::DomTemplate,
    nullptr,
    "OESVertexArrayObject",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in OESVertexArrayObject.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& OESVertexArrayObject::wrapper_type_info_ = v8_oes_vertex_array_object_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, OESVertexArrayObject>::value,
    "OESVertexArrayObject inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&OESVertexArrayObject::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "OESVertexArrayObject is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace oes_vertex_array_object_v8_internal {

static void CreateVertexArrayOESMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  OESVertexArrayObject* impl = V8OESVertexArrayObject::ToImpl(info.Holder());

  V8SetReturnValue(info, impl->createVertexArrayOES());
}

static void DeleteVertexArrayOESMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  OESVertexArrayObject* impl = V8OESVertexArrayObject::ToImpl(info.Holder());

  WebGLVertexArrayObjectOES* array_object;
  array_object = V8WebGLVertexArrayObjectOES::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!array_object && !IsUndefinedOrNull(info[0])) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("deleteVertexArrayOES", "OESVertexArrayObject", "parameter 1 is not of type 'WebGLVertexArrayObjectOES'."));
    return;
  }

  impl->deleteVertexArrayOES(array_object);
}

static void IsVertexArrayOESMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  OESVertexArrayObject* impl = V8OESVertexArrayObject::ToImpl(info.Holder());

  WebGLVertexArrayObjectOES* array_object;
  array_object = V8WebGLVertexArrayObjectOES::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!array_object && !IsUndefinedOrNull(info[0])) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isVertexArrayOES", "OESVertexArrayObject", "parameter 1 is not of type 'WebGLVertexArrayObjectOES'."));
    return;
  }

  V8SetReturnValueBool(info, impl->isVertexArrayOES(array_object));
}

static void BindVertexArrayOESMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  OESVertexArrayObject* impl = V8OESVertexArrayObject::ToImpl(info.Holder());

  WebGLVertexArrayObjectOES* array_object;
  array_object = V8WebGLVertexArrayObjectOES::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!array_object && !IsUndefinedOrNull(info[0])) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("bindVertexArrayOES", "OESVertexArrayObject", "parameter 1 is not of type 'WebGLVertexArrayObjectOES'."));
    return;
  }

  impl->bindVertexArrayOES(array_object);
}

}  // namespace oes_vertex_array_object_v8_internal

void V8OESVertexArrayObject::CreateVertexArrayOESMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OESVertexArrayObject_createVertexArrayOES");

  oes_vertex_array_object_v8_internal::CreateVertexArrayOESMethod(info);
}

void V8OESVertexArrayObject::DeleteVertexArrayOESMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OESVertexArrayObject_deleteVertexArrayOES");

  oes_vertex_array_object_v8_internal::DeleteVertexArrayOESMethod(info);
}

void V8OESVertexArrayObject::IsVertexArrayOESMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OESVertexArrayObject_isVertexArrayOES");

  oes_vertex_array_object_v8_internal::IsVertexArrayOESMethod(info);
}

void V8OESVertexArrayObject::BindVertexArrayOESMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OESVertexArrayObject_bindVertexArrayOES");

  oes_vertex_array_object_v8_internal::BindVertexArrayOESMethod(info);
}

static constexpr V8DOMConfiguration::MethodConfiguration kV8OESVertexArrayObjectMethods[] = {
    {"createVertexArrayOES", V8OESVertexArrayObject::CreateVertexArrayOESMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"deleteVertexArrayOES", V8OESVertexArrayObject::DeleteVertexArrayOESMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"isVertexArrayOES", V8OESVertexArrayObject::IsVertexArrayOESMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"bindVertexArrayOES", V8OESVertexArrayObject::BindVertexArrayOESMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void InstallV8OESVertexArrayObjectTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8OESVertexArrayObject::GetWrapperTypeInfo()->interface_name, v8::Local<v8::FunctionTemplate>(), V8OESVertexArrayObject::kInternalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.
  {
    static constexpr V8DOMConfiguration::ConstantConfiguration kConstants[] = {
        {"VERTEX_ARRAY_BINDING_OES", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x85B5)},
    };
    V8DOMConfiguration::InstallConstants(
        isolate, interface_template, prototype_template,
        kConstants, base::size(kConstants));
  }
  V8DOMConfiguration::InstallMethods(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8OESVertexArrayObjectMethods, base::size(kV8OESVertexArrayObjectMethods));

  // Custom signature

  V8OESVertexArrayObject::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8OESVertexArrayObject::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8OESVertexArrayObject::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8OESVertexArrayObject::GetWrapperTypeInfo()),
      InstallV8OESVertexArrayObjectTemplate);
}

bool V8OESVertexArrayObject::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8OESVertexArrayObject::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8OESVertexArrayObject::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8OESVertexArrayObject::GetWrapperTypeInfo(), v8_value);
}

OESVertexArrayObject* V8OESVertexArrayObject::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

OESVertexArrayObject* NativeValueTraits<OESVertexArrayObject>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  OESVertexArrayObject* native_value = V8OESVertexArrayObject::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "OESVertexArrayObject"));
  }
  return native_value;
}

}  // namespace blink
