// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_sync_event_init.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_extendable_event_init.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8SyncEventInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "lastChance",
    "tag",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8SyncEventInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, SyncEventInit* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    exception_state.ThrowTypeError("Missing required member(s): tag.");
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  V8ExtendableEventInit::ToImpl(isolate, v8_value, impl, exception_state);
  if (exception_state.HadException())
    return;

  const v8::Eternal<v8::Name>* keys = eternalV8SyncEventInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> last_chance_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&last_chance_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (last_chance_value.IsEmpty() || last_chance_value->IsUndefined()) {
    // Do nothing.
  } else {
    bool last_chance_cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(isolate, last_chance_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setLastChance(last_chance_cpp_value);
  }

  v8::Local<v8::Value> tag_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&tag_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (tag_value.IsEmpty() || tag_value->IsUndefined()) {
    exception_state.ThrowTypeError("required member tag is undefined.");
    return;
  } else {
    V8StringResource<> tag_cpp_value = tag_value;
    if (!tag_cpp_value.Prepare(exception_state))
      return;
    impl->setTag(tag_cpp_value);
  }
}

v8::Local<v8::Value> SyncEventInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8SyncEventInit(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8SyncEventInit(const SyncEventInit* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8ExtendableEventInit(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8SyncEventInitKeys(isolate);
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

  v8::Local<v8::Value> last_chance_value;
  bool last_chance_has_value_or_default = false;
  if (impl->hasLastChance()) {
    last_chance_value = v8::Boolean::New(isolate, impl->lastChance());
    last_chance_has_value_or_default = true;
  } else {
    last_chance_value = v8::Boolean::New(isolate, false);
    last_chance_has_value_or_default = true;
  }
  if (last_chance_has_value_or_default &&
      !create_property(0, last_chance_value)) {
    return false;
  }

  v8::Local<v8::Value> tag_value;
  bool tag_has_value_or_default = false;
  if (impl->hasTag()) {
    tag_value = V8String(isolate, impl->tag());
    tag_has_value_or_default = true;
  } else {
    NOTREACHED();
  }
  if (tag_has_value_or_default &&
      !create_property(1, tag_value)) {
    return false;
  }

  return true;
}

SyncEventInit* NativeValueTraits<SyncEventInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  SyncEventInit* impl = SyncEventInit::Create();
  V8SyncEventInit::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
