// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_GAMEPAD_GAMEPAD_AXIS_EVENT_INIT_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_GAMEPAD_GAMEPAD_AXIS_EVENT_INIT_H_

#include "third_party/blink/renderer/modules/gamepad/gamepad_event_init.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class MODULES_EXPORT GamepadAxisEventInit : public GamepadEventInit {
 public:
  static GamepadAxisEventInit* Create() { return MakeGarbageCollected<GamepadAxisEventInit>(); }

  GamepadAxisEventInit();
  virtual ~GamepadAxisEventInit();

  bool hasAxis() const { return has_axis_; }
  uint32_t axis() const {
    DCHECK(has_axis_);
    return axis_;
  }
  inline void setAxis(uint32_t);

  bool hasValue() const { return has_value_; }
  double value() const {
    DCHECK(has_value_);
    return value_;
  }
  inline void setValue(double);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_axis_ = false;
  bool has_value_ = false;

  uint32_t axis_;
  double value_;

  friend class V8GamepadAxisEventInit;
};

void GamepadAxisEventInit::setAxis(uint32_t value) {
  axis_ = value;
  has_axis_ = true;
}

void GamepadAxisEventInit::setValue(double value) {
  value_ = value;
  has_value_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_GAMEPAD_GAMEPAD_AXIS_EVENT_INIT_H_
