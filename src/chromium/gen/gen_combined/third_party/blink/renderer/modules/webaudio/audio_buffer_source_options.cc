// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/modules/webaudio/audio_buffer_source_options.h"

#include "third_party/blink/renderer/modules/webaudio/audio_buffer.h"

namespace blink {

AudioBufferSourceOptions::AudioBufferSourceOptions() {
  setDetune(0);
  setLoop(false);
  setLoopEnd(0);
  setLoopStart(0);
  setPlaybackRate(1);
}

AudioBufferSourceOptions::~AudioBufferSourceOptions() = default;

void AudioBufferSourceOptions::Trace(blink::Visitor* visitor) {
  visitor->Trace(buffer_);
  IDLDictionaryBase::Trace(visitor);
}

}  // namespace blink
