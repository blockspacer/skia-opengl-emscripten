// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_event_init.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8EventInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "bubbles",
    "cancelable",
    "composed",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8EventInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, EventInit* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8EventInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> bubbles_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&bubbles_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (bubbles_value.IsEmpty() || bubbles_value->IsUndefined()) {
    // Do nothing.
  } else {
    bool bubbles_cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(isolate, bubbles_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setBubbles(bubbles_cpp_value);
  }

  v8::Local<v8::Value> cancelable_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&cancelable_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (cancelable_value.IsEmpty() || cancelable_value->IsUndefined()) {
    // Do nothing.
  } else {
    bool cancelable_cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(isolate, cancelable_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setCancelable(cancelable_cpp_value);
  }

  v8::Local<v8::Value> composed_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&composed_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (composed_value.IsEmpty() || composed_value->IsUndefined()) {
    // Do nothing.
  } else {
    bool composed_cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(isolate, composed_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setComposed(composed_cpp_value);
  }
}

v8::Local<v8::Value> EventInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8EventInit(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8EventInit(const EventInit* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8EventInitKeys(isolate);
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

  v8::Local<v8::Value> bubbles_value;
  bool bubbles_has_value_or_default = false;
  if (impl->hasBubbles()) {
    bubbles_value = v8::Boolean::New(isolate, impl->bubbles());
    bubbles_has_value_or_default = true;
  } else {
    bubbles_value = v8::Boolean::New(isolate, false);
    bubbles_has_value_or_default = true;
  }
  if (bubbles_has_value_or_default &&
      !create_property(0, bubbles_value)) {
    return false;
  }

  v8::Local<v8::Value> cancelable_value;
  bool cancelable_has_value_or_default = false;
  if (impl->hasCancelable()) {
    cancelable_value = v8::Boolean::New(isolate, impl->cancelable());
    cancelable_has_value_or_default = true;
  } else {
    cancelable_value = v8::Boolean::New(isolate, false);
    cancelable_has_value_or_default = true;
  }
  if (cancelable_has_value_or_default &&
      !create_property(1, cancelable_value)) {
    return false;
  }

  v8::Local<v8::Value> composed_value;
  bool composed_has_value_or_default = false;
  if (impl->hasComposed()) {
    composed_value = v8::Boolean::New(isolate, impl->composed());
    composed_has_value_or_default = true;
  } else {
    composed_value = v8::Boolean::New(isolate, false);
    composed_has_value_or_default = true;
  }
  if (composed_has_value_or_default &&
      !create_property(2, composed_value)) {
    return false;
  }

  return true;
}

EventInit* NativeValueTraits<EventInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  EventInit* impl = EventInit::Create();
  V8EventInit::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
