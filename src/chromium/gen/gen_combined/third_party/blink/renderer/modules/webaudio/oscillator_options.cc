// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/modules/webaudio/oscillator_options.h"

#include "third_party/blink/renderer/modules/webaudio/periodic_wave.h"

namespace blink {

OscillatorOptions::OscillatorOptions() {
  setDetune(0);
  setFrequency(440);
  setType("sine");
}

OscillatorOptions::~OscillatorOptions() = default;

void OscillatorOptions::Trace(blink::Visitor* visitor) {
  visitor->Trace(periodic_wave_);
  AudioNodeOptions::Trace(visitor);
}

}  // namespace blink
