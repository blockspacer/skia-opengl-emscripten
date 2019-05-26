// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_worker_internals.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_origin_trials_test.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_response.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_worker_global_scope.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/fetch/testing/worker_internals_fetch.h"
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
const WrapperTypeInfo v8_worker_internals_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8WorkerInternals::DomTemplate,
    nullptr,
    "WorkerInternals",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in WorkerInternals.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& WorkerInternals::wrapper_type_info_ = v8_worker_internals_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, WorkerInternals>::value,
    "WorkerInternals inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&WorkerInternals::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "WorkerInternals is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace worker_internals_v8_internal {

static void OriginTrialsTestMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WorkerInternals* impl = V8WorkerInternals::ToImpl(info.Holder());

  V8SetReturnValue(info, impl->originTrialsTest());
}

static void CountFeatureMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WorkerInternals", "countFeature");

  WorkerInternals* impl = V8WorkerInternals::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  uint32_t feature;
  feature = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  impl->countFeature(script_state, feature, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void CountDeprecationMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WorkerInternals", "countDeprecation");

  WorkerInternals* impl = V8WorkerInternals::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  uint32_t feature;
  feature = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  impl->countDeprecation(script_state, feature, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void CollectGarbageMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WorkerInternals* impl = V8WorkerInternals::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  impl->collectGarbage(script_state);
}

static void GetInternalResponseURLListMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WorkerInternals* impl = V8WorkerInternals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getInternalResponseURLList", "WorkerInternals", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  Response* response;
  response = V8Response::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!response) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getInternalResponseURLList", "WorkerInternals", "parameter 1 is not of type 'Response'."));
    return;
  }

  V8SetReturnValue(info, ToV8(WorkerInternalsFetch::getInternalResponseURLList(*impl, response), info.Holder(), info.GetIsolate()));
}

static void GetResourcePriorityMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WorkerInternals* impl = V8WorkerInternals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getResourcePriority", "WorkerInternals", ExceptionMessages::NotEnoughArguments(2, info.Length())));
    return;
  }

  V8StringResource<> url;
  WorkerGlobalScope* worker_global;
  url = info[0];
  if (!url.Prepare())
    return;

  worker_global = V8WorkerGlobalScope::ToImplWithTypeCheck(info.GetIsolate(), info[1]);
  if (!worker_global) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getResourcePriority", "WorkerInternals", "parameter 2 is not of type 'WorkerGlobalScope'."));
    return;
  }

  V8SetReturnValueUnsigned(info, WorkerInternalsFetch::getResourcePriority(*impl, url, worker_global));
}

}  // namespace worker_internals_v8_internal

void V8WorkerInternals::OriginTrialsTestMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WorkerInternals_originTrialsTest");

  worker_internals_v8_internal::OriginTrialsTestMethod(info);
}

void V8WorkerInternals::CountFeatureMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WorkerInternals_countFeature");

  worker_internals_v8_internal::CountFeatureMethod(info);
}

void V8WorkerInternals::CountDeprecationMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WorkerInternals_countDeprecation");

  worker_internals_v8_internal::CountDeprecationMethod(info);
}

void V8WorkerInternals::CollectGarbageMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WorkerInternals_collectGarbage");

  worker_internals_v8_internal::CollectGarbageMethod(info);
}

void V8WorkerInternals::GetInternalResponseURLListMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WorkerInternals_getInternalResponseURLList");

  worker_internals_v8_internal::GetInternalResponseURLListMethod(info);
}

void V8WorkerInternals::GetResourcePriorityMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WorkerInternals_getResourcePriority");

  worker_internals_v8_internal::GetResourcePriorityMethod(info);
}

static constexpr V8DOMConfiguration::MethodConfiguration kV8WorkerInternalsMethods[] = {
    {"originTrialsTest", V8WorkerInternals::OriginTrialsTestMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"countFeature", V8WorkerInternals::CountFeatureMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"countDeprecation", V8WorkerInternals::CountDeprecationMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"collectGarbage", V8WorkerInternals::CollectGarbageMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getInternalResponseURLList", V8WorkerInternals::GetInternalResponseURLListMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getResourcePriority", V8WorkerInternals::GetResourcePriorityMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void InstallV8WorkerInternalsTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8WorkerInternals::GetWrapperTypeInfo()->interface_name, v8::Local<v8::FunctionTemplate>(), V8WorkerInternals::kInternalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallMethods(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8WorkerInternalsMethods, base::size(kV8WorkerInternalsMethods));

  // Custom signature

  V8WorkerInternals::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8WorkerInternals::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8WorkerInternals::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8WorkerInternals::GetWrapperTypeInfo()),
      InstallV8WorkerInternalsTemplate);
}

bool V8WorkerInternals::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8WorkerInternals::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8WorkerInternals::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8WorkerInternals::GetWrapperTypeInfo(), v8_value);
}

WorkerInternals* V8WorkerInternals::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

WorkerInternals* NativeValueTraits<WorkerInternals>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  WorkerInternals* native_value = V8WorkerInternals::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "WorkerInternals"));
  }
  return native_value;
}

}  // namespace blink
