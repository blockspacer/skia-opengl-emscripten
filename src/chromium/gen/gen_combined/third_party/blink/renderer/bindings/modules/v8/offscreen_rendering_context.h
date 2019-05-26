// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_OFFSCREEN_RENDERING_CONTEXT_H_
#define THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_OFFSCREEN_RENDERING_CONTEXT_H_

#include "base/optional.h"
#include "third_party/blink/renderer/bindings/core/v8/dictionary.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_binding_for_core.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class OffscreenCanvasRenderingContext2D;
class WebGL2ComputeRenderingContext;
class WebGL2RenderingContext;
class WebGLRenderingContext;

class MODULES_EXPORT OffscreenCanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrWebGL2ComputeRenderingContext final {
  DISALLOW_NEW();
 public:
  OffscreenCanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrWebGL2ComputeRenderingContext();
  bool IsNull() const { return type_ == SpecificType::kNone; }

  bool IsOffscreenCanvasRenderingContext2D() const { return type_ == SpecificType::kOffscreenCanvasRenderingContext2D; }
  OffscreenCanvasRenderingContext2D* GetAsOffscreenCanvasRenderingContext2D() const;
  void SetOffscreenCanvasRenderingContext2D(OffscreenCanvasRenderingContext2D*);
  static OffscreenCanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrWebGL2ComputeRenderingContext FromOffscreenCanvasRenderingContext2D(OffscreenCanvasRenderingContext2D*);

  bool IsWebGL2ComputeRenderingContext() const { return type_ == SpecificType::kWebGL2ComputeRenderingContext; }
  WebGL2ComputeRenderingContext* GetAsWebGL2ComputeRenderingContext() const;
  void SetWebGL2ComputeRenderingContext(WebGL2ComputeRenderingContext*);
  static OffscreenCanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrWebGL2ComputeRenderingContext FromWebGL2ComputeRenderingContext(WebGL2ComputeRenderingContext*);

  bool IsWebGL2RenderingContext() const { return type_ == SpecificType::kWebGL2RenderingContext; }
  WebGL2RenderingContext* GetAsWebGL2RenderingContext() const;
  void SetWebGL2RenderingContext(WebGL2RenderingContext*);
  static OffscreenCanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrWebGL2ComputeRenderingContext FromWebGL2RenderingContext(WebGL2RenderingContext*);

  bool IsWebGLRenderingContext() const { return type_ == SpecificType::kWebGLRenderingContext; }
  WebGLRenderingContext* GetAsWebGLRenderingContext() const;
  void SetWebGLRenderingContext(WebGLRenderingContext*);
  static OffscreenCanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrWebGL2ComputeRenderingContext FromWebGLRenderingContext(WebGLRenderingContext*);

  OffscreenCanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrWebGL2ComputeRenderingContext(const OffscreenCanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrWebGL2ComputeRenderingContext&);
  ~OffscreenCanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrWebGL2ComputeRenderingContext();
  OffscreenCanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrWebGL2ComputeRenderingContext& operator=(const OffscreenCanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrWebGL2ComputeRenderingContext&);
  void Trace(blink::Visitor*);

 private:
  enum class SpecificType {
    kNone,
    kOffscreenCanvasRenderingContext2D,
    kWebGL2ComputeRenderingContext,
    kWebGL2RenderingContext,
    kWebGLRenderingContext,
  };
  SpecificType type_;

  Member<OffscreenCanvasRenderingContext2D> offscreen_canvas_rendering_context_2d_;
  Member<WebGL2ComputeRenderingContext> webgl2_compute_rendering_context_;
  Member<WebGL2RenderingContext> webgl2_rendering_context_;
  Member<WebGLRenderingContext> webgl_rendering_context_;

  friend MODULES_EXPORT v8::Local<v8::Value> ToV8(const OffscreenCanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrWebGL2ComputeRenderingContext&, v8::Local<v8::Object>, v8::Isolate*);
};

class V8OffscreenCanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrWebGL2ComputeRenderingContext final {
 public:
  MODULES_EXPORT static void ToImpl(v8::Isolate*, v8::Local<v8::Value>, OffscreenCanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrWebGL2ComputeRenderingContext&, UnionTypeConversionMode, ExceptionState&);
};

MODULES_EXPORT v8::Local<v8::Value> ToV8(const OffscreenCanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrWebGL2ComputeRenderingContext&, v8::Local<v8::Object>, v8::Isolate*);

template <class CallbackInfo>
inline void V8SetReturnValue(const CallbackInfo& callbackInfo, OffscreenCanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrWebGL2ComputeRenderingContext& impl) {
  V8SetReturnValue(callbackInfo, ToV8(impl, callbackInfo.Holder(), callbackInfo.GetIsolate()));
}

template <class CallbackInfo>
inline void V8SetReturnValue(const CallbackInfo& callbackInfo, OffscreenCanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrWebGL2ComputeRenderingContext& impl, v8::Local<v8::Object> creationContext) {
  V8SetReturnValue(callbackInfo, ToV8(impl, creationContext, callbackInfo.GetIsolate()));
}

template <>
struct NativeValueTraits<OffscreenCanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrWebGL2ComputeRenderingContext> : public NativeValueTraitsBase<OffscreenCanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrWebGL2ComputeRenderingContext> {
  MODULES_EXPORT static OffscreenCanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrWebGL2ComputeRenderingContext NativeValue(v8::Isolate*, v8::Local<v8::Value>, ExceptionState&);
  MODULES_EXPORT static OffscreenCanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrWebGL2ComputeRenderingContext NullValue() { return OffscreenCanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrWebGL2ComputeRenderingContext(); }
};

template <>
struct V8TypeOf<OffscreenCanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrWebGL2ComputeRenderingContext> {
  typedef V8OffscreenCanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrWebGL2ComputeRenderingContext Type;
};

}  // namespace blink

// We need to set canInitializeWithMemset=true because HeapVector supports
// items that can initialize with memset or have a vtable. It is safe to
// set canInitializeWithMemset=true for a union type object in practice.
// See https://codereview.chromium.org/1118993002/#msg5 for more details.
WTF_ALLOW_MOVE_AND_INIT_WITH_MEM_FUNCTIONS(blink::OffscreenCanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrWebGL2ComputeRenderingContext)

#endif  // THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_OFFSCREEN_RENDERING_CONTEXT_H_
