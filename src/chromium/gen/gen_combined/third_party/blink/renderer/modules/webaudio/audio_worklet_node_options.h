// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_WEBAUDIO_AUDIO_WORKLET_NODE_OPTIONS_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_WEBAUDIO_AUDIO_WORKLET_NODE_OPTIONS_H_

#include "third_party/blink/renderer/bindings/core/v8/script_value.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/modules/webaudio/audio_node_options.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/vector.h"

namespace blink {

class MODULES_EXPORT AudioWorkletNodeOptions : public AudioNodeOptions {
 public:
  static AudioWorkletNodeOptions* Create() { return MakeGarbageCollected<AudioWorkletNodeOptions>(); }

  AudioWorkletNodeOptions();
  virtual ~AudioWorkletNodeOptions();

  bool hasNumberOfInputs() const { return has_number_of_inputs_; }
  uint32_t numberOfInputs() const {
    DCHECK(has_number_of_inputs_);
    return number_of_inputs_;
  }
  inline void setNumberOfInputs(uint32_t);

  bool hasNumberOfOutputs() const { return has_number_of_outputs_; }
  uint32_t numberOfOutputs() const {
    DCHECK(has_number_of_outputs_);
    return number_of_outputs_;
  }
  inline void setNumberOfOutputs(uint32_t);

  bool hasOutputChannelCount() const { return has_output_channel_count_; }
  const Vector<uint32_t>& outputChannelCount() const {
    DCHECK(has_output_channel_count_);
    return output_channel_count_;
  }
  void setOutputChannelCount(const Vector<uint32_t>&);

  bool hasParameterData() const { return has_parameter_data_; }
  const Vector<std::pair<String, double>>& parameterData() const {
    DCHECK(has_parameter_data_);
    return parameter_data_;
  }
  void setParameterData(const Vector<std::pair<String, double>>&);

  bool hasProcessorOptions() const { return !(processor_options_.IsEmpty() || processor_options_.IsNull() || processor_options_.IsUndefined()); }
  ScriptValue processorOptions() const {
    return processor_options_;
  }
  void setProcessorOptions(ScriptValue);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_number_of_inputs_ = false;
  bool has_number_of_outputs_ = false;
  bool has_output_channel_count_ = false;
  bool has_parameter_data_ = false;

  uint32_t number_of_inputs_;
  uint32_t number_of_outputs_;
  Vector<uint32_t> output_channel_count_;
  Vector<std::pair<String, double>> parameter_data_;
  ScriptValue processor_options_;

  friend class V8AudioWorkletNodeOptions;
};

void AudioWorkletNodeOptions::setNumberOfInputs(uint32_t value) {
  number_of_inputs_ = value;
  has_number_of_inputs_ = true;
}

void AudioWorkletNodeOptions::setNumberOfOutputs(uint32_t value) {
  number_of_outputs_ = value;
  has_number_of_outputs_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_WEBAUDIO_AUDIO_WORKLET_NODE_OPTIONS_H_
