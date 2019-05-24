// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_stats_report.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/script_value.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_for_each_iterator_callback.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_iterator.h"
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
const WrapperTypeInfo v8_rtc_stats_report_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8RTCStatsReport::DomTemplate,
    nullptr,
    "RTCStatsReport",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in RTCStatsReport.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& RTCStatsReport::wrapper_type_info_ = v8_rtc_stats_report_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, RTCStatsReport>::value,
    "RTCStatsReport inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&RTCStatsReport::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "RTCStatsReport is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace rtc_stats_report_v8_internal {

static void SizeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  RTCStatsReport* impl = V8RTCStatsReport::ToImpl(holder);

  V8SetReturnValueUnsigned(info, impl->size());
}

static void KeysMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "RTCStatsReport", "keys");

  RTCStatsReport* impl = V8RTCStatsReport::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  Iterator* result = impl->keysForBinding(script_state, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void ValuesMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "RTCStatsReport", "values");

  RTCStatsReport* impl = V8RTCStatsReport::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  Iterator* result = impl->valuesForBinding(script_state, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void ForEachMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "RTCStatsReport", "forEach");

  RTCStatsReport* impl = V8RTCStatsReport::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  V8ForEachIteratorCallback* callback;
  ScriptValue this_arg;
  if (info[0]->IsFunction()) {
    callback = V8ForEachIteratorCallback::Create(info[0].As<v8::Function>());
  } else {
    exception_state.ThrowTypeError("The callback provided as parameter 1 is not a function.");
    return;
  }

  this_arg = ScriptValue(ScriptState::Current(info.GetIsolate()), info[1]);

  impl->forEachForBinding(script_state, ScriptValue(script_state, info.Holder()), callback, this_arg, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void HasMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "RTCStatsReport", "has");

  RTCStatsReport* impl = V8RTCStatsReport::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  V8StringResource<> key;
  key = info[0];
  if (!key.Prepare())
    return;

  bool result = impl->hasForBinding(script_state, key, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValueBool(info, result);
}

static void GetMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "RTCStatsReport", "get");

  RTCStatsReport* impl = V8RTCStatsReport::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  V8StringResource<> key;
  key = info[0];
  if (!key.Prepare())
    return;

  ScriptValue result = impl->getForBinding(script_state, key, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValue(info, result.V8Value());
}

static void IteratorMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "RTCStatsReport", "iterator");

  RTCStatsReport* impl = V8RTCStatsReport::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  Iterator* result = impl->GetIterator(script_state, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

}  // namespace rtc_stats_report_v8_internal

void V8RTCStatsReport::SizeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCStatsReport_size_Getter");

  rtc_stats_report_v8_internal::SizeAttributeGetter(info);
}

void V8RTCStatsReport::KeysMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCStatsReport_keys");

  rtc_stats_report_v8_internal::KeysMethod(info);
}

void V8RTCStatsReport::ValuesMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCStatsReport_values");

  rtc_stats_report_v8_internal::ValuesMethod(info);
}

void V8RTCStatsReport::ForEachMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCStatsReport_forEach");

  rtc_stats_report_v8_internal::ForEachMethod(info);
}

void V8RTCStatsReport::HasMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCStatsReport_has");

  rtc_stats_report_v8_internal::HasMethod(info);
}

void V8RTCStatsReport::GetMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCStatsReport_get");

  rtc_stats_report_v8_internal::GetMethod(info);
}

void V8RTCStatsReport::IteratorMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCStatsReport_iterator");

  rtc_stats_report_v8_internal::IteratorMethod(info);
}

static constexpr V8DOMConfiguration::AccessorConfiguration kV8RTCStatsReportAccessors[] = {
    { "size", V8RTCStatsReport::SizeAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::DontEnum | v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
};

static constexpr V8DOMConfiguration::MethodConfiguration kV8RTCStatsReportMethods[] = {
    {"keys", V8RTCStatsReport::KeysMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"values", V8RTCStatsReport::ValuesMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"forEach", V8RTCStatsReport::ForEachMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"has", V8RTCStatsReport::HasMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"get", V8RTCStatsReport::GetMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void InstallV8RTCStatsReportTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8RTCStatsReport::GetWrapperTypeInfo()->interface_name, v8::Local<v8::FunctionTemplate>(), V8RTCStatsReport::kInternalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8RTCStatsReportAccessors, base::size(kV8RTCStatsReportAccessors));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8RTCStatsReportMethods, base::size(kV8RTCStatsReportMethods));

  // Iterator (@@iterator)
  static const V8DOMConfiguration::SymbolKeyedMethodConfiguration
  kSymbolKeyedIteratorConfiguration = {
      v8::Symbol::GetIterator,
      "entries",
      V8RTCStatsReport::IteratorMethodCallback,
      0,
      v8::DontEnum,
      V8DOMConfiguration::kOnPrototype,
      V8DOMConfiguration::kCheckHolder,
      V8DOMConfiguration::kDoNotCheckAccess,
      V8DOMConfiguration::kHasSideEffect
  };
  V8DOMConfiguration::InstallMethod(
      isolate, world, prototype_template, signature,
      kSymbolKeyedIteratorConfiguration);

  // Custom signature

  V8RTCStatsReport::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8RTCStatsReport::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8RTCStatsReport::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8RTCStatsReport::GetWrapperTypeInfo()),
      InstallV8RTCStatsReportTemplate);
}

bool V8RTCStatsReport::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8RTCStatsReport::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8RTCStatsReport::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8RTCStatsReport::GetWrapperTypeInfo(), v8_value);
}

RTCStatsReport* V8RTCStatsReport::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

RTCStatsReport* NativeValueTraits<RTCStatsReport>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  RTCStatsReport* native_value = V8RTCStatsReport::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "RTCStatsReport"));
  }
  return native_value;
}

}  // namespace blink
