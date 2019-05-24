// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_CREDENTIALMANAGER_PUBLIC_KEY_CREDENTIAL_USER_ENTITY_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_CREDENTIALMANAGER_PUBLIC_KEY_CREDENTIAL_USER_ENTITY_H_

#include "third_party/blink/renderer/bindings/core/v8/array_buffer_or_array_buffer_view.h"
#include "third_party/blink/renderer/core/typed_arrays/array_buffer_view_helpers.h"
#include "third_party/blink/renderer/core/typed_arrays/dom_array_buffer.h"
#include "third_party/blink/renderer/core/typed_arrays/dom_typed_array.h"
#include "third_party/blink/renderer/modules/credentialmanager/public_key_credential_entity.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class MODULES_EXPORT PublicKeyCredentialUserEntity : public PublicKeyCredentialEntity {
 public:
  static PublicKeyCredentialUserEntity* Create() { return MakeGarbageCollected<PublicKeyCredentialUserEntity>(); }

  PublicKeyCredentialUserEntity();
  virtual ~PublicKeyCredentialUserEntity();

  bool hasDisplayName() const { return !display_name_.IsNull(); }
  const String& displayName() const {
    return display_name_;
  }
  inline void setDisplayName(const String&);

  bool hasId() const { return !id_.IsNull(); }
  const ArrayBufferOrArrayBufferView& id() const {
    return id_;
  }
  void setId(const ArrayBufferOrArrayBufferView&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:

  String display_name_;
  ArrayBufferOrArrayBufferView id_;

  friend class V8PublicKeyCredentialUserEntity;
};

void PublicKeyCredentialUserEntity::setDisplayName(const String& value) {
  display_name_ = value;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_CREDENTIALMANAGER_PUBLIC_KEY_CREDENTIAL_USER_ENTITY_H_
