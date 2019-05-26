// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/modules/contacts_picker/contacts_select_options.h"

namespace blink {

ContactsSelectOptions::ContactsSelectOptions() {
  setMultiple(false);
}

ContactsSelectOptions::~ContactsSelectOptions() = default;

void ContactsSelectOptions::setProperties(const Vector<String>& value) {
  properties_ = value;
  has_properties_ = true;
}

void ContactsSelectOptions::Trace(blink::Visitor* visitor) {
  IDLDictionaryBase::Trace(visitor);
}

}  // namespace blink