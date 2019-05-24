// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_idb_index_parameters.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8IDBIndexParametersKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "multiEntry",
    "unique",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8IDBIndexParameters::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, IDBIndexParameters* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8IDBIndexParametersKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> multi_entry_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&multi_entry_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (multi_entry_value.IsEmpty() || multi_entry_value->IsUndefined()) {
    // Do nothing.
  } else {
    bool multi_entry_cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(isolate, multi_entry_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setMultiEntry(multi_entry_cpp_value);
  }

  v8::Local<v8::Value> unique_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&unique_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (unique_value.IsEmpty() || unique_value->IsUndefined()) {
    // Do nothing.
  } else {
    bool unique_cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(isolate, unique_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setUnique(unique_cpp_value);
  }
}

v8::Local<v8::Value> IDBIndexParameters::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8IDBIndexParameters(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8IDBIndexParameters(const IDBIndexParameters* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8IDBIndexParametersKeys(isolate);
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

  v8::Local<v8::Value> multi_entry_value;
  bool multi_entry_has_value_or_default = false;
  if (impl->hasMultiEntry()) {
    multi_entry_value = v8::Boolean::New(isolate, impl->multiEntry());
    multi_entry_has_value_or_default = true;
  } else {
    multi_entry_value = v8::Boolean::New(isolate, false);
    multi_entry_has_value_or_default = true;
  }
  if (multi_entry_has_value_or_default &&
      !create_property(0, multi_entry_value)) {
    return false;
  }

  v8::Local<v8::Value> unique_value;
  bool unique_has_value_or_default = false;
  if (impl->hasUnique()) {
    unique_value = v8::Boolean::New(isolate, impl->unique());
    unique_has_value_or_default = true;
  } else {
    unique_value = v8::Boolean::New(isolate, false);
    unique_has_value_or_default = true;
  }
  if (unique_has_value_or_default &&
      !create_property(1, unique_value)) {
    return false;
  }

  return true;
}

IDBIndexParameters* NativeValueTraits<IDBIndexParameters>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  IDBIndexParameters* impl = IDBIndexParameters::Create();
  V8IDBIndexParameters::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
