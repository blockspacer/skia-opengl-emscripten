// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_EVENTS_TOUCH_EVENT_INIT_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_EVENTS_TOUCH_EVENT_INIT_H_

#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/core/dom/events/event_modifier_init.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class Touch;

class CORE_EXPORT TouchEventInit : public EventModifierInit {
 public:
  static TouchEventInit* Create() { return MakeGarbageCollected<TouchEventInit>(); }

  TouchEventInit();
  virtual ~TouchEventInit();

  bool hasChangedTouches() const { return has_changed_touches_; }
  const HeapVector<Member<Touch>>& changedTouches() const {
    DCHECK(has_changed_touches_);
    return changed_touches_;
  }
  void setChangedTouches(const HeapVector<Member<Touch>>&);

  bool hasTargetTouches() const { return has_target_touches_; }
  const HeapVector<Member<Touch>>& targetTouches() const {
    DCHECK(has_target_touches_);
    return target_touches_;
  }
  void setTargetTouches(const HeapVector<Member<Touch>>&);

  bool hasTouches() const { return has_touches_; }
  const HeapVector<Member<Touch>>& touches() const {
    DCHECK(has_touches_);
    return touches_;
  }
  void setTouches(const HeapVector<Member<Touch>>&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_changed_touches_ = false;
  bool has_target_touches_ = false;
  bool has_touches_ = false;

  HeapVector<Member<Touch>> changed_touches_;
  HeapVector<Member<Touch>> target_touches_;
  HeapVector<Member<Touch>> touches_;

  friend class V8TouchEventInit;
};

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_EVENTS_TOUCH_EVENT_INIT_H_
