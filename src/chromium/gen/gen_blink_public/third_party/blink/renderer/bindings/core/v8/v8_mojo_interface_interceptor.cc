// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_mojo_interface_interceptor.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/js_event_handler.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/frame/local_dom_window.h"
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
const WrapperTypeInfo v8_mojo_interface_interceptor_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8MojoInterfaceInterceptor::DomTemplate,
    nullptr,
    "MojoInterfaceInterceptor",
    V8EventTarget::GetWrapperTypeInfo(),
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in MojoInterfaceInterceptor.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& MojoInterfaceInterceptor::wrapper_type_info_ = v8_mojo_interface_interceptor_wrapper_type_info;

// [ActiveScriptWrappable]
static_assert(
    std::is_base_of<ActiveScriptWrappableBase, MojoInterfaceInterceptor>::value,
    "MojoInterfaceInterceptor does not inherit from ActiveScriptWrappable<>, but specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    !std::is_same<decltype(&MojoInterfaceInterceptor::HasPendingActivity),
                  decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "MojoInterfaceInterceptor is not overriding hasPendingActivity(), but is specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace mojo_interface_interceptor_v8_internal {

static void OninterfacerequestAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  MojoInterfaceInterceptor* impl = V8MojoInterfaceInterceptor::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->oninterfacerequest()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OninterfacerequestAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  MojoInterfaceInterceptor* impl = V8MojoInterfaceInterceptor::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOninterfacerequest(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void StartMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "MojoInterfaceInterceptor", "start");

  MojoInterfaceInterceptor* impl = V8MojoInterfaceInterceptor::ToImpl(info.Holder());

  impl->start(exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void StopMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  MojoInterfaceInterceptor* impl = V8MojoInterfaceInterceptor::ToImpl(info.Holder());

  impl->stop();
}

static void Constructor(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_MojoInterfaceInterceptor_ConstructorCallback");

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kConstructionContext, "MojoInterfaceInterceptor");

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  V8StringResource<> interface_name;
  V8StringResource<> scope;
  interface_name = info[0];
  if (!interface_name.Prepare())
    return;

  if (!info[1]->IsUndefined()) {
    scope = info[1];
    if (!scope.Prepare())
      return;
    const char* kValidScopeValues[] = {
        "context",
        "process",
    };
    if (!IsValidEnum(scope, kValidScopeValues, base::size(kValidScopeValues), "MojoScope", exception_state)) {
      return;
    }
  } else {
    scope = "context";
  }

  ExecutionContext* execution_context = ToExecutionContext(
      info.NewTarget().As<v8::Object>()->CreationContext());
  MojoInterfaceInterceptor* impl = MojoInterfaceInterceptor::Create(execution_context, interface_name, scope, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  v8::Local<v8::Object> wrapper = info.Holder();
  wrapper = impl->AssociateWithWrapper(info.GetIsolate(), V8MojoInterfaceInterceptor::GetWrapperTypeInfo(), wrapper);
  V8SetReturnValue(info, wrapper);
}

CORE_EXPORT void ConstructorCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_MojoInterfaceInterceptor_Constructor");

  if (!info.IsConstructCall()) {
    V8ThrowException::ThrowTypeError(
        info.GetIsolate(),
        ExceptionMessages::ConstructorNotCallableAsFunction("MojoInterfaceInterceptor"));
    return;
  }

  if (ConstructorMode::Current(info.GetIsolate()) == ConstructorMode::kWrapExistingObject) {
    V8SetReturnValue(info, info.Holder());
    return;
  }

  mojo_interface_interceptor_v8_internal::Constructor(info);
}

}  // namespace mojo_interface_interceptor_v8_internal

void V8MojoInterfaceInterceptor::OninterfacerequestAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_MojoInterfaceInterceptor_oninterfacerequest_Getter");

  mojo_interface_interceptor_v8_internal::OninterfacerequestAttributeGetter(info);
}

void V8MojoInterfaceInterceptor::OninterfacerequestAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_MojoInterfaceInterceptor_oninterfacerequest_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  mojo_interface_interceptor_v8_internal::OninterfacerequestAttributeSetter(v8_value, info);
}

void V8MojoInterfaceInterceptor::StartMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_MojoInterfaceInterceptor_start");

  mojo_interface_interceptor_v8_internal::StartMethod(info);
}

void V8MojoInterfaceInterceptor::StopMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_MojoInterfaceInterceptor_stop");

  mojo_interface_interceptor_v8_internal::StopMethod(info);
}

static constexpr V8DOMConfiguration::AccessorConfiguration kV8MojoInterfaceInterceptorAccessors[] = {
    { "oninterfacerequest", V8MojoInterfaceInterceptor::OninterfacerequestAttributeGetterCallback, V8MojoInterfaceInterceptor::OninterfacerequestAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
};

static constexpr V8DOMConfiguration::MethodConfiguration kV8MojoInterfaceInterceptorMethods[] = {
    {"start", V8MojoInterfaceInterceptor::StartMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"stop", V8MojoInterfaceInterceptor::StopMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void InstallV8MojoInterfaceInterceptorTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8MojoInterfaceInterceptor::GetWrapperTypeInfo()->interface_name, V8EventTarget::DomTemplate(isolate, world), V8MojoInterfaceInterceptor::kInternalFieldCount);
  interface_template->SetCallHandler(mojo_interface_interceptor_v8_internal::ConstructorCallback);
  interface_template->SetLength(1);

  if (!RuntimeEnabledFeatures::MojoJSTestEnabled()) {
    return;
  }

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8MojoInterfaceInterceptorAccessors, base::size(kV8MojoInterfaceInterceptorAccessors));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8MojoInterfaceInterceptorMethods, base::size(kV8MojoInterfaceInterceptorMethods));

  // Custom signature

  V8MojoInterfaceInterceptor::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8MojoInterfaceInterceptor::InstallRuntimeEnabledFeaturesOnTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  if (!RuntimeEnabledFeatures::MojoJSTestEnabled()) {
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

v8::Local<v8::FunctionTemplate> V8MojoInterfaceInterceptor::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8MojoInterfaceInterceptor::GetWrapperTypeInfo()),
      InstallV8MojoInterfaceInterceptorTemplate);
}

bool V8MojoInterfaceInterceptor::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8MojoInterfaceInterceptor::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8MojoInterfaceInterceptor::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8MojoInterfaceInterceptor::GetWrapperTypeInfo(), v8_value);
}

MojoInterfaceInterceptor* V8MojoInterfaceInterceptor::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

MojoInterfaceInterceptor* NativeValueTraits<MojoInterfaceInterceptor>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  MojoInterfaceInterceptor* native_value = V8MojoInterfaceInterceptor::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "MojoInterfaceInterceptor"));
  }
  return native_value;
}

}  // namespace blink
