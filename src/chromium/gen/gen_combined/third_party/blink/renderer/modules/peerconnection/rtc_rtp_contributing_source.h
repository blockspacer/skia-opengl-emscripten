// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_PEERCONNECTION_RTC_RTP_CONTRIBUTING_SOURCE_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_PEERCONNECTION_RTC_RTP_CONTRIBUTING_SOURCE_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class MODULES_EXPORT RTCRtpContributingSource : public IDLDictionaryBase {
 public:
  static RTCRtpContributingSource* Create() { return MakeGarbageCollected<RTCRtpContributingSource>(); }

  RTCRtpContributingSource();
  virtual ~RTCRtpContributingSource();

  bool hasAudioLevel() const { return has_audio_level_; }
  double audioLevel() const {
    DCHECK(has_audio_level_);
    return audio_level_;
  }
  inline void setAudioLevel(double);

  bool hasSource() const { return has_source_; }
  uint32_t source() const {
    DCHECK(has_source_);
    return source_;
  }
  inline void setSource(uint32_t);

  bool hasTimestamp() const { return has_timestamp_; }
  double timestamp() const {
    DCHECK(has_timestamp_);
    return timestamp_;
  }
  inline void setTimestamp(double);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_audio_level_ = false;
  bool has_source_ = false;
  bool has_timestamp_ = false;

  double audio_level_;
  uint32_t source_;
  double timestamp_;

  friend class V8RTCRtpContributingSource;
};

void RTCRtpContributingSource::setAudioLevel(double value) {
  audio_level_ = value;
  has_audio_level_ = true;
}

void RTCRtpContributingSource::setSource(uint32_t value) {
  source_ = value;
  has_source_ = true;
}

void RTCRtpContributingSource::setTimestamp(double value) {
  timestamp_ = value;
  has_timestamp_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_PEERCONNECTION_RTC_RTP_CONTRIBUTING_SOURCE_H_
