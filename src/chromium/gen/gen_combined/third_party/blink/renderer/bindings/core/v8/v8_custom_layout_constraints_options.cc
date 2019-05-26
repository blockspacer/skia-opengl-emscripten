// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_custom_layout_constraints_options.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/script_value.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8CustomLayoutConstraintsOptionsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "availableBlockSize",
    "availableInlineSize",
    "data",
    "fixedBlockSize",
    "fixedInlineSize",
    "percentageBlockSize",
    "percentageInlineSize",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8CustomLayoutConstraintsOptions::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, CustomLayoutConstraintsOptions* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8CustomLayoutConstraintsOptionsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> available_block_size_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&available_block_size_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (available_block_size_value.IsEmpty() || available_block_size_value->IsUndefined()) {
    // Do nothing.
  } else {
    double available_block_size_cpp_value = NativeValueTraits<IDLDouble>::NativeValue(isolate, available_block_size_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setAvailableBlockSize(available_block_size_cpp_value);
  }

  v8::Local<v8::Value> available_inline_size_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&available_inline_size_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (available_inline_size_value.IsEmpty() || available_inline_size_value->IsUndefined()) {
    // Do nothing.
  } else {
    double available_inline_size_cpp_value = NativeValueTraits<IDLDouble>::NativeValue(isolate, available_inline_size_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setAvailableInlineSize(available_inline_size_cpp_value);
  }

  v8::Local<v8::Value> data_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&data_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (data_value.IsEmpty() || data_value->IsUndefined()) {
    // Do nothing.
  } else {
    ScriptValue data_cpp_value = ScriptValue(ScriptState::Current(isolate), data_value);
    impl->setData(data_cpp_value);
  }

  v8::Local<v8::Value> fixed_block_size_value;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&fixed_block_size_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (fixed_block_size_value.IsEmpty() || fixed_block_size_value->IsUndefined()) {
    // Do nothing.
  } else {
    double fixed_block_size_cpp_value = NativeValueTraits<IDLDouble>::NativeValue(isolate, fixed_block_size_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setFixedBlockSize(fixed_block_size_cpp_value);
  }

  v8::Local<v8::Value> fixed_inline_size_value;
  if (!v8Object->Get(context, keys[4].Get(isolate)).ToLocal(&fixed_inline_size_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (fixed_inline_size_value.IsEmpty() || fixed_inline_size_value->IsUndefined()) {
    // Do nothing.
  } else {
    double fixed_inline_size_cpp_value = NativeValueTraits<IDLDouble>::NativeValue(isolate, fixed_inline_size_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setFixedInlineSize(fixed_inline_size_cpp_value);
  }

  v8::Local<v8::Value> percentage_block_size_value;
  if (!v8Object->Get(context, keys[5].Get(isolate)).ToLocal(&percentage_block_size_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (percentage_block_size_value.IsEmpty() || percentage_block_size_value->IsUndefined()) {
    // Do nothing.
  } else {
    double percentage_block_size_cpp_value = NativeValueTraits<IDLDouble>::NativeValue(isolate, percentage_block_size_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setPercentageBlockSize(percentage_block_size_cpp_value);
  }

  v8::Local<v8::Value> percentage_inline_size_value;
  if (!v8Object->Get(context, keys[6].Get(isolate)).ToLocal(&percentage_inline_size_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (percentage_inline_size_value.IsEmpty() || percentage_inline_size_value->IsUndefined()) {
    // Do nothing.
  } else {
    double percentage_inline_size_cpp_value = NativeValueTraits<IDLDouble>::NativeValue(isolate, percentage_inline_size_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setPercentageInlineSize(percentage_inline_size_cpp_value);
  }
}

v8::Local<v8::Value> CustomLayoutConstraintsOptions::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8CustomLayoutConstraintsOptions(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8CustomLayoutConstraintsOptions(const CustomLayoutConstraintsOptions* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8CustomLayoutConstraintsOptionsKeys(isolate);
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

  v8::Local<v8::Value> available_block_size_value;
  bool available_block_size_has_value_or_default = false;
  if (impl->hasAvailableBlockSize()) {
    available_block_size_value = v8::Number::New(isolate, impl->availableBlockSize());
    available_block_size_has_value_or_default = true;
  }
  if (available_block_size_has_value_or_default &&
      !create_property(0, available_block_size_value)) {
    return false;
  }

  v8::Local<v8::Value> available_inline_size_value;
  bool available_inline_size_has_value_or_default = false;
  if (impl->hasAvailableInlineSize()) {
    available_inline_size_value = v8::Number::New(isolate, impl->availableInlineSize());
    available_inline_size_has_value_or_default = true;
  }
  if (available_inline_size_has_value_or_default &&
      !create_property(1, available_inline_size_value)) {
    return false;
  }

  v8::Local<v8::Value> data_value;
  bool data_has_value_or_default = false;
  if (impl->hasData()) {
    data_value = impl->data().V8Value();
    data_has_value_or_default = true;
  }
  if (data_has_value_or_default &&
      !create_property(2, data_value)) {
    return false;
  }

  v8::Local<v8::Value> fixed_block_size_value;
  bool fixed_block_size_has_value_or_default = false;
  if (impl->hasFixedBlockSize()) {
    fixed_block_size_value = v8::Number::New(isolate, impl->fixedBlockSize());
    fixed_block_size_has_value_or_default = true;
  }
  if (fixed_block_size_has_value_or_default &&
      !create_property(3, fixed_block_size_value)) {
    return false;
  }

  v8::Local<v8::Value> fixed_inline_size_value;
  bool fixed_inline_size_has_value_or_default = false;
  if (impl->hasFixedInlineSize()) {
    fixed_inline_size_value = v8::Number::New(isolate, impl->fixedInlineSize());
    fixed_inline_size_has_value_or_default = true;
  }
  if (fixed_inline_size_has_value_or_default &&
      !create_property(4, fixed_inline_size_value)) {
    return false;
  }

  v8::Local<v8::Value> percentage_block_size_value;
  bool percentage_block_size_has_value_or_default = false;
  if (impl->hasPercentageBlockSize()) {
    percentage_block_size_value = v8::Number::New(isolate, impl->percentageBlockSize());
    percentage_block_size_has_value_or_default = true;
  }
  if (percentage_block_size_has_value_or_default &&
      !create_property(5, percentage_block_size_value)) {
    return false;
  }

  v8::Local<v8::Value> percentage_inline_size_value;
  bool percentage_inline_size_has_value_or_default = false;
  if (impl->hasPercentageInlineSize()) {
    percentage_inline_size_value = v8::Number::New(isolate, impl->percentageInlineSize());
    percentage_inline_size_has_value_or_default = true;
  }
  if (percentage_inline_size_has_value_or_default &&
      !create_property(6, percentage_inline_size_value)) {
    return false;
  }

  return true;
}

CustomLayoutConstraintsOptions* NativeValueTraits<CustomLayoutConstraintsOptions>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  CustomLayoutConstraintsOptions* impl = CustomLayoutConstraintsOptions::Create();
  V8CustomLayoutConstraintsOptions::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
