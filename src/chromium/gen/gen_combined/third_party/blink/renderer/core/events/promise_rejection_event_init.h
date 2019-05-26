// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_EVENTS_PROMISE_REJECTION_EVENT_INIT_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_EVENTS_PROMISE_REJECTION_EVENT_INIT_H_

#include "third_party/blink/renderer/bindings/core/v8/script_promise.h"
#include "third_party/blink/renderer/bindings/core/v8/script_value.h"
#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/core/dom/events/event_init.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class CORE_EXPORT PromiseRejectionEventInit : public EventInit {
 public:
  static PromiseRejectionEventInit* Create() { return MakeGarbageCollected<PromiseRejectionEventInit>(); }

  PromiseRejectionEventInit();
  virtual ~PromiseRejectionEventInit();

  bool hasPromise() const { return has_promise_; }
  ScriptPromise promise() const {
    DCHECK(has_promise_);
    return promise_;
  }
  void setPromise(ScriptPromise);

  bool hasReason() const { return !(reason_.IsEmpty() || reason_.IsUndefined()); }
  ScriptValue reason() const {
    return reason_;
  }
  void setReason(ScriptValue);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_promise_ = false;

  ScriptPromise promise_;
  ScriptValue reason_;

  friend class V8PromiseRejectionEventInit;
};

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_EVENTS_PROMISE_REJECTION_EVENT_INIT_H_
