// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_HTML_CUSTOM_VALIDITY_STATE_FLAGS_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_HTML_CUSTOM_VALIDITY_STATE_FLAGS_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class CORE_EXPORT ValidityStateFlags : public IDLDictionaryBase {
 public:
  static ValidityStateFlags* Create() { return MakeGarbageCollected<ValidityStateFlags>(); }

  ValidityStateFlags();
  virtual ~ValidityStateFlags();

  bool hasBadInput() const { return has_bad_input_; }
  bool badInput() const {
    DCHECK(has_bad_input_);
    return bad_input_;
  }
  inline void setBadInput(bool);

  bool hasCustomError() const { return has_custom_error_; }
  bool customError() const {
    DCHECK(has_custom_error_);
    return custom_error_;
  }
  inline void setCustomError(bool);

  bool hasPatternMismatch() const { return has_pattern_mismatch_; }
  bool patternMismatch() const {
    DCHECK(has_pattern_mismatch_);
    return pattern_mismatch_;
  }
  inline void setPatternMismatch(bool);

  bool hasRangeOverflow() const { return has_range_overflow_; }
  bool rangeOverflow() const {
    DCHECK(has_range_overflow_);
    return range_overflow_;
  }
  inline void setRangeOverflow(bool);

  bool hasRangeUnderflow() const { return has_range_underflow_; }
  bool rangeUnderflow() const {
    DCHECK(has_range_underflow_);
    return range_underflow_;
  }
  inline void setRangeUnderflow(bool);

  bool hasStepMismatch() const { return has_step_mismatch_; }
  bool stepMismatch() const {
    DCHECK(has_step_mismatch_);
    return step_mismatch_;
  }
  inline void setStepMismatch(bool);

  bool hasTooLong() const { return has_too_long_; }
  bool tooLong() const {
    DCHECK(has_too_long_);
    return too_long_;
  }
  inline void setTooLong(bool);

  bool hasTooShort() const { return has_too_short_; }
  bool tooShort() const {
    DCHECK(has_too_short_);
    return too_short_;
  }
  inline void setTooShort(bool);

  bool hasTypeMismatch() const { return has_type_mismatch_; }
  bool typeMismatch() const {
    DCHECK(has_type_mismatch_);
    return type_mismatch_;
  }
  inline void setTypeMismatch(bool);

  bool hasValueMissing() const { return has_value_missing_; }
  bool valueMissing() const {
    DCHECK(has_value_missing_);
    return value_missing_;
  }
  inline void setValueMissing(bool);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_bad_input_ = false;
  bool has_custom_error_ = false;
  bool has_pattern_mismatch_ = false;
  bool has_range_overflow_ = false;
  bool has_range_underflow_ = false;
  bool has_step_mismatch_ = false;
  bool has_too_long_ = false;
  bool has_too_short_ = false;
  bool has_type_mismatch_ = false;
  bool has_value_missing_ = false;

  bool bad_input_;
  bool custom_error_;
  bool pattern_mismatch_;
  bool range_overflow_;
  bool range_underflow_;
  bool step_mismatch_;
  bool too_long_;
  bool too_short_;
  bool type_mismatch_;
  bool value_missing_;

  friend class V8ValidityStateFlags;
};

void ValidityStateFlags::setBadInput(bool value) {
  bad_input_ = value;
  has_bad_input_ = true;
}

void ValidityStateFlags::setCustomError(bool value) {
  custom_error_ = value;
  has_custom_error_ = true;
}

void ValidityStateFlags::setPatternMismatch(bool value) {
  pattern_mismatch_ = value;
  has_pattern_mismatch_ = true;
}

void ValidityStateFlags::setRangeOverflow(bool value) {
  range_overflow_ = value;
  has_range_overflow_ = true;
}

void ValidityStateFlags::setRangeUnderflow(bool value) {
  range_underflow_ = value;
  has_range_underflow_ = true;
}

void ValidityStateFlags::setStepMismatch(bool value) {
  step_mismatch_ = value;
  has_step_mismatch_ = true;
}

void ValidityStateFlags::setTooLong(bool value) {
  too_long_ = value;
  has_too_long_ = true;
}

void ValidityStateFlags::setTooShort(bool value) {
  too_short_ = value;
  has_too_short_ = true;
}

void ValidityStateFlags::setTypeMismatch(bool value) {
  type_mismatch_ = value;
  has_type_mismatch_ = true;
}

void ValidityStateFlags::setValueMissing(bool value) {
  value_missing_ = value;
  has_value_missing_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_HTML_CUSTOM_VALIDITY_STATE_FLAGS_H_
