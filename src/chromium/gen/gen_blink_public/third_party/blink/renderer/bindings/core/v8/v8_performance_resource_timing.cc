// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_performance_resource_timing.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/script_value.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_performance_server_timing.h"
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
const WrapperTypeInfo v8_performance_resource_timing_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8PerformanceResourceTiming::DomTemplate,
    nullptr,
    "PerformanceResourceTiming",
    V8PerformanceEntry::GetWrapperTypeInfo(),
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in PerformanceResourceTiming.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& PerformanceResourceTiming::wrapper_type_info_ = v8_performance_resource_timing_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, PerformanceResourceTiming>::value,
    "PerformanceResourceTiming inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&PerformanceResourceTiming::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "PerformanceResourceTiming is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace performance_resource_timing_v8_internal {

static void InitiatorTypeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  PerformanceResourceTiming* impl = V8PerformanceResourceTiming::ToImpl(holder);

  V8SetReturnValueString(info, impl->initiatorType(), info.GetIsolate());
}

static void NextHopProtocolAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  PerformanceResourceTiming* impl = V8PerformanceResourceTiming::ToImpl(holder);

  V8SetReturnValueString(info, impl->nextHopProtocol(), info.GetIsolate());
}

static void WorkerStartAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  PerformanceResourceTiming* impl = V8PerformanceResourceTiming::ToImpl(holder);

  V8SetReturnValue(info, impl->workerStart());
}

static void RedirectStartAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  PerformanceResourceTiming* impl = V8PerformanceResourceTiming::ToImpl(holder);

  V8SetReturnValue(info, impl->redirectStart());
}

static void RedirectEndAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  PerformanceResourceTiming* impl = V8PerformanceResourceTiming::ToImpl(holder);

  V8SetReturnValue(info, impl->redirectEnd());
}

static void FetchStartAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  PerformanceResourceTiming* impl = V8PerformanceResourceTiming::ToImpl(holder);

  V8SetReturnValue(info, impl->fetchStart());
}

static void DomainLookupStartAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  PerformanceResourceTiming* impl = V8PerformanceResourceTiming::ToImpl(holder);

  V8SetReturnValue(info, impl->domainLookupStart());
}

static void DomainLookupEndAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  PerformanceResourceTiming* impl = V8PerformanceResourceTiming::ToImpl(holder);

  V8SetReturnValue(info, impl->domainLookupEnd());
}

static void ConnectStartAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  PerformanceResourceTiming* impl = V8PerformanceResourceTiming::ToImpl(holder);

  V8SetReturnValue(info, impl->connectStart());
}

static void ConnectEndAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  PerformanceResourceTiming* impl = V8PerformanceResourceTiming::ToImpl(holder);

  V8SetReturnValue(info, impl->connectEnd());
}

static void SecureConnectionStartAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  PerformanceResourceTiming* impl = V8PerformanceResourceTiming::ToImpl(holder);

  V8SetReturnValue(info, impl->secureConnectionStart());
}

static void RequestStartAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  PerformanceResourceTiming* impl = V8PerformanceResourceTiming::ToImpl(holder);

  V8SetReturnValue(info, impl->requestStart());
}

static void ResponseStartAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  PerformanceResourceTiming* impl = V8PerformanceResourceTiming::ToImpl(holder);

  V8SetReturnValue(info, impl->responseStart());
}

static void ResponseEndAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  PerformanceResourceTiming* impl = V8PerformanceResourceTiming::ToImpl(holder);

  V8SetReturnValue(info, impl->responseEnd());
}

static void TransferSizeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  PerformanceResourceTiming* impl = V8PerformanceResourceTiming::ToImpl(holder);

  V8SetReturnValue(info, static_cast<double>(impl->transferSize()));
}

static void EncodedBodySizeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  PerformanceResourceTiming* impl = V8PerformanceResourceTiming::ToImpl(holder);

  V8SetReturnValue(info, static_cast<double>(impl->encodedBodySize()));
}

static void DecodedBodySizeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  PerformanceResourceTiming* impl = V8PerformanceResourceTiming::ToImpl(holder);

  V8SetReturnValue(info, static_cast<double>(impl->decodedBodySize()));
}

static void ServerTimingAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  PerformanceResourceTiming* impl = V8PerformanceResourceTiming::ToImpl(holder);

  V8SetReturnValue(info, FreezeV8Object(ToV8(impl->serverTiming(), info.Holder(), info.GetIsolate()), info.GetIsolate()));
}

static void ToJSONMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  PerformanceResourceTiming* impl = V8PerformanceResourceTiming::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  ScriptValue result = impl->toJSONForBinding(script_state);
  V8SetReturnValue(info, result.V8Value());
}

}  // namespace performance_resource_timing_v8_internal

void V8PerformanceResourceTiming::InitiatorTypeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PerformanceResourceTiming_initiatorType_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kPerformanceResourceTimingInitiatorType);

  performance_resource_timing_v8_internal::InitiatorTypeAttributeGetter(info);
}

void V8PerformanceResourceTiming::NextHopProtocolAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PerformanceResourceTiming_nextHopProtocol_Getter");

  performance_resource_timing_v8_internal::NextHopProtocolAttributeGetter(info);
}

void V8PerformanceResourceTiming::WorkerStartAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PerformanceResourceTiming_workerStart_Getter");

  performance_resource_timing_v8_internal::WorkerStartAttributeGetter(info);
}

void V8PerformanceResourceTiming::RedirectStartAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PerformanceResourceTiming_redirectStart_Getter");

  performance_resource_timing_v8_internal::RedirectStartAttributeGetter(info);
}

void V8PerformanceResourceTiming::RedirectEndAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PerformanceResourceTiming_redirectEnd_Getter");

  performance_resource_timing_v8_internal::RedirectEndAttributeGetter(info);
}

void V8PerformanceResourceTiming::FetchStartAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PerformanceResourceTiming_fetchStart_Getter");

  performance_resource_timing_v8_internal::FetchStartAttributeGetter(info);
}

void V8PerformanceResourceTiming::DomainLookupStartAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PerformanceResourceTiming_domainLookupStart_Getter");

  performance_resource_timing_v8_internal::DomainLookupStartAttributeGetter(info);
}

void V8PerformanceResourceTiming::DomainLookupEndAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PerformanceResourceTiming_domainLookupEnd_Getter");

  performance_resource_timing_v8_internal::DomainLookupEndAttributeGetter(info);
}

void V8PerformanceResourceTiming::ConnectStartAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PerformanceResourceTiming_connectStart_Getter");

  performance_resource_timing_v8_internal::ConnectStartAttributeGetter(info);
}

void V8PerformanceResourceTiming::ConnectEndAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PerformanceResourceTiming_connectEnd_Getter");

  performance_resource_timing_v8_internal::ConnectEndAttributeGetter(info);
}

void V8PerformanceResourceTiming::SecureConnectionStartAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PerformanceResourceTiming_secureConnectionStart_Getter");

  performance_resource_timing_v8_internal::SecureConnectionStartAttributeGetter(info);
}

void V8PerformanceResourceTiming::RequestStartAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PerformanceResourceTiming_requestStart_Getter");

  performance_resource_timing_v8_internal::RequestStartAttributeGetter(info);
}

void V8PerformanceResourceTiming::ResponseStartAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PerformanceResourceTiming_responseStart_Getter");

  performance_resource_timing_v8_internal::ResponseStartAttributeGetter(info);
}

void V8PerformanceResourceTiming::ResponseEndAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PerformanceResourceTiming_responseEnd_Getter");

  performance_resource_timing_v8_internal::ResponseEndAttributeGetter(info);
}

void V8PerformanceResourceTiming::TransferSizeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PerformanceResourceTiming_transferSize_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kPerformanceResourceTimingSizes);

  performance_resource_timing_v8_internal::TransferSizeAttributeGetter(info);
}

void V8PerformanceResourceTiming::EncodedBodySizeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PerformanceResourceTiming_encodedBodySize_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kPerformanceResourceTimingSizes);

  performance_resource_timing_v8_internal::EncodedBodySizeAttributeGetter(info);
}

void V8PerformanceResourceTiming::DecodedBodySizeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PerformanceResourceTiming_decodedBodySize_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kPerformanceResourceTimingSizes);

  performance_resource_timing_v8_internal::DecodedBodySizeAttributeGetter(info);
}

void V8PerformanceResourceTiming::ServerTimingAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PerformanceResourceTiming_serverTiming_Getter");

  performance_resource_timing_v8_internal::ServerTimingAttributeGetter(info);
}

void V8PerformanceResourceTiming::ToJSONMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PerformanceResourceTiming_toJSON");

  performance_resource_timing_v8_internal::ToJSONMethod(info);
}

static constexpr V8DOMConfiguration::AccessorConfiguration kV8PerformanceResourceTimingAccessors[] = {
    { "initiatorType", V8PerformanceResourceTiming::InitiatorTypeAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "nextHopProtocol", V8PerformanceResourceTiming::NextHopProtocolAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "workerStart", V8PerformanceResourceTiming::WorkerStartAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "redirectStart", V8PerformanceResourceTiming::RedirectStartAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "redirectEnd", V8PerformanceResourceTiming::RedirectEndAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "fetchStart", V8PerformanceResourceTiming::FetchStartAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "domainLookupStart", V8PerformanceResourceTiming::DomainLookupStartAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "domainLookupEnd", V8PerformanceResourceTiming::DomainLookupEndAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "connectStart", V8PerformanceResourceTiming::ConnectStartAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "connectEnd", V8PerformanceResourceTiming::ConnectEndAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "secureConnectionStart", V8PerformanceResourceTiming::SecureConnectionStartAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "requestStart", V8PerformanceResourceTiming::RequestStartAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "responseStart", V8PerformanceResourceTiming::ResponseStartAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "responseEnd", V8PerformanceResourceTiming::ResponseEndAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "transferSize", V8PerformanceResourceTiming::TransferSizeAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "encodedBodySize", V8PerformanceResourceTiming::EncodedBodySizeAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "decodedBodySize", V8PerformanceResourceTiming::DecodedBodySizeAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "serverTiming", V8PerformanceResourceTiming::ServerTimingAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
};

static constexpr V8DOMConfiguration::MethodConfiguration kV8PerformanceResourceTimingMethods[] = {
    {"toJSON", V8PerformanceResourceTiming::ToJSONMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void InstallV8PerformanceResourceTimingTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8PerformanceResourceTiming::GetWrapperTypeInfo()->interface_name, V8PerformanceEntry::DomTemplate(isolate, world), V8PerformanceResourceTiming::kInternalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8PerformanceResourceTimingAccessors, base::size(kV8PerformanceResourceTimingAccessors));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8PerformanceResourceTimingMethods, base::size(kV8PerformanceResourceTimingMethods));

  // Custom signature

  V8PerformanceResourceTiming::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8PerformanceResourceTiming::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8PerformanceResourceTiming::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8PerformanceResourceTiming::GetWrapperTypeInfo()),
      InstallV8PerformanceResourceTimingTemplate);
}

bool V8PerformanceResourceTiming::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8PerformanceResourceTiming::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8PerformanceResourceTiming::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8PerformanceResourceTiming::GetWrapperTypeInfo(), v8_value);
}

PerformanceResourceTiming* V8PerformanceResourceTiming::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

PerformanceResourceTiming* NativeValueTraits<PerformanceResourceTiming>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  PerformanceResourceTiming* native_value = V8PerformanceResourceTiming::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "PerformanceResourceTiming"));
  }
  return native_value;
}

}  // namespace blink
