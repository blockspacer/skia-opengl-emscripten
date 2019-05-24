// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_DEVICE_ORIENTATION_DEVICE_MOTION_EVENT_INIT_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_DEVICE_ORIENTATION_DEVICE_MOTION_EVENT_INIT_H_

#include "third_party/blink/renderer/core/dom/events/event_init.h"
#include "third_party/blink/renderer/modules/device_orientation/device_motion_event_acceleration_init.h"
#include "third_party/blink/renderer/modules/device_orientation/device_motion_event_rotation_rate_init.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class MODULES_EXPORT DeviceMotionEventInit : public EventInit {
 public:
  static DeviceMotionEventInit* Create() { return MakeGarbageCollected<DeviceMotionEventInit>(); }

  DeviceMotionEventInit();
  virtual ~DeviceMotionEventInit();

  bool hasAcceleration() const { return acceleration_; }
  DeviceMotionEventAccelerationInit* acceleration() const {
    return acceleration_;
  }
  void setAcceleration(DeviceMotionEventAccelerationInit*);

  bool hasAccelerationIncludingGravity() const { return acceleration_including_gravity_; }
  DeviceMotionEventAccelerationInit* accelerationIncludingGravity() const {
    return acceleration_including_gravity_;
  }
  void setAccelerationIncludingGravity(DeviceMotionEventAccelerationInit*);

  bool hasInterval() const { return has_interval_; }
  double interval() const {
    DCHECK(has_interval_);
    return interval_;
  }
  inline void setInterval(double);

  bool hasRotationRate() const { return rotation_rate_; }
  DeviceMotionEventRotationRateInit* rotationRate() const {
    return rotation_rate_;
  }
  void setRotationRate(DeviceMotionEventRotationRateInit*);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_interval_ = false;

  Member<DeviceMotionEventAccelerationInit> acceleration_;
  Member<DeviceMotionEventAccelerationInit> acceleration_including_gravity_;
  double interval_;
  Member<DeviceMotionEventRotationRateInit> rotation_rate_;

  friend class V8DeviceMotionEventInit;
};

void DeviceMotionEventInit::setInterval(double value) {
  interval_ = value;
  has_interval_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_DEVICE_ORIENTATION_DEVICE_MOTION_EVENT_INIT_H_
