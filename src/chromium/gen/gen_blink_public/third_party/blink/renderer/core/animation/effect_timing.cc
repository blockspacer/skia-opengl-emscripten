// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/core/animation/effect_timing.h"

namespace blink {

EffectTiming::EffectTiming() {
  setDelay(0);
  setDirection("normal");
  setDuration(UnrestrictedDoubleOrString::FromString("auto"));
  setEasing("linear");
  setEndDelay(0);
  setFill("auto");
  setIterationStart(0);
  setIterations(1);
}

EffectTiming::~EffectTiming() = default;

void EffectTiming::setDuration(const UnrestrictedDoubleOrString& value) {
  duration_ = value;
}

void EffectTiming::Trace(blink::Visitor* visitor) {
  visitor->Trace(duration_);
  IDLDictionaryBase::Trace(visitor);
}

}  // namespace blink
