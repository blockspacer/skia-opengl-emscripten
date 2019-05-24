// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_GEOLOCATION_POSITION_OPTIONS_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_GEOLOCATION_POSITION_OPTIONS_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class MODULES_EXPORT PositionOptions : public IDLDictionaryBase {
 public:
  static PositionOptions* Create() { return MakeGarbageCollected<PositionOptions>(); }

  PositionOptions();
  virtual ~PositionOptions();

  bool hasEnableHighAccuracy() const { return has_enable_high_accuracy_; }
  bool enableHighAccuracy() const {
    DCHECK(has_enable_high_accuracy_);
    return enable_high_accuracy_;
  }
  inline void setEnableHighAccuracy(bool);

  bool hasMaximumAge() const { return has_maximum_age_; }
  uint32_t maximumAge() const {
    DCHECK(has_maximum_age_);
    return maximum_age_;
  }
  inline void setMaximumAge(uint32_t);

  bool hasTimeout() const { return has_timeout_; }
  uint32_t timeout() const {
    DCHECK(has_timeout_);
    return timeout_;
  }
  inline void setTimeout(uint32_t);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_enable_high_accuracy_ = false;
  bool has_maximum_age_ = false;
  bool has_timeout_ = false;

  bool enable_high_accuracy_;
  uint32_t maximum_age_;
  uint32_t timeout_;

  friend class V8PositionOptions;
};

void PositionOptions::setEnableHighAccuracy(bool value) {
  enable_high_accuracy_ = value;
  has_enable_high_accuracy_ = true;
}

void PositionOptions::setMaximumAge(uint32_t value) {
  maximum_age_ = value;
  has_maximum_age_ = true;
}

void PositionOptions::setTimeout(uint32_t value) {
  timeout_ = value;
  has_timeout_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_GEOLOCATION_POSITION_OPTIONS_H_
