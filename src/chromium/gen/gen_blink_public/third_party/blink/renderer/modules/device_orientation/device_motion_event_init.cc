// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/modules/device_orientation/device_motion_event_init.h"

namespace blink {

DeviceMotionEventInit::DeviceMotionEventInit() {
  setInterval(0);
}

DeviceMotionEventInit::~DeviceMotionEventInit() = default;

void DeviceMotionEventInit::setAcceleration(DeviceMotionEventAccelerationInit* value) {
  acceleration_ = value;
}

void DeviceMotionEventInit::setAccelerationIncludingGravity(DeviceMotionEventAccelerationInit* value) {
  acceleration_including_gravity_ = value;
}

void DeviceMotionEventInit::setRotationRate(DeviceMotionEventRotationRateInit* value) {
  rotation_rate_ = value;
}

void DeviceMotionEventInit::Trace(blink::Visitor* visitor) {
  visitor->Trace(acceleration_);
  visitor->Trace(acceleration_including_gravity_);
  visitor->Trace(rotation_rate_);
  EventInit::Trace(visitor);
}

}  // namespace blink
