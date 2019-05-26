// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_WEBAUDIO_OFFLINE_AUDIO_CONTEXT_OPTIONS_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_WEBAUDIO_OFFLINE_AUDIO_CONTEXT_OPTIONS_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class MODULES_EXPORT OfflineAudioContextOptions : public IDLDictionaryBase {
 public:
  static OfflineAudioContextOptions* Create() { return MakeGarbageCollected<OfflineAudioContextOptions>(); }

  OfflineAudioContextOptions();
  virtual ~OfflineAudioContextOptions();

  bool hasLength() const { return has_length_; }
  uint32_t length() const {
    DCHECK(has_length_);
    return length_;
  }
  inline void setLength(uint32_t);

  bool hasNumberOfChannels() const { return has_number_of_channels_; }
  uint32_t numberOfChannels() const {
    DCHECK(has_number_of_channels_);
    return number_of_channels_;
  }
  inline void setNumberOfChannels(uint32_t);

  bool hasSampleRate() const { return has_sample_rate_; }
  float sampleRate() const {
    DCHECK(has_sample_rate_);
    return sample_rate_;
  }
  inline void setSampleRate(float);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_length_ = false;
  bool has_number_of_channels_ = false;
  bool has_sample_rate_ = false;

  uint32_t length_;
  uint32_t number_of_channels_;
  float sample_rate_;

  friend class V8OfflineAudioContextOptions;
};

void OfflineAudioContextOptions::setLength(uint32_t value) {
  length_ = value;
  has_length_ = true;
}

void OfflineAudioContextOptions::setNumberOfChannels(uint32_t value) {
  number_of_channels_ = value;
  has_number_of_channels_ = true;
}

void OfflineAudioContextOptions::setSampleRate(float value) {
  sample_rate_ = value;
  has_sample_rate_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_WEBAUDIO_OFFLINE_AUDIO_CONTEXT_OPTIONS_H_
