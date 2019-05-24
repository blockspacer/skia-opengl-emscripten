// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_geometry_element.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_animated_number.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_point.h"
#include "third_party/blink/renderer/core/animation/element_animation.h"
#include "third_party/blink/renderer/core/css/cssom/element_computed_style_map.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/frame/dactyloscoper.h"
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
const WrapperTypeInfo v8_svg_geometry_element_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8SVGGeometryElement::DomTemplate,
    nullptr,
    "SVGGeometryElement",
    V8SVGGraphicsElement::GetWrapperTypeInfo(),
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kNodeClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in SVGGeometryElement.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& SVGGeometryElement::wrapper_type_info_ = v8_svg_geometry_element_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, SVGGeometryElement>::value,
    "SVGGeometryElement inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&SVGGeometryElement::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "SVGGeometryElement is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace svg_geometry_element_v8_internal {

static void PathLengthAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SVGGeometryElement* impl = V8SVGGeometryElement::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->pathLength()), impl);
}

static void IsPointInFillMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  SVGGeometryElement* impl = V8SVGGeometryElement::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isPointInFill", "SVGGeometryElement", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  SVGPointTearOff* point;
  point = V8SVGPoint::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!point) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isPointInFill", "SVGGeometryElement", "parameter 1 is not of type 'SVGPoint'."));
    return;
  }

  V8SetReturnValueBool(info, impl->isPointInFill(point));
}

static void IsPointInStrokeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  SVGGeometryElement* impl = V8SVGGeometryElement::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isPointInStroke", "SVGGeometryElement", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  SVGPointTearOff* point;
  point = V8SVGPoint::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!point) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isPointInStroke", "SVGGeometryElement", "parameter 1 is not of type 'SVGPoint'."));
    return;
  }

  V8SetReturnValueBool(info, impl->isPointInStroke(point));
}

static void GetTotalLengthMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  SVGGeometryElement* impl = V8SVGGeometryElement::ToImpl(info.Holder());

  V8SetReturnValue(info, impl->getTotalLength());
}

static void GetPointAtLengthMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "SVGGeometryElement", "getPointAtLength");

  SVGGeometryElement* impl = V8SVGGeometryElement::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  float distance;
  distance = NativeValueTraits<IDLFloat>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  V8SetReturnValueFast(info, impl->getPointAtLength(distance), impl);
}

}  // namespace svg_geometry_element_v8_internal

void V8SVGGeometryElement::PathLengthAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGGeometryElement_pathLength_Getter");

  svg_geometry_element_v8_internal::PathLengthAttributeGetter(info);
}

void V8SVGGeometryElement::IsPointInFillMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGGeometryElement_isPointInFill");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kV8SVGGeometryElement_IsPointInFill_Method);
  Dactyloscoper::Record(execution_context_for_measurement, WebFeature::kV8SVGGeometryElement_IsPointInFill_Method);
  svg_geometry_element_v8_internal::IsPointInFillMethod(info);
}

void V8SVGGeometryElement::IsPointInStrokeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGGeometryElement_isPointInStroke");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kV8SVGGeometryElement_IsPointInStroke_Method);
  Dactyloscoper::Record(execution_context_for_measurement, WebFeature::kV8SVGGeometryElement_IsPointInStroke_Method);
  svg_geometry_element_v8_internal::IsPointInStrokeMethod(info);
}

void V8SVGGeometryElement::GetTotalLengthMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGGeometryElement_getTotalLength");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kV8SVGGeometryElement_GetTotalLength_Method);
  Dactyloscoper::Record(execution_context_for_measurement, WebFeature::kV8SVGGeometryElement_GetTotalLength_Method);
  svg_geometry_element_v8_internal::GetTotalLengthMethod(info);
}

void V8SVGGeometryElement::GetPointAtLengthMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGGeometryElement_getPointAtLength");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kV8SVGGeometryElement_GetPointAtLength_Method);
  Dactyloscoper::Record(execution_context_for_measurement, WebFeature::kV8SVGGeometryElement_GetPointAtLength_Method);
  svg_geometry_element_v8_internal::GetPointAtLengthMethod(info);
}

static constexpr V8DOMConfiguration::AccessorConfiguration kV8SVGGeometryElementAccessors[] = {
    { "pathLength", V8SVGGeometryElement::PathLengthAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
};

static constexpr V8DOMConfiguration::MethodConfiguration kV8SVGGeometryElementMethods[] = {
    {"isPointInFill", V8SVGGeometryElement::IsPointInFillMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"isPointInStroke", V8SVGGeometryElement::IsPointInStrokeMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getTotalLength", V8SVGGeometryElement::GetTotalLengthMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getPointAtLength", V8SVGGeometryElement::GetPointAtLengthMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void InstallV8SVGGeometryElementTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8SVGGeometryElement::GetWrapperTypeInfo()->interface_name, V8SVGGraphicsElement::DomTemplate(isolate, world), V8SVGGeometryElement::kInternalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8SVGGeometryElementAccessors, base::size(kV8SVGGeometryElementAccessors));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8SVGGeometryElementMethods, base::size(kV8SVGGeometryElementMethods));

  // Custom signature

  V8SVGGeometryElement::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8SVGGeometryElement::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8SVGGeometryElement::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8SVGGeometryElement::GetWrapperTypeInfo()),
      InstallV8SVGGeometryElementTemplate);
}

bool V8SVGGeometryElement::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8SVGGeometryElement::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8SVGGeometryElement::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8SVGGeometryElement::GetWrapperTypeInfo(), v8_value);
}

SVGGeometryElement* V8SVGGeometryElement::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

SVGGeometryElement* NativeValueTraits<SVGGeometryElement>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  SVGGeometryElement* native_value = V8SVGGeometryElement::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "SVGGeometryElement"));
  }
  return native_value;
}

}  // namespace blink
