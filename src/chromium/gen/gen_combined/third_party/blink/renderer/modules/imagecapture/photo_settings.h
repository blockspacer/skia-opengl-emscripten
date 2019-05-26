// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_IMAGECAPTURE_PHOTO_SETTINGS_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_IMAGECAPTURE_PHOTO_SETTINGS_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class MODULES_EXPORT PhotoSettings : public IDLDictionaryBase {
 public:
  static PhotoSettings* Create() { return MakeGarbageCollected<PhotoSettings>(); }

  PhotoSettings();
  virtual ~PhotoSettings();

  bool hasFillLightMode() const { return !fill_light_mode_.IsNull(); }
  const String& fillLightMode() const {
    return fill_light_mode_;
  }
  inline void setFillLightMode(const String&);

  bool hasImageHeight() const { return has_image_height_; }
  double imageHeight() const {
    DCHECK(has_image_height_);
    return image_height_;
  }
  inline void setImageHeight(double);

  bool hasImageWidth() const { return has_image_width_; }
  double imageWidth() const {
    DCHECK(has_image_width_);
    return image_width_;
  }
  inline void setImageWidth(double);

  bool hasRedEyeReduction() const { return has_red_eye_reduction_; }
  bool redEyeReduction() const {
    DCHECK(has_red_eye_reduction_);
    return red_eye_reduction_;
  }
  inline void setRedEyeReduction(bool);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_image_height_ = false;
  bool has_image_width_ = false;
  bool has_red_eye_reduction_ = false;

  String fill_light_mode_;
  double image_height_;
  double image_width_;
  bool red_eye_reduction_;

  friend class V8PhotoSettings;
};

void PhotoSettings::setFillLightMode(const String& value) {
  fill_light_mode_ = value;
}

void PhotoSettings::setImageHeight(double value) {
  image_height_ = value;
  has_image_height_ = true;
}

void PhotoSettings::setImageWidth(double value) {
  image_width_ = value;
  has_image_width_ = true;
}

void PhotoSettings::setRedEyeReduction(bool value) {
  red_eye_reduction_ = value;
  has_red_eye_reduction_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_IMAGECAPTURE_PHOTO_SETTINGS_H_
