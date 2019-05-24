// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/core/dom/mutation_observer_init.h"

namespace blink {

MutationObserverInit::MutationObserverInit() {
  setChildList(false);
  setSubtree(false);
}

MutationObserverInit::~MutationObserverInit() = default;

void MutationObserverInit::setAttributeFilter(const Vector<String>& value) {
  attribute_filter_ = value;
  has_attribute_filter_ = true;
}

void MutationObserverInit::Trace(blink::Visitor* visitor) {
  IDLDictionaryBase::Trace(visitor);
}

}  // namespace blink
