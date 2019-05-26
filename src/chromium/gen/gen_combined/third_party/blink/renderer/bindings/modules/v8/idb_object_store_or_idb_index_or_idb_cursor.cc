// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/idb_object_store_or_idb_index_or_idb_cursor.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_idb_cursor.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_idb_index.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_idb_object_store.h"

namespace blink {

IDBObjectStoreOrIDBIndexOrIDBCursor::IDBObjectStoreOrIDBIndexOrIDBCursor() : type_(SpecificType::kNone) {}

IDBCursor* IDBObjectStoreOrIDBIndexOrIDBCursor::GetAsIDBCursor() const {
  DCHECK(IsIDBCursor());
  return idb_cursor_;
}

void IDBObjectStoreOrIDBIndexOrIDBCursor::SetIDBCursor(IDBCursor* value) {
  DCHECK(IsNull());
  idb_cursor_ = value;
  type_ = SpecificType::kIDBCursor;
}

IDBObjectStoreOrIDBIndexOrIDBCursor IDBObjectStoreOrIDBIndexOrIDBCursor::FromIDBCursor(IDBCursor* value) {
  IDBObjectStoreOrIDBIndexOrIDBCursor container;
  container.SetIDBCursor(value);
  return container;
}

IDBIndex* IDBObjectStoreOrIDBIndexOrIDBCursor::GetAsIDBIndex() const {
  DCHECK(IsIDBIndex());
  return idb_index_;
}

void IDBObjectStoreOrIDBIndexOrIDBCursor::SetIDBIndex(IDBIndex* value) {
  DCHECK(IsNull());
  idb_index_ = value;
  type_ = SpecificType::kIDBIndex;
}

IDBObjectStoreOrIDBIndexOrIDBCursor IDBObjectStoreOrIDBIndexOrIDBCursor::FromIDBIndex(IDBIndex* value) {
  IDBObjectStoreOrIDBIndexOrIDBCursor container;
  container.SetIDBIndex(value);
  return container;
}

IDBObjectStore* IDBObjectStoreOrIDBIndexOrIDBCursor::GetAsIDBObjectStore() const {
  DCHECK(IsIDBObjectStore());
  return idb_object_store_;
}

void IDBObjectStoreOrIDBIndexOrIDBCursor::SetIDBObjectStore(IDBObjectStore* value) {
  DCHECK(IsNull());
  idb_object_store_ = value;
  type_ = SpecificType::kIDBObjectStore;
}

IDBObjectStoreOrIDBIndexOrIDBCursor IDBObjectStoreOrIDBIndexOrIDBCursor::FromIDBObjectStore(IDBObjectStore* value) {
  IDBObjectStoreOrIDBIndexOrIDBCursor container;
  container.SetIDBObjectStore(value);
  return container;
}

IDBObjectStoreOrIDBIndexOrIDBCursor::IDBObjectStoreOrIDBIndexOrIDBCursor(const IDBObjectStoreOrIDBIndexOrIDBCursor&) = default;
IDBObjectStoreOrIDBIndexOrIDBCursor::~IDBObjectStoreOrIDBIndexOrIDBCursor() = default;
IDBObjectStoreOrIDBIndexOrIDBCursor& IDBObjectStoreOrIDBIndexOrIDBCursor::operator=(const IDBObjectStoreOrIDBIndexOrIDBCursor&) = default;

void IDBObjectStoreOrIDBIndexOrIDBCursor::Trace(blink::Visitor* visitor) {
  visitor->Trace(idb_cursor_);
  visitor->Trace(idb_index_);
  visitor->Trace(idb_object_store_);
}

void V8IDBObjectStoreOrIDBIndexOrIDBCursor::ToImpl(
    v8::Isolate* isolate,
    v8::Local<v8::Value> v8_value,
    IDBObjectStoreOrIDBIndexOrIDBCursor& impl,
    UnionTypeConversionMode conversion_mode,
    ExceptionState& exception_state) {
  if (v8_value.IsEmpty())
    return;

  if (conversion_mode == UnionTypeConversionMode::kNullable && IsUndefinedOrNull(v8_value))
    return;

  if (V8IDBCursor::HasInstance(v8_value, isolate)) {
    IDBCursor* cpp_value = V8IDBCursor::ToImpl(v8::Local<v8::Object>::Cast(v8_value));
    impl.SetIDBCursor(cpp_value);
    return;
  }

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

  exception_state.ThrowTypeError("The provided value is not of type '(IDBObjectStore or IDBIndex or IDBCursor)'");
}

v8::Local<v8::Value> ToV8(const IDBObjectStoreOrIDBIndexOrIDBCursor& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  switch (impl.type_) {
    case IDBObjectStoreOrIDBIndexOrIDBCursor::SpecificType::kNone:
      return v8::Null(isolate);
    case IDBObjectStoreOrIDBIndexOrIDBCursor::SpecificType::kIDBCursor:
      return ToV8(impl.GetAsIDBCursor(), creationContext, isolate);
    case IDBObjectStoreOrIDBIndexOrIDBCursor::SpecificType::kIDBIndex:
      return ToV8(impl.GetAsIDBIndex(), creationContext, isolate);
    case IDBObjectStoreOrIDBIndexOrIDBCursor::SpecificType::kIDBObjectStore:
      return ToV8(impl.GetAsIDBObjectStore(), creationContext, isolate);
    default:
      NOTREACHED();
  }
  return v8::Local<v8::Value>();
}

IDBObjectStoreOrIDBIndexOrIDBCursor NativeValueTraits<IDBObjectStoreOrIDBIndexOrIDBCursor>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  IDBObjectStoreOrIDBIndexOrIDBCursor impl;
  V8IDBObjectStoreOrIDBIndexOrIDBCursor::ToImpl(isolate, value, impl, UnionTypeConversionMode::kNotNullable, exception_state);
  return impl;
}

}  // namespace blink
