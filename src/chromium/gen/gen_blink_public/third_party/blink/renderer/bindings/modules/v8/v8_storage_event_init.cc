// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_storage_event_init.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_event_init.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_storage.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8StorageEventInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "key",
    "newValue",
    "oldValue",
    "storageArea",
    "url",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8StorageEventInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, StorageEventInit* impl, ExceptionState& exception_state) {
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

  const v8::Eternal<v8::Name>* keys = eternalV8StorageEventInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> key_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&key_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (key_value.IsEmpty() || key_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<kTreatNullAndUndefinedAsNullString> key_cpp_value = key_value;
    if (!key_cpp_value.Prepare(exception_state))
      return;
    impl->setKey(key_cpp_value);
  }

  v8::Local<v8::Value> new_value_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&new_value_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (new_value_value.IsEmpty() || new_value_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<kTreatNullAndUndefinedAsNullString> new_value_cpp_value = new_value_value;
    if (!new_value_cpp_value.Prepare(exception_state))
      return;
    impl->setNewValue(new_value_cpp_value);
  }

  v8::Local<v8::Value> old_value_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&old_value_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (old_value_value.IsEmpty() || old_value_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<kTreatNullAndUndefinedAsNullString> old_value_cpp_value = old_value_value;
    if (!old_value_cpp_value.Prepare(exception_state))
      return;
    impl->setOldValue(old_value_cpp_value);
  }

  v8::Local<v8::Value> storage_area_value;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&storage_area_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (storage_area_value.IsEmpty() || storage_area_value->IsUndefined()) {
    // Do nothing.
  } else if (storage_area_value->IsNull()) {
    impl->setStorageAreaToNull();
  } else {
    StorageArea* storage_area_cpp_value = V8Storage::ToImplWithTypeCheck(isolate, storage_area_value);
    if (!storage_area_cpp_value) {
      exception_state.ThrowTypeError("member storageArea is not of type Storage.");
      return;
    }
    impl->setStorageArea(storage_area_cpp_value);
  }

  v8::Local<v8::Value> url_value;
  if (!v8Object->Get(context, keys[4].Get(isolate)).ToLocal(&url_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (url_value.IsEmpty() || url_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> url_cpp_value = NativeValueTraits<IDLUSVString>::NativeValue(isolate, url_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setURL(url_cpp_value);
  }
}

v8::Local<v8::Value> StorageEventInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8StorageEventInit(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8StorageEventInit(const StorageEventInit* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8EventInit(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8StorageEventInitKeys(isolate);
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

  v8::Local<v8::Value> key_value;
  bool key_has_value_or_default = false;
  if (impl->hasKey()) {
    key_value = V8String(isolate, impl->key());
    key_has_value_or_default = true;
  } else {
    key_value = v8::Null(isolate);
    key_has_value_or_default = true;
  }
  if (key_has_value_or_default &&
      !create_property(0, key_value)) {
    return false;
  }

  v8::Local<v8::Value> new_value_value;
  bool new_value_has_value_or_default = false;
  if (impl->hasNewValue()) {
    new_value_value = V8String(isolate, impl->newValue());
    new_value_has_value_or_default = true;
  } else {
    new_value_value = v8::Null(isolate);
    new_value_has_value_or_default = true;
  }
  if (new_value_has_value_or_default &&
      !create_property(1, new_value_value)) {
    return false;
  }

  v8::Local<v8::Value> old_value_value;
  bool old_value_has_value_or_default = false;
  if (impl->hasOldValue()) {
    old_value_value = V8String(isolate, impl->oldValue());
    old_value_has_value_or_default = true;
  } else {
    old_value_value = v8::Null(isolate);
    old_value_has_value_or_default = true;
  }
  if (old_value_has_value_or_default &&
      !create_property(2, old_value_value)) {
    return false;
  }

  v8::Local<v8::Value> storage_area_value;
  bool storage_area_has_value_or_default = false;
  if (impl->hasStorageArea()) {
    storage_area_value = ToV8(impl->storageArea(), creationContext, isolate);
    storage_area_has_value_or_default = true;
  }
  if (storage_area_has_value_or_default &&
      !create_property(3, storage_area_value)) {
    return false;
  }

  v8::Local<v8::Value> url_value;
  bool url_has_value_or_default = false;
  if (impl->hasURL()) {
    url_value = V8String(isolate, impl->url());
    url_has_value_or_default = true;
  }
  if (url_has_value_or_default &&
      !create_property(4, url_value)) {
    return false;
  }

  return true;
}

StorageEventInit* NativeValueTraits<StorageEventInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  StorageEventInit* impl = StorageEventInit::Create();
  V8StorageEventInit::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
