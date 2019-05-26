// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/modules/webaudio/panner_options.h"

namespace blink {

PannerOptions::PannerOptions() {
  setConeInnerAngle(360);
  setConeOuterAngle(360);
  setConeOuterGain(0);
  setDistanceModel("inverse");
  setMaxDistance(10000);
  setOrientationX(1);
  setOrientationY(0);
  setOrientationZ(0);
  setPanningModel("equalpower");
  setPositionX(0);
  setPositionY(0);
  setPositionZ(0);
  setRefDistance(1);
  setRolloffFactor(1);
}

PannerOptions::~PannerOptions() = default;

void PannerOptions::Trace(blink::Visitor* visitor) {
  AudioNodeOptions::Trace(visitor);
}

}  // namespace blink
