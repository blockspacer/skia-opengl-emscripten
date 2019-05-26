// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_EVENTS_CLIPBOARD_EVENT_INIT_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_EVENTS_CLIPBOARD_EVENT_INIT_H_

#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/core/dom/events/event_init.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class DataTransfer;

class CORE_EXPORT ClipboardEventInit : public EventInit {
 public:
  static ClipboardEventInit* Create() { return MakeGarbageCollected<ClipboardEventInit>(); }

  ClipboardEventInit();
  virtual ~ClipboardEventInit();

  bool hasClipboardData() const { return has_clipboard_data_; }
  DataTransfer* clipboardData() const {
    return clipboard_data_;
  }
  inline void setClipboardData(DataTransfer*);
  inline void setClipboardDataToNull();

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_clipboard_data_ = false;

  Member<DataTransfer> clipboard_data_;

  friend class V8ClipboardEventInit;
};

void ClipboardEventInit::setClipboardData(DataTransfer* value) {
  clipboard_data_ = value;
  has_clipboard_data_ = true;
}

void ClipboardEventInit::setClipboardDataToNull() {
  clipboard_data_ = Member<DataTransfer>();
  has_clipboard_data_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_EVENTS_CLIPBOARD_EVENT_INIT_H_
