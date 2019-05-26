// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/modules/gamepad/gamepad_effect_parameters.h"

namespace blink {

GamepadEffectParameters::GamepadEffectParameters() {
  setDuration(0);
  setStartDelay(0);
  setStrongMagnitude(0);
  setWeakMagnitude(0);
}

GamepadEffectParameters::~GamepadEffectParameters() = default;

void GamepadEffectParameters::Trace(blink::Visitor* visitor) {
  IDLDictionaryBase::Trace(visitor);
}

}  // namespace blink
