// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_mojo_handle_signals.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8MojoHandleSignalsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "peerClosed",
    "readable",
    "writable",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8MojoHandleSignals::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, MojoHandleSignals* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8MojoHandleSignalsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> peer_closed_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&peer_closed_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (peer_closed_value.IsEmpty() || peer_closed_value->IsUndefined()) {
    // Do nothing.
  } else {
    bool peer_closed_cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(isolate, peer_closed_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setPeerClosed(peer_closed_cpp_value);
  }

  v8::Local<v8::Value> readable_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&readable_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (readable_value.IsEmpty() || readable_value->IsUndefined()) {
    // Do nothing.
  } else {
    bool readable_cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(isolate, readable_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setReadable(readable_cpp_value);
  }

  v8::Local<v8::Value> writable_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&writable_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (writable_value.IsEmpty() || writable_value->IsUndefined()) {
    // Do nothing.
  } else {
    bool writable_cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(isolate, writable_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setWritable(writable_cpp_value);
  }
}

v8::Local<v8::Value> MojoHandleSignals::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8MojoHandleSignals(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8MojoHandleSignals(const MojoHandleSignals* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8MojoHandleSignalsKeys(isolate);
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

  v8::Local<v8::Value> peer_closed_value;
  bool peer_closed_has_value_or_default = false;
  if (impl->hasPeerClosed()) {
    peer_closed_value = v8::Boolean::New(isolate, impl->peerClosed());
    peer_closed_has_value_or_default = true;
  } else {
    peer_closed_value = v8::Boolean::New(isolate, false);
    peer_closed_has_value_or_default = true;
  }
  if (peer_closed_has_value_or_default &&
      !create_property(0, peer_closed_value)) {
    return false;
  }

  v8::Local<v8::Value> readable_value;
  bool readable_has_value_or_default = false;
  if (impl->hasReadable()) {
    readable_value = v8::Boolean::New(isolate, impl->readable());
    readable_has_value_or_default = true;
  } else {
    readable_value = v8::Boolean::New(isolate, false);
    readable_has_value_or_default = true;
  }
  if (readable_has_value_or_default &&
      !create_property(1, readable_value)) {
    return false;
  }

  v8::Local<v8::Value> writable_value;
  bool writable_has_value_or_default = false;
  if (impl->hasWritable()) {
    writable_value = v8::Boolean::New(isolate, impl->writable());
    writable_has_value_or_default = true;
  } else {
    writable_value = v8::Boolean::New(isolate, false);
    writable_has_value_or_default = true;
  }
  if (writable_has_value_or_default &&
      !create_property(2, writable_value)) {
    return false;
  }

  return true;
}

MojoHandleSignals* NativeValueTraits<MojoHandleSignals>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  MojoHandleSignals* impl = MojoHandleSignals::Create();
  V8MojoHandleSignals::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
