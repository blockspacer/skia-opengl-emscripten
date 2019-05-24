// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_EVENTS_ANIMATION_PLAYBACK_EVENT_INIT_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_EVENTS_ANIMATION_PLAYBACK_EVENT_INIT_H_

#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/core/dom/events/event_init.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class CORE_EXPORT AnimationPlaybackEventInit : public EventInit {
 public:
  static AnimationPlaybackEventInit* Create() { return MakeGarbageCollected<AnimationPlaybackEventInit>(); }

  AnimationPlaybackEventInit();
  virtual ~AnimationPlaybackEventInit();

  bool hasCurrentTime() const { return has_current_time_; }
  double currentTime() const {
    DCHECK(has_current_time_);
    return current_time_;
  }
  inline void setCurrentTime(double);
  inline void setCurrentTimeToNull();

  bool hasTimelineTime() const { return has_timeline_time_; }
  double timelineTime() const {
    DCHECK(has_timeline_time_);
    return timeline_time_;
  }
  inline void setTimelineTime(double);
  inline void setTimelineTimeToNull();

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_current_time_ = false;
  bool has_timeline_time_ = false;

  double current_time_;
  double timeline_time_;

  friend class V8AnimationPlaybackEventInit;
};

void AnimationPlaybackEventInit::setCurrentTime(double value) {
  current_time_ = value;
  has_current_time_ = true;
}

void AnimationPlaybackEventInit::setCurrentTimeToNull() {
  has_current_time_ = false;
}

void AnimationPlaybackEventInit::setTimelineTime(double value) {
  timeline_time_ = value;
  has_timeline_time_ = true;
}

void AnimationPlaybackEventInit::setTimelineTimeToNull() {
  has_timeline_time_ = false;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_EVENTS_ANIMATION_PLAYBACK_EVENT_INIT_H_
