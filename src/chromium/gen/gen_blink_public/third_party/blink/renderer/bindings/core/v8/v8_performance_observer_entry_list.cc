// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_performance_observer_entry_list.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_performance_entry.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
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
const WrapperTypeInfo v8_performance_observer_entry_list_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8PerformanceObserverEntryList::DomTemplate,
    nullptr,
    "PerformanceObserverEntryList",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in PerformanceObserverEntryList.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& PerformanceObserverEntryList::wrapper_type_info_ = v8_performance_observer_entry_list_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, PerformanceObserverEntryList>::value,
    "PerformanceObserverEntryList inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&PerformanceObserverEntryList::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "PerformanceObserverEntryList is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace performance_observer_entry_list_v8_internal {

static void GetEntriesMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  PerformanceObserverEntryList* impl = V8PerformanceObserverEntryList::ToImpl(info.Holder());

  V8SetReturnValue(info, ToV8(impl->getEntries(), info.Holder(), info.GetIsolate()));
}

static void GetEntriesByTypeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  PerformanceObserverEntryList* impl = V8PerformanceObserverEntryList::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getEntriesByType", "PerformanceObserverEntryList", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  V8StringResource<> entry_type;
  entry_type = info[0];
  if (!entry_type.Prepare())
    return;

  V8SetReturnValue(info, ToV8(impl->getEntriesByType(entry_type), info.Holder(), info.GetIsolate()));
}

static void GetEntriesByNameMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  PerformanceObserverEntryList* impl = V8PerformanceObserverEntryList::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getEntriesByName", "PerformanceObserverEntryList", ExceptionMessages::NotEnoughArguments(1, info.Length())));
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

}  // namespace performance_observer_entry_list_v8_internal

void V8PerformanceObserverEntryList::GetEntriesMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PerformanceObserverEntryList_getEntries");

  performance_observer_entry_list_v8_internal::GetEntriesMethod(info);
}

void V8PerformanceObserverEntryList::GetEntriesByTypeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PerformanceObserverEntryList_getEntriesByType");

  performance_observer_entry_list_v8_internal::GetEntriesByTypeMethod(info);
}

void V8PerformanceObserverEntryList::GetEntriesByNameMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PerformanceObserverEntryList_getEntriesByName");

  performance_observer_entry_list_v8_internal::GetEntriesByNameMethod(info);
}

static constexpr V8DOMConfiguration::MethodConfiguration kV8PerformanceObserverEntryListMethods[] = {
    {"getEntries", V8PerformanceObserverEntryList::GetEntriesMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getEntriesByType", V8PerformanceObserverEntryList::GetEntriesByTypeMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getEntriesByName", V8PerformanceObserverEntryList::GetEntriesByNameMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void InstallV8PerformanceObserverEntryListTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8PerformanceObserverEntryList::GetWrapperTypeInfo()->interface_name, v8::Local<v8::FunctionTemplate>(), V8PerformanceObserverEntryList::kInternalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallMethods(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8PerformanceObserverEntryListMethods, base::size(kV8PerformanceObserverEntryListMethods));

  // Custom signature

  V8PerformanceObserverEntryList::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8PerformanceObserverEntryList::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8PerformanceObserverEntryList::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8PerformanceObserverEntryList::GetWrapperTypeInfo()),
      InstallV8PerformanceObserverEntryListTemplate);
}

bool V8PerformanceObserverEntryList::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8PerformanceObserverEntryList::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8PerformanceObserverEntryList::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8PerformanceObserverEntryList::GetWrapperTypeInfo(), v8_value);
}

PerformanceObserverEntryList* V8PerformanceObserverEntryList::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

PerformanceObserverEntryList* NativeValueTraits<PerformanceObserverEntryList>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  PerformanceObserverEntryList* native_value = V8PerformanceObserverEntryList::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "PerformanceObserverEntryList"));
  }
  return native_value;
}

}  // namespace blink
