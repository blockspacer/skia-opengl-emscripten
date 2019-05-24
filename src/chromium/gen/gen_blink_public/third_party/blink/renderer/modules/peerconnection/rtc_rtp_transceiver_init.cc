// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/modules/peerconnection/rtc_rtp_transceiver_init.h"

#include "third_party/blink/renderer/modules/mediastream/media_stream.h"
#include "third_party/blink/renderer/platform/wtf/vector.h"

namespace blink {

RTCRtpTransceiverInit::RTCRtpTransceiverInit() {
  setDirection("sendrecv");
  setSendEncodings(HeapVector<Member<RTCRtpEncodingParameters>>());
  setStreams(HeapVector<Member<MediaStream>>());
}

RTCRtpTransceiverInit::~RTCRtpTransceiverInit() = default;

void RTCRtpTransceiverInit::setSendEncodings(const HeapVector<Member<RTCRtpEncodingParameters>>& value) {
  send_encodings_ = value;
  has_send_encodings_ = true;
}

void RTCRtpTransceiverInit::setStreams(const HeapVector<Member<MediaStream>>& value) {
  streams_ = value;
  has_streams_ = true;
}

void RTCRtpTransceiverInit::Trace(blink::Visitor* visitor) {
  visitor->Trace(send_encodings_);
  visitor->Trace(streams_);
  IDLDictionaryBase::Trace(visitor);
}

}  // namespace blink
