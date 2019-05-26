// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_CSS_CSSOM_CSS_NUMERIC_TYPE_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_CSS_CSSOM_CSS_NUMERIC_TYPE_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class CORE_EXPORT CSSNumericType : public IDLDictionaryBase {
 public:
  static CSSNumericType* Create() { return MakeGarbageCollected<CSSNumericType>(); }

  CSSNumericType();
  virtual ~CSSNumericType();

  bool hasAngle() const { return has_angle_; }
  int32_t angle() const {
    DCHECK(has_angle_);
    return angle_;
  }
  inline void setAngle(int32_t);

  bool hasFlex() const { return has_flex_; }
  int32_t flex() const {
    DCHECK(has_flex_);
    return flex_;
  }
  inline void setFlex(int32_t);

  bool hasFrequency() const { return has_frequency_; }
  int32_t frequency() const {
    DCHECK(has_frequency_);
    return frequency_;
  }
  inline void setFrequency(int32_t);

  bool hasLength() const { return has_length_; }
  int32_t length() const {
    DCHECK(has_length_);
    return length_;
  }
  inline void setLength(int32_t);

  bool hasPercent() const { return has_percent_; }
  int32_t percent() const {
    DCHECK(has_percent_);
    return percent_;
  }
  inline void setPercent(int32_t);

  bool hasPercentHint() const { return !percent_hint_.IsNull(); }
  const String& percentHint() const {
    return percent_hint_;
  }
  inline void setPercentHint(const String&);

  bool hasResolution() const { return has_resolution_; }
  int32_t resolution() const {
    DCHECK(has_resolution_);
    return resolution_;
  }
  inline void setResolution(int32_t);

  bool hasTime() const { return has_time_; }
  int32_t time() const {
    DCHECK(has_time_);
    return time_;
  }
  inline void setTime(int32_t);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_angle_ = false;
  bool has_flex_ = false;
  bool has_frequency_ = false;
  bool has_length_ = false;
  bool has_percent_ = false;
  bool has_resolution_ = false;
  bool has_time_ = false;

  int32_t angle_;
  int32_t flex_;
  int32_t frequency_;
  int32_t length_;
  int32_t percent_;
  String percent_hint_;
  int32_t resolution_;
  int32_t time_;

  friend class V8CSSNumericType;
};

void CSSNumericType::setAngle(int32_t value) {
  angle_ = value;
  has_angle_ = true;
}

void CSSNumericType::setFlex(int32_t value) {
  flex_ = value;
  has_flex_ = true;
}

void CSSNumericType::setFrequency(int32_t value) {
  frequency_ = value;
  has_frequency_ = true;
}

void CSSNumericType::setLength(int32_t value) {
  length_ = value;
  has_length_ = true;
}

void CSSNumericType::setPercent(int32_t value) {
  percent_ = value;
  has_percent_ = true;
}

void CSSNumericType::setPercentHint(const String& value) {
  percent_hint_ = value;
}

void CSSNumericType::setResolution(int32_t value) {
  resolution_ = value;
  has_resolution_ = true;
}

void CSSNumericType::setTime(int32_t value) {
  time_ = value;
  has_time_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_CSS_CSSOM_CSS_NUMERIC_TYPE_H_
