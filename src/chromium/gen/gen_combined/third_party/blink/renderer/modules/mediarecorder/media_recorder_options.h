// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_MEDIARECORDER_MEDIA_RECORDER_OPTIONS_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_MEDIARECORDER_MEDIA_RECORDER_OPTIONS_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class MODULES_EXPORT MediaRecorderOptions : public IDLDictionaryBase {
 public:
  static MediaRecorderOptions* Create() { return MakeGarbageCollected<MediaRecorderOptions>(); }

  MediaRecorderOptions();
  virtual ~MediaRecorderOptions();

  bool hasAudioBitsPerSecond() const { return has_audio_bits_per_second_; }
  uint32_t audioBitsPerSecond() const {
    DCHECK(has_audio_bits_per_second_);
    return audio_bits_per_second_;
  }
  inline void setAudioBitsPerSecond(uint32_t);

  bool hasBitsPerSecond() const { return has_bits_per_second_; }
  uint32_t bitsPerSecond() const {
    DCHECK(has_bits_per_second_);
    return bits_per_second_;
  }
  inline void setBitsPerSecond(uint32_t);

  bool hasMimeType() const { return !mime_type_.IsNull(); }
  const String& mimeType() const {
    return mime_type_;
  }
  inline void setMimeType(const String&);

  bool hasVideoBitsPerSecond() const { return has_video_bits_per_second_; }
  uint32_t videoBitsPerSecond() const {
    DCHECK(has_video_bits_per_second_);
    return video_bits_per_second_;
  }
  inline void setVideoBitsPerSecond(uint32_t);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_audio_bits_per_second_ = false;
  bool has_bits_per_second_ = false;
  bool has_video_bits_per_second_ = false;

  uint32_t audio_bits_per_second_;
  uint32_t bits_per_second_;
  String mime_type_;
  uint32_t video_bits_per_second_;

  friend class V8MediaRecorderOptions;
};

void MediaRecorderOptions::setAudioBitsPerSecond(uint32_t value) {
  audio_bits_per_second_ = value;
  has_audio_bits_per_second_ = true;
}

void MediaRecorderOptions::setBitsPerSecond(uint32_t value) {
  bits_per_second_ = value;
  has_bits_per_second_ = true;
}

void MediaRecorderOptions::setMimeType(const String& value) {
  mime_type_ = value;
}

void MediaRecorderOptions::setVideoBitsPerSecond(uint32_t value) {
  video_bits_per_second_ = value;
  has_video_bits_per_second_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_MEDIARECORDER_MEDIA_RECORDER_OPTIONS_H_
