// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_rtp_header_extension_parameters.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8RTCRtpHeaderExtensionParametersKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "encrypted",
    "id",
    "uri",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8RTCRtpHeaderExtensionParameters::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, RTCRtpHeaderExtensionParameters* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    exception_state.ThrowTypeError("Missing required member(s): id, uri.");
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8RTCRtpHeaderExtensionParametersKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> encrypted_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&encrypted_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (encrypted_value.IsEmpty() || encrypted_value->IsUndefined()) {
    // Do nothing.
  } else {
    bool encrypted_cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(isolate, encrypted_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setEncrypted(encrypted_cpp_value);
  }

  v8::Local<v8::Value> id_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&id_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (id_value.IsEmpty() || id_value->IsUndefined()) {
    exception_state.ThrowTypeError("required member id is undefined.");
    return;
  } else {
    uint16_t id_cpp_value = NativeValueTraits<IDLUnsignedShort>::NativeValue(isolate, id_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setId(id_cpp_value);
  }

  v8::Local<v8::Value> uri_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&uri_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (uri_value.IsEmpty() || uri_value->IsUndefined()) {
    exception_state.ThrowTypeError("required member uri is undefined.");
    return;
  } else {
    V8StringResource<> uri_cpp_value = uri_value;
    if (!uri_cpp_value.Prepare(exception_state))
      return;
    impl->setUri(uri_cpp_value);
  }
}

v8::Local<v8::Value> RTCRtpHeaderExtensionParameters::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8RTCRtpHeaderExtensionParameters(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8RTCRtpHeaderExtensionParameters(const RTCRtpHeaderExtensionParameters* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8RTCRtpHeaderExtensionParametersKeys(isolate);
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

  v8::Local<v8::Value> encrypted_value;
  bool encrypted_has_value_or_default = false;
  if (impl->hasEncrypted()) {
    encrypted_value = v8::Boolean::New(isolate, impl->encrypted());
    encrypted_has_value_or_default = true;
  } else {
    encrypted_value = v8::Boolean::New(isolate, false);
    encrypted_has_value_or_default = true;
  }
  if (encrypted_has_value_or_default &&
      !create_property(0, encrypted_value)) {
    return false;
  }

  v8::Local<v8::Value> id_value;
  bool id_has_value_or_default = false;
  if (impl->hasId()) {
    id_value = v8::Integer::NewFromUnsigned(isolate, impl->id());
    id_has_value_or_default = true;
  } else {
    NOTREACHED();
  }
  if (id_has_value_or_default &&
      !create_property(1, id_value)) {
    return false;
  }

  v8::Local<v8::Value> uri_value;
  bool uri_has_value_or_default = false;
  if (impl->hasUri()) {
    uri_value = V8String(isolate, impl->uri());
    uri_has_value_or_default = true;
  } else {
    NOTREACHED();
  }
  if (uri_has_value_or_default &&
      !create_property(2, uri_value)) {
    return false;
  }

  return true;
}

RTCRtpHeaderExtensionParameters* NativeValueTraits<RTCRtpHeaderExtensionParameters>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  RTCRtpHeaderExtensionParameters* impl = RTCRtpHeaderExtensionParameters::Create();
  V8RTCRtpHeaderExtensionParameters::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
