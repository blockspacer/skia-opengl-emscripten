// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_idb_observer_init.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8IDBObserverInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "noRecords",
    "operationTypes",
    "transaction",
    "values",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8IDBObserverInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, IDBObserverInit* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8IDBObserverInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> no_records_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&no_records_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (no_records_value.IsEmpty() || no_records_value->IsUndefined()) {
    // Do nothing.
  } else {
    bool no_records_cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(isolate, no_records_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setNoRecords(no_records_cpp_value);
  }

  v8::Local<v8::Value> operation_types_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&operation_types_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (operation_types_value.IsEmpty() || operation_types_value->IsUndefined()) {
    // Do nothing.
  } else {
    Vector<String> operation_types_cpp_value = NativeValueTraits<IDLSequence<IDLString>>::NativeValue(isolate, operation_types_value, exception_state);
    if (exception_state.HadException())
      return;
    const char* kValidValues[] = {
        "add",
        "put",
        "delete",
        "clear",
    };
    if (!IsValidEnum(operation_types_cpp_value, kValidValues, base::size(kValidValues), "IDBObservationType", exception_state))
      return;
    impl->setOperationTypes(operation_types_cpp_value);
  }

  v8::Local<v8::Value> transaction_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&transaction_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (transaction_value.IsEmpty() || transaction_value->IsUndefined()) {
    // Do nothing.
  } else {
    bool transaction_cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(isolate, transaction_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setTransaction(transaction_cpp_value);
  }

  v8::Local<v8::Value> values_value;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&values_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (values_value.IsEmpty() || values_value->IsUndefined()) {
    // Do nothing.
  } else {
    bool values_cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(isolate, values_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setValues(values_cpp_value);
  }
}

v8::Local<v8::Value> IDBObserverInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8IDBObserverInit(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8IDBObserverInit(const IDBObserverInit* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8IDBObserverInitKeys(isolate);
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

  v8::Local<v8::Value> no_records_value;
  bool no_records_has_value_or_default = false;
  if (impl->hasNoRecords()) {
    no_records_value = v8::Boolean::New(isolate, impl->noRecords());
    no_records_has_value_or_default = true;
  } else {
    no_records_value = v8::Boolean::New(isolate, false);
    no_records_has_value_or_default = true;
  }
  if (no_records_has_value_or_default &&
      !create_property(0, no_records_value)) {
    return false;
  }

  v8::Local<v8::Value> operation_types_value;
  bool operation_types_has_value_or_default = false;
  if (impl->hasOperationTypes()) {
    operation_types_value = ToV8(impl->operationTypes(), creationContext, isolate);
    operation_types_has_value_or_default = true;
  } else {
    operation_types_value = ToV8(Vector<String>(), creationContext, isolate);
    operation_types_has_value_or_default = true;
  }
  if (operation_types_has_value_or_default &&
      !create_property(1, operation_types_value)) {
    return false;
  }

  v8::Local<v8::Value> transaction_value;
  bool transaction_has_value_or_default = false;
  if (impl->hasTransaction()) {
    transaction_value = v8::Boolean::New(isolate, impl->transaction());
    transaction_has_value_or_default = true;
  } else {
    transaction_value = v8::Boolean::New(isolate, false);
    transaction_has_value_or_default = true;
  }
  if (transaction_has_value_or_default &&
      !create_property(2, transaction_value)) {
    return false;
  }

  v8::Local<v8::Value> values_value;
  bool values_has_value_or_default = false;
  if (impl->hasValues()) {
    values_value = v8::Boolean::New(isolate, impl->values());
    values_has_value_or_default = true;
  } else {
    values_value = v8::Boolean::New(isolate, false);
    values_has_value_or_default = true;
  }
  if (values_has_value_or_default &&
      !create_property(3, values_value)) {
    return false;
  }

  return true;
}

IDBObserverInit* NativeValueTraits<IDBObserverInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  IDBObserverInit* impl = IDBObserverInit::Create();
  V8IDBObserverInit::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
