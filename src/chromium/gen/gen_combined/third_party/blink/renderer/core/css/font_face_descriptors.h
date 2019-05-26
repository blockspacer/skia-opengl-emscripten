// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_CSS_FONT_FACE_DESCRIPTORS_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_CSS_FONT_FACE_DESCRIPTORS_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class CORE_EXPORT FontFaceDescriptors : public IDLDictionaryBase {
 public:
  static FontFaceDescriptors* Create() { return MakeGarbageCollected<FontFaceDescriptors>(); }

  FontFaceDescriptors();
  virtual ~FontFaceDescriptors();

  bool hasDisplay() const { return !display_.IsNull(); }
  const String& display() const {
    return display_;
  }
  inline void setDisplay(const String&);

  bool hasFeatureSettings() const { return !feature_settings_.IsNull(); }
  const String& featureSettings() const {
    return feature_settings_;
  }
  inline void setFeatureSettings(const String&);

  bool hasStretch() const { return !stretch_.IsNull(); }
  const String& stretch() const {
    return stretch_;
  }
  inline void setStretch(const String&);

  bool hasStyle() const { return !style_.IsNull(); }
  const String& style() const {
    return style_;
  }
  inline void setStyle(const String&);

  bool hasUnicodeRange() const { return !unicode_range_.IsNull(); }
  const String& unicodeRange() const {
    return unicode_range_;
  }
  inline void setUnicodeRange(const String&);

  bool hasVariant() const { return !variant_.IsNull(); }
  const String& variant() const {
    return variant_;
  }
  inline void setVariant(const String&);

  bool hasWeight() const { return !weight_.IsNull(); }
  const String& weight() const {
    return weight_;
  }
  inline void setWeight(const String&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:

  String display_;
  String feature_settings_;
  String stretch_;
  String style_;
  String unicode_range_;
  String variant_;
  String weight_;

  friend class V8FontFaceDescriptors;
};

void FontFaceDescriptors::setDisplay(const String& value) {
  display_ = value;
}

void FontFaceDescriptors::setFeatureSettings(const String& value) {
  feature_settings_ = value;
}

void FontFaceDescriptors::setStretch(const String& value) {
  stretch_ = value;
}

void FontFaceDescriptors::setStyle(const String& value) {
  style_ = value;
}

void FontFaceDescriptors::setUnicodeRange(const String& value) {
  unicode_range_ = value;
}

void FontFaceDescriptors::setVariant(const String& value) {
  variant_ = value;
}

void FontFaceDescriptors::setWeight(const String& value) {
  weight_ = value;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_CSS_FONT_FACE_DESCRIPTORS_H_
