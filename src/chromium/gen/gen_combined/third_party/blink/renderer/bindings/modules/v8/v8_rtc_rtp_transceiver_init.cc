// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_rtp_transceiver_init.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_stream.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_rtp_encoding_parameters.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8RTCRtpTransceiverInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "direction",
    "sendEncodings",
    "streams",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8RTCRtpTransceiverInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, RTCRtpTransceiverInit* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8RTCRtpTransceiverInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> direction_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&direction_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (direction_value.IsEmpty() || direction_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> direction_cpp_value = direction_value;
    if (!direction_cpp_value.Prepare(exception_state))
      return;
    const char* kValidValues[] = {
        "sendrecv",
        "sendonly",
        "recvonly",
        "inactive",
    };
    if (!IsValidEnum(direction_cpp_value, kValidValues, base::size(kValidValues), "RTCRtpTransceiverDirection", exception_state))
      return;
    impl->setDirection(direction_cpp_value);
  }

  v8::Local<v8::Value> send_encodings_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&send_encodings_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (send_encodings_value.IsEmpty() || send_encodings_value->IsUndefined()) {
    // Do nothing.
  } else {
    HeapVector<Member<RTCRtpEncodingParameters>> send_encodings_cpp_value = NativeValueTraits<IDLSequence<RTCRtpEncodingParameters>>::NativeValue(isolate, send_encodings_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setSendEncodings(send_encodings_cpp_value);
  }

  v8::Local<v8::Value> streams_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&streams_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (streams_value.IsEmpty() || streams_value->IsUndefined()) {
    // Do nothing.
  } else {
    HeapVector<Member<MediaStream>> streams_cpp_value = NativeValueTraits<IDLSequence<MediaStream>>::NativeValue(isolate, streams_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setStreams(streams_cpp_value);
  }
}

v8::Local<v8::Value> RTCRtpTransceiverInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8RTCRtpTransceiverInit(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8RTCRtpTransceiverInit(const RTCRtpTransceiverInit* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8RTCRtpTransceiverInitKeys(isolate);
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

  v8::Local<v8::Value> direction_value;
  bool direction_has_value_or_default = false;
  if (impl->hasDirection()) {
    direction_value = V8String(isolate, impl->direction());
    direction_has_value_or_default = true;
  } else {
    direction_value = V8String(isolate, "sendrecv");
    direction_has_value_or_default = true;
  }
  if (direction_has_value_or_default &&
      !create_property(0, direction_value)) {
    return false;
  }

  v8::Local<v8::Value> send_encodings_value;
  bool send_encodings_has_value_or_default = false;
  if (impl->hasSendEncodings()) {
    send_encodings_value = ToV8(impl->sendEncodings(), creationContext, isolate);
    send_encodings_has_value_or_default = true;
  } else {
    send_encodings_value = ToV8(HeapVector<Member<RTCRtpEncodingParameters>>(), creationContext, isolate);
    send_encodings_has_value_or_default = true;
  }
  if (send_encodings_has_value_or_default &&
      !create_property(1, send_encodings_value)) {
    return false;
  }

  v8::Local<v8::Value> streams_value;
  bool streams_has_value_or_default = false;
  if (impl->hasStreams()) {
    streams_value = ToV8(impl->streams(), creationContext, isolate);
    streams_has_value_or_default = true;
  } else {
    streams_value = ToV8(HeapVector<Member<MediaStream>>(), creationContext, isolate);
    streams_has_value_or_default = true;
  }
  if (streams_has_value_or_default &&
      !create_property(2, streams_value)) {
    return false;
  }

  return true;
}

RTCRtpTransceiverInit* NativeValueTraits<RTCRtpTransceiverInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  RTCRtpTransceiverInit* impl = RTCRtpTransceiverInit::Create();
  V8RTCRtpTransceiverInit::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
