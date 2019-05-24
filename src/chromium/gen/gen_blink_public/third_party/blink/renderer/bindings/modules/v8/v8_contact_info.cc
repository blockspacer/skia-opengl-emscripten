// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_contact_info.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8ContactInfoKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "email",
    "name",
    "tel",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8ContactInfo::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, ContactInfo* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8ContactInfoKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> email_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&email_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (email_value.IsEmpty() || email_value->IsUndefined()) {
    // Do nothing.
  } else {
    Vector<String> email_cpp_value = NativeValueTraits<IDLSequence<IDLUSVString>>::NativeValue(isolate, email_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setEmail(email_cpp_value);
  }

  v8::Local<v8::Value> name_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&name_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (name_value.IsEmpty() || name_value->IsUndefined()) {
    // Do nothing.
  } else {
    Vector<String> name_cpp_value = NativeValueTraits<IDLSequence<IDLUSVString>>::NativeValue(isolate, name_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setName(name_cpp_value);
  }

  v8::Local<v8::Value> tel_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&tel_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (tel_value.IsEmpty() || tel_value->IsUndefined()) {
    // Do nothing.
  } else {
    Vector<String> tel_cpp_value = NativeValueTraits<IDLSequence<IDLUSVString>>::NativeValue(isolate, tel_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setTel(tel_cpp_value);
  }
}

v8::Local<v8::Value> ContactInfo::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8ContactInfo(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8ContactInfo(const ContactInfo* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8ContactInfoKeys(isolate);
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

  v8::Local<v8::Value> email_value;
  bool email_has_value_or_default = false;
  if (impl->hasEmail()) {
    email_value = ToV8(impl->email(), creationContext, isolate);
    email_has_value_or_default = true;
  }
  if (email_has_value_or_default &&
      !create_property(0, email_value)) {
    return false;
  }

  v8::Local<v8::Value> name_value;
  bool name_has_value_or_default = false;
  if (impl->hasName()) {
    name_value = ToV8(impl->name(), creationContext, isolate);
    name_has_value_or_default = true;
  }
  if (name_has_value_or_default &&
      !create_property(1, name_value)) {
    return false;
  }

  v8::Local<v8::Value> tel_value;
  bool tel_has_value_or_default = false;
  if (impl->hasTel()) {
    tel_value = ToV8(impl->tel(), creationContext, isolate);
    tel_has_value_or_default = true;
  }
  if (tel_has_value_or_default &&
      !create_property(2, tel_value)) {
    return false;
  }

  return true;
}

ContactInfo* NativeValueTraits<ContactInfo>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  ContactInfo* impl = ContactInfo::Create();
  V8ContactInfo::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
