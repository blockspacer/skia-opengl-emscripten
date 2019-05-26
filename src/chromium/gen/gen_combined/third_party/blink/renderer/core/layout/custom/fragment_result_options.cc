// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/core/layout/custom/fragment_result_options.h"

#include "third_party/blink/renderer/core/layout/custom/custom_layout_fragment.h"
#include "third_party/blink/renderer/platform/wtf/vector.h"

namespace blink {

FragmentResultOptions::FragmentResultOptions() {
  setAutoBlockSize(0);
  setChildFragments(HeapVector<Member<CustomLayoutFragment>>());
}

FragmentResultOptions::~FragmentResultOptions() = default;

void FragmentResultOptions::setChildFragments(const HeapVector<Member<CustomLayoutFragment>>& value) {
  child_fragments_ = value;
  has_child_fragments_ = true;
}

void FragmentResultOptions::setData(ScriptValue value) {
  data_ = value;
}

void FragmentResultOptions::Trace(blink::Visitor* visitor) {
  visitor->Trace(child_fragments_);
  IDLDictionaryBase::Trace(visitor);
}

}  // namespace blink
