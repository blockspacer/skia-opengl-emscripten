// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_MOJO_TEST_MOJO_INTERFACE_REQUEST_EVENT_INIT_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_MOJO_TEST_MOJO_INTERFACE_REQUEST_EVENT_INIT_H_

#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/core/dom/events/event_init.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class MojoHandle;

class CORE_EXPORT MojoInterfaceRequestEventInit : public EventInit {
 public:
  static MojoInterfaceRequestEventInit* Create() { return MakeGarbageCollected<MojoInterfaceRequestEventInit>(); }

  MojoInterfaceRequestEventInit();
  virtual ~MojoInterfaceRequestEventInit();

  bool hasHandle() const { return handle_; }
  MojoHandle* handle() const {
    return handle_;
  }
  inline void setHandle(MojoHandle*);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:

  Member<MojoHandle> handle_;

  friend class V8MojoInterfaceRequestEventInit;
};

void MojoInterfaceRequestEventInit::setHandle(MojoHandle* value) {
  handle_ = value;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_MOJO_TEST_MOJO_INTERFACE_REQUEST_EVENT_INIT_H_
