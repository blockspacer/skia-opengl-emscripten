// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_marker_element.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_angle.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_animated_angle.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_animated_enumeration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_animated_length.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_animated_preserve_aspect_ratio.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_animated_rect.h"
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
const WrapperTypeInfo v8_svg_marker_element_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8SVGMarkerElement::DomTemplate,
    nullptr,
    "SVGMarkerElement",
    V8SVGElement::GetWrapperTypeInfo(),
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kNodeClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in SVGMarkerElement.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& SVGMarkerElement::wrapper_type_info_ = v8_svg_marker_element_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, SVGMarkerElement>::value,
    "SVGMarkerElement inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&SVGMarkerElement::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "SVGMarkerElement is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace svg_marker_element_v8_internal {

static void RefXAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SVGMarkerElement* impl = V8SVGMarkerElement::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->refX()), impl);
}

static void RefYAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SVGMarkerElement* impl = V8SVGMarkerElement::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->refY()), impl);
}

static void MarkerUnitsAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SVGMarkerElement* impl = V8SVGMarkerElement::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->markerUnits()), impl);
}

static void MarkerWidthAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SVGMarkerElement* impl = V8SVGMarkerElement::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->markerWidth()), impl);
}

static void MarkerHeightAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SVGMarkerElement* impl = V8SVGMarkerElement::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->markerHeight()), impl);
}

static void OrientTypeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SVGMarkerElement* impl = V8SVGMarkerElement::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->orientType()), impl);
}

static void OrientAngleAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SVGMarkerElement* impl = V8SVGMarkerElement::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->orientAngle()), impl);
}

static void ViewBoxAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SVGMarkerElement* impl = V8SVGMarkerElement::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->viewBox()), impl);
}

static void PreserveAspectRatioAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SVGMarkerElement* impl = V8SVGMarkerElement::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->preserveAspectRatio()), impl);
}

static void SetOrientToAutoMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  SVGMarkerElement* impl = V8SVGMarkerElement::ToImpl(info.Holder());

  impl->setOrientToAuto();
}

static void SetOrientToAngleMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  SVGMarkerElement* impl = V8SVGMarkerElement::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("setOrientToAngle", "SVGMarkerElement", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  SVGAngleTearOff* angle;
  angle = V8SVGAngle::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!angle) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("setOrientToAngle", "SVGMarkerElement", "parameter 1 is not of type 'SVGAngle'."));
    return;
  }

  impl->setOrientToAngle(angle);
}

}  // namespace svg_marker_element_v8_internal

void V8SVGMarkerElement::RefXAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGMarkerElement_refX_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kSVG1DOMMarkerElement);

  svg_marker_element_v8_internal::RefXAttributeGetter(info);
}

void V8SVGMarkerElement::RefYAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGMarkerElement_refY_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kSVG1DOMMarkerElement);

  svg_marker_element_v8_internal::RefYAttributeGetter(info);
}

void V8SVGMarkerElement::MarkerUnitsAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGMarkerElement_markerUnits_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kSVG1DOMMarkerElement);

  svg_marker_element_v8_internal::MarkerUnitsAttributeGetter(info);
}

void V8SVGMarkerElement::MarkerWidthAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGMarkerElement_markerWidth_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kSVG1DOMMarkerElement);

  svg_marker_element_v8_internal::MarkerWidthAttributeGetter(info);
}

void V8SVGMarkerElement::MarkerHeightAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGMarkerElement_markerHeight_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kSVG1DOMMarkerElement);

  svg_marker_element_v8_internal::MarkerHeightAttributeGetter(info);
}

void V8SVGMarkerElement::OrientTypeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGMarkerElement_orientType_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kSVG1DOMMarkerElement);

  svg_marker_element_v8_internal::OrientTypeAttributeGetter(info);
}

void V8SVGMarkerElement::OrientAngleAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGMarkerElement_orientAngle_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kSVG1DOMMarkerElement);

  svg_marker_element_v8_internal::OrientAngleAttributeGetter(info);
}

void V8SVGMarkerElement::ViewBoxAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGMarkerElement_viewBox_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kSVG1DOMFitToViewBox);

  svg_marker_element_v8_internal::ViewBoxAttributeGetter(info);
}

void V8SVGMarkerElement::PreserveAspectRatioAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGMarkerElement_preserveAspectRatio_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kSVG1DOMFitToViewBox);

  svg_marker_element_v8_internal::PreserveAspectRatioAttributeGetter(info);
}

void V8SVGMarkerElement::SetOrientToAutoMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGMarkerElement_setOrientToAuto");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kSVG1DOMMarkerElement);
  svg_marker_element_v8_internal::SetOrientToAutoMethod(info);
}

void V8SVGMarkerElement::SetOrientToAngleMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGMarkerElement_setOrientToAngle");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kSVG1DOMMarkerElement);
  svg_marker_element_v8_internal::SetOrientToAngleMethod(info);
}

static constexpr V8DOMConfiguration::AccessorConfiguration kV8SVGMarkerElementAccessors[] = {
    { "refX", V8SVGMarkerElement::RefXAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "refY", V8SVGMarkerElement::RefYAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "markerUnits", V8SVGMarkerElement::MarkerUnitsAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "markerWidth", V8SVGMarkerElement::MarkerWidthAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "markerHeight", V8SVGMarkerElement::MarkerHeightAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "orientType", V8SVGMarkerElement::OrientTypeAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "orientAngle", V8SVGMarkerElement::OrientAngleAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "viewBox", V8SVGMarkerElement::ViewBoxAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "preserveAspectRatio", V8SVGMarkerElement::PreserveAspectRatioAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
};

static constexpr V8DOMConfiguration::MethodConfiguration kV8SVGMarkerElementMethods[] = {
    {"setOrientToAuto", V8SVGMarkerElement::SetOrientToAutoMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setOrientToAngle", V8SVGMarkerElement::SetOrientToAngleMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void InstallV8SVGMarkerElementTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8SVGMarkerElement::GetWrapperTypeInfo()->interface_name, V8SVGElement::DomTemplate(isolate, world), V8SVGMarkerElement::kInternalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.
  {
    static constexpr V8DOMConfiguration::ConstantConfiguration kConstants[] = {
        {"SVG_MARKERUNITS_UNKNOWN", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(0)},
        {"SVG_MARKERUNITS_USERSPACEONUSE", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(1)},
        {"SVG_MARKERUNITS_STROKEWIDTH", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(2)},
        {"SVG_MARKER_ORIENT_UNKNOWN", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(0)},
        {"SVG_MARKER_ORIENT_AUTO", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(1)},
        {"SVG_MARKER_ORIENT_ANGLE", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(2)},
    };
    V8DOMConfiguration::InstallConstants(
        isolate, interface_template, prototype_template,
        kConstants, base::size(kConstants));
  }
  static_assert(0 == SVGMarkerElement::kSvgMarkerunitsUnknown, "the value of SVGMarkerElement_kSvgMarkerunitsUnknown does not match with implementation");
  static_assert(1 == SVGMarkerElement::kSvgMarkerunitsUserspaceonuse, "the value of SVGMarkerElement_kSvgMarkerunitsUserspaceonuse does not match with implementation");
  static_assert(2 == SVGMarkerElement::kSvgMarkerunitsStrokewidth, "the value of SVGMarkerElement_kSvgMarkerunitsStrokewidth does not match with implementation");
  static_assert(0 == SVGMarkerElement::kSvgMarkerOrientUnknown, "the value of SVGMarkerElement_kSvgMarkerOrientUnknown does not match with implementation");
  static_assert(1 == SVGMarkerElement::kSvgMarkerOrientAuto, "the value of SVGMarkerElement_kSvgMarkerOrientAuto does not match with implementation");
  static_assert(2 == SVGMarkerElement::kSvgMarkerOrientAngle, "the value of SVGMarkerElement_kSvgMarkerOrientAngle does not match with implementation");
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8SVGMarkerElementAccessors, base::size(kV8SVGMarkerElementAccessors));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8SVGMarkerElementMethods, base::size(kV8SVGMarkerElementMethods));

  // Custom signature

  V8SVGMarkerElement::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8SVGMarkerElement::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8SVGMarkerElement::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8SVGMarkerElement::GetWrapperTypeInfo()),
      InstallV8SVGMarkerElementTemplate);
}

bool V8SVGMarkerElement::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8SVGMarkerElement::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8SVGMarkerElement::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8SVGMarkerElement::GetWrapperTypeInfo(), v8_value);
}

SVGMarkerElement* V8SVGMarkerElement::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

SVGMarkerElement* NativeValueTraits<SVGMarkerElement>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  SVGMarkerElement* native_value = V8SVGMarkerElement::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "SVGMarkerElement"));
  }
  return native_value;
}

}  // namespace blink
