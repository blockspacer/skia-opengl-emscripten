// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_PEERCONNECTION_RTC_OFFER_OPTIONS_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_PEERCONNECTION_RTC_OFFER_OPTIONS_H_

#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/modules/peerconnection/rtc_offer_answer_options.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class MODULES_EXPORT RTCOfferOptions : public RTCOfferAnswerOptions {
 public:
  static RTCOfferOptions* Create() { return MakeGarbageCollected<RTCOfferOptions>(); }

  RTCOfferOptions();
  virtual ~RTCOfferOptions();

  bool hasIceRestart() const { return has_ice_restart_; }
  bool iceRestart() const {
    DCHECK(has_ice_restart_);
    return ice_restart_;
  }
  inline void setIceRestart(bool);

  bool hasOfferToReceiveAudio() const { return has_offer_to_receive_audio_; }
  int32_t offerToReceiveAudio() const {
    DCHECK(has_offer_to_receive_audio_);
    return offer_to_receive_audio_;
  }
  inline void setOfferToReceiveAudio(int32_t);

  bool hasOfferToReceiveVideo() const { return has_offer_to_receive_video_; }
  int32_t offerToReceiveVideo() const {
    DCHECK(has_offer_to_receive_video_);
    return offer_to_receive_video_;
  }
  inline void setOfferToReceiveVideo(int32_t);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_ice_restart_ = false;
  bool has_offer_to_receive_audio_ = false;
  bool has_offer_to_receive_video_ = false;

  bool ice_restart_;
  int32_t offer_to_receive_audio_;
  int32_t offer_to_receive_video_;

  friend class V8RTCOfferOptions;
};

void RTCOfferOptions::setIceRestart(bool value) {
  ice_restart_ = value;
  has_ice_restart_ = true;
}

void RTCOfferOptions::setOfferToReceiveAudio(int32_t value) {
  offer_to_receive_audio_ = value;
  has_offer_to_receive_audio_ = true;
}

void RTCOfferOptions::setOfferToReceiveVideo(int32_t value) {
  offer_to_receive_video_ = value;
  has_offer_to_receive_video_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_PEERCONNECTION_RTC_OFFER_OPTIONS_H_
