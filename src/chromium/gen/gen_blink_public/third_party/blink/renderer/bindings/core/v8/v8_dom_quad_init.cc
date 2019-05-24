// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_quad_init.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_point_init.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8DOMQuadInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "p1",
    "p2",
    "p3",
    "p4",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8DOMQuadInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, DOMQuadInit* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8DOMQuadInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> p_1_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&p_1_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (p_1_value.IsEmpty() || p_1_value->IsUndefined()) {
    // Do nothing.
  } else {
    DOMPointInit* p_1_cpp_value = NativeValueTraits<DOMPointInit>::NativeValue(isolate, p_1_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setP1(p_1_cpp_value);
  }

  v8::Local<v8::Value> p_2_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&p_2_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (p_2_value.IsEmpty() || p_2_value->IsUndefined()) {
    // Do nothing.
  } else {
    DOMPointInit* p_2_cpp_value = NativeValueTraits<DOMPointInit>::NativeValue(isolate, p_2_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setP2(p_2_cpp_value);
  }

  v8::Local<v8::Value> p_3_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&p_3_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (p_3_value.IsEmpty() || p_3_value->IsUndefined()) {
    // Do nothing.
  } else {
    DOMPointInit* p_3_cpp_value = NativeValueTraits<DOMPointInit>::NativeValue(isolate, p_3_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setP3(p_3_cpp_value);
  }

  v8::Local<v8::Value> p_4_value;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&p_4_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (p_4_value.IsEmpty() || p_4_value->IsUndefined()) {
    // Do nothing.
  } else {
    DOMPointInit* p_4_cpp_value = NativeValueTraits<DOMPointInit>::NativeValue(isolate, p_4_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setP4(p_4_cpp_value);
  }
}

v8::Local<v8::Value> DOMQuadInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8DOMQuadInit(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8DOMQuadInit(const DOMQuadInit* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8DOMQuadInitKeys(isolate);
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

  v8::Local<v8::Value> p_1_value;
  bool p_1_has_value_or_default = false;
  if (impl->hasP1()) {
    p_1_value = ToV8(impl->p1(), creationContext, isolate);
    p_1_has_value_or_default = true;
  }
  if (p_1_has_value_or_default &&
      !create_property(0, p_1_value)) {
    return false;
  }

  v8::Local<v8::Value> p_2_value;
  bool p_2_has_value_or_default = false;
  if (impl->hasP2()) {
    p_2_value = ToV8(impl->p2(), creationContext, isolate);
    p_2_has_value_or_default = true;
  }
  if (p_2_has_value_or_default &&
      !create_property(1, p_2_value)) {
    return false;
  }

  v8::Local<v8::Value> p_3_value;
  bool p_3_has_value_or_default = false;
  if (impl->hasP3()) {
    p_3_value = ToV8(impl->p3(), creationContext, isolate);
    p_3_has_value_or_default = true;
  }
  if (p_3_has_value_or_default &&
      !create_property(2, p_3_value)) {
    return false;
  }

  v8::Local<v8::Value> p_4_value;
  bool p_4_has_value_or_default = false;
  if (impl->hasP4()) {
    p_4_value = ToV8(impl->p4(), creationContext, isolate);
    p_4_has_value_or_default = true;
  }
  if (p_4_has_value_or_default &&
      !create_property(3, p_4_value)) {
    return false;
  }

  return true;
}

DOMQuadInit* NativeValueTraits<DOMQuadInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  DOMQuadInit* impl = DOMQuadInit::Create();
  V8DOMQuadInit::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
