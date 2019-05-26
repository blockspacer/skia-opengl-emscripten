// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_WEBGL_RENDERING_CONTEXT_OR_WEBGL2_RENDERING_CONTEXT_H_
#define THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_WEBGL_RENDERING_CONTEXT_OR_WEBGL2_RENDERING_CONTEXT_H_

#include "base/optional.h"
#include "third_party/blink/renderer/bindings/core/v8/dictionary.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_binding_for_core.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class WebGL2RenderingContext;
class WebGLRenderingContext;

class MODULES_EXPORT WebGLRenderingContextOrWebGL2RenderingContext final {
  DISALLOW_NEW();
 public:
  WebGLRenderingContextOrWebGL2RenderingContext();
  bool IsNull() const { return type_ == SpecificType::kNone; }

  bool IsWebGL2RenderingContext() const { return type_ == SpecificType::kWebGL2RenderingContext; }
  WebGL2RenderingContext* GetAsWebGL2RenderingContext() const;
  void SetWebGL2RenderingContext(WebGL2RenderingContext*);
  static WebGLRenderingContextOrWebGL2RenderingContext FromWebGL2RenderingContext(WebGL2RenderingContext*);

  bool IsWebGLRenderingContext() const { return type_ == SpecificType::kWebGLRenderingContext; }
  WebGLRenderingContext* GetAsWebGLRenderingContext() const;
  void SetWebGLRenderingContext(WebGLRenderingContext*);
  static WebGLRenderingContextOrWebGL2RenderingContext FromWebGLRenderingContext(WebGLRenderingContext*);

  WebGLRenderingContextOrWebGL2RenderingContext(const WebGLRenderingContextOrWebGL2RenderingContext&);
  ~WebGLRenderingContextOrWebGL2RenderingContext();
  WebGLRenderingContextOrWebGL2RenderingContext& operator=(const WebGLRenderingContextOrWebGL2RenderingContext&);
  void Trace(blink::Visitor*);

 private:
  enum class SpecificType {
    kNone,
    kWebGL2RenderingContext,
    kWebGLRenderingContext,
  };
  SpecificType type_;

  Member<WebGL2RenderingContext> webgl2_rendering_context_;
  Member<WebGLRenderingContext> webgl_rendering_context_;

  friend MODULES_EXPORT v8::Local<v8::Value> ToV8(const WebGLRenderingContextOrWebGL2RenderingContext&, v8::Local<v8::Object>, v8::Isolate*);
};

class V8WebGLRenderingContextOrWebGL2RenderingContext final {
 public:
  MODULES_EXPORT static void ToImpl(v8::Isolate*, v8::Local<v8::Value>, WebGLRenderingContextOrWebGL2RenderingContext&, UnionTypeConversionMode, ExceptionState&);
};

MODULES_EXPORT v8::Local<v8::Value> ToV8(const WebGLRenderingContextOrWebGL2RenderingContext&, v8::Local<v8::Object>, v8::Isolate*);

template <class CallbackInfo>
inline void V8SetReturnValue(const CallbackInfo& callbackInfo, WebGLRenderingContextOrWebGL2RenderingContext& impl) {
  V8SetReturnValue(callbackInfo, ToV8(impl, callbackInfo.Holder(), callbackInfo.GetIsolate()));
}

template <class CallbackInfo>
inline void V8SetReturnValue(const CallbackInfo& callbackInfo, WebGLRenderingContextOrWebGL2RenderingContext& impl, v8::Local<v8::Object> creationContext) {
  V8SetReturnValue(callbackInfo, ToV8(impl, creationContext, callbackInfo.GetIsolate()));
}

template <>
struct NativeValueTraits<WebGLRenderingContextOrWebGL2RenderingContext> : public NativeValueTraitsBase<WebGLRenderingContextOrWebGL2RenderingContext> {
  MODULES_EXPORT static WebGLRenderingContextOrWebGL2RenderingContext NativeValue(v8::Isolate*, v8::Local<v8::Value>, ExceptionState&);
  MODULES_EXPORT static WebGLRenderingContextOrWebGL2RenderingContext NullValue() { return WebGLRenderingContextOrWebGL2RenderingContext(); }
};

template <>
struct V8TypeOf<WebGLRenderingContextOrWebGL2RenderingContext> {
  typedef V8WebGLRenderingContextOrWebGL2RenderingContext Type;
};

}  // namespace blink

// We need to set canInitializeWithMemset=true because HeapVector supports
// items that can initialize with memset or have a vtable. It is safe to
// set canInitializeWithMemset=true for a union type object in practice.
// See https://codereview.chromium.org/1118993002/#msg5 for more details.
WTF_ALLOW_MOVE_AND_INIT_WITH_MEM_FUNCTIONS(blink::WebGLRenderingContextOrWebGL2RenderingContext)

#endif  // THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_WEBGL_RENDERING_CONTEXT_OR_WEBGL2_RENDERING_CONTEXT_H_
