// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_fragment_result_options.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/script_value.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_layout_fragment.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8FragmentResultOptionsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "autoBlockSize",
    "childFragments",
    "data",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8FragmentResultOptions::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, FragmentResultOptions* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8FragmentResultOptionsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> auto_block_size_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&auto_block_size_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (auto_block_size_value.IsEmpty() || auto_block_size_value->IsUndefined()) {
    // Do nothing.
  } else {
    double auto_block_size_cpp_value = NativeValueTraits<IDLDouble>::NativeValue(isolate, auto_block_size_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setAutoBlockSize(auto_block_size_cpp_value);
  }

  v8::Local<v8::Value> child_fragments_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&child_fragments_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (child_fragments_value.IsEmpty() || child_fragments_value->IsUndefined()) {
    // Do nothing.
  } else {
    HeapVector<Member<CustomLayoutFragment>> child_fragments_cpp_value = NativeValueTraits<IDLSequence<CustomLayoutFragment>>::NativeValue(isolate, child_fragments_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setChildFragments(child_fragments_cpp_value);
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
}

v8::Local<v8::Value> FragmentResultOptions::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8FragmentResultOptions(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8FragmentResultOptions(const FragmentResultOptions* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8FragmentResultOptionsKeys(isolate);
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

  v8::Local<v8::Value> auto_block_size_value;
  bool auto_block_size_has_value_or_default = false;
  if (impl->hasAutoBlockSize()) {
    auto_block_size_value = v8::Number::New(isolate, impl->autoBlockSize());
    auto_block_size_has_value_or_default = true;
  } else {
    auto_block_size_value = v8::Number::New(isolate, 0);
    auto_block_size_has_value_or_default = true;
  }
  if (auto_block_size_has_value_or_default &&
      !create_property(0, auto_block_size_value)) {
    return false;
  }

  v8::Local<v8::Value> child_fragments_value;
  bool child_fragments_has_value_or_default = false;
  if (impl->hasChildFragments()) {
    child_fragments_value = ToV8(impl->childFragments(), creationContext, isolate);
    child_fragments_has_value_or_default = true;
  } else {
    child_fragments_value = ToV8(HeapVector<Member<CustomLayoutFragment>>(), creationContext, isolate);
    child_fragments_has_value_or_default = true;
  }
  if (child_fragments_has_value_or_default &&
      !create_property(1, child_fragments_value)) {
    return false;
  }

  v8::Local<v8::Value> data_value;
  bool data_has_value_or_default = false;
  if (impl->hasData()) {
    data_value = impl->data().V8Value();
    data_has_value_or_default = true;
  } else {
    data_value = v8::Null(isolate);
    data_has_value_or_default = true;
  }
  if (data_has_value_or_default &&
      !create_property(2, data_value)) {
    return false;
  }

  return true;
}

FragmentResultOptions* NativeValueTraits<FragmentResultOptions>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  FragmentResultOptions* impl = FragmentResultOptions::Create();
  V8FragmentResultOptions::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
