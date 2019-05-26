// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_MEDIASTREAM_CONSTRAIN_LONG_RANGE_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_MEDIASTREAM_CONSTRAIN_LONG_RANGE_H_

#include "third_party/blink/renderer/modules/mediastream/long_range.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class MODULES_EXPORT ConstrainLongRange : public LongRange {
 public:
  static ConstrainLongRange* Create() { return MakeGarbageCollected<ConstrainLongRange>(); }

  ConstrainLongRange();
  virtual ~ConstrainLongRange();

  bool hasExact() const { return has_exact_; }
  int32_t exact() const {
    DCHECK(has_exact_);
    return exact_;
  }
  inline void setExact(int32_t);

  bool hasIdeal() const { return has_ideal_; }
  int32_t ideal() const {
    DCHECK(has_ideal_);
    return ideal_;
  }
  inline void setIdeal(int32_t);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_exact_ = false;
  bool has_ideal_ = false;

  int32_t exact_;
  int32_t ideal_;

  friend class V8ConstrainLongRange;
};

void ConstrainLongRange::setExact(int32_t value) {
  exact_ = value;
  has_exact_ = true;
}

void ConstrainLongRange::setIdeal(int32_t value) {
  ideal_ = value;
  has_ideal_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_MEDIASTREAM_CONSTRAIN_LONG_RANGE_H_
