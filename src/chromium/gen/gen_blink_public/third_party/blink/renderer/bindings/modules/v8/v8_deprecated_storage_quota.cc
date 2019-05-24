// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_deprecated_storage_quota.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_storage_error_callback.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_storage_quota_callback.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_storage_usage_callback.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/frame/use_counter.h"
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
const WrapperTypeInfo v8_deprecated_storage_quota_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8DeprecatedStorageQuota::DomTemplate,
    nullptr,
    "DeprecatedStorageQuota",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in DeprecatedStorageQuota.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& DeprecatedStorageQuota::wrapper_type_info_ = v8_deprecated_storage_quota_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, DeprecatedStorageQuota>::value,
    "DeprecatedStorageQuota inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&DeprecatedStorageQuota::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "DeprecatedStorageQuota is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace deprecated_storage_quota_v8_internal {

static void QueryUsageAndQuotaMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  DeprecatedStorageQuota* impl = V8DeprecatedStorageQuota::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("queryUsageAndQuota", "DeprecatedStorageQuota", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  V8StorageUsageCallback* usage_callback;
  V8StorageErrorCallback* error_callback;
  int num_args_passed = info.Length();
  while (num_args_passed > 0) {
    if (!info[num_args_passed - 1]->IsUndefined())
      break;
    --num_args_passed;
  }
  if (info[0]->IsFunction()) {
    usage_callback = V8StorageUsageCallback::Create(info[0].As<v8::Function>());
  } else {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("queryUsageAndQuota", "DeprecatedStorageQuota", "The callback provided as parameter 1 is not a function."));
    return;
  }

  if (UNLIKELY(num_args_passed <= 1)) {
    impl->queryUsageAndQuota(script_state, usage_callback);
    return;
  }
  if (info[1]->IsFunction()) {
    error_callback = V8StorageErrorCallback::Create(info[1].As<v8::Function>());
  } else if (info[1]->IsNullOrUndefined()) {
    error_callback = nullptr;
  } else {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("queryUsageAndQuota", "DeprecatedStorageQuota", "The callback provided as parameter 2 is not a function."));
    return;
  }

  impl->queryUsageAndQuota(script_state, usage_callback, error_callback);
}

static void RequestQuotaMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "DeprecatedStorageQuota", "requestQuota");

  DeprecatedStorageQuota* impl = V8DeprecatedStorageQuota::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  uint64_t new_quota_in_bytes;
  V8StorageQuotaCallback* quota_callback;
  V8StorageErrorCallback* error_callback;
  int num_args_passed = info.Length();
  while (num_args_passed > 0) {
    if (!info[num_args_passed - 1]->IsUndefined())
      break;
    --num_args_passed;
  }
  new_quota_in_bytes = NativeValueTraits<IDLUnsignedLongLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  if (UNLIKELY(num_args_passed <= 1)) {
    impl->requestQuota(script_state, new_quota_in_bytes);
    return;
  }
  if (info[1]->IsFunction()) {
    quota_callback = V8StorageQuotaCallback::Create(info[1].As<v8::Function>());
  } else if (info[1]->IsNullOrUndefined()) {
    quota_callback = nullptr;
  } else {
    exception_state.ThrowTypeError("The callback provided as parameter 2 is not a function.");
    return;
  }

  if (UNLIKELY(num_args_passed <= 2)) {
    impl->requestQuota(script_state, new_quota_in_bytes, quota_callback);
    return;
  }
  if (info[2]->IsFunction()) {
    error_callback = V8StorageErrorCallback::Create(info[2].As<v8::Function>());
  } else if (info[2]->IsNullOrUndefined()) {
    error_callback = nullptr;
  } else {
    exception_state.ThrowTypeError("The callback provided as parameter 3 is not a function.");
    return;
  }

  impl->requestQuota(script_state, new_quota_in_bytes, quota_callback, error_callback);
}

}  // namespace deprecated_storage_quota_v8_internal

void V8DeprecatedStorageQuota::QueryUsageAndQuotaMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DeprecatedStorageQuota_queryUsageAndQuota");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kV8DeprecatedStorageQuota_QueryUsageAndQuota_Method);
  deprecated_storage_quota_v8_internal::QueryUsageAndQuotaMethod(info);
}

void V8DeprecatedStorageQuota::RequestQuotaMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DeprecatedStorageQuota_requestQuota");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kV8DeprecatedStorageQuota_RequestQuota_Method);
  deprecated_storage_quota_v8_internal::RequestQuotaMethod(info);
}

static constexpr V8DOMConfiguration::MethodConfiguration kV8DeprecatedStorageQuotaMethods[] = {
    {"queryUsageAndQuota", V8DeprecatedStorageQuota::QueryUsageAndQuotaMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"requestQuota", V8DeprecatedStorageQuota::RequestQuotaMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void InstallV8DeprecatedStorageQuotaTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8DeprecatedStorageQuota::GetWrapperTypeInfo()->interface_name, v8::Local<v8::FunctionTemplate>(), V8DeprecatedStorageQuota::kInternalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallMethods(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8DeprecatedStorageQuotaMethods, base::size(kV8DeprecatedStorageQuotaMethods));

  // Custom signature

  V8DeprecatedStorageQuota::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8DeprecatedStorageQuota::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8DeprecatedStorageQuota::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8DeprecatedStorageQuota::GetWrapperTypeInfo()),
      InstallV8DeprecatedStorageQuotaTemplate);
}

bool V8DeprecatedStorageQuota::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8DeprecatedStorageQuota::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8DeprecatedStorageQuota::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8DeprecatedStorageQuota::GetWrapperTypeInfo(), v8_value);
}

DeprecatedStorageQuota* V8DeprecatedStorageQuota::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

DeprecatedStorageQuota* NativeValueTraits<DeprecatedStorageQuota>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  DeprecatedStorageQuota* native_value = V8DeprecatedStorageQuota::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "DeprecatedStorageQuota"));
  }
  return native_value;
}

}  // namespace blink
