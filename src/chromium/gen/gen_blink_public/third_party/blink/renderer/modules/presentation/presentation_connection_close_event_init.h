// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_PRESENTATION_PRESENTATION_CONNECTION_CLOSE_EVENT_INIT_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_PRESENTATION_PRESENTATION_CONNECTION_CLOSE_EVENT_INIT_H_

#include "third_party/blink/renderer/core/dom/events/event_init.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class MODULES_EXPORT PresentationConnectionCloseEventInit : public EventInit {
 public:
  static PresentationConnectionCloseEventInit* Create() { return MakeGarbageCollected<PresentationConnectionCloseEventInit>(); }

  PresentationConnectionCloseEventInit();
  virtual ~PresentationConnectionCloseEventInit();

  bool hasMessage() const { return !message_.IsNull(); }
  const String& message() const {
    return message_;
  }
  inline void setMessage(const String&);

  bool hasReason() const { return !reason_.IsNull(); }
  const String& reason() const {
    return reason_;
  }
  inline void setReason(const String&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:

  String message_;
  String reason_;

  friend class V8PresentationConnectionCloseEventInit;
};

void PresentationConnectionCloseEventInit::setMessage(const String& value) {
  message_ = value;
}

void PresentationConnectionCloseEventInit::setReason(const String& value) {
  reason_ = value;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_PRESENTATION_PRESENTATION_CONNECTION_CLOSE_EVENT_INIT_H_
