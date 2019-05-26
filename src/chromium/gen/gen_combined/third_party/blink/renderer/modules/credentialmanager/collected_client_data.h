// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_CREDENTIALMANAGER_COLLECTED_CLIENT_DATA_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_CREDENTIALMANAGER_COLLECTED_CLIENT_DATA_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class MODULES_EXPORT CollectedClientData : public IDLDictionaryBase {
 public:
  static CollectedClientData* Create() { return MakeGarbageCollected<CollectedClientData>(); }

  CollectedClientData();
  virtual ~CollectedClientData();

  bool hasChallenge() const { return !challenge_.IsNull(); }
  const String& challenge() const {
    return challenge_;
  }
  inline void setChallenge(const String&);

  bool hasOrigin() const { return !origin_.IsNull(); }
  const String& origin() const {
    return origin_;
  }
  inline void setOrigin(const String&);

  bool hasTokenBindingId() const { return !token_binding_id_.IsNull(); }
  const String& tokenBindingId() const {
    return token_binding_id_;
  }
  inline void setTokenBindingId(const String&);

  bool hasType() const { return !type_.IsNull(); }
  const String& type() const {
    return type_;
  }
  inline void setType(const String&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:

  String challenge_;
  String origin_;
  String token_binding_id_;
  String type_;

  friend class V8CollectedClientData;
};

void CollectedClientData::setChallenge(const String& value) {
  challenge_ = value;
}

void CollectedClientData::setOrigin(const String& value) {
  origin_ = value;
}

void CollectedClientData::setTokenBindingId(const String& value) {
  token_binding_id_ = value;
}

void CollectedClientData::setType(const String& value) {
  type_ = value;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_CREDENTIALMANAGER_COLLECTED_CLIENT_DATA_H_
