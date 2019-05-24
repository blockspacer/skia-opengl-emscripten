// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_performance.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/js_event_handler.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/script_value.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_memory_info.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_performance_entry.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_performance_mark.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_performance_mark_options.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_performance_measure.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_performance_measure_options.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_performance_navigation.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_performance_timing.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/frame/use_counter.h"
#include "third_party/blink/renderer/platform/bindings/exception_messages.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
#include "third_party/blink/renderer/platform/bindings/script_state.h"
#include "third_party/blink/renderer/platform/bindings/v8_object_constructor.h"
#include "third_party/blink/renderer/platform/bindings/v8_per_context_data.h"
#include "third_party/blink/renderer/platform/bindings/v8_private_property.h"
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
const WrapperTypeInfo v8_performance_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8Performance::DomTemplate,
    V8Performance::InstallConditionalFeatures,
    "Performance",
    V8EventTarget::GetWrapperTypeInfo(),
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in Performance.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& Performance::wrapper_type_info_ = v8_performance_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, Performance>::value,
    "Performance inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&Performance::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "Performance is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace performance_v8_internal {

static void TimeOriginAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Performance* impl = V8Performance::ToImpl(holder);

  V8SetReturnValue(info, impl->timeOrigin());
}

static void OnresourcetimingbufferfullAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Performance* impl = V8Performance::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->onresourcetimingbufferfull()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnresourcetimingbufferfullAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Performance* impl = V8Performance::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnresourcetimingbufferfull(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnelementtimingbufferfullAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Performance* impl = V8Performance::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->onelementtimingbufferfull()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnelementtimingbufferfullAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Performance* impl = V8Performance::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnelementtimingbufferfull(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OneventtimingbufferfullAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Performance* impl = V8Performance::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->oneventtimingbufferfull()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OneventtimingbufferfullAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Performance* impl = V8Performance::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOneventtimingbufferfull(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void TimingAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Performance* impl = V8Performance::ToImpl(holder);

  PerformanceTiming* cpp_value(WTF::GetPtr(impl->timing()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#Performance#timing")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void NavigationAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Performance* impl = V8Performance::ToImpl(holder);

  PerformanceNavigation* cpp_value(WTF::GetPtr(impl->navigation()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#Performance#navigation")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void MemoryAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Performance* impl = V8Performance::ToImpl(holder);

  MemoryInfo* cpp_value(WTF::GetPtr(impl->memory()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#Performance#memory")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void NowMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Performance* impl = V8Performance::ToImpl(info.Holder());

  V8SetReturnValue(info, impl->now());
}

static void GetEntriesMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Performance* impl = V8Performance::ToImpl(info.Holder());

  V8SetReturnValue(info, ToV8(impl->getEntries(), info.Holder(), info.GetIsolate()));
}

static void GetEntriesByTypeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Performance* impl = V8Performance::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getEntriesByType", "Performance", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  V8StringResource<> entry_type;
  entry_type = info[0];
  if (!entry_type.Prepare())
    return;

  V8SetReturnValue(info, ToV8(impl->getEntriesByType(entry_type), info.Holder(), info.GetIsolate()));
}

static void GetEntriesByNameMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Performance* impl = V8Performance::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getEntriesByName", "Performance", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  V8StringResource<> name;
  V8StringResource<> entry_type;
  name = info[0];
  if (!name.Prepare())
    return;

  if (!info[1]->IsUndefined()) {
    entry_type = info[1];
    if (!entry_type.Prepare())
      return;
  } else {
    entry_type = nullptr;
  }

  V8SetReturnValue(info, ToV8(impl->getEntriesByName(name, entry_type), info.Holder(), info.GetIsolate()));
}

static void ClearResourceTimingsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Performance* impl = V8Performance::ToImpl(info.Holder());

  impl->clearResourceTimings();
}

static void SetResourceTimingBufferSizeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Performance", "setResourceTimingBufferSize");

  Performance* impl = V8Performance::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  uint32_t max_size;
  max_size = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  impl->setResourceTimingBufferSize(max_size);
}

static void ClearElementTimingsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Performance* impl = V8Performance::ToImpl(info.Holder());

  impl->clearElementTimings();
}

static void SetElementTimingBufferMaxSizeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Performance", "setElementTimingBufferMaxSize");

  Performance* impl = V8Performance::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  uint32_t max_size;
  max_size = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  impl->setElementTimingBufferMaxSize(max_size);
}

static void ClearEventTimingsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Performance* impl = V8Performance::ToImpl(info.Holder());

  impl->clearEventTimings();
}

static void SetEventTimingBufferMaxSizeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Performance", "setEventTimingBufferMaxSize");

  Performance* impl = V8Performance::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  uint32_t max_size;
  max_size = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  impl->setEventTimingBufferMaxSize(max_size);
}

static void Mark1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Performance", "mark");

  Performance* impl = V8Performance::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  V8StringResource<> mark_name;
  mark_name = info[0];
  if (!mark_name.Prepare())
    return;

  PerformanceMark* result = impl->mark(script_state, mark_name, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void Mark2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Performance", "mark");

  Performance* impl = V8Performance::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  V8StringResource<> mark_name;
  PerformanceMarkOptions* mark_options;
  mark_name = info[0];
  if (!mark_name.Prepare())
    return;

  if (!info[1]->IsNullOrUndefined() && !info[1]->IsObject()) {
    exception_state.ThrowTypeError("parameter 2 ('markOptions') is not an object.");
    return;
  }
  mark_options = NativeValueTraits<PerformanceMarkOptions>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  PerformanceMark* result = impl->mark(script_state, mark_name, mark_options, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static int MarkMethodMaxArg() {
  if (RuntimeEnabledFeatures::CustomUserTimingEnabled()) {
    return 2;
  }
  return 1;
}

static void MarkMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  scheduler::CooperativeSchedulingManager::Instance()->Safepoint();

  bool is_arity_error = false;

  switch (std::min(performance_v8_internal::MarkMethodMaxArg(), info.Length())) {
    case 1:
      if (true) {
        ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
        UseCounter::Count(execution_context_for_measurement, WebFeature::kUserTiming);
        Mark1Method(info);
        return;
      }
      break;
    case 2:
      if (RuntimeEnabledFeatures::CustomUserTimingEnabled()) {
        if (true) {
          ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
          UseCounter::Count(execution_context_for_measurement, WebFeature::kUserTiming);
          Mark2Method(info);
          return;
        }
      }
      break;
    default:
      is_arity_error = true;
  }

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Performance", "mark");
  if (is_arity_error) {
    if (info.Length() < 1) {
      exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
      return;
    }
  }
  exception_state.ThrowTypeError("No function was found that matched the signature provided.");
}

static void ClearMarksMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Performance* impl = V8Performance::ToImpl(info.Holder());

  V8StringResource<> mark_name;
  if (!info[0]->IsUndefined()) {
    mark_name = info[0];
    if (!mark_name.Prepare())
      return;
  } else {
    mark_name = nullptr;
  }

  impl->clearMarks(mark_name);
}

static void MeasureMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Performance", "measure");

  Performance* impl = V8Performance::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  V8StringResource<> measure_name;
  StringOrPerformanceMeasureOptions start_or_options;
  V8StringResource<> end;
  int num_args_passed = info.Length();
  while (num_args_passed > 0) {
    if (!info[num_args_passed - 1]->IsUndefined())
      break;
    --num_args_passed;
  }
  measure_name = info[0];
  if (!measure_name.Prepare())
    return;

  if (UNLIKELY(num_args_passed <= 1)) {
    PerformanceMeasure* result = impl->measure(script_state, measure_name, exception_state);
    if (exception_state.HadException()) {
      return;
    }
    V8SetReturnValue(info, result);
    return;
  }
  V8StringOrPerformanceMeasureOptions::ToImpl(info.GetIsolate(), info[1], start_or_options, UnionTypeConversionMode::kNullable, exception_state);
  if (exception_state.HadException())
    return;

  if (UNLIKELY(num_args_passed <= 2)) {
    PerformanceMeasure* result = impl->measure(script_state, measure_name, start_or_options, exception_state);
    if (exception_state.HadException()) {
      return;
    }
    V8SetReturnValue(info, result);
    return;
  }
  end = info[2];
  if (!end.Prepare())
    return;

  PerformanceMeasure* result = impl->measure(script_state, measure_name, start_or_options, end, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void ClearMeasuresMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Performance* impl = V8Performance::ToImpl(info.Holder());

  V8StringResource<> measure_name;
  if (!info[0]->IsUndefined()) {
    measure_name = info[0];
    if (!measure_name.Prepare())
      return;
  } else {
    measure_name = nullptr;
  }

  impl->clearMeasures(measure_name);
}

static void ToJSONMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Performance* impl = V8Performance::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  ScriptValue result = impl->toJSONForBinding(script_state);
  V8SetReturnValue(info, result.V8Value());
}

}  // namespace performance_v8_internal

void V8Performance::TimeOriginAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Performance_timeOrigin_Getter");

  performance_v8_internal::TimeOriginAttributeGetter(info);
}

void V8Performance::OnresourcetimingbufferfullAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Performance_onresourcetimingbufferfull_Getter");

  performance_v8_internal::OnresourcetimingbufferfullAttributeGetter(info);
}

void V8Performance::OnresourcetimingbufferfullAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Performance_onresourcetimingbufferfull_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  performance_v8_internal::OnresourcetimingbufferfullAttributeSetter(v8_value, info);
}

void V8Performance::OnelementtimingbufferfullAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Performance_onelementtimingbufferfull_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kElementTimingExplicitlyRequested);

  performance_v8_internal::OnelementtimingbufferfullAttributeGetter(info);
}

void V8Performance::OnelementtimingbufferfullAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Performance_onelementtimingbufferfull_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kElementTimingExplicitlyRequested);

  performance_v8_internal::OnelementtimingbufferfullAttributeSetter(v8_value, info);
}

void V8Performance::OneventtimingbufferfullAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Performance_oneventtimingbufferfull_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kPerformanceEventTimingBuffer);

  performance_v8_internal::OneventtimingbufferfullAttributeGetter(info);
}

void V8Performance::OneventtimingbufferfullAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Performance_oneventtimingbufferfull_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kPerformanceEventTimingBuffer);

  performance_v8_internal::OneventtimingbufferfullAttributeSetter(v8_value, info);
}

void V8Performance::TimingAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Performance_timing_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kV8Performance_Timing_AttributeGetter);

  performance_v8_internal::TimingAttributeGetter(info);
}

void V8Performance::NavigationAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Performance_navigation_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kV8Performance_Navigation_AttributeGetter);

  performance_v8_internal::NavigationAttributeGetter(info);
}

void V8Performance::MemoryAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Performance_memory_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kV8Performance_Memory_AttributeGetter);

  performance_v8_internal::MemoryAttributeGetter(info);
}

void V8Performance::NowMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Performance_now");

  performance_v8_internal::NowMethod(info);
}

void V8Performance::GetEntriesMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Performance_getEntries");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kPerformanceTimeline);
  performance_v8_internal::GetEntriesMethod(info);
}

void V8Performance::GetEntriesByTypeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Performance_getEntriesByType");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kPerformanceTimeline);
  performance_v8_internal::GetEntriesByTypeMethod(info);
}

void V8Performance::GetEntriesByNameMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Performance_getEntriesByName");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kPerformanceTimeline);
  performance_v8_internal::GetEntriesByNameMethod(info);
}

void V8Performance::ClearResourceTimingsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Performance_clearResourceTimings");

  performance_v8_internal::ClearResourceTimingsMethod(info);
}

void V8Performance::SetResourceTimingBufferSizeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Performance_setResourceTimingBufferSize");

  performance_v8_internal::SetResourceTimingBufferSizeMethod(info);
}

void V8Performance::ClearElementTimingsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Performance_clearElementTimings");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kElementTimingExplicitlyRequested);
  performance_v8_internal::ClearElementTimingsMethod(info);
}

void V8Performance::SetElementTimingBufferMaxSizeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Performance_setElementTimingBufferMaxSize");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kElementTimingExplicitlyRequested);
  performance_v8_internal::SetElementTimingBufferMaxSizeMethod(info);
}

void V8Performance::ClearEventTimingsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Performance_clearEventTimings");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kPerformanceEventTimingBuffer);
  performance_v8_internal::ClearEventTimingsMethod(info);
}

void V8Performance::SetEventTimingBufferMaxSizeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Performance_setEventTimingBufferMaxSize");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kPerformanceEventTimingBuffer);
  performance_v8_internal::SetEventTimingBufferMaxSizeMethod(info);
}

void V8Performance::MarkMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Performance_mark");

  performance_v8_internal::MarkMethod(info);
}

void V8Performance::ClearMarksMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Performance_clearMarks");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kUserTiming);
  performance_v8_internal::ClearMarksMethod(info);
}

void V8Performance::MeasureMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Performance_measure");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kUserTiming);
  performance_v8_internal::MeasureMethod(info);
}

void V8Performance::ClearMeasuresMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Performance_clearMeasures");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kUserTiming);
  performance_v8_internal::ClearMeasuresMethod(info);
}

void V8Performance::ToJSONMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Performance_toJSON");

  performance_v8_internal::ToJSONMethod(info);
}

static constexpr V8DOMConfiguration::AccessorConfiguration kV8PerformanceAccessors[] = {
    { "timeOrigin", V8Performance::TimeOriginAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onresourcetimingbufferfull", V8Performance::OnresourcetimingbufferfullAttributeGetterCallback, V8Performance::OnresourcetimingbufferfullAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
};

static constexpr V8DOMConfiguration::MethodConfiguration kV8PerformanceMethods[] = {
    {"now", V8Performance::NowMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getEntries", V8Performance::GetEntriesMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getEntriesByType", V8Performance::GetEntriesByTypeMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getEntriesByName", V8Performance::GetEntriesByNameMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"clearResourceTimings", V8Performance::ClearResourceTimingsMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setResourceTimingBufferSize", V8Performance::SetResourceTimingBufferSizeMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"mark", V8Performance::MarkMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"clearMarks", V8Performance::ClearMarksMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"measure", V8Performance::MeasureMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"clearMeasures", V8Performance::ClearMeasuresMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"toJSON", V8Performance::ToJSONMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void InstallV8PerformanceTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8Performance::GetWrapperTypeInfo()->interface_name, V8EventTarget::DomTemplate(isolate, world), V8Performance::kInternalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8PerformanceAccessors, base::size(kV8PerformanceAccessors));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8PerformanceMethods, base::size(kV8PerformanceMethods));

  // Custom signature

  V8Performance::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8Performance::InstallRuntimeEnabledFeaturesOnTemplate(
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

void V8Performance::InstallElementTiming(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::Object> instance,
    v8::Local<v8::Object> prototype,
    v8::Local<v8::Function> interface) {
  v8::Local<v8::FunctionTemplate> interface_template =
      V8Performance::GetWrapperTypeInfo()->DomTemplate(isolate, world);
  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  static constexpr V8DOMConfiguration::AccessorConfiguration
  konelementtimingbufferfullConfigurations[] = {
      { "onelementtimingbufferfull", V8Performance::OnelementtimingbufferfullAttributeGetterCallback, V8Performance::OnelementtimingbufferfullAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds }
  };
  for (const auto& config : konelementtimingbufferfullConfigurations) {
    V8DOMConfiguration::InstallAccessor(isolate, world, instance, prototype,
                                        interface, signature, config);
  }
  static constexpr V8DOMConfiguration::MethodConfiguration
  kClearElementTimingsConfigurations[] = {
      {"clearElementTimings", V8Performance::ClearElementTimingsMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
  };
  for (const auto& config : kClearElementTimingsConfigurations) {
    V8DOMConfiguration::InstallMethod(
        isolate, world, instance, prototype,
        interface, signature, config);
  }
  static constexpr V8DOMConfiguration::MethodConfiguration
  kSetElementTimingBufferMaxSizeConfigurations[] = {
      {"setElementTimingBufferMaxSize", V8Performance::SetElementTimingBufferMaxSizeMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
  };
  for (const auto& config : kSetElementTimingBufferMaxSizeConfigurations) {
    V8DOMConfiguration::InstallMethod(
        isolate, world, instance, prototype,
        interface, signature, config);
  }
}

void V8Performance::InstallElementTiming(
    ScriptState* script_state, v8::Local<v8::Object> instance) {
  V8PerContextData* per_context_data = script_state->PerContextData();
  v8::Local<v8::Object> prototype = per_context_data->PrototypeForType(
      V8Performance::GetWrapperTypeInfo());
  v8::Local<v8::Function> interface = per_context_data->ConstructorForType(
      V8Performance::GetWrapperTypeInfo());
  ALLOW_UNUSED_LOCAL(interface);
  InstallElementTiming(script_state->GetIsolate(), script_state->World(), instance, prototype, interface);
}

void V8Performance::InstallElementTiming(ScriptState* script_state) {
  InstallElementTiming(script_state, v8::Local<v8::Object>());
}

void V8Performance::InstallEventTiming(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::Object> instance,
    v8::Local<v8::Object> prototype,
    v8::Local<v8::Function> interface) {
  v8::Local<v8::FunctionTemplate> interface_template =
      V8Performance::GetWrapperTypeInfo()->DomTemplate(isolate, world);
  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  static constexpr V8DOMConfiguration::AccessorConfiguration
  koneventtimingbufferfullConfigurations[] = {
      { "oneventtimingbufferfull", V8Performance::OneventtimingbufferfullAttributeGetterCallback, V8Performance::OneventtimingbufferfullAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds }
  };
  for (const auto& config : koneventtimingbufferfullConfigurations) {
    V8DOMConfiguration::InstallAccessor(isolate, world, instance, prototype,
                                        interface, signature, config);
  }
  static constexpr V8DOMConfiguration::MethodConfiguration
  kClearEventTimingsConfigurations[] = {
      {"clearEventTimings", V8Performance::ClearEventTimingsMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
  };
  for (const auto& config : kClearEventTimingsConfigurations) {
    V8DOMConfiguration::InstallMethod(
        isolate, world, instance, prototype,
        interface, signature, config);
  }
  static constexpr V8DOMConfiguration::MethodConfiguration
  kSetEventTimingBufferMaxSizeConfigurations[] = {
      {"setEventTimingBufferMaxSize", V8Performance::SetEventTimingBufferMaxSizeMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
  };
  for (const auto& config : kSetEventTimingBufferMaxSizeConfigurations) {
    V8DOMConfiguration::InstallMethod(
        isolate, world, instance, prototype,
        interface, signature, config);
  }
}

void V8Performance::InstallEventTiming(
    ScriptState* script_state, v8::Local<v8::Object> instance) {
  V8PerContextData* per_context_data = script_state->PerContextData();
  v8::Local<v8::Object> prototype = per_context_data->PrototypeForType(
      V8Performance::GetWrapperTypeInfo());
  v8::Local<v8::Function> interface = per_context_data->ConstructorForType(
      V8Performance::GetWrapperTypeInfo());
  ALLOW_UNUSED_LOCAL(interface);
  InstallEventTiming(script_state->GetIsolate(), script_state->World(), instance, prototype, interface);
}

void V8Performance::InstallEventTiming(ScriptState* script_state) {
  InstallEventTiming(script_state, v8::Local<v8::Object>());
}

v8::Local<v8::FunctionTemplate> V8Performance::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8Performance::GetWrapperTypeInfo()),
      InstallV8PerformanceTemplate);
}

bool V8Performance::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8Performance::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8Performance::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8Performance::GetWrapperTypeInfo(), v8_value);
}

Performance* V8Performance::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

Performance* NativeValueTraits<Performance>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  Performance* native_value = V8Performance::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "Performance"));
  }
  return native_value;
}

void V8Performance::InstallConditionalFeatures(
    v8::Local<v8::Context> context,
    const DOMWrapperWorld& world,
    v8::Local<v8::Object> instance_object,
    v8::Local<v8::Object> prototype_object,
    v8::Local<v8::Function> interface_object,
    v8::Local<v8::FunctionTemplate> interface_template) {
  CHECK(!interface_template.IsEmpty());
  DCHECK((!prototype_object.IsEmpty() && !interface_object.IsEmpty()) ||
         !instance_object.IsEmpty());

  v8::Isolate* isolate = context->GetIsolate();

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ExecutionContext* execution_context = ToExecutionContext(context);
  DCHECK(execution_context);

  if (!prototype_object.IsEmpty() || !interface_object.IsEmpty()) {
    if (execution_context && (execution_context->IsDocument())) {
      static const V8DOMConfiguration::AccessorConfiguration accessor_configurations[] = {
          { "memory", V8Performance::MemoryAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
          { "navigation", V8Performance::NavigationAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
          { "timing", V8Performance::TimingAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
      };
      V8DOMConfiguration::InstallAccessors(
          isolate, world, instance_object, prototype_object, interface_object,
          signature, accessor_configurations,
          base::size(accessor_configurations));
    }
  }
}

}  // namespace blink
