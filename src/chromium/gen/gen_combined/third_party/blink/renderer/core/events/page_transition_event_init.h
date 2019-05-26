// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_EVENTS_PAGE_TRANSITION_EVENT_INIT_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_EVENTS_PAGE_TRANSITION_EVENT_INIT_H_

#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/core/dom/events/event_init.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class CORE_EXPORT PageTransitionEventInit : public EventInit {
 public:
  static PageTransitionEventInit* Create() { return MakeGarbageCollected<PageTransitionEventInit>(); }

  PageTransitionEventInit();
  virtual ~PageTransitionEventInit();

  bool hasPersisted() const { return has_persisted_; }
  bool persisted() const {
    DCHECK(has_persisted_);
    return persisted_;
  }
  inline void setPersisted(bool);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_persisted_ = false;

  bool persisted_;

  friend class V8PageTransitionEventInit;
};

void PageTransitionEventInit::setPersisted(bool value) {
  persisted_ = value;
  has_persisted_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_EVENTS_PAGE_TRANSITION_EVENT_INIT_H_
