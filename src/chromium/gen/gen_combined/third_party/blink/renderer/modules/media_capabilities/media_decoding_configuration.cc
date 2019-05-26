// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/modules/media_capabilities/media_decoding_configuration.h"

namespace blink {

MediaDecodingConfiguration::MediaDecodingConfiguration() {
}

MediaDecodingConfiguration::~MediaDecodingConfiguration() = default;

void MediaDecodingConfiguration::setKeySystemConfiguration(MediaCapabilitiesKeySystemConfiguration* value) {
  key_system_configuration_ = value;
}

void MediaDecodingConfiguration::Trace(blink::Visitor* visitor) {
  visitor->Trace(key_system_configuration_);
  MediaConfiguration::Trace(visitor);
}

}  // namespace blink
