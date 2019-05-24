// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_MEDIA_CAPABILITIES_MEDIA_DECODING_CONFIGURATION_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_MEDIA_CAPABILITIES_MEDIA_DECODING_CONFIGURATION_H_

#include "third_party/blink/renderer/modules/media_capabilities/media_capabilities_key_system_configuration.h"
#include "third_party/blink/renderer/modules/media_capabilities/media_configuration.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class MODULES_EXPORT MediaDecodingConfiguration : public MediaConfiguration {
 public:
  static MediaDecodingConfiguration* Create() { return MakeGarbageCollected<MediaDecodingConfiguration>(); }

  MediaDecodingConfiguration();
  virtual ~MediaDecodingConfiguration();

  bool hasKeySystemConfiguration() const { return key_system_configuration_; }
  MediaCapabilitiesKeySystemConfiguration* keySystemConfiguration() const {
    return key_system_configuration_;
  }
  void setKeySystemConfiguration(MediaCapabilitiesKeySystemConfiguration*);

  bool hasType() const { return !type_.IsNull(); }
  const String& type() const {
    return type_;
  }
  inline void setType(const String&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:

  Member<MediaCapabilitiesKeySystemConfiguration> key_system_configuration_;
  String type_;

  friend class V8MediaDecodingConfiguration;
};

void MediaDecodingConfiguration::setType(const String& value) {
  type_ = value;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_MEDIA_CAPABILITIES_MEDIA_DECODING_CONFIGURATION_H_
