// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/core/mojo/mojo_read_message_result.h"

#include "third_party/blink/renderer/core/mojo/mojo_handle.h"
#include "third_party/blink/renderer/core/typed_arrays/dom_array_buffer.h"
#include "third_party/blink/renderer/platform/wtf/vector.h"

namespace blink {

MojoReadMessageResult::MojoReadMessageResult() {
}

MojoReadMessageResult::~MojoReadMessageResult() = default;

void MojoReadMessageResult::setHandles(const HeapVector<Member<MojoHandle>>& value) {
  handles_ = value;
  has_handles_ = true;
}

void MojoReadMessageResult::Trace(blink::Visitor* visitor) {
  visitor->Trace(buffer_);
  visitor->Trace(handles_);
  IDLDictionaryBase::Trace(visitor);
}

}  // namespace blink
