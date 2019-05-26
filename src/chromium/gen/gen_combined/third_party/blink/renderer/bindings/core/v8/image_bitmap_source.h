// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_IMAGE_BITMAP_SOURCE_H_
#define THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_IMAGE_BITMAP_SOURCE_H_

#include "base/optional.h"
#include "third_party/blink/renderer/bindings/core/v8/dictionary.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_binding_for_core.h"
#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class Blob;
class HTMLCanvasElement;
class HTMLImageElement;
class HTMLVideoElement;
class ImageBitmap;
class ImageData;
class OffscreenCanvas;
class SVGImageElement;

class CORE_EXPORT HTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmapOrOffscreenCanvas final {
  DISALLOW_NEW();
 public:
  HTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmapOrOffscreenCanvas();
  bool IsNull() const { return type_ == SpecificType::kNone; }

  bool IsBlob() const { return type_ == SpecificType::kBlob; }
  Blob* GetAsBlob() const;
  void SetBlob(Blob*);
  static HTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmapOrOffscreenCanvas FromBlob(Blob*);

  bool IsHTMLCanvasElement() const { return type_ == SpecificType::kHTMLCanvasElement; }
  HTMLCanvasElement* GetAsHTMLCanvasElement() const;
  void SetHTMLCanvasElement(HTMLCanvasElement*);
  static HTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmapOrOffscreenCanvas FromHTMLCanvasElement(HTMLCanvasElement*);

  bool IsHTMLImageElement() const { return type_ == SpecificType::kHTMLImageElement; }
  HTMLImageElement* GetAsHTMLImageElement() const;
  void SetHTMLImageElement(HTMLImageElement*);
  static HTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmapOrOffscreenCanvas FromHTMLImageElement(HTMLImageElement*);

  bool IsHTMLVideoElement() const { return type_ == SpecificType::kHTMLVideoElement; }
  HTMLVideoElement* GetAsHTMLVideoElement() const;
  void SetHTMLVideoElement(HTMLVideoElement*);
  static HTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmapOrOffscreenCanvas FromHTMLVideoElement(HTMLVideoElement*);

  bool IsImageBitmap() const { return type_ == SpecificType::kImageBitmap; }
  ImageBitmap* GetAsImageBitmap() const;
  void SetImageBitmap(ImageBitmap*);
  static HTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmapOrOffscreenCanvas FromImageBitmap(ImageBitmap*);

  bool IsImageData() const { return type_ == SpecificType::kImageData; }
  ImageData* GetAsImageData() const;
  void SetImageData(ImageData*);
  static HTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmapOrOffscreenCanvas FromImageData(ImageData*);

  bool IsOffscreenCanvas() const { return type_ == SpecificType::kOffscreenCanvas; }
  OffscreenCanvas* GetAsOffscreenCanvas() const;
  void SetOffscreenCanvas(OffscreenCanvas*);
  static HTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmapOrOffscreenCanvas FromOffscreenCanvas(OffscreenCanvas*);

  bool IsSVGImageElement() const { return type_ == SpecificType::kSVGImageElement; }
  SVGImageElement* GetAsSVGImageElement() const;
  void SetSVGImageElement(SVGImageElement*);
  static HTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmapOrOffscreenCanvas FromSVGImageElement(SVGImageElement*);

  HTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmapOrOffscreenCanvas(const HTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmapOrOffscreenCanvas&);
  ~HTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmapOrOffscreenCanvas();
  HTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmapOrOffscreenCanvas& operator=(const HTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmapOrOffscreenCanvas&);
  void Trace(blink::Visitor*);

 private:
  enum class SpecificType {
    kNone,
    kBlob,
    kHTMLCanvasElement,
    kHTMLImageElement,
    kHTMLVideoElement,
    kImageBitmap,
    kImageData,
    kOffscreenCanvas,
    kSVGImageElement,
  };
  SpecificType type_;

  Member<Blob> blob_;
  Member<HTMLCanvasElement> html_canvas_element_;
  Member<HTMLImageElement> html_image_element_;
  Member<HTMLVideoElement> html_video_element_;
  Member<ImageBitmap> image_bitmap_;
  Member<ImageData> image_data_;
  Member<OffscreenCanvas> offscreen_canvas_;
  Member<SVGImageElement> svg_image_element_;

  friend CORE_EXPORT v8::Local<v8::Value> ToV8(const HTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmapOrOffscreenCanvas&, v8::Local<v8::Object>, v8::Isolate*);
};

class V8HTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmapOrOffscreenCanvas final {
 public:
  CORE_EXPORT static void ToImpl(v8::Isolate*, v8::Local<v8::Value>, HTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmapOrOffscreenCanvas&, UnionTypeConversionMode, ExceptionState&);
};

CORE_EXPORT v8::Local<v8::Value> ToV8(const HTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmapOrOffscreenCanvas&, v8::Local<v8::Object>, v8::Isolate*);

template <class CallbackInfo>
inline void V8SetReturnValue(const CallbackInfo& callbackInfo, HTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmapOrOffscreenCanvas& impl) {
  V8SetReturnValue(callbackInfo, ToV8(impl, callbackInfo.Holder(), callbackInfo.GetIsolate()));
}

template <class CallbackInfo>
inline void V8SetReturnValue(const CallbackInfo& callbackInfo, HTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmapOrOffscreenCanvas& impl, v8::Local<v8::Object> creationContext) {
  V8SetReturnValue(callbackInfo, ToV8(impl, creationContext, callbackInfo.GetIsolate()));
}

template <>
struct NativeValueTraits<HTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmapOrOffscreenCanvas> : public NativeValueTraitsBase<HTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmapOrOffscreenCanvas> {
  CORE_EXPORT static HTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmapOrOffscreenCanvas NativeValue(v8::Isolate*, v8::Local<v8::Value>, ExceptionState&);
  CORE_EXPORT static HTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmapOrOffscreenCanvas NullValue() { return HTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmapOrOffscreenCanvas(); }
};

template <>
struct V8TypeOf<HTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmapOrOffscreenCanvas> {
  typedef V8HTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmapOrOffscreenCanvas Type;
};

}  // namespace blink

// We need to set canInitializeWithMemset=true because HeapVector supports
// items that can initialize with memset or have a vtable. It is safe to
// set canInitializeWithMemset=true for a union type object in practice.
// See https://codereview.chromium.org/1118993002/#msg5 for more details.
WTF_ALLOW_MOVE_AND_INIT_WITH_MEM_FUNCTIONS(blink::HTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmapOrOffscreenCanvas)

#endif  // THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_IMAGE_BITMAP_SOURCE_H_
