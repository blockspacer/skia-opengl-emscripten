// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_MEDIASTREAM_LONG_RANGE_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_MEDIASTREAM_LONG_RANGE_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class MODULES_EXPORT LongRange : public IDLDictionaryBase {
 public:
  static LongRange* Create() { return MakeGarbageCollected<LongRange>(); }

  LongRange();
  virtual ~LongRange();

  bool hasMax() const { return has_max_; }
  int32_t max() const {
    DCHECK(has_max_);
    return max_;
  }
  inline void setMax(int32_t);

  bool hasMin() const { return has_min_; }
  int32_t min() const {
    DCHECK(has_min_);
    return min_;
  }
  inline void setMin(int32_t);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_max_ = false;
  bool has_min_ = false;

  int32_t max_;
  int32_t min_;

  friend class V8LongRange;
};

void LongRange::setMax(int32_t value) {
  max_ = value;
  has_max_ = true;
}

void LongRange::setMin(int32_t value) {
  min_ = value;
  has_min_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_MEDIASTREAM_LONG_RANGE_H_
