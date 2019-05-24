// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_CREDENTIALMANAGER_PUBLIC_KEY_CREDENTIAL_REQUEST_OPTIONS_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_CREDENTIALMANAGER_PUBLIC_KEY_CREDENTIAL_REQUEST_OPTIONS_H_

#include "third_party/blink/renderer/bindings/core/v8/array_buffer_or_array_buffer_view.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/core/typed_arrays/array_buffer_view_helpers.h"
#include "third_party/blink/renderer/core/typed_arrays/dom_array_buffer.h"
#include "third_party/blink/renderer/core/typed_arrays/dom_typed_array.h"
#include "third_party/blink/renderer/modules/credentialmanager/authentication_extensions_client_inputs.h"
#include "third_party/blink/renderer/modules/credentialmanager/public_key_credential_descriptor.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"
#include "third_party/blink/renderer/platform/wtf/vector.h"

namespace blink {

class MODULES_EXPORT PublicKeyCredentialRequestOptions : public IDLDictionaryBase {
 public:
  static PublicKeyCredentialRequestOptions* Create() { return MakeGarbageCollected<PublicKeyCredentialRequestOptions>(); }

  PublicKeyCredentialRequestOptions();
  virtual ~PublicKeyCredentialRequestOptions();

  bool hasAllowCredentials() const { return has_allow_credentials_; }
  const HeapVector<Member<PublicKeyCredentialDescriptor>>& allowCredentials() const {
    DCHECK(has_allow_credentials_);
    return allow_credentials_;
  }
  void setAllowCredentials(const HeapVector<Member<PublicKeyCredentialDescriptor>>&);

  bool hasChallenge() const { return !challenge_.IsNull(); }
  const ArrayBufferOrArrayBufferView& challenge() const {
    return challenge_;
  }
  void setChallenge(const ArrayBufferOrArrayBufferView&);

  bool hasExtensions() const { return extensions_; }
  AuthenticationExtensionsClientInputs* extensions() const {
    return extensions_;
  }
  void setExtensions(AuthenticationExtensionsClientInputs*);

  bool hasRpId() const { return !rp_id_.IsNull(); }
  const String& rpId() const {
    return rp_id_;
  }
  inline void setRpId(const String&);

  bool hasTimeout() const { return has_timeout_; }
  uint32_t timeout() const {
    DCHECK(has_timeout_);
    return timeout_;
  }
  inline void setTimeout(uint32_t);

  bool hasUserVerification() const { return !user_verification_.IsNull(); }
  const String& userVerification() const {
    return user_verification_;
  }
  inline void setUserVerification(const String&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_allow_credentials_ = false;
  bool has_timeout_ = false;

  HeapVector<Member<PublicKeyCredentialDescriptor>> allow_credentials_;
  ArrayBufferOrArrayBufferView challenge_;
  Member<AuthenticationExtensionsClientInputs> extensions_;
  String rp_id_;
  uint32_t timeout_;
  String user_verification_;

  friend class V8PublicKeyCredentialRequestOptions;
};

void PublicKeyCredentialRequestOptions::setRpId(const String& value) {
  rp_id_ = value;
}

void PublicKeyCredentialRequestOptions::setTimeout(uint32_t value) {
  timeout_ = value;
  has_timeout_ = true;
}

void PublicKeyCredentialRequestOptions::setUserVerification(const String& value) {
  user_verification_ = value;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_CREDENTIALMANAGER_PUBLIC_KEY_CREDENTIAL_REQUEST_OPTIONS_H_
