// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_QUOTA_STORAGE_USAGE_DETAILS_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_QUOTA_STORAGE_USAGE_DETAILS_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class MODULES_EXPORT StorageUsageDetails : public IDLDictionaryBase {
 public:
  static StorageUsageDetails* Create() { return MakeGarbageCollected<StorageUsageDetails>(); }

  StorageUsageDetails();
  virtual ~StorageUsageDetails();

  bool hasApplicationCache() const { return has_application_cache_; }
  uint64_t applicationCache() const {
    DCHECK(has_application_cache_);
    return application_cache_;
  }
  inline void setApplicationCache(uint64_t);

  bool hasCaches() const { return has_caches_; }
  uint64_t caches() const {
    DCHECK(has_caches_);
    return caches_;
  }
  inline void setCaches(uint64_t);

  bool hasFileSystem() const { return has_file_system_; }
  uint64_t fileSystem() const {
    DCHECK(has_file_system_);
    return file_system_;
  }
  inline void setFileSystem(uint64_t);

  bool hasIndexedDB() const { return has_indexed_db_; }
  uint64_t indexedDB() const {
    DCHECK(has_indexed_db_);
    return indexed_db_;
  }
  inline void setIndexedDB(uint64_t);

  bool hasServiceWorkerRegistrations() const { return has_service_worker_registrations_; }
  uint64_t serviceWorkerRegistrations() const {
    DCHECK(has_service_worker_registrations_);
    return service_worker_registrations_;
  }
  inline void setServiceWorkerRegistrations(uint64_t);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_application_cache_ = false;
  bool has_caches_ = false;
  bool has_file_system_ = false;
  bool has_indexed_db_ = false;
  bool has_service_worker_registrations_ = false;

  uint64_t application_cache_;
  uint64_t caches_;
  uint64_t file_system_;
  uint64_t indexed_db_;
  uint64_t service_worker_registrations_;

  friend class V8StorageUsageDetails;
};

void StorageUsageDetails::setApplicationCache(uint64_t value) {
  application_cache_ = value;
  has_application_cache_ = true;
}

void StorageUsageDetails::setCaches(uint64_t value) {
  caches_ = value;
  has_caches_ = true;
}

void StorageUsageDetails::setFileSystem(uint64_t value) {
  file_system_ = value;
  has_file_system_ = true;
}

void StorageUsageDetails::setIndexedDB(uint64_t value) {
  indexed_db_ = value;
  has_indexed_db_ = true;
}

void StorageUsageDetails::setServiceWorkerRegistrations(uint64_t value) {
  service_worker_registrations_ = value;
  has_service_worker_registrations_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_QUOTA_STORAGE_USAGE_DETAILS_H_
