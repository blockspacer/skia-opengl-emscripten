// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_EVENTS_APPLICATION_CACHE_ERROR_EVENT_INIT_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_EVENTS_APPLICATION_CACHE_ERROR_EVENT_INIT_H_

#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/core/dom/events/event_init.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class CORE_EXPORT ApplicationCacheErrorEventInit : public EventInit {
 public:
  static ApplicationCacheErrorEventInit* Create() { return MakeGarbageCollected<ApplicationCacheErrorEventInit>(); }

  ApplicationCacheErrorEventInit();
  virtual ~ApplicationCacheErrorEventInit();

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

  bool hasStatus() const { return has_status_; }
  uint16_t status() const {
    DCHECK(has_status_);
    return status_;
  }
  inline void setStatus(uint16_t);

  bool hasURL() const { return !url_.IsNull(); }
  const String& url() const {
    return url_;
  }
  inline void setURL(const String&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_status_ = false;

  String message_;
  String reason_;
  uint16_t status_;
  String url_;

  friend class V8ApplicationCacheErrorEventInit;
};

void ApplicationCacheErrorEventInit::setMessage(const String& value) {
  message_ = value;
}

void ApplicationCacheErrorEventInit::setReason(const String& value) {
  reason_ = value;
}

void ApplicationCacheErrorEventInit::setStatus(uint16_t value) {
  status_ = value;
  has_status_ = true;
}

void ApplicationCacheErrorEventInit::setURL(const String& value) {
  url_ = value;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_EVENTS_APPLICATION_CACHE_ERROR_EVENT_INIT_H_
