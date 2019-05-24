// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_WEBSOCKETS_CLOSE_EVENT_INIT_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_WEBSOCKETS_CLOSE_EVENT_INIT_H_

#include "third_party/blink/renderer/core/dom/events/event_init.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class MODULES_EXPORT CloseEventInit : public EventInit {
 public:
  static CloseEventInit* Create() { return MakeGarbageCollected<CloseEventInit>(); }

  CloseEventInit();
  virtual ~CloseEventInit();

  bool hasCode() const { return has_code_; }
  uint16_t code() const {
    DCHECK(has_code_);
    return code_;
  }
  inline void setCode(uint16_t);

  bool hasReason() const { return !reason_.IsNull(); }
  const String& reason() const {
    return reason_;
  }
  inline void setReason(const String&);

  bool hasWasClean() const { return has_was_clean_; }
  bool wasClean() const {
    DCHECK(has_was_clean_);
    return was_clean_;
  }
  inline void setWasClean(bool);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_code_ = false;
  bool has_was_clean_ = false;

  uint16_t code_;
  String reason_;
  bool was_clean_;

  friend class V8CloseEventInit;
};

void CloseEventInit::setCode(uint16_t value) {
  code_ = value;
  has_code_ = true;
}

void CloseEventInit::setReason(const String& value) {
  reason_ = value;
}

void CloseEventInit::setWasClean(bool value) {
  was_clean_ = value;
  has_was_clean_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_WEBSOCKETS_CLOSE_EVENT_INIT_H_
