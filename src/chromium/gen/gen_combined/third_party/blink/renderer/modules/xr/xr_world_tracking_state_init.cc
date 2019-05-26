// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/modules/xr/xr_world_tracking_state_init.h"

namespace blink {

XRWorldTrackingStateInit::XRWorldTrackingStateInit() {
}

XRWorldTrackingStateInit::~XRWorldTrackingStateInit() = default;

void XRWorldTrackingStateInit::setPlaneDetectionState(XRPlaneDetectionStateInit* value) {
  plane_detection_state_ = value;
}

void XRWorldTrackingStateInit::Trace(blink::Visitor* visitor) {
  visitor->Trace(plane_detection_state_);
  IDLDictionaryBase::Trace(visitor);
}

}  // namespace blink
