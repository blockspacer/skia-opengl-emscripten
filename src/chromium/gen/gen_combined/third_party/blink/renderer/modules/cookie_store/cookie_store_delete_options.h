// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_COOKIE_STORE_COOKIE_STORE_DELETE_OPTIONS_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_COOKIE_STORE_COOKIE_STORE_DELETE_OPTIONS_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class MODULES_EXPORT CookieStoreDeleteOptions : public IDLDictionaryBase {
 public:
  static CookieStoreDeleteOptions* Create() { return MakeGarbageCollected<CookieStoreDeleteOptions>(); }

  CookieStoreDeleteOptions();
  virtual ~CookieStoreDeleteOptions();

  bool hasDomain() const { return !domain_.IsNull(); }
  const String& domain() const {
    return domain_;
  }
  inline void setDomain(const String&);
  inline void setDomainToNull();

  bool hasName() const { return !name_.IsNull(); }
  const String& name() const {
    return name_;
  }
  inline void setName(const String&);

  bool hasPath() const { return !path_.IsNull(); }
  const String& path() const {
    return path_;
  }
  inline void setPath(const String&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:

  String domain_;
  String name_;
  String path_;

  friend class V8CookieStoreDeleteOptions;
};

void CookieStoreDeleteOptions::setDomain(const String& value) {
  domain_ = value;
}

void CookieStoreDeleteOptions::setDomainToNull() {
  domain_ = String();
}

void CookieStoreDeleteOptions::setName(const String& value) {
  name_ = value;
}

void CookieStoreDeleteOptions::setPath(const String& value) {
  path_ = value;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_COOKIE_STORE_COOKIE_STORE_DELETE_OPTIONS_H_
