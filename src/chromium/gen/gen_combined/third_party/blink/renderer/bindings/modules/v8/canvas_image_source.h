// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_CANVAS_IMAGE_SOURCE_H_
#define THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_CANVAS_IMAGE_SOURCE_H_

#include "base/optional.h"
#include "third_party/blink/renderer/bindings/core/v8/dictionary.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_binding_for_core.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class CSSStyleImageValue;
class HTMLCanvasElement;
class HTMLImageElement;
class HTMLVideoElement;
class ImageBitmap;
class OffscreenCanvas;
class SVGImageElement;

class MODULES_EXPORT CSSImageValueOrHTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmapOrOffscreenCanvas final {
  DISALLOW_NEW();
 public:
  CSSImageValueOrHTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmapOrOffscreenCanvas();
  bool IsNull() const { return type_ == SpecificType::kNone; }

  bool IsCSSImageValue() const { return type_ == SpecificType::kCSSImageValue; }
  CSSStyleImageValue* GetAsCSSImageValue() const;
  void SetCSSImageValue(CSSStyleImageValue*);
  static CSSImageValueOrHTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmapOrOffscreenCanvas FromCSSImageValue(CSSStyleImageValue*);

  bool IsHTMLCanvasElement() const { return type_ == SpecificType::kHTMLCanvasElement; }
  HTMLCanvasElement* GetAsHTMLCanvasElement() const;
  void SetHTMLCanvasElement(HTMLCanvasElement*);
  static CSSImageValueOrHTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmapOrOffscreenCanvas FromHTMLCanvasElement(HTMLCanvasElement*);

  bool IsHTMLImageElement() const { return type_ == SpecificType::kHTMLImageElement; }
  HTMLImageElement* GetAsHTMLImageElement() const;
  void SetHTMLImageElement(HTMLImageElement*);
  static CSSImageValueOrHTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmapOrOffscreenCanvas FromHTMLImageElement(HTMLImageElement*);

  bool IsHTMLVideoElement() const { return type_ == SpecificType::kHTMLVideoElement; }
  HTMLVideoElement* GetAsHTMLVideoElement() const;
  void SetHTMLVideoElement(HTMLVideoElement*);
  static CSSImageValueOrHTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmapOrOffscreenCanvas FromHTMLVideoElement(HTMLVideoElement*);

  bool IsImageBitmap() const { return type_ == SpecificType::kImageBitmap; }
  ImageBitmap* GetAsImageBitmap() const;
  void SetImageBitmap(ImageBitmap*);
  static CSSImageValueOrHTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmapOrOffscreenCanvas FromImageBitmap(ImageBitmap*);

  bool IsOffscreenCanvas() const { return type_ == SpecificType::kOffscreenCanvas; }
  OffscreenCanvas* GetAsOffscreenCanvas() const;
  void SetOffscreenCanvas(OffscreenCanvas*);
  static CSSImageValueOrHTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmapOrOffscreenCanvas FromOffscreenCanvas(OffscreenCanvas*);

  bool IsSVGImageElement() const { return type_ == SpecificType::kSVGImageElement; }
  SVGImageElement* GetAsSVGImageElement() const;
  void SetSVGImageElement(SVGImageElement*);
  static CSSImageValueOrHTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmapOrOffscreenCanvas FromSVGImageElement(SVGImageElement*);

  CSSImageValueOrHTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmapOrOffscreenCanvas(const CSSImageValueOrHTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmapOrOffscreenCanvas&);
  ~CSSImageValueOrHTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmapOrOffscreenCanvas();
  CSSImageValueOrHTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmapOrOffscreenCanvas& operator=(const CSSImageValueOrHTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmapOrOffscreenCanvas&);
  void Trace(blink::Visitor*);

 private:
  enum class SpecificType {
    kNone,
    kCSSImageValue,
    kHTMLCanvasElement,
    kHTMLImageElement,
    kHTMLVideoElement,
    kImageBitmap,
    kOffscreenCanvas,
    kSVGImageElement,
  };
  SpecificType type_;

  Member<CSSStyleImageValue> css_image_value_;
  Member<HTMLCanvasElement> html_canvas_element_;
  Member<HTMLImageElement> html_image_element_;
  Member<HTMLVideoElement> html_video_element_;
  Member<ImageBitmap> image_bitmap_;
  Member<OffscreenCanvas> offscreen_canvas_;
  Member<SVGImageElement> svg_image_element_;

  friend MODULES_EXPORT v8::Local<v8::Value> ToV8(const CSSImageValueOrHTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmapOrOffscreenCanvas&, v8::Local<v8::Object>, v8::Isolate*);
};

class V8CSSImageValueOrHTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmapOrOffscreenCanvas final {
 public:
  MODULES_EXPORT static void ToImpl(v8::Isolate*, v8::Local<v8::Value>, CSSImageValueOrHTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmapOrOffscreenCanvas&, UnionTypeConversionMode, ExceptionState&);
};

MODULES_EXPORT v8::Local<v8::Value> ToV8(const CSSImageValueOrHTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmapOrOffscreenCanvas&, v8::Local<v8::Object>, v8::Isolate*);

template <class CallbackInfo>
inline void V8SetReturnValue(const CallbackInfo& callbackInfo, CSSImageValueOrHTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmapOrOffscreenCanvas& impl) {
  V8SetReturnValue(callbackInfo, ToV8(impl, callbackInfo.Holder(), callbackInfo.GetIsolate()));
}

template <class CallbackInfo>
inline void V8SetReturnValue(const CallbackInfo& callbackInfo, CSSImageValueOrHTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmapOrOffscreenCanvas& impl, v8::Local<v8::Object> creationContext) {
  V8SetReturnValue(callbackInfo, ToV8(impl, creationContext, callbackInfo.GetIsolate()));
}

template <>
struct NativeValueTraits<CSSImageValueOrHTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmapOrOffscreenCanvas> : public NativeValueTraitsBase<CSSImageValueOrHTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmapOrOffscreenCanvas> {
  MODULES_EXPORT static CSSImageValueOrHTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmapOrOffscreenCanvas NativeValue(v8::Isolate*, v8::Local<v8::Value>, ExceptionState&);
  MODULES_EXPORT static CSSImageValueOrHTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmapOrOffscreenCanvas NullValue() { return CSSImageValueOrHTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmapOrOffscreenCanvas(); }
};

template <>
struct V8TypeOf<CSSImageValueOrHTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmapOrOffscreenCanvas> {
  typedef V8CSSImageValueOrHTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmapOrOffscreenCanvas Type;
};

}  // namespace blink

// We need to set canInitializeWithMemset=true because HeapVector supports
// items that can initialize with memset or have a vtable. It is safe to
// set canInitializeWithMemset=true for a union type object in practice.
// See https://codereview.chromium.org/1118993002/#msg5 for more details.
WTF_ALLOW_MOVE_AND_INIT_WITH_MEM_FUNCTIONS(blink::CSSImageValueOrHTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmapOrOffscreenCanvas)

#endif  // THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_CANVAS_IMAGE_SOURCE_H_
