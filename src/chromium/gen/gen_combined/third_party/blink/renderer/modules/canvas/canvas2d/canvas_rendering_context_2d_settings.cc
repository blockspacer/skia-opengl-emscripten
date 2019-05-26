// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/modules/canvas/canvas2d/canvas_rendering_context_2d_settings.h"

namespace blink {

CanvasRenderingContext2DSettings::CanvasRenderingContext2DSettings() {
  setAlpha(true);
  setColorSpace("srgb");
  setDesynchronized(false);
  setPixelFormat("uint8");
}

CanvasRenderingContext2DSettings::~CanvasRenderingContext2DSettings() = default;

void CanvasRenderingContext2DSettings::Trace(blink::Visitor* visitor) {
  IDLDictionaryBase::Trace(visitor);
}

}  // namespace blink
