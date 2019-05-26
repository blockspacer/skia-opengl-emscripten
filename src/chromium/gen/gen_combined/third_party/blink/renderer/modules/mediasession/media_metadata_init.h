// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_MEDIASESSION_MEDIA_METADATA_INIT_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_MEDIASESSION_MEDIA_METADATA_INIT_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/mediasession/media_image.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"
#include "third_party/blink/renderer/platform/wtf/vector.h"

namespace blink {

class MODULES_EXPORT MediaMetadataInit : public IDLDictionaryBase {
 public:
  static MediaMetadataInit* Create() { return MakeGarbageCollected<MediaMetadataInit>(); }

  MediaMetadataInit();
  virtual ~MediaMetadataInit();

  bool hasAlbum() const { return !album_.IsNull(); }
  const String& album() const {
    return album_;
  }
  inline void setAlbum(const String&);

  bool hasArtist() const { return !artist_.IsNull(); }
  const String& artist() const {
    return artist_;
  }
  inline void setArtist(const String&);

  bool hasArtwork() const { return has_artwork_; }
  const HeapVector<Member<MediaImage>>& artwork() const {
    DCHECK(has_artwork_);
    return artwork_;
  }
  void setArtwork(const HeapVector<Member<MediaImage>>&);

  bool hasTitle() const { return !title_.IsNull(); }
  const String& title() const {
    return title_;
  }
  inline void setTitle(const String&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_artwork_ = false;

  String album_;
  String artist_;
  HeapVector<Member<MediaImage>> artwork_;
  String title_;

  friend class V8MediaMetadataInit;
};

void MediaMetadataInit::setAlbum(const String& value) {
  album_ = value;
}

void MediaMetadataInit::setArtist(const String& value) {
  artist_ = value;
}

void MediaMetadataInit::setTitle(const String& value) {
  title_ = value;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_MEDIASESSION_MEDIA_METADATA_INIT_H_
