// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_DOM_EVENTS_ADD_EVENT_LISTENER_OPTIONS_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_DOM_EVENTS_ADD_EVENT_LISTENER_OPTIONS_H_

#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/core/dom/events/event_listener_options.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class CORE_EXPORT AddEventListenerOptions : public EventListenerOptions {
 public:
  static AddEventListenerOptions* Create() { return MakeGarbageCollected<AddEventListenerOptions>(); }

  AddEventListenerOptions();
  virtual ~AddEventListenerOptions();

  bool hasOnce() const { return has_once_; }
  bool once() const {
    DCHECK(has_once_);
    return once_;
  }
  inline void setOnce(bool);

  bool hasPassive() const { return has_passive_; }
  bool passive() const {
    DCHECK(has_passive_);
    return passive_;
  }
  inline void setPassive(bool);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_once_ = false;
  bool has_passive_ = false;

  bool once_;
  bool passive_;

  friend class V8AddEventListenerOptions;
};

void AddEventListenerOptions::setOnce(bool value) {
  once_ = value;
  has_once_ = true;
}

void AddEventListenerOptions::setPassive(bool value) {
  passive_ = value;
  has_passive_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_DOM_EVENTS_ADD_EVENT_LISTENER_OPTIONS_H_
