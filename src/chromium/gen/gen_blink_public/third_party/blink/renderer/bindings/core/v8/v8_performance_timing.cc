// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_performance_timing.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/script_value.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
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
const WrapperTypeInfo v8_performance_timing_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8PerformanceTiming::DomTemplate,
    nullptr,
    "PerformanceTiming",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in PerformanceTiming.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& PerformanceTiming::wrapper_type_info_ = v8_performance_timing_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, PerformanceTiming>::value,
    "PerformanceTiming inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&PerformanceTiming::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "PerformanceTiming is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace performance_timing_v8_internal {

static void NavigationStartAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  PerformanceTiming* impl = V8PerformanceTiming::ToImpl(holder);

  V8SetReturnValue(info, static_cast<double>(impl->navigationStart()));
}

static void UnloadEventStartAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  PerformanceTiming* impl = V8PerformanceTiming::ToImpl(holder);

  V8SetReturnValue(info, static_cast<double>(impl->unloadEventStart()));
}

static void UnloadEventEndAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  PerformanceTiming* impl = V8PerformanceTiming::ToImpl(holder);

  V8SetReturnValue(info, static_cast<double>(impl->unloadEventEnd()));
}

static void RedirectStartAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  PerformanceTiming* impl = V8PerformanceTiming::ToImpl(holder);

  V8SetReturnValue(info, static_cast<double>(impl->redirectStart()));
}

static void RedirectEndAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  PerformanceTiming* impl = V8PerformanceTiming::ToImpl(holder);

  V8SetReturnValue(info, static_cast<double>(impl->redirectEnd()));
}

static void FetchStartAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  PerformanceTiming* impl = V8PerformanceTiming::ToImpl(holder);

  V8SetReturnValue(info, static_cast<double>(impl->fetchStart()));
}

static void DomainLookupStartAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  PerformanceTiming* impl = V8PerformanceTiming::ToImpl(holder);

  V8SetReturnValue(info, static_cast<double>(impl->domainLookupStart()));
}

static void DomainLookupEndAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  PerformanceTiming* impl = V8PerformanceTiming::ToImpl(holder);

  V8SetReturnValue(info, static_cast<double>(impl->domainLookupEnd()));
}

static void ConnectStartAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  PerformanceTiming* impl = V8PerformanceTiming::ToImpl(holder);

  V8SetReturnValue(info, static_cast<double>(impl->connectStart()));
}

static void ConnectEndAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  PerformanceTiming* impl = V8PerformanceTiming::ToImpl(holder);

  V8SetReturnValue(info, static_cast<double>(impl->connectEnd()));
}

static void SecureConnectionStartAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  PerformanceTiming* impl = V8PerformanceTiming::ToImpl(holder);

  V8SetReturnValue(info, static_cast<double>(impl->secureConnectionStart()));
}

static void RequestStartAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  PerformanceTiming* impl = V8PerformanceTiming::ToImpl(holder);

  V8SetReturnValue(info, static_cast<double>(impl->requestStart()));
}

static void ResponseStartAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  PerformanceTiming* impl = V8PerformanceTiming::ToImpl(holder);

  V8SetReturnValue(info, static_cast<double>(impl->responseStart()));
}

static void ResponseEndAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  PerformanceTiming* impl = V8PerformanceTiming::ToImpl(holder);

  V8SetReturnValue(info, static_cast<double>(impl->responseEnd()));
}

static void DOMLoadingAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  PerformanceTiming* impl = V8PerformanceTiming::ToImpl(holder);

  V8SetReturnValue(info, static_cast<double>(impl->domLoading()));
}

static void DOMInteractiveAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  PerformanceTiming* impl = V8PerformanceTiming::ToImpl(holder);

  V8SetReturnValue(info, static_cast<double>(impl->domInteractive()));
}

static void DOMContentLoadedEventStartAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  PerformanceTiming* impl = V8PerformanceTiming::ToImpl(holder);

  V8SetReturnValue(info, static_cast<double>(impl->domContentLoadedEventStart()));
}

static void DOMContentLoadedEventEndAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  PerformanceTiming* impl = V8PerformanceTiming::ToImpl(holder);

  V8SetReturnValue(info, static_cast<double>(impl->domContentLoadedEventEnd()));
}

static void DOMCompleteAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  PerformanceTiming* impl = V8PerformanceTiming::ToImpl(holder);

  V8SetReturnValue(info, static_cast<double>(impl->domComplete()));
}

static void LoadEventStartAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  PerformanceTiming* impl = V8PerformanceTiming::ToImpl(holder);

  V8SetReturnValue(info, static_cast<double>(impl->loadEventStart()));
}

static void LoadEventEndAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  PerformanceTiming* impl = V8PerformanceTiming::ToImpl(holder);

  V8SetReturnValue(info, static_cast<double>(impl->loadEventEnd()));
}

static void ToJSONMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  PerformanceTiming* impl = V8PerformanceTiming::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  ScriptValue result = impl->toJSONForBinding(script_state);
  V8SetReturnValue(info, result.V8Value());
}

}  // namespace performance_timing_v8_internal

void V8PerformanceTiming::NavigationStartAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PerformanceTiming_navigationStart_Getter");

  performance_timing_v8_internal::NavigationStartAttributeGetter(info);
}

void V8PerformanceTiming::UnloadEventStartAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PerformanceTiming_unloadEventStart_Getter");

  performance_timing_v8_internal::UnloadEventStartAttributeGetter(info);
}

void V8PerformanceTiming::UnloadEventEndAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PerformanceTiming_unloadEventEnd_Getter");

  performance_timing_v8_internal::UnloadEventEndAttributeGetter(info);
}

void V8PerformanceTiming::RedirectStartAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PerformanceTiming_redirectStart_Getter");

  performance_timing_v8_internal::RedirectStartAttributeGetter(info);
}

void V8PerformanceTiming::RedirectEndAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PerformanceTiming_redirectEnd_Getter");

  performance_timing_v8_internal::RedirectEndAttributeGetter(info);
}

void V8PerformanceTiming::FetchStartAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PerformanceTiming_fetchStart_Getter");

  performance_timing_v8_internal::FetchStartAttributeGetter(info);
}

void V8PerformanceTiming::DomainLookupStartAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PerformanceTiming_domainLookupStart_Getter");

  performance_timing_v8_internal::DomainLookupStartAttributeGetter(info);
}

void V8PerformanceTiming::DomainLookupEndAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PerformanceTiming_domainLookupEnd_Getter");

  performance_timing_v8_internal::DomainLookupEndAttributeGetter(info);
}

void V8PerformanceTiming::ConnectStartAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PerformanceTiming_connectStart_Getter");

  performance_timing_v8_internal::ConnectStartAttributeGetter(info);
}

void V8PerformanceTiming::ConnectEndAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PerformanceTiming_connectEnd_Getter");

  performance_timing_v8_internal::ConnectEndAttributeGetter(info);
}

void V8PerformanceTiming::SecureConnectionStartAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PerformanceTiming_secureConnectionStart_Getter");

  performance_timing_v8_internal::SecureConnectionStartAttributeGetter(info);
}

void V8PerformanceTiming::RequestStartAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PerformanceTiming_requestStart_Getter");

  performance_timing_v8_internal::RequestStartAttributeGetter(info);
}

void V8PerformanceTiming::ResponseStartAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PerformanceTiming_responseStart_Getter");

  performance_timing_v8_internal::ResponseStartAttributeGetter(info);
}

void V8PerformanceTiming::ResponseEndAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PerformanceTiming_responseEnd_Getter");

  performance_timing_v8_internal::ResponseEndAttributeGetter(info);
}

void V8PerformanceTiming::DOMLoadingAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PerformanceTiming_domLoading_Getter");

  performance_timing_v8_internal::DOMLoadingAttributeGetter(info);
}

void V8PerformanceTiming::DOMInteractiveAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PerformanceTiming_domInteractive_Getter");

  performance_timing_v8_internal::DOMInteractiveAttributeGetter(info);
}

void V8PerformanceTiming::DOMContentLoadedEventStartAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PerformanceTiming_domContentLoadedEventStart_Getter");

  performance_timing_v8_internal::DOMContentLoadedEventStartAttributeGetter(info);
}

void V8PerformanceTiming::DOMContentLoadedEventEndAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PerformanceTiming_domContentLoadedEventEnd_Getter");

  performance_timing_v8_internal::DOMContentLoadedEventEndAttributeGetter(info);
}

void V8PerformanceTiming::DOMCompleteAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PerformanceTiming_domComplete_Getter");

  performance_timing_v8_internal::DOMCompleteAttributeGetter(info);
}

void V8PerformanceTiming::LoadEventStartAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PerformanceTiming_loadEventStart_Getter");

  performance_timing_v8_internal::LoadEventStartAttributeGetter(info);
}

void V8PerformanceTiming::LoadEventEndAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PerformanceTiming_loadEventEnd_Getter");

  performance_timing_v8_internal::LoadEventEndAttributeGetter(info);
}

void V8PerformanceTiming::ToJSONMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PerformanceTiming_toJSON");

  performance_timing_v8_internal::ToJSONMethod(info);
}

static constexpr V8DOMConfiguration::AccessorConfiguration kV8PerformanceTimingAccessors[] = {
    { "navigationStart", V8PerformanceTiming::NavigationStartAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "unloadEventStart", V8PerformanceTiming::UnloadEventStartAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "unloadEventEnd", V8PerformanceTiming::UnloadEventEndAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "redirectStart", V8PerformanceTiming::RedirectStartAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "redirectEnd", V8PerformanceTiming::RedirectEndAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "fetchStart", V8PerformanceTiming::FetchStartAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "domainLookupStart", V8PerformanceTiming::DomainLookupStartAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "domainLookupEnd", V8PerformanceTiming::DomainLookupEndAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "connectStart", V8PerformanceTiming::ConnectStartAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "connectEnd", V8PerformanceTiming::ConnectEndAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "secureConnectionStart", V8PerformanceTiming::SecureConnectionStartAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "requestStart", V8PerformanceTiming::RequestStartAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "responseStart", V8PerformanceTiming::ResponseStartAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "responseEnd", V8PerformanceTiming::ResponseEndAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "domLoading", V8PerformanceTiming::DOMLoadingAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "domInteractive", V8PerformanceTiming::DOMInteractiveAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "domContentLoadedEventStart", V8PerformanceTiming::DOMContentLoadedEventStartAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "domContentLoadedEventEnd", V8PerformanceTiming::DOMContentLoadedEventEndAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "domComplete", V8PerformanceTiming::DOMCompleteAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "loadEventStart", V8PerformanceTiming::LoadEventStartAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "loadEventEnd", V8PerformanceTiming::LoadEventEndAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
};

static constexpr V8DOMConfiguration::MethodConfiguration kV8PerformanceTimingMethods[] = {
    {"toJSON", V8PerformanceTiming::ToJSONMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void InstallV8PerformanceTimingTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8PerformanceTiming::GetWrapperTypeInfo()->interface_name, v8::Local<v8::FunctionTemplate>(), V8PerformanceTiming::kInternalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8PerformanceTimingAccessors, base::size(kV8PerformanceTimingAccessors));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8PerformanceTimingMethods, base::size(kV8PerformanceTimingMethods));

  // Custom signature

  V8PerformanceTiming::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8PerformanceTiming::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8PerformanceTiming::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8PerformanceTiming::GetWrapperTypeInfo()),
      InstallV8PerformanceTimingTemplate);
}

bool V8PerformanceTiming::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8PerformanceTiming::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8PerformanceTiming::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8PerformanceTiming::GetWrapperTypeInfo(), v8_value);
}

PerformanceTiming* V8PerformanceTiming::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

PerformanceTiming* NativeValueTraits<PerformanceTiming>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  PerformanceTiming* native_value = V8PerformanceTiming::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "PerformanceTiming"));
  }
  return native_value;
}

}  // namespace blink
