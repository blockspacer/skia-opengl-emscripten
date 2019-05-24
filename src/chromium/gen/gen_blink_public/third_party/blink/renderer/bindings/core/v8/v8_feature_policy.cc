// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_feature_policy.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/frame/use_counter.h"
#include "third_party/blink/renderer/platform/bindings/exception_messages.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
#include "third_party/blink/renderer/platform/bindings/script_state.h"
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
const WrapperTypeInfo v8_feature_policy_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8FeaturePolicy::DomTemplate,
    nullptr,
    "FeaturePolicy",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in DOMFeaturePolicy.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& DOMFeaturePolicy::wrapper_type_info_ = v8_feature_policy_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, DOMFeaturePolicy>::value,
    "DOMFeaturePolicy inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&DOMFeaturePolicy::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "DOMFeaturePolicy is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace dom_feature_policy_v8_internal {

static void AllowsFeatureMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  DOMFeaturePolicy* impl = V8FeaturePolicy::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("allowsFeature", "FeaturePolicy", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  V8StringResource<> feature;
  V8StringResource<> url;
  int num_args_passed = info.Length();
  while (num_args_passed > 0) {
    if (!info[num_args_passed - 1]->IsUndefined())
      break;
    --num_args_passed;
  }
  feature = info[0];
  if (!feature.Prepare())
    return;

  if (UNLIKELY(num_args_passed <= 1)) {
    bool result = impl->allowsFeature(script_state, feature);
    V8SetReturnValueBool(info, result);
    return;
  }
  url = info[1];
  if (!url.Prepare())
    return;

  bool result = impl->allowsFeature(script_state, feature, url);
  V8SetReturnValueBool(info, result);
}

static void FeaturesMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  DOMFeaturePolicy* impl = V8FeaturePolicy::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  Vector<String> result = impl->features(script_state);
  V8SetReturnValue(info, ToV8(result, info.Holder(), info.GetIsolate()));
}

static void AllowedFeaturesMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  DOMFeaturePolicy* impl = V8FeaturePolicy::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  Vector<String> result = impl->allowedFeatures(script_state);
  V8SetReturnValue(info, ToV8(result, info.Holder(), info.GetIsolate()));
}

static void GetAllowlistForFeatureMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  DOMFeaturePolicy* impl = V8FeaturePolicy::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getAllowlistForFeature", "FeaturePolicy", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  V8StringResource<> feature;
  feature = info[0];
  if (!feature.Prepare())
    return;

  Vector<String> result = impl->getAllowlistForFeature(script_state, feature);
  V8SetReturnValue(info, ToV8(result, info.Holder(), info.GetIsolate()));
}

}  // namespace dom_feature_policy_v8_internal

void V8FeaturePolicy::AllowsFeatureMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMFeaturePolicy_allowsFeature");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kFeaturePolicyJSAPI);
  dom_feature_policy_v8_internal::AllowsFeatureMethod(info);
}

void V8FeaturePolicy::FeaturesMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMFeaturePolicy_features");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kFeaturePolicyJSAPI);
  dom_feature_policy_v8_internal::FeaturesMethod(info);
}

void V8FeaturePolicy::AllowedFeaturesMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMFeaturePolicy_allowedFeatures");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kFeaturePolicyJSAPI);
  dom_feature_policy_v8_internal::AllowedFeaturesMethod(info);
}

void V8FeaturePolicy::GetAllowlistForFeatureMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMFeaturePolicy_getAllowlistForFeature");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kFeaturePolicyJSAPI);
  dom_feature_policy_v8_internal::GetAllowlistForFeatureMethod(info);
}

static constexpr V8DOMConfiguration::MethodConfiguration kV8FeaturePolicyMethods[] = {
    {"allowsFeature", V8FeaturePolicy::AllowsFeatureMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"features", V8FeaturePolicy::FeaturesMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"allowedFeatures", V8FeaturePolicy::AllowedFeaturesMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getAllowlistForFeature", V8FeaturePolicy::GetAllowlistForFeatureMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void InstallV8FeaturePolicyTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8FeaturePolicy::GetWrapperTypeInfo()->interface_name, v8::Local<v8::FunctionTemplate>(), V8FeaturePolicy::kInternalFieldCount);

  if (!RuntimeEnabledFeatures::FeaturePolicyJavaScriptInterfaceEnabled()) {
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
      signature, kV8FeaturePolicyMethods, base::size(kV8FeaturePolicyMethods));

  // Custom signature

  V8FeaturePolicy::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8FeaturePolicy::InstallRuntimeEnabledFeaturesOnTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  if (!RuntimeEnabledFeatures::FeaturePolicyJavaScriptInterfaceEnabled()) {
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

v8::Local<v8::FunctionTemplate> V8FeaturePolicy::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8FeaturePolicy::GetWrapperTypeInfo()),
      InstallV8FeaturePolicyTemplate);
}

bool V8FeaturePolicy::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8FeaturePolicy::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8FeaturePolicy::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8FeaturePolicy::GetWrapperTypeInfo(), v8_value);
}

DOMFeaturePolicy* V8FeaturePolicy::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

DOMFeaturePolicy* NativeValueTraits<DOMFeaturePolicy>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  DOMFeaturePolicy* native_value = V8FeaturePolicy::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "FeaturePolicy"));
  }
  return native_value;
}

}  // namespace blink
