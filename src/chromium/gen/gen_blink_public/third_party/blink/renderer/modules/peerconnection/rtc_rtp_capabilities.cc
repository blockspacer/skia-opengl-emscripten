// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/modules/peerconnection/rtc_rtp_capabilities.h"

namespace blink {

RTCRtpCapabilities::RTCRtpCapabilities() {
}

RTCRtpCapabilities::~RTCRtpCapabilities() = default;

void RTCRtpCapabilities::setCodecs(const HeapVector<Member<RTCRtpCodecCapability>>& value) {
  codecs_ = value;
  has_codecs_ = true;
}

void RTCRtpCapabilities::setHeaderExtensions(const HeapVector<Member<RTCRtpHeaderExtensionCapability>>& value) {
  header_extensions_ = value;
  has_header_extensions_ = true;
}

void RTCRtpCapabilities::Trace(blink::Visitor* visitor) {
  visitor->Trace(codecs_);
  visitor->Trace(header_extensions_);
  IDLDictionaryBase::Trace(visitor);
}

}  // namespace blink
