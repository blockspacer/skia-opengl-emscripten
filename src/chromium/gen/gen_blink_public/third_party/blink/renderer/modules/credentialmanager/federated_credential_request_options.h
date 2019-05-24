// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_CREDENTIALMANAGER_FEDERATED_CREDENTIAL_REQUEST_OPTIONS_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_CREDENTIALMANAGER_FEDERATED_CREDENTIAL_REQUEST_OPTIONS_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"
#include "third_party/blink/renderer/platform/wtf/vector.h"

namespace blink {

class MODULES_EXPORT FederatedCredentialRequestOptions : public IDLDictionaryBase {
 public:
  static FederatedCredentialRequestOptions* Create() { return MakeGarbageCollected<FederatedCredentialRequestOptions>(); }

  FederatedCredentialRequestOptions();
  virtual ~FederatedCredentialRequestOptions();

  bool hasProtocols() const { return has_protocols_; }
  const Vector<String>& protocols() const {
    DCHECK(has_protocols_);
    return protocols_;
  }
  void setProtocols(const Vector<String>&);

  bool hasProviders() const { return has_providers_; }
  const Vector<String>& providers() const {
    DCHECK(has_providers_);
    return providers_;
  }
  void setProviders(const Vector<String>&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_protocols_ = false;
  bool has_providers_ = false;

  Vector<String> protocols_;
  Vector<String> providers_;

  friend class V8FederatedCredentialRequestOptions;
};

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_CREDENTIALMANAGER_FEDERATED_CREDENTIAL_REQUEST_OPTIONS_H_
