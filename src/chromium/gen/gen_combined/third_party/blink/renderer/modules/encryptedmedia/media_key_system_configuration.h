// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_ENCRYPTEDMEDIA_MEDIA_KEY_SYSTEM_CONFIGURATION_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_ENCRYPTEDMEDIA_MEDIA_KEY_SYSTEM_CONFIGURATION_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/encryptedmedia/media_key_system_media_capability.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"
#include "third_party/blink/renderer/platform/wtf/vector.h"

namespace blink {

class MODULES_EXPORT MediaKeySystemConfiguration : public IDLDictionaryBase {
 public:
  static MediaKeySystemConfiguration* Create() { return MakeGarbageCollected<MediaKeySystemConfiguration>(); }

  MediaKeySystemConfiguration();
  virtual ~MediaKeySystemConfiguration();

  bool hasAudioCapabilities() const { return has_audio_capabilities_; }
  const HeapVector<Member<MediaKeySystemMediaCapability>>& audioCapabilities() const {
    DCHECK(has_audio_capabilities_);
    return audio_capabilities_;
  }
  void setAudioCapabilities(const HeapVector<Member<MediaKeySystemMediaCapability>>&);

  bool hasDistinctiveIdentifier() const { return !distinctive_identifier_.IsNull(); }
  const String& distinctiveIdentifier() const {
    return distinctive_identifier_;
  }
  inline void setDistinctiveIdentifier(const String&);

  bool hasInitDataTypes() const { return has_init_data_types_; }
  const Vector<String>& initDataTypes() const {
    DCHECK(has_init_data_types_);
    return init_data_types_;
  }
  void setInitDataTypes(const Vector<String>&);

  bool hasLabel() const { return !label_.IsNull(); }
  const String& label() const {
    return label_;
  }
  inline void setLabel(const String&);

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

  bool hasVideoCapabilities() const { return has_video_capabilities_; }
  const HeapVector<Member<MediaKeySystemMediaCapability>>& videoCapabilities() const {
    DCHECK(has_video_capabilities_);
    return video_capabilities_;
  }
  void setVideoCapabilities(const HeapVector<Member<MediaKeySystemMediaCapability>>&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_audio_capabilities_ = false;
  bool has_init_data_types_ = false;
  bool has_session_types_ = false;
  bool has_video_capabilities_ = false;

  HeapVector<Member<MediaKeySystemMediaCapability>> audio_capabilities_;
  String distinctive_identifier_;
  Vector<String> init_data_types_;
  String label_;
  String persistent_state_;
  Vector<String> session_types_;
  HeapVector<Member<MediaKeySystemMediaCapability>> video_capabilities_;

  friend class V8MediaKeySystemConfiguration;
};

void MediaKeySystemConfiguration::setDistinctiveIdentifier(const String& value) {
  distinctive_identifier_ = value;
}

void MediaKeySystemConfiguration::setLabel(const String& value) {
  label_ = value;
}

void MediaKeySystemConfiguration::setPersistentState(const String& value) {
  persistent_state_ = value;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_ENCRYPTEDMEDIA_MEDIA_KEY_SYSTEM_CONFIGURATION_H_
