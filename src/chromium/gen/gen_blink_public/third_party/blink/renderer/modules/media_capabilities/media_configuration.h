// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_MEDIA_CAPABILITIES_MEDIA_CONFIGURATION_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_MEDIA_CAPABILITIES_MEDIA_CONFIGURATION_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/media_capabilities/audio_configuration.h"
#include "third_party/blink/renderer/modules/media_capabilities/video_configuration.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class MODULES_EXPORT MediaConfiguration : public IDLDictionaryBase {
 public:
  static MediaConfiguration* Create() { return MakeGarbageCollected<MediaConfiguration>(); }

  MediaConfiguration();
  virtual ~MediaConfiguration();

  bool hasAudio() const { return audio_; }
  AudioConfiguration* audio() const {
    return audio_;
  }
  void setAudio(AudioConfiguration*);

  bool hasVideo() const { return video_; }
  VideoConfiguration* video() const {
    return video_;
  }
  void setVideo(VideoConfiguration*);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:

  Member<AudioConfiguration> audio_;
  Member<VideoConfiguration> video_;

  friend class V8MediaConfiguration;
};

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_MEDIA_CAPABILITIES_MEDIA_CONFIGURATION_H_
