// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_CREDENTIALMANAGER_CABLE_AUTHENTICATION_DATA_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_CREDENTIALMANAGER_CABLE_AUTHENTICATION_DATA_H_

#include "third_party/blink/renderer/bindings/core/v8/array_buffer_or_array_buffer_view.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/core/typed_arrays/array_buffer_view_helpers.h"
#include "third_party/blink/renderer/core/typed_arrays/dom_array_buffer.h"
#include "third_party/blink/renderer/core/typed_arrays/dom_typed_array.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class MODULES_EXPORT CableAuthenticationData : public IDLDictionaryBase {
 public:
  static CableAuthenticationData* Create() { return MakeGarbageCollected<CableAuthenticationData>(); }

  CableAuthenticationData();
  virtual ~CableAuthenticationData();

  bool hasAuthenticatorEid() const { return !authenticator_eid_.IsNull(); }
  const ArrayBufferOrArrayBufferView& authenticatorEid() const {
    return authenticator_eid_;
  }
  void setAuthenticatorEid(const ArrayBufferOrArrayBufferView&);

  bool hasClientEid() const { return !client_eid_.IsNull(); }
  const ArrayBufferOrArrayBufferView& clientEid() const {
    return client_eid_;
  }
  void setClientEid(const ArrayBufferOrArrayBufferView&);

  bool hasSessionPreKey() const { return !session_pre_key_.IsNull(); }
  const ArrayBufferOrArrayBufferView& sessionPreKey() const {
    return session_pre_key_;
  }
  void setSessionPreKey(const ArrayBufferOrArrayBufferView&);

  bool hasVersion() const { return has_version_; }
  uint8_t version() const {
    DCHECK(has_version_);
    return version_;
  }
  inline void setVersion(uint8_t);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_version_ = false;

  ArrayBufferOrArrayBufferView authenticator_eid_;
  ArrayBufferOrArrayBufferView client_eid_;
  ArrayBufferOrArrayBufferView session_pre_key_;
  uint8_t version_;

  friend class V8CableAuthenticationData;
};

void CableAuthenticationData::setVersion(uint8_t value) {
  version_ = value;
  has_version_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_CREDENTIALMANAGER_CABLE_AUTHENTICATION_DATA_H_
