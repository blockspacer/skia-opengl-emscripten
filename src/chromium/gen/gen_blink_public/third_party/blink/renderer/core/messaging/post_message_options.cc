// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/core/messaging/post_message_options.h"

namespace blink {

PostMessageOptions::PostMessageOptions() {
  setIncludeUserActivation(false);
  setTransfer(Vector<ScriptValue>());
}

PostMessageOptions::~PostMessageOptions() = default;

void PostMessageOptions::setTransfer(const Vector<ScriptValue>& value) {
  transfer_ = value;
  has_transfer_ = true;
}

void PostMessageOptions::Trace(blink::Visitor* visitor) {
  IDLDictionaryBase::Trace(visitor);
}

}  // namespace blink
