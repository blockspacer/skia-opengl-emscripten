// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/modules/mediastream/media_stream_constraints.h"

namespace blink {

MediaStreamConstraints::MediaStreamConstraints() {
  setAudio(BooleanOrMediaTrackConstraints::FromBoolean(false));
  setVideo(BooleanOrMediaTrackConstraints::FromBoolean(false));
}

MediaStreamConstraints::~MediaStreamConstraints() = default;

void MediaStreamConstraints::setAudio(const BooleanOrMediaTrackConstraints& value) {
  audio_ = value;
}

void MediaStreamConstraints::setVideo(const BooleanOrMediaTrackConstraints& value) {
  video_ = value;
}

void MediaStreamConstraints::Trace(blink::Visitor* visitor) {
  visitor->Trace(audio_);
  visitor->Trace(video_);
  IDLDictionaryBase::Trace(visitor);
}

}  // namespace blink
