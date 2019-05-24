// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/modules/webaudio/periodic_wave_options.h"

namespace blink {

PeriodicWaveOptions::PeriodicWaveOptions() {
}

PeriodicWaveOptions::~PeriodicWaveOptions() = default;

void PeriodicWaveOptions::setImag(const Vector<float>& value) {
  imag_ = value;
  has_imag_ = true;
}

void PeriodicWaveOptions::setReal(const Vector<float>& value) {
  real_ = value;
  has_real_ = true;
}

void PeriodicWaveOptions::Trace(blink::Visitor* visitor) {
  PeriodicWaveConstraints::Trace(visitor);
}

}  // namespace blink
