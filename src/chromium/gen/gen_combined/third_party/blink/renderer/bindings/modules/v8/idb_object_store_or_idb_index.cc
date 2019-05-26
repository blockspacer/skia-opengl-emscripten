// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/idb_object_store_or_idb_index.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_idb_index.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_idb_object_store.h"

namespace blink {

IDBObjectStoreOrIDBIndex::IDBObjectStoreOrIDBIndex() : type_(SpecificType::kNone) {}

IDBIndex* IDBObjectStoreOrIDBIndex::GetAsIDBIndex() const {
  DCHECK(IsIDBIndex());
  return idb_index_;
}

void IDBObjectStoreOrIDBIndex::SetIDBIndex(IDBIndex* value) {
  DCHECK(IsNull());
  idb_index_ = value;
  type_ = SpecificType::kIDBIndex;
}

IDBObjectStoreOrIDBIndex IDBObjectStoreOrIDBIndex::FromIDBIndex(IDBIndex* value) {
  IDBObjectStoreOrIDBIndex container;
  container.SetIDBIndex(value);
  return container;
}

IDBObjectStore* IDBObjectStoreOrIDBIndex::GetAsIDBObjectStore() const {
  DCHECK(IsIDBObjectStore());
  return idb_object_store_;
}

void IDBObjectStoreOrIDBIndex::SetIDBObjectStore(IDBObjectStore* value) {
  DCHECK(IsNull());
  idb_object_store_ = value;
  type_ = SpecificType::kIDBObjectStore;
}

IDBObjectStoreOrIDBIndex IDBObjectStoreOrIDBIndex::FromIDBObjectStore(IDBObjectStore* value) {
  IDBObjectStoreOrIDBIndex container;
  container.SetIDBObjectStore(value);
  return container;
}

IDBObjectStoreOrIDBIndex::IDBObjectStoreOrIDBIndex(const IDBObjectStoreOrIDBIndex&) = default;
IDBObjectStoreOrIDBIndex::~IDBObjectStoreOrIDBIndex() = default;
IDBObjectStoreOrIDBIndex& IDBObjectStoreOrIDBIndex::operator=(const IDBObjectStoreOrIDBIndex&) = default;

void IDBObjectStoreOrIDBIndex::Trace(blink::Visitor* visitor) {
  visitor->Trace(idb_index_);
  visitor->Trace(idb_object_store_);
}

void V8IDBObjectStoreOrIDBIndex::ToImpl(
    v8::Isolate* isolate,
    v8::Local<v8::Value> v8_value,
    IDBObjectStoreOrIDBIndex& impl,
    UnionTypeConversionMode conversion_mode,
    ExceptionState& exception_state) {
  if (v8_value.IsEmpty())
    return;

  if (conversion_mode == UnionTypeConversionMode::kNullable && IsUndefinedOrNull(v8_value))
    return;

  if (V8IDBIndex::HasInstance(v8_value, isolate)) {
    IDBIndex* cpp_value = V8IDBIndex::ToImpl(v8::Local<v8::Object>::Cast(v8_value));
    impl.SetIDBIndex(cpp_value);
    return;
  }

  if (V8IDBObjectStore::HasInstance(v8_value, isolate)) {
    IDBObjectStore* cpp_value = V8IDBObjectStore::ToImpl(v8::Local<v8::Object>::Cast(v8_value));
    impl.SetIDBObjectStore(cpp_value);
    return;
  }

  exception_state.ThrowTypeError("The provided value is not of type '(IDBObjectStore or IDBIndex)'");
}

v8::Local<v8::Value> ToV8(const IDBObjectStoreOrIDBIndex& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  switch (impl.type_) {
    case IDBObjectStoreOrIDBIndex::SpecificType::kNone:
      return v8::Null(isolate);
    case IDBObjectStoreOrIDBIndex::SpecificType::kIDBIndex:
      return ToV8(impl.GetAsIDBIndex(), creationContext, isolate);
    case IDBObjectStoreOrIDBIndex::SpecificType::kIDBObjectStore:
      return ToV8(impl.GetAsIDBObjectStore(), creationContext, isolate);
    default:
      NOTREACHED();
  }
  return v8::Local<v8::Value>();
}

IDBObjectStoreOrIDBIndex NativeValueTraits<IDBObjectStoreOrIDBIndex>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  IDBObjectStoreOrIDBIndex impl;
  V8IDBObjectStoreOrIDBIndex::ToImpl(isolate, value, impl, UnionTypeConversionMode::kNotNullable, exception_state);
  return impl;
}

}  // namespace blink
