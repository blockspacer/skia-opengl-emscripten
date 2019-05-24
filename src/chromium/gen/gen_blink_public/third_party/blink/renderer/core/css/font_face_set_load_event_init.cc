// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/core/css/font_face_set_load_event_init.h"

#include "third_party/blink/renderer/core/css/font_face.h"
#include "third_party/blink/renderer/platform/wtf/vector.h"

namespace blink {

FontFaceSetLoadEventInit::FontFaceSetLoadEventInit() {
  setFontfaces(HeapVector<Member<FontFace>>());
}

FontFaceSetLoadEventInit::~FontFaceSetLoadEventInit() = default;

void FontFaceSetLoadEventInit::setFontfaces(const HeapVector<Member<FontFace>>& value) {
  fontfaces_ = value;
  has_fontfaces_ = true;
}

void FontFaceSetLoadEventInit::Trace(blink::Visitor* visitor) {
  visitor->Trace(fontfaces_);
  EventInit::Trace(visitor);
}

}  // namespace blink
