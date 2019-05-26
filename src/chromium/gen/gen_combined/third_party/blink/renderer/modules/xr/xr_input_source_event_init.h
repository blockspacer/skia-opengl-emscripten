// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_XR_XR_INPUT_SOURCE_EVENT_INIT_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_XR_XR_INPUT_SOURCE_EVENT_INIT_H_

#include "third_party/blink/renderer/core/dom/events/event_init.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class XRInputSource;
class XRFrame;

class MODULES_EXPORT XRInputSourceEventInit : public EventInit {
 public:
  static XRInputSourceEventInit* Create() { return MakeGarbageCollected<XRInputSourceEventInit>(); }

  XRInputSourceEventInit();
  virtual ~XRInputSourceEventInit();

  bool hasButtonIndex() const { return has_button_index_; }
  int32_t buttonIndex() const {
    DCHECK(has_button_index_);
    return button_index_;
  }
  inline void setButtonIndex(int32_t);
  inline void setButtonIndexToNull();

  bool hasFrame() const { return frame_; }
  XRFrame* frame() const {
    return frame_;
  }
  inline void setFrame(XRFrame*);

  bool hasInputSource() const { return input_source_; }
  XRInputSource* inputSource() const {
    return input_source_;
  }
  inline void setInputSource(XRInputSource*);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_button_index_ = false;

  int32_t button_index_;
  Member<XRFrame> frame_;
  Member<XRInputSource> input_source_;

  friend class V8XRInputSourceEventInit;
};

void XRInputSourceEventInit::setButtonIndex(int32_t value) {
  button_index_ = value;
  has_button_index_ = true;
}

void XRInputSourceEventInit::setButtonIndexToNull() {
  has_button_index_ = false;
}

void XRInputSourceEventInit::setFrame(XRFrame* value) {
  frame_ = value;
}

void XRInputSourceEventInit::setInputSource(XRInputSource* value) {
  input_source_ = value;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_XR_XR_INPUT_SOURCE_EVENT_INIT_H_
