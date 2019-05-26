// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_WEBAUDIO_BIQUAD_FILTER_OPTIONS_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_WEBAUDIO_BIQUAD_FILTER_OPTIONS_H_

#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/modules/webaudio/audio_node_options.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class MODULES_EXPORT BiquadFilterOptions : public AudioNodeOptions {
 public:
  static BiquadFilterOptions* Create() { return MakeGarbageCollected<BiquadFilterOptions>(); }

  BiquadFilterOptions();
  virtual ~BiquadFilterOptions();

  bool hasDetune() const { return has_detune_; }
  float detune() const {
    DCHECK(has_detune_);
    return detune_;
  }
  inline void setDetune(float);

  bool hasFrequency() const { return has_frequency_; }
  float frequency() const {
    DCHECK(has_frequency_);
    return frequency_;
  }
  inline void setFrequency(float);

  bool hasGain() const { return has_gain_; }
  float gain() const {
    DCHECK(has_gain_);
    return gain_;
  }
  inline void setGain(float);

  bool hasQ() const { return has_q_; }
  float Q() const {
    DCHECK(has_q_);
    return q_;
  }
  inline void setQ(float);

  bool hasType() const { return !type_.IsNull(); }
  const String& type() const {
    return type_;
  }
  inline void setType(const String&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_detune_ = false;
  bool has_frequency_ = false;
  bool has_gain_ = false;
  bool has_q_ = false;

  float detune_;
  float frequency_;
  float gain_;
  float q_;
  String type_;

  friend class V8BiquadFilterOptions;
};

void BiquadFilterOptions::setDetune(float value) {
  detune_ = value;
  has_detune_ = true;
}

void BiquadFilterOptions::setFrequency(float value) {
  frequency_ = value;
  has_frequency_ = true;
}

void BiquadFilterOptions::setGain(float value) {
  gain_ = value;
  has_gain_ = true;
}

void BiquadFilterOptions::setQ(float value) {
  q_ = value;
  has_q_ = true;
}

void BiquadFilterOptions::setType(const String& value) {
  type_ = value;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_WEBAUDIO_BIQUAD_FILTER_OPTIONS_H_
