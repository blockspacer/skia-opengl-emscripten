// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_error_event.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/script_value.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_error_event_init.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/frame/local_dom_window.h"
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
const WrapperTypeInfo v8_error_event_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8ErrorEvent::DomTemplate,
    nullptr,
    "ErrorEvent",
    V8Event::GetWrapperTypeInfo(),
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in ErrorEvent.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& ErrorEvent::wrapper_type_info_ = v8_error_event_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, ErrorEvent>::value,
    "ErrorEvent inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&ErrorEvent::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "ErrorEvent is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace error_event_v8_internal {

static void MessageAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  ErrorEvent* impl = V8ErrorEvent::ToImpl(holder);

  V8SetReturnValueString(info, impl->message(), info.GetIsolate());
}

static void FilenameAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  ErrorEvent* impl = V8ErrorEvent::ToImpl(holder);

  V8SetReturnValueString(info, impl->filename(), info.GetIsolate());
}

static void LinenoAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  ErrorEvent* impl = V8ErrorEvent::ToImpl(holder);

  V8SetReturnValueUnsigned(info, impl->lineno());
}

static void ColnoAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  ErrorEvent* impl = V8ErrorEvent::ToImpl(holder);

  V8SetReturnValueUnsigned(info, impl->colno());
}

static void ErrorAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  ErrorEvent* impl = V8ErrorEvent::ToImpl(holder);

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  V8SetReturnValue(info, impl->error(script_state).V8Value());
}

static void IsTrustedAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  ErrorEvent* impl = V8ErrorEvent::ToImpl(holder);

  V8SetReturnValueBool(info, impl->isTrusted());
}

static void Constructor(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ErrorEvent_ConstructorCallback");

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kConstructionContext, "ErrorEvent");
  ScriptState* script_state = ScriptState::From(
      info.NewTarget().As<v8::Object>()->CreationContext());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  V8StringResource<> type;
  ErrorEventInit* event_init_dict;
  type = info[0];
  if (!type.Prepare())
    return;

  if (!info[1]->IsNullOrUndefined() && !info[1]->IsObject()) {
    exception_state.ThrowTypeError("parameter 2 ('eventInitDict') is not an object.");
    return;
  }
  event_init_dict = NativeValueTraits<ErrorEventInit>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  ErrorEvent* impl = ErrorEvent::Create(script_state, type, event_init_dict);
  v8::Local<v8::Object> wrapper = info.Holder();
  wrapper = impl->AssociateWithWrapper(info.GetIsolate(), V8ErrorEvent::GetWrapperTypeInfo(), wrapper);
  V8SetReturnValue(info, wrapper);
}

CORE_EXPORT void ConstructorCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ErrorEvent_Constructor");

  if (!info.IsConstructCall()) {
    V8ThrowException::ThrowTypeError(
        info.GetIsolate(),
        ExceptionMessages::ConstructorNotCallableAsFunction("ErrorEvent"));
    return;
  }

  if (ConstructorMode::Current(info.GetIsolate()) == ConstructorMode::kWrapExistingObject) {
    V8SetReturnValue(info, info.Holder());
    return;
  }

  error_event_v8_internal::Constructor(info);
}

}  // namespace error_event_v8_internal

void V8ErrorEvent::MessageAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ErrorEvent_message_Getter");

  error_event_v8_internal::MessageAttributeGetter(info);
}

void V8ErrorEvent::FilenameAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ErrorEvent_filename_Getter");

  error_event_v8_internal::FilenameAttributeGetter(info);
}

void V8ErrorEvent::LinenoAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ErrorEvent_lineno_Getter");

  error_event_v8_internal::LinenoAttributeGetter(info);
}

void V8ErrorEvent::ColnoAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ErrorEvent_colno_Getter");

  error_event_v8_internal::ColnoAttributeGetter(info);
}

void V8ErrorEvent::ErrorAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ErrorEvent_error_Getter");

  error_event_v8_internal::ErrorAttributeGetter(info);
}

void V8ErrorEvent::IsTrustedAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ErrorEvent_isTrusted_Getter");

  error_event_v8_internal::IsTrustedAttributeGetter(info);
}

static constexpr V8DOMConfiguration::AccessorConfiguration kV8ErrorEventAccessors[] = {
    { "message", V8ErrorEvent::MessageAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "filename", V8ErrorEvent::FilenameAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "lineno", V8ErrorEvent::LinenoAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "colno", V8ErrorEvent::ColnoAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "error", V8ErrorEvent::ErrorAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "isTrusted", V8ErrorEvent::IsTrustedAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::DontDelete | v8::ReadOnly), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
};

static void InstallV8ErrorEventTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8ErrorEvent::GetWrapperTypeInfo()->interface_name, V8Event::DomTemplate(isolate, world), V8ErrorEvent::kInternalFieldCount);
  interface_template->SetCallHandler(error_event_v8_internal::ConstructorCallback);
  interface_template->SetLength(1);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8ErrorEventAccessors, base::size(kV8ErrorEventAccessors));

  // Custom signature

  V8ErrorEvent::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8ErrorEvent::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8ErrorEvent::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8ErrorEvent::GetWrapperTypeInfo()),
      InstallV8ErrorEventTemplate);
}

bool V8ErrorEvent::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8ErrorEvent::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8ErrorEvent::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8ErrorEvent::GetWrapperTypeInfo(), v8_value);
}

ErrorEvent* V8ErrorEvent::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

ErrorEvent* NativeValueTraits<ErrorEvent>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  ErrorEvent* native_value = V8ErrorEvent::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "ErrorEvent"));
  }
  return native_value;
}

}  // namespace blink
