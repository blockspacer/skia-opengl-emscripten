// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_trusted_type_policy_factory.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/script_value.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_trusted_type_policy.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_trusted_type_policy_options.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/platform/bindings/exception_messages.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
#include "third_party/blink/renderer/platform/bindings/script_state.h"
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
const WrapperTypeInfo v8_trusted_type_policy_factory_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8TrustedTypePolicyFactory::DomTemplate,
    nullptr,
    "TrustedTypePolicyFactory",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in TrustedTypePolicyFactory.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& TrustedTypePolicyFactory::wrapper_type_info_ = v8_trusted_type_policy_factory_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, TrustedTypePolicyFactory>::value,
    "TrustedTypePolicyFactory inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&TrustedTypePolicyFactory::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "TrustedTypePolicyFactory is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace trusted_type_policy_factory_v8_internal {

static void CreatePolicyMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "TrustedTypePolicyFactory", "createPolicy");

  TrustedTypePolicyFactory* impl = V8TrustedTypePolicyFactory::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  V8StringResource<> policy_name;
  TrustedTypePolicyOptions* policy_options;
  bool exposed;
  policy_name = info[0];
  if (!policy_name.Prepare())
    return;

  if (!info[1]->IsNullOrUndefined() && !info[1]->IsObject()) {
    exception_state.ThrowTypeError("parameter 2 ('policyOptions') is not an object.");
    return;
  }
  policy_options = NativeValueTraits<TrustedTypePolicyOptions>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  if (!info[2]->IsUndefined()) {
    exposed = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[2], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    exposed = false;
  }

  TrustedTypePolicy* result = impl->createPolicy(policy_name, policy_options, exposed, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void GetExposedPolicyMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  TrustedTypePolicyFactory* impl = V8TrustedTypePolicyFactory::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getExposedPolicy", "TrustedTypePolicyFactory", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  V8StringResource<> policy_name;
  policy_name = info[0];
  if (!policy_name.Prepare())
    return;

  V8SetReturnValue(info, impl->getExposedPolicy(policy_name));
}

static void GetPolicyNamesMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  TrustedTypePolicyFactory* impl = V8TrustedTypePolicyFactory::ToImpl(info.Holder());

  V8SetReturnValue(info, ToV8(impl->getPolicyNames(), info.Holder(), info.GetIsolate()));
}

static void IsHTMLMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  TrustedTypePolicyFactory* impl = V8TrustedTypePolicyFactory::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isHTML", "TrustedTypePolicyFactory", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  ScriptValue checked_object;
  checked_object = ScriptValue(ScriptState::Current(info.GetIsolate()), info[0]);

  bool result = impl->isHTML(script_state, checked_object);
  V8SetReturnValueBool(info, result);
}

static void IsScriptMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  TrustedTypePolicyFactory* impl = V8TrustedTypePolicyFactory::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isScript", "TrustedTypePolicyFactory", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  ScriptValue checked_object;
  checked_object = ScriptValue(ScriptState::Current(info.GetIsolate()), info[0]);

  bool result = impl->isScript(script_state, checked_object);
  V8SetReturnValueBool(info, result);
}

static void IsScriptURLMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  TrustedTypePolicyFactory* impl = V8TrustedTypePolicyFactory::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isScriptURL", "TrustedTypePolicyFactory", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  ScriptValue checked_object;
  checked_object = ScriptValue(ScriptState::Current(info.GetIsolate()), info[0]);

  bool result = impl->isScriptURL(script_state, checked_object);
  V8SetReturnValueBool(info, result);
}

static void IsURLMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  TrustedTypePolicyFactory* impl = V8TrustedTypePolicyFactory::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isURL", "TrustedTypePolicyFactory", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  ScriptValue checked_object;
  checked_object = ScriptValue(ScriptState::Current(info.GetIsolate()), info[0]);

  bool result = impl->isURL(script_state, checked_object);
  V8SetReturnValueBool(info, result);
}

}  // namespace trusted_type_policy_factory_v8_internal

void V8TrustedTypePolicyFactory::CreatePolicyMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_TrustedTypePolicyFactory_createPolicy");

  trusted_type_policy_factory_v8_internal::CreatePolicyMethod(info);
}

void V8TrustedTypePolicyFactory::GetExposedPolicyMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_TrustedTypePolicyFactory_getExposedPolicy");

  trusted_type_policy_factory_v8_internal::GetExposedPolicyMethod(info);
}

void V8TrustedTypePolicyFactory::GetPolicyNamesMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_TrustedTypePolicyFactory_getPolicyNames");

  trusted_type_policy_factory_v8_internal::GetPolicyNamesMethod(info);
}

void V8TrustedTypePolicyFactory::IsHTMLMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_TrustedTypePolicyFactory_isHTML");

  trusted_type_policy_factory_v8_internal::IsHTMLMethod(info);
}

void V8TrustedTypePolicyFactory::IsScriptMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_TrustedTypePolicyFactory_isScript");

  trusted_type_policy_factory_v8_internal::IsScriptMethod(info);
}

void V8TrustedTypePolicyFactory::IsScriptURLMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_TrustedTypePolicyFactory_isScriptURL");

  trusted_type_policy_factory_v8_internal::IsScriptURLMethod(info);
}

void V8TrustedTypePolicyFactory::IsURLMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_TrustedTypePolicyFactory_isURL");

  trusted_type_policy_factory_v8_internal::IsURLMethod(info);
}

static constexpr V8DOMConfiguration::MethodConfiguration kV8TrustedTypePolicyFactoryMethods[] = {
    {"createPolicy", V8TrustedTypePolicyFactory::CreatePolicyMethodCallback, 2, static_cast<v8::PropertyAttribute>(v8::ReadOnly | v8::DontDelete), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getExposedPolicy", V8TrustedTypePolicyFactory::GetExposedPolicyMethodCallback, 1, static_cast<v8::PropertyAttribute>(v8::ReadOnly | v8::DontDelete), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getPolicyNames", V8TrustedTypePolicyFactory::GetPolicyNamesMethodCallback, 0, static_cast<v8::PropertyAttribute>(v8::ReadOnly | v8::DontDelete), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAllWorlds},
    {"isHTML", V8TrustedTypePolicyFactory::IsHTMLMethodCallback, 1, static_cast<v8::PropertyAttribute>(v8::ReadOnly | v8::DontDelete), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"isScript", V8TrustedTypePolicyFactory::IsScriptMethodCallback, 1, static_cast<v8::PropertyAttribute>(v8::ReadOnly | v8::DontDelete), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"isScriptURL", V8TrustedTypePolicyFactory::IsScriptURLMethodCallback, 1, static_cast<v8::PropertyAttribute>(v8::ReadOnly | v8::DontDelete), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"isURL", V8TrustedTypePolicyFactory::IsURLMethodCallback, 1, static_cast<v8::PropertyAttribute>(v8::ReadOnly | v8::DontDelete), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void InstallV8TrustedTypePolicyFactoryTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8TrustedTypePolicyFactory::GetWrapperTypeInfo()->interface_name, v8::Local<v8::FunctionTemplate>(), V8TrustedTypePolicyFactory::kInternalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallMethods(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8TrustedTypePolicyFactoryMethods, base::size(kV8TrustedTypePolicyFactoryMethods));

  // Custom signature

  V8TrustedTypePolicyFactory::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8TrustedTypePolicyFactory::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8TrustedTypePolicyFactory::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8TrustedTypePolicyFactory::GetWrapperTypeInfo()),
      InstallV8TrustedTypePolicyFactoryTemplate);
}

bool V8TrustedTypePolicyFactory::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8TrustedTypePolicyFactory::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8TrustedTypePolicyFactory::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8TrustedTypePolicyFactory::GetWrapperTypeInfo(), v8_value);
}

TrustedTypePolicyFactory* V8TrustedTypePolicyFactory::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

TrustedTypePolicyFactory* NativeValueTraits<TrustedTypePolicyFactory>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  TrustedTypePolicyFactory* native_value = V8TrustedTypePolicyFactory::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "TrustedTypePolicyFactory"));
  }
  return native_value;
}

}  // namespace blink
