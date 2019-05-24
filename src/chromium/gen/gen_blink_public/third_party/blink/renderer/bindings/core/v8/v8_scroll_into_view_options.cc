// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_scroll_into_view_options.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_scroll_options.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8ScrollIntoViewOptionsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "block",
    "inline",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8ScrollIntoViewOptions::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, ScrollIntoViewOptions* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  V8ScrollOptions::ToImpl(isolate, v8_value, impl, exception_state);
  if (exception_state.HadException())
    return;

  const v8::Eternal<v8::Name>* keys = eternalV8ScrollIntoViewOptionsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> block_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&block_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (block_value.IsEmpty() || block_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> block_cpp_value = block_value;
    if (!block_cpp_value.Prepare(exception_state))
      return;
    const char* kValidValues[] = {
        "start",
        "center",
        "end",
        "nearest",
    };
    if (!IsValidEnum(block_cpp_value, kValidValues, base::size(kValidValues), "ScrollLogicalPosition", exception_state))
      return;
    impl->setBlock(block_cpp_value);
  }

  v8::Local<v8::Value> inline_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&inline_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (inline_value.IsEmpty() || inline_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> inline_cpp_value = inline_value;
    if (!inline_cpp_value.Prepare(exception_state))
      return;
    const char* kValidValues[] = {
        "start",
        "center",
        "end",
        "nearest",
    };
    if (!IsValidEnum(inline_cpp_value, kValidValues, base::size(kValidValues), "ScrollLogicalPosition", exception_state))
      return;
    impl->setInlinePosition(inline_cpp_value);
  }
}

v8::Local<v8::Value> ScrollIntoViewOptions::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8ScrollIntoViewOptions(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8ScrollIntoViewOptions(const ScrollIntoViewOptions* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8ScrollOptions(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8ScrollIntoViewOptionsKeys(isolate);
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

  v8::Local<v8::Value> block_value;
  bool block_has_value_or_default = false;
  if (impl->hasBlock()) {
    block_value = V8String(isolate, impl->block());
    block_has_value_or_default = true;
  } else {
    block_value = V8String(isolate, "start");
    block_has_value_or_default = true;
  }
  if (block_has_value_or_default &&
      !create_property(0, block_value)) {
    return false;
  }

  v8::Local<v8::Value> inline_value;
  bool inline_has_value_or_default = false;
  if (impl->hasInlinePosition()) {
    inline_value = V8String(isolate, impl->inlinePosition());
    inline_has_value_or_default = true;
  } else {
    inline_value = V8String(isolate, "nearest");
    inline_has_value_or_default = true;
  }
  if (inline_has_value_or_default &&
      !create_property(1, inline_value)) {
    return false;
  }

  return true;
}

ScrollIntoViewOptions* NativeValueTraits<ScrollIntoViewOptions>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  ScrollIntoViewOptions* impl = ScrollIntoViewOptions::Create();
  V8ScrollIntoViewOptions::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
