// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_error_init.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8RTCErrorInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "errorDetail",
    "httpRequestStatusCode",
    "receivedAlert",
    "sctpCauseCode",
    "sdpLineNumber",
    "sentAlert",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8RTCErrorInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, RTCErrorInit* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    exception_state.ThrowTypeError("Missing required member(s): errorDetail.");
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8RTCErrorInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> error_detail_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&error_detail_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (error_detail_value.IsEmpty() || error_detail_value->IsUndefined()) {
    exception_state.ThrowTypeError("required member errorDetail is undefined.");
    return;
  } else {
    V8StringResource<> error_detail_cpp_value = error_detail_value;
    if (!error_detail_cpp_value.Prepare(exception_state))
      return;
    const char* kValidValues[] = {
        "data-channel-failure",
        "dtls-failure",
        "fingerprint-failure",
        "idp-bad-script-failure",
        "idp-execution-failure",
        "idp-load-failure",
        "idp-need-login",
        "idp-timeout",
        "idp-tls-failure",
        "idp-token-expired",
        "idp-token-invalid",
        "sctp-failure",
        "sdp-syntax-error",
        "hardware-encoder-not-available",
        "hardware-encoder-error",
    };
    if (!IsValidEnum(error_detail_cpp_value, kValidValues, base::size(kValidValues), "RTCErrorDetailType", exception_state))
      return;
    impl->setErrorDetail(error_detail_cpp_value);
  }

  v8::Local<v8::Value> http_request_status_code_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&http_request_status_code_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (http_request_status_code_value.IsEmpty() || http_request_status_code_value->IsUndefined()) {
    // Do nothing.
  } else {
    int32_t http_request_status_code_cpp_value = NativeValueTraits<IDLLong>::NativeValue(isolate, http_request_status_code_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setHttpRequestStatusCode(http_request_status_code_cpp_value);
  }

  v8::Local<v8::Value> received_alert_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&received_alert_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (received_alert_value.IsEmpty() || received_alert_value->IsUndefined()) {
    // Do nothing.
  } else {
    uint32_t received_alert_cpp_value = NativeValueTraits<IDLUnsignedLong>::NativeValue(isolate, received_alert_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setReceivedAlert(received_alert_cpp_value);
  }

  v8::Local<v8::Value> sctp_cause_code_value;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&sctp_cause_code_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (sctp_cause_code_value.IsEmpty() || sctp_cause_code_value->IsUndefined()) {
    // Do nothing.
  } else {
    int32_t sctp_cause_code_cpp_value = NativeValueTraits<IDLLong>::NativeValue(isolate, sctp_cause_code_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setSctpCauseCode(sctp_cause_code_cpp_value);
  }

  v8::Local<v8::Value> sdp_line_number_value;
  if (!v8Object->Get(context, keys[4].Get(isolate)).ToLocal(&sdp_line_number_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (sdp_line_number_value.IsEmpty() || sdp_line_number_value->IsUndefined()) {
    // Do nothing.
  } else {
    int32_t sdp_line_number_cpp_value = NativeValueTraits<IDLLong>::NativeValue(isolate, sdp_line_number_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setSdpLineNumber(sdp_line_number_cpp_value);
  }

  v8::Local<v8::Value> sent_alert_value;
  if (!v8Object->Get(context, keys[5].Get(isolate)).ToLocal(&sent_alert_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (sent_alert_value.IsEmpty() || sent_alert_value->IsUndefined()) {
    // Do nothing.
  } else {
    uint32_t sent_alert_cpp_value = NativeValueTraits<IDLUnsignedLong>::NativeValue(isolate, sent_alert_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setSentAlert(sent_alert_cpp_value);
  }
}

v8::Local<v8::Value> RTCErrorInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8RTCErrorInit(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8RTCErrorInit(const RTCErrorInit* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8RTCErrorInitKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();

  auto create_property = [dictionary, context, keys, isolate](
                             size_t key_index, v8::Local<v8::Value> value) {
    bool added_property;
    v8::Local<v8::Name> key = keys[key_index].Get(isolate);
    if (!dictionary->CreateDataProperty(context, key, value)
             .To(&added_property)) {
      return false;
    }
    return added_property;
  };

  v8::Local<v8::Value> error_detail_value;
  bool error_detail_has_value_or_default = false;
  if (impl->hasErrorDetail()) {
    error_detail_value = V8String(isolate, impl->errorDetail());
    error_detail_has_value_or_default = true;
  } else {
    NOTREACHED();
  }
  if (error_detail_has_value_or_default &&
      !create_property(0, error_detail_value)) {
    return false;
  }

  v8::Local<v8::Value> http_request_status_code_value;
  bool http_request_status_code_has_value_or_default = false;
  if (impl->hasHttpRequestStatusCode()) {
    http_request_status_code_value = v8::Integer::New(isolate, impl->httpRequestStatusCode());
    http_request_status_code_has_value_or_default = true;
  }
  if (http_request_status_code_has_value_or_default &&
      !create_property(1, http_request_status_code_value)) {
    return false;
  }

  v8::Local<v8::Value> received_alert_value;
  bool received_alert_has_value_or_default = false;
  if (impl->hasReceivedAlert()) {
    received_alert_value = v8::Integer::NewFromUnsigned(isolate, impl->receivedAlert());
    received_alert_has_value_or_default = true;
  }
  if (received_alert_has_value_or_default &&
      !create_property(2, received_alert_value)) {
    return false;
  }

  v8::Local<v8::Value> sctp_cause_code_value;
  bool sctp_cause_code_has_value_or_default = false;
  if (impl->hasSctpCauseCode()) {
    sctp_cause_code_value = v8::Integer::New(isolate, impl->sctpCauseCode());
    sctp_cause_code_has_value_or_default = true;
  }
  if (sctp_cause_code_has_value_or_default &&
      !create_property(3, sctp_cause_code_value)) {
    return false;
  }

  v8::Local<v8::Value> sdp_line_number_value;
  bool sdp_line_number_has_value_or_default = false;
  if (impl->hasSdpLineNumber()) {
    sdp_line_number_value = v8::Integer::New(isolate, impl->sdpLineNumber());
    sdp_line_number_has_value_or_default = true;
  }
  if (sdp_line_number_has_value_or_default &&
      !create_property(4, sdp_line_number_value)) {
    return false;
  }

  v8::Local<v8::Value> sent_alert_value;
  bool sent_alert_has_value_or_default = false;
  if (impl->hasSentAlert()) {
    sent_alert_value = v8::Integer::NewFromUnsigned(isolate, impl->sentAlert());
    sent_alert_has_value_or_default = true;
  }
  if (sent_alert_has_value_or_default &&
      !create_property(5, sent_alert_value)) {
    return false;
  }

  return true;
}

RTCErrorInit* NativeValueTraits<RTCErrorInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  RTCErrorInit* impl = RTCErrorInit::Create();
  V8RTCErrorInit::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
