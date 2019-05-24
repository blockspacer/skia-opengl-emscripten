// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_response_init.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8ResponseInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "headers",
    "status",
    "statusText",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8ResponseInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, ResponseInit* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8ResponseInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> headers_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&headers_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (headers_value.IsEmpty() || headers_value->IsUndefined()) {
    // Do nothing.
  } else {
    ByteStringSequenceSequenceOrByteStringByteStringRecord headers_cpp_value;
    V8ByteStringSequenceSequenceOrByteStringByteStringRecord::ToImpl(isolate, headers_value, headers_cpp_value, UnionTypeConversionMode::kNotNullable, exception_state);
    if (exception_state.HadException())
      return;
    impl->setHeaders(headers_cpp_value);
  }

  v8::Local<v8::Value> status_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&status_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (status_value.IsEmpty() || status_value->IsUndefined()) {
    // Do nothing.
  } else {
    uint16_t status_cpp_value = NativeValueTraits<IDLUnsignedShort>::NativeValue(isolate, status_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setStatus(status_cpp_value);
  }

  v8::Local<v8::Value> status_text_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&status_text_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (status_text_value.IsEmpty() || status_text_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> status_text_cpp_value = NativeValueTraits<IDLByteString>::NativeValue(isolate, status_text_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setStatusText(status_text_cpp_value);
  }
}

v8::Local<v8::Value> ResponseInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8ResponseInit(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8ResponseInit(const ResponseInit* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8ResponseInitKeys(isolate);
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

  v8::Local<v8::Value> headers_value;
  bool headers_has_value_or_default = false;
  if (impl->hasHeaders()) {
    headers_value = ToV8(impl->headers(), creationContext, isolate);
    headers_has_value_or_default = true;
  }
  if (headers_has_value_or_default &&
      !create_property(0, headers_value)) {
    return false;
  }

  v8::Local<v8::Value> status_value;
  bool status_has_value_or_default = false;
  if (impl->hasStatus()) {
    status_value = v8::Integer::NewFromUnsigned(isolate, impl->status());
    status_has_value_or_default = true;
  } else {
    status_value = v8::Integer::NewFromUnsigned(isolate, 200u);
    status_has_value_or_default = true;
  }
  if (status_has_value_or_default &&
      !create_property(1, status_value)) {
    return false;
  }

  v8::Local<v8::Value> status_text_value;
  bool status_text_has_value_or_default = false;
  if (impl->hasStatusText()) {
    status_text_value = V8String(isolate, impl->statusText());
    status_text_has_value_or_default = true;
  } else {
    status_text_value = V8String(isolate, WTF::g_empty_string);
    status_text_has_value_or_default = true;
  }
  if (status_text_has_value_or_default &&
      !create_property(2, status_text_value)) {
    return false;
  }

  return true;
}

ResponseInit* NativeValueTraits<ResponseInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  ResponseInit* impl = ResponseInit::Create();
  V8ResponseInit::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
