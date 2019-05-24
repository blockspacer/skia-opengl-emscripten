// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/modules/webaudio/audio_context_options.h"

namespace blink {

AudioContextOptions::AudioContextOptions() {
  setLatencyHint(AudioContextLatencyCategoryOrDouble::FromAudioContextLatencyCategory("interactive"));
}

AudioContextOptions::~AudioContextOptions() = default;

void AudioContextOptions::setLatencyHint(const AudioContextLatencyCategoryOrDouble& value) {
  latency_hint_ = value;
}

void AudioContextOptions::Trace(blink::Visitor* visitor) {
  visitor->Trace(latency_hint_);
  IDLDictionaryBase::Trace(visitor);
}

}  // namespace blink
