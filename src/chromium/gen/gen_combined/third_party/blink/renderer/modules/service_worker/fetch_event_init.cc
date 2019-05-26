// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/modules/service_worker/fetch_event_init.h"

#include "third_party/blink/renderer/core/fetch/request.h"

namespace blink {

FetchEventInit::FetchEventInit() {
  setClientId(WTF::g_empty_string);
  setIsReload(false);
  setResultingClientId(WTF::g_empty_string);
}

FetchEventInit::~FetchEventInit() = default;

void FetchEventInit::Trace(blink::Visitor* visitor) {
  visitor->Trace(request_);
  ExtendableEventInit::Trace(visitor);
}

}  // namespace blink
