// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/modules/app_banner/before_install_prompt_event_init.h"

namespace blink {

BeforeInstallPromptEventInit::BeforeInstallPromptEventInit() {
}

BeforeInstallPromptEventInit::~BeforeInstallPromptEventInit() = default;

void BeforeInstallPromptEventInit::setPlatforms(const Vector<String>& value) {
  platforms_ = value;
  has_platforms_ = true;
}

void BeforeInstallPromptEventInit::Trace(blink::Visitor* visitor) {
  EventInit::Trace(visitor);
}

}  // namespace blink
