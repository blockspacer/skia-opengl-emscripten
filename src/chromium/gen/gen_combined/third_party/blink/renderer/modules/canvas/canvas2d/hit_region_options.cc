// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/modules/canvas/canvas2d/hit_region_options.h"

#include "third_party/blink/renderer/core/dom/element.h"
#include "third_party/blink/renderer/modules/canvas/canvas2d/path_2d.h"

namespace blink {

HitRegionOptions::HitRegionOptions() {
  setControl(nullptr);
  setFillRule("nonzero");
  setId(WTF::g_empty_string);
  setPath(nullptr);
}

HitRegionOptions::~HitRegionOptions() = default;

void HitRegionOptions::Trace(blink::Visitor* visitor) {
  visitor->Trace(control_);
  visitor->Trace(path_);
  IDLDictionaryBase::Trace(visitor);
}

}  // namespace blink
