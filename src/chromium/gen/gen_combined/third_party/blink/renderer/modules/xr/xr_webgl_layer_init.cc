// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/modules/xr/xr_webgl_layer_init.h"

namespace blink {

XRWebGLLayerInit::XRWebGLLayerInit() {
  setAlpha(true);
  setAntialias(true);
  setDepth(true);
  setFramebufferScaleFactor(1);
  setIgnoreDepthValues(false);
  setMultiview(false);
  setStencil(false);
}

XRWebGLLayerInit::~XRWebGLLayerInit() = default;

void XRWebGLLayerInit::Trace(blink::Visitor* visitor) {
  IDLDictionaryBase::Trace(visitor);
}

}  // namespace blink
