// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/modules/webaudio/audio_worklet_node_options.h"

namespace blink {

AudioWorkletNodeOptions::AudioWorkletNodeOptions() {
  setNumberOfInputs(1u);
  setNumberOfOutputs(1u);
}

AudioWorkletNodeOptions::~AudioWorkletNodeOptions() = default;

void AudioWorkletNodeOptions::setOutputChannelCount(const Vector<uint32_t>& value) {
  output_channel_count_ = value;
  has_output_channel_count_ = true;
}

void AudioWorkletNodeOptions::setParameterData(const Vector<std::pair<String, double>>& value) {
  parameter_data_ = value;
  has_parameter_data_ = true;
}

void AudioWorkletNodeOptions::setProcessorOptions(ScriptValue value) {
  processor_options_ = value;
}

void AudioWorkletNodeOptions::Trace(blink::Visitor* visitor) {
  AudioNodeOptions::Trace(visitor);
}

}  // namespace blink
