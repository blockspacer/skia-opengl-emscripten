// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_CONTACTS_PICKER_CONTACTS_SELECT_OPTIONS_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_CONTACTS_PICKER_CONTACTS_SELECT_OPTIONS_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"
#include "third_party/blink/renderer/platform/wtf/vector.h"

namespace blink {

class MODULES_EXPORT ContactsSelectOptions : public IDLDictionaryBase {
 public:
  static ContactsSelectOptions* Create() { return MakeGarbageCollected<ContactsSelectOptions>(); }

  ContactsSelectOptions();
  virtual ~ContactsSelectOptions();

  bool hasMultiple() const { return has_multiple_; }
  bool multiple() const {
    DCHECK(has_multiple_);
    return multiple_;
  }
  inline void setMultiple(bool);

  bool hasProperties() const { return has_properties_; }
  const Vector<String>& properties() const {
    DCHECK(has_properties_);
    return properties_;
  }
  void setProperties(const Vector<String>&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_multiple_ = false;
  bool has_properties_ = false;

  bool multiple_;
  Vector<String> properties_;

  friend class V8ContactsSelectOptions;
};

void ContactsSelectOptions::setMultiple(bool value) {
  multiple_ = value;
  has_multiple_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_CONTACTS_PICKER_CONTACTS_SELECT_OPTIONS_H_
