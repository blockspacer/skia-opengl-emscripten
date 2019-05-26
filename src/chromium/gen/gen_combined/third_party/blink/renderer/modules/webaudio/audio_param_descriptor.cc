// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/modules/webaudio/audio_param_descriptor.h"

namespace blink {

AudioParamDescriptor::AudioParamDescriptor() {
  setAutomationRate("a-rate");
  setDefaultValue(0);
  setMaxValue(3.40282e+38);
  setMinValue(-3.40282e+38);
}

AudioParamDescriptor::~AudioParamDescriptor() = default;

void AudioParamDescriptor::Trace(blink::Visitor* visitor) {
  IDLDictionaryBase::Trace(visitor);
}

}  // namespace blink
