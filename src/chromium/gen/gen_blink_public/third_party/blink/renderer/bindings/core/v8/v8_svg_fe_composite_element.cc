// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_fe_composite_element.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_animated_enumeration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_animated_length.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_animated_number.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_animated_string.h"
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
const WrapperTypeInfo v8_svg_fe_composite_element_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8SVGFECompositeElement::DomTemplate,
    nullptr,
    "SVGFECompositeElement",
    V8SVGElement::GetWrapperTypeInfo(),
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kNodeClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in SVGFECompositeElement.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& SVGFECompositeElement::wrapper_type_info_ = v8_svg_fe_composite_element_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, SVGFECompositeElement>::value,
    "SVGFECompositeElement inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&SVGFECompositeElement::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "SVGFECompositeElement is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace svg_fe_composite_element_v8_internal {

static void In2AttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SVGFECompositeElement* impl = V8SVGFECompositeElement::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->in2()), impl);
}

static void In1AttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SVGFECompositeElement* impl = V8SVGFECompositeElement::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->in1()), impl);
}

static void OperatorAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SVGFECompositeElement* impl = V8SVGFECompositeElement::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->svgOperator()), impl);
}

static void K1AttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SVGFECompositeElement* impl = V8SVGFECompositeElement::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->k1()), impl);
}

static void K2AttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SVGFECompositeElement* impl = V8SVGFECompositeElement::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->k2()), impl);
}

static void K3AttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SVGFECompositeElement* impl = V8SVGFECompositeElement::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->k3()), impl);
}

static void K4AttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SVGFECompositeElement* impl = V8SVGFECompositeElement::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->k4()), impl);
}

static void XAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SVGFECompositeElement* impl = V8SVGFECompositeElement::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->x()), impl);
}

static void YAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SVGFECompositeElement* impl = V8SVGFECompositeElement::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->y()), impl);
}

static void WidthAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SVGFECompositeElement* impl = V8SVGFECompositeElement::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->width()), impl);
}

static void HeightAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SVGFECompositeElement* impl = V8SVGFECompositeElement::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->height()), impl);
}

static void ResultAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SVGFECompositeElement* impl = V8SVGFECompositeElement::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->result()), impl);
}

}  // namespace svg_fe_composite_element_v8_internal

void V8SVGFECompositeElement::SVGFECOMPOSITEOPERATORUNKNOWNConstantGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGFECompositeElement_SVG_FECOMPOSITE_OPERATOR_UNKNOWN_ConstantGetter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kSVG1DOMFilter);
  V8SetReturnValueInt(info, 0);
}

void V8SVGFECompositeElement::SVGFECOMPOSITEOPERATOROVERConstantGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGFECompositeElement_SVG_FECOMPOSITE_OPERATOR_OVER_ConstantGetter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kSVG1DOMFilter);
  V8SetReturnValueInt(info, 1);
}

void V8SVGFECompositeElement::SVGFECOMPOSITEOPERATORINConstantGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGFECompositeElement_SVG_FECOMPOSITE_OPERATOR_IN_ConstantGetter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kSVG1DOMFilter);
  V8SetReturnValueInt(info, 2);
}

void V8SVGFECompositeElement::SVGFECOMPOSITEOPERATOROUTConstantGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGFECompositeElement_SVG_FECOMPOSITE_OPERATOR_OUT_ConstantGetter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kSVG1DOMFilter);
  V8SetReturnValueInt(info, 3);
}

void V8SVGFECompositeElement::SVGFECOMPOSITEOPERATORATOPConstantGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGFECompositeElement_SVG_FECOMPOSITE_OPERATOR_ATOP_ConstantGetter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kSVG1DOMFilter);
  V8SetReturnValueInt(info, 4);
}

void V8SVGFECompositeElement::SVGFECOMPOSITEOPERATORXORConstantGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGFECompositeElement_SVG_FECOMPOSITE_OPERATOR_XOR_ConstantGetter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kSVG1DOMFilter);
  V8SetReturnValueInt(info, 5);
}

void V8SVGFECompositeElement::SVGFECOMPOSITEOPERATORARITHMETICConstantGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGFECompositeElement_SVG_FECOMPOSITE_OPERATOR_ARITHMETIC_ConstantGetter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kSVG1DOMFilter);
  V8SetReturnValueInt(info, 6);
}

void V8SVGFECompositeElement::In2AttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGFECompositeElement_in2_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kSVG1DOMFilter);

  svg_fe_composite_element_v8_internal::In2AttributeGetter(info);
}

void V8SVGFECompositeElement::In1AttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGFECompositeElement_in1_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kSVG1DOMFilter);

  svg_fe_composite_element_v8_internal::In1AttributeGetter(info);
}

void V8SVGFECompositeElement::OperatorAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGFECompositeElement_operator_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kSVG1DOMFilter);

  svg_fe_composite_element_v8_internal::OperatorAttributeGetter(info);
}

void V8SVGFECompositeElement::K1AttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGFECompositeElement_k1_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kSVG1DOMFilter);

  svg_fe_composite_element_v8_internal::K1AttributeGetter(info);
}

void V8SVGFECompositeElement::K2AttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGFECompositeElement_k2_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kSVG1DOMFilter);

  svg_fe_composite_element_v8_internal::K2AttributeGetter(info);
}

void V8SVGFECompositeElement::K3AttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGFECompositeElement_k3_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kSVG1DOMFilter);

  svg_fe_composite_element_v8_internal::K3AttributeGetter(info);
}

void V8SVGFECompositeElement::K4AttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGFECompositeElement_k4_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kSVG1DOMFilter);

  svg_fe_composite_element_v8_internal::K4AttributeGetter(info);
}

void V8SVGFECompositeElement::XAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGFECompositeElement_x_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kSVG1DOMFilter);

  svg_fe_composite_element_v8_internal::XAttributeGetter(info);
}

void V8SVGFECompositeElement::YAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGFECompositeElement_y_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kSVG1DOMFilter);

  svg_fe_composite_element_v8_internal::YAttributeGetter(info);
}

void V8SVGFECompositeElement::WidthAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGFECompositeElement_width_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kSVG1DOMFilter);

  svg_fe_composite_element_v8_internal::WidthAttributeGetter(info);
}

void V8SVGFECompositeElement::HeightAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGFECompositeElement_height_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kSVG1DOMFilter);

  svg_fe_composite_element_v8_internal::HeightAttributeGetter(info);
}

void V8SVGFECompositeElement::ResultAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGFECompositeElement_result_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kSVG1DOMFilter);

  svg_fe_composite_element_v8_internal::ResultAttributeGetter(info);
}

static constexpr V8DOMConfiguration::AccessorConfiguration kV8SVGFECompositeElementAccessors[] = {
    { "in2", V8SVGFECompositeElement::In2AttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "in1", V8SVGFECompositeElement::In1AttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "operator", V8SVGFECompositeElement::OperatorAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "k1", V8SVGFECompositeElement::K1AttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "k2", V8SVGFECompositeElement::K2AttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "k3", V8SVGFECompositeElement::K3AttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "k4", V8SVGFECompositeElement::K4AttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "x", V8SVGFECompositeElement::XAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "y", V8SVGFECompositeElement::YAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "width", V8SVGFECompositeElement::WidthAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "height", V8SVGFECompositeElement::HeightAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "result", V8SVGFECompositeElement::ResultAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
};

static void InstallV8SVGFECompositeElementTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8SVGFECompositeElement::GetWrapperTypeInfo()->interface_name, V8SVGElement::DomTemplate(isolate, world), V8SVGFECompositeElement::kInternalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallConstantWithGetter(
      isolate, interface_template, prototype_template,
      "SVG_FECOMPOSITE_OPERATOR_UNKNOWN", V8SVGFECompositeElement::SVGFECOMPOSITEOPERATORUNKNOWNConstantGetterCallback);
  V8DOMConfiguration::InstallConstantWithGetter(
      isolate, interface_template, prototype_template,
      "SVG_FECOMPOSITE_OPERATOR_OVER", V8SVGFECompositeElement::SVGFECOMPOSITEOPERATOROVERConstantGetterCallback);
  V8DOMConfiguration::InstallConstantWithGetter(
      isolate, interface_template, prototype_template,
      "SVG_FECOMPOSITE_OPERATOR_IN", V8SVGFECompositeElement::SVGFECOMPOSITEOPERATORINConstantGetterCallback);
  V8DOMConfiguration::InstallConstantWithGetter(
      isolate, interface_template, prototype_template,
      "SVG_FECOMPOSITE_OPERATOR_OUT", V8SVGFECompositeElement::SVGFECOMPOSITEOPERATOROUTConstantGetterCallback);
  V8DOMConfiguration::InstallConstantWithGetter(
      isolate, interface_template, prototype_template,
      "SVG_FECOMPOSITE_OPERATOR_ATOP", V8SVGFECompositeElement::SVGFECOMPOSITEOPERATORATOPConstantGetterCallback);
  V8DOMConfiguration::InstallConstantWithGetter(
      isolate, interface_template, prototype_template,
      "SVG_FECOMPOSITE_OPERATOR_XOR", V8SVGFECompositeElement::SVGFECOMPOSITEOPERATORXORConstantGetterCallback);
  V8DOMConfiguration::InstallConstantWithGetter(
      isolate, interface_template, prototype_template,
      "SVG_FECOMPOSITE_OPERATOR_ARITHMETIC", V8SVGFECompositeElement::SVGFECOMPOSITEOPERATORARITHMETICConstantGetterCallback);
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8SVGFECompositeElementAccessors, base::size(kV8SVGFECompositeElementAccessors));

  // Custom signature

  V8SVGFECompositeElement::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8SVGFECompositeElement::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8SVGFECompositeElement::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8SVGFECompositeElement::GetWrapperTypeInfo()),
      InstallV8SVGFECompositeElementTemplate);
}

bool V8SVGFECompositeElement::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8SVGFECompositeElement::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8SVGFECompositeElement::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8SVGFECompositeElement::GetWrapperTypeInfo(), v8_value);
}

SVGFECompositeElement* V8SVGFECompositeElement::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

SVGFECompositeElement* NativeValueTraits<SVGFECompositeElement>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  SVGFECompositeElement* native_value = V8SVGFECompositeElement::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "SVGFECompositeElement"));
  }
  return native_value;
}

}  // namespace blink
