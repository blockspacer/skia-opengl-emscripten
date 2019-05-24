// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_WEBAUDIO_AUDIO_CONTEXT_OPTIONS_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_WEBAUDIO_AUDIO_CONTEXT_OPTIONS_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/bindings/modules/v8/audio_context_latency_category_or_double.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class MODULES_EXPORT AudioContextOptions : public IDLDictionaryBase {
 public:
  static AudioContextOptions* Create() { return MakeGarbageCollected<AudioContextOptions>(); }

  AudioContextOptions();
  virtual ~AudioContextOptions();

  bool hasLatencyHint() const { return !latency_hint_.IsNull(); }
  const AudioContextLatencyCategoryOrDouble& latencyHint() const {
    return latency_hint_;
  }
  void setLatencyHint(const AudioContextLatencyCategoryOrDouble&);

  bool hasSampleRate() const { return has_sample_rate_; }
  float sampleRate() const {
    DCHECK(has_sample_rate_);
    return sample_rate_;
  }
  inline void setSampleRate(float);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_sample_rate_ = false;

  AudioContextLatencyCategoryOrDouble latency_hint_;
  float sample_rate_;

  friend class V8AudioContextOptions;
};

void AudioContextOptions::setSampleRate(float value) {
  sample_rate_ = value;
  has_sample_rate_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_WEBAUDIO_AUDIO_CONTEXT_OPTIONS_H_
