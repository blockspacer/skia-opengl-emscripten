// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_WEBAUDIO_PERIODIC_WAVE_CONSTRAINTS_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_WEBAUDIO_PERIODIC_WAVE_CONSTRAINTS_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class MODULES_EXPORT PeriodicWaveConstraints : public IDLDictionaryBase {
 public:
  static PeriodicWaveConstraints* Create() { return MakeGarbageCollected<PeriodicWaveConstraints>(); }

  PeriodicWaveConstraints();
  virtual ~PeriodicWaveConstraints();

  bool hasDisableNormalization() const { return has_disable_normalization_; }
  bool disableNormalization() const {
    DCHECK(has_disable_normalization_);
    return disable_normalization_;
  }
  inline void setDisableNormalization(bool);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_disable_normalization_ = false;

  bool disable_normalization_;

  friend class V8PeriodicWaveConstraints;
};

void PeriodicWaveConstraints::setDisableNormalization(bool value) {
  disable_normalization_ = value;
  has_disable_normalization_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_WEBAUDIO_PERIODIC_WAVE_CONSTRAINTS_H_
