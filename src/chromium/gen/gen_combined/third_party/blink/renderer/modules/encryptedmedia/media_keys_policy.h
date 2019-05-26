// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_ENCRYPTEDMEDIA_MEDIA_KEYS_POLICY_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_ENCRYPTEDMEDIA_MEDIA_KEYS_POLICY_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class MODULES_EXPORT MediaKeysPolicy : public IDLDictionaryBase {
 public:
  static MediaKeysPolicy* Create() { return MakeGarbageCollected<MediaKeysPolicy>(); }

  MediaKeysPolicy();
  virtual ~MediaKeysPolicy();

  bool hasMinHdcpVersion() const { return !min_hdcp_version_.IsNull(); }
  const String& minHdcpVersion() const {
    return min_hdcp_version_;
  }
  inline void setMinHdcpVersion(const String&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:

  String min_hdcp_version_;

  friend class V8MediaKeysPolicy;
};

void MediaKeysPolicy::setMinHdcpVersion(const String& value) {
  min_hdcp_version_ = value;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_ENCRYPTEDMEDIA_MEDIA_KEYS_POLICY_H_
