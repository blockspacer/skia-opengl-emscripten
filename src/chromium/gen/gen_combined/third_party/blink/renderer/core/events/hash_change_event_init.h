// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_EVENTS_HASH_CHANGE_EVENT_INIT_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_EVENTS_HASH_CHANGE_EVENT_INIT_H_

#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/core/dom/events/event_init.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class CORE_EXPORT HashChangeEventInit : public EventInit {
 public:
  static HashChangeEventInit* Create() { return MakeGarbageCollected<HashChangeEventInit>(); }

  HashChangeEventInit();
  virtual ~HashChangeEventInit();

  bool hasNewURL() const { return !new_url_.IsNull(); }
  const String& newURL() const {
    return new_url_;
  }
  inline void setNewURL(const String&);

  bool hasOldURL() const { return !old_url_.IsNull(); }
  const String& oldURL() const {
    return old_url_;
  }
  inline void setOldURL(const String&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:

  String new_url_;
  String old_url_;

  friend class V8HashChangeEventInit;
};

void HashChangeEventInit::setNewURL(const String& value) {
  new_url_ = value;
}

void HashChangeEventInit::setOldURL(const String& value) {
  old_url_ = value;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_EVENTS_HASH_CHANGE_EVENT_INIT_H_
