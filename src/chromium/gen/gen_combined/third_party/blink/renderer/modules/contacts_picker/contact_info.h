// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_CONTACTS_PICKER_CONTACT_INFO_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_CONTACTS_PICKER_CONTACT_INFO_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"
#include "third_party/blink/renderer/platform/wtf/vector.h"

namespace blink {

class MODULES_EXPORT ContactInfo : public IDLDictionaryBase {
 public:
  static ContactInfo* Create() { return MakeGarbageCollected<ContactInfo>(); }

  ContactInfo();
  virtual ~ContactInfo();

  bool hasEmail() const { return has_email_; }
  const Vector<String>& email() const {
    DCHECK(has_email_);
    return email_;
  }
  void setEmail(const Vector<String>&);

  bool hasName() const { return has_name_; }
  const Vector<String>& name() const {
    DCHECK(has_name_);
    return name_;
  }
  void setName(const Vector<String>&);

  bool hasTel() const { return has_tel_; }
  const Vector<String>& tel() const {
    DCHECK(has_tel_);
    return tel_;
  }
  void setTel(const Vector<String>&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_email_ = false;
  bool has_name_ = false;
  bool has_tel_ = false;

  Vector<String> email_;
  Vector<String> name_;
  Vector<String> tel_;

  friend class V8ContactInfo;
};

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_CONTACTS_PICKER_CONTACT_INFO_H_
