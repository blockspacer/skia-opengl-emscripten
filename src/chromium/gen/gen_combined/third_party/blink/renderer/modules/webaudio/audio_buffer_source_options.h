// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_WEBAUDIO_AUDIO_BUFFER_SOURCE_OPTIONS_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_WEBAUDIO_AUDIO_BUFFER_SOURCE_OPTIONS_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class AudioBuffer;

class MODULES_EXPORT AudioBufferSourceOptions : public IDLDictionaryBase {
 public:
  static AudioBufferSourceOptions* Create() { return MakeGarbageCollected<AudioBufferSourceOptions>(); }

  AudioBufferSourceOptions();
  virtual ~AudioBufferSourceOptions();

  bool hasBuffer() const { return has_buffer_; }
  AudioBuffer* buffer() const {
    return buffer_;
  }
  inline void setBuffer(AudioBuffer*);
  inline void setBufferToNull();

  bool hasDetune() const { return has_detune_; }
  float detune() const {
    DCHECK(has_detune_);
    return detune_;
  }
  inline void setDetune(float);

  bool hasLoop() const { return has_loop_; }
  bool loop() const {
    DCHECK(has_loop_);
    return loop_;
  }
  inline void setLoop(bool);

  bool hasLoopEnd() const { return has_loop_end_; }
  double loopEnd() const {
    DCHECK(has_loop_end_);
    return loop_end_;
  }
  inline void setLoopEnd(double);

  bool hasLoopStart() const { return has_loop_start_; }
  double loopStart() const {
    DCHECK(has_loop_start_);
    return loop_start_;
  }
  inline void setLoopStart(double);

  bool hasPlaybackRate() const { return has_playback_rate_; }
  float playbackRate() const {
    DCHECK(has_playback_rate_);
    return playback_rate_;
  }
  inline void setPlaybackRate(float);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_buffer_ = false;
  bool has_detune_ = false;
  bool has_loop_ = false;
  bool has_loop_end_ = false;
  bool has_loop_start_ = false;
  bool has_playback_rate_ = false;

  Member<AudioBuffer> buffer_;
  float detune_;
  bool loop_;
  double loop_end_;
  double loop_start_;
  float playback_rate_;

  friend class V8AudioBufferSourceOptions;
};

void AudioBufferSourceOptions::setBuffer(AudioBuffer* value) {
  buffer_ = value;
  has_buffer_ = true;
}

void AudioBufferSourceOptions::setBufferToNull() {
  buffer_ = Member<AudioBuffer>();
  has_buffer_ = true;
}

void AudioBufferSourceOptions::setDetune(float value) {
  detune_ = value;
  has_detune_ = true;
}

void AudioBufferSourceOptions::setLoop(bool value) {
  loop_ = value;
  has_loop_ = true;
}

void AudioBufferSourceOptions::setLoopEnd(double value) {
  loop_end_ = value;
  has_loop_end_ = true;
}

void AudioBufferSourceOptions::setLoopStart(double value) {
  loop_start_ = value;
  has_loop_start_ = true;
}

void AudioBufferSourceOptions::setPlaybackRate(float value) {
  playback_rate_ = value;
  has_playback_rate_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_WEBAUDIO_AUDIO_BUFFER_SOURCE_OPTIONS_H_
