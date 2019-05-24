// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_security_policy_violation_event.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_security_policy_violation_event_init.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/frame/local_dom_window.h"
#include "third_party/blink/renderer/core/frame/use_counter.h"
#include "third_party/blink/renderer/core/inspector/console_message.h"
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
const WrapperTypeInfo v8_security_policy_violation_event_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8SecurityPolicyViolationEvent::DomTemplate,
    nullptr,
    "SecurityPolicyViolationEvent",
    V8Event::GetWrapperTypeInfo(),
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in SecurityPolicyViolationEvent.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& SecurityPolicyViolationEvent::wrapper_type_info_ = v8_security_policy_violation_event_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, SecurityPolicyViolationEvent>::value,
    "SecurityPolicyViolationEvent inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&SecurityPolicyViolationEvent::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "SecurityPolicyViolationEvent is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace security_policy_violation_event_v8_internal {

static void DocumentURIAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SecurityPolicyViolationEvent* impl = V8SecurityPolicyViolationEvent::ToImpl(holder);

  V8SetReturnValueString(info, impl->documentURI(), info.GetIsolate());
}

static void ReferrerAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SecurityPolicyViolationEvent* impl = V8SecurityPolicyViolationEvent::ToImpl(holder);

  V8SetReturnValueString(info, impl->referrer(), info.GetIsolate());
}

static void BlockedURIAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SecurityPolicyViolationEvent* impl = V8SecurityPolicyViolationEvent::ToImpl(holder);

  V8SetReturnValueString(info, impl->blockedURI(), info.GetIsolate());
}

static void ViolatedDirectiveAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SecurityPolicyViolationEvent* impl = V8SecurityPolicyViolationEvent::ToImpl(holder);

  V8SetReturnValueString(info, impl->violatedDirective(), info.GetIsolate());
}

static void EffectiveDirectiveAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SecurityPolicyViolationEvent* impl = V8SecurityPolicyViolationEvent::ToImpl(holder);

  V8SetReturnValueString(info, impl->effectiveDirective(), info.GetIsolate());
}

static void OriginalPolicyAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SecurityPolicyViolationEvent* impl = V8SecurityPolicyViolationEvent::ToImpl(holder);

  V8SetReturnValueString(info, impl->originalPolicy(), info.GetIsolate());
}

static void DispositionAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SecurityPolicyViolationEvent* impl = V8SecurityPolicyViolationEvent::ToImpl(holder);

  V8SetReturnValueString(info, impl->disposition(), info.GetIsolate());
}

static void SourceFileAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SecurityPolicyViolationEvent* impl = V8SecurityPolicyViolationEvent::ToImpl(holder);

  V8SetReturnValueString(info, impl->sourceFile(), info.GetIsolate());
}

static void StatusCodeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SecurityPolicyViolationEvent* impl = V8SecurityPolicyViolationEvent::ToImpl(holder);

  V8SetReturnValueUnsigned(info, impl->statusCode());
}

static void LineNumberAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SecurityPolicyViolationEvent* impl = V8SecurityPolicyViolationEvent::ToImpl(holder);

  V8SetReturnValueInt(info, impl->lineNumber());
}

static void ColumnNumberAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SecurityPolicyViolationEvent* impl = V8SecurityPolicyViolationEvent::ToImpl(holder);

  V8SetReturnValueInt(info, impl->columnNumber());
}

static void SampleAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SecurityPolicyViolationEvent* impl = V8SecurityPolicyViolationEvent::ToImpl(holder);

  V8SetReturnValueString(info, impl->sample(), info.GetIsolate());
}

static void IsTrustedAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SecurityPolicyViolationEvent* impl = V8SecurityPolicyViolationEvent::ToImpl(holder);

  V8SetReturnValueBool(info, impl->isTrusted());
}

static void Constructor1(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SecurityPolicyViolationEvent_ConstructorCallback");

  V8StringResource<> type;
  type = info[0];
  if (!type.Prepare())
    return;

  SecurityPolicyViolationEvent* impl = SecurityPolicyViolationEvent::Create(type);
  v8::Local<v8::Object> wrapper = info.Holder();
  wrapper = impl->AssociateWithWrapper(info.GetIsolate(), V8SecurityPolicyViolationEvent::GetWrapperTypeInfo(), wrapper);
  V8SetReturnValue(info, wrapper);
}

static void Constructor2(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SecurityPolicyViolationEvent_ConstructorCallback");

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kConstructionContext, "SecurityPolicyViolationEvent");

  V8StringResource<> type;
  SecurityPolicyViolationEventInit* event_init_dict;
  type = info[0];
  if (!type.Prepare())
    return;

  if (!info[1]->IsNullOrUndefined() && !info[1]->IsObject()) {
    exception_state.ThrowTypeError("parameter 2 ('eventInitDict') is not an object.");
    return;
  }
  event_init_dict = NativeValueTraits<SecurityPolicyViolationEventInit>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  SecurityPolicyViolationEvent* impl = SecurityPolicyViolationEvent::Create(type, event_init_dict);
  v8::Local<v8::Object> wrapper = info.Holder();
  wrapper = impl->AssociateWithWrapper(info.GetIsolate(), V8SecurityPolicyViolationEvent::GetWrapperTypeInfo(), wrapper);
  V8SetReturnValue(info, wrapper);
}

static void Constructor(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kConstructionContext, "SecurityPolicyViolationEvent");
  switch (std::min(2, info.Length())) {
    case 1:
      if (true) {
        security_policy_violation_event_v8_internal::Constructor1(info);
        return;
      }
      break;
    case 2:
      if (true) {
        security_policy_violation_event_v8_internal::Constructor2(info);
        return;
      }
      break;
    default:
      exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
      return;
  }
  exception_state.ThrowTypeError("No matching constructor signature.");
}

CORE_EXPORT void ConstructorCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SecurityPolicyViolationEvent_Constructor");

  if (!info.IsConstructCall()) {
    V8ThrowException::ThrowTypeError(
        info.GetIsolate(),
        ExceptionMessages::ConstructorNotCallableAsFunction("SecurityPolicyViolationEvent"));
    return;
  }

  if (ConstructorMode::Current(info.GetIsolate()) == ConstructorMode::kWrapExistingObject) {
    V8SetReturnValue(info, info.Holder());
    return;
  }

  security_policy_violation_event_v8_internal::Constructor(info);
}

}  // namespace security_policy_violation_event_v8_internal

void V8SecurityPolicyViolationEvent::DocumentURIAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SecurityPolicyViolationEvent_documentURI_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kV8SecurityPolicyViolationEvent_DocumentURI_AttributeGetter);

  security_policy_violation_event_v8_internal::DocumentURIAttributeGetter(info);
}

void V8SecurityPolicyViolationEvent::ReferrerAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SecurityPolicyViolationEvent_referrer_Getter");

  security_policy_violation_event_v8_internal::ReferrerAttributeGetter(info);
}

void V8SecurityPolicyViolationEvent::BlockedURIAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SecurityPolicyViolationEvent_blockedURI_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kV8SecurityPolicyViolationEvent_BlockedURI_AttributeGetter);

  security_policy_violation_event_v8_internal::BlockedURIAttributeGetter(info);
}

void V8SecurityPolicyViolationEvent::ViolatedDirectiveAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SecurityPolicyViolationEvent_violatedDirective_Getter");

  security_policy_violation_event_v8_internal::ViolatedDirectiveAttributeGetter(info);
}

void V8SecurityPolicyViolationEvent::EffectiveDirectiveAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SecurityPolicyViolationEvent_effectiveDirective_Getter");

  security_policy_violation_event_v8_internal::EffectiveDirectiveAttributeGetter(info);
}

void V8SecurityPolicyViolationEvent::OriginalPolicyAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SecurityPolicyViolationEvent_originalPolicy_Getter");

  security_policy_violation_event_v8_internal::OriginalPolicyAttributeGetter(info);
}

void V8SecurityPolicyViolationEvent::DispositionAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SecurityPolicyViolationEvent_disposition_Getter");

  security_policy_violation_event_v8_internal::DispositionAttributeGetter(info);
}

void V8SecurityPolicyViolationEvent::SourceFileAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SecurityPolicyViolationEvent_sourceFile_Getter");

  security_policy_violation_event_v8_internal::SourceFileAttributeGetter(info);
}

void V8SecurityPolicyViolationEvent::StatusCodeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SecurityPolicyViolationEvent_statusCode_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kV8SecurityPolicyViolationEvent_StatusCode_AttributeGetter);

  security_policy_violation_event_v8_internal::StatusCodeAttributeGetter(info);
}

void V8SecurityPolicyViolationEvent::LineNumberAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SecurityPolicyViolationEvent_lineNumber_Getter");

  security_policy_violation_event_v8_internal::LineNumberAttributeGetter(info);
}

void V8SecurityPolicyViolationEvent::ColumnNumberAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SecurityPolicyViolationEvent_columnNumber_Getter");

  security_policy_violation_event_v8_internal::ColumnNumberAttributeGetter(info);
}

void V8SecurityPolicyViolationEvent::SampleAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SecurityPolicyViolationEvent_sample_Getter");

  security_policy_violation_event_v8_internal::SampleAttributeGetter(info);
}

void V8SecurityPolicyViolationEvent::IsTrustedAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SecurityPolicyViolationEvent_isTrusted_Getter");

  security_policy_violation_event_v8_internal::IsTrustedAttributeGetter(info);
}

static constexpr V8DOMConfiguration::AccessorConfiguration kV8SecurityPolicyViolationEventAccessors[] = {
    { "documentURI", V8SecurityPolicyViolationEvent::DocumentURIAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "referrer", V8SecurityPolicyViolationEvent::ReferrerAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "blockedURI", V8SecurityPolicyViolationEvent::BlockedURIAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "violatedDirective", V8SecurityPolicyViolationEvent::ViolatedDirectiveAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "effectiveDirective", V8SecurityPolicyViolationEvent::EffectiveDirectiveAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "originalPolicy", V8SecurityPolicyViolationEvent::OriginalPolicyAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "disposition", V8SecurityPolicyViolationEvent::DispositionAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "sourceFile", V8SecurityPolicyViolationEvent::SourceFileAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "statusCode", V8SecurityPolicyViolationEvent::StatusCodeAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "lineNumber", V8SecurityPolicyViolationEvent::LineNumberAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "columnNumber", V8SecurityPolicyViolationEvent::ColumnNumberAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "sample", V8SecurityPolicyViolationEvent::SampleAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "isTrusted", V8SecurityPolicyViolationEvent::IsTrustedAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::DontDelete | v8::ReadOnly), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
};

static void InstallV8SecurityPolicyViolationEventTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8SecurityPolicyViolationEvent::GetWrapperTypeInfo()->interface_name, V8Event::DomTemplate(isolate, world), V8SecurityPolicyViolationEvent::kInternalFieldCount);
  interface_template->SetCallHandler(security_policy_violation_event_v8_internal::ConstructorCallback);
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
      signature, kV8SecurityPolicyViolationEventAccessors, base::size(kV8SecurityPolicyViolationEventAccessors));

  // Custom signature

  V8SecurityPolicyViolationEvent::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8SecurityPolicyViolationEvent::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8SecurityPolicyViolationEvent::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8SecurityPolicyViolationEvent::GetWrapperTypeInfo()),
      InstallV8SecurityPolicyViolationEventTemplate);
}

bool V8SecurityPolicyViolationEvent::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8SecurityPolicyViolationEvent::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8SecurityPolicyViolationEvent::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8SecurityPolicyViolationEvent::GetWrapperTypeInfo(), v8_value);
}

SecurityPolicyViolationEvent* V8SecurityPolicyViolationEvent::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

SecurityPolicyViolationEvent* NativeValueTraits<SecurityPolicyViolationEvent>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  SecurityPolicyViolationEvent* native_value = V8SecurityPolicyViolationEvent::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "SecurityPolicyViolationEvent"));
  }
  return native_value;
}

}  // namespace blink
