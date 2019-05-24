// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_EVENTS_COMPOSITION_EVENT_INIT_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_EVENTS_COMPOSITION_EVENT_INIT_H_

#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/core/events/ui_event_init.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class CORE_EXPORT CompositionEventInit : public UIEventInit {
 public:
  static CompositionEventInit* Create() { return MakeGarbageCollected<CompositionEventInit>(); }

  CompositionEventInit();
  virtual ~CompositionEventInit();

  bool hasData() const { return !data_.IsNull(); }
  const String& data() const {
    return data_;
  }
  inline void setData(const String&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:

  String data_;

  friend class V8CompositionEventInit;
};

void CompositionEventInit::setData(const String& value) {
  data_ = value;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_EVENTS_COMPOSITION_EVENT_INIT_H_
