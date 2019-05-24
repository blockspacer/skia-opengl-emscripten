// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_SENSOR_SPATIAL_SENSOR_OPTIONS_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_SENSOR_SPATIAL_SENSOR_OPTIONS_H_

#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/modules/sensor/sensor_options.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class MODULES_EXPORT SpatialSensorOptions : public SensorOptions {
 public:
  static SpatialSensorOptions* Create() { return MakeGarbageCollected<SpatialSensorOptions>(); }

  SpatialSensorOptions();
  virtual ~SpatialSensorOptions();

  bool hasReferenceFrame() const { return !reference_frame_.IsNull(); }
  const String& referenceFrame() const {
    return reference_frame_;
  }
  inline void setReferenceFrame(const String&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:

  String reference_frame_;

  friend class V8SpatialSensorOptions;
};

void SpatialSensorOptions::setReferenceFrame(const String& value) {
  reference_frame_ = value;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_SENSOR_SPATIAL_SENSOR_OPTIONS_H_
