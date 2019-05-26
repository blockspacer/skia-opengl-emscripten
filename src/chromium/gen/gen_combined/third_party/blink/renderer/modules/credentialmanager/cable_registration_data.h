// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_CREDENTIALMANAGER_CABLE_REGISTRATION_DATA_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_CREDENTIALMANAGER_CABLE_REGISTRATION_DATA_H_

#include "third_party/blink/renderer/bindings/core/v8/array_buffer_or_array_buffer_view.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/core/typed_arrays/array_buffer_view_helpers.h"
#include "third_party/blink/renderer/core/typed_arrays/dom_array_buffer.h"
#include "third_party/blink/renderer/core/typed_arrays/dom_typed_array.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/vector.h"

namespace blink {

class MODULES_EXPORT CableRegistrationData : public IDLDictionaryBase {
 public:
  static CableRegistrationData* Create() { return MakeGarbageCollected<CableRegistrationData>(); }

  CableRegistrationData();
  virtual ~CableRegistrationData();

  bool hasRpPublicKey() const { return !rp_public_key_.IsNull(); }
  const ArrayBufferOrArrayBufferView& rpPublicKey() const {
    return rp_public_key_;
  }
  void setRpPublicKey(const ArrayBufferOrArrayBufferView&);

  bool hasVersions() const { return has_versions_; }
  const Vector<uint8_t>& versions() const {
    DCHECK(has_versions_);
    return versions_;
  }
  void setVersions(const Vector<uint8_t>&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_versions_ = false;

  ArrayBufferOrArrayBufferView rp_public_key_;
  Vector<uint8_t> versions_;

  friend class V8CableRegistrationData;
};

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_CREDENTIALMANAGER_CABLE_REGISTRATION_DATA_H_
