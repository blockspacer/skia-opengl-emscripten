// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_HTML_FORMS_FORM_DATA_EVENT_INIT_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_HTML_FORMS_FORM_DATA_EVENT_INIT_H_

#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/core/dom/events/event_init.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class FormData;

class CORE_EXPORT FormDataEventInit : public EventInit {
 public:
  static FormDataEventInit* Create() { return MakeGarbageCollected<FormDataEventInit>(); }

  FormDataEventInit();
  virtual ~FormDataEventInit();

  bool hasFormData() const { return form_data_; }
  FormData* formData() const {
    return form_data_;
  }
  inline void setFormData(FormData*);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:

  Member<FormData> form_data_;

  friend class V8FormDataEventInit;
};

void FormDataEventInit::setFormData(FormData* value) {
  form_data_ = value;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_HTML_FORMS_FORM_DATA_EVENT_INIT_H_
