// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_CREDENTIALMANAGER_AUTHENTICATOR_SELECTION_CRITERIA_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_CREDENTIALMANAGER_AUTHENTICATOR_SELECTION_CRITERIA_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class MODULES_EXPORT AuthenticatorSelectionCriteria : public IDLDictionaryBase {
 public:
  static AuthenticatorSelectionCriteria* Create() { return MakeGarbageCollected<AuthenticatorSelectionCriteria>(); }

  AuthenticatorSelectionCriteria();
  virtual ~AuthenticatorSelectionCriteria();

  bool hasAuthenticatorAttachment() const { return !authenticator_attachment_.IsNull(); }
  const String& authenticatorAttachment() const {
    return authenticator_attachment_;
  }
  inline void setAuthenticatorAttachment(const String&);

  bool hasRequireResidentKey() const { return has_require_resident_key_; }
  bool requireResidentKey() const {
    DCHECK(has_require_resident_key_);
    return require_resident_key_;
  }
  inline void setRequireResidentKey(bool);

  bool hasUserVerification() const { return !user_verification_.IsNull(); }
  const String& userVerification() const {
    return user_verification_;
  }
  inline void setUserVerification(const String&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_require_resident_key_ = false;

  String authenticator_attachment_;
  bool require_resident_key_;
  String user_verification_;

  friend class V8AuthenticatorSelectionCriteria;
};

void AuthenticatorSelectionCriteria::setAuthenticatorAttachment(const String& value) {
  authenticator_attachment_ = value;
}

void AuthenticatorSelectionCriteria::setRequireResidentKey(bool value) {
  require_resident_key_ = value;
  has_require_resident_key_ = true;
}

void AuthenticatorSelectionCriteria::setUserVerification(const String& value) {
  user_verification_ = value;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_CREDENTIALMANAGER_AUTHENTICATOR_SELECTION_CRITERIA_H_
