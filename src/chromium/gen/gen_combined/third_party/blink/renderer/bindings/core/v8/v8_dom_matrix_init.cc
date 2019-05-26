// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_matrix_init.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_matrix_2d_init.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8DOMMatrixInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "is2D",
    "m13",
    "m14",
    "m23",
    "m24",
    "m31",
    "m32",
    "m33",
    "m34",
    "m43",
    "m44",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8DOMMatrixInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, DOMMatrixInit* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  V8DOMMatrix2DInit::ToImpl(isolate, v8_value, impl, exception_state);
  if (exception_state.HadException())
    return;

  const v8::Eternal<v8::Name>* keys = eternalV8DOMMatrixInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> is_2d_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&is_2d_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (is_2d_value.IsEmpty() || is_2d_value->IsUndefined()) {
    // Do nothing.
  } else {
    bool is_2d_cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(isolate, is_2d_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setIs2D(is_2d_cpp_value);
  }

  v8::Local<v8::Value> m_13_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&m_13_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (m_13_value.IsEmpty() || m_13_value->IsUndefined()) {
    // Do nothing.
  } else {
    double m_13_cpp_value = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(isolate, m_13_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setM13(m_13_cpp_value);
  }

  v8::Local<v8::Value> m_14_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&m_14_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (m_14_value.IsEmpty() || m_14_value->IsUndefined()) {
    // Do nothing.
  } else {
    double m_14_cpp_value = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(isolate, m_14_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setM14(m_14_cpp_value);
  }

  v8::Local<v8::Value> m_23_value;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&m_23_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (m_23_value.IsEmpty() || m_23_value->IsUndefined()) {
    // Do nothing.
  } else {
    double m_23_cpp_value = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(isolate, m_23_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setM23(m_23_cpp_value);
  }

  v8::Local<v8::Value> m_24_value;
  if (!v8Object->Get(context, keys[4].Get(isolate)).ToLocal(&m_24_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (m_24_value.IsEmpty() || m_24_value->IsUndefined()) {
    // Do nothing.
  } else {
    double m_24_cpp_value = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(isolate, m_24_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setM24(m_24_cpp_value);
  }

  v8::Local<v8::Value> m_31_value;
  if (!v8Object->Get(context, keys[5].Get(isolate)).ToLocal(&m_31_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (m_31_value.IsEmpty() || m_31_value->IsUndefined()) {
    // Do nothing.
  } else {
    double m_31_cpp_value = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(isolate, m_31_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setM31(m_31_cpp_value);
  }

  v8::Local<v8::Value> m_32_value;
  if (!v8Object->Get(context, keys[6].Get(isolate)).ToLocal(&m_32_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (m_32_value.IsEmpty() || m_32_value->IsUndefined()) {
    // Do nothing.
  } else {
    double m_32_cpp_value = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(isolate, m_32_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setM32(m_32_cpp_value);
  }

  v8::Local<v8::Value> m_33_value;
  if (!v8Object->Get(context, keys[7].Get(isolate)).ToLocal(&m_33_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (m_33_value.IsEmpty() || m_33_value->IsUndefined()) {
    // Do nothing.
  } else {
    double m_33_cpp_value = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(isolate, m_33_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setM33(m_33_cpp_value);
  }

  v8::Local<v8::Value> m_34_value;
  if (!v8Object->Get(context, keys[8].Get(isolate)).ToLocal(&m_34_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (m_34_value.IsEmpty() || m_34_value->IsUndefined()) {
    // Do nothing.
  } else {
    double m_34_cpp_value = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(isolate, m_34_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setM34(m_34_cpp_value);
  }

  v8::Local<v8::Value> m_43_value;
  if (!v8Object->Get(context, keys[9].Get(isolate)).ToLocal(&m_43_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (m_43_value.IsEmpty() || m_43_value->IsUndefined()) {
    // Do nothing.
  } else {
    double m_43_cpp_value = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(isolate, m_43_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setM43(m_43_cpp_value);
  }

  v8::Local<v8::Value> m_44_value;
  if (!v8Object->Get(context, keys[10].Get(isolate)).ToLocal(&m_44_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (m_44_value.IsEmpty() || m_44_value->IsUndefined()) {
    // Do nothing.
  } else {
    double m_44_cpp_value = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(isolate, m_44_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setM44(m_44_cpp_value);
  }
}

v8::Local<v8::Value> DOMMatrixInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8DOMMatrixInit(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8DOMMatrixInit(const DOMMatrixInit* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8DOMMatrix2DInit(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8DOMMatrixInitKeys(isolate);
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

  v8::Local<v8::Value> is_2d_value;
  bool is_2d_has_value_or_default = false;
  if (impl->hasIs2D()) {
    is_2d_value = v8::Boolean::New(isolate, impl->is2D());
    is_2d_has_value_or_default = true;
  }
  if (is_2d_has_value_or_default &&
      !create_property(0, is_2d_value)) {
    return false;
  }

  v8::Local<v8::Value> m_13_value;
  bool m_13_has_value_or_default = false;
  if (impl->hasM13()) {
    m_13_value = v8::Number::New(isolate, impl->m13());
    m_13_has_value_or_default = true;
  } else {
    m_13_value = v8::Number::New(isolate, 0);
    m_13_has_value_or_default = true;
  }
  if (m_13_has_value_or_default &&
      !create_property(1, m_13_value)) {
    return false;
  }

  v8::Local<v8::Value> m_14_value;
  bool m_14_has_value_or_default = false;
  if (impl->hasM14()) {
    m_14_value = v8::Number::New(isolate, impl->m14());
    m_14_has_value_or_default = true;
  } else {
    m_14_value = v8::Number::New(isolate, 0);
    m_14_has_value_or_default = true;
  }
  if (m_14_has_value_or_default &&
      !create_property(2, m_14_value)) {
    return false;
  }

  v8::Local<v8::Value> m_23_value;
  bool m_23_has_value_or_default = false;
  if (impl->hasM23()) {
    m_23_value = v8::Number::New(isolate, impl->m23());
    m_23_has_value_or_default = true;
  } else {
    m_23_value = v8::Number::New(isolate, 0);
    m_23_has_value_or_default = true;
  }
  if (m_23_has_value_or_default &&
      !create_property(3, m_23_value)) {
    return false;
  }

  v8::Local<v8::Value> m_24_value;
  bool m_24_has_value_or_default = false;
  if (impl->hasM24()) {
    m_24_value = v8::Number::New(isolate, impl->m24());
    m_24_has_value_or_default = true;
  } else {
    m_24_value = v8::Number::New(isolate, 0);
    m_24_has_value_or_default = true;
  }
  if (m_24_has_value_or_default &&
      !create_property(4, m_24_value)) {
    return false;
  }

  v8::Local<v8::Value> m_31_value;
  bool m_31_has_value_or_default = false;
  if (impl->hasM31()) {
    m_31_value = v8::Number::New(isolate, impl->m31());
    m_31_has_value_or_default = true;
  } else {
    m_31_value = v8::Number::New(isolate, 0);
    m_31_has_value_or_default = true;
  }
  if (m_31_has_value_or_default &&
      !create_property(5, m_31_value)) {
    return false;
  }

  v8::Local<v8::Value> m_32_value;
  bool m_32_has_value_or_default = false;
  if (impl->hasM32()) {
    m_32_value = v8::Number::New(isolate, impl->m32());
    m_32_has_value_or_default = true;
  } else {
    m_32_value = v8::Number::New(isolate, 0);
    m_32_has_value_or_default = true;
  }
  if (m_32_has_value_or_default &&
      !create_property(6, m_32_value)) {
    return false;
  }

  v8::Local<v8::Value> m_33_value;
  bool m_33_has_value_or_default = false;
  if (impl->hasM33()) {
    m_33_value = v8::Number::New(isolate, impl->m33());
    m_33_has_value_or_default = true;
  } else {
    m_33_value = v8::Number::New(isolate, 1);
    m_33_has_value_or_default = true;
  }
  if (m_33_has_value_or_default &&
      !create_property(7, m_33_value)) {
    return false;
  }

  v8::Local<v8::Value> m_34_value;
  bool m_34_has_value_or_default = false;
  if (impl->hasM34()) {
    m_34_value = v8::Number::New(isolate, impl->m34());
    m_34_has_value_or_default = true;
  } else {
    m_34_value = v8::Number::New(isolate, 0);
    m_34_has_value_or_default = true;
  }
  if (m_34_has_value_or_default &&
      !create_property(8, m_34_value)) {
    return false;
  }

  v8::Local<v8::Value> m_43_value;
  bool m_43_has_value_or_default = false;
  if (impl->hasM43()) {
    m_43_value = v8::Number::New(isolate, impl->m43());
    m_43_has_value_or_default = true;
  } else {
    m_43_value = v8::Number::New(isolate, 0);
    m_43_has_value_or_default = true;
  }
  if (m_43_has_value_or_default &&
      !create_property(9, m_43_value)) {
    return false;
  }

  v8::Local<v8::Value> m_44_value;
  bool m_44_has_value_or_default = false;
  if (impl->hasM44()) {
    m_44_value = v8::Number::New(isolate, impl->m44());
    m_44_has_value_or_default = true;
  } else {
    m_44_value = v8::Number::New(isolate, 1);
    m_44_has_value_or_default = true;
  }
  if (m_44_has_value_or_default &&
      !create_property(10, m_44_value)) {
    return false;
  }

  return true;
}

DOMMatrixInit* NativeValueTraits<DOMMatrixInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  DOMMatrixInit* impl = DOMMatrixInit::Create();
  V8DOMMatrixInit::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
