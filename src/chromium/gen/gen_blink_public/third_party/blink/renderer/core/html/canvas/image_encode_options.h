// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_HTML_CANVAS_IMAGE_ENCODE_OPTIONS_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_HTML_CANVAS_IMAGE_ENCODE_OPTIONS_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class CORE_EXPORT ImageEncodeOptions : public IDLDictionaryBase {
 public:
  static ImageEncodeOptions* Create() { return MakeGarbageCollected<ImageEncodeOptions>(); }

  ImageEncodeOptions();
  virtual ~ImageEncodeOptions();

  bool hasColorSpace() const { return !color_space_.IsNull(); }
  const String& colorSpace() const {
    return color_space_;
  }
  inline void setColorSpace(const String&);

  bool hasPixelFormat() const { return !pixel_format_.IsNull(); }
  const String& pixelFormat() const {
    return pixel_format_;
  }
  inline void setPixelFormat(const String&);

  bool hasQuality() const { return has_quality_; }
  double quality() const {
    DCHECK(has_quality_);
    return quality_;
  }
  inline void setQuality(double);

  bool hasType() const { return !type_.IsNull(); }
  const String& type() const {
    return type_;
  }
  inline void setType(const String&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_quality_ = false;

  String color_space_;
  String pixel_format_;
  double quality_;
  String type_;

  friend class V8ImageEncodeOptions;
};

void ImageEncodeOptions::setColorSpace(const String& value) {
  color_space_ = value;
}

void ImageEncodeOptions::setPixelFormat(const String& value) {
  pixel_format_ = value;
}

void ImageEncodeOptions::setQuality(double value) {
  quality_ = value;
  has_quality_ = true;
}

void ImageEncodeOptions::setType(const String& value) {
  type_ = value;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_HTML_CANVAS_IMAGE_ENCODE_OPTIONS_H_
