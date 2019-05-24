// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/modules/canvas/htmlcanvas/canvas_context_creation_attributes_module.h"

namespace blink {

CanvasContextCreationAttributesModule::CanvasContextCreationAttributesModule() {
  setAlpha(true);
  setAntialias(true);
  setColorSpace("srgb");
  setDepth(true);
  setDesynchronized(false);
  setFailIfMajorPerformanceCaveat(false);
  setPixelFormat("uint8");
  setPowerPreference("default");
  setPremultipliedAlpha(true);
  setPreserveDrawingBuffer(false);
  setStencil(false);
  setXrCompatible(false);
}

CanvasContextCreationAttributesModule::~CanvasContextCreationAttributesModule() = default;

void CanvasContextCreationAttributesModule::Trace(blink::Visitor* visitor) {
  IDLDictionaryBase::Trace(visitor);
}

}  // namespace blink
