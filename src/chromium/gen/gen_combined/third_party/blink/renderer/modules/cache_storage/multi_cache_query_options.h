// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_CACHE_STORAGE_MULTI_CACHE_QUERY_OPTIONS_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_CACHE_STORAGE_MULTI_CACHE_QUERY_OPTIONS_H_

#include "third_party/blink/renderer/modules/cache_storage/cache_query_options.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class MODULES_EXPORT MultiCacheQueryOptions : public CacheQueryOptions {
 public:
  static MultiCacheQueryOptions* Create() { return MakeGarbageCollected<MultiCacheQueryOptions>(); }

  MultiCacheQueryOptions();
  virtual ~MultiCacheQueryOptions();

  bool hasCacheName() const { return !cache_name_.IsNull(); }
  const String& cacheName() const {
    return cache_name_;
  }
  inline void setCacheName(const String&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:

  String cache_name_;

  friend class V8MultiCacheQueryOptions;
};

void MultiCacheQueryOptions::setCacheName(const String& value) {
  cache_name_ = value;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_CACHE_STORAGE_MULTI_CACHE_QUERY_OPTIONS_H_
