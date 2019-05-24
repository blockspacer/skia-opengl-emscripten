// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/modules/background_fetch/background_fetch_ui_options.h"

namespace blink {

BackgroundFetchUIOptions::BackgroundFetchUIOptions() {
  setIcons(HeapVector<Member<ManifestImageResource>>());
}

BackgroundFetchUIOptions::~BackgroundFetchUIOptions() = default;

void BackgroundFetchUIOptions::setIcons(const HeapVector<Member<ManifestImageResource>>& value) {
  icons_ = value;
  has_icons_ = true;
}

void BackgroundFetchUIOptions::Trace(blink::Visitor* visitor) {
  visitor->Trace(icons_);
  IDLDictionaryBase::Trace(visitor);
}

}  // namespace blink
