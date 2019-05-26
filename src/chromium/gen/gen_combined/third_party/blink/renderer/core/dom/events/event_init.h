// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_DOM_EVENTS_EVENT_INIT_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_DOM_EVENTS_EVENT_INIT_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class CORE_EXPORT EventInit : public IDLDictionaryBase {
 public:
  static EventInit* Create() { return MakeGarbageCollected<EventInit>(); }

  EventInit();
  virtual ~EventInit();

  bool hasBubbles() const { return has_bubbles_; }
  bool bubbles() const {
    DCHECK(has_bubbles_);
    return bubbles_;
  }
  inline void setBubbles(bool);

  bool hasCancelable() const { return has_cancelable_; }
  bool cancelable() const {
    DCHECK(has_cancelable_);
    return cancelable_;
  }
  inline void setCancelable(bool);

  bool hasComposed() const { return has_composed_; }
  bool composed() const {
    DCHECK(has_composed_);
    return composed_;
  }
  inline void setComposed(bool);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_bubbles_ = false;
  bool has_cancelable_ = false;
  bool has_composed_ = false;

  bool bubbles_;
  bool cancelable_;
  bool composed_;

  friend class V8EventInit;
};

void EventInit::setBubbles(bool value) {
  bubbles_ = value;
  has_bubbles_ = true;
}

void EventInit::setCancelable(bool value) {
  cancelable_ = value;
  has_cancelable_ = true;
}

void EventInit::setComposed(bool value) {
  composed_ = value;
  has_composed_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_DOM_EVENTS_EVENT_INIT_H_
