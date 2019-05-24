// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_svg_element.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_node_list.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_angle.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_animated_length.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_animated_preserve_aspect_ratio.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_animated_rect.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_length.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_matrix.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_number.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_point.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_rect.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_transform.h"
#include "third_party/blink/renderer/core/animation/element_animation.h"
#include "third_party/blink/renderer/core/css/cssom/element_computed_style_map.h"
#include "third_party/blink/renderer/core/dom/name_node_list.h"
#include "third_party/blink/renderer/core/dom/node_list.h"
#include "third_party/blink/renderer/core/dom/static_node_list.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/frame/use_counter.h"
#include "third_party/blink/renderer/core/fullscreen/element_fullscreen.h"
#include "third_party/blink/renderer/core/html/forms/labels_node_list.h"
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
const WrapperTypeInfo v8_svg_svg_element_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8SVGSVGElement::DomTemplate,
    nullptr,
    "SVGSVGElement",
    V8SVGGraphicsElement::GetWrapperTypeInfo(),
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kNodeClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in SVGSVGElement.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& SVGSVGElement::wrapper_type_info_ = v8_svg_svg_element_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, SVGSVGElement>::value,
    "SVGSVGElement inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&SVGSVGElement::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "SVGSVGElement is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace svg_svg_element_v8_internal {

static void XAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SVGSVGElement* impl = V8SVGSVGElement::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->x()), impl);
}

static void YAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SVGSVGElement* impl = V8SVGSVGElement::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->y()), impl);
}

static void WidthAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SVGSVGElement* impl = V8SVGSVGElement::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->width()), impl);
}

static void HeightAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SVGSVGElement* impl = V8SVGSVGElement::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->height()), impl);
}

static void CurrentScaleAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SVGSVGElement* impl = V8SVGSVGElement::ToImpl(holder);

  V8SetReturnValue(info, impl->currentScale());
}

static void CurrentScaleAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  SVGSVGElement* impl = V8SVGSVGElement::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "SVGSVGElement", "currentScale");

  // Prepare the value to be set.
  float cpp_value = NativeValueTraits<IDLFloat>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setCurrentScale(cpp_value);
}

static void CurrentTranslateAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SVGSVGElement* impl = V8SVGSVGElement::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->currentTranslateFromJavascript()), impl);
}

static void ViewBoxAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SVGSVGElement* impl = V8SVGSVGElement::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->viewBox()), impl);
}

static void PreserveAspectRatioAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SVGSVGElement* impl = V8SVGSVGElement::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->preserveAspectRatio()), impl);
}

static void ZoomAndPanAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SVGSVGElement* impl = V8SVGSVGElement::ToImpl(holder);

  V8SetReturnValueUnsigned(info, impl->zoomAndPan());
}

static void ZoomAndPanAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  SVGSVGElement* impl = V8SVGSVGElement::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "SVGSVGElement", "zoomAndPan");

  // Prepare the value to be set.
  uint16_t cpp_value = NativeValueTraits<IDLUnsignedShort>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setZoomAndPan(cpp_value, exception_state);
}

static void GetIntersectionListMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  SVGSVGElement* impl = V8SVGSVGElement::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getIntersectionList", "SVGSVGElement", ExceptionMessages::NotEnoughArguments(2, info.Length())));
    return;
  }

  SVGRectTearOff* rect;
  SVGElement* reference_element;
  rect = V8SVGRect::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!rect) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getIntersectionList", "SVGSVGElement", "parameter 1 is not of type 'SVGRect'."));
    return;
  }

  reference_element = V8SVGElement::ToImplWithTypeCheck(info.GetIsolate(), info[1]);
  if (!reference_element && !IsUndefinedOrNull(info[1])) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getIntersectionList", "SVGSVGElement", "parameter 2 is not of type 'SVGElement'."));
    return;
  }

  V8SetReturnValueFast(info, impl->getIntersectionList(rect, reference_element), impl);
}

static void GetEnclosureListMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  SVGSVGElement* impl = V8SVGSVGElement::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getEnclosureList", "SVGSVGElement", ExceptionMessages::NotEnoughArguments(2, info.Length())));
    return;
  }

  SVGRectTearOff* rect;
  SVGElement* reference_element;
  rect = V8SVGRect::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!rect) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getEnclosureList", "SVGSVGElement", "parameter 1 is not of type 'SVGRect'."));
    return;
  }

  reference_element = V8SVGElement::ToImplWithTypeCheck(info.GetIsolate(), info[1]);
  if (!reference_element && !IsUndefinedOrNull(info[1])) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getEnclosureList", "SVGSVGElement", "parameter 2 is not of type 'SVGElement'."));
    return;
  }

  V8SetReturnValueFast(info, impl->getEnclosureList(rect, reference_element), impl);
}

static void CheckIntersectionMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  SVGSVGElement* impl = V8SVGSVGElement::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("checkIntersection", "SVGSVGElement", ExceptionMessages::NotEnoughArguments(2, info.Length())));
    return;
  }

  SVGElement* element;
  SVGRectTearOff* rect;
  element = V8SVGElement::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!element) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("checkIntersection", "SVGSVGElement", "parameter 1 is not of type 'SVGElement'."));
    return;
  }

  rect = V8SVGRect::ToImplWithTypeCheck(info.GetIsolate(), info[1]);
  if (!rect) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("checkIntersection", "SVGSVGElement", "parameter 2 is not of type 'SVGRect'."));
    return;
  }

  V8SetReturnValueBool(info, impl->checkIntersection(element, rect));
}

static void CheckEnclosureMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  SVGSVGElement* impl = V8SVGSVGElement::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("checkEnclosure", "SVGSVGElement", ExceptionMessages::NotEnoughArguments(2, info.Length())));
    return;
  }

  SVGElement* element;
  SVGRectTearOff* rect;
  element = V8SVGElement::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!element) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("checkEnclosure", "SVGSVGElement", "parameter 1 is not of type 'SVGElement'."));
    return;
  }

  rect = V8SVGRect::ToImplWithTypeCheck(info.GetIsolate(), info[1]);
  if (!rect) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("checkEnclosure", "SVGSVGElement", "parameter 2 is not of type 'SVGRect'."));
    return;
  }

  V8SetReturnValueBool(info, impl->checkEnclosure(element, rect));
}

static void DeselectAllMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  SVGSVGElement* impl = V8SVGSVGElement::ToImpl(info.Holder());

  impl->deselectAll();
}

static void CreateSVGNumberMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  SVGSVGElement* impl = V8SVGSVGElement::ToImpl(info.Holder());

  V8SetReturnValueFast(info, impl->createSVGNumber(), impl);
}

static void CreateSVGLengthMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  SVGSVGElement* impl = V8SVGSVGElement::ToImpl(info.Holder());

  V8SetReturnValueFast(info, impl->createSVGLength(), impl);
}

static void CreateSVGAngleMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  SVGSVGElement* impl = V8SVGSVGElement::ToImpl(info.Holder());

  V8SetReturnValueFast(info, impl->createSVGAngle(), impl);
}

static void CreateSVGPointMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  SVGSVGElement* impl = V8SVGSVGElement::ToImpl(info.Holder());

  V8SetReturnValueFast(info, impl->createSVGPoint(), impl);
}

static void CreateSVGMatrixMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  SVGSVGElement* impl = V8SVGSVGElement::ToImpl(info.Holder());

  V8SetReturnValueFast(info, impl->createSVGMatrix(), impl);
}

static void CreateSVGRectMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  SVGSVGElement* impl = V8SVGSVGElement::ToImpl(info.Holder());

  V8SetReturnValueFast(info, impl->createSVGRect(), impl);
}

static void CreateSVGTransformMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  SVGSVGElement* impl = V8SVGSVGElement::ToImpl(info.Holder());

  V8SetReturnValueFast(info, impl->createSVGTransform(), impl);
}

static void CreateSVGTransformFromMatrixMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  SVGSVGElement* impl = V8SVGSVGElement::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("createSVGTransformFromMatrix", "SVGSVGElement", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  SVGMatrixTearOff* matrix;
  matrix = V8SVGMatrix::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!matrix) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("createSVGTransformFromMatrix", "SVGSVGElement", "parameter 1 is not of type 'SVGMatrix'."));
    return;
  }

  V8SetReturnValueFast(info, impl->createSVGTransformFromMatrix(matrix), impl);
}

static void GetElementByIdMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  SVGSVGElement* impl = V8SVGSVGElement::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getElementById", "SVGSVGElement", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  V8StringResource<> element_id;
  element_id = info[0];
  if (!element_id.Prepare())
    return;

  V8SetReturnValueFast(info, impl->getElementById(element_id), impl);
}

static void SuspendRedrawMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "SVGSVGElement", "suspendRedraw");

  SVGSVGElement* impl = V8SVGSVGElement::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  uint32_t max_wait_milliseconds;
  max_wait_milliseconds = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  V8SetReturnValueUnsigned(info, impl->suspendRedraw(max_wait_milliseconds));
}

static void UnsuspendRedrawMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "SVGSVGElement", "unsuspendRedraw");

  SVGSVGElement* impl = V8SVGSVGElement::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  uint32_t suspend_handle_id;
  suspend_handle_id = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  impl->unsuspendRedraw(suspend_handle_id);
}

static void UnsuspendRedrawAllMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  SVGSVGElement* impl = V8SVGSVGElement::ToImpl(info.Holder());

  impl->unsuspendRedrawAll();
}

static void ForceRedrawMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  SVGSVGElement* impl = V8SVGSVGElement::ToImpl(info.Holder());

  impl->forceRedraw();
}

static void PauseAnimationsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  SVGSVGElement* impl = V8SVGSVGElement::ToImpl(info.Holder());

  impl->pauseAnimations();
}

static void UnpauseAnimationsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  SVGSVGElement* impl = V8SVGSVGElement::ToImpl(info.Holder());

  impl->unpauseAnimations();
}

static void AnimationsPausedMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  SVGSVGElement* impl = V8SVGSVGElement::ToImpl(info.Holder());

  V8SetReturnValueBool(info, impl->animationsPaused());
}

static void GetCurrentTimeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  SVGSVGElement* impl = V8SVGSVGElement::ToImpl(info.Holder());

  V8SetReturnValue(info, impl->getCurrentTime());
}

static void SetCurrentTimeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "SVGSVGElement", "setCurrentTime");

  SVGSVGElement* impl = V8SVGSVGElement::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  float seconds;
  seconds = NativeValueTraits<IDLFloat>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  impl->setCurrentTime(seconds);
}

}  // namespace svg_svg_element_v8_internal

void V8SVGSVGElement::XAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGSVGElement_x_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kSVG1DOMSVGElement);

  svg_svg_element_v8_internal::XAttributeGetter(info);
}

void V8SVGSVGElement::YAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGSVGElement_y_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kSVG1DOMSVGElement);

  svg_svg_element_v8_internal::YAttributeGetter(info);
}

void V8SVGSVGElement::WidthAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGSVGElement_width_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kSVG1DOMSVGElement);

  svg_svg_element_v8_internal::WidthAttributeGetter(info);
}

void V8SVGSVGElement::HeightAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGSVGElement_height_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kSVG1DOMSVGElement);

  svg_svg_element_v8_internal::HeightAttributeGetter(info);
}

void V8SVGSVGElement::CurrentScaleAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGSVGElement_currentScale_Getter");

  svg_svg_element_v8_internal::CurrentScaleAttributeGetter(info);
}

void V8SVGSVGElement::CurrentScaleAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGSVGElement_currentScale_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  svg_svg_element_v8_internal::CurrentScaleAttributeSetter(v8_value, info);
}

void V8SVGSVGElement::CurrentTranslateAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGSVGElement_currentTranslate_Getter");

  svg_svg_element_v8_internal::CurrentTranslateAttributeGetter(info);
}

void V8SVGSVGElement::ViewBoxAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGSVGElement_viewBox_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kSVG1DOMFitToViewBox);

  svg_svg_element_v8_internal::ViewBoxAttributeGetter(info);
}

void V8SVGSVGElement::PreserveAspectRatioAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGSVGElement_preserveAspectRatio_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kSVG1DOMFitToViewBox);

  svg_svg_element_v8_internal::PreserveAspectRatioAttributeGetter(info);
}

void V8SVGSVGElement::ZoomAndPanAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGSVGElement_zoomAndPan_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kSVG1DOMZoomAndPan);

  svg_svg_element_v8_internal::ZoomAndPanAttributeGetter(info);
}

void V8SVGSVGElement::ZoomAndPanAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGSVGElement_zoomAndPan_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kSVG1DOMZoomAndPan);

  svg_svg_element_v8_internal::ZoomAndPanAttributeSetter(v8_value, info);
}

void V8SVGSVGElement::GetIntersectionListMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGSVGElement_getIntersectionList");

  svg_svg_element_v8_internal::GetIntersectionListMethod(info);
}

void V8SVGSVGElement::GetEnclosureListMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGSVGElement_getEnclosureList");

  svg_svg_element_v8_internal::GetEnclosureListMethod(info);
}

void V8SVGSVGElement::CheckIntersectionMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGSVGElement_checkIntersection");

  svg_svg_element_v8_internal::CheckIntersectionMethod(info);
}

void V8SVGSVGElement::CheckEnclosureMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGSVGElement_checkEnclosure");

  svg_svg_element_v8_internal::CheckEnclosureMethod(info);
}

void V8SVGSVGElement::DeselectAllMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGSVGElement_deselectAll");

  svg_svg_element_v8_internal::DeselectAllMethod(info);
}

void V8SVGSVGElement::CreateSVGNumberMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGSVGElement_createSVGNumber");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kV8SVGSVGElement_CreateSVGNumber_Method);
  svg_svg_element_v8_internal::CreateSVGNumberMethod(info);
}

void V8SVGSVGElement::CreateSVGLengthMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGSVGElement_createSVGLength");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kV8SVGSVGElement_CreateSVGLength_Method);
  svg_svg_element_v8_internal::CreateSVGLengthMethod(info);
}

void V8SVGSVGElement::CreateSVGAngleMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGSVGElement_createSVGAngle");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kV8SVGSVGElement_CreateSVGAngle_Method);
  svg_svg_element_v8_internal::CreateSVGAngleMethod(info);
}

void V8SVGSVGElement::CreateSVGPointMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGSVGElement_createSVGPoint");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kV8SVGSVGElement_CreateSVGPoint_Method);
  svg_svg_element_v8_internal::CreateSVGPointMethod(info);
}

void V8SVGSVGElement::CreateSVGMatrixMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGSVGElement_createSVGMatrix");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kV8SVGSVGElement_CreateSVGMatrix_Method);
  svg_svg_element_v8_internal::CreateSVGMatrixMethod(info);
}

void V8SVGSVGElement::CreateSVGRectMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGSVGElement_createSVGRect");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kV8SVGSVGElement_CreateSVGRect_Method);
  svg_svg_element_v8_internal::CreateSVGRectMethod(info);
}

void V8SVGSVGElement::CreateSVGTransformMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGSVGElement_createSVGTransform");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kV8SVGSVGElement_CreateSVGTransform_Method);
  svg_svg_element_v8_internal::CreateSVGTransformMethod(info);
}

void V8SVGSVGElement::CreateSVGTransformFromMatrixMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGSVGElement_createSVGTransformFromMatrix");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kV8SVGSVGElement_CreateSVGTransformFromMatrix_Method);
  svg_svg_element_v8_internal::CreateSVGTransformFromMatrixMethod(info);
}

void V8SVGSVGElement::GetElementByIdMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGSVGElement_getElementById");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kV8SVGSVGElement_GetElementById_Method);
  svg_svg_element_v8_internal::GetElementByIdMethod(info);
}

void V8SVGSVGElement::SuspendRedrawMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGSVGElement_suspendRedraw");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kSVGSVGElementSuspendRedraw);
  svg_svg_element_v8_internal::SuspendRedrawMethod(info);
}

void V8SVGSVGElement::UnsuspendRedrawMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGSVGElement_unsuspendRedraw");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kSVGSVGElementUnsuspendRedraw);
  svg_svg_element_v8_internal::UnsuspendRedrawMethod(info);
}

void V8SVGSVGElement::UnsuspendRedrawAllMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGSVGElement_unsuspendRedrawAll");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kSVGSVGElementUnsuspendRedrawAll);
  svg_svg_element_v8_internal::UnsuspendRedrawAllMethod(info);
}

void V8SVGSVGElement::ForceRedrawMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGSVGElement_forceRedraw");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kSVGSVGElementForceRedraw);
  svg_svg_element_v8_internal::ForceRedrawMethod(info);
}

void V8SVGSVGElement::PauseAnimationsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGSVGElement_pauseAnimations");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kSVGSMILPausing);
  svg_svg_element_v8_internal::PauseAnimationsMethod(info);
}

void V8SVGSVGElement::UnpauseAnimationsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGSVGElement_unpauseAnimations");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kSVGSMILPausing);
  svg_svg_element_v8_internal::UnpauseAnimationsMethod(info);
}

void V8SVGSVGElement::AnimationsPausedMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGSVGElement_animationsPaused");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kSVGSMILPausing);
  svg_svg_element_v8_internal::AnimationsPausedMethod(info);
}

void V8SVGSVGElement::GetCurrentTimeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGSVGElement_getCurrentTime");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kSVGSMILCurrentTime);
  svg_svg_element_v8_internal::GetCurrentTimeMethod(info);
}

void V8SVGSVGElement::SetCurrentTimeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGSVGElement_setCurrentTime");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kSVGSMILCurrentTime);
  svg_svg_element_v8_internal::SetCurrentTimeMethod(info);
}

static constexpr V8DOMConfiguration::AccessorConfiguration kV8SVGSVGElementAccessors[] = {
    { "x", V8SVGSVGElement::XAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "y", V8SVGSVGElement::YAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "width", V8SVGSVGElement::WidthAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "height", V8SVGSVGElement::HeightAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "currentScale", V8SVGSVGElement::CurrentScaleAttributeGetterCallback, V8SVGSVGElement::CurrentScaleAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "currentTranslate", V8SVGSVGElement::CurrentTranslateAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "viewBox", V8SVGSVGElement::ViewBoxAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "preserveAspectRatio", V8SVGSVGElement::PreserveAspectRatioAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "zoomAndPan", V8SVGSVGElement::ZoomAndPanAttributeGetterCallback, V8SVGSVGElement::ZoomAndPanAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
};

static constexpr V8DOMConfiguration::MethodConfiguration kV8SVGSVGElementMethods[] = {
    {"getIntersectionList", V8SVGSVGElement::GetIntersectionListMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getEnclosureList", V8SVGSVGElement::GetEnclosureListMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"checkIntersection", V8SVGSVGElement::CheckIntersectionMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"checkEnclosure", V8SVGSVGElement::CheckEnclosureMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"deselectAll", V8SVGSVGElement::DeselectAllMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createSVGNumber", V8SVGSVGElement::CreateSVGNumberMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createSVGLength", V8SVGSVGElement::CreateSVGLengthMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createSVGAngle", V8SVGSVGElement::CreateSVGAngleMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createSVGPoint", V8SVGSVGElement::CreateSVGPointMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createSVGMatrix", V8SVGSVGElement::CreateSVGMatrixMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createSVGRect", V8SVGSVGElement::CreateSVGRectMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createSVGTransform", V8SVGSVGElement::CreateSVGTransformMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createSVGTransformFromMatrix", V8SVGSVGElement::CreateSVGTransformFromMatrixMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getElementById", V8SVGSVGElement::GetElementByIdMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"suspendRedraw", V8SVGSVGElement::SuspendRedrawMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"unsuspendRedraw", V8SVGSVGElement::UnsuspendRedrawMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"unsuspendRedrawAll", V8SVGSVGElement::UnsuspendRedrawAllMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"forceRedraw", V8SVGSVGElement::ForceRedrawMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"pauseAnimations", V8SVGSVGElement::PauseAnimationsMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"unpauseAnimations", V8SVGSVGElement::UnpauseAnimationsMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"animationsPaused", V8SVGSVGElement::AnimationsPausedMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getCurrentTime", V8SVGSVGElement::GetCurrentTimeMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setCurrentTime", V8SVGSVGElement::SetCurrentTimeMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void InstallV8SVGSVGElementTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8SVGSVGElement::GetWrapperTypeInfo()->interface_name, V8SVGGraphicsElement::DomTemplate(isolate, world), V8SVGSVGElement::kInternalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.
  {
    static constexpr V8DOMConfiguration::ConstantConfiguration kConstants[] = {
        {"SVG_ZOOMANDPAN_UNKNOWN", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(0)},
        {"SVG_ZOOMANDPAN_DISABLE", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(1)},
        {"SVG_ZOOMANDPAN_MAGNIFY", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(2)},
    };
    V8DOMConfiguration::InstallConstants(
        isolate, interface_template, prototype_template,
        kConstants, base::size(kConstants));
  }
  static_assert(0 == SVGSVGElement::kSvgZoomandpanUnknown, "the value of SVGSVGElement_kSvgZoomandpanUnknown does not match with implementation");
  static_assert(1 == SVGSVGElement::kSvgZoomandpanDisable, "the value of SVGSVGElement_kSvgZoomandpanDisable does not match with implementation");
  static_assert(2 == SVGSVGElement::kSvgZoomandpanMagnify, "the value of SVGSVGElement_kSvgZoomandpanMagnify does not match with implementation");
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8SVGSVGElementAccessors, base::size(kV8SVGSVGElementAccessors));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8SVGSVGElementMethods, base::size(kV8SVGSVGElementMethods));

  // Custom signature

  V8SVGSVGElement::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8SVGSVGElement::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8SVGSVGElement::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8SVGSVGElement::GetWrapperTypeInfo()),
      InstallV8SVGSVGElementTemplate);
}

bool V8SVGSVGElement::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8SVGSVGElement::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8SVGSVGElement::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8SVGSVGElement::GetWrapperTypeInfo(), v8_value);
}

SVGSVGElement* V8SVGSVGElement::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

SVGSVGElement* NativeValueTraits<SVGSVGElement>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  SVGSVGElement* native_value = V8SVGSVGElement::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "SVGSVGElement"));
  }
  return native_value;
}

}  // namespace blink
