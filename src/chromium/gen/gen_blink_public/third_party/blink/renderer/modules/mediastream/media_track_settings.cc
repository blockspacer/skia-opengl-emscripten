// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/modules/mediastream/media_track_settings.h"

namespace blink {

MediaTrackSettings::MediaTrackSettings() {
}

MediaTrackSettings::~MediaTrackSettings() = default;

void MediaTrackSettings::setPointsOfInterest(const HeapVector<Member<Point2D>>& value) {
  points_of_interest_ = value;
  has_points_of_interest_ = true;
}

void MediaTrackSettings::Trace(blink::Visitor* visitor) {
  visitor->Trace(points_of_interest_);
  IDLDictionaryBase::Trace(visitor);
}

}  // namespace blink
