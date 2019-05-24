// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_PICTURE_IN_PICTURE_ENTER_PICTURE_IN_PICTURE_EVENT_INIT_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_PICTURE_IN_PICTURE_ENTER_PICTURE_IN_PICTURE_EVENT_INIT_H_

#include "third_party/blink/renderer/core/dom/events/event_init.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class PictureInPictureWindow;

class MODULES_EXPORT EnterPictureInPictureEventInit : public EventInit {
 public:
  static EnterPictureInPictureEventInit* Create() { return MakeGarbageCollected<EnterPictureInPictureEventInit>(); }

  EnterPictureInPictureEventInit();
  virtual ~EnterPictureInPictureEventInit();

  bool hasPictureInPictureWindow() const { return picture_in_picture_window_; }
  PictureInPictureWindow* pictureInPictureWindow() const {
    return picture_in_picture_window_;
  }
  inline void setPictureInPictureWindow(PictureInPictureWindow*);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:

  Member<PictureInPictureWindow> picture_in_picture_window_;

  friend class V8EnterPictureInPictureEventInit;
};

void EnterPictureInPictureEventInit::setPictureInPictureWindow(PictureInPictureWindow* value) {
  picture_in_picture_window_ = value;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_PICTURE_IN_PICTURE_ENTER_PICTURE_IN_PICTURE_EVENT_INIT_H_
