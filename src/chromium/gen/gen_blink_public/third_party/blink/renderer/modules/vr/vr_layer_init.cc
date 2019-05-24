// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/modules/vr/vr_layer_init.h"

namespace blink {

VRLayerInit::VRLayerInit() {
  setLeftBounds(Vector<float>());
  setRightBounds(Vector<float>());
}

VRLayerInit::~VRLayerInit() = default;

void VRLayerInit::setLeftBounds(const Vector<float>& value) {
  left_bounds_ = value;
  has_left_bounds_ = true;
}

void VRLayerInit::setRightBounds(const Vector<float>& value) {
  right_bounds_ = value;
  has_right_bounds_ = true;
}

void VRLayerInit::setSource(const HTMLCanvasElementOrOffscreenCanvas& value) {
  source_ = value;
}

void VRLayerInit::setSourceToNull() {
  source_ = HTMLCanvasElementOrOffscreenCanvas();
}

void VRLayerInit::Trace(blink::Visitor* visitor) {
  visitor->Trace(source_);
  IDLDictionaryBase::Trace(visitor);
}

}  // namespace blink
