// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_PEERCONNECTION_RTC_OFFER_ANSWER_OPTIONS_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_PEERCONNECTION_RTC_OFFER_ANSWER_OPTIONS_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class MODULES_EXPORT RTCOfferAnswerOptions : public IDLDictionaryBase {
 public:
  static RTCOfferAnswerOptions* Create() { return MakeGarbageCollected<RTCOfferAnswerOptions>(); }

  RTCOfferAnswerOptions();
  virtual ~RTCOfferAnswerOptions();

  bool hasVoiceActivityDetection() const { return has_voice_activity_detection_; }
  bool voiceActivityDetection() const {
    DCHECK(has_voice_activity_detection_);
    return voice_activity_detection_;
  }
  inline void setVoiceActivityDetection(bool);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_voice_activity_detection_ = false;

  bool voice_activity_detection_;

  friend class V8RTCOfferAnswerOptions;
};

void RTCOfferAnswerOptions::setVoiceActivityDetection(bool value) {
  voice_activity_detection_ = value;
  has_voice_activity_detection_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_PEERCONNECTION_RTC_OFFER_ANSWER_OPTIONS_H_
