// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/modules/cookie_store/cookie_change_event_init.h"

namespace blink {

CookieChangeEventInit::CookieChangeEventInit() {
}

CookieChangeEventInit::~CookieChangeEventInit() = default;

void CookieChangeEventInit::setChanged(const HeapVector<Member<CookieListItem>>& value) {
  changed_ = value;
  has_changed_ = true;
}

void CookieChangeEventInit::setDeleted(const HeapVector<Member<CookieListItem>>& value) {
  deleted_ = value;
  has_deleted_ = true;
}

void CookieChangeEventInit::Trace(blink::Visitor* visitor) {
  visitor->Trace(changed_);
  visitor->Trace(deleted_);
  EventInit::Trace(visitor);
}

}  // namespace blink
