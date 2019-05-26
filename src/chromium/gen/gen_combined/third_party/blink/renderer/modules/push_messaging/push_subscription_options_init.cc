// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/modules/push_messaging/push_subscription_options_init.h"

namespace blink {

PushSubscriptionOptionsInit::PushSubscriptionOptionsInit() {
  setUserVisibleOnly(false);
}

PushSubscriptionOptionsInit::~PushSubscriptionOptionsInit() = default;

void PushSubscriptionOptionsInit::setApplicationServerKey(const ArrayBufferOrArrayBufferView& value) {
  application_server_key_ = value;
}

void PushSubscriptionOptionsInit::setApplicationServerKeyToNull() {
  application_server_key_ = ArrayBufferOrArrayBufferView();
}

void PushSubscriptionOptionsInit::Trace(blink::Visitor* visitor) {
  visitor->Trace(application_server_key_);
  IDLDictionaryBase::Trace(visitor);
}

}  // namespace blink
