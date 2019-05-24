// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_INDEXEDDB_IDB_VERSION_CHANGE_EVENT_INIT_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_INDEXEDDB_IDB_VERSION_CHANGE_EVENT_INIT_H_

#include "third_party/blink/renderer/core/dom/events/event_init.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class MODULES_EXPORT IDBVersionChangeEventInit : public EventInit {
 public:
  static IDBVersionChangeEventInit* Create() { return MakeGarbageCollected<IDBVersionChangeEventInit>(); }

  IDBVersionChangeEventInit();
  virtual ~IDBVersionChangeEventInit();

  bool hasDataLoss() const { return !data_loss_.IsNull(); }
  const String& dataLoss() const {
    return data_loss_;
  }
  inline void setDataLoss(const String&);

  bool hasNewVersion() const { return has_new_version_; }
  uint64_t newVersion() const {
    DCHECK(has_new_version_);
    return new_version_;
  }
  inline void setNewVersion(uint64_t);
  inline void setNewVersionToNull();

  bool hasOldVersion() const { return has_old_version_; }
  uint64_t oldVersion() const {
    DCHECK(has_old_version_);
    return old_version_;
  }
  inline void setOldVersion(uint64_t);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_new_version_ = false;
  bool has_old_version_ = false;

  String data_loss_;
  uint64_t new_version_;
  uint64_t old_version_;

  friend class V8IDBVersionChangeEventInit;
};

void IDBVersionChangeEventInit::setDataLoss(const String& value) {
  data_loss_ = value;
}

void IDBVersionChangeEventInit::setNewVersion(uint64_t value) {
  new_version_ = value;
  has_new_version_ = true;
}

void IDBVersionChangeEventInit::setNewVersionToNull() {
  has_new_version_ = false;
}

void IDBVersionChangeEventInit::setOldVersion(uint64_t value) {
  old_version_ = value;
  has_old_version_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_INDEXEDDB_IDB_VERSION_CHANGE_EVENT_INIT_H_
