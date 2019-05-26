// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_CACHE_STORAGE_CACHE_QUERY_OPTIONS_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_CACHE_STORAGE_CACHE_QUERY_OPTIONS_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class MODULES_EXPORT CacheQueryOptions : public IDLDictionaryBase {
 public:
  static CacheQueryOptions* Create() { return MakeGarbageCollected<CacheQueryOptions>(); }

  CacheQueryOptions();
  virtual ~CacheQueryOptions();

  bool hasIgnoreMethod() const { return has_ignore_method_; }
  bool ignoreMethod() const {
    DCHECK(has_ignore_method_);
    return ignore_method_;
  }
  inline void setIgnoreMethod(bool);

  bool hasIgnoreSearch() const { return has_ignore_search_; }
  bool ignoreSearch() const {
    DCHECK(has_ignore_search_);
    return ignore_search_;
  }
  inline void setIgnoreSearch(bool);

  bool hasIgnoreVary() const { return has_ignore_vary_; }
  bool ignoreVary() const {
    DCHECK(has_ignore_vary_);
    return ignore_vary_;
  }
  inline void setIgnoreVary(bool);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_ignore_method_ = false;
  bool has_ignore_search_ = false;
  bool has_ignore_vary_ = false;

  bool ignore_method_;
  bool ignore_search_;
  bool ignore_vary_;

  friend class V8CacheQueryOptions;
};

void CacheQueryOptions::setIgnoreMethod(bool value) {
  ignore_method_ = value;
  has_ignore_method_ = true;
}

void CacheQueryOptions::setIgnoreSearch(bool value) {
  ignore_search_ = value;
  has_ignore_search_ = true;
}

void CacheQueryOptions::setIgnoreVary(bool value) {
  ignore_vary_ = value;
  has_ignore_vary_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_CACHE_STORAGE_CACHE_QUERY_OPTIONS_H_
