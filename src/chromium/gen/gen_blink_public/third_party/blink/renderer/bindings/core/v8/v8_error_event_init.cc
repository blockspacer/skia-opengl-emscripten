// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_error_event_init.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/script_value.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_event_init.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8ErrorEventInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "colno",
    "error",
    "filename",
    "lineno",
    "message",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8ErrorEventInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, ErrorEventInit* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
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

  const v8::Eternal<v8::Name>* keys = eternalV8ErrorEventInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> colno_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&colno_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (colno_value.IsEmpty() || colno_value->IsUndefined()) {
    // Do nothing.
  } else {
    uint32_t colno_cpp_value = NativeValueTraits<IDLUnsignedLong>::NativeValue(isolate, colno_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setColno(colno_cpp_value);
  }

  v8::Local<v8::Value> error_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&error_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (error_value.IsEmpty() || error_value->IsUndefined()) {
    // Do nothing.
  } else {
    ScriptValue error_cpp_value = ScriptValue(ScriptState::Current(isolate), error_value);
    impl->setError(error_cpp_value);
  }

  v8::Local<v8::Value> filename_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&filename_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (filename_value.IsEmpty() || filename_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> filename_cpp_value = filename_value;
    if (!filename_cpp_value.Prepare(exception_state))
      return;
    impl->setFilename(filename_cpp_value);
  }

  v8::Local<v8::Value> lineno_value;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&lineno_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (lineno_value.IsEmpty() || lineno_value->IsUndefined()) {
    // Do nothing.
  } else {
    uint32_t lineno_cpp_value = NativeValueTraits<IDLUnsignedLong>::NativeValue(isolate, lineno_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setLineno(lineno_cpp_value);
  }

  v8::Local<v8::Value> message_value;
  if (!v8Object->Get(context, keys[4].Get(isolate)).ToLocal(&message_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (message_value.IsEmpty() || message_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> message_cpp_value = message_value;
    if (!message_cpp_value.Prepare(exception_state))
      return;
    impl->setMessage(message_cpp_value);
  }
}

v8::Local<v8::Value> ErrorEventInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8ErrorEventInit(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8ErrorEventInit(const ErrorEventInit* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8EventInit(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8ErrorEventInitKeys(isolate);
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

  v8::Local<v8::Value> colno_value;
  bool colno_has_value_or_default = false;
  if (impl->hasColno()) {
    colno_value = v8::Integer::NewFromUnsigned(isolate, impl->colno());
    colno_has_value_or_default = true;
  }
  if (colno_has_value_or_default &&
      !create_property(0, colno_value)) {
    return false;
  }

  v8::Local<v8::Value> error_value;
  bool error_has_value_or_default = false;
  if (impl->hasError()) {
    error_value = impl->error().V8Value();
    error_has_value_or_default = true;
  }
  if (error_has_value_or_default &&
      !create_property(1, error_value)) {
    return false;
  }

  v8::Local<v8::Value> filename_value;
  bool filename_has_value_or_default = false;
  if (impl->hasFilename()) {
    filename_value = V8String(isolate, impl->filename());
    filename_has_value_or_default = true;
  }
  if (filename_has_value_or_default &&
      !create_property(2, filename_value)) {
    return false;
  }

  v8::Local<v8::Value> lineno_value;
  bool lineno_has_value_or_default = false;
  if (impl->hasLineno()) {
    lineno_value = v8::Integer::NewFromUnsigned(isolate, impl->lineno());
    lineno_has_value_or_default = true;
  }
  if (lineno_has_value_or_default &&
      !create_property(3, lineno_value)) {
    return false;
  }

  v8::Local<v8::Value> message_value;
  bool message_has_value_or_default = false;
  if (impl->hasMessage()) {
    message_value = V8String(isolate, impl->message());
    message_has_value_or_default = true;
  }
  if (message_has_value_or_default &&
      !create_property(4, message_value)) {
    return false;
  }

  return true;
}

ErrorEventInit* NativeValueTraits<ErrorEventInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  ErrorEventInit* impl = ErrorEventInit::Create();
  V8ErrorEventInit::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
