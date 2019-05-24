// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/modules/peerconnection/rtc_configuration.h"

#include "third_party/blink/renderer/modules/peerconnection/rtc_certificate.h"
#include "third_party/blink/renderer/platform/wtf/vector.h"

namespace blink {

RTCConfiguration::RTCConfiguration() {
  setBundlePolicy("balanced");
  setIceCandidatePoolSize(0u);
  setRtcpMuxPolicy("require");
}

RTCConfiguration::~RTCConfiguration() = default;

void RTCConfiguration::setCertificates(const HeapVector<Member<RTCCertificate>>& value) {
  certificates_ = value;
  has_certificates_ = true;
}

void RTCConfiguration::setIceServers(const HeapVector<Member<RTCIceServer>>& value) {
  ice_servers_ = value;
  has_ice_servers_ = true;
}

void RTCConfiguration::Trace(blink::Visitor* visitor) {
  visitor->Trace(certificates_);
  visitor->Trace(ice_servers_);
  IDLDictionaryBase::Trace(visitor);
}

}  // namespace blink
