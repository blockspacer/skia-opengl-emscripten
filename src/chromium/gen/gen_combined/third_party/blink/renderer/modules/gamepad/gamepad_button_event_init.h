// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_GAMEPAD_GAMEPAD_BUTTON_EVENT_INIT_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_GAMEPAD_GAMEPAD_BUTTON_EVENT_INIT_H_

#include "third_party/blink/renderer/modules/gamepad/gamepad_event_init.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class MODULES_EXPORT GamepadButtonEventInit : public GamepadEventInit {
 public:
  static GamepadButtonEventInit* Create() { return MakeGarbageCollected<GamepadButtonEventInit>(); }

  GamepadButtonEventInit();
  virtual ~GamepadButtonEventInit();

  bool hasButton() const { return has_button_; }
  uint32_t button() const {
    DCHECK(has_button_);
    return button_;
  }
  inline void setButton(uint32_t);

  bool hasValue() const { return has_value_; }
  double value() const {
    DCHECK(has_value_);
    return value_;
  }
  inline void setValue(double);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_button_ = false;
  bool has_value_ = false;

  uint32_t button_;
  double value_;

  friend class V8GamepadButtonEventInit;
};

void GamepadButtonEventInit::setButton(uint32_t value) {
  button_ = value;
  has_button_ = true;
}

void GamepadButtonEventInit::setValue(double value) {
  value_ = value;
  has_value_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_GAMEPAD_GAMEPAD_BUTTON_EVENT_INIT_H_
