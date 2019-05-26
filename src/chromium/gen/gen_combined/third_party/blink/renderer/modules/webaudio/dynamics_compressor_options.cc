// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/modules/webaudio/dynamics_compressor_options.h"

namespace blink {

DynamicsCompressorOptions::DynamicsCompressorOptions() {
  setAttack(0.003);
  setKnee(30);
  setRatio(12);
  setRelease(0.25);
  setThreshold(-24);
}

DynamicsCompressorOptions::~DynamicsCompressorOptions() = default;

void DynamicsCompressorOptions::Trace(blink::Visitor* visitor) {
  AudioNodeOptions::Trace(visitor);
}

}  // namespace blink
