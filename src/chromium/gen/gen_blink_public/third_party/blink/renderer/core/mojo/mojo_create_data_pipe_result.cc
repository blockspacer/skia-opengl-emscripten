// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/core/mojo/mojo_create_data_pipe_result.h"

#include "third_party/blink/renderer/core/mojo/mojo_handle.h"

namespace blink {

MojoCreateDataPipeResult::MojoCreateDataPipeResult() {
}

MojoCreateDataPipeResult::~MojoCreateDataPipeResult() = default;

void MojoCreateDataPipeResult::Trace(blink::Visitor* visitor) {
  visitor->Trace(consumer_);
  visitor->Trace(producer_);
  IDLDictionaryBase::Trace(visitor);
}

}  // namespace blink
