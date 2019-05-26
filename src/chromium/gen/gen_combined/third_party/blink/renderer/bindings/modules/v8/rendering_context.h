// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_RENDERING_CONTEXT_H_
#define THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_RENDERING_CONTEXT_H_

#include "base/optional.h"
#include "third_party/blink/renderer/bindings/core/v8/dictionary.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_binding_for_core.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class CanvasRenderingContext2D;
class GPUCanvasContext;
class ImageBitmapRenderingContext;
class WebGL2ComputeRenderingContext;
class WebGL2RenderingContext;
class WebGLRenderingContext;
class XRPresentationContext;

class MODULES_EXPORT CanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrWebGL2ComputeRenderingContextOrImageBitmapRenderingContextOrXRPresentationContextOrGPUCanvasContext final {
  DISALLOW_NEW();
 public:
  CanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrWebGL2ComputeRenderingContextOrImageBitmapRenderingContextOrXRPresentationContextOrGPUCanvasContext();
  bool IsNull() const { return type_ == SpecificType::kNone; }

  bool IsCanvasRenderingContext2D() const { return type_ == SpecificType::kCanvasRenderingContext2D; }
  CanvasRenderingContext2D* GetAsCanvasRenderingContext2D() const;
  void SetCanvasRenderingContext2D(CanvasRenderingContext2D*);
  static CanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrWebGL2ComputeRenderingContextOrImageBitmapRenderingContextOrXRPresentationContextOrGPUCanvasContext FromCanvasRenderingContext2D(CanvasRenderingContext2D*);

  bool IsGPUCanvasContext() const { return type_ == SpecificType::kGPUCanvasContext; }
  GPUCanvasContext* GetAsGPUCanvasContext() const;
  void SetGPUCanvasContext(GPUCanvasContext*);
  static CanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrWebGL2ComputeRenderingContextOrImageBitmapRenderingContextOrXRPresentationContextOrGPUCanvasContext FromGPUCanvasContext(GPUCanvasContext*);

  bool IsImageBitmapRenderingContext() const { return type_ == SpecificType::kImageBitmapRenderingContext; }
  ImageBitmapRenderingContext* GetAsImageBitmapRenderingContext() const;
  void SetImageBitmapRenderingContext(ImageBitmapRenderingContext*);
  static CanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrWebGL2ComputeRenderingContextOrImageBitmapRenderingContextOrXRPresentationContextOrGPUCanvasContext FromImageBitmapRenderingContext(ImageBitmapRenderingContext*);

  bool IsWebGL2ComputeRenderingContext() const { return type_ == SpecificType::kWebGL2ComputeRenderingContext; }
  WebGL2ComputeRenderingContext* GetAsWebGL2ComputeRenderingContext() const;
  void SetWebGL2ComputeRenderingContext(WebGL2ComputeRenderingContext*);
  static CanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrWebGL2ComputeRenderingContextOrImageBitmapRenderingContextOrXRPresentationContextOrGPUCanvasContext FromWebGL2ComputeRenderingContext(WebGL2ComputeRenderingContext*);

  bool IsWebGL2RenderingContext() const { return type_ == SpecificType::kWebGL2RenderingContext; }
  WebGL2RenderingContext* GetAsWebGL2RenderingContext() const;
  void SetWebGL2RenderingContext(WebGL2RenderingContext*);
  static CanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrWebGL2ComputeRenderingContextOrImageBitmapRenderingContextOrXRPresentationContextOrGPUCanvasContext FromWebGL2RenderingContext(WebGL2RenderingContext*);

  bool IsWebGLRenderingContext() const { return type_ == SpecificType::kWebGLRenderingContext; }
  WebGLRenderingContext* GetAsWebGLRenderingContext() const;
  void SetWebGLRenderingContext(WebGLRenderingContext*);
  static CanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrWebGL2ComputeRenderingContextOrImageBitmapRenderingContextOrXRPresentationContextOrGPUCanvasContext FromWebGLRenderingContext(WebGLRenderingContext*);

  bool IsXRPresentationContext() const { return type_ == SpecificType::kXRPresentationContext; }
  XRPresentationContext* GetAsXRPresentationContext() const;
  void SetXRPresentationContext(XRPresentationContext*);
  static CanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrWebGL2ComputeRenderingContextOrImageBitmapRenderingContextOrXRPresentationContextOrGPUCanvasContext FromXRPresentationContext(XRPresentationContext*);

  CanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrWebGL2ComputeRenderingContextOrImageBitmapRenderingContextOrXRPresentationContextOrGPUCanvasContext(const CanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrWebGL2ComputeRenderingContextOrImageBitmapRenderingContextOrXRPresentationContextOrGPUCanvasContext&);
  ~CanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrWebGL2ComputeRenderingContextOrImageBitmapRenderingContextOrXRPresentationContextOrGPUCanvasContext();
  CanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrWebGL2ComputeRenderingContextOrImageBitmapRenderingContextOrXRPresentationContextOrGPUCanvasContext& operator=(const CanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrWebGL2ComputeRenderingContextOrImageBitmapRenderingContextOrXRPresentationContextOrGPUCanvasContext&);
  void Trace(blink::Visitor*);

 private:
  enum class SpecificType {
    kNone,
    kCanvasRenderingContext2D,
    kGPUCanvasContext,
    kImageBitmapRenderingContext,
    kWebGL2ComputeRenderingContext,
    kWebGL2RenderingContext,
    kWebGLRenderingContext,
    kXRPresentationContext,
  };
  SpecificType type_;

  Member<CanvasRenderingContext2D> canvas_rendering_context_2d_;
  Member<GPUCanvasContext> gpu_canvas_context_;
  Member<ImageBitmapRenderingContext> image_bitmap_rendering_context_;
  Member<WebGL2ComputeRenderingContext> webgl2_compute_rendering_context_;
  Member<WebGL2RenderingContext> webgl2_rendering_context_;
  Member<WebGLRenderingContext> webgl_rendering_context_;
  Member<XRPresentationContext> xr_presentation_context_;

  friend MODULES_EXPORT v8::Local<v8::Value> ToV8(const CanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrWebGL2ComputeRenderingContextOrImageBitmapRenderingContextOrXRPresentationContextOrGPUCanvasContext&, v8::Local<v8::Object>, v8::Isolate*);
};

class V8CanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrWebGL2ComputeRenderingContextOrImageBitmapRenderingContextOrXRPresentationContextOrGPUCanvasContext final {
 public:
  MODULES_EXPORT static void ToImpl(v8::Isolate*, v8::Local<v8::Value>, CanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrWebGL2ComputeRenderingContextOrImageBitmapRenderingContextOrXRPresentationContextOrGPUCanvasContext&, UnionTypeConversionMode, ExceptionState&);
};

MODULES_EXPORT v8::Local<v8::Value> ToV8(const CanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrWebGL2ComputeRenderingContextOrImageBitmapRenderingContextOrXRPresentationContextOrGPUCanvasContext&, v8::Local<v8::Object>, v8::Isolate*);

template <class CallbackInfo>
inline void V8SetReturnValue(const CallbackInfo& callbackInfo, CanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrWebGL2ComputeRenderingContextOrImageBitmapRenderingContextOrXRPresentationContextOrGPUCanvasContext& impl) {
  V8SetReturnValue(callbackInfo, ToV8(impl, callbackInfo.Holder(), callbackInfo.GetIsolate()));
}

template <class CallbackInfo>
inline void V8SetReturnValue(const CallbackInfo& callbackInfo, CanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrWebGL2ComputeRenderingContextOrImageBitmapRenderingContextOrXRPresentationContextOrGPUCanvasContext& impl, v8::Local<v8::Object> creationContext) {
  V8SetReturnValue(callbackInfo, ToV8(impl, creationContext, callbackInfo.GetIsolate()));
}

template <>
struct NativeValueTraits<CanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrWebGL2ComputeRenderingContextOrImageBitmapRenderingContextOrXRPresentationContextOrGPUCanvasContext> : public NativeValueTraitsBase<CanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrWebGL2ComputeRenderingContextOrImageBitmapRenderingContextOrXRPresentationContextOrGPUCanvasContext> {
  MODULES_EXPORT static CanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrWebGL2ComputeRenderingContextOrImageBitmapRenderingContextOrXRPresentationContextOrGPUCanvasContext NativeValue(v8::Isolate*, v8::Local<v8::Value>, ExceptionState&);
  MODULES_EXPORT static CanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrWebGL2ComputeRenderingContextOrImageBitmapRenderingContextOrXRPresentationContextOrGPUCanvasContext NullValue() { return CanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrWebGL2ComputeRenderingContextOrImageBitmapRenderingContextOrXRPresentationContextOrGPUCanvasContext(); }
};

template <>
struct V8TypeOf<CanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrWebGL2ComputeRenderingContextOrImageBitmapRenderingContextOrXRPresentationContextOrGPUCanvasContext> {
  typedef V8CanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrWebGL2ComputeRenderingContextOrImageBitmapRenderingContextOrXRPresentationContextOrGPUCanvasContext Type;
};

}  // namespace blink

// We need to set canInitializeWithMemset=true because HeapVector supports
// items that can initialize with memset or have a vtable. It is safe to
// set canInitializeWithMemset=true for a union type object in practice.
// See https://codereview.chromium.org/1118993002/#msg5 for more details.
WTF_ALLOW_MOVE_AND_INIT_WITH_MEM_FUNCTIONS(blink::CanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrWebGL2ComputeRenderingContextOrImageBitmapRenderingContextOrXRPresentationContextOrGPUCanvasContext)

#endif  // THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_RENDERING_CONTEXT_H_
