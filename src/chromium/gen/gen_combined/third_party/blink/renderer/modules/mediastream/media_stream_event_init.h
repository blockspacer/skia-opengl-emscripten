// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_MEDIASTREAM_MEDIA_STREAM_EVENT_INIT_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_MEDIASTREAM_MEDIA_STREAM_EVENT_INIT_H_

#include "third_party/blink/renderer/core/dom/events/event_init.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class MediaStream;

class MODULES_EXPORT MediaStreamEventInit : public EventInit {
 public:
  static MediaStreamEventInit* Create() { return MakeGarbageCollected<MediaStreamEventInit>(); }

  MediaStreamEventInit();
  virtual ~MediaStreamEventInit();

  bool hasStream() const { return has_stream_; }
  MediaStream* stream() const {
    return stream_;
  }
  inline void setStream(MediaStream*);
  inline void setStreamToNull();

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_stream_ = false;

  Member<MediaStream> stream_;

  friend class V8MediaStreamEventInit;
};

void MediaStreamEventInit::setStream(MediaStream* value) {
  stream_ = value;
  has_stream_ = true;
}

void MediaStreamEventInit::setStreamToNull() {
  stream_ = Member<MediaStream>();
  has_stream_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_MEDIASTREAM_MEDIA_STREAM_EVENT_INIT_H_
