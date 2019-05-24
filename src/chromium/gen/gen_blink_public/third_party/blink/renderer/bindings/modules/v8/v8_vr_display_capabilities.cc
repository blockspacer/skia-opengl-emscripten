// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_vr_display_capabilities.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
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
const WrapperTypeInfo v8_vr_display_capabilities_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8VRDisplayCapabilities::DomTemplate,
    nullptr,
    "VRDisplayCapabilities",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in VRDisplayCapabilities.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& VRDisplayCapabilities::wrapper_type_info_ = v8_vr_display_capabilities_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, VRDisplayCapabilities>::value,
    "VRDisplayCapabilities inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&VRDisplayCapabilities::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "VRDisplayCapabilities is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace vr_display_capabilities_v8_internal {

static void HasPositionAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  VRDisplayCapabilities* impl = V8VRDisplayCapabilities::ToImpl(holder);

  V8SetReturnValueBool(info, impl->hasPosition());
}

static void HasExternalDisplayAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  VRDisplayCapabilities* impl = V8VRDisplayCapabilities::ToImpl(holder);

  V8SetReturnValueBool(info, impl->hasExternalDisplay());
}

static void CanPresentAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  VRDisplayCapabilities* impl = V8VRDisplayCapabilities::ToImpl(holder);

  V8SetReturnValueBool(info, impl->canPresent());
}

static void MaxLayersAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  VRDisplayCapabilities* impl = V8VRDisplayCapabilities::ToImpl(holder);

  V8SetReturnValueUnsigned(info, impl->maxLayers());
}

}  // namespace vr_display_capabilities_v8_internal

void V8VRDisplayCapabilities::HasPositionAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_VRDisplayCapabilities_hasPosition_Getter");

  vr_display_capabilities_v8_internal::HasPositionAttributeGetter(info);
}

void V8VRDisplayCapabilities::HasExternalDisplayAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_VRDisplayCapabilities_hasExternalDisplay_Getter");

  vr_display_capabilities_v8_internal::HasExternalDisplayAttributeGetter(info);
}

void V8VRDisplayCapabilities::CanPresentAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_VRDisplayCapabilities_canPresent_Getter");

  vr_display_capabilities_v8_internal::CanPresentAttributeGetter(info);
}

void V8VRDisplayCapabilities::MaxLayersAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_VRDisplayCapabilities_maxLayers_Getter");

  vr_display_capabilities_v8_internal::MaxLayersAttributeGetter(info);
}

static constexpr V8DOMConfiguration::AccessorConfiguration kV8VRDisplayCapabilitiesAccessors[] = {
    { "hasPosition", V8VRDisplayCapabilities::HasPositionAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "hasExternalDisplay", V8VRDisplayCapabilities::HasExternalDisplayAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "canPresent", V8VRDisplayCapabilities::CanPresentAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "maxLayers", V8VRDisplayCapabilities::MaxLayersAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
};

static void InstallV8VRDisplayCapabilitiesTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8VRDisplayCapabilities::GetWrapperTypeInfo()->interface_name, v8::Local<v8::FunctionTemplate>(), V8VRDisplayCapabilities::kInternalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8VRDisplayCapabilitiesAccessors, base::size(kV8VRDisplayCapabilitiesAccessors));

  // Custom signature

  V8VRDisplayCapabilities::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8VRDisplayCapabilities::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8VRDisplayCapabilities::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8VRDisplayCapabilities::GetWrapperTypeInfo()),
      InstallV8VRDisplayCapabilitiesTemplate);
}

bool V8VRDisplayCapabilities::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8VRDisplayCapabilities::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8VRDisplayCapabilities::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8VRDisplayCapabilities::GetWrapperTypeInfo(), v8_value);
}

VRDisplayCapabilities* V8VRDisplayCapabilities::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

VRDisplayCapabilities* NativeValueTraits<VRDisplayCapabilities>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  VRDisplayCapabilities* native_value = V8VRDisplayCapabilities::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "VRDisplayCapabilities"));
  }
  return native_value;
}

}  // namespace blink
