// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/core/frame/user_agent.h"

namespace blink {

UserAgent::UserAgent() {
  setArchitecture(WTF::g_empty_string);
  setBrand(WTF::g_empty_string);
  setModel(WTF::g_empty_string);
  setPlatform(WTF::g_empty_string);
  setVersion(WTF::g_empty_string);
}

UserAgent::~UserAgent() = default;

void UserAgent::Trace(blink::Visitor* visitor) {
  IDLDictionaryBase::Trace(visitor);
}

}  // namespace blink
