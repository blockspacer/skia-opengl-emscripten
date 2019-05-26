// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_QUOTA_STORAGE_ESTIMATE_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_QUOTA_STORAGE_ESTIMATE_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/modules/quota/storage_usage_details.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class MODULES_EXPORT StorageEstimate : public IDLDictionaryBase {
 public:
  static StorageEstimate* Create() { return MakeGarbageCollected<StorageEstimate>(); }

  StorageEstimate();
  virtual ~StorageEstimate();

  bool hasQuota() const { return has_quota_; }
  uint64_t quota() const {
    DCHECK(has_quota_);
    return quota_;
  }
  inline void setQuota(uint64_t);

  bool hasUsage() const { return has_usage_; }
  uint64_t usage() const {
    DCHECK(has_usage_);
    return usage_;
  }
  inline void setUsage(uint64_t);

  bool hasUsageDetails() const { return usage_details_; }
  StorageUsageDetails* usageDetails() const {
    return usage_details_;
  }
  void setUsageDetails(StorageUsageDetails*);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_quota_ = false;
  bool has_usage_ = false;

  uint64_t quota_;
  uint64_t usage_;
  Member<StorageUsageDetails> usage_details_;

  friend class V8StorageEstimate;
};

void StorageEstimate::setQuota(uint64_t value) {
  quota_ = value;
  has_quota_ = true;
}

void StorageEstimate::setUsage(uint64_t value) {
  usage_ = value;
  has_usage_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_QUOTA_STORAGE_ESTIMATE_H_
