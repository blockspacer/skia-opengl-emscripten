// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/modules/encryptedmedia/media_key_system_configuration.h"

namespace blink {

MediaKeySystemConfiguration::MediaKeySystemConfiguration() {
  setAudioCapabilities(HeapVector<Member<MediaKeySystemMediaCapability>>());
  setDistinctiveIdentifier("optional");
  setInitDataTypes(Vector<String>());
  setLabel(WTF::g_empty_string);
  setPersistentState("optional");
  setVideoCapabilities(HeapVector<Member<MediaKeySystemMediaCapability>>());
}

MediaKeySystemConfiguration::~MediaKeySystemConfiguration() = default;

void MediaKeySystemConfiguration::setAudioCapabilities(const HeapVector<Member<MediaKeySystemMediaCapability>>& value) {
  audio_capabilities_ = value;
  has_audio_capabilities_ = true;
}

void MediaKeySystemConfiguration::setInitDataTypes(const Vector<String>& value) {
  init_data_types_ = value;
  has_init_data_types_ = true;
}

void MediaKeySystemConfiguration::setSessionTypes(const Vector<String>& value) {
  session_types_ = value;
  has_session_types_ = true;
}

void MediaKeySystemConfiguration::setVideoCapabilities(const HeapVector<Member<MediaKeySystemMediaCapability>>& value) {
  video_capabilities_ = value;
  has_video_capabilities_ = true;
}

void MediaKeySystemConfiguration::Trace(blink::Visitor* visitor) {
  visitor->Trace(audio_capabilities_);
  visitor->Trace(video_capabilities_);
  IDLDictionaryBase::Trace(visitor);
}

}  // namespace blink
