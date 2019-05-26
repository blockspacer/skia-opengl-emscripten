// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_EVENTSOURCE_EVENT_SOURCE_INIT_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_EVENTSOURCE_EVENT_SOURCE_INIT_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class MODULES_EXPORT EventSourceInit : public IDLDictionaryBase {
 public:
  static EventSourceInit* Create() { return MakeGarbageCollected<EventSourceInit>(); }

  EventSourceInit();
  virtual ~EventSourceInit();

  bool hasWithCredentials() const { return has_with_credentials_; }
  bool withCredentials() const {
    DCHECK(has_with_credentials_);
    return with_credentials_;
  }
  inline void setWithCredentials(bool);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_with_credentials_ = false;

  bool with_credentials_;

  friend class V8EventSourceInit;
};

void EventSourceInit::setWithCredentials(bool value) {
  with_credentials_ = value;
  has_with_credentials_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_EVENTSOURCE_EVENT_SOURCE_INIT_H_
