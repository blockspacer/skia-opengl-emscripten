// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_EVENTS_UI_EVENT_INIT_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_EVENTS_UI_EVENT_INIT_H_

#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/core/dom/events/event_init.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class DOMWindow;
class InputDeviceCapabilities;

class CORE_EXPORT UIEventInit : public EventInit {
 public:
  static UIEventInit* Create() { return MakeGarbageCollected<UIEventInit>(); }

  UIEventInit();
  virtual ~UIEventInit();

  bool hasDetail() const { return has_detail_; }
  int32_t detail() const {
    DCHECK(has_detail_);
    return detail_;
  }
  inline void setDetail(int32_t);

  bool hasSourceCapabilities() const { return has_source_capabilities_; }
  InputDeviceCapabilities* sourceCapabilities() const {
    return source_capabilities_;
  }
  inline void setSourceCapabilities(InputDeviceCapabilities*);
  inline void setSourceCapabilitiesToNull();

  bool hasView() const { return has_view_; }
  DOMWindow* view() const {
    return view_;
  }
  inline void setView(DOMWindow*);
  inline void setViewToNull();

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_detail_ = false;
  bool has_source_capabilities_ = false;
  bool has_view_ = false;

  int32_t detail_;
  Member<InputDeviceCapabilities> source_capabilities_;
  Member<DOMWindow> view_;

  friend class V8UIEventInit;
};

void UIEventInit::setDetail(int32_t value) {
  detail_ = value;
  has_detail_ = true;
}

void UIEventInit::setSourceCapabilities(InputDeviceCapabilities* value) {
  source_capabilities_ = value;
  has_source_capabilities_ = true;
}

void UIEventInit::setSourceCapabilitiesToNull() {
  source_capabilities_ = Member<InputDeviceCapabilities>();
  has_source_capabilities_ = true;
}

void UIEventInit::setView(DOMWindow* value) {
  view_ = value;
  has_view_ = true;
}

void UIEventInit::setViewToNull() {
  view_ = Member<DOMWindow>();
  has_view_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_EVENTS_UI_EVENT_INIT_H_
