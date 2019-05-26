// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_extendable_cookie_change_event_init.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_cookie_list_item.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_extendable_event_init.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8ExtendableCookieChangeEventInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "changed",
    "deleted",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8ExtendableCookieChangeEventInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, ExtendableCookieChangeEventInit* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
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

  const v8::Eternal<v8::Name>* keys = eternalV8ExtendableCookieChangeEventInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> changed_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&changed_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (changed_value.IsEmpty() || changed_value->IsUndefined()) {
    // Do nothing.
  } else {
    HeapVector<Member<CookieListItem>> changed_cpp_value = NativeValueTraits<IDLSequence<CookieListItem>>::NativeValue(isolate, changed_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setChanged(changed_cpp_value);
  }

  v8::Local<v8::Value> deleted_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&deleted_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (deleted_value.IsEmpty() || deleted_value->IsUndefined()) {
    // Do nothing.
  } else {
    HeapVector<Member<CookieListItem>> deleted_cpp_value = NativeValueTraits<IDLSequence<CookieListItem>>::NativeValue(isolate, deleted_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setDeleted(deleted_cpp_value);
  }
}

v8::Local<v8::Value> ExtendableCookieChangeEventInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8ExtendableCookieChangeEventInit(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8ExtendableCookieChangeEventInit(const ExtendableCookieChangeEventInit* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8ExtendableEventInit(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8ExtendableCookieChangeEventInitKeys(isolate);
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

  v8::Local<v8::Value> changed_value;
  bool changed_has_value_or_default = false;
  if (impl->hasChanged()) {
    changed_value = ToV8(impl->changed(), creationContext, isolate);
    changed_has_value_or_default = true;
  }
  if (changed_has_value_or_default &&
      !create_property(0, changed_value)) {
    return false;
  }

  v8::Local<v8::Value> deleted_value;
  bool deleted_has_value_or_default = false;
  if (impl->hasDeleted()) {
    deleted_value = ToV8(impl->deleted(), creationContext, isolate);
    deleted_has_value_or_default = true;
  }
  if (deleted_has_value_or_default &&
      !create_property(1, deleted_value)) {
    return false;
  }

  return true;
}

ExtendableCookieChangeEventInit* NativeValueTraits<ExtendableCookieChangeEventInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  ExtendableCookieChangeEventInit* impl = ExtendableCookieChangeEventInit::Create();
  V8ExtendableCookieChangeEventInit::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
