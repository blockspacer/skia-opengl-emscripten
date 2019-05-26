// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_EVENTS_POP_STATE_EVENT_INIT_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_EVENTS_POP_STATE_EVENT_INIT_H_

#include "third_party/blink/renderer/bindings/core/v8/script_value.h"
#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/core/dom/events/event_init.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class CORE_EXPORT PopStateEventInit : public EventInit {
 public:
  static PopStateEventInit* Create() { return MakeGarbageCollected<PopStateEventInit>(); }

  PopStateEventInit();
  virtual ~PopStateEventInit();

  bool hasState() const { return !(state_.IsEmpty() || state_.IsUndefined()); }
  ScriptValue state() const {
    return state_;
  }
  void setState(ScriptValue);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:

  ScriptValue state_;

  friend class V8PopStateEventInit;
};

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_EVENTS_POP_STATE_EVENT_INIT_H_
