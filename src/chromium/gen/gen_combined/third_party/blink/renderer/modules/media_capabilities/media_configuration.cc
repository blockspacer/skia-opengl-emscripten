// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/modules/media_capabilities/media_configuration.h"

namespace blink {

MediaConfiguration::MediaConfiguration() {
}

MediaConfiguration::~MediaConfiguration() = default;

void MediaConfiguration::setAudio(AudioConfiguration* value) {
  audio_ = value;
}

void MediaConfiguration::setVideo(VideoConfiguration* value) {
  video_ = value;
}

void MediaConfiguration::Trace(blink::Visitor* visitor) {
  visitor->Trace(audio_);
  visitor->Trace(video_);
  IDLDictionaryBase::Trace(visitor);
}

}  // namespace blink
