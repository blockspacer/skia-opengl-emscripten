// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_PAGE_SCROLLING_SCROLL_STATE_INIT_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_PAGE_SCROLLING_SCROLL_STATE_INIT_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class CORE_EXPORT ScrollStateInit : public IDLDictionaryBase {
 public:
  static ScrollStateInit* Create() { return MakeGarbageCollected<ScrollStateInit>(); }

  ScrollStateInit();
  virtual ~ScrollStateInit();

  bool hasDeltaGranularity() const { return has_delta_granularity_; }
  double deltaGranularity() const {
    DCHECK(has_delta_granularity_);
    return delta_granularity_;
  }
  inline void setDeltaGranularity(double);

  bool hasDeltaX() const { return has_delta_x_; }
  double deltaX() const {
    DCHECK(has_delta_x_);
    return delta_x_;
  }
  inline void setDeltaX(double);

  bool hasDeltaXHint() const { return has_delta_x_hint_; }
  double deltaXHint() const {
    DCHECK(has_delta_x_hint_);
    return delta_x_hint_;
  }
  inline void setDeltaXHint(double);

  bool hasDeltaY() const { return has_delta_y_; }
  double deltaY() const {
    DCHECK(has_delta_y_);
    return delta_y_;
  }
  inline void setDeltaY(double);

  bool hasDeltaYHint() const { return has_delta_y_hint_; }
  double deltaYHint() const {
    DCHECK(has_delta_y_hint_);
    return delta_y_hint_;
  }
  inline void setDeltaYHint(double);

  bool hasFromUserInput() const { return has_from_user_input_; }
  bool fromUserInput() const {
    DCHECK(has_from_user_input_);
    return from_user_input_;
  }
  inline void setFromUserInput(bool);

  bool hasIsBeginning() const { return has_is_beginning_; }
  bool isBeginning() const {
    DCHECK(has_is_beginning_);
    return is_beginning_;
  }
  inline void setIsBeginning(bool);

  bool hasIsDirectManipulation() const { return has_is_direct_manipulation_; }
  bool isDirectManipulation() const {
    DCHECK(has_is_direct_manipulation_);
    return is_direct_manipulation_;
  }
  inline void setIsDirectManipulation(bool);

  bool hasIsEnding() const { return has_is_ending_; }
  bool isEnding() const {
    DCHECK(has_is_ending_);
    return is_ending_;
  }
  inline void setIsEnding(bool);

  bool hasIsInInertialPhase() const { return has_is_in_inertial_phase_; }
  bool isInInertialPhase() const {
    DCHECK(has_is_in_inertial_phase_);
    return is_in_inertial_phase_;
  }
  inline void setIsInInertialPhase(bool);

  bool hasPositionX() const { return has_position_x_; }
  int32_t positionX() const {
    DCHECK(has_position_x_);
    return position_x_;
  }
  inline void setPositionX(int32_t);

  bool hasPositionY() const { return has_position_y_; }
  int32_t positionY() const {
    DCHECK(has_position_y_);
    return position_y_;
  }
  inline void setPositionY(int32_t);

  bool hasShouldPropagate() const { return has_should_propagate_; }
  bool shouldPropagate() const {
    DCHECK(has_should_propagate_);
    return should_propagate_;
  }
  inline void setShouldPropagate(bool);

  bool hasVelocityX() const { return has_velocity_x_; }
  double velocityX() const {
    DCHECK(has_velocity_x_);
    return velocity_x_;
  }
  inline void setVelocityX(double);

  bool hasVelocityY() const { return has_velocity_y_; }
  double velocityY() const {
    DCHECK(has_velocity_y_);
    return velocity_y_;
  }
  inline void setVelocityY(double);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_delta_granularity_ = false;
  bool has_delta_x_ = false;
  bool has_delta_x_hint_ = false;
  bool has_delta_y_ = false;
  bool has_delta_y_hint_ = false;
  bool has_from_user_input_ = false;
  bool has_is_beginning_ = false;
  bool has_is_direct_manipulation_ = false;
  bool has_is_ending_ = false;
  bool has_is_in_inertial_phase_ = false;
  bool has_position_x_ = false;
  bool has_position_y_ = false;
  bool has_should_propagate_ = false;
  bool has_velocity_x_ = false;
  bool has_velocity_y_ = false;

  double delta_granularity_;
  double delta_x_;
  double delta_x_hint_;
  double delta_y_;
  double delta_y_hint_;
  bool from_user_input_;
  bool is_beginning_;
  bool is_direct_manipulation_;
  bool is_ending_;
  bool is_in_inertial_phase_;
  int32_t position_x_;
  int32_t position_y_;
  bool should_propagate_;
  double velocity_x_;
  double velocity_y_;

  friend class V8ScrollStateInit;
};

void ScrollStateInit::setDeltaGranularity(double value) {
  delta_granularity_ = value;
  has_delta_granularity_ = true;
}

void ScrollStateInit::setDeltaX(double value) {
  delta_x_ = value;
  has_delta_x_ = true;
}

void ScrollStateInit::setDeltaXHint(double value) {
  delta_x_hint_ = value;
  has_delta_x_hint_ = true;
}

void ScrollStateInit::setDeltaY(double value) {
  delta_y_ = value;
  has_delta_y_ = true;
}

void ScrollStateInit::setDeltaYHint(double value) {
  delta_y_hint_ = value;
  has_delta_y_hint_ = true;
}

void ScrollStateInit::setFromUserInput(bool value) {
  from_user_input_ = value;
  has_from_user_input_ = true;
}

void ScrollStateInit::setIsBeginning(bool value) {
  is_beginning_ = value;
  has_is_beginning_ = true;
}

void ScrollStateInit::setIsDirectManipulation(bool value) {
  is_direct_manipulation_ = value;
  has_is_direct_manipulation_ = true;
}

void ScrollStateInit::setIsEnding(bool value) {
  is_ending_ = value;
  has_is_ending_ = true;
}

void ScrollStateInit::setIsInInertialPhase(bool value) {
  is_in_inertial_phase_ = value;
  has_is_in_inertial_phase_ = true;
}

void ScrollStateInit::setPositionX(int32_t value) {
  position_x_ = value;
  has_position_x_ = true;
}

void ScrollStateInit::setPositionY(int32_t value) {
  position_y_ = value;
  has_position_y_ = true;
}

void ScrollStateInit::setShouldPropagate(bool value) {
  should_propagate_ = value;
  has_should_propagate_ = true;
}

void ScrollStateInit::setVelocityX(double value) {
  velocity_x_ = value;
  has_velocity_x_ = true;
}

void ScrollStateInit::setVelocityY(double value) {
  velocity_y_ = value;
  has_velocity_y_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_PAGE_SCROLLING_SCROLL_STATE_INIT_H_
