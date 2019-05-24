// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/modules/peerconnection/rtc_data_channel_event_init.h"

#include "third_party/blink/renderer/modules/peerconnection/rtc_data_channel.h"

namespace blink {

RTCDataChannelEventInit::RTCDataChannelEventInit() {
}

RTCDataChannelEventInit::~RTCDataChannelEventInit() = default;

void RTCDataChannelEventInit::Trace(blink::Visitor* visitor) {
  visitor->Trace(channel_);
  EventInit::Trace(visitor);
}

}  // namespace blink
