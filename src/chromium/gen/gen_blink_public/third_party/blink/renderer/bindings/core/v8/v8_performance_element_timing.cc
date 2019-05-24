// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_performance_element_timing.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/script_value.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_rect_read_only.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_element.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/platform/bindings/exception_messages.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
#include "third_party/blink/renderer/platform/bindings/script_state.h"
#include "third_party/blink/renderer/platform/bindings/v8_object_constructor.h"
#include "third_party/blink/renderer/platform/bindings/v8_private_property.h"
#include "third_party/blink/renderer/platform/scheduler/public/cooperative_scheduling_manager.h"
#include "third_party/blink/renderer/platform/wtf/get_ptr.h"

namespace blink {

// Suppress warning: global constructors, because struct WrapperTypeInfo is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
const WrapperTypeInfo v8_performance_element_timing_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8PerformanceElementTiming::DomTemplate,
    nullptr,
    "PerformanceElementTiming",
    V8PerformanceEntry::GetWrapperTypeInfo(),
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in PerformanceElementTiming.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& PerformanceElementTiming::wrapper_type_info_ = v8_performance_element_timing_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, PerformanceElementTiming>::value,
    "PerformanceElementTiming inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&PerformanceElementTiming::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "PerformanceElementTiming is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace performance_element_timing_v8_internal {

static void IntersectionRectAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  PerformanceElementTiming* impl = V8PerformanceElementTiming::ToImpl(holder);

  DOMRectReadOnly* cpp_value(WTF::GetPtr(impl->intersectionRect()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#PerformanceElementTiming#intersectionRect")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void ResponseEndAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  PerformanceElementTiming* impl = V8PerformanceElementTiming::ToImpl(holder);

  V8SetReturnValue(info, impl->responseEnd());
}

static void IdentifierAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  PerformanceElementTiming* impl = V8PerformanceElementTiming::ToImpl(holder);

  V8SetReturnValueString(info, impl->identifier(), info.GetIsolate());
}

static void NaturalWidthAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  PerformanceElementTiming* impl = V8PerformanceElementTiming::ToImpl(holder);

  V8SetReturnValueUnsigned(info, impl->naturalWidth());
}

static void NaturalHeightAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  PerformanceElementTiming* impl = V8PerformanceElementTiming::ToImpl(holder);

  V8SetReturnValueUnsigned(info, impl->naturalHeight());
}

static void IdAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  PerformanceElementTiming* impl = V8PerformanceElementTiming::ToImpl(holder);

  V8SetReturnValueString(info, impl->id(), info.GetIsolate());
}

static void ElementAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  PerformanceElementTiming* impl = V8PerformanceElementTiming::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->element()), impl);
}

static void ToJSONMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  PerformanceElementTiming* impl = V8PerformanceElementTiming::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  ScriptValue result = impl->toJSONForBinding(script_state);
  V8SetReturnValue(info, result.V8Value());
}

}  // namespace performance_element_timing_v8_internal

void V8PerformanceElementTiming::IntersectionRectAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PerformanceElementTiming_intersectionRect_Getter");

  performance_element_timing_v8_internal::IntersectionRectAttributeGetter(info);
}

void V8PerformanceElementTiming::ResponseEndAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PerformanceElementTiming_responseEnd_Getter");

  performance_element_timing_v8_internal::ResponseEndAttributeGetter(info);
}

void V8PerformanceElementTiming::IdentifierAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PerformanceElementTiming_identifier_Getter");

  performance_element_timing_v8_internal::IdentifierAttributeGetter(info);
}

void V8PerformanceElementTiming::NaturalWidthAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PerformanceElementTiming_naturalWidth_Getter");

  performance_element_timing_v8_internal::NaturalWidthAttributeGetter(info);
}

void V8PerformanceElementTiming::NaturalHeightAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PerformanceElementTiming_naturalHeight_Getter");

  performance_element_timing_v8_internal::NaturalHeightAttributeGetter(info);
}

void V8PerformanceElementTiming::IdAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PerformanceElementTiming_id_Getter");

  performance_element_timing_v8_internal::IdAttributeGetter(info);
}

void V8PerformanceElementTiming::ElementAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PerformanceElementTiming_element_Getter");

  performance_element_timing_v8_internal::ElementAttributeGetter(info);
}

void V8PerformanceElementTiming::ToJSONMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PerformanceElementTiming_toJSON");

  performance_element_timing_v8_internal::ToJSONMethod(info);
}

static constexpr V8DOMConfiguration::AccessorConfiguration kV8PerformanceElementTimingAccessors[] = {
    { "intersectionRect", V8PerformanceElementTiming::IntersectionRectAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "responseEnd", V8PerformanceElementTiming::ResponseEndAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "identifier", V8PerformanceElementTiming::IdentifierAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "naturalWidth", V8PerformanceElementTiming::NaturalWidthAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "naturalHeight", V8PerformanceElementTiming::NaturalHeightAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "id", V8PerformanceElementTiming::IdAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "element", V8PerformanceElementTiming::ElementAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
};

static constexpr V8DOMConfiguration::MethodConfiguration kV8PerformanceElementTimingMethods[] = {
    {"toJSON", V8PerformanceElementTiming::ToJSONMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void InstallV8PerformanceElementTimingTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8PerformanceElementTiming::GetWrapperTypeInfo()->interface_name, V8PerformanceEntry::DomTemplate(isolate, world), V8PerformanceElementTiming::kInternalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8PerformanceElementTimingAccessors, base::size(kV8PerformanceElementTimingAccessors));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8PerformanceElementTimingMethods, base::size(kV8PerformanceElementTimingMethods));

  // Custom signature

  V8PerformanceElementTiming::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8PerformanceElementTiming::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8PerformanceElementTiming::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8PerformanceElementTiming::GetWrapperTypeInfo()),
      InstallV8PerformanceElementTimingTemplate);
}

bool V8PerformanceElementTiming::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8PerformanceElementTiming::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8PerformanceElementTiming::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8PerformanceElementTiming::GetWrapperTypeInfo(), v8_value);
}

PerformanceElementTiming* V8PerformanceElementTiming::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

PerformanceElementTiming* NativeValueTraits<PerformanceElementTiming>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  PerformanceElementTiming* native_value = V8PerformanceElementTiming::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "PerformanceElementTiming"));
  }
  return native_value;
}

}  // namespace blink
