// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_idb_object_store_parameters.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8IDBObjectStoreParametersKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "autoIncrement",
    "keyPath",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8IDBObjectStoreParameters::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, IDBObjectStoreParameters* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8IDBObjectStoreParametersKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> auto_increment_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&auto_increment_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (auto_increment_value.IsEmpty() || auto_increment_value->IsUndefined()) {
    // Do nothing.
  } else {
    bool auto_increment_cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(isolate, auto_increment_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setAutoIncrement(auto_increment_cpp_value);
  }

  v8::Local<v8::Value> key_path_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&key_path_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (key_path_value.IsEmpty() || key_path_value->IsUndefined()) {
    // Do nothing.
  } else if (key_path_value->IsNull()) {
    impl->setKeyPathToNull();
  } else {
    StringOrStringSequence key_path_cpp_value;
    V8StringOrStringSequence::ToImpl(isolate, key_path_value, key_path_cpp_value, UnionTypeConversionMode::kNullable, exception_state);
    if (exception_state.HadException())
      return;
    impl->setKeyPath(key_path_cpp_value);
  }
}

v8::Local<v8::Value> IDBObjectStoreParameters::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8IDBObjectStoreParameters(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8IDBObjectStoreParameters(const IDBObjectStoreParameters* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8IDBObjectStoreParametersKeys(isolate);
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

  v8::Local<v8::Value> auto_increment_value;
  bool auto_increment_has_value_or_default = false;
  if (impl->hasAutoIncrement()) {
    auto_increment_value = v8::Boolean::New(isolate, impl->autoIncrement());
    auto_increment_has_value_or_default = true;
  } else {
    auto_increment_value = v8::Boolean::New(isolate, false);
    auto_increment_has_value_or_default = true;
  }
  if (auto_increment_has_value_or_default &&
      !create_property(0, auto_increment_value)) {
    return false;
  }

  v8::Local<v8::Value> key_path_value;
  bool key_path_has_value_or_default = false;
  if (impl->hasKeyPath()) {
    key_path_value = ToV8(impl->keyPath(), creationContext, isolate);
    key_path_has_value_or_default = true;
  } else {
    key_path_value = v8::Null(isolate);
    key_path_has_value_or_default = true;
  }
  if (key_path_has_value_or_default &&
      !create_property(1, key_path_value)) {
    return false;
  }

  return true;
}

IDBObjectStoreParameters* NativeValueTraits<IDBObjectStoreParameters>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  IDBObjectStoreParameters* impl = IDBObjectStoreParameters::Create();
  V8IDBObjectStoreParameters::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
