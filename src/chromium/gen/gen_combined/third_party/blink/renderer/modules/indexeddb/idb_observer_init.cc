// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/modules/indexeddb/idb_observer_init.h"

namespace blink {

IDBObserverInit::IDBObserverInit() {
  setNoRecords(false);
  setOperationTypes(Vector<String>());
  setTransaction(false);
  setValues(false);
}

IDBObserverInit::~IDBObserverInit() = default;

void IDBObserverInit::setOperationTypes(const Vector<String>& value) {
  operation_types_ = value;
  has_operation_types_ = true;
}

void IDBObserverInit::Trace(blink::Visitor* visitor) {
  IDLDictionaryBase::Trace(visitor);
}

}  // namespace blink
