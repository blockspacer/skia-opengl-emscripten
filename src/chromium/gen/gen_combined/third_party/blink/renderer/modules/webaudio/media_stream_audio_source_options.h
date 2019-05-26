// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_WEBAUDIO_MEDIA_STREAM_AUDIO_SOURCE_OPTIONS_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_WEBAUDIO_MEDIA_STREAM_AUDIO_SOURCE_OPTIONS_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class MediaStream;

class MODULES_EXPORT MediaStreamAudioSourceOptions : public IDLDictionaryBase {
 public:
  static MediaStreamAudioSourceOptions* Create() { return MakeGarbageCollected<MediaStreamAudioSourceOptions>(); }

  MediaStreamAudioSourceOptions();
  virtual ~MediaStreamAudioSourceOptions();

  bool hasMediaStream() const { return media_stream_; }
  MediaStream* mediaStream() const {
    return media_stream_;
  }
  inline void setMediaStream(MediaStream*);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:

  Member<MediaStream> media_stream_;

  friend class V8MediaStreamAudioSourceOptions;
};

void MediaStreamAudioSourceOptions::setMediaStream(MediaStream* value) {
  media_stream_ = value;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_WEBAUDIO_MEDIA_STREAM_AUDIO_SOURCE_OPTIONS_H_
