// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_serial_options.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8SerialOptionsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "baudrate",
    "buffersize",
    "databits",
    "parity",
    "rtscts",
    "stopbits",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8SerialOptions::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, SerialOptions* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8SerialOptionsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> baudrate_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&baudrate_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (baudrate_value.IsEmpty() || baudrate_value->IsUndefined()) {
    // Do nothing.
  } else {
    int32_t baudrate_cpp_value = NativeValueTraits<IDLLong>::NativeValue(isolate, baudrate_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setBaudrate(baudrate_cpp_value);
  }

  v8::Local<v8::Value> buffersize_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&buffersize_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (buffersize_value.IsEmpty() || buffersize_value->IsUndefined()) {
    // Do nothing.
  } else {
    int32_t buffersize_cpp_value = NativeValueTraits<IDLLong>::NativeValue(isolate, buffersize_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setBuffersize(buffersize_cpp_value);
  }

  v8::Local<v8::Value> databits_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&databits_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (databits_value.IsEmpty() || databits_value->IsUndefined()) {
    // Do nothing.
  } else {
    uint8_t databits_cpp_value = NativeValueTraits<IDLOctet>::NativeValue(isolate, databits_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setDatabits(databits_cpp_value);
  }

  v8::Local<v8::Value> parity_value;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&parity_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (parity_value.IsEmpty() || parity_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> parity_cpp_value = parity_value;
    if (!parity_cpp_value.Prepare(exception_state))
      return;
    const char* kValidValues[] = {
        "none",
        "even",
        "odd",
    };
    if (!IsValidEnum(parity_cpp_value, kValidValues, base::size(kValidValues), "ParityType", exception_state))
      return;
    impl->setParity(parity_cpp_value);
  }

  v8::Local<v8::Value> rtscts_value;
  if (!v8Object->Get(context, keys[4].Get(isolate)).ToLocal(&rtscts_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (rtscts_value.IsEmpty() || rtscts_value->IsUndefined()) {
    // Do nothing.
  } else {
    bool rtscts_cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(isolate, rtscts_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setRtscts(rtscts_cpp_value);
  }

  v8::Local<v8::Value> stopbits_value;
  if (!v8Object->Get(context, keys[5].Get(isolate)).ToLocal(&stopbits_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (stopbits_value.IsEmpty() || stopbits_value->IsUndefined()) {
    // Do nothing.
  } else {
    uint8_t stopbits_cpp_value = NativeValueTraits<IDLOctet>::NativeValue(isolate, stopbits_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setStopbits(stopbits_cpp_value);
  }
}

v8::Local<v8::Value> SerialOptions::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8SerialOptions(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8SerialOptions(const SerialOptions* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8SerialOptionsKeys(isolate);
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

  v8::Local<v8::Value> baudrate_value;
  bool baudrate_has_value_or_default = false;
  if (impl->hasBaudrate()) {
    baudrate_value = v8::Integer::New(isolate, impl->baudrate());
    baudrate_has_value_or_default = true;
  } else {
    baudrate_value = v8::Integer::New(isolate, 9600);
    baudrate_has_value_or_default = true;
  }
  if (baudrate_has_value_or_default &&
      !create_property(0, baudrate_value)) {
    return false;
  }

  v8::Local<v8::Value> buffersize_value;
  bool buffersize_has_value_or_default = false;
  if (impl->hasBuffersize()) {
    buffersize_value = v8::Integer::New(isolate, impl->buffersize());
    buffersize_has_value_or_default = true;
  } else {
    buffersize_value = v8::Integer::New(isolate, 255);
    buffersize_has_value_or_default = true;
  }
  if (buffersize_has_value_or_default &&
      !create_property(1, buffersize_value)) {
    return false;
  }

  v8::Local<v8::Value> databits_value;
  bool databits_has_value_or_default = false;
  if (impl->hasDatabits()) {
    databits_value = v8::Integer::NewFromUnsigned(isolate, impl->databits());
    databits_has_value_or_default = true;
  } else {
    databits_value = v8::Integer::NewFromUnsigned(isolate, 8u);
    databits_has_value_or_default = true;
  }
  if (databits_has_value_or_default &&
      !create_property(2, databits_value)) {
    return false;
  }

  v8::Local<v8::Value> parity_value;
  bool parity_has_value_or_default = false;
  if (impl->hasParity()) {
    parity_value = V8String(isolate, impl->parity());
    parity_has_value_or_default = true;
  } else {
    parity_value = V8String(isolate, "none");
    parity_has_value_or_default = true;
  }
  if (parity_has_value_or_default &&
      !create_property(3, parity_value)) {
    return false;
  }

  v8::Local<v8::Value> rtscts_value;
  bool rtscts_has_value_or_default = false;
  if (impl->hasRtscts()) {
    rtscts_value = v8::Boolean::New(isolate, impl->rtscts());
    rtscts_has_value_or_default = true;
  } else {
    rtscts_value = v8::Boolean::New(isolate, false);
    rtscts_has_value_or_default = true;
  }
  if (rtscts_has_value_or_default &&
      !create_property(4, rtscts_value)) {
    return false;
  }

  v8::Local<v8::Value> stopbits_value;
  bool stopbits_has_value_or_default = false;
  if (impl->hasStopbits()) {
    stopbits_value = v8::Integer::NewFromUnsigned(isolate, impl->stopbits());
    stopbits_has_value_or_default = true;
  } else {
    stopbits_value = v8::Integer::NewFromUnsigned(isolate, 1u);
    stopbits_has_value_or_default = true;
  }
  if (stopbits_has_value_or_default &&
      !create_property(5, stopbits_value)) {
    return false;
  }

  return true;
}

SerialOptions* NativeValueTraits<SerialOptions>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  SerialOptions* impl = SerialOptions::Create();
  V8SerialOptions::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
