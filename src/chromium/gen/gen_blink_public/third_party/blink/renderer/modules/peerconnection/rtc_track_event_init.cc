// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/modules/peerconnection/rtc_track_event_init.h"

#include "third_party/blink/renderer/modules/mediastream/media_stream.h"
#include "third_party/blink/renderer/modules/mediastream/media_stream_track.h"
#include "third_party/blink/renderer/modules/peerconnection/rtc_rtp_receiver.h"
#include "third_party/blink/renderer/modules/peerconnection/rtc_rtp_transceiver.h"
#include "third_party/blink/renderer/platform/wtf/vector.h"

namespace blink {

RTCTrackEventInit::RTCTrackEventInit() {
  setStreams(HeapVector<Member<MediaStream>>());
}

RTCTrackEventInit::~RTCTrackEventInit() = default;

void RTCTrackEventInit::setStreams(const HeapVector<Member<MediaStream>>& value) {
  streams_ = value;
  has_streams_ = true;
}

void RTCTrackEventInit::Trace(blink::Visitor* visitor) {
  visitor->Trace(receiver_);
  visitor->Trace(streams_);
  visitor->Trace(track_);
  visitor->Trace(transceiver_);
  EventInit::Trace(visitor);
}

}  // namespace blink
