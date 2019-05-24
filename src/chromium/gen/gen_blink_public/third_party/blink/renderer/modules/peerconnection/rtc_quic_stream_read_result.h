// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_PEERCONNECTION_RTC_QUIC_STREAM_READ_RESULT_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_PEERCONNECTION_RTC_QUIC_STREAM_READ_RESULT_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class MODULES_EXPORT RTCQuicStreamReadResult : public IDLDictionaryBase {
 public:
  static RTCQuicStreamReadResult* Create() { return MakeGarbageCollected<RTCQuicStreamReadResult>(); }

  RTCQuicStreamReadResult();
  virtual ~RTCQuicStreamReadResult();

  bool hasAmount() const { return has_amount_; }
  uint32_t amount() const {
    DCHECK(has_amount_);
    return amount_;
  }
  inline void setAmount(uint32_t);

  bool hasFinished() const { return has_finished_; }
  bool finished() const {
    DCHECK(has_finished_);
    return finished_;
  }
  inline void setFinished(bool);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_amount_ = false;
  bool has_finished_ = false;

  uint32_t amount_;
  bool finished_;

  friend class V8RTCQuicStreamReadResult;
};

void RTCQuicStreamReadResult::setAmount(uint32_t value) {
  amount_ = value;
  has_amount_ = true;
}

void RTCQuicStreamReadResult::setFinished(bool value) {
  finished_ = value;
  has_finished_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_PEERCONNECTION_RTC_QUIC_STREAM_READ_RESULT_H_
