// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_CREDENTIALMANAGER_PASSWORD_CREDENTIAL_DATA_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_CREDENTIALMANAGER_PASSWORD_CREDENTIAL_DATA_H_

#include "third_party/blink/renderer/modules/credentialmanager/credential_data.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class MODULES_EXPORT PasswordCredentialData : public CredentialData {
 public:
  static PasswordCredentialData* Create() { return MakeGarbageCollected<PasswordCredentialData>(); }

  PasswordCredentialData();
  virtual ~PasswordCredentialData();

  bool hasIconURL() const { return !icon_url_.IsNull(); }
  const String& iconURL() const {
    return icon_url_;
  }
  inline void setIconURL(const String&);

  bool hasName() const { return !name_.IsNull(); }
  const String& name() const {
    return name_;
  }
  inline void setName(const String&);

  bool hasPassword() const { return !password_.IsNull(); }
  const String& password() const {
    return password_;
  }
  inline void setPassword(const String&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:

  String icon_url_;
  String name_;
  String password_;

  friend class V8PasswordCredentialData;
};

void PasswordCredentialData::setIconURL(const String& value) {
  icon_url_ = value;
}

void PasswordCredentialData::setName(const String& value) {
  name_ = value;
}

void PasswordCredentialData::setPassword(const String& value) {
  password_ = value;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_CREDENTIALMANAGER_PASSWORD_CREDENTIAL_DATA_H_
