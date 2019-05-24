// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_graphics_element.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_animated_transform_list.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_matrix.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_rect.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_string_list.h"
#include "third_party/blink/renderer/core/animation/element_animation.h"
#include "third_party/blink/renderer/core/css/cssom/element_computed_style_map.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/frame/use_counter.h"
#include "third_party/blink/renderer/core/fullscreen/element_fullscreen.h"
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
const WrapperTypeInfo v8_svg_graphics_element_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8SVGGraphicsElement::DomTemplate,
    nullptr,
    "SVGGraphicsElement",
    V8SVGElement::GetWrapperTypeInfo(),
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kNodeClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in SVGGraphicsElement.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& SVGGraphicsElement::wrapper_type_info_ = v8_svg_graphics_element_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, SVGGraphicsElement>::value,
    "SVGGraphicsElement inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&SVGGraphicsElement::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "SVGGraphicsElement is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace svg_graphics_element_v8_internal {

static void TransformAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SVGGraphicsElement* impl = V8SVGGraphicsElement::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->transform()), impl);
}

static void NearestViewportElementAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SVGGraphicsElement* impl = V8SVGGraphicsElement::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->nearestViewportElement()), impl);
}

static void FarthestViewportElementAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SVGGraphicsElement* impl = V8SVGGraphicsElement::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->farthestViewportElement()), impl);
}

static void RequiredExtensionsAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SVGGraphicsElement* impl = V8SVGGraphicsElement::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->requiredExtensions()), impl);
}

static void SystemLanguageAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SVGGraphicsElement* impl = V8SVGGraphicsElement::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->systemLanguage()), impl);
}

static void GetBBoxMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  SVGGraphicsElement* impl = V8SVGGraphicsElement::ToImpl(info.Holder());

  V8SetReturnValueFast(info, impl->getBBoxFromJavascript(), impl);
}

static void GetCTMMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  SVGGraphicsElement* impl = V8SVGGraphicsElement::ToImpl(info.Holder());

  V8SetReturnValueFast(info, impl->getCTM(), impl);
}

static void GetScreenCTMMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  SVGGraphicsElement* impl = V8SVGGraphicsElement::ToImpl(info.Holder());

  V8SetReturnValueFast(info, impl->getScreenCTM(), impl);
}

}  // namespace svg_graphics_element_v8_internal

void V8SVGGraphicsElement::TransformAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGGraphicsElement_transform_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kV8SVGGraphicsElement_Transform_AttributeGetter);

  svg_graphics_element_v8_internal::TransformAttributeGetter(info);
}

void V8SVGGraphicsElement::NearestViewportElementAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGGraphicsElement_nearestViewportElement_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kSVGLocatableNearestViewportElement);

  svg_graphics_element_v8_internal::NearestViewportElementAttributeGetter(info);
}

void V8SVGGraphicsElement::FarthestViewportElementAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGGraphicsElement_farthestViewportElement_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kSVGLocatableFarthestViewportElement);

  svg_graphics_element_v8_internal::FarthestViewportElementAttributeGetter(info);
}

void V8SVGGraphicsElement::RequiredExtensionsAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGGraphicsElement_requiredExtensions_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kSVG1DOMSVGTests);

  svg_graphics_element_v8_internal::RequiredExtensionsAttributeGetter(info);
}

void V8SVGGraphicsElement::SystemLanguageAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGGraphicsElement_systemLanguage_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kSVG1DOMSVGTests);

  svg_graphics_element_v8_internal::SystemLanguageAttributeGetter(info);
}

void V8SVGGraphicsElement::GetBBoxMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGGraphicsElement_getBBox");

  svg_graphics_element_v8_internal::GetBBoxMethod(info);
}

void V8SVGGraphicsElement::GetCTMMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGGraphicsElement_getCTM");

  svg_graphics_element_v8_internal::GetCTMMethod(info);
}

void V8SVGGraphicsElement::GetScreenCTMMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGGraphicsElement_getScreenCTM");

  svg_graphics_element_v8_internal::GetScreenCTMMethod(info);
}

static constexpr V8DOMConfiguration::AccessorConfiguration kV8SVGGraphicsElementAccessors[] = {
    { "transform", V8SVGGraphicsElement::TransformAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "nearestViewportElement", V8SVGGraphicsElement::NearestViewportElementAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "farthestViewportElement", V8SVGGraphicsElement::FarthestViewportElementAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "requiredExtensions", V8SVGGraphicsElement::RequiredExtensionsAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "systemLanguage", V8SVGGraphicsElement::SystemLanguageAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
};

static constexpr V8DOMConfiguration::MethodConfiguration kV8SVGGraphicsElementMethods[] = {
    {"getBBox", V8SVGGraphicsElement::GetBBoxMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getCTM", V8SVGGraphicsElement::GetCTMMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getScreenCTM", V8SVGGraphicsElement::GetScreenCTMMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void InstallV8SVGGraphicsElementTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8SVGGraphicsElement::GetWrapperTypeInfo()->interface_name, V8SVGElement::DomTemplate(isolate, world), V8SVGGraphicsElement::kInternalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8SVGGraphicsElementAccessors, base::size(kV8SVGGraphicsElementAccessors));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8SVGGraphicsElementMethods, base::size(kV8SVGGraphicsElementMethods));

  // Custom signature

  V8SVGGraphicsElement::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8SVGGraphicsElement::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8SVGGraphicsElement::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8SVGGraphicsElement::GetWrapperTypeInfo()),
      InstallV8SVGGraphicsElementTemplate);
}

bool V8SVGGraphicsElement::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8SVGGraphicsElement::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8SVGGraphicsElement::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8SVGGraphicsElement::GetWrapperTypeInfo(), v8_value);
}

SVGGraphicsElement* V8SVGGraphicsElement::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

SVGGraphicsElement* NativeValueTraits<SVGGraphicsElement>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  SVGGraphicsElement* native_value = V8SVGGraphicsElement::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "SVGGraphicsElement"));
  }
  return native_value;
}

}  // namespace blink
