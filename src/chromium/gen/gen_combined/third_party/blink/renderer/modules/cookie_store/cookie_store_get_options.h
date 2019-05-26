// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_COOKIE_STORE_COOKIE_STORE_GET_OPTIONS_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_COOKIE_STORE_COOKIE_STORE_GET_OPTIONS_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class MODULES_EXPORT CookieStoreGetOptions : public IDLDictionaryBase {
 public:
  static CookieStoreGetOptions* Create() { return MakeGarbageCollected<CookieStoreGetOptions>(); }

  CookieStoreGetOptions();
  virtual ~CookieStoreGetOptions();

  bool hasMatchType() const { return !match_type_.IsNull(); }
  const String& matchType() const {
    return match_type_;
  }
  inline void setMatchType(const String&);

  bool hasName() const { return !name_.IsNull(); }
  const String& name() const {
    return name_;
  }
  inline void setName(const String&);

  bool hasURL() const { return !url_.IsNull(); }
  const String& url() const {
    return url_;
  }
  inline void setURL(const String&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:

  String match_type_;
  String name_;
  String url_;

  friend class V8CookieStoreGetOptions;
};

void CookieStoreGetOptions::setMatchType(const String& value) {
  match_type_ = value;
}

void CookieStoreGetOptions::setName(const String& value) {
  name_ = value;
}

void CookieStoreGetOptions::setURL(const String& value) {
  url_ = value;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_COOKIE_STORE_COOKIE_STORE_GET_OPTIONS_H_
