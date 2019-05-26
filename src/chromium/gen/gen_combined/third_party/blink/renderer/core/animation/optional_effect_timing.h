// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_ANIMATION_OPTIONAL_EFFECT_TIMING_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_ANIMATION_OPTIONAL_EFFECT_TIMING_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/bindings/core/v8/unrestricted_double_or_string.h"
#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class CORE_EXPORT OptionalEffectTiming : public IDLDictionaryBase {
 public:
  static OptionalEffectTiming* Create() { return MakeGarbageCollected<OptionalEffectTiming>(); }

  OptionalEffectTiming();
  virtual ~OptionalEffectTiming();

  bool hasDelay() const { return has_delay_; }
  double delay() const {
    DCHECK(has_delay_);
    return delay_;
  }
  inline void setDelay(double);

  bool hasDirection() const { return !direction_.IsNull(); }
  const String& direction() const {
    return direction_;
  }
  inline void setDirection(const String&);

  bool hasDuration() const { return !duration_.IsNull(); }
  const UnrestrictedDoubleOrString& duration() const {
    return duration_;
  }
  void setDuration(const UnrestrictedDoubleOrString&);

  bool hasEasing() const { return !easing_.IsNull(); }
  const String& easing() const {
    return easing_;
  }
  inline void setEasing(const String&);

  bool hasEndDelay() const { return has_end_delay_; }
  double endDelay() const {
    DCHECK(has_end_delay_);
    return end_delay_;
  }
  inline void setEndDelay(double);

  bool hasFill() const { return !fill_.IsNull(); }
  const String& fill() const {
    return fill_;
  }
  inline void setFill(const String&);

  bool hasIterationStart() const { return has_iteration_start_; }
  double iterationStart() const {
    DCHECK(has_iteration_start_);
    return iteration_start_;
  }
  inline void setIterationStart(double);

  bool hasIterations() const { return has_iterations_; }
  double iterations() const {
    DCHECK(has_iterations_);
    return iterations_;
  }
  inline void setIterations(double);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_delay_ = false;
  bool has_end_delay_ = false;
  bool has_iteration_start_ = false;
  bool has_iterations_ = false;

  double delay_;
  String direction_;
  UnrestrictedDoubleOrString duration_;
  String easing_;
  double end_delay_;
  String fill_;
  double iteration_start_;
  double iterations_;

  friend class V8OptionalEffectTiming;
};

void OptionalEffectTiming::setDelay(double value) {
  delay_ = value;
  has_delay_ = true;
}

void OptionalEffectTiming::setDirection(const String& value) {
  direction_ = value;
}

void OptionalEffectTiming::setEasing(const String& value) {
  easing_ = value;
}

void OptionalEffectTiming::setEndDelay(double value) {
  end_delay_ = value;
  has_end_delay_ = true;
}

void OptionalEffectTiming::setFill(const String& value) {
  fill_ = value;
}

void OptionalEffectTiming::setIterationStart(double value) {
  iteration_start_ = value;
  has_iteration_start_ = true;
}

void OptionalEffectTiming::setIterations(double value) {
  iterations_ = value;
  has_iterations_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_ANIMATION_OPTIONAL_EFFECT_TIMING_H_
