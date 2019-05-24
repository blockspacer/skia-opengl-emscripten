// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_HTML_CANVAS_IMAGE_DATA_COLOR_SETTINGS_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_HTML_CANVAS_IMAGE_DATA_COLOR_SETTINGS_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class CORE_EXPORT ImageDataColorSettings : public IDLDictionaryBase {
 public:
  static ImageDataColorSettings* Create() { return MakeGarbageCollected<ImageDataColorSettings>(); }

  ImageDataColorSettings();
  virtual ~ImageDataColorSettings();

  bool hasColorSpace() const { return !color_space_.IsNull(); }
  const String& colorSpace() const {
    return color_space_;
  }
  inline void setColorSpace(const String&);

  bool hasStorageFormat() const { return !storage_format_.IsNull(); }
  const String& storageFormat() const {
    return storage_format_;
  }
  inline void setStorageFormat(const String&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:

  String color_space_;
  String storage_format_;

  friend class V8ImageDataColorSettings;
};

void ImageDataColorSettings::setColorSpace(const String& value) {
  color_space_ = value;
}

void ImageDataColorSettings::setStorageFormat(const String& value) {
  storage_format_ = value;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_HTML_CANVAS_IMAGE_DATA_COLOR_SETTINGS_H_
