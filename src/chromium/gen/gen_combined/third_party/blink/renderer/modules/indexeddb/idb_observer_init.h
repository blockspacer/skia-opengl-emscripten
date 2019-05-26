// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_INDEXEDDB_IDB_OBSERVER_INIT_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_INDEXEDDB_IDB_OBSERVER_INIT_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"
#include "third_party/blink/renderer/platform/wtf/vector.h"

namespace blink {

class MODULES_EXPORT IDBObserverInit : public IDLDictionaryBase {
 public:
  static IDBObserverInit* Create() { return MakeGarbageCollected<IDBObserverInit>(); }

  IDBObserverInit();
  virtual ~IDBObserverInit();

  bool hasNoRecords() const { return has_no_records_; }
  bool noRecords() const {
    DCHECK(has_no_records_);
    return no_records_;
  }
  inline void setNoRecords(bool);

  bool hasOperationTypes() const { return has_operation_types_; }
  const Vector<String>& operationTypes() const {
    DCHECK(has_operation_types_);
    return operation_types_;
  }
  void setOperationTypes(const Vector<String>&);

  bool hasTransaction() const { return has_transaction_; }
  bool transaction() const {
    DCHECK(has_transaction_);
    return transaction_;
  }
  inline void setTransaction(bool);

  bool hasValues() const { return has_values_; }
  bool values() const {
    DCHECK(has_values_);
    return values_;
  }
  inline void setValues(bool);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_no_records_ = false;
  bool has_operation_types_ = false;
  bool has_transaction_ = false;
  bool has_values_ = false;

  bool no_records_;
  Vector<String> operation_types_;
  bool transaction_;
  bool values_;

  friend class V8IDBObserverInit;
};

void IDBObserverInit::setNoRecords(bool value) {
  no_records_ = value;
  has_no_records_ = true;
}

void IDBObserverInit::setTransaction(bool value) {
  transaction_ = value;
  has_transaction_ = true;
}

void IDBObserverInit::setValues(bool value) {
  values_ = value;
  has_values_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_INDEXEDDB_IDB_OBSERVER_INIT_H_
