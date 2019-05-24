// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_IDLE_IDLE_OPTIONS_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_IDLE_IDLE_OPTIONS_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class MODULES_EXPORT IdleOptions : public IDLDictionaryBase {
 public:
  static IdleOptions* Create() { return MakeGarbageCollected<IdleOptions>(); }

  IdleOptions();
  virtual ~IdleOptions();

  bool hasThreshold() const { return has_threshold_; }
  uint32_t threshold() const {
    DCHECK(has_threshold_);
    return threshold_;
  }
  inline void setThreshold(uint32_t);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_threshold_ = false;

  uint32_t threshold_;

  friend class V8IdleOptions;
};

void IdleOptions::setThreshold(uint32_t value) {
  threshold_ = value;
  has_threshold_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_IDLE_IDLE_OPTIONS_H_
