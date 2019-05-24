// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_paint_rendering_context_2d.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_image_value.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_matrix.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_matrix_2d_init.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_canvas_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_image_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_video_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_image_bitmap.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_offscreen_canvas.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_image_element.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_canvas_gradient.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_canvas_pattern.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_path_2d.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/frame/dactyloscoper.h"
#include "third_party/blink/renderer/core/frame/use_counter.h"
#include "third_party/blink/renderer/core/inspector/console_message.h"
#include "third_party/blink/renderer/platform/bindings/exception_messages.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
#include "third_party/blink/renderer/platform/bindings/script_state.h"
#include "third_party/blink/renderer/platform/bindings/v8_object_constructor.h"
#include "third_party/blink/renderer/platform/runtime_enabled_features.h"
#include "third_party/blink/renderer/platform/scheduler/public/cooperative_scheduling_manager.h"
#include "third_party/blink/renderer/platform/wtf/get_ptr.h"

namespace blink {

// Suppress warning: global constructors, because struct WrapperTypeInfo is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
const WrapperTypeInfo v8_paint_rendering_context_2d_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8PaintRenderingContext2D::DomTemplate,
    nullptr,
    "PaintRenderingContext2D",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in PaintRenderingContext2D.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& PaintRenderingContext2D::wrapper_type_info_ = v8_paint_rendering_context_2d_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, PaintRenderingContext2D>::value,
    "PaintRenderingContext2D inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&PaintRenderingContext2D::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "PaintRenderingContext2D is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace paint_rendering_context_2d_v8_internal {

static void GlobalAlphaAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  PaintRenderingContext2D* impl = V8PaintRenderingContext2D::ToImpl(holder);

  V8SetReturnValue(info, impl->globalAlpha());
}

static void GlobalAlphaAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  PaintRenderingContext2D* impl = V8PaintRenderingContext2D::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "PaintRenderingContext2D", "globalAlpha");

  // Prepare the value to be set.
  double cpp_value = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setGlobalAlpha(cpp_value);
}

static void GlobalCompositeOperationAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  PaintRenderingContext2D* impl = V8PaintRenderingContext2D::ToImpl(holder);

  V8SetReturnValueString(info, impl->globalCompositeOperation(), info.GetIsolate());
}

static void GlobalCompositeOperationAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  PaintRenderingContext2D* impl = V8PaintRenderingContext2D::ToImpl(holder);

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setGlobalCompositeOperation(cpp_value);
}

static void FilterAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  PaintRenderingContext2D* impl = V8PaintRenderingContext2D::ToImpl(holder);

  V8SetReturnValueString(info, impl->filter(), info.GetIsolate());
}

static void FilterAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  PaintRenderingContext2D* impl = V8PaintRenderingContext2D::ToImpl(holder);

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  ExecutionContext* execution_context = ExecutionContext::ForRelevantRealm(info);

  impl->setFilter(execution_context, cpp_value);
}

static void ImageSmoothingEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  PaintRenderingContext2D* impl = V8PaintRenderingContext2D::ToImpl(holder);

  V8SetReturnValueBool(info, impl->imageSmoothingEnabled());
}

static void ImageSmoothingEnabledAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  PaintRenderingContext2D* impl = V8PaintRenderingContext2D::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "PaintRenderingContext2D", "imageSmoothingEnabled");

  // Prepare the value to be set.
  bool cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setImageSmoothingEnabled(cpp_value);
}

static void ImageSmoothingQualityAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  PaintRenderingContext2D* impl = V8PaintRenderingContext2D::ToImpl(holder);

  V8SetReturnValueString(info, impl->imageSmoothingQuality(), info.GetIsolate());
}

static void ImageSmoothingQualityAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  PaintRenderingContext2D* impl = V8PaintRenderingContext2D::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "PaintRenderingContext2D", "imageSmoothingQuality");

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  // Type check per: http://heycam.github.io/webidl/#dfn-attribute-setter
  // Returns undefined without setting the value if the value is invalid.
  DummyExceptionStateForTesting dummy_exception_state;
  {
    const char* kValidValues[] = {
      "low",
      "medium",
      "high",
  };
    if (!IsValidEnum(cpp_value, kValidValues, base::size(kValidValues),
                     "ImageSmoothingQuality", dummy_exception_state)) {
      ExecutionContext::ForCurrentRealm(info)->AddConsoleMessage(
          ConsoleMessage::Create(mojom::ConsoleMessageSource::kJavaScript,
                                 mojom::ConsoleMessageLevel::kWarning,
                                 dummy_exception_state.Message()));
      return;
    }
  }

  impl->setImageSmoothingQuality(cpp_value);
}

static void StrokeStyleAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  PaintRenderingContext2D* impl = V8PaintRenderingContext2D::ToImpl(holder);

  StringOrCanvasGradientOrCanvasPattern result;
  impl->strokeStyle(result);

  V8SetReturnValue(info, result);
}

static void StrokeStyleAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  PaintRenderingContext2D* impl = V8PaintRenderingContext2D::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "PaintRenderingContext2D", "strokeStyle");

  // Prepare the value to be set.
  StringOrCanvasGradientOrCanvasPattern cpp_value;
  V8StringOrCanvasGradientOrCanvasPattern::ToImpl(info.GetIsolate(), v8_value, cpp_value, UnionTypeConversionMode::kNotNullable, exception_state);
  if (exception_state.HadException())
    return;

  impl->setStrokeStyle(cpp_value);
}

static void FillStyleAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  PaintRenderingContext2D* impl = V8PaintRenderingContext2D::ToImpl(holder);

  StringOrCanvasGradientOrCanvasPattern result;
  impl->fillStyle(result);

  V8SetReturnValue(info, result);
}

static void FillStyleAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  PaintRenderingContext2D* impl = V8PaintRenderingContext2D::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "PaintRenderingContext2D", "fillStyle");

  // Prepare the value to be set.
  StringOrCanvasGradientOrCanvasPattern cpp_value;
  V8StringOrCanvasGradientOrCanvasPattern::ToImpl(info.GetIsolate(), v8_value, cpp_value, UnionTypeConversionMode::kNotNullable, exception_state);
  if (exception_state.HadException())
    return;

  impl->setFillStyle(cpp_value);
}

static void ShadowOffsetXAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  PaintRenderingContext2D* impl = V8PaintRenderingContext2D::ToImpl(holder);

  V8SetReturnValue(info, impl->shadowOffsetX());
}

static void ShadowOffsetXAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  PaintRenderingContext2D* impl = V8PaintRenderingContext2D::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "PaintRenderingContext2D", "shadowOffsetX");

  // Prepare the value to be set.
  double cpp_value = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setShadowOffsetX(cpp_value);
}

static void ShadowOffsetYAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  PaintRenderingContext2D* impl = V8PaintRenderingContext2D::ToImpl(holder);

  V8SetReturnValue(info, impl->shadowOffsetY());
}

static void ShadowOffsetYAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  PaintRenderingContext2D* impl = V8PaintRenderingContext2D::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "PaintRenderingContext2D", "shadowOffsetY");

  // Prepare the value to be set.
  double cpp_value = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setShadowOffsetY(cpp_value);
}

static void ShadowBlurAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  PaintRenderingContext2D* impl = V8PaintRenderingContext2D::ToImpl(holder);

  V8SetReturnValue(info, impl->shadowBlur());
}

static void ShadowBlurAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  PaintRenderingContext2D* impl = V8PaintRenderingContext2D::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "PaintRenderingContext2D", "shadowBlur");

  // Prepare the value to be set.
  double cpp_value = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setShadowBlur(cpp_value);
}

static void ShadowColorAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  PaintRenderingContext2D* impl = V8PaintRenderingContext2D::ToImpl(holder);

  V8SetReturnValueString(info, impl->shadowColor(), info.GetIsolate());
}

static void ShadowColorAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  PaintRenderingContext2D* impl = V8PaintRenderingContext2D::ToImpl(holder);

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setShadowColor(cpp_value);
}

static void LineWidthAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  PaintRenderingContext2D* impl = V8PaintRenderingContext2D::ToImpl(holder);

  V8SetReturnValue(info, impl->lineWidth());
}

static void LineWidthAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  PaintRenderingContext2D* impl = V8PaintRenderingContext2D::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "PaintRenderingContext2D", "lineWidth");

  // Prepare the value to be set.
  double cpp_value = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setLineWidth(cpp_value);
}

static void LineCapAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  PaintRenderingContext2D* impl = V8PaintRenderingContext2D::ToImpl(holder);

  V8SetReturnValueString(info, impl->lineCap(), info.GetIsolate());
}

static void LineCapAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  PaintRenderingContext2D* impl = V8PaintRenderingContext2D::ToImpl(holder);

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setLineCap(cpp_value);
}

static void LineJoinAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  PaintRenderingContext2D* impl = V8PaintRenderingContext2D::ToImpl(holder);

  V8SetReturnValueString(info, impl->lineJoin(), info.GetIsolate());
}

static void LineJoinAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  PaintRenderingContext2D* impl = V8PaintRenderingContext2D::ToImpl(holder);

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setLineJoin(cpp_value);
}

static void MiterLimitAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  PaintRenderingContext2D* impl = V8PaintRenderingContext2D::ToImpl(holder);

  V8SetReturnValue(info, impl->miterLimit());
}

static void MiterLimitAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  PaintRenderingContext2D* impl = V8PaintRenderingContext2D::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "PaintRenderingContext2D", "miterLimit");

  // Prepare the value to be set.
  double cpp_value = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setMiterLimit(cpp_value);
}

static void LineDashOffsetAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  PaintRenderingContext2D* impl = V8PaintRenderingContext2D::ToImpl(holder);

  V8SetReturnValue(info, impl->lineDashOffset());
}

static void LineDashOffsetAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  PaintRenderingContext2D* impl = V8PaintRenderingContext2D::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "PaintRenderingContext2D", "lineDashOffset");

  // Prepare the value to be set.
  double cpp_value = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setLineDashOffset(cpp_value);
}

static void SaveMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  PaintRenderingContext2D* impl = V8PaintRenderingContext2D::ToImpl(info.Holder());

  impl->save();
}

static void RestoreMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  PaintRenderingContext2D* impl = V8PaintRenderingContext2D::ToImpl(info.Holder());

  impl->restore();
}

static void ScaleMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "PaintRenderingContext2D", "scale");

  PaintRenderingContext2D* impl = V8PaintRenderingContext2D::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  double x;
  double y;
  x = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  y = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  impl->scale(x, y);
}

static void RotateMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "PaintRenderingContext2D", "rotate");

  PaintRenderingContext2D* impl = V8PaintRenderingContext2D::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  double angle;
  angle = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  impl->rotate(angle);
}

static void TranslateMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "PaintRenderingContext2D", "translate");

  PaintRenderingContext2D* impl = V8PaintRenderingContext2D::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  double x;
  double y;
  x = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  y = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  impl->translate(x, y);
}

static void TransformMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "PaintRenderingContext2D", "transform");

  PaintRenderingContext2D* impl = V8PaintRenderingContext2D::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 6)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(6, info.Length()));
    return;
  }

  double a;
  double b;
  double c;
  double d;
  double e;
  double f;
  a = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  b = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  c = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  d = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[3], exception_state);
  if (exception_state.HadException())
    return;

  e = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[4], exception_state);
  if (exception_state.HadException())
    return;

  f = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[5], exception_state);
  if (exception_state.HadException())
    return;

  impl->transform(a, b, c, d, e, f);
}

static void SetTransform1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "PaintRenderingContext2D", "setTransform");

  PaintRenderingContext2D* impl = V8PaintRenderingContext2D::ToImpl(info.Holder());

  double a;
  double b;
  double c;
  double d;
  double e;
  double f;
  a = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  b = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  c = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  d = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[3], exception_state);
  if (exception_state.HadException())
    return;

  e = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[4], exception_state);
  if (exception_state.HadException())
    return;

  f = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[5], exception_state);
  if (exception_state.HadException())
    return;

  impl->setTransform(a, b, c, d, e, f);
}

static void ResetTransformMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  PaintRenderingContext2D* impl = V8PaintRenderingContext2D::ToImpl(info.Holder());

  impl->resetTransform();
}

static void SetTransform2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "PaintRenderingContext2D", "setTransform");

  PaintRenderingContext2D* impl = V8PaintRenderingContext2D::ToImpl(info.Holder());

  DOMMatrix2DInit* transform;
  if (!info[0]->IsNullOrUndefined() && !info[0]->IsObject()) {
    exception_state.ThrowTypeError("parameter 1 ('transform') is not an object.");
    return;
  }
  transform = NativeValueTraits<DOMMatrix2DInit>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  impl->setTransform(transform, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void SetTransformMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  scheduler::CooperativeSchedulingManager::Instance()->Safepoint();

  bool is_arity_error = false;

  switch (std::min(6, info.Length())) {
    case 0:
      if (true) {
        SetTransform2Method(info);
        return;
      }
      break;
    case 1:
      if (true) {
        SetTransform2Method(info);
        return;
      }
      break;
    case 6:
      if (true) {
        SetTransform1Method(info);
        return;
      }
      break;
    default:
      is_arity_error = true;
  }

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "PaintRenderingContext2D", "setTransform");
  if (is_arity_error) {
    if (info.Length() >= 0) {
      exception_state.ThrowTypeError(ExceptionMessages::InvalidArity("[0, 1, 6]", info.Length()));
      return;
    }
  }
  exception_state.ThrowTypeError("No function was found that matched the signature provided.");
}

static void GetTransformMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  PaintRenderingContext2D* impl = V8PaintRenderingContext2D::ToImpl(info.Holder());

  V8SetReturnValue(info, impl->getTransform());
}

static void CreateLinearGradientMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "PaintRenderingContext2D", "createLinearGradient");

  PaintRenderingContext2D* impl = V8PaintRenderingContext2D::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 4)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(4, info.Length()));
    return;
  }

  double x_0;
  double y_0;
  double x_1;
  double y_1;
  x_0 = NativeValueTraits<IDLDouble>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  y_0 = NativeValueTraits<IDLDouble>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  x_1 = NativeValueTraits<IDLDouble>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  y_1 = NativeValueTraits<IDLDouble>::NativeValue(info.GetIsolate(), info[3], exception_state);
  if (exception_state.HadException())
    return;

  V8SetReturnValue(info, impl->createLinearGradient(x_0, y_0, x_1, y_1));
}

static void CreateRadialGradientMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "PaintRenderingContext2D", "createRadialGradient");

  PaintRenderingContext2D* impl = V8PaintRenderingContext2D::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 6)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(6, info.Length()));
    return;
  }

  double x_0;
  double y_0;
  double r_0;
  double x_1;
  double y_1;
  double r_1;
  x_0 = NativeValueTraits<IDLDouble>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  y_0 = NativeValueTraits<IDLDouble>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  r_0 = NativeValueTraits<IDLDouble>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  x_1 = NativeValueTraits<IDLDouble>::NativeValue(info.GetIsolate(), info[3], exception_state);
  if (exception_state.HadException())
    return;

  y_1 = NativeValueTraits<IDLDouble>::NativeValue(info.GetIsolate(), info[4], exception_state);
  if (exception_state.HadException())
    return;

  r_1 = NativeValueTraits<IDLDouble>::NativeValue(info.GetIsolate(), info[5], exception_state);
  if (exception_state.HadException())
    return;

  CanvasGradient* result = impl->createRadialGradient(x_0, y_0, r_0, x_1, y_1, r_1, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void CreatePatternMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "PaintRenderingContext2D", "createPattern");

  PaintRenderingContext2D* impl = V8PaintRenderingContext2D::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  CSSImageValueOrHTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmapOrOffscreenCanvas image;
  V8StringResource<kTreatNullAsEmptyString> repetition_type;
  V8CSSImageValueOrHTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmapOrOffscreenCanvas::ToImpl(info.GetIsolate(), info[0], image, UnionTypeConversionMode::kNotNullable, exception_state);
  if (exception_state.HadException())
    return;

  repetition_type = info[1];
  if (!repetition_type.Prepare())
    return;

  CanvasPattern* result = impl->createPattern(script_state, image, repetition_type, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void ClearRectMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "PaintRenderingContext2D", "clearRect");

  PaintRenderingContext2D* impl = V8PaintRenderingContext2D::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 4)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(4, info.Length()));
    return;
  }

  double x;
  double y;
  double width;
  double height;
  x = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  y = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  width = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  height = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[3], exception_state);
  if (exception_state.HadException())
    return;

  impl->clearRect(x, y, width, height);
}

static void FillRectMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "PaintRenderingContext2D", "fillRect");

  PaintRenderingContext2D* impl = V8PaintRenderingContext2D::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 4)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(4, info.Length()));
    return;
  }

  double x;
  double y;
  double width;
  double height;
  x = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  y = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  width = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  height = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[3], exception_state);
  if (exception_state.HadException())
    return;

  impl->fillRect(x, y, width, height);
}

static void StrokeRectMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "PaintRenderingContext2D", "strokeRect");

  PaintRenderingContext2D* impl = V8PaintRenderingContext2D::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 4)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(4, info.Length()));
    return;
  }

  double x;
  double y;
  double width;
  double height;
  x = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  y = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  width = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  height = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[3], exception_state);
  if (exception_state.HadException())
    return;

  impl->strokeRect(x, y, width, height);
}

static void BeginPathMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  PaintRenderingContext2D* impl = V8PaintRenderingContext2D::ToImpl(info.Holder());

  impl->beginPath();
}

static void Fill1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "PaintRenderingContext2D", "fill");

  PaintRenderingContext2D* impl = V8PaintRenderingContext2D::ToImpl(info.Holder());

  V8StringResource<> winding;
  int num_args_passed = info.Length();
  while (num_args_passed > 0) {
    if (!info[num_args_passed - 1]->IsUndefined())
      break;
    --num_args_passed;
  }
  if (UNLIKELY(num_args_passed <= 0)) {
    impl->fill();
    return;
  }
  winding = info[0];
  if (!winding.Prepare())
    return;
  const char* kValidWindingValues[] = {
      "nonzero",
      "evenodd",
  };
  if (!IsValidEnum(winding, kValidWindingValues, base::size(kValidWindingValues), "CanvasFillRule", exception_state)) {
    return;
  }

  impl->fill(winding);
}

static void Fill2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "PaintRenderingContext2D", "fill");

  PaintRenderingContext2D* impl = V8PaintRenderingContext2D::ToImpl(info.Holder());

  Path2D* path;
  V8StringResource<> winding;
  int num_args_passed = info.Length();
  while (num_args_passed > 0) {
    if (!info[num_args_passed - 1]->IsUndefined())
      break;
    --num_args_passed;
  }
  path = V8Path2D::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!path) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'Path2D'.");
    return;
  }

  if (UNLIKELY(num_args_passed <= 1)) {
    impl->fill(path);
    return;
  }
  winding = info[1];
  if (!winding.Prepare())
    return;
  const char* kValidWindingValues[] = {
      "nonzero",
      "evenodd",
  };
  if (!IsValidEnum(winding, kValidWindingValues, base::size(kValidWindingValues), "CanvasFillRule", exception_state)) {
    return;
  }

  impl->fill(path, winding);
}

static void FillMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  scheduler::CooperativeSchedulingManager::Instance()->Safepoint();

  bool is_arity_error = false;

  switch (std::min(2, info.Length())) {
    case 0:
      if (true) {
        Fill1Method(info);
        return;
      }
      break;
    case 1:
      if (info[0]->IsUndefined()) {
        Fill1Method(info);
        return;
      }
      if (V8Path2D::HasInstance(info[0], info.GetIsolate())) {
        Fill2Method(info);
        return;
      }
      if (true) {
        Fill1Method(info);
        return;
      }
      break;
    case 2:
      if (true) {
        Fill2Method(info);
        return;
      }
      break;
    default:
      is_arity_error = true;
  }

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "PaintRenderingContext2D", "fill");
  if (is_arity_error) {
  }
  exception_state.ThrowTypeError("No function was found that matched the signature provided.");
}

static void Stroke1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  PaintRenderingContext2D* impl = V8PaintRenderingContext2D::ToImpl(info.Holder());

  impl->stroke();
}

static void Stroke2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  PaintRenderingContext2D* impl = V8PaintRenderingContext2D::ToImpl(info.Holder());

  Path2D* path;
  path = V8Path2D::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!path) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("stroke", "PaintRenderingContext2D", "parameter 1 is not of type 'Path2D'."));
    return;
  }

  impl->stroke(path);
}

static void StrokeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  scheduler::CooperativeSchedulingManager::Instance()->Safepoint();

  bool is_arity_error = false;

  switch (std::min(1, info.Length())) {
    case 0:
      if (true) {
        Stroke1Method(info);
        return;
      }
      break;
    case 1:
      if (true) {
        Stroke2Method(info);
        return;
      }
      break;
    default:
      is_arity_error = true;
  }

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "PaintRenderingContext2D", "stroke");
  if (is_arity_error) {
  }
  exception_state.ThrowTypeError("No function was found that matched the signature provided.");
}

static void Clip1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "PaintRenderingContext2D", "clip");

  PaintRenderingContext2D* impl = V8PaintRenderingContext2D::ToImpl(info.Holder());

  V8StringResource<> winding;
  int num_args_passed = info.Length();
  while (num_args_passed > 0) {
    if (!info[num_args_passed - 1]->IsUndefined())
      break;
    --num_args_passed;
  }
  if (UNLIKELY(num_args_passed <= 0)) {
    impl->clip();
    return;
  }
  winding = info[0];
  if (!winding.Prepare())
    return;
  const char* kValidWindingValues[] = {
      "nonzero",
      "evenodd",
  };
  if (!IsValidEnum(winding, kValidWindingValues, base::size(kValidWindingValues), "CanvasFillRule", exception_state)) {
    return;
  }

  impl->clip(winding);
}

static void Clip2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "PaintRenderingContext2D", "clip");

  PaintRenderingContext2D* impl = V8PaintRenderingContext2D::ToImpl(info.Holder());

  Path2D* path;
  V8StringResource<> winding;
  int num_args_passed = info.Length();
  while (num_args_passed > 0) {
    if (!info[num_args_passed - 1]->IsUndefined())
      break;
    --num_args_passed;
  }
  path = V8Path2D::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!path) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'Path2D'.");
    return;
  }

  if (UNLIKELY(num_args_passed <= 1)) {
    impl->clip(path);
    return;
  }
  winding = info[1];
  if (!winding.Prepare())
    return;
  const char* kValidWindingValues[] = {
      "nonzero",
      "evenodd",
  };
  if (!IsValidEnum(winding, kValidWindingValues, base::size(kValidWindingValues), "CanvasFillRule", exception_state)) {
    return;
  }

  impl->clip(path, winding);
}

static void ClipMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  scheduler::CooperativeSchedulingManager::Instance()->Safepoint();

  bool is_arity_error = false;

  switch (std::min(2, info.Length())) {
    case 0:
      if (true) {
        Clip1Method(info);
        return;
      }
      break;
    case 1:
      if (info[0]->IsUndefined()) {
        Clip1Method(info);
        return;
      }
      if (V8Path2D::HasInstance(info[0], info.GetIsolate())) {
        Clip2Method(info);
        return;
      }
      if (true) {
        Clip1Method(info);
        return;
      }
      break;
    case 2:
      if (true) {
        Clip2Method(info);
        return;
      }
      break;
    default:
      is_arity_error = true;
  }

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "PaintRenderingContext2D", "clip");
  if (is_arity_error) {
  }
  exception_state.ThrowTypeError("No function was found that matched the signature provided.");
}

static void IsPointInPath1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "PaintRenderingContext2D", "isPointInPath");

  PaintRenderingContext2D* impl = V8PaintRenderingContext2D::ToImpl(info.Holder());

  double x;
  double y;
  V8StringResource<> winding;
  int num_args_passed = info.Length();
  while (num_args_passed > 0) {
    if (!info[num_args_passed - 1]->IsUndefined())
      break;
    --num_args_passed;
  }
  x = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  y = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  if (UNLIKELY(num_args_passed <= 2)) {
    V8SetReturnValueBool(info, impl->isPointInPath(x, y));
    return;
  }
  winding = info[2];
  if (!winding.Prepare())
    return;
  const char* kValidWindingValues[] = {
      "nonzero",
      "evenodd",
  };
  if (!IsValidEnum(winding, kValidWindingValues, base::size(kValidWindingValues), "CanvasFillRule", exception_state)) {
    return;
  }

  V8SetReturnValueBool(info, impl->isPointInPath(x, y, winding));
}

static void IsPointInPath2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "PaintRenderingContext2D", "isPointInPath");

  PaintRenderingContext2D* impl = V8PaintRenderingContext2D::ToImpl(info.Holder());

  Path2D* path;
  double x;
  double y;
  V8StringResource<> winding;
  int num_args_passed = info.Length();
  while (num_args_passed > 0) {
    if (!info[num_args_passed - 1]->IsUndefined())
      break;
    --num_args_passed;
  }
  path = V8Path2D::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!path) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'Path2D'.");
    return;
  }

  x = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  y = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  if (UNLIKELY(num_args_passed <= 3)) {
    V8SetReturnValueBool(info, impl->isPointInPath(path, x, y));
    return;
  }
  winding = info[3];
  if (!winding.Prepare())
    return;
  const char* kValidWindingValues[] = {
      "nonzero",
      "evenodd",
  };
  if (!IsValidEnum(winding, kValidWindingValues, base::size(kValidWindingValues), "CanvasFillRule", exception_state)) {
    return;
  }

  V8SetReturnValueBool(info, impl->isPointInPath(path, x, y, winding));
}

static void IsPointInPathMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  scheduler::CooperativeSchedulingManager::Instance()->Safepoint();

  bool is_arity_error = false;

  switch (std::min(4, info.Length())) {
    case 2:
      if (true) {
        ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
        UseCounter::Count(execution_context_for_measurement, WebFeature::kV8PaintRenderingContext2D_IsPointInPath_Method);
        Dactyloscoper::Record(execution_context_for_measurement, WebFeature::kV8PaintRenderingContext2D_IsPointInPath_Method);
        IsPointInPath1Method(info);
        return;
      }
      break;
    case 3:
      if (V8Path2D::HasInstance(info[0], info.GetIsolate())) {
        ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
        UseCounter::Count(execution_context_for_measurement, WebFeature::kV8PaintRenderingContext2D_IsPointInPath_Method);
        Dactyloscoper::Record(execution_context_for_measurement, WebFeature::kV8PaintRenderingContext2D_IsPointInPath_Method);
        IsPointInPath2Method(info);
        return;
      }
      if (info[0]->IsNumber()) {
        ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
        UseCounter::Count(execution_context_for_measurement, WebFeature::kV8PaintRenderingContext2D_IsPointInPath_Method);
        Dactyloscoper::Record(execution_context_for_measurement, WebFeature::kV8PaintRenderingContext2D_IsPointInPath_Method);
        IsPointInPath1Method(info);
        return;
      }
      if (true) {
        ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
        UseCounter::Count(execution_context_for_measurement, WebFeature::kV8PaintRenderingContext2D_IsPointInPath_Method);
        Dactyloscoper::Record(execution_context_for_measurement, WebFeature::kV8PaintRenderingContext2D_IsPointInPath_Method);
        IsPointInPath1Method(info);
        return;
      }
      break;
    case 4:
      if (true) {
        ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
        UseCounter::Count(execution_context_for_measurement, WebFeature::kV8PaintRenderingContext2D_IsPointInPath_Method);
        Dactyloscoper::Record(execution_context_for_measurement, WebFeature::kV8PaintRenderingContext2D_IsPointInPath_Method);
        IsPointInPath2Method(info);
        return;
      }
      break;
    default:
      is_arity_error = true;
  }

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "PaintRenderingContext2D", "isPointInPath");
  if (is_arity_error) {
    if (info.Length() < 2) {
      exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
      return;
    }
  }
  exception_state.ThrowTypeError("No function was found that matched the signature provided.");
}

static void IsPointInStroke1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "PaintRenderingContext2D", "isPointInStroke");

  PaintRenderingContext2D* impl = V8PaintRenderingContext2D::ToImpl(info.Holder());

  double x;
  double y;
  x = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  y = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  V8SetReturnValueBool(info, impl->isPointInStroke(x, y));
}

static void IsPointInStroke2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "PaintRenderingContext2D", "isPointInStroke");

  PaintRenderingContext2D* impl = V8PaintRenderingContext2D::ToImpl(info.Holder());

  Path2D* path;
  double x;
  double y;
  path = V8Path2D::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!path) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'Path2D'.");
    return;
  }

  x = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  y = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  V8SetReturnValueBool(info, impl->isPointInStroke(path, x, y));
}

static void IsPointInStrokeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  scheduler::CooperativeSchedulingManager::Instance()->Safepoint();

  bool is_arity_error = false;

  switch (std::min(3, info.Length())) {
    case 2:
      if (true) {
        ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
        UseCounter::Count(execution_context_for_measurement, WebFeature::kV8PaintRenderingContext2D_IsPointInStroke_Method);
        Dactyloscoper::Record(execution_context_for_measurement, WebFeature::kV8PaintRenderingContext2D_IsPointInStroke_Method);
        IsPointInStroke1Method(info);
        return;
      }
      break;
    case 3:
      if (true) {
        ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
        UseCounter::Count(execution_context_for_measurement, WebFeature::kV8PaintRenderingContext2D_IsPointInStroke_Method);
        Dactyloscoper::Record(execution_context_for_measurement, WebFeature::kV8PaintRenderingContext2D_IsPointInStroke_Method);
        IsPointInStroke2Method(info);
        return;
      }
      break;
    default:
      is_arity_error = true;
  }

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "PaintRenderingContext2D", "isPointInStroke");
  if (is_arity_error) {
    if (info.Length() < 2) {
      exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
      return;
    }
  }
  exception_state.ThrowTypeError("No function was found that matched the signature provided.");
}

static void DrawImage1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "PaintRenderingContext2D", "drawImage");

  PaintRenderingContext2D* impl = V8PaintRenderingContext2D::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  CSSImageValueOrHTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmapOrOffscreenCanvas image;
  double x;
  double y;
  V8CSSImageValueOrHTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmapOrOffscreenCanvas::ToImpl(info.GetIsolate(), info[0], image, UnionTypeConversionMode::kNotNullable, exception_state);
  if (exception_state.HadException())
    return;

  x = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  y = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  impl->drawImage(script_state, image, x, y, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void DrawImage2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "PaintRenderingContext2D", "drawImage");

  PaintRenderingContext2D* impl = V8PaintRenderingContext2D::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  CSSImageValueOrHTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmapOrOffscreenCanvas image;
  double x;
  double y;
  double width;
  double height;
  V8CSSImageValueOrHTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmapOrOffscreenCanvas::ToImpl(info.GetIsolate(), info[0], image, UnionTypeConversionMode::kNotNullable, exception_state);
  if (exception_state.HadException())
    return;

  x = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  y = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  width = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[3], exception_state);
  if (exception_state.HadException())
    return;

  height = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[4], exception_state);
  if (exception_state.HadException())
    return;

  impl->drawImage(script_state, image, x, y, width, height, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void DrawImage3Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "PaintRenderingContext2D", "drawImage");

  PaintRenderingContext2D* impl = V8PaintRenderingContext2D::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  CSSImageValueOrHTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmapOrOffscreenCanvas image;
  double sx;
  double sy;
  double sw;
  double sh;
  double dx;
  double dy;
  double dw;
  double dh;
  V8CSSImageValueOrHTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmapOrOffscreenCanvas::ToImpl(info.GetIsolate(), info[0], image, UnionTypeConversionMode::kNotNullable, exception_state);
  if (exception_state.HadException())
    return;

  sx = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  sy = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  sw = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[3], exception_state);
  if (exception_state.HadException())
    return;

  sh = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[4], exception_state);
  if (exception_state.HadException())
    return;

  dx = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[5], exception_state);
  if (exception_state.HadException())
    return;

  dy = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[6], exception_state);
  if (exception_state.HadException())
    return;

  dw = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[7], exception_state);
  if (exception_state.HadException())
    return;

  dh = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[8], exception_state);
  if (exception_state.HadException())
    return;

  impl->drawImage(script_state, image, sx, sy, sw, sh, dx, dy, dw, dh, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void DrawImageMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  scheduler::CooperativeSchedulingManager::Instance()->Safepoint();

  bool is_arity_error = false;

  switch (std::min(9, info.Length())) {
    case 3:
      if (true) {
        DrawImage1Method(info);
        return;
      }
      break;
    case 5:
      if (true) {
        DrawImage2Method(info);
        return;
      }
      break;
    case 9:
      if (true) {
        DrawImage3Method(info);
        return;
      }
      break;
    default:
      is_arity_error = true;
  }

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "PaintRenderingContext2D", "drawImage");
  if (is_arity_error) {
    if (info.Length() < 3) {
      exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
      return;
    }
    if (info.Length() >= 3) {
      exception_state.ThrowTypeError(ExceptionMessages::InvalidArity("[3, 5, 9]", info.Length()));
      return;
    }
  }
  exception_state.ThrowTypeError("No function was found that matched the signature provided.");
}

static void SetLineDashMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "PaintRenderingContext2D", "setLineDash");

  PaintRenderingContext2D* impl = V8PaintRenderingContext2D::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  Vector<double> dash;
  dash = NativeValueTraits<IDLSequence<IDLUnrestrictedDouble>>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  impl->setLineDash(dash);
}

static void GetLineDashMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  PaintRenderingContext2D* impl = V8PaintRenderingContext2D::ToImpl(info.Holder());

  V8SetReturnValue(info, ToV8(impl->getLineDash(), info.Holder(), info.GetIsolate()));
}

static void ClosePathMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  PaintRenderingContext2D* impl = V8PaintRenderingContext2D::ToImpl(info.Holder());

  impl->closePath();
}

static void MoveToMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "PaintRenderingContext2D", "moveTo");

  PaintRenderingContext2D* impl = V8PaintRenderingContext2D::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  double x;
  double y;
  x = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  y = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  impl->moveTo(x, y);
}

static void LineToMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "PaintRenderingContext2D", "lineTo");

  PaintRenderingContext2D* impl = V8PaintRenderingContext2D::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  double x;
  double y;
  x = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  y = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  impl->lineTo(x, y);
}

static void QuadraticCurveToMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "PaintRenderingContext2D", "quadraticCurveTo");

  PaintRenderingContext2D* impl = V8PaintRenderingContext2D::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 4)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(4, info.Length()));
    return;
  }

  double cpx;
  double cpy;
  double x;
  double y;
  cpx = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  cpy = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  x = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  y = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[3], exception_state);
  if (exception_state.HadException())
    return;

  impl->quadraticCurveTo(cpx, cpy, x, y);
}

static void BezierCurveToMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "PaintRenderingContext2D", "bezierCurveTo");

  PaintRenderingContext2D* impl = V8PaintRenderingContext2D::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 6)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(6, info.Length()));
    return;
  }

  double cp_1_x;
  double cp_1_y;
  double cp_2_x;
  double cp_2_y;
  double x;
  double y;
  cp_1_x = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  cp_1_y = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  cp_2_x = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  cp_2_y = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[3], exception_state);
  if (exception_state.HadException())
    return;

  x = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[4], exception_state);
  if (exception_state.HadException())
    return;

  y = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[5], exception_state);
  if (exception_state.HadException())
    return;

  impl->bezierCurveTo(cp_1_x, cp_1_y, cp_2_x, cp_2_y, x, y);
}

static void ArcToMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "PaintRenderingContext2D", "arcTo");

  PaintRenderingContext2D* impl = V8PaintRenderingContext2D::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 5)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(5, info.Length()));
    return;
  }

  double x_1;
  double y_1;
  double x_2;
  double y_2;
  double radius;
  x_1 = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  y_1 = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  x_2 = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  y_2 = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[3], exception_state);
  if (exception_state.HadException())
    return;

  radius = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[4], exception_state);
  if (exception_state.HadException())
    return;

  impl->arcTo(x_1, y_1, x_2, y_2, radius, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void RectMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "PaintRenderingContext2D", "rect");

  PaintRenderingContext2D* impl = V8PaintRenderingContext2D::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 4)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(4, info.Length()));
    return;
  }

  double x;
  double y;
  double width;
  double height;
  x = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  y = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  width = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  height = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[3], exception_state);
  if (exception_state.HadException())
    return;

  impl->rect(x, y, width, height);
}

static void ArcMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "PaintRenderingContext2D", "arc");

  PaintRenderingContext2D* impl = V8PaintRenderingContext2D::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 5)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(5, info.Length()));
    return;
  }

  double x;
  double y;
  double radius;
  double start_angle;
  double end_angle;
  bool anticlockwise;
  x = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  y = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  radius = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  start_angle = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[3], exception_state);
  if (exception_state.HadException())
    return;

  end_angle = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[4], exception_state);
  if (exception_state.HadException())
    return;

  if (!info[5]->IsUndefined()) {
    anticlockwise = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[5], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    anticlockwise = false;
  }

  impl->arc(x, y, radius, start_angle, end_angle, anticlockwise, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void EllipseMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "PaintRenderingContext2D", "ellipse");

  PaintRenderingContext2D* impl = V8PaintRenderingContext2D::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 7)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(7, info.Length()));
    return;
  }

  double x;
  double y;
  double radius_x;
  double radius_y;
  double rotation;
  double start_angle;
  double end_angle;
  bool anticlockwise;
  x = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  y = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  radius_x = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  radius_y = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[3], exception_state);
  if (exception_state.HadException())
    return;

  rotation = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[4], exception_state);
  if (exception_state.HadException())
    return;

  start_angle = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[5], exception_state);
  if (exception_state.HadException())
    return;

  end_angle = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[6], exception_state);
  if (exception_state.HadException())
    return;

  if (!info[7]->IsUndefined()) {
    anticlockwise = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[7], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    anticlockwise = false;
  }

  impl->ellipse(x, y, radius_x, radius_y, rotation, start_angle, end_angle, anticlockwise, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

}  // namespace paint_rendering_context_2d_v8_internal

void V8PaintRenderingContext2D::GlobalAlphaAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PaintRenderingContext2D_globalAlpha_Getter");

  paint_rendering_context_2d_v8_internal::GlobalAlphaAttributeGetter(info);
}

void V8PaintRenderingContext2D::GlobalAlphaAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PaintRenderingContext2D_globalAlpha_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  paint_rendering_context_2d_v8_internal::GlobalAlphaAttributeSetter(v8_value, info);
}

void V8PaintRenderingContext2D::GlobalCompositeOperationAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PaintRenderingContext2D_globalCompositeOperation_Getter");

  paint_rendering_context_2d_v8_internal::GlobalCompositeOperationAttributeGetter(info);
}

void V8PaintRenderingContext2D::GlobalCompositeOperationAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PaintRenderingContext2D_globalCompositeOperation_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  paint_rendering_context_2d_v8_internal::GlobalCompositeOperationAttributeSetter(v8_value, info);
}

void V8PaintRenderingContext2D::FilterAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PaintRenderingContext2D_filter_Getter");

  paint_rendering_context_2d_v8_internal::FilterAttributeGetter(info);
}

void V8PaintRenderingContext2D::FilterAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PaintRenderingContext2D_filter_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  paint_rendering_context_2d_v8_internal::FilterAttributeSetter(v8_value, info);
}

void V8PaintRenderingContext2D::ImageSmoothingEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PaintRenderingContext2D_imageSmoothingEnabled_Getter");

  paint_rendering_context_2d_v8_internal::ImageSmoothingEnabledAttributeGetter(info);
}

void V8PaintRenderingContext2D::ImageSmoothingEnabledAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PaintRenderingContext2D_imageSmoothingEnabled_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  paint_rendering_context_2d_v8_internal::ImageSmoothingEnabledAttributeSetter(v8_value, info);
}

void V8PaintRenderingContext2D::ImageSmoothingQualityAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PaintRenderingContext2D_imageSmoothingQuality_Getter");

  paint_rendering_context_2d_v8_internal::ImageSmoothingQualityAttributeGetter(info);
}

void V8PaintRenderingContext2D::ImageSmoothingQualityAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PaintRenderingContext2D_imageSmoothingQuality_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  paint_rendering_context_2d_v8_internal::ImageSmoothingQualityAttributeSetter(v8_value, info);
}

void V8PaintRenderingContext2D::StrokeStyleAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PaintRenderingContext2D_strokeStyle_Getter");

  paint_rendering_context_2d_v8_internal::StrokeStyleAttributeGetter(info);
}

void V8PaintRenderingContext2D::StrokeStyleAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PaintRenderingContext2D_strokeStyle_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  paint_rendering_context_2d_v8_internal::StrokeStyleAttributeSetter(v8_value, info);
}

void V8PaintRenderingContext2D::FillStyleAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PaintRenderingContext2D_fillStyle_Getter");

  paint_rendering_context_2d_v8_internal::FillStyleAttributeGetter(info);
}

void V8PaintRenderingContext2D::FillStyleAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PaintRenderingContext2D_fillStyle_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  paint_rendering_context_2d_v8_internal::FillStyleAttributeSetter(v8_value, info);
}

void V8PaintRenderingContext2D::ShadowOffsetXAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PaintRenderingContext2D_shadowOffsetX_Getter");

  paint_rendering_context_2d_v8_internal::ShadowOffsetXAttributeGetter(info);
}

void V8PaintRenderingContext2D::ShadowOffsetXAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PaintRenderingContext2D_shadowOffsetX_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  paint_rendering_context_2d_v8_internal::ShadowOffsetXAttributeSetter(v8_value, info);
}

void V8PaintRenderingContext2D::ShadowOffsetYAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PaintRenderingContext2D_shadowOffsetY_Getter");

  paint_rendering_context_2d_v8_internal::ShadowOffsetYAttributeGetter(info);
}

void V8PaintRenderingContext2D::ShadowOffsetYAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PaintRenderingContext2D_shadowOffsetY_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  paint_rendering_context_2d_v8_internal::ShadowOffsetYAttributeSetter(v8_value, info);
}

void V8PaintRenderingContext2D::ShadowBlurAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PaintRenderingContext2D_shadowBlur_Getter");

  paint_rendering_context_2d_v8_internal::ShadowBlurAttributeGetter(info);
}

void V8PaintRenderingContext2D::ShadowBlurAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PaintRenderingContext2D_shadowBlur_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  paint_rendering_context_2d_v8_internal::ShadowBlurAttributeSetter(v8_value, info);
}

void V8PaintRenderingContext2D::ShadowColorAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PaintRenderingContext2D_shadowColor_Getter");

  paint_rendering_context_2d_v8_internal::ShadowColorAttributeGetter(info);
}

void V8PaintRenderingContext2D::ShadowColorAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PaintRenderingContext2D_shadowColor_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  paint_rendering_context_2d_v8_internal::ShadowColorAttributeSetter(v8_value, info);
}

void V8PaintRenderingContext2D::LineWidthAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PaintRenderingContext2D_lineWidth_Getter");

  paint_rendering_context_2d_v8_internal::LineWidthAttributeGetter(info);
}

void V8PaintRenderingContext2D::LineWidthAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PaintRenderingContext2D_lineWidth_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  paint_rendering_context_2d_v8_internal::LineWidthAttributeSetter(v8_value, info);
}

void V8PaintRenderingContext2D::LineCapAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PaintRenderingContext2D_lineCap_Getter");

  paint_rendering_context_2d_v8_internal::LineCapAttributeGetter(info);
}

void V8PaintRenderingContext2D::LineCapAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PaintRenderingContext2D_lineCap_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  paint_rendering_context_2d_v8_internal::LineCapAttributeSetter(v8_value, info);
}

void V8PaintRenderingContext2D::LineJoinAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PaintRenderingContext2D_lineJoin_Getter");

  paint_rendering_context_2d_v8_internal::LineJoinAttributeGetter(info);
}

void V8PaintRenderingContext2D::LineJoinAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PaintRenderingContext2D_lineJoin_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  paint_rendering_context_2d_v8_internal::LineJoinAttributeSetter(v8_value, info);
}

void V8PaintRenderingContext2D::MiterLimitAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PaintRenderingContext2D_miterLimit_Getter");

  paint_rendering_context_2d_v8_internal::MiterLimitAttributeGetter(info);
}

void V8PaintRenderingContext2D::MiterLimitAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PaintRenderingContext2D_miterLimit_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  paint_rendering_context_2d_v8_internal::MiterLimitAttributeSetter(v8_value, info);
}

void V8PaintRenderingContext2D::LineDashOffsetAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PaintRenderingContext2D_lineDashOffset_Getter");

  paint_rendering_context_2d_v8_internal::LineDashOffsetAttributeGetter(info);
}

void V8PaintRenderingContext2D::LineDashOffsetAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PaintRenderingContext2D_lineDashOffset_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  paint_rendering_context_2d_v8_internal::LineDashOffsetAttributeSetter(v8_value, info);
}

void V8PaintRenderingContext2D::SaveMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PaintRenderingContext2D_save");

  paint_rendering_context_2d_v8_internal::SaveMethod(info);
}

void V8PaintRenderingContext2D::RestoreMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PaintRenderingContext2D_restore");

  paint_rendering_context_2d_v8_internal::RestoreMethod(info);
}

void V8PaintRenderingContext2D::ScaleMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PaintRenderingContext2D_scale");

  paint_rendering_context_2d_v8_internal::ScaleMethod(info);
}

void V8PaintRenderingContext2D::RotateMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PaintRenderingContext2D_rotate");

  paint_rendering_context_2d_v8_internal::RotateMethod(info);
}

void V8PaintRenderingContext2D::TranslateMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PaintRenderingContext2D_translate");

  paint_rendering_context_2d_v8_internal::TranslateMethod(info);
}

void V8PaintRenderingContext2D::TransformMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PaintRenderingContext2D_transform");

  paint_rendering_context_2d_v8_internal::TransformMethod(info);
}

void V8PaintRenderingContext2D::ResetTransformMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PaintRenderingContext2D_resetTransform");

  paint_rendering_context_2d_v8_internal::ResetTransformMethod(info);
}

void V8PaintRenderingContext2D::SetTransformMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PaintRenderingContext2D_setTransform");

  paint_rendering_context_2d_v8_internal::SetTransformMethod(info);
}

void V8PaintRenderingContext2D::GetTransformMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PaintRenderingContext2D_getTransform");

  paint_rendering_context_2d_v8_internal::GetTransformMethod(info);
}

void V8PaintRenderingContext2D::CreateLinearGradientMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PaintRenderingContext2D_createLinearGradient");

  paint_rendering_context_2d_v8_internal::CreateLinearGradientMethod(info);
}

void V8PaintRenderingContext2D::CreateRadialGradientMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PaintRenderingContext2D_createRadialGradient");

  paint_rendering_context_2d_v8_internal::CreateRadialGradientMethod(info);
}

void V8PaintRenderingContext2D::CreatePatternMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PaintRenderingContext2D_createPattern");

  paint_rendering_context_2d_v8_internal::CreatePatternMethod(info);
}

void V8PaintRenderingContext2D::ClearRectMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PaintRenderingContext2D_clearRect");

  paint_rendering_context_2d_v8_internal::ClearRectMethod(info);
}

void V8PaintRenderingContext2D::FillRectMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PaintRenderingContext2D_fillRect");

  paint_rendering_context_2d_v8_internal::FillRectMethod(info);
}

void V8PaintRenderingContext2D::StrokeRectMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PaintRenderingContext2D_strokeRect");

  paint_rendering_context_2d_v8_internal::StrokeRectMethod(info);
}

void V8PaintRenderingContext2D::BeginPathMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PaintRenderingContext2D_beginPath");

  paint_rendering_context_2d_v8_internal::BeginPathMethod(info);
}

void V8PaintRenderingContext2D::FillMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PaintRenderingContext2D_fill");

  paint_rendering_context_2d_v8_internal::FillMethod(info);
}

void V8PaintRenderingContext2D::StrokeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PaintRenderingContext2D_stroke");

  paint_rendering_context_2d_v8_internal::StrokeMethod(info);
}

void V8PaintRenderingContext2D::ClipMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PaintRenderingContext2D_clip");

  paint_rendering_context_2d_v8_internal::ClipMethod(info);
}

void V8PaintRenderingContext2D::IsPointInPathMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PaintRenderingContext2D_isPointInPath");

  paint_rendering_context_2d_v8_internal::IsPointInPathMethod(info);
}

void V8PaintRenderingContext2D::IsPointInStrokeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PaintRenderingContext2D_isPointInStroke");

  paint_rendering_context_2d_v8_internal::IsPointInStrokeMethod(info);
}

void V8PaintRenderingContext2D::DrawImageMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PaintRenderingContext2D_drawImage");

  paint_rendering_context_2d_v8_internal::DrawImageMethod(info);
}

void V8PaintRenderingContext2D::SetLineDashMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PaintRenderingContext2D_setLineDash");

  paint_rendering_context_2d_v8_internal::SetLineDashMethod(info);
}

void V8PaintRenderingContext2D::GetLineDashMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PaintRenderingContext2D_getLineDash");

  paint_rendering_context_2d_v8_internal::GetLineDashMethod(info);
}

void V8PaintRenderingContext2D::ClosePathMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PaintRenderingContext2D_closePath");

  paint_rendering_context_2d_v8_internal::ClosePathMethod(info);
}

void V8PaintRenderingContext2D::MoveToMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PaintRenderingContext2D_moveTo");

  paint_rendering_context_2d_v8_internal::MoveToMethod(info);
}

void V8PaintRenderingContext2D::LineToMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PaintRenderingContext2D_lineTo");

  paint_rendering_context_2d_v8_internal::LineToMethod(info);
}

void V8PaintRenderingContext2D::QuadraticCurveToMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PaintRenderingContext2D_quadraticCurveTo");

  paint_rendering_context_2d_v8_internal::QuadraticCurveToMethod(info);
}

void V8PaintRenderingContext2D::BezierCurveToMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PaintRenderingContext2D_bezierCurveTo");

  paint_rendering_context_2d_v8_internal::BezierCurveToMethod(info);
}

void V8PaintRenderingContext2D::ArcToMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PaintRenderingContext2D_arcTo");

  paint_rendering_context_2d_v8_internal::ArcToMethod(info);
}

void V8PaintRenderingContext2D::RectMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PaintRenderingContext2D_rect");

  paint_rendering_context_2d_v8_internal::RectMethod(info);
}

void V8PaintRenderingContext2D::ArcMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PaintRenderingContext2D_arc");

  paint_rendering_context_2d_v8_internal::ArcMethod(info);
}

void V8PaintRenderingContext2D::EllipseMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PaintRenderingContext2D_ellipse");

  paint_rendering_context_2d_v8_internal::EllipseMethod(info);
}

static constexpr V8DOMConfiguration::AccessorConfiguration kV8PaintRenderingContext2DAccessors[] = {
    { "globalAlpha", V8PaintRenderingContext2D::GlobalAlphaAttributeGetterCallback, V8PaintRenderingContext2D::GlobalAlphaAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "globalCompositeOperation", V8PaintRenderingContext2D::GlobalCompositeOperationAttributeGetterCallback, V8PaintRenderingContext2D::GlobalCompositeOperationAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "filter", V8PaintRenderingContext2D::FilterAttributeGetterCallback, V8PaintRenderingContext2D::FilterAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "imageSmoothingEnabled", V8PaintRenderingContext2D::ImageSmoothingEnabledAttributeGetterCallback, V8PaintRenderingContext2D::ImageSmoothingEnabledAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "strokeStyle", V8PaintRenderingContext2D::StrokeStyleAttributeGetterCallback, V8PaintRenderingContext2D::StrokeStyleAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "fillStyle", V8PaintRenderingContext2D::FillStyleAttributeGetterCallback, V8PaintRenderingContext2D::FillStyleAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "shadowOffsetX", V8PaintRenderingContext2D::ShadowOffsetXAttributeGetterCallback, V8PaintRenderingContext2D::ShadowOffsetXAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "shadowOffsetY", V8PaintRenderingContext2D::ShadowOffsetYAttributeGetterCallback, V8PaintRenderingContext2D::ShadowOffsetYAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "shadowBlur", V8PaintRenderingContext2D::ShadowBlurAttributeGetterCallback, V8PaintRenderingContext2D::ShadowBlurAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "shadowColor", V8PaintRenderingContext2D::ShadowColorAttributeGetterCallback, V8PaintRenderingContext2D::ShadowColorAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "lineWidth", V8PaintRenderingContext2D::LineWidthAttributeGetterCallback, V8PaintRenderingContext2D::LineWidthAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "lineCap", V8PaintRenderingContext2D::LineCapAttributeGetterCallback, V8PaintRenderingContext2D::LineCapAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "lineJoin", V8PaintRenderingContext2D::LineJoinAttributeGetterCallback, V8PaintRenderingContext2D::LineJoinAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "miterLimit", V8PaintRenderingContext2D::MiterLimitAttributeGetterCallback, V8PaintRenderingContext2D::MiterLimitAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "lineDashOffset", V8PaintRenderingContext2D::LineDashOffsetAttributeGetterCallback, V8PaintRenderingContext2D::LineDashOffsetAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
};

static constexpr V8DOMConfiguration::MethodConfiguration kV8PaintRenderingContext2DMethods[] = {
    {"save", V8PaintRenderingContext2D::SaveMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"restore", V8PaintRenderingContext2D::RestoreMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"scale", V8PaintRenderingContext2D::ScaleMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"rotate", V8PaintRenderingContext2D::RotateMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"translate", V8PaintRenderingContext2D::TranslateMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"transform", V8PaintRenderingContext2D::TransformMethodCallback, 6, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"resetTransform", V8PaintRenderingContext2D::ResetTransformMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setTransform", V8PaintRenderingContext2D::SetTransformMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getTransform", V8PaintRenderingContext2D::GetTransformMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createLinearGradient", V8PaintRenderingContext2D::CreateLinearGradientMethodCallback, 4, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createRadialGradient", V8PaintRenderingContext2D::CreateRadialGradientMethodCallback, 6, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createPattern", V8PaintRenderingContext2D::CreatePatternMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"clearRect", V8PaintRenderingContext2D::ClearRectMethodCallback, 4, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"fillRect", V8PaintRenderingContext2D::FillRectMethodCallback, 4, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"strokeRect", V8PaintRenderingContext2D::StrokeRectMethodCallback, 4, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"beginPath", V8PaintRenderingContext2D::BeginPathMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"fill", V8PaintRenderingContext2D::FillMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"stroke", V8PaintRenderingContext2D::StrokeMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"clip", V8PaintRenderingContext2D::ClipMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"isPointInPath", V8PaintRenderingContext2D::IsPointInPathMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"isPointInStroke", V8PaintRenderingContext2D::IsPointInStrokeMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"drawImage", V8PaintRenderingContext2D::DrawImageMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setLineDash", V8PaintRenderingContext2D::SetLineDashMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getLineDash", V8PaintRenderingContext2D::GetLineDashMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"closePath", V8PaintRenderingContext2D::ClosePathMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"moveTo", V8PaintRenderingContext2D::MoveToMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"lineTo", V8PaintRenderingContext2D::LineToMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"quadraticCurveTo", V8PaintRenderingContext2D::QuadraticCurveToMethodCallback, 4, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"bezierCurveTo", V8PaintRenderingContext2D::BezierCurveToMethodCallback, 6, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"arcTo", V8PaintRenderingContext2D::ArcToMethodCallback, 5, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"rect", V8PaintRenderingContext2D::RectMethodCallback, 4, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"arc", V8PaintRenderingContext2D::ArcMethodCallback, 5, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"ellipse", V8PaintRenderingContext2D::EllipseMethodCallback, 7, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void InstallV8PaintRenderingContext2DTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8PaintRenderingContext2D::GetWrapperTypeInfo()->interface_name, v8::Local<v8::FunctionTemplate>(), V8PaintRenderingContext2D::kInternalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8PaintRenderingContext2DAccessors, base::size(kV8PaintRenderingContext2DAccessors));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8PaintRenderingContext2DMethods, base::size(kV8PaintRenderingContext2DMethods));

  // Custom signature

  V8PaintRenderingContext2D::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8PaintRenderingContext2D::InstallRuntimeEnabledFeaturesOnTemplate(
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

  if (RuntimeEnabledFeatures::CanvasImageSmoothingEnabled()) {
    static constexpr V8DOMConfiguration::AccessorConfiguration kConfigurations[] = {
        { "imageSmoothingQuality", V8PaintRenderingContext2D::ImageSmoothingQualityAttributeGetterCallback, V8PaintRenderingContext2D::ImageSmoothingQualityAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAccessors(
        isolate, world, instance_template, prototype_template, interface_template,
        signature, kConfigurations, base::size(kConfigurations));
  }

  // Custom signature
}

v8::Local<v8::FunctionTemplate> V8PaintRenderingContext2D::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8PaintRenderingContext2D::GetWrapperTypeInfo()),
      InstallV8PaintRenderingContext2DTemplate);
}

bool V8PaintRenderingContext2D::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8PaintRenderingContext2D::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8PaintRenderingContext2D::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8PaintRenderingContext2D::GetWrapperTypeInfo(), v8_value);
}

PaintRenderingContext2D* V8PaintRenderingContext2D::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

PaintRenderingContext2D* NativeValueTraits<PaintRenderingContext2D>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  PaintRenderingContext2D* native_value = V8PaintRenderingContext2D::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "PaintRenderingContext2D"));
  }
  return native_value;
}

}  // namespace blink
