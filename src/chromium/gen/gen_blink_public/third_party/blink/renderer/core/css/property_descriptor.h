// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_CSS_PROPERTY_DESCRIPTOR_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_CSS_PROPERTY_DESCRIPTOR_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class CORE_EXPORT PropertyDescriptor : public IDLDictionaryBase {
 public:
  static PropertyDescriptor* Create() { return MakeGarbageCollected<PropertyDescriptor>(); }

  PropertyDescriptor();
  virtual ~PropertyDescriptor();

  bool hasInherits() const { return has_inherits_; }
  bool inherits() const {
    DCHECK(has_inherits_);
    return inherits_;
  }
  inline void setInherits(bool);

  bool hasInitialValue() const { return !initial_value_.IsNull(); }
  const String& initialValue() const {
    return initial_value_;
  }
  inline void setInitialValue(const String&);

  bool hasName() const { return !name_.IsNull(); }
  const String& name() const {
    return name_;
  }
  inline void setName(const String&);

  bool hasSyntax() const { return !syntax_.IsNull(); }
  const String& syntax() const {
    return syntax_;
  }
  inline void setSyntax(const String&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_inherits_ = false;

  bool inherits_;
  String initial_value_;
  String name_;
  String syntax_;

  friend class V8PropertyDescriptor;
};

void PropertyDescriptor::setInherits(bool value) {
  inherits_ = value;
  has_inherits_ = true;
}

void PropertyDescriptor::setInitialValue(const String& value) {
  initial_value_ = value;
}

void PropertyDescriptor::setName(const String& value) {
  name_ = value;
}

void PropertyDescriptor::setSyntax(const String& value) {
  syntax_ = value;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_CSS_PROPERTY_DESCRIPTOR_H_
