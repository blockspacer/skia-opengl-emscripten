// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_data_channel_init.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8RTCDataChannelInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "id",
    "maxPacketLifeTime",
    "maxRetransmitTime",
    "maxRetransmits",
    "negotiated",
    "ordered",
    "protocol",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8RTCDataChannelInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, RTCDataChannelInit* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8RTCDataChannelInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> id_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&id_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (id_value.IsEmpty() || id_value->IsUndefined()) {
    // Do nothing.
  } else {
    uint16_t id_cpp_value = NativeValueTraits<IDLUnsignedShortEnforceRange>::NativeValue(isolate, id_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setId(id_cpp_value);
  }

  v8::Local<v8::Value> max_packet_life_time_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&max_packet_life_time_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (max_packet_life_time_value.IsEmpty() || max_packet_life_time_value->IsUndefined()) {
    // Do nothing.
  } else {
    uint16_t max_packet_life_time_cpp_value = NativeValueTraits<IDLUnsignedShort>::NativeValue(isolate, max_packet_life_time_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setMaxPacketLifeTime(max_packet_life_time_cpp_value);
  }

  v8::Local<v8::Value> max_retransmit_time_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&max_retransmit_time_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (max_retransmit_time_value.IsEmpty() || max_retransmit_time_value->IsUndefined()) {
    // Do nothing.
  } else {
    uint16_t max_retransmit_time_cpp_value = NativeValueTraits<IDLUnsignedShort>::NativeValue(isolate, max_retransmit_time_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setMaxRetransmitTime(max_retransmit_time_cpp_value);
  }

  v8::Local<v8::Value> max_retransmits_value;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&max_retransmits_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (max_retransmits_value.IsEmpty() || max_retransmits_value->IsUndefined()) {
    // Do nothing.
  } else {
    uint16_t max_retransmits_cpp_value = NativeValueTraits<IDLUnsignedShort>::NativeValue(isolate, max_retransmits_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setMaxRetransmits(max_retransmits_cpp_value);
  }

  v8::Local<v8::Value> negotiated_value;
  if (!v8Object->Get(context, keys[4].Get(isolate)).ToLocal(&negotiated_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (negotiated_value.IsEmpty() || negotiated_value->IsUndefined()) {
    // Do nothing.
  } else {
    bool negotiated_cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(isolate, negotiated_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setNegotiated(negotiated_cpp_value);
  }

  v8::Local<v8::Value> ordered_value;
  if (!v8Object->Get(context, keys[5].Get(isolate)).ToLocal(&ordered_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (ordered_value.IsEmpty() || ordered_value->IsUndefined()) {
    // Do nothing.
  } else {
    bool ordered_cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(isolate, ordered_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setOrdered(ordered_cpp_value);
  }

  v8::Local<v8::Value> protocol_value;
  if (!v8Object->Get(context, keys[6].Get(isolate)).ToLocal(&protocol_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (protocol_value.IsEmpty() || protocol_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> protocol_cpp_value = NativeValueTraits<IDLUSVString>::NativeValue(isolate, protocol_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setProtocol(protocol_cpp_value);
  }
}

v8::Local<v8::Value> RTCDataChannelInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8RTCDataChannelInit(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8RTCDataChannelInit(const RTCDataChannelInit* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8RTCDataChannelInitKeys(isolate);
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

  v8::Local<v8::Value> id_value;
  bool id_has_value_or_default = false;
  if (impl->hasId()) {
    id_value = v8::Integer::NewFromUnsigned(isolate, impl->id());
    id_has_value_or_default = true;
  }
  if (id_has_value_or_default &&
      !create_property(0, id_value)) {
    return false;
  }

  v8::Local<v8::Value> max_packet_life_time_value;
  bool max_packet_life_time_has_value_or_default = false;
  if (impl->hasMaxPacketLifeTime()) {
    max_packet_life_time_value = v8::Integer::NewFromUnsigned(isolate, impl->maxPacketLifeTime());
    max_packet_life_time_has_value_or_default = true;
  }
  if (max_packet_life_time_has_value_or_default &&
      !create_property(1, max_packet_life_time_value)) {
    return false;
  }

  v8::Local<v8::Value> max_retransmit_time_value;
  bool max_retransmit_time_has_value_or_default = false;
  if (impl->hasMaxRetransmitTime()) {
    max_retransmit_time_value = v8::Integer::NewFromUnsigned(isolate, impl->maxRetransmitTime());
    max_retransmit_time_has_value_or_default = true;
  }
  if (max_retransmit_time_has_value_or_default &&
      !create_property(2, max_retransmit_time_value)) {
    return false;
  }

  v8::Local<v8::Value> max_retransmits_value;
  bool max_retransmits_has_value_or_default = false;
  if (impl->hasMaxRetransmits()) {
    max_retransmits_value = v8::Integer::NewFromUnsigned(isolate, impl->maxRetransmits());
    max_retransmits_has_value_or_default = true;
  }
  if (max_retransmits_has_value_or_default &&
      !create_property(3, max_retransmits_value)) {
    return false;
  }

  v8::Local<v8::Value> negotiated_value;
  bool negotiated_has_value_or_default = false;
  if (impl->hasNegotiated()) {
    negotiated_value = v8::Boolean::New(isolate, impl->negotiated());
    negotiated_has_value_or_default = true;
  } else {
    negotiated_value = v8::Boolean::New(isolate, false);
    negotiated_has_value_or_default = true;
  }
  if (negotiated_has_value_or_default &&
      !create_property(4, negotiated_value)) {
    return false;
  }

  v8::Local<v8::Value> ordered_value;
  bool ordered_has_value_or_default = false;
  if (impl->hasOrdered()) {
    ordered_value = v8::Boolean::New(isolate, impl->ordered());
    ordered_has_value_or_default = true;
  } else {
    ordered_value = v8::Boolean::New(isolate, true);
    ordered_has_value_or_default = true;
  }
  if (ordered_has_value_or_default &&
      !create_property(5, ordered_value)) {
    return false;
  }

  v8::Local<v8::Value> protocol_value;
  bool protocol_has_value_or_default = false;
  if (impl->hasProtocol()) {
    protocol_value = V8String(isolate, impl->protocol());
    protocol_has_value_or_default = true;
  } else {
    protocol_value = V8String(isolate, WTF::g_empty_string);
    protocol_has_value_or_default = true;
  }
  if (protocol_has_value_or_default &&
      !create_property(6, protocol_value)) {
    return false;
  }

  return true;
}

RTCDataChannelInit* NativeValueTraits<RTCDataChannelInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  RTCDataChannelInit* impl = RTCDataChannelInit::Create();
  V8RTCDataChannelInit::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
