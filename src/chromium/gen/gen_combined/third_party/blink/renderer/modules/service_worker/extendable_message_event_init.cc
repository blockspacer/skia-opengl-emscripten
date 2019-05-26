// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/modules/service_worker/extendable_message_event_init.h"

#include "third_party/blink/renderer/core/messaging/message_port.h"
#include "third_party/blink/renderer/platform/wtf/vector.h"

namespace blink {

ExtendableMessageEventInit::ExtendableMessageEventInit() {
}

ExtendableMessageEventInit::~ExtendableMessageEventInit() = default;

void ExtendableMessageEventInit::setData(ScriptValue value) {
  data_ = value;
}

void ExtendableMessageEventInit::setPorts(const HeapVector<Member<MessagePort>>& value) {
  ports_ = value;
  has_ports_ = true;
}

void ExtendableMessageEventInit::setSource(const ClientOrServiceWorkerOrMessagePort& value) {
  source_ = value;
}

void ExtendableMessageEventInit::setSourceToNull() {
  source_ = ClientOrServiceWorkerOrMessagePort();
}

void ExtendableMessageEventInit::Trace(blink::Visitor* visitor) {
  visitor->Trace(ports_);
  visitor->Trace(source_);
  ExtendableEventInit::Trace(visitor);
}

}  // namespace blink
