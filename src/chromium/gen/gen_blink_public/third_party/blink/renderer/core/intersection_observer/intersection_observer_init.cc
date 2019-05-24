// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/core/intersection_observer/intersection_observer_init.h"

#include "third_party/blink/renderer/core/dom/element.h"

namespace blink {

IntersectionObserverInit::IntersectionObserverInit() {
  setDelay(0);
  setRoot(nullptr);
  setRootMargin("0px");
  setThreshold(DoubleOrDoubleSequence::FromDouble(0));
  setTrackVisibility(false);
}

IntersectionObserverInit::~IntersectionObserverInit() = default;

void IntersectionObserverInit::setThreshold(const DoubleOrDoubleSequence& value) {
  threshold_ = value;
}

void IntersectionObserverInit::Trace(blink::Visitor* visitor) {
  visitor->Trace(root_);
  visitor->Trace(threshold_);
  IDLDictionaryBase::Trace(visitor);
}

}  // namespace blink
