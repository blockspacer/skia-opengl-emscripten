// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_IMAGEBITMAP_IMAGE_BITMAP_OPTIONS_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_IMAGEBITMAP_IMAGE_BITMAP_OPTIONS_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class CORE_EXPORT ImageBitmapOptions : public IDLDictionaryBase {
 public:
  static ImageBitmapOptions* Create() { return MakeGarbageCollected<ImageBitmapOptions>(); }

  ImageBitmapOptions();
  virtual ~ImageBitmapOptions();

  bool hasColorSpaceConversion() const { return !color_space_conversion_.IsNull(); }
  const String& colorSpaceConversion() const {
    return color_space_conversion_;
  }
  inline void setColorSpaceConversion(const String&);

  bool hasImageOrientation() const { return !image_orientation_.IsNull(); }
  const String& imageOrientation() const {
    return image_orientation_;
  }
  inline void setImageOrientation(const String&);

  bool hasImagePixelFormat() const { return !image_pixel_format_.IsNull(); }
  const String& imagePixelFormat() const {
    return image_pixel_format_;
  }
  inline void setImagePixelFormat(const String&);

  bool hasPremultiplyAlpha() const { return !premultiply_alpha_.IsNull(); }
  const String& premultiplyAlpha() const {
    return premultiply_alpha_;
  }
  inline void setPremultiplyAlpha(const String&);

  bool hasResizeHeight() const { return has_resize_height_; }
  uint32_t resizeHeight() const {
    DCHECK(has_resize_height_);
    return resize_height_;
  }
  inline void setResizeHeight(uint32_t);

  bool hasResizeQuality() const { return !resize_quality_.IsNull(); }
  const String& resizeQuality() const {
    return resize_quality_;
  }
  inline void setResizeQuality(const String&);

  bool hasResizeWidth() const { return has_resize_width_; }
  uint32_t resizeWidth() const {
    DCHECK(has_resize_width_);
    return resize_width_;
  }
  inline void setResizeWidth(uint32_t);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_resize_height_ = false;
  bool has_resize_width_ = false;

  String color_space_conversion_;
  String image_orientation_;
  String image_pixel_format_;
  String premultiply_alpha_;
  uint32_t resize_height_;
  String resize_quality_;
  uint32_t resize_width_;

  friend class V8ImageBitmapOptions;
};

void ImageBitmapOptions::setColorSpaceConversion(const String& value) {
  color_space_conversion_ = value;
}

void ImageBitmapOptions::setImageOrientation(const String& value) {
  image_orientation_ = value;
}

void ImageBitmapOptions::setImagePixelFormat(const String& value) {
  image_pixel_format_ = value;
}

void ImageBitmapOptions::setPremultiplyAlpha(const String& value) {
  premultiply_alpha_ = value;
}

void ImageBitmapOptions::setResizeHeight(uint32_t value) {
  resize_height_ = value;
  has_resize_height_ = true;
}

void ImageBitmapOptions::setResizeQuality(const String& value) {
  resize_quality_ = value;
}

void ImageBitmapOptions::setResizeWidth(uint32_t value) {
  resize_width_ = value;
  has_resize_width_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_IMAGEBITMAP_IMAGE_BITMAP_OPTIONS_H_
