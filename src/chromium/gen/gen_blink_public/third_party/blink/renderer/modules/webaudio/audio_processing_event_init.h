// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_WEBAUDIO_AUDIO_PROCESSING_EVENT_INIT_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_WEBAUDIO_AUDIO_PROCESSING_EVENT_INIT_H_

#include "third_party/blink/renderer/core/dom/events/event_init.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class AudioBuffer;

class MODULES_EXPORT AudioProcessingEventInit : public EventInit {
 public:
  static AudioProcessingEventInit* Create() { return MakeGarbageCollected<AudioProcessingEventInit>(); }

  AudioProcessingEventInit();
  virtual ~AudioProcessingEventInit();

  bool hasInputBuffer() const { return input_buffer_; }
  AudioBuffer* inputBuffer() const {
    return input_buffer_;
  }
  inline void setInputBuffer(AudioBuffer*);

  bool hasOutputBuffer() const { return output_buffer_; }
  AudioBuffer* outputBuffer() const {
    return output_buffer_;
  }
  inline void setOutputBuffer(AudioBuffer*);

  bool hasPlaybackTime() const { return has_playback_time_; }
  double playbackTime() const {
    DCHECK(has_playback_time_);
    return playback_time_;
  }
  inline void setPlaybackTime(double);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_playback_time_ = false;

  Member<AudioBuffer> input_buffer_;
  Member<AudioBuffer> output_buffer_;
  double playback_time_;

  friend class V8AudioProcessingEventInit;
};

void AudioProcessingEventInit::setInputBuffer(AudioBuffer* value) {
  input_buffer_ = value;
}

void AudioProcessingEventInit::setOutputBuffer(AudioBuffer* value) {
  output_buffer_ = value;
}

void AudioProcessingEventInit::setPlaybackTime(double value) {
  playback_time_ = value;
  has_playback_time_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_WEBAUDIO_AUDIO_PROCESSING_EVENT_INIT_H_
