// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_keyboard_event_init.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_event_modifier_init.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8KeyboardEventInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "charCode",
    "code",
    "isComposing",
    "key",
    "keyCode",
    "location",
    "repeat",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8KeyboardEventInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, KeyboardEventInit* impl, ExceptionState& exception_state) {
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

  const v8::Eternal<v8::Name>* keys = eternalV8KeyboardEventInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> char_code_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&char_code_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (char_code_value.IsEmpty() || char_code_value->IsUndefined()) {
    // Do nothing.
  } else {
    uint32_t char_code_cpp_value = NativeValueTraits<IDLUnsignedLong>::NativeValue(isolate, char_code_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setCharCode(char_code_cpp_value);
  }

  v8::Local<v8::Value> code_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&code_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (code_value.IsEmpty() || code_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> code_cpp_value = code_value;
    if (!code_cpp_value.Prepare(exception_state))
      return;
    impl->setCode(code_cpp_value);
  }

  v8::Local<v8::Value> is_composing_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&is_composing_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (is_composing_value.IsEmpty() || is_composing_value->IsUndefined()) {
    // Do nothing.
  } else {
    bool is_composing_cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(isolate, is_composing_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setIsComposing(is_composing_cpp_value);
  }

  v8::Local<v8::Value> key_value;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&key_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (key_value.IsEmpty() || key_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> key_cpp_value = key_value;
    if (!key_cpp_value.Prepare(exception_state))
      return;
    impl->setKey(key_cpp_value);
  }

  v8::Local<v8::Value> key_code_value;
  if (!v8Object->Get(context, keys[4].Get(isolate)).ToLocal(&key_code_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (key_code_value.IsEmpty() || key_code_value->IsUndefined()) {
    // Do nothing.
  } else {
    uint32_t key_code_cpp_value = NativeValueTraits<IDLUnsignedLong>::NativeValue(isolate, key_code_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setKeyCode(key_code_cpp_value);
  }

  v8::Local<v8::Value> location_value;
  if (!v8Object->Get(context, keys[5].Get(isolate)).ToLocal(&location_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (location_value.IsEmpty() || location_value->IsUndefined()) {
    // Do nothing.
  } else {
    uint32_t location_cpp_value = NativeValueTraits<IDLUnsignedLong>::NativeValue(isolate, location_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setLocation(location_cpp_value);
  }

  v8::Local<v8::Value> repeat_value;
  if (!v8Object->Get(context, keys[6].Get(isolate)).ToLocal(&repeat_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (repeat_value.IsEmpty() || repeat_value->IsUndefined()) {
    // Do nothing.
  } else {
    bool repeat_cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(isolate, repeat_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setRepeat(repeat_cpp_value);
  }
}

v8::Local<v8::Value> KeyboardEventInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8KeyboardEventInit(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8KeyboardEventInit(const KeyboardEventInit* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8EventModifierInit(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8KeyboardEventInitKeys(isolate);
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

  v8::Local<v8::Value> char_code_value;
  bool char_code_has_value_or_default = false;
  if (impl->hasCharCode()) {
    char_code_value = v8::Integer::NewFromUnsigned(isolate, impl->charCode());
    char_code_has_value_or_default = true;
  } else {
    char_code_value = v8::Integer::NewFromUnsigned(isolate, 0u);
    char_code_has_value_or_default = true;
  }
  if (char_code_has_value_or_default &&
      !create_property(0, char_code_value)) {
    return false;
  }

  v8::Local<v8::Value> code_value;
  bool code_has_value_or_default = false;
  if (impl->hasCode()) {
    code_value = V8String(isolate, impl->code());
    code_has_value_or_default = true;
  } else {
    code_value = V8String(isolate, WTF::g_empty_string);
    code_has_value_or_default = true;
  }
  if (code_has_value_or_default &&
      !create_property(1, code_value)) {
    return false;
  }

  v8::Local<v8::Value> is_composing_value;
  bool is_composing_has_value_or_default = false;
  if (impl->hasIsComposing()) {
    is_composing_value = v8::Boolean::New(isolate, impl->isComposing());
    is_composing_has_value_or_default = true;
  } else {
    is_composing_value = v8::Boolean::New(isolate, false);
    is_composing_has_value_or_default = true;
  }
  if (is_composing_has_value_or_default &&
      !create_property(2, is_composing_value)) {
    return false;
  }

  v8::Local<v8::Value> key_value;
  bool key_has_value_or_default = false;
  if (impl->hasKey()) {
    key_value = V8String(isolate, impl->key());
    key_has_value_or_default = true;
  } else {
    key_value = V8String(isolate, WTF::g_empty_string);
    key_has_value_or_default = true;
  }
  if (key_has_value_or_default &&
      !create_property(3, key_value)) {
    return false;
  }

  v8::Local<v8::Value> key_code_value;
  bool key_code_has_value_or_default = false;
  if (impl->hasKeyCode()) {
    key_code_value = v8::Integer::NewFromUnsigned(isolate, impl->keyCode());
    key_code_has_value_or_default = true;
  } else {
    key_code_value = v8::Integer::NewFromUnsigned(isolate, 0u);
    key_code_has_value_or_default = true;
  }
  if (key_code_has_value_or_default &&
      !create_property(4, key_code_value)) {
    return false;
  }

  v8::Local<v8::Value> location_value;
  bool location_has_value_or_default = false;
  if (impl->hasLocation()) {
    location_value = v8::Integer::NewFromUnsigned(isolate, impl->location());
    location_has_value_or_default = true;
  } else {
    location_value = v8::Integer::NewFromUnsigned(isolate, 0u);
    location_has_value_or_default = true;
  }
  if (location_has_value_or_default &&
      !create_property(5, location_value)) {
    return false;
  }

  v8::Local<v8::Value> repeat_value;
  bool repeat_has_value_or_default = false;
  if (impl->hasRepeat()) {
    repeat_value = v8::Boolean::New(isolate, impl->repeat());
    repeat_has_value_or_default = true;
  } else {
    repeat_value = v8::Boolean::New(isolate, false);
    repeat_has_value_or_default = true;
  }
  if (repeat_has_value_or_default &&
      !create_property(6, repeat_value)) {
    return false;
  }

  return true;
}

KeyboardEventInit* NativeValueTraits<KeyboardEventInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  KeyboardEventInit* impl = KeyboardEventInit::Create();
  V8KeyboardEventInit::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
