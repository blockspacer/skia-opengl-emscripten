// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_offscreen_canvas_rendering_context_2d.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_array_buffer_view.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_image_value.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_float32_array.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_canvas_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_image_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_video_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_image_bitmap.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_image_data.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_image_data_color_settings.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_offscreen_canvas.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_image_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_text_metrics.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_uint16_array.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_uint8_clamped_array.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_canvas_gradient.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_canvas_pattern.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_path_2d.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/frame/dactyloscoper.h"
#include "third_party/blink/renderer/core/frame/use_counter.h"
#include "third_party/blink/renderer/core/inspector/console_message.h"
#include "third_party/blink/renderer/core/typed_arrays/array_buffer_view_helpers.h"
#include "third_party/blink/renderer/core/typed_arrays/flexible_array_buffer_view.h"
#include "third_party/blink/renderer/platform/bindings/exception_messages.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
#include "third_party/blink/renderer/platform/bindings/script_state.h"
#include "third_party/blink/renderer/platform/bindings/v8_object_constructor.h"
#include "third_party/blink/renderer/platform/bindings/v8_private_property.h"
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
const WrapperTypeInfo v8_offscreen_canvas_rendering_context_2d_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8OffscreenCanvasRenderingContext2D::DomTemplate,
    nullptr,
    "OffscreenCanvasRenderingContext2D",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in OffscreenCanvasRenderingContext2D.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& OffscreenCanvasRenderingContext2D::wrapper_type_info_ = v8_offscreen_canvas_rendering_context_2d_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, OffscreenCanvasRenderingContext2D>::value,
    "OffscreenCanvasRenderingContext2D inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&OffscreenCanvasRenderingContext2D::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "OffscreenCanvasRenderingContext2D is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace offscreen_canvas_rendering_context_2d_v8_internal {

static void CanvasAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(holder);

  OffscreenCanvas* cpp_value(WTF::GetPtr(impl->offscreenCanvasForBinding()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#OffscreenCanvasRenderingContext2D#canvas")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void GlobalAlphaAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(holder);

  V8SetReturnValue(info, impl->globalAlpha());
}

static void GlobalAlphaAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "OffscreenCanvasRenderingContext2D", "globalAlpha");

  // Prepare the value to be set.
  double cpp_value = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setGlobalAlpha(cpp_value);
}

static void GlobalCompositeOperationAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(holder);

  V8SetReturnValueString(info, impl->globalCompositeOperation(), info.GetIsolate());
}

static void GlobalCompositeOperationAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(holder);

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setGlobalCompositeOperation(cpp_value);
}

static void FilterAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(holder);

  V8SetReturnValueString(info, impl->filter(), info.GetIsolate());
}

static void FilterAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(holder);

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  ExecutionContext* execution_context = ExecutionContext::ForRelevantRealm(info);

  impl->setFilter(execution_context, cpp_value);
}

static void ImageSmoothingEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(holder);

  V8SetReturnValueBool(info, impl->imageSmoothingEnabled());
}

static void ImageSmoothingEnabledAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "OffscreenCanvasRenderingContext2D", "imageSmoothingEnabled");

  // Prepare the value to be set.
  bool cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setImageSmoothingEnabled(cpp_value);
}

static void ImageSmoothingQualityAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(holder);

  V8SetReturnValueString(info, impl->imageSmoothingQuality(), info.GetIsolate());
}

static void ImageSmoothingQualityAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "OffscreenCanvasRenderingContext2D", "imageSmoothingQuality");

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

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(holder);

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

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "OffscreenCanvasRenderingContext2D", "strokeStyle");

  // Prepare the value to be set.
  StringOrCanvasGradientOrCanvasPattern cpp_value;
  V8StringOrCanvasGradientOrCanvasPattern::ToImpl(info.GetIsolate(), v8_value, cpp_value, UnionTypeConversionMode::kNotNullable, exception_state);
  if (exception_state.HadException())
    return;

  impl->setStrokeStyle(cpp_value);
}

static void FillStyleAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(holder);

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

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "OffscreenCanvasRenderingContext2D", "fillStyle");

  // Prepare the value to be set.
  StringOrCanvasGradientOrCanvasPattern cpp_value;
  V8StringOrCanvasGradientOrCanvasPattern::ToImpl(info.GetIsolate(), v8_value, cpp_value, UnionTypeConversionMode::kNotNullable, exception_state);
  if (exception_state.HadException())
    return;

  impl->setFillStyle(cpp_value);
}

static void ShadowOffsetXAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(holder);

  V8SetReturnValue(info, impl->shadowOffsetX());
}

static void ShadowOffsetXAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "OffscreenCanvasRenderingContext2D", "shadowOffsetX");

  // Prepare the value to be set.
  double cpp_value = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setShadowOffsetX(cpp_value);
}

static void ShadowOffsetYAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(holder);

  V8SetReturnValue(info, impl->shadowOffsetY());
}

static void ShadowOffsetYAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "OffscreenCanvasRenderingContext2D", "shadowOffsetY");

  // Prepare the value to be set.
  double cpp_value = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setShadowOffsetY(cpp_value);
}

static void ShadowBlurAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(holder);

  V8SetReturnValue(info, impl->shadowBlur());
}

static void ShadowBlurAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "OffscreenCanvasRenderingContext2D", "shadowBlur");

  // Prepare the value to be set.
  double cpp_value = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setShadowBlur(cpp_value);
}

static void ShadowColorAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(holder);

  V8SetReturnValueString(info, impl->shadowColor(), info.GetIsolate());
}

static void ShadowColorAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(holder);

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setShadowColor(cpp_value);
}

static void LineWidthAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(holder);

  V8SetReturnValue(info, impl->lineWidth());
}

static void LineWidthAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "OffscreenCanvasRenderingContext2D", "lineWidth");

  // Prepare the value to be set.
  double cpp_value = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setLineWidth(cpp_value);
}

static void LineCapAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(holder);

  V8SetReturnValueString(info, impl->lineCap(), info.GetIsolate());
}

static void LineCapAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(holder);

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setLineCap(cpp_value);
}

static void LineJoinAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(holder);

  V8SetReturnValueString(info, impl->lineJoin(), info.GetIsolate());
}

static void LineJoinAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(holder);

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setLineJoin(cpp_value);
}

static void MiterLimitAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(holder);

  V8SetReturnValue(info, impl->miterLimit());
}

static void MiterLimitAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "OffscreenCanvasRenderingContext2D", "miterLimit");

  // Prepare the value to be set.
  double cpp_value = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setMiterLimit(cpp_value);
}

static void LineDashOffsetAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(holder);

  V8SetReturnValue(info, impl->lineDashOffset());
}

static void LineDashOffsetAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "OffscreenCanvasRenderingContext2D", "lineDashOffset");

  // Prepare the value to be set.
  double cpp_value = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setLineDashOffset(cpp_value);
}

static void FontAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(holder);

  V8SetReturnValueString(info, impl->font(), info.GetIsolate());
}

static void FontAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(holder);

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setFont(cpp_value);
}

static void TextAlignAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(holder);

  V8SetReturnValueString(info, impl->textAlign(), info.GetIsolate());
}

static void TextAlignAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(holder);

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setTextAlign(cpp_value);
}

static void TextBaselineAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(holder);

  V8SetReturnValueString(info, impl->textBaseline(), info.GetIsolate());
}

static void TextBaselineAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(holder);

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setTextBaseline(cpp_value);
}

static void DirectionAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(holder);

  V8SetReturnValueString(info, impl->direction(), info.GetIsolate());
}

static void DirectionAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(holder);

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setDirection(cpp_value);
}

static void CommitMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(info.Holder());

  impl->commit();
}

static void SaveMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(info.Holder());

  impl->save();
}

static void RestoreMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(info.Holder());

  impl->restore();
}

static void ScaleMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "OffscreenCanvasRenderingContext2D", "scale");

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(info.Holder());

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
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "OffscreenCanvasRenderingContext2D", "rotate");

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(info.Holder());

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
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "OffscreenCanvasRenderingContext2D", "translate");

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(info.Holder());

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
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "OffscreenCanvasRenderingContext2D", "transform");

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(info.Holder());

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

static void SetTransformMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "OffscreenCanvasRenderingContext2D", "setTransform");

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(info.Holder());

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

  impl->setTransform(a, b, c, d, e, f);
}

static void ResetTransformMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(info.Holder());

  impl->resetTransform();
}

static void CreateLinearGradientMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "OffscreenCanvasRenderingContext2D", "createLinearGradient");

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(info.Holder());

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
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "OffscreenCanvasRenderingContext2D", "createRadialGradient");

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(info.Holder());

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
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "OffscreenCanvasRenderingContext2D", "createPattern");

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(info.Holder());

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
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "OffscreenCanvasRenderingContext2D", "clearRect");

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(info.Holder());

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
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "OffscreenCanvasRenderingContext2D", "fillRect");

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(info.Holder());

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
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "OffscreenCanvasRenderingContext2D", "strokeRect");

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(info.Holder());

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
  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(info.Holder());

  impl->beginPath();
}

static void Fill1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "OffscreenCanvasRenderingContext2D", "fill");

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(info.Holder());

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
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "OffscreenCanvasRenderingContext2D", "fill");

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(info.Holder());

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

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "OffscreenCanvasRenderingContext2D", "fill");
  if (is_arity_error) {
  }
  exception_state.ThrowTypeError("No function was found that matched the signature provided.");
}

static void Stroke1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(info.Holder());

  impl->stroke();
}

static void Stroke2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(info.Holder());

  Path2D* path;
  path = V8Path2D::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!path) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("stroke", "OffscreenCanvasRenderingContext2D", "parameter 1 is not of type 'Path2D'."));
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

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "OffscreenCanvasRenderingContext2D", "stroke");
  if (is_arity_error) {
  }
  exception_state.ThrowTypeError("No function was found that matched the signature provided.");
}

static void Clip1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(info.Holder());

  impl->clip();
}

static void Clip2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(info.Holder());

  Path2D* path;
  path = V8Path2D::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!path) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("clip", "OffscreenCanvasRenderingContext2D", "parameter 1 is not of type 'Path2D'."));
    return;
  }

  impl->clip(path);
}

static void ClipMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  scheduler::CooperativeSchedulingManager::Instance()->Safepoint();

  bool is_arity_error = false;

  switch (std::min(1, info.Length())) {
    case 0:
      if (true) {
        Clip1Method(info);
        return;
      }
      break;
    case 1:
      if (true) {
        Clip2Method(info);
        return;
      }
      break;
    default:
      is_arity_error = true;
  }

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "OffscreenCanvasRenderingContext2D", "clip");
  if (is_arity_error) {
  }
  exception_state.ThrowTypeError("No function was found that matched the signature provided.");
}

static void IsPointInPath1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "OffscreenCanvasRenderingContext2D", "isPointInPath");

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(info.Holder());

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
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "OffscreenCanvasRenderingContext2D", "isPointInPath");

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(info.Holder());

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
        UseCounter::Count(execution_context_for_measurement, WebFeature::kOffscreenCanvasIsPointInPath);
        Dactyloscoper::Record(execution_context_for_measurement, WebFeature::kOffscreenCanvasIsPointInPath);
        IsPointInPath1Method(info);
        return;
      }
      break;
    case 3:
      if (V8Path2D::HasInstance(info[0], info.GetIsolate())) {
        ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
        UseCounter::Count(execution_context_for_measurement, WebFeature::kOffscreenCanvasIsPointInPath);
        Dactyloscoper::Record(execution_context_for_measurement, WebFeature::kOffscreenCanvasIsPointInPath);
        IsPointInPath2Method(info);
        return;
      }
      if (info[0]->IsNumber()) {
        ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
        UseCounter::Count(execution_context_for_measurement, WebFeature::kOffscreenCanvasIsPointInPath);
        Dactyloscoper::Record(execution_context_for_measurement, WebFeature::kOffscreenCanvasIsPointInPath);
        IsPointInPath1Method(info);
        return;
      }
      if (true) {
        ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
        UseCounter::Count(execution_context_for_measurement, WebFeature::kOffscreenCanvasIsPointInPath);
        Dactyloscoper::Record(execution_context_for_measurement, WebFeature::kOffscreenCanvasIsPointInPath);
        IsPointInPath1Method(info);
        return;
      }
      break;
    case 4:
      if (true) {
        ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
        UseCounter::Count(execution_context_for_measurement, WebFeature::kOffscreenCanvasIsPointInPath);
        Dactyloscoper::Record(execution_context_for_measurement, WebFeature::kOffscreenCanvasIsPointInPath);
        IsPointInPath2Method(info);
        return;
      }
      break;
    default:
      is_arity_error = true;
  }

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "OffscreenCanvasRenderingContext2D", "isPointInPath");
  if (is_arity_error) {
    if (info.Length() < 2) {
      exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
      return;
    }
  }
  exception_state.ThrowTypeError("No function was found that matched the signature provided.");
}

static void IsPointInStroke1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "OffscreenCanvasRenderingContext2D", "isPointInStroke");

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(info.Holder());

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
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "OffscreenCanvasRenderingContext2D", "isPointInStroke");

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(info.Holder());

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
        UseCounter::Count(execution_context_for_measurement, WebFeature::kOffscreenCanvasIsPointInStroke);
        Dactyloscoper::Record(execution_context_for_measurement, WebFeature::kOffscreenCanvasIsPointInStroke);
        IsPointInStroke1Method(info);
        return;
      }
      break;
    case 3:
      if (true) {
        ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
        UseCounter::Count(execution_context_for_measurement, WebFeature::kOffscreenCanvasIsPointInStroke);
        Dactyloscoper::Record(execution_context_for_measurement, WebFeature::kOffscreenCanvasIsPointInStroke);
        IsPointInStroke2Method(info);
        return;
      }
      break;
    default:
      is_arity_error = true;
  }

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "OffscreenCanvasRenderingContext2D", "isPointInStroke");
  if (is_arity_error) {
    if (info.Length() < 2) {
      exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
      return;
    }
  }
  exception_state.ThrowTypeError("No function was found that matched the signature provided.");
}

static void FillTextMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "OffscreenCanvasRenderingContext2D", "fillText");

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 3)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
    return;
  }

  V8StringResource<> text;
  double x;
  double y;
  double max_width;
  int num_args_passed = info.Length();
  while (num_args_passed > 0) {
    if (!info[num_args_passed - 1]->IsUndefined())
      break;
    --num_args_passed;
  }
  text = info[0];
  if (!text.Prepare())
    return;

  x = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  y = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  if (UNLIKELY(num_args_passed <= 3)) {
    impl->fillText(text, x, y);
    return;
  }
  max_width = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[3], exception_state);
  if (exception_state.HadException())
    return;

  impl->fillText(text, x, y, max_width);
}

static void StrokeTextMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "OffscreenCanvasRenderingContext2D", "strokeText");

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 3)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
    return;
  }

  V8StringResource<> text;
  double x;
  double y;
  double max_width;
  int num_args_passed = info.Length();
  while (num_args_passed > 0) {
    if (!info[num_args_passed - 1]->IsUndefined())
      break;
    --num_args_passed;
  }
  text = info[0];
  if (!text.Prepare())
    return;

  x = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  y = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  if (UNLIKELY(num_args_passed <= 3)) {
    impl->strokeText(text, x, y);
    return;
  }
  max_width = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[3], exception_state);
  if (exception_state.HadException())
    return;

  impl->strokeText(text, x, y, max_width);
}

static void MeasureTextMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("measureText", "OffscreenCanvasRenderingContext2D", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  V8StringResource<> text;
  text = info[0];
  if (!text.Prepare())
    return;

  V8SetReturnValue(info, impl->measureText(text));
}

static void DrawImage1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "OffscreenCanvasRenderingContext2D", "drawImage");

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(info.Holder());

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
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "OffscreenCanvasRenderingContext2D", "drawImage");

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(info.Holder());

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
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "OffscreenCanvasRenderingContext2D", "drawImage");

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(info.Holder());

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

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "OffscreenCanvasRenderingContext2D", "drawImage");
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

static void CreateImageData1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "OffscreenCanvasRenderingContext2D", "createImageData");

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(info.Holder());

  ImageData* imagedata;
  imagedata = V8ImageData::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!imagedata) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'ImageData'.");
    return;
  }

  ImageData* result = impl->createImageData(imagedata, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void CreateImageData2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "OffscreenCanvasRenderingContext2D", "createImageData");

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(info.Holder());

  int32_t sw;
  int32_t sh;
  sw = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  sh = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  ImageData* result = impl->createImageData(sw, sh, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void GetImageDataMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "OffscreenCanvasRenderingContext2D", "getImageData");

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 4)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(4, info.Length()));
    return;
  }

  int32_t sx;
  int32_t sy;
  int32_t sw;
  int32_t sh;
  sx = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  sy = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  sw = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  sh = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[3], exception_state);
  if (exception_state.HadException())
    return;

  ImageData* result = impl->getImageData(sx, sy, sw, sh, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void PutImageData1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "OffscreenCanvasRenderingContext2D", "putImageData");

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(info.Holder());

  ImageData* imagedata;
  int32_t dx;
  int32_t dy;
  imagedata = V8ImageData::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!imagedata) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'ImageData'.");
    return;
  }

  dx = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  dy = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  impl->putImageData(imagedata, dx, dy, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void PutImageData2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "OffscreenCanvasRenderingContext2D", "putImageData");

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(info.Holder());

  ImageData* imagedata;
  int32_t dx;
  int32_t dy;
  int32_t dirty_x;
  int32_t dirty_y;
  int32_t dirty_width;
  int32_t dirty_height;
  imagedata = V8ImageData::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!imagedata) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'ImageData'.");
    return;
  }

  dx = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  dy = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  dirty_x = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[3], exception_state);
  if (exception_state.HadException())
    return;

  dirty_y = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[4], exception_state);
  if (exception_state.HadException())
    return;

  dirty_width = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[5], exception_state);
  if (exception_state.HadException())
    return;

  dirty_height = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[6], exception_state);
  if (exception_state.HadException())
    return;

  impl->putImageData(imagedata, dx, dy, dirty_x, dirty_y, dirty_width, dirty_height, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void PutImageDataMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  scheduler::CooperativeSchedulingManager::Instance()->Safepoint();

  bool is_arity_error = false;

  switch (std::min(7, info.Length())) {
    case 3:
      if (true) {
        PutImageData1Method(info);
        return;
      }
      break;
    case 7:
      if (true) {
        PutImageData2Method(info);
        return;
      }
      break;
    default:
      is_arity_error = true;
  }

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "OffscreenCanvasRenderingContext2D", "putImageData");
  if (is_arity_error) {
    if (info.Length() < 3) {
      exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
      return;
    }
    if (info.Length() >= 3) {
      exception_state.ThrowTypeError(ExceptionMessages::InvalidArity("[3, 7]", info.Length()));
      return;
    }
  }
  exception_state.ThrowTypeError("No function was found that matched the signature provided.");
}

static void CreateImageData3Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "OffscreenCanvasRenderingContext2D", "createImageData");

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(info.Holder());

  uint32_t sw;
  uint32_t sh;
  ImageDataColorSettings* image_data_color_settings;
  sw = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  sh = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  if (!info[2]->IsNullOrUndefined() && !info[2]->IsObject()) {
    exception_state.ThrowTypeError("parameter 3 ('imageDataColorSettings') is not an object.");
    return;
  }
  image_data_color_settings = NativeValueTraits<ImageDataColorSettings>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  ImageData* result = impl->createImageData(sw, sh, image_data_color_settings, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void CreateImageData4Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "OffscreenCanvasRenderingContext2D", "createImageData");

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(info.Holder());

  Uint8ClampedArrayOrUint16ArrayOrFloat32Array data;
  uint32_t sw;
  uint32_t sh;
  ImageDataColorSettings* image_data_color_settings;
  V8Uint8ClampedArrayOrUint16ArrayOrFloat32Array::ToImpl(info.GetIsolate(), info[0], data, UnionTypeConversionMode::kNotNullable, exception_state);
  if (exception_state.HadException())
    return;

  sw = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  sh = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  if (!info[3]->IsNullOrUndefined() && !info[3]->IsObject()) {
    exception_state.ThrowTypeError("parameter 4 ('imageDataColorSettings') is not an object.");
    return;
  }
  image_data_color_settings = NativeValueTraits<ImageDataColorSettings>::NativeValue(info.GetIsolate(), info[3], exception_state);
  if (exception_state.HadException())
    return;

  ImageData* result = impl->createImageData(data, sw, sh, image_data_color_settings, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static int CreateImageDataMethodMaxArg() {
  if (RuntimeEnabledFeatures::CanvasColorManagementEnabled()) {
    return 4;
  }
  if (RuntimeEnabledFeatures::CanvasColorManagementEnabled()) {
    return 3;
  }
  return 2;
}

static void CreateImageDataMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  scheduler::CooperativeSchedulingManager::Instance()->Safepoint();

  bool is_arity_error = false;

  switch (std::min(offscreen_canvas_rendering_context_2d_v8_internal::CreateImageDataMethodMaxArg(), info.Length())) {
    case 1:
      if (true) {
        CreateImageData1Method(info);
        return;
      }
      break;
    case 2:
      if (true) {
        CreateImageData2Method(info);
        return;
      }
      break;
    case 3:
      if (RuntimeEnabledFeatures::CanvasColorManagementEnabled()) {
        if (true) {
          CreateImageData3Method(info);
          return;
        }
      }
      break;
    case 4:
      if (RuntimeEnabledFeatures::CanvasColorManagementEnabled()) {
        if (true) {
          CreateImageData4Method(info);
          return;
        }
      }
      break;
    default:
      is_arity_error = true;
  }

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "OffscreenCanvasRenderingContext2D", "createImageData");
  if (is_arity_error) {
    if (info.Length() < 1) {
      exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
      return;
    }
  }
  exception_state.ThrowTypeError("No function was found that matched the signature provided.");
}

static void SetLineDashMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "OffscreenCanvasRenderingContext2D", "setLineDash");

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(info.Holder());

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
  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(info.Holder());

  V8SetReturnValue(info, ToV8(impl->getLineDash(), info.Holder(), info.GetIsolate()));
}

static void ClosePathMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(info.Holder());

  impl->closePath();
}

static void MoveToMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "OffscreenCanvasRenderingContext2D", "moveTo");

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(info.Holder());

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
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "OffscreenCanvasRenderingContext2D", "lineTo");

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(info.Holder());

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
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "OffscreenCanvasRenderingContext2D", "quadraticCurveTo");

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(info.Holder());

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
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "OffscreenCanvasRenderingContext2D", "bezierCurveTo");

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(info.Holder());

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
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "OffscreenCanvasRenderingContext2D", "arcTo");

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(info.Holder());

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
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "OffscreenCanvasRenderingContext2D", "rect");

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(info.Holder());

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
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "OffscreenCanvasRenderingContext2D", "arc");

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(info.Holder());

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
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "OffscreenCanvasRenderingContext2D", "ellipse");

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(info.Holder());

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

}  // namespace offscreen_canvas_rendering_context_2d_v8_internal

void V8OffscreenCanvasRenderingContext2D::CanvasAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_canvas_Getter");

  offscreen_canvas_rendering_context_2d_v8_internal::CanvasAttributeGetter(info);
}

void V8OffscreenCanvasRenderingContext2D::GlobalAlphaAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_globalAlpha_Getter");

  offscreen_canvas_rendering_context_2d_v8_internal::GlobalAlphaAttributeGetter(info);
}

void V8OffscreenCanvasRenderingContext2D::GlobalAlphaAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_globalAlpha_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  offscreen_canvas_rendering_context_2d_v8_internal::GlobalAlphaAttributeSetter(v8_value, info);
}

void V8OffscreenCanvasRenderingContext2D::GlobalCompositeOperationAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_globalCompositeOperation_Getter");

  offscreen_canvas_rendering_context_2d_v8_internal::GlobalCompositeOperationAttributeGetter(info);
}

void V8OffscreenCanvasRenderingContext2D::GlobalCompositeOperationAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_globalCompositeOperation_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  offscreen_canvas_rendering_context_2d_v8_internal::GlobalCompositeOperationAttributeSetter(v8_value, info);
}

void V8OffscreenCanvasRenderingContext2D::FilterAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_filter_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kCanvas2DFilter);

  offscreen_canvas_rendering_context_2d_v8_internal::FilterAttributeGetter(info);
}

void V8OffscreenCanvasRenderingContext2D::FilterAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_filter_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kCanvas2DFilter);

  offscreen_canvas_rendering_context_2d_v8_internal::FilterAttributeSetter(v8_value, info);
}

void V8OffscreenCanvasRenderingContext2D::ImageSmoothingEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_imageSmoothingEnabled_Getter");

  offscreen_canvas_rendering_context_2d_v8_internal::ImageSmoothingEnabledAttributeGetter(info);
}

void V8OffscreenCanvasRenderingContext2D::ImageSmoothingEnabledAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_imageSmoothingEnabled_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  offscreen_canvas_rendering_context_2d_v8_internal::ImageSmoothingEnabledAttributeSetter(v8_value, info);
}

void V8OffscreenCanvasRenderingContext2D::ImageSmoothingQualityAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_imageSmoothingQuality_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kCanvas2DImageSmoothingQuality);

  offscreen_canvas_rendering_context_2d_v8_internal::ImageSmoothingQualityAttributeGetter(info);
}

void V8OffscreenCanvasRenderingContext2D::ImageSmoothingQualityAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_imageSmoothingQuality_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kCanvas2DImageSmoothingQuality);

  offscreen_canvas_rendering_context_2d_v8_internal::ImageSmoothingQualityAttributeSetter(v8_value, info);
}

void V8OffscreenCanvasRenderingContext2D::StrokeStyleAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_strokeStyle_Getter");

  offscreen_canvas_rendering_context_2d_v8_internal::StrokeStyleAttributeGetter(info);
}

void V8OffscreenCanvasRenderingContext2D::StrokeStyleAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_strokeStyle_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  offscreen_canvas_rendering_context_2d_v8_internal::StrokeStyleAttributeSetter(v8_value, info);
}

void V8OffscreenCanvasRenderingContext2D::FillStyleAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_fillStyle_Getter");

  offscreen_canvas_rendering_context_2d_v8_internal::FillStyleAttributeGetter(info);
}

void V8OffscreenCanvasRenderingContext2D::FillStyleAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_fillStyle_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  offscreen_canvas_rendering_context_2d_v8_internal::FillStyleAttributeSetter(v8_value, info);
}

void V8OffscreenCanvasRenderingContext2D::ShadowOffsetXAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_shadowOffsetX_Getter");

  offscreen_canvas_rendering_context_2d_v8_internal::ShadowOffsetXAttributeGetter(info);
}

void V8OffscreenCanvasRenderingContext2D::ShadowOffsetXAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_shadowOffsetX_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  offscreen_canvas_rendering_context_2d_v8_internal::ShadowOffsetXAttributeSetter(v8_value, info);
}

void V8OffscreenCanvasRenderingContext2D::ShadowOffsetYAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_shadowOffsetY_Getter");

  offscreen_canvas_rendering_context_2d_v8_internal::ShadowOffsetYAttributeGetter(info);
}

void V8OffscreenCanvasRenderingContext2D::ShadowOffsetYAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_shadowOffsetY_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  offscreen_canvas_rendering_context_2d_v8_internal::ShadowOffsetYAttributeSetter(v8_value, info);
}

void V8OffscreenCanvasRenderingContext2D::ShadowBlurAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_shadowBlur_Getter");

  offscreen_canvas_rendering_context_2d_v8_internal::ShadowBlurAttributeGetter(info);
}

void V8OffscreenCanvasRenderingContext2D::ShadowBlurAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_shadowBlur_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  offscreen_canvas_rendering_context_2d_v8_internal::ShadowBlurAttributeSetter(v8_value, info);
}

void V8OffscreenCanvasRenderingContext2D::ShadowColorAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_shadowColor_Getter");

  offscreen_canvas_rendering_context_2d_v8_internal::ShadowColorAttributeGetter(info);
}

void V8OffscreenCanvasRenderingContext2D::ShadowColorAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_shadowColor_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  offscreen_canvas_rendering_context_2d_v8_internal::ShadowColorAttributeSetter(v8_value, info);
}

void V8OffscreenCanvasRenderingContext2D::LineWidthAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_lineWidth_Getter");

  offscreen_canvas_rendering_context_2d_v8_internal::LineWidthAttributeGetter(info);
}

void V8OffscreenCanvasRenderingContext2D::LineWidthAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_lineWidth_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  offscreen_canvas_rendering_context_2d_v8_internal::LineWidthAttributeSetter(v8_value, info);
}

void V8OffscreenCanvasRenderingContext2D::LineCapAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_lineCap_Getter");

  offscreen_canvas_rendering_context_2d_v8_internal::LineCapAttributeGetter(info);
}

void V8OffscreenCanvasRenderingContext2D::LineCapAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_lineCap_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  offscreen_canvas_rendering_context_2d_v8_internal::LineCapAttributeSetter(v8_value, info);
}

void V8OffscreenCanvasRenderingContext2D::LineJoinAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_lineJoin_Getter");

  offscreen_canvas_rendering_context_2d_v8_internal::LineJoinAttributeGetter(info);
}

void V8OffscreenCanvasRenderingContext2D::LineJoinAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_lineJoin_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  offscreen_canvas_rendering_context_2d_v8_internal::LineJoinAttributeSetter(v8_value, info);
}

void V8OffscreenCanvasRenderingContext2D::MiterLimitAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_miterLimit_Getter");

  offscreen_canvas_rendering_context_2d_v8_internal::MiterLimitAttributeGetter(info);
}

void V8OffscreenCanvasRenderingContext2D::MiterLimitAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_miterLimit_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  offscreen_canvas_rendering_context_2d_v8_internal::MiterLimitAttributeSetter(v8_value, info);
}

void V8OffscreenCanvasRenderingContext2D::LineDashOffsetAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_lineDashOffset_Getter");

  offscreen_canvas_rendering_context_2d_v8_internal::LineDashOffsetAttributeGetter(info);
}

void V8OffscreenCanvasRenderingContext2D::LineDashOffsetAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_lineDashOffset_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  offscreen_canvas_rendering_context_2d_v8_internal::LineDashOffsetAttributeSetter(v8_value, info);
}

void V8OffscreenCanvasRenderingContext2D::FontAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_font_Getter");

  offscreen_canvas_rendering_context_2d_v8_internal::FontAttributeGetter(info);
}

void V8OffscreenCanvasRenderingContext2D::FontAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_font_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  offscreen_canvas_rendering_context_2d_v8_internal::FontAttributeSetter(v8_value, info);
}

void V8OffscreenCanvasRenderingContext2D::TextAlignAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_textAlign_Getter");

  offscreen_canvas_rendering_context_2d_v8_internal::TextAlignAttributeGetter(info);
}

void V8OffscreenCanvasRenderingContext2D::TextAlignAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_textAlign_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  offscreen_canvas_rendering_context_2d_v8_internal::TextAlignAttributeSetter(v8_value, info);
}

void V8OffscreenCanvasRenderingContext2D::TextBaselineAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_textBaseline_Getter");

  offscreen_canvas_rendering_context_2d_v8_internal::TextBaselineAttributeGetter(info);
}

void V8OffscreenCanvasRenderingContext2D::TextBaselineAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_textBaseline_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  offscreen_canvas_rendering_context_2d_v8_internal::TextBaselineAttributeSetter(v8_value, info);
}

void V8OffscreenCanvasRenderingContext2D::DirectionAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_direction_Getter");

  offscreen_canvas_rendering_context_2d_v8_internal::DirectionAttributeGetter(info);
}

void V8OffscreenCanvasRenderingContext2D::DirectionAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_direction_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  offscreen_canvas_rendering_context_2d_v8_internal::DirectionAttributeSetter(v8_value, info);
}

void V8OffscreenCanvasRenderingContext2D::CommitMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_commit");

  offscreen_canvas_rendering_context_2d_v8_internal::CommitMethod(info);
}

void V8OffscreenCanvasRenderingContext2D::SaveMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_save");

  offscreen_canvas_rendering_context_2d_v8_internal::SaveMethod(info);
}

void V8OffscreenCanvasRenderingContext2D::RestoreMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_restore");

  offscreen_canvas_rendering_context_2d_v8_internal::RestoreMethod(info);
}

void V8OffscreenCanvasRenderingContext2D::ScaleMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_scale");

  offscreen_canvas_rendering_context_2d_v8_internal::ScaleMethod(info);
}

void V8OffscreenCanvasRenderingContext2D::RotateMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_rotate");

  offscreen_canvas_rendering_context_2d_v8_internal::RotateMethod(info);
}

void V8OffscreenCanvasRenderingContext2D::TranslateMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_translate");

  offscreen_canvas_rendering_context_2d_v8_internal::TranslateMethod(info);
}

void V8OffscreenCanvasRenderingContext2D::TransformMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_transform");

  offscreen_canvas_rendering_context_2d_v8_internal::TransformMethod(info);
}

void V8OffscreenCanvasRenderingContext2D::SetTransformMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_setTransform");

  offscreen_canvas_rendering_context_2d_v8_internal::SetTransformMethod(info);
}

void V8OffscreenCanvasRenderingContext2D::ResetTransformMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_resetTransform");

  offscreen_canvas_rendering_context_2d_v8_internal::ResetTransformMethod(info);
}

void V8OffscreenCanvasRenderingContext2D::CreateLinearGradientMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_createLinearGradient");

  offscreen_canvas_rendering_context_2d_v8_internal::CreateLinearGradientMethod(info);
}

void V8OffscreenCanvasRenderingContext2D::CreateRadialGradientMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_createRadialGradient");

  offscreen_canvas_rendering_context_2d_v8_internal::CreateRadialGradientMethod(info);
}

void V8OffscreenCanvasRenderingContext2D::CreatePatternMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_createPattern");

  offscreen_canvas_rendering_context_2d_v8_internal::CreatePatternMethod(info);
}

void V8OffscreenCanvasRenderingContext2D::ClearRectMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_clearRect");

  offscreen_canvas_rendering_context_2d_v8_internal::ClearRectMethod(info);
}

void V8OffscreenCanvasRenderingContext2D::FillRectMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_fillRect");

  offscreen_canvas_rendering_context_2d_v8_internal::FillRectMethod(info);
}

void V8OffscreenCanvasRenderingContext2D::StrokeRectMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_strokeRect");

  offscreen_canvas_rendering_context_2d_v8_internal::StrokeRectMethod(info);
}

void V8OffscreenCanvasRenderingContext2D::BeginPathMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_beginPath");

  offscreen_canvas_rendering_context_2d_v8_internal::BeginPathMethod(info);
}

void V8OffscreenCanvasRenderingContext2D::FillMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_fill");

  offscreen_canvas_rendering_context_2d_v8_internal::FillMethod(info);
}

void V8OffscreenCanvasRenderingContext2D::StrokeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_stroke");

  offscreen_canvas_rendering_context_2d_v8_internal::StrokeMethod(info);
}

void V8OffscreenCanvasRenderingContext2D::ClipMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_clip");

  offscreen_canvas_rendering_context_2d_v8_internal::ClipMethod(info);
}

void V8OffscreenCanvasRenderingContext2D::IsPointInPathMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_isPointInPath");

  offscreen_canvas_rendering_context_2d_v8_internal::IsPointInPathMethod(info);
}

void V8OffscreenCanvasRenderingContext2D::IsPointInStrokeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_isPointInStroke");

  offscreen_canvas_rendering_context_2d_v8_internal::IsPointInStrokeMethod(info);
}

void V8OffscreenCanvasRenderingContext2D::FillTextMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_fillText");

  offscreen_canvas_rendering_context_2d_v8_internal::FillTextMethod(info);
}

void V8OffscreenCanvasRenderingContext2D::StrokeTextMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_strokeText");

  offscreen_canvas_rendering_context_2d_v8_internal::StrokeTextMethod(info);
}

void V8OffscreenCanvasRenderingContext2D::MeasureTextMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_measureText");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kOffscreenCanvasMeasureText);
  Dactyloscoper::Record(execution_context_for_measurement, WebFeature::kOffscreenCanvasMeasureText);
  offscreen_canvas_rendering_context_2d_v8_internal::MeasureTextMethod(info);
}

void V8OffscreenCanvasRenderingContext2D::DrawImageMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_drawImage");

  offscreen_canvas_rendering_context_2d_v8_internal::DrawImageMethod(info);
}

void V8OffscreenCanvasRenderingContext2D::GetImageDataMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_getImageData");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kOffscreenCanvasGetImageData);
  Dactyloscoper::Record(execution_context_for_measurement, WebFeature::kOffscreenCanvasGetImageData);
  offscreen_canvas_rendering_context_2d_v8_internal::GetImageDataMethod(info);
}

void V8OffscreenCanvasRenderingContext2D::PutImageDataMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_putImageData");

  offscreen_canvas_rendering_context_2d_v8_internal::PutImageDataMethod(info);
}

void V8OffscreenCanvasRenderingContext2D::CreateImageDataMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_createImageData");

  offscreen_canvas_rendering_context_2d_v8_internal::CreateImageDataMethod(info);
}

void V8OffscreenCanvasRenderingContext2D::SetLineDashMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_setLineDash");

  offscreen_canvas_rendering_context_2d_v8_internal::SetLineDashMethod(info);
}

void V8OffscreenCanvasRenderingContext2D::GetLineDashMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_getLineDash");

  offscreen_canvas_rendering_context_2d_v8_internal::GetLineDashMethod(info);
}

void V8OffscreenCanvasRenderingContext2D::ClosePathMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_closePath");

  offscreen_canvas_rendering_context_2d_v8_internal::ClosePathMethod(info);
}

void V8OffscreenCanvasRenderingContext2D::MoveToMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_moveTo");

  offscreen_canvas_rendering_context_2d_v8_internal::MoveToMethod(info);
}

void V8OffscreenCanvasRenderingContext2D::LineToMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_lineTo");

  offscreen_canvas_rendering_context_2d_v8_internal::LineToMethod(info);
}

void V8OffscreenCanvasRenderingContext2D::QuadraticCurveToMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_quadraticCurveTo");

  offscreen_canvas_rendering_context_2d_v8_internal::QuadraticCurveToMethod(info);
}

void V8OffscreenCanvasRenderingContext2D::BezierCurveToMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_bezierCurveTo");

  offscreen_canvas_rendering_context_2d_v8_internal::BezierCurveToMethod(info);
}

void V8OffscreenCanvasRenderingContext2D::ArcToMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_arcTo");

  offscreen_canvas_rendering_context_2d_v8_internal::ArcToMethod(info);
}

void V8OffscreenCanvasRenderingContext2D::RectMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_rect");

  offscreen_canvas_rendering_context_2d_v8_internal::RectMethod(info);
}

void V8OffscreenCanvasRenderingContext2D::ArcMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_arc");

  offscreen_canvas_rendering_context_2d_v8_internal::ArcMethod(info);
}

void V8OffscreenCanvasRenderingContext2D::EllipseMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_ellipse");

  offscreen_canvas_rendering_context_2d_v8_internal::EllipseMethod(info);
}

static constexpr V8DOMConfiguration::AccessorConfiguration kV8OffscreenCanvasRenderingContext2DAccessors[] = {
    { "canvas", V8OffscreenCanvasRenderingContext2D::CanvasAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "globalAlpha", V8OffscreenCanvasRenderingContext2D::GlobalAlphaAttributeGetterCallback, V8OffscreenCanvasRenderingContext2D::GlobalAlphaAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "globalCompositeOperation", V8OffscreenCanvasRenderingContext2D::GlobalCompositeOperationAttributeGetterCallback, V8OffscreenCanvasRenderingContext2D::GlobalCompositeOperationAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "filter", V8OffscreenCanvasRenderingContext2D::FilterAttributeGetterCallback, V8OffscreenCanvasRenderingContext2D::FilterAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "imageSmoothingEnabled", V8OffscreenCanvasRenderingContext2D::ImageSmoothingEnabledAttributeGetterCallback, V8OffscreenCanvasRenderingContext2D::ImageSmoothingEnabledAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "imageSmoothingQuality", V8OffscreenCanvasRenderingContext2D::ImageSmoothingQualityAttributeGetterCallback, V8OffscreenCanvasRenderingContext2D::ImageSmoothingQualityAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "strokeStyle", V8OffscreenCanvasRenderingContext2D::StrokeStyleAttributeGetterCallback, V8OffscreenCanvasRenderingContext2D::StrokeStyleAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "fillStyle", V8OffscreenCanvasRenderingContext2D::FillStyleAttributeGetterCallback, V8OffscreenCanvasRenderingContext2D::FillStyleAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "shadowOffsetX", V8OffscreenCanvasRenderingContext2D::ShadowOffsetXAttributeGetterCallback, V8OffscreenCanvasRenderingContext2D::ShadowOffsetXAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "shadowOffsetY", V8OffscreenCanvasRenderingContext2D::ShadowOffsetYAttributeGetterCallback, V8OffscreenCanvasRenderingContext2D::ShadowOffsetYAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "shadowBlur", V8OffscreenCanvasRenderingContext2D::ShadowBlurAttributeGetterCallback, V8OffscreenCanvasRenderingContext2D::ShadowBlurAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "shadowColor", V8OffscreenCanvasRenderingContext2D::ShadowColorAttributeGetterCallback, V8OffscreenCanvasRenderingContext2D::ShadowColorAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "lineWidth", V8OffscreenCanvasRenderingContext2D::LineWidthAttributeGetterCallback, V8OffscreenCanvasRenderingContext2D::LineWidthAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "lineCap", V8OffscreenCanvasRenderingContext2D::LineCapAttributeGetterCallback, V8OffscreenCanvasRenderingContext2D::LineCapAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "lineJoin", V8OffscreenCanvasRenderingContext2D::LineJoinAttributeGetterCallback, V8OffscreenCanvasRenderingContext2D::LineJoinAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "miterLimit", V8OffscreenCanvasRenderingContext2D::MiterLimitAttributeGetterCallback, V8OffscreenCanvasRenderingContext2D::MiterLimitAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "lineDashOffset", V8OffscreenCanvasRenderingContext2D::LineDashOffsetAttributeGetterCallback, V8OffscreenCanvasRenderingContext2D::LineDashOffsetAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "font", V8OffscreenCanvasRenderingContext2D::FontAttributeGetterCallback, V8OffscreenCanvasRenderingContext2D::FontAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "textAlign", V8OffscreenCanvasRenderingContext2D::TextAlignAttributeGetterCallback, V8OffscreenCanvasRenderingContext2D::TextAlignAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "textBaseline", V8OffscreenCanvasRenderingContext2D::TextBaselineAttributeGetterCallback, V8OffscreenCanvasRenderingContext2D::TextBaselineAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
};

static constexpr V8DOMConfiguration::MethodConfiguration kV8OffscreenCanvasRenderingContext2DMethods[] = {
    {"save", V8OffscreenCanvasRenderingContext2D::SaveMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"restore", V8OffscreenCanvasRenderingContext2D::RestoreMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"scale", V8OffscreenCanvasRenderingContext2D::ScaleMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"rotate", V8OffscreenCanvasRenderingContext2D::RotateMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"translate", V8OffscreenCanvasRenderingContext2D::TranslateMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"transform", V8OffscreenCanvasRenderingContext2D::TransformMethodCallback, 6, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setTransform", V8OffscreenCanvasRenderingContext2D::SetTransformMethodCallback, 6, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"resetTransform", V8OffscreenCanvasRenderingContext2D::ResetTransformMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createLinearGradient", V8OffscreenCanvasRenderingContext2D::CreateLinearGradientMethodCallback, 4, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createRadialGradient", V8OffscreenCanvasRenderingContext2D::CreateRadialGradientMethodCallback, 6, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createPattern", V8OffscreenCanvasRenderingContext2D::CreatePatternMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"clearRect", V8OffscreenCanvasRenderingContext2D::ClearRectMethodCallback, 4, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"fillRect", V8OffscreenCanvasRenderingContext2D::FillRectMethodCallback, 4, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"strokeRect", V8OffscreenCanvasRenderingContext2D::StrokeRectMethodCallback, 4, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"beginPath", V8OffscreenCanvasRenderingContext2D::BeginPathMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"fill", V8OffscreenCanvasRenderingContext2D::FillMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"stroke", V8OffscreenCanvasRenderingContext2D::StrokeMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"clip", V8OffscreenCanvasRenderingContext2D::ClipMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"isPointInPath", V8OffscreenCanvasRenderingContext2D::IsPointInPathMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"isPointInStroke", V8OffscreenCanvasRenderingContext2D::IsPointInStrokeMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"fillText", V8OffscreenCanvasRenderingContext2D::FillTextMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"strokeText", V8OffscreenCanvasRenderingContext2D::StrokeTextMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"measureText", V8OffscreenCanvasRenderingContext2D::MeasureTextMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"drawImage", V8OffscreenCanvasRenderingContext2D::DrawImageMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getImageData", V8OffscreenCanvasRenderingContext2D::GetImageDataMethodCallback, 4, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"putImageData", V8OffscreenCanvasRenderingContext2D::PutImageDataMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createImageData", V8OffscreenCanvasRenderingContext2D::CreateImageDataMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setLineDash", V8OffscreenCanvasRenderingContext2D::SetLineDashMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getLineDash", V8OffscreenCanvasRenderingContext2D::GetLineDashMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"closePath", V8OffscreenCanvasRenderingContext2D::ClosePathMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"moveTo", V8OffscreenCanvasRenderingContext2D::MoveToMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"lineTo", V8OffscreenCanvasRenderingContext2D::LineToMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"quadraticCurveTo", V8OffscreenCanvasRenderingContext2D::QuadraticCurveToMethodCallback, 4, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"bezierCurveTo", V8OffscreenCanvasRenderingContext2D::BezierCurveToMethodCallback, 6, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"arcTo", V8OffscreenCanvasRenderingContext2D::ArcToMethodCallback, 5, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"rect", V8OffscreenCanvasRenderingContext2D::RectMethodCallback, 4, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"arc", V8OffscreenCanvasRenderingContext2D::ArcMethodCallback, 5, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"ellipse", V8OffscreenCanvasRenderingContext2D::EllipseMethodCallback, 7, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void InstallV8OffscreenCanvasRenderingContext2DTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8OffscreenCanvasRenderingContext2D::GetWrapperTypeInfo()->interface_name, v8::Local<v8::FunctionTemplate>(), V8OffscreenCanvasRenderingContext2D::kInternalFieldCount);

  if (!RuntimeEnabledFeatures::OffscreenCanvasEnabled()) {
    return;
  }

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8OffscreenCanvasRenderingContext2DAccessors, base::size(kV8OffscreenCanvasRenderingContext2DAccessors));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8OffscreenCanvasRenderingContext2DMethods, base::size(kV8OffscreenCanvasRenderingContext2DMethods));

  // Custom signature

  V8OffscreenCanvasRenderingContext2D::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8OffscreenCanvasRenderingContext2D::InstallRuntimeEnabledFeaturesOnTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  if (!RuntimeEnabledFeatures::OffscreenCanvasEnabled()) {
    return;
  }

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.

  if (RuntimeEnabledFeatures::OffscreenCanvasTextEnabled()) {
    static constexpr V8DOMConfiguration::AccessorConfiguration kConfigurations[] = {
        { "direction", V8OffscreenCanvasRenderingContext2D::DirectionAttributeGetterCallback, V8OffscreenCanvasRenderingContext2D::DirectionAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAccessors(
        isolate, world, instance_template, prototype_template, interface_template,
        signature, kConfigurations, base::size(kConfigurations));
  }

  // Custom signature
  if (RuntimeEnabledFeatures::OffscreenCanvasCommitEnabled()) {
    {
      // Install commit configuration
      constexpr V8DOMConfiguration::MethodConfiguration kConfigurations[] = {
          {"commit", V8OffscreenCanvasRenderingContext2D::CommitMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
      };
      for (const auto& config : kConfigurations) {
        V8DOMConfiguration::InstallMethod(
            isolate, world, instance_template, prototype_template,
            interface_template, signature, config);
      }
    }
  }
}

v8::Local<v8::FunctionTemplate> V8OffscreenCanvasRenderingContext2D::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8OffscreenCanvasRenderingContext2D::GetWrapperTypeInfo()),
      InstallV8OffscreenCanvasRenderingContext2DTemplate);
}

bool V8OffscreenCanvasRenderingContext2D::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8OffscreenCanvasRenderingContext2D::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8OffscreenCanvasRenderingContext2D::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8OffscreenCanvasRenderingContext2D::GetWrapperTypeInfo(), v8_value);
}

OffscreenCanvasRenderingContext2D* V8OffscreenCanvasRenderingContext2D::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

OffscreenCanvasRenderingContext2D* NativeValueTraits<OffscreenCanvasRenderingContext2D>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  OffscreenCanvasRenderingContext2D* native_value = V8OffscreenCanvasRenderingContext2D::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "OffscreenCanvasRenderingContext2D"));
  }
  return native_value;
}

}  // namespace blink
