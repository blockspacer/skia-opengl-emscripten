// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_animated_number_list.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_number_list.h"
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
const WrapperTypeInfo v8_svg_animated_number_list_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8SVGAnimatedNumberList::DomTemplate,
    nullptr,
    "SVGAnimatedNumberList",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in SVGAnimatedNumberList.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& SVGAnimatedNumberList::wrapper_type_info_ = v8_svg_animated_number_list_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, SVGAnimatedNumberList>::value,
    "SVGAnimatedNumberList inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&SVGAnimatedNumberList::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "SVGAnimatedNumberList is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace svg_animated_number_list_v8_internal {

static void BaseValAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SVGAnimatedNumberList* impl = V8SVGAnimatedNumberList::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->baseVal()), impl);
}

static void AnimValAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SVGAnimatedNumberList* impl = V8SVGAnimatedNumberList::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->animVal()), impl);
}

}  // namespace svg_animated_number_list_v8_internal

void V8SVGAnimatedNumberList::BaseValAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGAnimatedNumberList_baseVal_Getter");

  svg_animated_number_list_v8_internal::BaseValAttributeGetter(info);
}

void V8SVGAnimatedNumberList::AnimValAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGAnimatedNumberList_animVal_Getter");

  svg_animated_number_list_v8_internal::AnimValAttributeGetter(info);
}

static constexpr V8DOMConfiguration::AccessorConfiguration kV8SVGAnimatedNumberListAccessors[] = {
    { "baseVal", V8SVGAnimatedNumberList::BaseValAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "animVal", V8SVGAnimatedNumberList::AnimValAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
};

static void InstallV8SVGAnimatedNumberListTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8SVGAnimatedNumberList::GetWrapperTypeInfo()->interface_name, v8::Local<v8::FunctionTemplate>(), V8SVGAnimatedNumberList::kInternalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8SVGAnimatedNumberListAccessors, base::size(kV8SVGAnimatedNumberListAccessors));

  // Custom signature

  V8SVGAnimatedNumberList::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8SVGAnimatedNumberList::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8SVGAnimatedNumberList::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8SVGAnimatedNumberList::GetWrapperTypeInfo()),
      InstallV8SVGAnimatedNumberListTemplate);
}

bool V8SVGAnimatedNumberList::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8SVGAnimatedNumberList::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8SVGAnimatedNumberList::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8SVGAnimatedNumberList::GetWrapperTypeInfo(), v8_value);
}

SVGAnimatedNumberList* V8SVGAnimatedNumberList::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

SVGAnimatedNumberList* NativeValueTraits<SVGAnimatedNumberList>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  SVGAnimatedNumberList* native_value = V8SVGAnimatedNumberList::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "SVGAnimatedNumberList"));
  }
  return native_value;
}

}  // namespace blink
