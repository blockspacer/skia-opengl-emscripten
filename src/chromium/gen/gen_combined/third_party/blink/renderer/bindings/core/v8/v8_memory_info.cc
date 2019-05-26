// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_memory_info.h"

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
#include "third_party/blink/renderer/platform/bindings/v8_per_context_data.h"
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
const WrapperTypeInfo v8_memory_info_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8MemoryInfo::DomTemplate,
    nullptr,
    "MemoryInfo",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in MemoryInfo.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& MemoryInfo::wrapper_type_info_ = v8_memory_info_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, MemoryInfo>::value,
    "MemoryInfo inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&MemoryInfo::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "MemoryInfo is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace memory_info_v8_internal {

static void TotalJSHeapSizeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  MemoryInfo* impl = V8MemoryInfo::ToImpl(holder);

  V8SetReturnValue(info, static_cast<double>(impl->totalJSHeapSize()));
}

static void UsedJSHeapSizeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  MemoryInfo* impl = V8MemoryInfo::ToImpl(holder);

  V8SetReturnValue(info, static_cast<double>(impl->usedJSHeapSize()));
}

static void JsHeapSizeLimitAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  MemoryInfo* impl = V8MemoryInfo::ToImpl(holder);

  V8SetReturnValue(info, static_cast<double>(impl->jsHeapSizeLimit()));
}

static void UsedJSHeapSizeWithoutExternalMemoryAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  MemoryInfo* impl = V8MemoryInfo::ToImpl(holder);

  V8SetReturnValue(info, static_cast<double>(impl->usedJSHeapSizeWithoutExternalMemory()));
}

static void TotalJSHeapSizeWithoutExternalMemoryAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  MemoryInfo* impl = V8MemoryInfo::ToImpl(holder);

  V8SetReturnValue(info, static_cast<double>(impl->totalJSHeapSizeWithoutExternalMemory()));
}

}  // namespace memory_info_v8_internal

void V8MemoryInfo::TotalJSHeapSizeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_MemoryInfo_totalJSHeapSize_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kV8MemoryInfo_TotalJSHeapSize_AttributeGetter);

  memory_info_v8_internal::TotalJSHeapSizeAttributeGetter(info);
}

void V8MemoryInfo::UsedJSHeapSizeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_MemoryInfo_usedJSHeapSize_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kV8MemoryInfo_UsedJSHeapSize_AttributeGetter);

  memory_info_v8_internal::UsedJSHeapSizeAttributeGetter(info);
}

void V8MemoryInfo::JsHeapSizeLimitAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_MemoryInfo_jsHeapSizeLimit_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kV8MemoryInfo_JSHeapSizeLimit_AttributeGetter);

  memory_info_v8_internal::JsHeapSizeLimitAttributeGetter(info);
}

void V8MemoryInfo::UsedJSHeapSizeWithoutExternalMemoryAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_MemoryInfo_usedJSHeapSizeWithoutExternalMemory_Getter");

  memory_info_v8_internal::UsedJSHeapSizeWithoutExternalMemoryAttributeGetter(info);
}

void V8MemoryInfo::TotalJSHeapSizeWithoutExternalMemoryAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_MemoryInfo_totalJSHeapSizeWithoutExternalMemory_Getter");

  memory_info_v8_internal::TotalJSHeapSizeWithoutExternalMemoryAttributeGetter(info);
}

static constexpr V8DOMConfiguration::AccessorConfiguration kV8MemoryInfoAccessors[] = {
    { "totalJSHeapSize", V8MemoryInfo::TotalJSHeapSizeAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "usedJSHeapSize", V8MemoryInfo::UsedJSHeapSizeAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "jsHeapSizeLimit", V8MemoryInfo::JsHeapSizeLimitAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
};

static void InstallV8MemoryInfoTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8MemoryInfo::GetWrapperTypeInfo()->interface_name, v8::Local<v8::FunctionTemplate>(), V8MemoryInfo::kInternalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8MemoryInfoAccessors, base::size(kV8MemoryInfoAccessors));

  // Custom signature

  V8MemoryInfo::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8MemoryInfo::InstallRuntimeEnabledFeaturesOnTemplate(
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

void V8MemoryInfo::InstallLegacyPerformanceMemoryCounters(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::Object> instance,
    v8::Local<v8::Object> prototype,
    v8::Local<v8::Function> interface) {
  v8::Local<v8::FunctionTemplate> interface_template =
      V8MemoryInfo::GetWrapperTypeInfo()->DomTemplate(isolate, world);
  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  static constexpr V8DOMConfiguration::AccessorConfiguration
  ktotalJSHeapSizeWithoutExternalMemoryConfigurations[] = {
      { "totalJSHeapSizeWithoutExternalMemory", V8MemoryInfo::TotalJSHeapSizeWithoutExternalMemoryAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds }
  };
  for (const auto& config : ktotalJSHeapSizeWithoutExternalMemoryConfigurations) {
    V8DOMConfiguration::InstallAccessor(isolate, world, instance, prototype,
                                        interface, signature, config);
  }
  static constexpr V8DOMConfiguration::AccessorConfiguration
  kusedJSHeapSizeWithoutExternalMemoryConfigurations[] = {
      { "usedJSHeapSizeWithoutExternalMemory", V8MemoryInfo::UsedJSHeapSizeWithoutExternalMemoryAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds }
  };
  for (const auto& config : kusedJSHeapSizeWithoutExternalMemoryConfigurations) {
    V8DOMConfiguration::InstallAccessor(isolate, world, instance, prototype,
                                        interface, signature, config);
  }
}

void V8MemoryInfo::InstallLegacyPerformanceMemoryCounters(
    ScriptState* script_state, v8::Local<v8::Object> instance) {
  V8PerContextData* per_context_data = script_state->PerContextData();
  v8::Local<v8::Object> prototype = per_context_data->PrototypeForType(
      V8MemoryInfo::GetWrapperTypeInfo());
  v8::Local<v8::Function> interface = per_context_data->ConstructorForType(
      V8MemoryInfo::GetWrapperTypeInfo());
  ALLOW_UNUSED_LOCAL(interface);
  InstallLegacyPerformanceMemoryCounters(script_state->GetIsolate(), script_state->World(), instance, prototype, interface);
}

void V8MemoryInfo::InstallLegacyPerformanceMemoryCounters(ScriptState* script_state) {
  InstallLegacyPerformanceMemoryCounters(script_state, v8::Local<v8::Object>());
}

v8::Local<v8::FunctionTemplate> V8MemoryInfo::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8MemoryInfo::GetWrapperTypeInfo()),
      InstallV8MemoryInfoTemplate);
}

bool V8MemoryInfo::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8MemoryInfo::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8MemoryInfo::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8MemoryInfo::GetWrapperTypeInfo(), v8_value);
}

MemoryInfo* V8MemoryInfo::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

MemoryInfo* NativeValueTraits<MemoryInfo>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  MemoryInfo* native_value = V8MemoryInfo::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "MemoryInfo"));
  }
  return native_value;
}

}  // namespace blink
