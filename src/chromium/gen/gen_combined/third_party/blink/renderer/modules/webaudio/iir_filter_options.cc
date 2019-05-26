// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/modules/webaudio/iir_filter_options.h"

namespace blink {

IIRFilterOptions::IIRFilterOptions() {
}

IIRFilterOptions::~IIRFilterOptions() = default;

void IIRFilterOptions::setFeedback(const Vector<double>& value) {
  feedback_ = value;
  has_feedback_ = true;
}

void IIRFilterOptions::setFeedforward(const Vector<double>& value) {
  feedforward_ = value;
  has_feedforward_ = true;
}

void IIRFilterOptions::Trace(blink::Visitor* visitor) {
  AudioNodeOptions::Trace(visitor);
}

}  // namespace blink
