// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_scroll_to_options.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_scroll_options.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8ScrollToOptionsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "left",
    "top",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8ScrollToOptions::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, ScrollToOptions* impl, ExceptionState& exception_state) {
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

  const v8::Eternal<v8::Name>* keys = eternalV8ScrollToOptionsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> left_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&left_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (left_value.IsEmpty() || left_value->IsUndefined()) {
    // Do nothing.
  } else {
    double left_cpp_value = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(isolate, left_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setLeft(left_cpp_value);
  }

  v8::Local<v8::Value> top_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&top_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (top_value.IsEmpty() || top_value->IsUndefined()) {
    // Do nothing.
  } else {
    double top_cpp_value = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(isolate, top_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setTop(top_cpp_value);
  }
}

v8::Local<v8::Value> ScrollToOptions::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8ScrollToOptions(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8ScrollToOptions(const ScrollToOptions* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8ScrollOptions(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8ScrollToOptionsKeys(isolate);
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

  v8::Local<v8::Value> left_value;
  bool left_has_value_or_default = false;
  if (impl->hasLeft()) {
    left_value = v8::Number::New(isolate, impl->left());
    left_has_value_or_default = true;
  }
  if (left_has_value_or_default &&
      !create_property(0, left_value)) {
    return false;
  }

  v8::Local<v8::Value> top_value;
  bool top_has_value_or_default = false;
  if (impl->hasTop()) {
    top_value = v8::Number::New(isolate, impl->top());
    top_has_value_or_default = true;
  }
  if (top_has_value_or_default &&
      !create_property(1, top_value)) {
    return false;
  }

  return true;
}

ScrollToOptions* NativeValueTraits<ScrollToOptions>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  ScrollToOptions* impl = ScrollToOptions::Create();
  V8ScrollToOptions::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
