// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/modules/locks/lock_manager_snapshot.h"

namespace blink {

LockManagerSnapshot::LockManagerSnapshot() {
}

LockManagerSnapshot::~LockManagerSnapshot() = default;

void LockManagerSnapshot::setHeld(const HeapVector<Member<LockInfo>>& value) {
  held_ = value;
  has_held_ = true;
}

void LockManagerSnapshot::setPending(const HeapVector<Member<LockInfo>>& value) {
  pending_ = value;
  has_pending_ = true;
}

void LockManagerSnapshot::Trace(blink::Visitor* visitor) {
  visitor->Trace(held_);
  visitor->Trace(pending_);
  IDLDictionaryBase::Trace(visitor);
}

}  // namespace blink
