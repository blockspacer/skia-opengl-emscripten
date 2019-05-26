// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_HTML_CANVAS_ELEMENT_OR_OFFSCREEN_CANVAS_H_
#define THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_HTML_CANVAS_ELEMENT_OR_OFFSCREEN_CANVAS_H_

#include "base/optional.h"
#include "third_party/blink/renderer/bindings/core/v8/dictionary.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_binding_for_core.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class HTMLCanvasElement;
class OffscreenCanvas;

class MODULES_EXPORT HTMLCanvasElementOrOffscreenCanvas final {
  DISALLOW_NEW();
 public:
  HTMLCanvasElementOrOffscreenCanvas();
  bool IsNull() const { return type_ == SpecificType::kNone; }

  bool IsHTMLCanvasElement() const { return type_ == SpecificType::kHTMLCanvasElement; }
  HTMLCanvasElement* GetAsHTMLCanvasElement() const;
  void SetHTMLCanvasElement(HTMLCanvasElement*);
  static HTMLCanvasElementOrOffscreenCanvas FromHTMLCanvasElement(HTMLCanvasElement*);

  bool IsOffscreenCanvas() const { return type_ == SpecificType::kOffscreenCanvas; }
  OffscreenCanvas* GetAsOffscreenCanvas() const;
  void SetOffscreenCanvas(OffscreenCanvas*);
  static HTMLCanvasElementOrOffscreenCanvas FromOffscreenCanvas(OffscreenCanvas*);

  HTMLCanvasElementOrOffscreenCanvas(const HTMLCanvasElementOrOffscreenCanvas&);
  ~HTMLCanvasElementOrOffscreenCanvas();
  HTMLCanvasElementOrOffscreenCanvas& operator=(const HTMLCanvasElementOrOffscreenCanvas&);
  void Trace(blink::Visitor*);

 private:
  enum class SpecificType {
    kNone,
    kHTMLCanvasElement,
    kOffscreenCanvas,
  };
  SpecificType type_;

  Member<HTMLCanvasElement> html_canvas_element_;
  Member<OffscreenCanvas> offscreen_canvas_;

  friend MODULES_EXPORT v8::Local<v8::Value> ToV8(const HTMLCanvasElementOrOffscreenCanvas&, v8::Local<v8::Object>, v8::Isolate*);
};

class V8HTMLCanvasElementOrOffscreenCanvas final {
 public:
  MODULES_EXPORT static void ToImpl(v8::Isolate*, v8::Local<v8::Value>, HTMLCanvasElementOrOffscreenCanvas&, UnionTypeConversionMode, ExceptionState&);
};

MODULES_EXPORT v8::Local<v8::Value> ToV8(const HTMLCanvasElementOrOffscreenCanvas&, v8::Local<v8::Object>, v8::Isolate*);

template <class CallbackInfo>
inline void V8SetReturnValue(const CallbackInfo& callbackInfo, HTMLCanvasElementOrOffscreenCanvas& impl) {
  V8SetReturnValue(callbackInfo, ToV8(impl, callbackInfo.Holder(), callbackInfo.GetIsolate()));
}

template <class CallbackInfo>
inline void V8SetReturnValue(const CallbackInfo& callbackInfo, HTMLCanvasElementOrOffscreenCanvas& impl, v8::Local<v8::Object> creationContext) {
  V8SetReturnValue(callbackInfo, ToV8(impl, creationContext, callbackInfo.GetIsolate()));
}

template <>
struct NativeValueTraits<HTMLCanvasElementOrOffscreenCanvas> : public NativeValueTraitsBase<HTMLCanvasElementOrOffscreenCanvas> {
  MODULES_EXPORT static HTMLCanvasElementOrOffscreenCanvas NativeValue(v8::Isolate*, v8::Local<v8::Value>, ExceptionState&);
  MODULES_EXPORT static HTMLCanvasElementOrOffscreenCanvas NullValue() { return HTMLCanvasElementOrOffscreenCanvas(); }
};

template <>
struct V8TypeOf<HTMLCanvasElementOrOffscreenCanvas> {
  typedef V8HTMLCanvasElementOrOffscreenCanvas Type;
};

}  // namespace blink

// We need to set canInitializeWithMemset=true because HeapVector supports
// items that can initialize with memset or have a vtable. It is safe to
// set canInitializeWithMemset=true for a union type object in practice.
// See https://codereview.chromium.org/1118993002/#msg5 for more details.
WTF_ALLOW_MOVE_AND_INIT_WITH_MEM_FUNCTIONS(blink::HTMLCanvasElementOrOffscreenCanvas)

#endif  // THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_HTML_CANVAS_ELEMENT_OR_OFFSCREEN_CANVAS_H_
