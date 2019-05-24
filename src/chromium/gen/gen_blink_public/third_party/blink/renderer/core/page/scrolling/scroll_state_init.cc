// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/core/page/scrolling/scroll_state_init.h"

namespace blink {

ScrollStateInit::ScrollStateInit() {
  setDeltaGranularity(0);
  setDeltaX(0);
  setDeltaXHint(0);
  setDeltaY(0);
  setDeltaYHint(0);
  setFromUserInput(false);
  setIsBeginning(false);
  setIsDirectManipulation(false);
  setIsEnding(false);
  setIsInInertialPhase(false);
  setPositionX(0);
  setPositionY(0);
  setShouldPropagate(true);
  setVelocityX(0);
  setVelocityY(0);
}

ScrollStateInit::~ScrollStateInit() = default;

void ScrollStateInit::Trace(blink::Visitor* visitor) {
  IDLDictionaryBase::Trace(visitor);
}

}  // namespace blink
