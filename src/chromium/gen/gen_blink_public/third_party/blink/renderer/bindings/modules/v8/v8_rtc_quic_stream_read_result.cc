// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_quic_stream_read_result.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8RTCQuicStreamReadResultKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "amount",
    "finished",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8RTCQuicStreamReadResult::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, RTCQuicStreamReadResult* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8RTCQuicStreamReadResultKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> amount_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&amount_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (amount_value.IsEmpty() || amount_value->IsUndefined()) {
    // Do nothing.
  } else {
    uint32_t amount_cpp_value = NativeValueTraits<IDLUnsignedLong>::NativeValue(isolate, amount_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setAmount(amount_cpp_value);
  }

  v8::Local<v8::Value> finished_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&finished_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (finished_value.IsEmpty() || finished_value->IsUndefined()) {
    // Do nothing.
  } else {
    bool finished_cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(isolate, finished_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setFinished(finished_cpp_value);
  }
}

v8::Local<v8::Value> RTCQuicStreamReadResult::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8RTCQuicStreamReadResult(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8RTCQuicStreamReadResult(const RTCQuicStreamReadResult* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8RTCQuicStreamReadResultKeys(isolate);
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

  v8::Local<v8::Value> amount_value;
  bool amount_has_value_or_default = false;
  if (impl->hasAmount()) {
    amount_value = v8::Integer::NewFromUnsigned(isolate, impl->amount());
    amount_has_value_or_default = true;
  }
  if (amount_has_value_or_default &&
      !create_property(0, amount_value)) {
    return false;
  }

  v8::Local<v8::Value> finished_value;
  bool finished_has_value_or_default = false;
  if (impl->hasFinished()) {
    finished_value = v8::Boolean::New(isolate, impl->finished());
    finished_has_value_or_default = true;
  }
  if (finished_has_value_or_default &&
      !create_property(1, finished_value)) {
    return false;
  }

  return true;
}

RTCQuicStreamReadResult* NativeValueTraits<RTCQuicStreamReadResult>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  RTCQuicStreamReadResult* impl = RTCQuicStreamReadResult::Create();
  V8RTCQuicStreamReadResult::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
