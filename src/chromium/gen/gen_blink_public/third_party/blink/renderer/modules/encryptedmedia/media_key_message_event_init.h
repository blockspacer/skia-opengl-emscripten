// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_ENCRYPTEDMEDIA_MEDIA_KEY_MESSAGE_EVENT_INIT_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_ENCRYPTEDMEDIA_MEDIA_KEY_MESSAGE_EVENT_INIT_H_

#include "third_party/blink/renderer/core/dom/events/event_init.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class DOMArrayBuffer;

class MODULES_EXPORT MediaKeyMessageEventInit : public EventInit {
 public:
  static MediaKeyMessageEventInit* Create() { return MakeGarbageCollected<MediaKeyMessageEventInit>(); }

  MediaKeyMessageEventInit();
  virtual ~MediaKeyMessageEventInit();

  bool hasMessage() const { return message_; }
  DOMArrayBuffer* message() const {
    return message_;
  }
  inline void setMessage(DOMArrayBuffer*);

  bool hasMessageType() const { return !message_type_.IsNull(); }
  const String& messageType() const {
    return message_type_;
  }
  inline void setMessageType(const String&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:

  Member<DOMArrayBuffer> message_;
  String message_type_;

  friend class V8MediaKeyMessageEventInit;
};

void MediaKeyMessageEventInit::setMessage(DOMArrayBuffer* value) {
  message_ = value;
}

void MediaKeyMessageEventInit::setMessageType(const String& value) {
  message_type_ = value;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_ENCRYPTEDMEDIA_MEDIA_KEY_MESSAGE_EVENT_INIT_H_
