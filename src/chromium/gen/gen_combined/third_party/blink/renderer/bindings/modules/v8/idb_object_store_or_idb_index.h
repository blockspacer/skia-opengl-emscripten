// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_IDB_OBJECT_STORE_OR_IDB_INDEX_H_
#define THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_IDB_OBJECT_STORE_OR_IDB_INDEX_H_

#include "base/optional.h"
#include "third_party/blink/renderer/bindings/core/v8/dictionary.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_binding_for_core.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class IDBIndex;
class IDBObjectStore;

class MODULES_EXPORT IDBObjectStoreOrIDBIndex final {
  DISALLOW_NEW();
 public:
  IDBObjectStoreOrIDBIndex();
  bool IsNull() const { return type_ == SpecificType::kNone; }

  bool IsIDBIndex() const { return type_ == SpecificType::kIDBIndex; }
  IDBIndex* GetAsIDBIndex() const;
  void SetIDBIndex(IDBIndex*);
  static IDBObjectStoreOrIDBIndex FromIDBIndex(IDBIndex*);

  bool IsIDBObjectStore() const { return type_ == SpecificType::kIDBObjectStore; }
  IDBObjectStore* GetAsIDBObjectStore() const;
  void SetIDBObjectStore(IDBObjectStore*);
  static IDBObjectStoreOrIDBIndex FromIDBObjectStore(IDBObjectStore*);

  IDBObjectStoreOrIDBIndex(const IDBObjectStoreOrIDBIndex&);
  ~IDBObjectStoreOrIDBIndex();
  IDBObjectStoreOrIDBIndex& operator=(const IDBObjectStoreOrIDBIndex&);
  void Trace(blink::Visitor*);

 private:
  enum class SpecificType {
    kNone,
    kIDBIndex,
    kIDBObjectStore,
  };
  SpecificType type_;

  Member<IDBIndex> idb_index_;
  Member<IDBObjectStore> idb_object_store_;

  friend MODULES_EXPORT v8::Local<v8::Value> ToV8(const IDBObjectStoreOrIDBIndex&, v8::Local<v8::Object>, v8::Isolate*);
};

class V8IDBObjectStoreOrIDBIndex final {
 public:
  MODULES_EXPORT static void ToImpl(v8::Isolate*, v8::Local<v8::Value>, IDBObjectStoreOrIDBIndex&, UnionTypeConversionMode, ExceptionState&);
};

MODULES_EXPORT v8::Local<v8::Value> ToV8(const IDBObjectStoreOrIDBIndex&, v8::Local<v8::Object>, v8::Isolate*);

template <class CallbackInfo>
inline void V8SetReturnValue(const CallbackInfo& callbackInfo, IDBObjectStoreOrIDBIndex& impl) {
  V8SetReturnValue(callbackInfo, ToV8(impl, callbackInfo.Holder(), callbackInfo.GetIsolate()));
}

template <class CallbackInfo>
inline void V8SetReturnValue(const CallbackInfo& callbackInfo, IDBObjectStoreOrIDBIndex& impl, v8::Local<v8::Object> creationContext) {
  V8SetReturnValue(callbackInfo, ToV8(impl, creationContext, callbackInfo.GetIsolate()));
}

template <>
struct NativeValueTraits<IDBObjectStoreOrIDBIndex> : public NativeValueTraitsBase<IDBObjectStoreOrIDBIndex> {
  MODULES_EXPORT static IDBObjectStoreOrIDBIndex NativeValue(v8::Isolate*, v8::Local<v8::Value>, ExceptionState&);
  MODULES_EXPORT static IDBObjectStoreOrIDBIndex NullValue() { return IDBObjectStoreOrIDBIndex(); }
};

template <>
struct V8TypeOf<IDBObjectStoreOrIDBIndex> {
  typedef V8IDBObjectStoreOrIDBIndex Type;
};

}  // namespace blink

// We need to set canInitializeWithMemset=true because HeapVector supports
// items that can initialize with memset or have a vtable. It is safe to
// set canInitializeWithMemset=true for a union type object in practice.
// See https://codereview.chromium.org/1118993002/#msg5 for more details.
WTF_ALLOW_MOVE_AND_INIT_WITH_MEM_FUNCTIONS(blink::IDBObjectStoreOrIDBIndex)

#endif  // THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_IDB_OBJECT_STORE_OR_IDB_INDEX_H_
