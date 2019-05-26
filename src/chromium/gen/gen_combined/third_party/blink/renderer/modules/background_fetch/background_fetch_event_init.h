// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_BACKGROUND_FETCH_BACKGROUND_FETCH_EVENT_INIT_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_BACKGROUND_FETCH_BACKGROUND_FETCH_EVENT_INIT_H_

#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/modules/service_worker/extendable_event_init.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class BackgroundFetchRegistration;

class MODULES_EXPORT BackgroundFetchEventInit : public ExtendableEventInit {
 public:
  static BackgroundFetchEventInit* Create() { return MakeGarbageCollected<BackgroundFetchEventInit>(); }

  BackgroundFetchEventInit();
  virtual ~BackgroundFetchEventInit();

  bool hasRegistration() const { return registration_; }
  BackgroundFetchRegistration* registration() const {
    return registration_;
  }
  inline void setRegistration(BackgroundFetchRegistration*);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:

  Member<BackgroundFetchRegistration> registration_;

  friend class V8BackgroundFetchEventInit;
};

void BackgroundFetchEventInit::setRegistration(BackgroundFetchRegistration* value) {
  registration_ = value;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_BACKGROUND_FETCH_BACKGROUND_FETCH_EVENT_INIT_H_
