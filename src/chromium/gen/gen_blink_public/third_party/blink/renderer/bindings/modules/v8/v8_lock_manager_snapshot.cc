// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_lock_manager_snapshot.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_lock_info.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8LockManagerSnapshotKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "held",
    "pending",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8LockManagerSnapshot::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, LockManagerSnapshot* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8LockManagerSnapshotKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> held_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&held_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (held_value.IsEmpty() || held_value->IsUndefined()) {
    // Do nothing.
  } else {
    HeapVector<Member<LockInfo>> held_cpp_value = NativeValueTraits<IDLSequence<LockInfo>>::NativeValue(isolate, held_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setHeld(held_cpp_value);
  }

  v8::Local<v8::Value> pending_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&pending_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (pending_value.IsEmpty() || pending_value->IsUndefined()) {
    // Do nothing.
  } else {
    HeapVector<Member<LockInfo>> pending_cpp_value = NativeValueTraits<IDLSequence<LockInfo>>::NativeValue(isolate, pending_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setPending(pending_cpp_value);
  }
}

v8::Local<v8::Value> LockManagerSnapshot::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8LockManagerSnapshot(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8LockManagerSnapshot(const LockManagerSnapshot* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8LockManagerSnapshotKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();

  auto create_property = [dictionary, context, keys, isolate](
                             size_t key_index, v8::Local<v8::Value> value) {
    bool added_property;
    v8::Local<v8::Name> key = keys[key_index].Get(isolate);
    if (!dictionary->CreateDataProperty(context, key, value)
             .To(&added_property)) {
      return false;
    }
    return added_property;
  };

  v8::Local<v8::Value> held_value;
  bool held_has_value_or_default = false;
  if (impl->hasHeld()) {
    held_value = ToV8(impl->held(), creationContext, isolate);
    held_has_value_or_default = true;
  }
  if (held_has_value_or_default &&
      !create_property(0, held_value)) {
    return false;
  }

  v8::Local<v8::Value> pending_value;
  bool pending_has_value_or_default = false;
  if (impl->hasPending()) {
    pending_value = ToV8(impl->pending(), creationContext, isolate);
    pending_has_value_or_default = true;
  }
  if (pending_has_value_or_default &&
      !create_property(1, pending_value)) {
    return false;
  }

  return true;
}

LockManagerSnapshot* NativeValueTraits<LockManagerSnapshot>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  LockManagerSnapshot* impl = LockManagerSnapshot::Create();
  V8LockManagerSnapshot::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
