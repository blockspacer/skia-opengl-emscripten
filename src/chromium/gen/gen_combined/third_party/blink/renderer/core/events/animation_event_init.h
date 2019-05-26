// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_EVENTS_ANIMATION_EVENT_INIT_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_EVENTS_ANIMATION_EVENT_INIT_H_

#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/core/dom/events/event_init.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class CORE_EXPORT AnimationEventInit : public EventInit {
 public:
  static AnimationEventInit* Create() { return MakeGarbageCollected<AnimationEventInit>(); }

  AnimationEventInit();
  virtual ~AnimationEventInit();

  bool hasAnimationName() const { return !animation_name_.IsNull(); }
  const String& animationName() const {
    return animation_name_;
  }
  inline void setAnimationName(const String&);

  bool hasElapsedTime() const { return has_elapsed_time_; }
  double elapsedTime() const {
    DCHECK(has_elapsed_time_);
    return elapsed_time_;
  }
  inline void setElapsedTime(double);

  bool hasPseudoElement() const { return !pseudo_element_.IsNull(); }
  const String& pseudoElement() const {
    return pseudo_element_;
  }
  inline void setPseudoElement(const String&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_elapsed_time_ = false;

  String animation_name_;
  double elapsed_time_;
  String pseudo_element_;

  friend class V8AnimationEventInit;
};

void AnimationEventInit::setAnimationName(const String& value) {
  animation_name_ = value;
}

void AnimationEventInit::setElapsedTime(double value) {
  elapsed_time_ = value;
  has_elapsed_time_ = true;
}

void AnimationEventInit::setPseudoElement(const String& value) {
  pseudo_element_ = value;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_EVENTS_ANIMATION_EVENT_INIT_H_
