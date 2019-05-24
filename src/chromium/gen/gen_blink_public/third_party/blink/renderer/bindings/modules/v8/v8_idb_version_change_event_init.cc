// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_idb_version_change_event_init.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_event_init.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8IDBVersionChangeEventInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "dataLoss",
    "newVersion",
    "oldVersion",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8IDBVersionChangeEventInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, IDBVersionChangeEventInit* impl, ExceptionState& exception_state) {
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

  const v8::Eternal<v8::Name>* keys = eternalV8IDBVersionChangeEventInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> data_loss_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&data_loss_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (data_loss_value.IsEmpty() || data_loss_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> data_loss_cpp_value = data_loss_value;
    if (!data_loss_cpp_value.Prepare(exception_state))
      return;
    const char* kValidValues[] = {
        "none",
        "total",
    };
    if (!IsValidEnum(data_loss_cpp_value, kValidValues, base::size(kValidValues), "IDBDataLossAmount", exception_state))
      return;
    impl->setDataLoss(data_loss_cpp_value);
  }

  v8::Local<v8::Value> new_version_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&new_version_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (new_version_value.IsEmpty() || new_version_value->IsUndefined()) {
    // Do nothing.
  } else if (new_version_value->IsNull()) {
    impl->setNewVersionToNull();
  } else {
    uint64_t new_version_cpp_value = NativeValueTraits<IDLUnsignedLongLong>::NativeValue(isolate, new_version_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setNewVersion(new_version_cpp_value);
  }

  v8::Local<v8::Value> old_version_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&old_version_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (old_version_value.IsEmpty() || old_version_value->IsUndefined()) {
    // Do nothing.
  } else {
    uint64_t old_version_cpp_value = NativeValueTraits<IDLUnsignedLongLong>::NativeValue(isolate, old_version_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setOldVersion(old_version_cpp_value);
  }
}

v8::Local<v8::Value> IDBVersionChangeEventInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8IDBVersionChangeEventInit(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8IDBVersionChangeEventInit(const IDBVersionChangeEventInit* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8EventInit(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8IDBVersionChangeEventInitKeys(isolate);
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

  v8::Local<v8::Value> data_loss_value;
  bool data_loss_has_value_or_default = false;
  if (impl->hasDataLoss()) {
    data_loss_value = V8String(isolate, impl->dataLoss());
    data_loss_has_value_or_default = true;
  } else {
    data_loss_value = V8String(isolate, "none");
    data_loss_has_value_or_default = true;
  }
  if (data_loss_has_value_or_default &&
      !create_property(0, data_loss_value)) {
    return false;
  }

  v8::Local<v8::Value> new_version_value;
  bool new_version_has_value_or_default = false;
  if (impl->hasNewVersion()) {
    new_version_value = v8::Number::New(isolate, static_cast<double>(impl->newVersion()));
    new_version_has_value_or_default = true;
  } else {
    new_version_value = v8::Null(isolate);
    new_version_has_value_or_default = true;
  }
  if (new_version_has_value_or_default &&
      !create_property(1, new_version_value)) {
    return false;
  }

  v8::Local<v8::Value> old_version_value;
  bool old_version_has_value_or_default = false;
  if (impl->hasOldVersion()) {
    old_version_value = v8::Number::New(isolate, static_cast<double>(impl->oldVersion()));
    old_version_has_value_or_default = true;
  } else {
    old_version_value = v8::Number::New(isolate, static_cast<double>(0));
    old_version_has_value_or_default = true;
  }
  if (old_version_has_value_or_default &&
      !create_property(2, old_version_value)) {
    return false;
  }

  return true;
}

IDBVersionChangeEventInit* NativeValueTraits<IDBVersionChangeEventInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  IDBVersionChangeEventInit* impl = IDBVersionChangeEventInit::Create();
  V8IDBVersionChangeEventInit::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
