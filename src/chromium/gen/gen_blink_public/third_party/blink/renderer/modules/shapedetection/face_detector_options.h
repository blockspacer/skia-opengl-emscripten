// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_SHAPEDETECTION_FACE_DETECTOR_OPTIONS_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_SHAPEDETECTION_FACE_DETECTOR_OPTIONS_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class MODULES_EXPORT FaceDetectorOptions : public IDLDictionaryBase {
 public:
  static FaceDetectorOptions* Create() { return MakeGarbageCollected<FaceDetectorOptions>(); }

  FaceDetectorOptions();
  virtual ~FaceDetectorOptions();

  bool hasFastMode() const { return has_fast_mode_; }
  bool fastMode() const {
    DCHECK(has_fast_mode_);
    return fast_mode_;
  }
  inline void setFastMode(bool);

  bool hasMaxDetectedFaces() const { return has_max_detected_faces_; }
  uint16_t maxDetectedFaces() const {
    DCHECK(has_max_detected_faces_);
    return max_detected_faces_;
  }
  inline void setMaxDetectedFaces(uint16_t);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_fast_mode_ = false;
  bool has_max_detected_faces_ = false;

  bool fast_mode_;
  uint16_t max_detected_faces_;

  friend class V8FaceDetectorOptions;
};

void FaceDetectorOptions::setFastMode(bool value) {
  fast_mode_ = value;
  has_fast_mode_ = true;
}

void FaceDetectorOptions::setMaxDetectedFaces(uint16_t value) {
  max_detected_faces_ = value;
  has_max_detected_faces_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_SHAPEDETECTION_FACE_DETECTOR_OPTIONS_H_
