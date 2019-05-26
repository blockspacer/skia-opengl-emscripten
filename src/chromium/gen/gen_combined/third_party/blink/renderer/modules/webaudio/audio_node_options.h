// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_WEBAUDIO_AUDIO_NODE_OPTIONS_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_WEBAUDIO_AUDIO_NODE_OPTIONS_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class MODULES_EXPORT AudioNodeOptions : public IDLDictionaryBase {
 public:
  static AudioNodeOptions* Create() { return MakeGarbageCollected<AudioNodeOptions>(); }

  AudioNodeOptions();
  virtual ~AudioNodeOptions();

  bool hasChannelCount() const { return has_channel_count_; }
  uint32_t channelCount() const {
    DCHECK(has_channel_count_);
    return channel_count_;
  }
  inline void setChannelCount(uint32_t);

  bool hasChannelCountMode() const { return !channel_count_mode_.IsNull(); }
  const String& channelCountMode() const {
    return channel_count_mode_;
  }
  inline void setChannelCountMode(const String&);

  bool hasChannelInterpretation() const { return !channel_interpretation_.IsNull(); }
  const String& channelInterpretation() const {
    return channel_interpretation_;
  }
  inline void setChannelInterpretation(const String&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_channel_count_ = false;

  uint32_t channel_count_;
  String channel_count_mode_;
  String channel_interpretation_;

  friend class V8AudioNodeOptions;
};

void AudioNodeOptions::setChannelCount(uint32_t value) {
  channel_count_ = value;
  has_channel_count_ = true;
}

void AudioNodeOptions::setChannelCountMode(const String& value) {
  channel_count_mode_ = value;
}

void AudioNodeOptions::setChannelInterpretation(const String& value) {
  channel_interpretation_ = value;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_WEBAUDIO_AUDIO_NODE_OPTIONS_H_
