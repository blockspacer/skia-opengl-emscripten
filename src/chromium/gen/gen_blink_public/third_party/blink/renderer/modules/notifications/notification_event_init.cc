// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/modules/notifications/notification_event_init.h"

#include "third_party/blink/renderer/modules/notifications/notification.h"

namespace blink {

NotificationEventInit::NotificationEventInit() {
  setAction(WTF::g_empty_string);
  setReply(WTF::g_empty_string);
}

NotificationEventInit::~NotificationEventInit() = default;

void NotificationEventInit::Trace(blink::Visitor* visitor) {
  visitor->Trace(notification_);
  ExtendableEventInit::Trace(visitor);
}

}  // namespace blink
