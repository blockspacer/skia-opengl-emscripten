// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_MEDIA_CAPABILITIES_MEDIA_CAPABILITIES_KEY_SYSTEM_CONFIGURATION_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_MEDIA_CAPABILITIES_MEDIA_CAPABILITIES_KEY_SYSTEM_CONFIGURATION_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"
#include "third_party/blink/renderer/platform/wtf/vector.h"

namespace blink {

class MODULES_EXPORT MediaCapabilitiesKeySystemConfiguration : public IDLDictionaryBase {
 public:
  static MediaCapabilitiesKeySystemConfiguration* Create() { return MakeGarbageCollected<MediaCapabilitiesKeySystemConfiguration>(); }

  MediaCapabilitiesKeySystemConfiguration();
  virtual ~MediaCapabilitiesKeySystemConfiguration();

  bool hasAudioRobustness() const { return !audio_robustness_.IsNull(); }
  const String& audioRobustness() const {
    return audio_robustness_;
  }
  inline void setAudioRobustness(const String&);

  bool hasDistinctiveIdentifier() const { return !distinctive_identifier_.IsNull(); }
  const String& distinctiveIdentifier() const {
    return distinctive_identifier_;
  }
  inline void setDistinctiveIdentifier(const String&);

  bool hasInitDataType() const { return !init_data_type_.IsNull(); }
  const String& initDataType() const {
    return init_data_type_;
  }
  inline void setInitDataType(const String&);

  bool hasKeySystem() const { return !key_system_.IsNull(); }
  const String& keySystem() const {
    return key_system_;
  }
  inline void setKeySystem(const String&);

  bool hasPersistentState() const { return !persistent_state_.IsNull(); }
  const String& persistentState() const {
    return persistent_state_;
  }
  inline void setPersistentState(const String&);

  bool hasSessionTypes() const { return has_session_types_; }
  const Vector<String>& sessionTypes() const {
    DCHECK(has_session_types_);
    return session_types_;
  }
  void setSessionTypes(const Vector<String>&);

  bool hasVideoRobustness() const { return !video_robustness_.IsNull(); }
  const String& videoRobustness() const {
    return video_robustness_;
  }
  inline void setVideoRobustness(const String&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_session_types_ = false;

  String audio_robustness_;
  String distinctive_identifier_;
  String init_data_type_;
  String key_system_;
  String persistent_state_;
  Vector<String> session_types_;
  String video_robustness_;

  friend class V8MediaCapabilitiesKeySystemConfiguration;
};

void MediaCapabilitiesKeySystemConfiguration::setAudioRobustness(const String& value) {
  audio_robustness_ = value;
}

void MediaCapabilitiesKeySystemConfiguration::setDistinctiveIdentifier(const String& value) {
  distinctive_identifier_ = value;
}

void MediaCapabilitiesKeySystemConfiguration::setInitDataType(const String& value) {
  init_data_type_ = value;
}

void MediaCapabilitiesKeySystemConfiguration::setKeySystem(const String& value) {
  key_system_ = value;
}

void MediaCapabilitiesKeySystemConfiguration::setPersistentState(const String& value) {
  persistent_state_ = value;
}

void MediaCapabilitiesKeySystemConfiguration::setVideoRobustness(const String& value) {
  video_robustness_ = value;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_MEDIA_CAPABILITIES_MEDIA_CAPABILITIES_KEY_SYSTEM_CONFIGURATION_H_
