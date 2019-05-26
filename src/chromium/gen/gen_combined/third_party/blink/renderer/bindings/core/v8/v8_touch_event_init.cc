// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_touch_event_init.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_event_modifier_init.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_touch.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8TouchEventInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "changedTouches",
    "targetTouches",
    "touches",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8TouchEventInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, TouchEventInit* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  V8EventModifierInit::ToImpl(isolate, v8_value, impl, exception_state);
  if (exception_state.HadException())
    return;

  const v8::Eternal<v8::Name>* keys = eternalV8TouchEventInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> changed_touches_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&changed_touches_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (changed_touches_value.IsEmpty() || changed_touches_value->IsUndefined()) {
    // Do nothing.
  } else {
    HeapVector<Member<Touch>> changed_touches_cpp_value = NativeValueTraits<IDLSequence<Touch>>::NativeValue(isolate, changed_touches_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setChangedTouches(changed_touches_cpp_value);
  }

  v8::Local<v8::Value> target_touches_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&target_touches_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (target_touches_value.IsEmpty() || target_touches_value->IsUndefined()) {
    // Do nothing.
  } else {
    HeapVector<Member<Touch>> target_touches_cpp_value = NativeValueTraits<IDLSequence<Touch>>::NativeValue(isolate, target_touches_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setTargetTouches(target_touches_cpp_value);
  }

  v8::Local<v8::Value> touches_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&touches_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (touches_value.IsEmpty() || touches_value->IsUndefined()) {
    // Do nothing.
  } else {
    HeapVector<Member<Touch>> touches_cpp_value = NativeValueTraits<IDLSequence<Touch>>::NativeValue(isolate, touches_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setTouches(touches_cpp_value);
  }
}

v8::Local<v8::Value> TouchEventInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8TouchEventInit(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8TouchEventInit(const TouchEventInit* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8EventModifierInit(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8TouchEventInitKeys(isolate);
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

  v8::Local<v8::Value> changed_touches_value;
  bool changed_touches_has_value_or_default = false;
  if (impl->hasChangedTouches()) {
    changed_touches_value = ToV8(impl->changedTouches(), creationContext, isolate);
    changed_touches_has_value_or_default = true;
  } else {
    changed_touches_value = ToV8(HeapVector<Member<Touch>>(), creationContext, isolate);
    changed_touches_has_value_or_default = true;
  }
  if (changed_touches_has_value_or_default &&
      !create_property(0, changed_touches_value)) {
    return false;
  }

  v8::Local<v8::Value> target_touches_value;
  bool target_touches_has_value_or_default = false;
  if (impl->hasTargetTouches()) {
    target_touches_value = ToV8(impl->targetTouches(), creationContext, isolate);
    target_touches_has_value_or_default = true;
  } else {
    target_touches_value = ToV8(HeapVector<Member<Touch>>(), creationContext, isolate);
    target_touches_has_value_or_default = true;
  }
  if (target_touches_has_value_or_default &&
      !create_property(1, target_touches_value)) {
    return false;
  }

  v8::Local<v8::Value> touches_value;
  bool touches_has_value_or_default = false;
  if (impl->hasTouches()) {
    touches_value = ToV8(impl->touches(), creationContext, isolate);
    touches_has_value_or_default = true;
  } else {
    touches_value = ToV8(HeapVector<Member<Touch>>(), creationContext, isolate);
    touches_has_value_or_default = true;
  }
  if (touches_has_value_or_default &&
      !create_property(2, touches_value)) {
    return false;
  }

  return true;
}

TouchEventInit* NativeValueTraits<TouchEventInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  TouchEventInit* impl = TouchEventInit::Create();
  V8TouchEventInit::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
