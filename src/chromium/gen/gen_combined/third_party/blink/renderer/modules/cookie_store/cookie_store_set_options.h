// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_COOKIE_STORE_COOKIE_STORE_SET_OPTIONS_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_COOKIE_STORE_COOKIE_STORE_SET_OPTIONS_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class MODULES_EXPORT CookieStoreSetOptions : public IDLDictionaryBase {
 public:
  static CookieStoreSetOptions* Create() { return MakeGarbageCollected<CookieStoreSetOptions>(); }

  CookieStoreSetOptions();
  virtual ~CookieStoreSetOptions();

  bool hasDomain() const { return !domain_.IsNull(); }
  const String& domain() const {
    return domain_;
  }
  inline void setDomain(const String&);
  inline void setDomainToNull();

  bool hasExpires() const { return has_expires_; }
  uint64_t expires() const {
    DCHECK(has_expires_);
    return expires_;
  }
  inline void setExpires(uint64_t);
  inline void setExpiresToNull();

  bool hasPath() const { return !path_.IsNull(); }
  const String& path() const {
    return path_;
  }
  inline void setPath(const String&);

  bool hasSameSite() const { return !same_site_.IsNull(); }
  const String& sameSite() const {
    return same_site_;
  }
  inline void setSameSite(const String&);

  bool hasSecure() const { return has_secure_; }
  bool secure() const {
    DCHECK(has_secure_);
    return secure_;
  }
  inline void setSecure(bool);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_expires_ = false;
  bool has_secure_ = false;

  String domain_;
  uint64_t expires_;
  String path_;
  String same_site_;
  bool secure_;

  friend class V8CookieStoreSetOptions;
};

void CookieStoreSetOptions::setDomain(const String& value) {
  domain_ = value;
}

void CookieStoreSetOptions::setDomainToNull() {
  domain_ = String();
}

void CookieStoreSetOptions::setExpires(uint64_t value) {
  expires_ = value;
  has_expires_ = true;
}

void CookieStoreSetOptions::setExpiresToNull() {
  has_expires_ = false;
}

void CookieStoreSetOptions::setPath(const String& value) {
  path_ = value;
}

void CookieStoreSetOptions::setSameSite(const String& value) {
  same_site_ = value;
}

void CookieStoreSetOptions::setSecure(bool value) {
  secure_ = value;
  has_secure_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_COOKIE_STORE_COOKIE_STORE_SET_OPTIONS_H_
