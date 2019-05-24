// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_performance_navigation.h"

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
const WrapperTypeInfo v8_performance_navigation_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8PerformanceNavigation::DomTemplate,
    nullptr,
    "PerformanceNavigation",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in PerformanceNavigation.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& PerformanceNavigation::wrapper_type_info_ = v8_performance_navigation_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, PerformanceNavigation>::value,
    "PerformanceNavigation inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&PerformanceNavigation::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "PerformanceNavigation is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace performance_navigation_v8_internal {

static void TypeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  PerformanceNavigation* impl = V8PerformanceNavigation::ToImpl(holder);

  V8SetReturnValueUnsigned(info, impl->type());
}

static void RedirectCountAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  PerformanceNavigation* impl = V8PerformanceNavigation::ToImpl(holder);

  V8SetReturnValueUnsigned(info, impl->redirectCount());
}

static void ToJSONMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  PerformanceNavigation* impl = V8PerformanceNavigation::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  ScriptValue result = impl->toJSONForBinding(script_state);
  V8SetReturnValue(info, result.V8Value());
}

}  // namespace performance_navigation_v8_internal

void V8PerformanceNavigation::TypeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PerformanceNavigation_type_Getter");

  performance_navigation_v8_internal::TypeAttributeGetter(info);
}

void V8PerformanceNavigation::RedirectCountAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PerformanceNavigation_redirectCount_Getter");

  performance_navigation_v8_internal::RedirectCountAttributeGetter(info);
}

void V8PerformanceNavigation::ToJSONMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PerformanceNavigation_toJSON");

  performance_navigation_v8_internal::ToJSONMethod(info);
}

static constexpr V8DOMConfiguration::AccessorConfiguration kV8PerformanceNavigationAccessors[] = {
    { "type", V8PerformanceNavigation::TypeAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "redirectCount", V8PerformanceNavigation::RedirectCountAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
};

static constexpr V8DOMConfiguration::MethodConfiguration kV8PerformanceNavigationMethods[] = {
    {"toJSON", V8PerformanceNavigation::ToJSONMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void InstallV8PerformanceNavigationTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8PerformanceNavigation::GetWrapperTypeInfo()->interface_name, v8::Local<v8::FunctionTemplate>(), V8PerformanceNavigation::kInternalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.
  {
    static constexpr V8DOMConfiguration::ConstantConfiguration kConstants[] = {
        {"TYPE_NAVIGATE", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(0)},
        {"TYPE_RELOAD", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(1)},
        {"TYPE_BACK_FORWARD", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(2)},
        {"TYPE_RESERVED", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(255)},
    };
    V8DOMConfiguration::InstallConstants(
        isolate, interface_template, prototype_template,
        kConstants, base::size(kConstants));
  }
  static_assert(0 == PerformanceNavigation::kTypeNavigate, "the value of PerformanceNavigation_kTypeNavigate does not match with implementation");
  static_assert(1 == PerformanceNavigation::kTypeReload, "the value of PerformanceNavigation_kTypeReload does not match with implementation");
  static_assert(2 == PerformanceNavigation::kTypeBackForward, "the value of PerformanceNavigation_kTypeBackForward does not match with implementation");
  static_assert(255 == PerformanceNavigation::kTypeReserved, "the value of PerformanceNavigation_kTypeReserved does not match with implementation");
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8PerformanceNavigationAccessors, base::size(kV8PerformanceNavigationAccessors));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8PerformanceNavigationMethods, base::size(kV8PerformanceNavigationMethods));

  // Custom signature

  V8PerformanceNavigation::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8PerformanceNavigation::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8PerformanceNavigation::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8PerformanceNavigation::GetWrapperTypeInfo()),
      InstallV8PerformanceNavigationTemplate);
}

bool V8PerformanceNavigation::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8PerformanceNavigation::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8PerformanceNavigation::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8PerformanceNavigation::GetWrapperTypeInfo(), v8_value);
}

PerformanceNavigation* V8PerformanceNavigation::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

PerformanceNavigation* NativeValueTraits<PerformanceNavigation>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  PerformanceNavigation* native_value = V8PerformanceNavigation::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "PerformanceNavigation"));
  }
  return native_value;
}

}  // namespace blink
