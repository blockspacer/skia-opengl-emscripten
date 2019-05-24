// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_rtp_send_parameters.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_rtp_encoding_parameters.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_rtp_parameters.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8RTCRtpSendParametersKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "encodings",
    "transactionId",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8RTCRtpSendParameters::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, RTCRtpSendParameters* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    exception_state.ThrowTypeError("Missing required member(s): encodings, transactionId.");
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  V8RTCRtpParameters::ToImpl(isolate, v8_value, impl, exception_state);
  if (exception_state.HadException())
    return;

  const v8::Eternal<v8::Name>* keys = eternalV8RTCRtpSendParametersKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> encodings_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&encodings_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (encodings_value.IsEmpty() || encodings_value->IsUndefined()) {
    exception_state.ThrowTypeError("required member encodings is undefined.");
    return;
  } else {
    HeapVector<Member<RTCRtpEncodingParameters>> encodings_cpp_value = NativeValueTraits<IDLSequence<RTCRtpEncodingParameters>>::NativeValue(isolate, encodings_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setEncodings(encodings_cpp_value);
  }

  v8::Local<v8::Value> transaction_id_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&transaction_id_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (transaction_id_value.IsEmpty() || transaction_id_value->IsUndefined()) {
    exception_state.ThrowTypeError("required member transactionId is undefined.");
    return;
  } else {
    V8StringResource<> transaction_id_cpp_value = transaction_id_value;
    if (!transaction_id_cpp_value.Prepare(exception_state))
      return;
    impl->setTransactionId(transaction_id_cpp_value);
  }
}

v8::Local<v8::Value> RTCRtpSendParameters::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8RTCRtpSendParameters(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8RTCRtpSendParameters(const RTCRtpSendParameters* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8RTCRtpParameters(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8RTCRtpSendParametersKeys(isolate);
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

  v8::Local<v8::Value> encodings_value;
  bool encodings_has_value_or_default = false;
  if (impl->hasEncodings()) {
    encodings_value = ToV8(impl->encodings(), creationContext, isolate);
    encodings_has_value_or_default = true;
  } else {
    NOTREACHED();
  }
  if (encodings_has_value_or_default &&
      !create_property(0, encodings_value)) {
    return false;
  }

  v8::Local<v8::Value> transaction_id_value;
  bool transaction_id_has_value_or_default = false;
  if (impl->hasTransactionId()) {
    transaction_id_value = V8String(isolate, impl->transactionId());
    transaction_id_has_value_or_default = true;
  } else {
    NOTREACHED();
  }
  if (transaction_id_has_value_or_default &&
      !create_property(1, transaction_id_value)) {
    return false;
  }

  return true;
}

RTCRtpSendParameters* NativeValueTraits<RTCRtpSendParameters>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  RTCRtpSendParameters* impl = RTCRtpSendParameters::Create();
  V8RTCRtpSendParameters::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
