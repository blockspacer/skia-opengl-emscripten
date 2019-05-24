// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_EVENTS_WHEEL_EVENT_INIT_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_EVENTS_WHEEL_EVENT_INIT_H_

#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/core/events/mouse_event_init.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class CORE_EXPORT WheelEventInit : public MouseEventInit {
 public:
  static WheelEventInit* Create() { return MakeGarbageCollected<WheelEventInit>(); }

  WheelEventInit();
  virtual ~WheelEventInit();

  bool hasDeltaMode() const { return has_delta_mode_; }
  uint32_t deltaMode() const {
    DCHECK(has_delta_mode_);
    return delta_mode_;
  }
  inline void setDeltaMode(uint32_t);

  bool hasDeltaX() const { return has_delta_x_; }
  double deltaX() const {
    DCHECK(has_delta_x_);
    return delta_x_;
  }
  inline void setDeltaX(double);

  bool hasDeltaY() const { return has_delta_y_; }
  double deltaY() const {
    DCHECK(has_delta_y_);
    return delta_y_;
  }
  inline void setDeltaY(double);

  bool hasDeltaZ() const { return has_delta_z_; }
  double deltaZ() const {
    DCHECK(has_delta_z_);
    return delta_z_;
  }
  inline void setDeltaZ(double);

  bool hasWheelDeltaX() const { return has_wheel_delta_x_; }
  int32_t wheelDeltaX() const {
    DCHECK(has_wheel_delta_x_);
    return wheel_delta_x_;
  }
  inline void setWheelDeltaX(int32_t);

  bool hasWheelDeltaY() const { return has_wheel_delta_y_; }
  int32_t wheelDeltaY() const {
    DCHECK(has_wheel_delta_y_);
    return wheel_delta_y_;
  }
  inline void setWheelDeltaY(int32_t);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_delta_mode_ = false;
  bool has_delta_x_ = false;
  bool has_delta_y_ = false;
  bool has_delta_z_ = false;
  bool has_wheel_delta_x_ = false;
  bool has_wheel_delta_y_ = false;

  uint32_t delta_mode_;
  double delta_x_;
  double delta_y_;
  double delta_z_;
  int32_t wheel_delta_x_;
  int32_t wheel_delta_y_;

  friend class V8WheelEventInit;
};

void WheelEventInit::setDeltaMode(uint32_t value) {
  delta_mode_ = value;
  has_delta_mode_ = true;
}

void WheelEventInit::setDeltaX(double value) {
  delta_x_ = value;
  has_delta_x_ = true;
}

void WheelEventInit::setDeltaY(double value) {
  delta_y_ = value;
  has_delta_y_ = true;
}

void WheelEventInit::setDeltaZ(double value) {
  delta_z_ = value;
  has_delta_z_ = true;
}

void WheelEventInit::setWheelDeltaX(int32_t value) {
  wheel_delta_x_ = value;
  has_wheel_delta_x_ = true;
}

void WheelEventInit::setWheelDeltaY(int32_t value) {
  wheel_delta_y_ = value;
  has_wheel_delta_y_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_EVENTS_WHEEL_EVENT_INIT_H_
