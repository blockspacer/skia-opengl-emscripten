// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/modules/media_capabilities/media_capabilities_key_system_configuration.h"

namespace blink {

MediaCapabilitiesKeySystemConfiguration::MediaCapabilitiesKeySystemConfiguration() {
  setDistinctiveIdentifier("optional");
  setInitDataType(WTF::g_empty_string);
  setPersistentState("optional");
}

MediaCapabilitiesKeySystemConfiguration::~MediaCapabilitiesKeySystemConfiguration() = default;

void MediaCapabilitiesKeySystemConfiguration::setSessionTypes(const Vector<String>& value) {
  session_types_ = value;
  has_session_types_ = true;
}

void MediaCapabilitiesKeySystemConfiguration::Trace(blink::Visitor* visitor) {
  IDLDictionaryBase::Trace(visitor);
}

}  // namespace blink
