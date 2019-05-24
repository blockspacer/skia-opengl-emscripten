// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_track_event_init.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_event_init.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_stream.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_stream_track.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_rtp_receiver.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_rtp_transceiver.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8RTCTrackEventInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "receiver",
    "streams",
    "track",
    "transceiver",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8RTCTrackEventInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, RTCTrackEventInit* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    exception_state.ThrowTypeError("Missing required member(s): receiver, track, transceiver.");
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  V8EventInit::ToImpl(isolate, v8_value, impl, exception_state);
  if (exception_state.HadException())
    return;

  const v8::Eternal<v8::Name>* keys = eternalV8RTCTrackEventInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> receiver_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&receiver_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (receiver_value.IsEmpty() || receiver_value->IsUndefined()) {
    exception_state.ThrowTypeError("required member receiver is undefined.");
    return;
  } else {
    RTCRtpReceiver* receiver_cpp_value = V8RTCRtpReceiver::ToImplWithTypeCheck(isolate, receiver_value);
    if (!receiver_cpp_value) {
      exception_state.ThrowTypeError("member receiver is not of type RTCRtpReceiver.");
      return;
    }
    impl->setReceiver(receiver_cpp_value);
  }

  v8::Local<v8::Value> streams_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&streams_value)) {
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

  v8::Local<v8::Value> track_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&track_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (track_value.IsEmpty() || track_value->IsUndefined()) {
    exception_state.ThrowTypeError("required member track is undefined.");
    return;
  } else {
    MediaStreamTrack* track_cpp_value = V8MediaStreamTrack::ToImplWithTypeCheck(isolate, track_value);
    if (!track_cpp_value) {
      exception_state.ThrowTypeError("member track is not of type MediaStreamTrack.");
      return;
    }
    impl->setTrack(track_cpp_value);
  }

  v8::Local<v8::Value> transceiver_value;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&transceiver_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (transceiver_value.IsEmpty() || transceiver_value->IsUndefined()) {
    exception_state.ThrowTypeError("required member transceiver is undefined.");
    return;
  } else {
    RTCRtpTransceiver* transceiver_cpp_value = V8RTCRtpTransceiver::ToImplWithTypeCheck(isolate, transceiver_value);
    if (!transceiver_cpp_value) {
      exception_state.ThrowTypeError("member transceiver is not of type RTCRtpTransceiver.");
      return;
    }
    impl->setTransceiver(transceiver_cpp_value);
  }
}

v8::Local<v8::Value> RTCTrackEventInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8RTCTrackEventInit(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8RTCTrackEventInit(const RTCTrackEventInit* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8EventInit(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8RTCTrackEventInitKeys(isolate);
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

  v8::Local<v8::Value> receiver_value;
  bool receiver_has_value_or_default = false;
  if (impl->hasReceiver()) {
    receiver_value = ToV8(impl->receiver(), creationContext, isolate);
    receiver_has_value_or_default = true;
  } else {
    NOTREACHED();
  }
  if (receiver_has_value_or_default &&
      !create_property(0, receiver_value)) {
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
      !create_property(1, streams_value)) {
    return false;
  }

  v8::Local<v8::Value> track_value;
  bool track_has_value_or_default = false;
  if (impl->hasTrack()) {
    track_value = ToV8(impl->track(), creationContext, isolate);
    track_has_value_or_default = true;
  } else {
    NOTREACHED();
  }
  if (track_has_value_or_default &&
      !create_property(2, track_value)) {
    return false;
  }

  v8::Local<v8::Value> transceiver_value;
  bool transceiver_has_value_or_default = false;
  if (impl->hasTransceiver()) {
    transceiver_value = ToV8(impl->transceiver(), creationContext, isolate);
    transceiver_has_value_or_default = true;
  } else {
    NOTREACHED();
  }
  if (transceiver_has_value_or_default &&
      !create_property(3, transceiver_value)) {
    return false;
  }

  return true;
}

RTCTrackEventInit* NativeValueTraits<RTCTrackEventInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  RTCTrackEventInit* impl = RTCTrackEventInit::Create();
  V8RTCTrackEventInit::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
