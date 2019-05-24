// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/modules/peerconnection/rtc_ice_gather_options.h"

namespace blink {

RTCIceGatherOptions::RTCIceGatherOptions() {
  setGatherPolicy("all");
}

RTCIceGatherOptions::~RTCIceGatherOptions() = default;

void RTCIceGatherOptions::setIceServers(const HeapVector<Member<RTCIceServer>>& value) {
  ice_servers_ = value;
  has_ice_servers_ = true;
}

void RTCIceGatherOptions::Trace(blink::Visitor* visitor) {
  visitor->Trace(ice_servers_);
  IDLDictionaryBase::Trace(visitor);
}

}  // namespace blink
