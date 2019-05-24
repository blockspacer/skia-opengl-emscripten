// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/modules/indexeddb/idb_object_store_parameters.h"

namespace blink {

IDBObjectStoreParameters::IDBObjectStoreParameters() {
  setAutoIncrement(false);
}

IDBObjectStoreParameters::~IDBObjectStoreParameters() = default;

void IDBObjectStoreParameters::setKeyPath(const StringOrStringSequence& value) {
  key_path_ = value;
}

void IDBObjectStoreParameters::setKeyPathToNull() {
  key_path_ = StringOrStringSequence();
}

void IDBObjectStoreParameters::Trace(blink::Visitor* visitor) {
  visitor->Trace(key_path_);
  IDLDictionaryBase::Trace(visitor);
}

}  // namespace blink
