// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_EVENTS_TRANSITION_EVENT_INIT_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_EVENTS_TRANSITION_EVENT_INIT_H_

#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/core/dom/events/event_init.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class CORE_EXPORT TransitionEventInit : public EventInit {
 public:
  static TransitionEventInit* Create() { return MakeGarbageCollected<TransitionEventInit>(); }

  TransitionEventInit();
  virtual ~TransitionEventInit();

  bool hasElapsedTime() const { return has_elapsed_time_; }
  double elapsedTime() const {
    DCHECK(has_elapsed_time_);
    return elapsed_time_;
  }
  inline void setElapsedTime(double);

  bool hasPropertyName() const { return !property_name_.IsNull(); }
  const String& propertyName() const {
    return property_name_;
  }
  inline void setPropertyName(const String&);

  bool hasPseudoElement() const { return !pseudo_element_.IsNull(); }
  const String& pseudoElement() const {
    return pseudo_element_;
  }
  inline void setPseudoElement(const String&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_elapsed_time_ = false;

  double elapsed_time_;
  String property_name_;
  String pseudo_element_;

  friend class V8TransitionEventInit;
};

void TransitionEventInit::setElapsedTime(double value) {
  elapsed_time_ = value;
  has_elapsed_time_ = true;
}

void TransitionEventInit::setPropertyName(const String& value) {
  property_name_ = value;
}

void TransitionEventInit::setPseudoElement(const String& value) {
  pseudo_element_ = value;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_EVENTS_TRANSITION_EVENT_INIT_H_
