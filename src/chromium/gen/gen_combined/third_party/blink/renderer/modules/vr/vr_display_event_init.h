// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_VR_VR_DISPLAY_EVENT_INIT_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_VR_VR_DISPLAY_EVENT_INIT_H_

#include "third_party/blink/renderer/core/dom/events/event_init.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class VRDisplay;

class MODULES_EXPORT VRDisplayEventInit : public EventInit {
 public:
  static VRDisplayEventInit* Create() { return MakeGarbageCollected<VRDisplayEventInit>(); }

  VRDisplayEventInit();
  virtual ~VRDisplayEventInit();

  bool hasDisplay() const { return has_display_; }
  VRDisplay* display() const {
    return display_;
  }
  inline void setDisplay(VRDisplay*);
  inline void setDisplayToNull();

  bool hasReason() const { return !reason_.IsNull(); }
  const String& reason() const {
    return reason_;
  }
  inline void setReason(const String&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_display_ = false;

  Member<VRDisplay> display_;
  String reason_;

  friend class V8VRDisplayEventInit;
};

void VRDisplayEventInit::setDisplay(VRDisplay* value) {
  display_ = value;
  has_display_ = true;
}

void VRDisplayEventInit::setDisplayToNull() {
  display_ = Member<VRDisplay>();
  has_display_ = true;
}

void VRDisplayEventInit::setReason(const String& value) {
  reason_ = value;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_VR_VR_DISPLAY_EVENT_INIT_H_
