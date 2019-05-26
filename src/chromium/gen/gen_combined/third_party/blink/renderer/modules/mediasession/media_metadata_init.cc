// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/modules/mediasession/media_metadata_init.h"

namespace blink {

MediaMetadataInit::MediaMetadataInit() {
  setAlbum(WTF::g_empty_string);
  setArtist(WTF::g_empty_string);
  setArtwork(HeapVector<Member<MediaImage>>());
  setTitle(WTF::g_empty_string);
}

MediaMetadataInit::~MediaMetadataInit() = default;

void MediaMetadataInit::setArtwork(const HeapVector<Member<MediaImage>>& value) {
  artwork_ = value;
  has_artwork_ = true;
}

void MediaMetadataInit::Trace(blink::Visitor* visitor) {
  visitor->Trace(artwork_);
  IDLDictionaryBase::Trace(visitor);
}

}  // namespace blink
