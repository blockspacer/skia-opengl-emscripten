// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_matrix_2d_init.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8DOMMatrix2DInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "a",
    "b",
    "c",
    "d",
    "e",
    "f",
    "m11",
    "m12",
    "m21",
    "m22",
    "m41",
    "m42",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8DOMMatrix2DInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, DOMMatrix2DInit* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8DOMMatrix2DInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> a_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&a_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (a_value.IsEmpty() || a_value->IsUndefined()) {
    // Do nothing.
  } else {
    double a_cpp_value = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(isolate, a_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setA(a_cpp_value);
  }

  v8::Local<v8::Value> b_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&b_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (b_value.IsEmpty() || b_value->IsUndefined()) {
    // Do nothing.
  } else {
    double b_cpp_value = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(isolate, b_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setB(b_cpp_value);
  }

  v8::Local<v8::Value> c_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&c_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (c_value.IsEmpty() || c_value->IsUndefined()) {
    // Do nothing.
  } else {
    double c_cpp_value = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(isolate, c_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setC(c_cpp_value);
  }

  v8::Local<v8::Value> d_value;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&d_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (d_value.IsEmpty() || d_value->IsUndefined()) {
    // Do nothing.
  } else {
    double d_cpp_value = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(isolate, d_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setD(d_cpp_value);
  }

  v8::Local<v8::Value> e_value;
  if (!v8Object->Get(context, keys[4].Get(isolate)).ToLocal(&e_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (e_value.IsEmpty() || e_value->IsUndefined()) {
    // Do nothing.
  } else {
    double e_cpp_value = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(isolate, e_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setE(e_cpp_value);
  }

  v8::Local<v8::Value> f_value;
  if (!v8Object->Get(context, keys[5].Get(isolate)).ToLocal(&f_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (f_value.IsEmpty() || f_value->IsUndefined()) {
    // Do nothing.
  } else {
    double f_cpp_value = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(isolate, f_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setF(f_cpp_value);
  }

  v8::Local<v8::Value> m_11_value;
  if (!v8Object->Get(context, keys[6].Get(isolate)).ToLocal(&m_11_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (m_11_value.IsEmpty() || m_11_value->IsUndefined()) {
    // Do nothing.
  } else {
    double m_11_cpp_value = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(isolate, m_11_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setM11(m_11_cpp_value);
  }

  v8::Local<v8::Value> m_12_value;
  if (!v8Object->Get(context, keys[7].Get(isolate)).ToLocal(&m_12_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (m_12_value.IsEmpty() || m_12_value->IsUndefined()) {
    // Do nothing.
  } else {
    double m_12_cpp_value = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(isolate, m_12_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setM12(m_12_cpp_value);
  }

  v8::Local<v8::Value> m_21_value;
  if (!v8Object->Get(context, keys[8].Get(isolate)).ToLocal(&m_21_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (m_21_value.IsEmpty() || m_21_value->IsUndefined()) {
    // Do nothing.
  } else {
    double m_21_cpp_value = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(isolate, m_21_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setM21(m_21_cpp_value);
  }

  v8::Local<v8::Value> m_22_value;
  if (!v8Object->Get(context, keys[9].Get(isolate)).ToLocal(&m_22_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (m_22_value.IsEmpty() || m_22_value->IsUndefined()) {
    // Do nothing.
  } else {
    double m_22_cpp_value = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(isolate, m_22_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setM22(m_22_cpp_value);
  }

  v8::Local<v8::Value> m_41_value;
  if (!v8Object->Get(context, keys[10].Get(isolate)).ToLocal(&m_41_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (m_41_value.IsEmpty() || m_41_value->IsUndefined()) {
    // Do nothing.
  } else {
    double m_41_cpp_value = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(isolate, m_41_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setM41(m_41_cpp_value);
  }

  v8::Local<v8::Value> m_42_value;
  if (!v8Object->Get(context, keys[11].Get(isolate)).ToLocal(&m_42_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (m_42_value.IsEmpty() || m_42_value->IsUndefined()) {
    // Do nothing.
  } else {
    double m_42_cpp_value = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(isolate, m_42_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setM42(m_42_cpp_value);
  }
}

v8::Local<v8::Value> DOMMatrix2DInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8DOMMatrix2DInit(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8DOMMatrix2DInit(const DOMMatrix2DInit* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8DOMMatrix2DInitKeys(isolate);
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

  v8::Local<v8::Value> a_value;
  bool a_has_value_or_default = false;
  if (impl->hasA()) {
    a_value = v8::Number::New(isolate, impl->a());
    a_has_value_or_default = true;
  }
  if (a_has_value_or_default &&
      !create_property(0, a_value)) {
    return false;
  }

  v8::Local<v8::Value> b_value;
  bool b_has_value_or_default = false;
  if (impl->hasB()) {
    b_value = v8::Number::New(isolate, impl->b());
    b_has_value_or_default = true;
  }
  if (b_has_value_or_default &&
      !create_property(1, b_value)) {
    return false;
  }

  v8::Local<v8::Value> c_value;
  bool c_has_value_or_default = false;
  if (impl->hasC()) {
    c_value = v8::Number::New(isolate, impl->c());
    c_has_value_or_default = true;
  }
  if (c_has_value_or_default &&
      !create_property(2, c_value)) {
    return false;
  }

  v8::Local<v8::Value> d_value;
  bool d_has_value_or_default = false;
  if (impl->hasD()) {
    d_value = v8::Number::New(isolate, impl->d());
    d_has_value_or_default = true;
  }
  if (d_has_value_or_default &&
      !create_property(3, d_value)) {
    return false;
  }

  v8::Local<v8::Value> e_value;
  bool e_has_value_or_default = false;
  if (impl->hasE()) {
    e_value = v8::Number::New(isolate, impl->e());
    e_has_value_or_default = true;
  }
  if (e_has_value_or_default &&
      !create_property(4, e_value)) {
    return false;
  }

  v8::Local<v8::Value> f_value;
  bool f_has_value_or_default = false;
  if (impl->hasF()) {
    f_value = v8::Number::New(isolate, impl->f());
    f_has_value_or_default = true;
  }
  if (f_has_value_or_default &&
      !create_property(5, f_value)) {
    return false;
  }

  v8::Local<v8::Value> m_11_value;
  bool m_11_has_value_or_default = false;
  if (impl->hasM11()) {
    m_11_value = v8::Number::New(isolate, impl->m11());
    m_11_has_value_or_default = true;
  }
  if (m_11_has_value_or_default &&
      !create_property(6, m_11_value)) {
    return false;
  }

  v8::Local<v8::Value> m_12_value;
  bool m_12_has_value_or_default = false;
  if (impl->hasM12()) {
    m_12_value = v8::Number::New(isolate, impl->m12());
    m_12_has_value_or_default = true;
  }
  if (m_12_has_value_or_default &&
      !create_property(7, m_12_value)) {
    return false;
  }

  v8::Local<v8::Value> m_21_value;
  bool m_21_has_value_or_default = false;
  if (impl->hasM21()) {
    m_21_value = v8::Number::New(isolate, impl->m21());
    m_21_has_value_or_default = true;
  }
  if (m_21_has_value_or_default &&
      !create_property(8, m_21_value)) {
    return false;
  }

  v8::Local<v8::Value> m_22_value;
  bool m_22_has_value_or_default = false;
  if (impl->hasM22()) {
    m_22_value = v8::Number::New(isolate, impl->m22());
    m_22_has_value_or_default = true;
  }
  if (m_22_has_value_or_default &&
      !create_property(9, m_22_value)) {
    return false;
  }

  v8::Local<v8::Value> m_41_value;
  bool m_41_has_value_or_default = false;
  if (impl->hasM41()) {
    m_41_value = v8::Number::New(isolate, impl->m41());
    m_41_has_value_or_default = true;
  }
  if (m_41_has_value_or_default &&
      !create_property(10, m_41_value)) {
    return false;
  }

  v8::Local<v8::Value> m_42_value;
  bool m_42_has_value_or_default = false;
  if (impl->hasM42()) {
    m_42_value = v8::Number::New(isolate, impl->m42());
    m_42_has_value_or_default = true;
  }
  if (m_42_has_value_or_default &&
      !create_property(11, m_42_value)) {
    return false;
  }

  return true;
}

DOMMatrix2DInit* NativeValueTraits<DOMMatrix2DInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  DOMMatrix2DInit* impl = DOMMatrix2DInit::Create();
  V8DOMMatrix2DInit::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
