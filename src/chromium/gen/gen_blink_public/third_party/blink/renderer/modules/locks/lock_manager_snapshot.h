// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_LOCKS_LOCK_MANAGER_SNAPSHOT_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_LOCKS_LOCK_MANAGER_SNAPSHOT_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/locks/lock_info.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/vector.h"

namespace blink {

class MODULES_EXPORT LockManagerSnapshot : public IDLDictionaryBase {
 public:
  static LockManagerSnapshot* Create() { return MakeGarbageCollected<LockManagerSnapshot>(); }

  LockManagerSnapshot();
  virtual ~LockManagerSnapshot();

  bool hasHeld() const { return has_held_; }
  const HeapVector<Member<LockInfo>>& held() const {
    DCHECK(has_held_);
    return held_;
  }
  void setHeld(const HeapVector<Member<LockInfo>>&);

  bool hasPending() const { return has_pending_; }
  const HeapVector<Member<LockInfo>>& pending() const {
    DCHECK(has_pending_);
    return pending_;
  }
  void setPending(const HeapVector<Member<LockInfo>>&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_held_ = false;
  bool has_pending_ = false;

  HeapVector<Member<LockInfo>> held_;
  HeapVector<Member<LockInfo>> pending_;

  friend class V8LockManagerSnapshot;
};

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_LOCKS_LOCK_MANAGER_SNAPSHOT_H_
