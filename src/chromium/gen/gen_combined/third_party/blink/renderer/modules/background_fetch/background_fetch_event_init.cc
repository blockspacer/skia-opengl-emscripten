// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/modules/background_fetch/background_fetch_event_init.h"

#include "third_party/blink/renderer/modules/background_fetch/background_fetch_registration.h"

namespace blink {

BackgroundFetchEventInit::BackgroundFetchEventInit() {
}

BackgroundFetchEventInit::~BackgroundFetchEventInit() = default;

void BackgroundFetchEventInit::Trace(blink::Visitor* visitor) {
  visitor->Trace(registration_);
  ExtendableEventInit::Trace(visitor);
}

}  // namespace blink
