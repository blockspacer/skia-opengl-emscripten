// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_MEDIA_CAPABILITIES_MEDIA_CAPABILITIES_DECODING_INFO_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_MEDIA_CAPABILITIES_MEDIA_CAPABILITIES_DECODING_INFO_H_

#include "third_party/blink/renderer/modules/media_capabilities/media_capabilities_info.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class MediaKeySystemAccess;

class MODULES_EXPORT MediaCapabilitiesDecodingInfo : public MediaCapabilitiesInfo {
 public:
  static MediaCapabilitiesDecodingInfo* Create() { return MakeGarbageCollected<MediaCapabilitiesDecodingInfo>(); }

  MediaCapabilitiesDecodingInfo();
  virtual ~MediaCapabilitiesDecodingInfo();

  bool hasKeySystemAccess() const { return has_key_system_access_; }
  MediaKeySystemAccess* keySystemAccess() const {
    return key_system_access_;
  }
  inline void setKeySystemAccess(MediaKeySystemAccess*);
  inline void setKeySystemAccessToNull();

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_key_system_access_ = false;

  Member<MediaKeySystemAccess> key_system_access_;

  friend class V8MediaCapabilitiesDecodingInfo;
};

void MediaCapabilitiesDecodingInfo::setKeySystemAccess(MediaKeySystemAccess* value) {
  key_system_access_ = value;
  has_key_system_access_ = true;
}

void MediaCapabilitiesDecodingInfo::setKeySystemAccessToNull() {
  key_system_access_ = Member<MediaKeySystemAccess>();
  has_key_system_access_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_MEDIA_CAPABILITIES_MEDIA_CAPABILITIES_DECODING_INFO_H_
