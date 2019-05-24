// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_GAMEPAD_GAMEPAD_EFFECT_PARAMETERS_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_GAMEPAD_GAMEPAD_EFFECT_PARAMETERS_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class MODULES_EXPORT GamepadEffectParameters : public IDLDictionaryBase {
 public:
  static GamepadEffectParameters* Create() { return MakeGarbageCollected<GamepadEffectParameters>(); }

  GamepadEffectParameters();
  virtual ~GamepadEffectParameters();

  bool hasDuration() const { return has_duration_; }
  double duration() const {
    DCHECK(has_duration_);
    return duration_;
  }
  inline void setDuration(double);

  bool hasStartDelay() const { return has_start_delay_; }
  double startDelay() const {
    DCHECK(has_start_delay_);
    return start_delay_;
  }
  inline void setStartDelay(double);

  bool hasStrongMagnitude() const { return has_strong_magnitude_; }
  double strongMagnitude() const {
    DCHECK(has_strong_magnitude_);
    return strong_magnitude_;
  }
  inline void setStrongMagnitude(double);

  bool hasWeakMagnitude() const { return has_weak_magnitude_; }
  double weakMagnitude() const {
    DCHECK(has_weak_magnitude_);
    return weak_magnitude_;
  }
  inline void setWeakMagnitude(double);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_duration_ = false;
  bool has_start_delay_ = false;
  bool has_strong_magnitude_ = false;
  bool has_weak_magnitude_ = false;

  double duration_;
  double start_delay_;
  double strong_magnitude_;
  double weak_magnitude_;

  friend class V8GamepadEffectParameters;
};

void GamepadEffectParameters::setDuration(double value) {
  duration_ = value;
  has_duration_ = true;
}

void GamepadEffectParameters::setStartDelay(double value) {
  start_delay_ = value;
  has_start_delay_ = true;
}

void GamepadEffectParameters::setStrongMagnitude(double value) {
  strong_magnitude_ = value;
  has_strong_magnitude_ = true;
}

void GamepadEffectParameters::setWeakMagnitude(double value) {
  weak_magnitude_ = value;
  has_weak_magnitude_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_GAMEPAD_GAMEPAD_EFFECT_PARAMETERS_H_
