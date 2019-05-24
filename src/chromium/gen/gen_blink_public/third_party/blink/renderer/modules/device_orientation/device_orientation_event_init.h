// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_DEVICE_ORIENTATION_DEVICE_ORIENTATION_EVENT_INIT_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_DEVICE_ORIENTATION_DEVICE_ORIENTATION_EVENT_INIT_H_

#include "third_party/blink/renderer/core/dom/events/event_init.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class MODULES_EXPORT DeviceOrientationEventInit : public EventInit {
 public:
  static DeviceOrientationEventInit* Create() { return MakeGarbageCollected<DeviceOrientationEventInit>(); }

  DeviceOrientationEventInit();
  virtual ~DeviceOrientationEventInit();

  bool hasAbsolute() const { return has_absolute_; }
  bool absolute() const {
    DCHECK(has_absolute_);
    return absolute_;
  }
  inline void setAbsolute(bool);

  bool hasAlpha() const { return has_alpha_; }
  double alpha() const {
    DCHECK(has_alpha_);
    return alpha_;
  }
  inline void setAlpha(double);
  inline void setAlphaToNull();

  bool hasBeta() const { return has_beta_; }
  double beta() const {
    DCHECK(has_beta_);
    return beta_;
  }
  inline void setBeta(double);
  inline void setBetaToNull();

  bool hasGamma() const { return has_gamma_; }
  double gamma() const {
    DCHECK(has_gamma_);
    return gamma_;
  }
  inline void setGamma(double);
  inline void setGammaToNull();

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_absolute_ = false;
  bool has_alpha_ = false;
  bool has_beta_ = false;
  bool has_gamma_ = false;

  bool absolute_;
  double alpha_;
  double beta_;
  double gamma_;

  friend class V8DeviceOrientationEventInit;
};

void DeviceOrientationEventInit::setAbsolute(bool value) {
  absolute_ = value;
  has_absolute_ = true;
}

void DeviceOrientationEventInit::setAlpha(double value) {
  alpha_ = value;
  has_alpha_ = true;
}

void DeviceOrientationEventInit::setAlphaToNull() {
  has_alpha_ = false;
}

void DeviceOrientationEventInit::setBeta(double value) {
  beta_ = value;
  has_beta_ = true;
}

void DeviceOrientationEventInit::setBetaToNull() {
  has_beta_ = false;
}

void DeviceOrientationEventInit::setGamma(double value) {
  gamma_ = value;
  has_gamma_ = true;
}

void DeviceOrientationEventInit::setGammaToNull() {
  has_gamma_ = false;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_DEVICE_ORIENTATION_DEVICE_ORIENTATION_EVENT_INIT_H_
