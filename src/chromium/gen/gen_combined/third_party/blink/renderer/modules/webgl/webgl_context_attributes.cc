// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/modules/webgl/webgl_context_attributes.h"

namespace blink {

WebGLContextAttributes::WebGLContextAttributes() {
  setAlpha(true);
  setAntialias(true);
  setDepth(true);
  setDesynchronized(false);
  setFailIfMajorPerformanceCaveat(false);
  setPowerPreference("default");
  setPremultipliedAlpha(true);
  setPreserveDrawingBuffer(false);
  setStencil(false);
  setXrCompatible(false);
}

WebGLContextAttributes::~WebGLContextAttributes() = default;

void WebGLContextAttributes::Trace(blink::Visitor* visitor) {
  IDLDictionaryBase::Trace(visitor);
}

}  // namespace blink
