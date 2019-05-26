// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_WEBAUDIO_PERIODIC_WAVE_OPTIONS_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_WEBAUDIO_PERIODIC_WAVE_OPTIONS_H_

#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/modules/webaudio/periodic_wave_constraints.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/vector.h"

namespace blink {

class MODULES_EXPORT PeriodicWaveOptions : public PeriodicWaveConstraints {
 public:
  static PeriodicWaveOptions* Create() { return MakeGarbageCollected<PeriodicWaveOptions>(); }

  PeriodicWaveOptions();
  virtual ~PeriodicWaveOptions();

  bool hasImag() const { return has_imag_; }
  const Vector<float>& imag() const {
    DCHECK(has_imag_);
    return imag_;
  }
  void setImag(const Vector<float>&);

  bool hasReal() const { return has_real_; }
  const Vector<float>& real() const {
    DCHECK(has_real_);
    return real_;
  }
  void setReal(const Vector<float>&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_imag_ = false;
  bool has_real_ = false;

  Vector<float> imag_;
  Vector<float> real_;

  friend class V8PeriodicWaveOptions;
};

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_WEBAUDIO_PERIODIC_WAVE_OPTIONS_H_
