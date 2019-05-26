// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_hash_change_event_init.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_event_init.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8HashChangeEventInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "newURL",
    "oldURL",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8HashChangeEventInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, HashChangeEventInit* impl, ExceptionState& exception_state) {
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

  const v8::Eternal<v8::Name>* keys = eternalV8HashChangeEventInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> new_url_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&new_url_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (new_url_value.IsEmpty() || new_url_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> new_url_cpp_value = new_url_value;
    if (!new_url_cpp_value.Prepare(exception_state))
      return;
    impl->setNewURL(new_url_cpp_value);
  }

  v8::Local<v8::Value> old_url_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&old_url_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (old_url_value.IsEmpty() || old_url_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> old_url_cpp_value = old_url_value;
    if (!old_url_cpp_value.Prepare(exception_state))
      return;
    impl->setOldURL(old_url_cpp_value);
  }
}

v8::Local<v8::Value> HashChangeEventInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8HashChangeEventInit(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8HashChangeEventInit(const HashChangeEventInit* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8EventInit(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8HashChangeEventInitKeys(isolate);
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

  v8::Local<v8::Value> new_url_value;
  bool new_url_has_value_or_default = false;
  if (impl->hasNewURL()) {
    new_url_value = V8String(isolate, impl->newURL());
    new_url_has_value_or_default = true;
  }
  if (new_url_has_value_or_default &&
      !create_property(0, new_url_value)) {
    return false;
  }

  v8::Local<v8::Value> old_url_value;
  bool old_url_has_value_or_default = false;
  if (impl->hasOldURL()) {
    old_url_value = V8String(isolate, impl->oldURL());
    old_url_has_value_or_default = true;
  }
  if (old_url_has_value_or_default &&
      !create_property(1, old_url_value)) {
    return false;
  }

  return true;
}

HashChangeEventInit* NativeValueTraits<HashChangeEventInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  HashChangeEventInit* impl = HashChangeEventInit::Create();
  V8HashChangeEventInit::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
