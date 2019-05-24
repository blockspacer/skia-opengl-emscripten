// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/modules/mediastream/media_track_constraints.h"

namespace blink {

MediaTrackConstraints::MediaTrackConstraints() {
}

MediaTrackConstraints::~MediaTrackConstraints() = default;

void MediaTrackConstraints::setAdvanced(const HeapVector<Member<MediaTrackConstraintSet>>& value) {
  advanced_ = value;
  has_advanced_ = true;
}

void MediaTrackConstraints::Trace(blink::Visitor* visitor) {
  visitor->Trace(advanced_);
  MediaTrackConstraintSet::Trace(visitor);
}

}  // namespace blink
