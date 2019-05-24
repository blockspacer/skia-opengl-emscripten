// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_ANIMATION_COMPUTED_EFFECT_TIMING_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_ANIMATION_COMPUTED_EFFECT_TIMING_H_

#include "third_party/blink/renderer/core/animation/effect_timing.h"
#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class CORE_EXPORT ComputedEffectTiming : public EffectTiming {
 public:
  static ComputedEffectTiming* Create() { return MakeGarbageCollected<ComputedEffectTiming>(); }

  ComputedEffectTiming();
  virtual ~ComputedEffectTiming();

  bool hasActiveDuration() const { return has_active_duration_; }
  double activeDuration() const {
    DCHECK(has_active_duration_);
    return active_duration_;
  }
  inline void setActiveDuration(double);

  bool hasCurrentIteration() const { return has_current_iteration_; }
  double currentIteration() const {
    DCHECK(has_current_iteration_);
    return current_iteration_;
  }
  inline void setCurrentIteration(double);
  inline void setCurrentIterationToNull();

  bool hasEndTime() const { return has_end_time_; }
  double endTime() const {
    DCHECK(has_end_time_);
    return end_time_;
  }
  inline void setEndTime(double);

  bool hasLocalTime() const { return has_local_time_; }
  double localTime() const {
    DCHECK(has_local_time_);
    return local_time_;
  }
  inline void setLocalTime(double);
  inline void setLocalTimeToNull();

  bool hasProgress() const { return has_progress_; }
  double progress() const {
    DCHECK(has_progress_);
    return progress_;
  }
  inline void setProgress(double);
  inline void setProgressToNull();

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_active_duration_ = false;
  bool has_current_iteration_ = false;
  bool has_end_time_ = false;
  bool has_local_time_ = false;
  bool has_progress_ = false;

  double active_duration_;
  double current_iteration_;
  double end_time_;
  double local_time_;
  double progress_;

  friend class V8ComputedEffectTiming;
};

void ComputedEffectTiming::setActiveDuration(double value) {
  active_duration_ = value;
  has_active_duration_ = true;
}

void ComputedEffectTiming::setCurrentIteration(double value) {
  current_iteration_ = value;
  has_current_iteration_ = true;
}

void ComputedEffectTiming::setCurrentIterationToNull() {
  has_current_iteration_ = false;
}

void ComputedEffectTiming::setEndTime(double value) {
  end_time_ = value;
  has_end_time_ = true;
}

void ComputedEffectTiming::setLocalTime(double value) {
  local_time_ = value;
  has_local_time_ = true;
}

void ComputedEffectTiming::setLocalTimeToNull() {
  has_local_time_ = false;
}

void ComputedEffectTiming::setProgress(double value) {
  progress_ = value;
  has_progress_ = true;
}

void ComputedEffectTiming::setProgressToNull() {
  has_progress_ = false;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_ANIMATION_COMPUTED_EFFECT_TIMING_H_
