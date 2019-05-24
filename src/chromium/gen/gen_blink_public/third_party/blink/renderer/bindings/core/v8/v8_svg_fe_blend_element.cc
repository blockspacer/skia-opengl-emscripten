// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_fe_blend_element.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_animated_enumeration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_animated_length.h"
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
const WrapperTypeInfo v8_svg_fe_blend_element_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8SVGFEBlendElement::DomTemplate,
    nullptr,
    "SVGFEBlendElement",
    V8SVGElement::GetWrapperTypeInfo(),
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kNodeClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in SVGFEBlendElement.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& SVGFEBlendElement::wrapper_type_info_ = v8_svg_fe_blend_element_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, SVGFEBlendElement>::value,
    "SVGFEBlendElement inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&SVGFEBlendElement::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "SVGFEBlendElement is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace svg_fe_blend_element_v8_internal {

static void In1AttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SVGFEBlendElement* impl = V8SVGFEBlendElement::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->in1()), impl);
}

static void In2AttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SVGFEBlendElement* impl = V8SVGFEBlendElement::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->in2()), impl);
}

static void ModeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SVGFEBlendElement* impl = V8SVGFEBlendElement::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->mode()), impl);
}

static void XAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SVGFEBlendElement* impl = V8SVGFEBlendElement::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->x()), impl);
}

static void YAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SVGFEBlendElement* impl = V8SVGFEBlendElement::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->y()), impl);
}

static void WidthAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SVGFEBlendElement* impl = V8SVGFEBlendElement::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->width()), impl);
}

static void HeightAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SVGFEBlendElement* impl = V8SVGFEBlendElement::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->height()), impl);
}

static void ResultAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SVGFEBlendElement* impl = V8SVGFEBlendElement::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->result()), impl);
}

}  // namespace svg_fe_blend_element_v8_internal

void V8SVGFEBlendElement::SVGFEBLENDMODEUNKNOWNConstantGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGFEBlendElement_SVG_FEBLEND_MODE_UNKNOWN_ConstantGetter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kSVG1DOMFilter);
  V8SetReturnValueInt(info, 0);
}

void V8SVGFEBlendElement::SVGFEBLENDMODENORMALConstantGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGFEBlendElement_SVG_FEBLEND_MODE_NORMAL_ConstantGetter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kSVG1DOMFilter);
  V8SetReturnValueInt(info, 1);
}

void V8SVGFEBlendElement::SVGFEBLENDMODEMULTIPLYConstantGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGFEBlendElement_SVG_FEBLEND_MODE_MULTIPLY_ConstantGetter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kSVG1DOMFilter);
  V8SetReturnValueInt(info, 2);
}

void V8SVGFEBlendElement::SVGFEBLENDMODESCREENConstantGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGFEBlendElement_SVG_FEBLEND_MODE_SCREEN_ConstantGetter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kSVG1DOMFilter);
  V8SetReturnValueInt(info, 3);
}

void V8SVGFEBlendElement::SVGFEBLENDMODEDARKENConstantGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGFEBlendElement_SVG_FEBLEND_MODE_DARKEN_ConstantGetter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kSVG1DOMFilter);
  V8SetReturnValueInt(info, 4);
}

void V8SVGFEBlendElement::SVGFEBLENDMODELIGHTENConstantGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGFEBlendElement_SVG_FEBLEND_MODE_LIGHTEN_ConstantGetter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kSVG1DOMFilter);
  V8SetReturnValueInt(info, 5);
}

void V8SVGFEBlendElement::SVGFEBLENDMODEOVERLAYConstantGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGFEBlendElement_SVG_FEBLEND_MODE_OVERLAY_ConstantGetter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kSVG1DOMFilter);
  V8SetReturnValueInt(info, 6);
}

void V8SVGFEBlendElement::SVGFEBLENDMODECOLORDODGEConstantGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGFEBlendElement_SVG_FEBLEND_MODE_COLOR_DODGE_ConstantGetter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kSVG1DOMFilter);
  V8SetReturnValueInt(info, 7);
}

void V8SVGFEBlendElement::SVGFEBLENDMODECOLORBURNConstantGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGFEBlendElement_SVG_FEBLEND_MODE_COLOR_BURN_ConstantGetter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kSVG1DOMFilter);
  V8SetReturnValueInt(info, 8);
}

void V8SVGFEBlendElement::SVGFEBLENDMODEHARDLIGHTConstantGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGFEBlendElement_SVG_FEBLEND_MODE_HARD_LIGHT_ConstantGetter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kSVG1DOMFilter);
  V8SetReturnValueInt(info, 9);
}

void V8SVGFEBlendElement::SVGFEBLENDMODESOFTLIGHTConstantGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGFEBlendElement_SVG_FEBLEND_MODE_SOFT_LIGHT_ConstantGetter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kSVG1DOMFilter);
  V8SetReturnValueInt(info, 10);
}

void V8SVGFEBlendElement::SVGFEBLENDMODEDIFFERENCEConstantGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGFEBlendElement_SVG_FEBLEND_MODE_DIFFERENCE_ConstantGetter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kSVG1DOMFilter);
  V8SetReturnValueInt(info, 11);
}

void V8SVGFEBlendElement::SVGFEBLENDMODEEXCLUSIONConstantGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGFEBlendElement_SVG_FEBLEND_MODE_EXCLUSION_ConstantGetter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kSVG1DOMFilter);
  V8SetReturnValueInt(info, 12);
}

void V8SVGFEBlendElement::SVGFEBLENDMODEHUEConstantGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGFEBlendElement_SVG_FEBLEND_MODE_HUE_ConstantGetter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kSVG1DOMFilter);
  V8SetReturnValueInt(info, 13);
}

void V8SVGFEBlendElement::SVGFEBLENDMODESATURATIONConstantGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGFEBlendElement_SVG_FEBLEND_MODE_SATURATION_ConstantGetter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kSVG1DOMFilter);
  V8SetReturnValueInt(info, 14);
}

void V8SVGFEBlendElement::SVGFEBLENDMODECOLORConstantGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGFEBlendElement_SVG_FEBLEND_MODE_COLOR_ConstantGetter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kSVG1DOMFilter);
  V8SetReturnValueInt(info, 15);
}

void V8SVGFEBlendElement::SVGFEBLENDMODELUMINOSITYConstantGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGFEBlendElement_SVG_FEBLEND_MODE_LUMINOSITY_ConstantGetter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kSVG1DOMFilter);
  V8SetReturnValueInt(info, 16);
}

void V8SVGFEBlendElement::In1AttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGFEBlendElement_in1_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kSVG1DOMFilter);

  svg_fe_blend_element_v8_internal::In1AttributeGetter(info);
}

void V8SVGFEBlendElement::In2AttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGFEBlendElement_in2_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kSVG1DOMFilter);

  svg_fe_blend_element_v8_internal::In2AttributeGetter(info);
}

void V8SVGFEBlendElement::ModeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGFEBlendElement_mode_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kSVG1DOMFilter);

  svg_fe_blend_element_v8_internal::ModeAttributeGetter(info);
}

void V8SVGFEBlendElement::XAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGFEBlendElement_x_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kSVG1DOMFilter);

  svg_fe_blend_element_v8_internal::XAttributeGetter(info);
}

void V8SVGFEBlendElement::YAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGFEBlendElement_y_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kSVG1DOMFilter);

  svg_fe_blend_element_v8_internal::YAttributeGetter(info);
}

void V8SVGFEBlendElement::WidthAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGFEBlendElement_width_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kSVG1DOMFilter);

  svg_fe_blend_element_v8_internal::WidthAttributeGetter(info);
}

void V8SVGFEBlendElement::HeightAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGFEBlendElement_height_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kSVG1DOMFilter);

  svg_fe_blend_element_v8_internal::HeightAttributeGetter(info);
}

void V8SVGFEBlendElement::ResultAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGFEBlendElement_result_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kSVG1DOMFilter);

  svg_fe_blend_element_v8_internal::ResultAttributeGetter(info);
}

static constexpr V8DOMConfiguration::AccessorConfiguration kV8SVGFEBlendElementAccessors[] = {
    { "in1", V8SVGFEBlendElement::In1AttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "in2", V8SVGFEBlendElement::In2AttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "mode", V8SVGFEBlendElement::ModeAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "x", V8SVGFEBlendElement::XAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "y", V8SVGFEBlendElement::YAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "width", V8SVGFEBlendElement::WidthAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "height", V8SVGFEBlendElement::HeightAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "result", V8SVGFEBlendElement::ResultAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
};

static void InstallV8SVGFEBlendElementTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8SVGFEBlendElement::GetWrapperTypeInfo()->interface_name, V8SVGElement::DomTemplate(isolate, world), V8SVGFEBlendElement::kInternalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallConstantWithGetter(
      isolate, interface_template, prototype_template,
      "SVG_FEBLEND_MODE_UNKNOWN", V8SVGFEBlendElement::SVGFEBLENDMODEUNKNOWNConstantGetterCallback);
  V8DOMConfiguration::InstallConstantWithGetter(
      isolate, interface_template, prototype_template,
      "SVG_FEBLEND_MODE_NORMAL", V8SVGFEBlendElement::SVGFEBLENDMODENORMALConstantGetterCallback);
  V8DOMConfiguration::InstallConstantWithGetter(
      isolate, interface_template, prototype_template,
      "SVG_FEBLEND_MODE_MULTIPLY", V8SVGFEBlendElement::SVGFEBLENDMODEMULTIPLYConstantGetterCallback);
  V8DOMConfiguration::InstallConstantWithGetter(
      isolate, interface_template, prototype_template,
      "SVG_FEBLEND_MODE_SCREEN", V8SVGFEBlendElement::SVGFEBLENDMODESCREENConstantGetterCallback);
  V8DOMConfiguration::InstallConstantWithGetter(
      isolate, interface_template, prototype_template,
      "SVG_FEBLEND_MODE_DARKEN", V8SVGFEBlendElement::SVGFEBLENDMODEDARKENConstantGetterCallback);
  V8DOMConfiguration::InstallConstantWithGetter(
      isolate, interface_template, prototype_template,
      "SVG_FEBLEND_MODE_LIGHTEN", V8SVGFEBlendElement::SVGFEBLENDMODELIGHTENConstantGetterCallback);
  V8DOMConfiguration::InstallConstantWithGetter(
      isolate, interface_template, prototype_template,
      "SVG_FEBLEND_MODE_OVERLAY", V8SVGFEBlendElement::SVGFEBLENDMODEOVERLAYConstantGetterCallback);
  V8DOMConfiguration::InstallConstantWithGetter(
      isolate, interface_template, prototype_template,
      "SVG_FEBLEND_MODE_COLOR_DODGE", V8SVGFEBlendElement::SVGFEBLENDMODECOLORDODGEConstantGetterCallback);
  V8DOMConfiguration::InstallConstantWithGetter(
      isolate, interface_template, prototype_template,
      "SVG_FEBLEND_MODE_COLOR_BURN", V8SVGFEBlendElement::SVGFEBLENDMODECOLORBURNConstantGetterCallback);
  V8DOMConfiguration::InstallConstantWithGetter(
      isolate, interface_template, prototype_template,
      "SVG_FEBLEND_MODE_HARD_LIGHT", V8SVGFEBlendElement::SVGFEBLENDMODEHARDLIGHTConstantGetterCallback);
  V8DOMConfiguration::InstallConstantWithGetter(
      isolate, interface_template, prototype_template,
      "SVG_FEBLEND_MODE_SOFT_LIGHT", V8SVGFEBlendElement::SVGFEBLENDMODESOFTLIGHTConstantGetterCallback);
  V8DOMConfiguration::InstallConstantWithGetter(
      isolate, interface_template, prototype_template,
      "SVG_FEBLEND_MODE_DIFFERENCE", V8SVGFEBlendElement::SVGFEBLENDMODEDIFFERENCEConstantGetterCallback);
  V8DOMConfiguration::InstallConstantWithGetter(
      isolate, interface_template, prototype_template,
      "SVG_FEBLEND_MODE_EXCLUSION", V8SVGFEBlendElement::SVGFEBLENDMODEEXCLUSIONConstantGetterCallback);
  V8DOMConfiguration::InstallConstantWithGetter(
      isolate, interface_template, prototype_template,
      "SVG_FEBLEND_MODE_HUE", V8SVGFEBlendElement::SVGFEBLENDMODEHUEConstantGetterCallback);
  V8DOMConfiguration::InstallConstantWithGetter(
      isolate, interface_template, prototype_template,
      "SVG_FEBLEND_MODE_SATURATION", V8SVGFEBlendElement::SVGFEBLENDMODESATURATIONConstantGetterCallback);
  V8DOMConfiguration::InstallConstantWithGetter(
      isolate, interface_template, prototype_template,
      "SVG_FEBLEND_MODE_COLOR", V8SVGFEBlendElement::SVGFEBLENDMODECOLORConstantGetterCallback);
  V8DOMConfiguration::InstallConstantWithGetter(
      isolate, interface_template, prototype_template,
      "SVG_FEBLEND_MODE_LUMINOSITY", V8SVGFEBlendElement::SVGFEBLENDMODELUMINOSITYConstantGetterCallback);
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8SVGFEBlendElementAccessors, base::size(kV8SVGFEBlendElementAccessors));

  // Custom signature

  V8SVGFEBlendElement::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8SVGFEBlendElement::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8SVGFEBlendElement::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8SVGFEBlendElement::GetWrapperTypeInfo()),
      InstallV8SVGFEBlendElementTemplate);
}

bool V8SVGFEBlendElement::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8SVGFEBlendElement::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8SVGFEBlendElement::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8SVGFEBlendElement::GetWrapperTypeInfo(), v8_value);
}

SVGFEBlendElement* V8SVGFEBlendElement::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

SVGFEBlendElement* NativeValueTraits<SVGFEBlendElement>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  SVGFEBlendElement* native_value = V8SVGFEBlendElement::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "SVGFEBlendElement"));
  }
  return native_value;
}

}  // namespace blink
