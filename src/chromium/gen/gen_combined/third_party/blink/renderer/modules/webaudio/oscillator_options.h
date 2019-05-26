// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_WEBAUDIO_OSCILLATOR_OPTIONS_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_WEBAUDIO_OSCILLATOR_OPTIONS_H_

#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/modules/webaudio/audio_node_options.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class PeriodicWave;

class MODULES_EXPORT OscillatorOptions : public AudioNodeOptions {
 public:
  static OscillatorOptions* Create() { return MakeGarbageCollected<OscillatorOptions>(); }

  OscillatorOptions();
  virtual ~OscillatorOptions();

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

  bool hasPeriodicWave() const { return has_periodic_wave_; }
  PeriodicWave* periodicWave() const {
    return periodic_wave_;
  }
  inline void setPeriodicWave(PeriodicWave*);
  inline void setPeriodicWaveToNull();

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
  bool has_periodic_wave_ = false;

  float detune_;
  float frequency_;
  Member<PeriodicWave> periodic_wave_;
  String type_;

  friend class V8OscillatorOptions;
};

void OscillatorOptions::setDetune(float value) {
  detune_ = value;
  has_detune_ = true;
}

void OscillatorOptions::setFrequency(float value) {
  frequency_ = value;
  has_frequency_ = true;
}

void OscillatorOptions::setPeriodicWave(PeriodicWave* value) {
  periodic_wave_ = value;
  has_periodic_wave_ = true;
}

void OscillatorOptions::setPeriodicWaveToNull() {
  periodic_wave_ = Member<PeriodicWave>();
  has_periodic_wave_ = true;
}

void OscillatorOptions::setType(const String& value) {
  type_ = value;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_WEBAUDIO_OSCILLATOR_OPTIONS_H_
