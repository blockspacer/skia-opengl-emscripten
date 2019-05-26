// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_PEERCONNECTION_RTC_ERROR_INIT_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_PEERCONNECTION_RTC_ERROR_INIT_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class MODULES_EXPORT RTCErrorInit : public IDLDictionaryBase {
 public:
  static RTCErrorInit* Create() { return MakeGarbageCollected<RTCErrorInit>(); }

  RTCErrorInit();
  virtual ~RTCErrorInit();

  bool hasErrorDetail() const { return !error_detail_.IsNull(); }
  const String& errorDetail() const {
    return error_detail_;
  }
  inline void setErrorDetail(const String&);

  bool hasHttpRequestStatusCode() const { return has_http_request_status_code_; }
  int32_t httpRequestStatusCode() const {
    DCHECK(has_http_request_status_code_);
    return http_request_status_code_;
  }
  inline void setHttpRequestStatusCode(int32_t);

  bool hasReceivedAlert() const { return has_received_alert_; }
  uint32_t receivedAlert() const {
    DCHECK(has_received_alert_);
    return received_alert_;
  }
  inline void setReceivedAlert(uint32_t);

  bool hasSctpCauseCode() const { return has_sctp_cause_code_; }
  int32_t sctpCauseCode() const {
    DCHECK(has_sctp_cause_code_);
    return sctp_cause_code_;
  }
  inline void setSctpCauseCode(int32_t);

  bool hasSdpLineNumber() const { return has_sdp_line_number_; }
  int32_t sdpLineNumber() const {
    DCHECK(has_sdp_line_number_);
    return sdp_line_number_;
  }
  inline void setSdpLineNumber(int32_t);

  bool hasSentAlert() const { return has_sent_alert_; }
  uint32_t sentAlert() const {
    DCHECK(has_sent_alert_);
    return sent_alert_;
  }
  inline void setSentAlert(uint32_t);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_http_request_status_code_ = false;
  bool has_received_alert_ = false;
  bool has_sctp_cause_code_ = false;
  bool has_sdp_line_number_ = false;
  bool has_sent_alert_ = false;

  String error_detail_;
  int32_t http_request_status_code_;
  uint32_t received_alert_;
  int32_t sctp_cause_code_;
  int32_t sdp_line_number_;
  uint32_t sent_alert_;

  friend class V8RTCErrorInit;
};

void RTCErrorInit::setErrorDetail(const String& value) {
  error_detail_ = value;
}

void RTCErrorInit::setHttpRequestStatusCode(int32_t value) {
  http_request_status_code_ = value;
  has_http_request_status_code_ = true;
}

void RTCErrorInit::setReceivedAlert(uint32_t value) {
  received_alert_ = value;
  has_received_alert_ = true;
}

void RTCErrorInit::setSctpCauseCode(int32_t value) {
  sctp_cause_code_ = value;
  has_sctp_cause_code_ = true;
}

void RTCErrorInit::setSdpLineNumber(int32_t value) {
  sdp_line_number_ = value;
  has_sdp_line_number_ = true;
}

void RTCErrorInit::setSentAlert(uint32_t value) {
  sent_alert_ = value;
  has_sent_alert_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_PEERCONNECTION_RTC_ERROR_INIT_H_
