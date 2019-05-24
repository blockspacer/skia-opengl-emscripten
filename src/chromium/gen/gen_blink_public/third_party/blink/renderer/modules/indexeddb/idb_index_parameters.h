// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_INDEXEDDB_IDB_INDEX_PARAMETERS_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_INDEXEDDB_IDB_INDEX_PARAMETERS_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class MODULES_EXPORT IDBIndexParameters : public IDLDictionaryBase {
 public:
  static IDBIndexParameters* Create() { return MakeGarbageCollected<IDBIndexParameters>(); }

  IDBIndexParameters();
  virtual ~IDBIndexParameters();

  bool hasMultiEntry() const { return has_multi_entry_; }
  bool multiEntry() const {
    DCHECK(has_multi_entry_);
    return multi_entry_;
  }
  inline void setMultiEntry(bool);

  bool hasUnique() const { return has_unique_; }
  bool unique() const {
    DCHECK(has_unique_);
    return unique_;
  }
  inline void setUnique(bool);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_multi_entry_ = false;
  bool has_unique_ = false;

  bool multi_entry_;
  bool unique_;

  friend class V8IDBIndexParameters;
};

void IDBIndexParameters::setMultiEntry(bool value) {
  multi_entry_ = value;
  has_multi_entry_ = true;
}

void IDBIndexParameters::setUnique(bool value) {
  unique_ = value;
  has_unique_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_INDEXEDDB_IDB_INDEX_PARAMETERS_H_
