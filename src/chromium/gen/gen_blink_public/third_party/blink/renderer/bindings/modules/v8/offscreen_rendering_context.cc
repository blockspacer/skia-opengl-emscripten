// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/offscreen_rendering_context.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_offscreen_canvas_rendering_context_2d.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl2_compute_rendering_context.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl2_rendering_context.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_rendering_context.h"

namespace blink {

OffscreenCanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrWebGL2ComputeRenderingContext::OffscreenCanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrWebGL2ComputeRenderingContext() : type_(SpecificType::kNone) {}

OffscreenCanvasRenderingContext2D* OffscreenCanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrWebGL2ComputeRenderingContext::GetAsOffscreenCanvasRenderingContext2D() const {
  DCHECK(IsOffscreenCanvasRenderingContext2D());
  return offscreen_canvas_rendering_context_2d_;
}

void OffscreenCanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrWebGL2ComputeRenderingContext::SetOffscreenCanvasRenderingContext2D(OffscreenCanvasRenderingContext2D* value) {
  DCHECK(IsNull());
  offscreen_canvas_rendering_context_2d_ = value;
  type_ = SpecificType::kOffscreenCanvasRenderingContext2D;
}

OffscreenCanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrWebGL2ComputeRenderingContext OffscreenCanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrWebGL2ComputeRenderingContext::FromOffscreenCanvasRenderingContext2D(OffscreenCanvasRenderingContext2D* value) {
  OffscreenCanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrWebGL2ComputeRenderingContext container;
  container.SetOffscreenCanvasRenderingContext2D(value);
  return container;
}

WebGL2ComputeRenderingContext* OffscreenCanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrWebGL2ComputeRenderingContext::GetAsWebGL2ComputeRenderingContext() const {
  DCHECK(IsWebGL2ComputeRenderingContext());
  return webgl2_compute_rendering_context_;
}

void OffscreenCanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrWebGL2ComputeRenderingContext::SetWebGL2ComputeRenderingContext(WebGL2ComputeRenderingContext* value) {
  DCHECK(IsNull());
  webgl2_compute_rendering_context_ = value;
  type_ = SpecificType::kWebGL2ComputeRenderingContext;
}

OffscreenCanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrWebGL2ComputeRenderingContext OffscreenCanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrWebGL2ComputeRenderingContext::FromWebGL2ComputeRenderingContext(WebGL2ComputeRenderingContext* value) {
  OffscreenCanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrWebGL2ComputeRenderingContext container;
  container.SetWebGL2ComputeRenderingContext(value);
  return container;
}

WebGL2RenderingContext* OffscreenCanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrWebGL2ComputeRenderingContext::GetAsWebGL2RenderingContext() const {
  DCHECK(IsWebGL2RenderingContext());
  return webgl2_rendering_context_;
}

void OffscreenCanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrWebGL2ComputeRenderingContext::SetWebGL2RenderingContext(WebGL2RenderingContext* value) {
  DCHECK(IsNull());
  webgl2_rendering_context_ = value;
  type_ = SpecificType::kWebGL2RenderingContext;
}

OffscreenCanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrWebGL2ComputeRenderingContext OffscreenCanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrWebGL2ComputeRenderingContext::FromWebGL2RenderingContext(WebGL2RenderingContext* value) {
  OffscreenCanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrWebGL2ComputeRenderingContext container;
  container.SetWebGL2RenderingContext(value);
  return container;
}

WebGLRenderingContext* OffscreenCanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrWebGL2ComputeRenderingContext::GetAsWebGLRenderingContext() const {
  DCHECK(IsWebGLRenderingContext());
  return webgl_rendering_context_;
}

void OffscreenCanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrWebGL2ComputeRenderingContext::SetWebGLRenderingContext(WebGLRenderingContext* value) {
  DCHECK(IsNull());
  webgl_rendering_context_ = value;
  type_ = SpecificType::kWebGLRenderingContext;
}

OffscreenCanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrWebGL2ComputeRenderingContext OffscreenCanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrWebGL2ComputeRenderingContext::FromWebGLRenderingContext(WebGLRenderingContext* value) {
  OffscreenCanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrWebGL2ComputeRenderingContext container;
  container.SetWebGLRenderingContext(value);
  return container;
}

OffscreenCanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrWebGL2ComputeRenderingContext::OffscreenCanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrWebGL2ComputeRenderingContext(const OffscreenCanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrWebGL2ComputeRenderingContext&) = default;
OffscreenCanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrWebGL2ComputeRenderingContext::~OffscreenCanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrWebGL2ComputeRenderingContext() = default;
OffscreenCanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrWebGL2ComputeRenderingContext& OffscreenCanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrWebGL2ComputeRenderingContext::operator=(const OffscreenCanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrWebGL2ComputeRenderingContext&) = default;

void OffscreenCanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrWebGL2ComputeRenderingContext::Trace(blink::Visitor* visitor) {
  visitor->Trace(offscreen_canvas_rendering_context_2d_);
  visitor->Trace(webgl2_compute_rendering_context_);
  visitor->Trace(webgl2_rendering_context_);
  visitor->Trace(webgl_rendering_context_);
}

void V8OffscreenCanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrWebGL2ComputeRenderingContext::ToImpl(
    v8::Isolate* isolate,
    v8::Local<v8::Value> v8_value,
    OffscreenCanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrWebGL2ComputeRenderingContext& impl,
    UnionTypeConversionMode conversion_mode,
    ExceptionState& exception_state) {
  if (v8_value.IsEmpty())
    return;

  if (conversion_mode == UnionTypeConversionMode::kNullable && IsUndefinedOrNull(v8_value))
    return;

  if (V8OffscreenCanvasRenderingContext2D::HasInstance(v8_value, isolate)) {
    OffscreenCanvasRenderingContext2D* cpp_value = V8OffscreenCanvasRenderingContext2D::ToImpl(v8::Local<v8::Object>::Cast(v8_value));
    impl.SetOffscreenCanvasRenderingContext2D(cpp_value);
    return;
  }

  if (V8WebGL2ComputeRenderingContext::HasInstance(v8_value, isolate)) {
    WebGL2ComputeRenderingContext* cpp_value = V8WebGL2ComputeRenderingContext::ToImpl(v8::Local<v8::Object>::Cast(v8_value));
    impl.SetWebGL2ComputeRenderingContext(cpp_value);
    return;
  }

  if (V8WebGL2RenderingContext::HasInstance(v8_value, isolate)) {
    WebGL2RenderingContext* cpp_value = V8WebGL2RenderingContext::ToImpl(v8::Local<v8::Object>::Cast(v8_value));
    impl.SetWebGL2RenderingContext(cpp_value);
    return;
  }

  if (V8WebGLRenderingContext::HasInstance(v8_value, isolate)) {
    WebGLRenderingContext* cpp_value = V8WebGLRenderingContext::ToImpl(v8::Local<v8::Object>::Cast(v8_value));
    impl.SetWebGLRenderingContext(cpp_value);
    return;
  }

  exception_state.ThrowTypeError("The provided value is not of type '(OffscreenCanvasRenderingContext2D or WebGLRenderingContext or WebGL2RenderingContext or WebGL2ComputeRenderingContext)'");
}

v8::Local<v8::Value> ToV8(const OffscreenCanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrWebGL2ComputeRenderingContext& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  switch (impl.type_) {
    case OffscreenCanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrWebGL2ComputeRenderingContext::SpecificType::kNone:
      return v8::Null(isolate);
    case OffscreenCanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrWebGL2ComputeRenderingContext::SpecificType::kOffscreenCanvasRenderingContext2D:
      return ToV8(impl.GetAsOffscreenCanvasRenderingContext2D(), creationContext, isolate);
    case OffscreenCanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrWebGL2ComputeRenderingContext::SpecificType::kWebGL2ComputeRenderingContext:
      return ToV8(impl.GetAsWebGL2ComputeRenderingContext(), creationContext, isolate);
    case OffscreenCanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrWebGL2ComputeRenderingContext::SpecificType::kWebGL2RenderingContext:
      return ToV8(impl.GetAsWebGL2RenderingContext(), creationContext, isolate);
    case OffscreenCanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrWebGL2ComputeRenderingContext::SpecificType::kWebGLRenderingContext:
      return ToV8(impl.GetAsWebGLRenderingContext(), creationContext, isolate);
    default:
      NOTREACHED();
  }
  return v8::Local<v8::Value>();
}

OffscreenCanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrWebGL2ComputeRenderingContext NativeValueTraits<OffscreenCanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrWebGL2ComputeRenderingContext>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  OffscreenCanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrWebGL2ComputeRenderingContext impl;
  V8OffscreenCanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrWebGL2ComputeRenderingContext::ToImpl(isolate, value, impl, UnionTypeConversionMode::kNotNullable, exception_state);
  return impl;
}

}  // namespace blink
