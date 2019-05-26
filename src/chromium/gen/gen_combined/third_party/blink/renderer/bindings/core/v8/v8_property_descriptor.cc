// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_property_descriptor.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8PropertyDescriptorKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "inherits",
    "initialValue",
    "name",
    "syntax",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8PropertyDescriptor::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, PropertyDescriptor* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    exception_state.ThrowTypeError("Missing required member(s): inherits, name.");
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8PropertyDescriptorKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> inherits_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&inherits_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (inherits_value.IsEmpty() || inherits_value->IsUndefined()) {
    exception_state.ThrowTypeError("required member inherits is undefined.");
    return;
  } else {
    bool inherits_cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(isolate, inherits_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setInherits(inherits_cpp_value);
  }

  v8::Local<v8::Value> initial_value_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&initial_value_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (initial_value_value.IsEmpty() || initial_value_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> initial_value_cpp_value = initial_value_value;
    if (!initial_value_cpp_value.Prepare(exception_state))
      return;
    impl->setInitialValue(initial_value_cpp_value);
  }

  v8::Local<v8::Value> name_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&name_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (name_value.IsEmpty() || name_value->IsUndefined()) {
    exception_state.ThrowTypeError("required member name is undefined.");
    return;
  } else {
    V8StringResource<> name_cpp_value = name_value;
    if (!name_cpp_value.Prepare(exception_state))
      return;
    impl->setName(name_cpp_value);
  }

  v8::Local<v8::Value> syntax_value;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&syntax_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (syntax_value.IsEmpty() || syntax_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> syntax_cpp_value = syntax_value;
    if (!syntax_cpp_value.Prepare(exception_state))
      return;
    impl->setSyntax(syntax_cpp_value);
  }
}

v8::Local<v8::Value> PropertyDescriptor::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8PropertyDescriptor(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8PropertyDescriptor(const PropertyDescriptor* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8PropertyDescriptorKeys(isolate);
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

  v8::Local<v8::Value> inherits_value;
  bool inherits_has_value_or_default = false;
  if (impl->hasInherits()) {
    inherits_value = v8::Boolean::New(isolate, impl->inherits());
    inherits_has_value_or_default = true;
  } else {
    NOTREACHED();
  }
  if (inherits_has_value_or_default &&
      !create_property(0, inherits_value)) {
    return false;
  }

  v8::Local<v8::Value> initial_value_value;
  bool initial_value_has_value_or_default = false;
  if (impl->hasInitialValue()) {
    initial_value_value = V8String(isolate, impl->initialValue());
    initial_value_has_value_or_default = true;
  }
  if (initial_value_has_value_or_default &&
      !create_property(1, initial_value_value)) {
    return false;
  }

  v8::Local<v8::Value> name_value;
  bool name_has_value_or_default = false;
  if (impl->hasName()) {
    name_value = V8String(isolate, impl->name());
    name_has_value_or_default = true;
  } else {
    NOTREACHED();
  }
  if (name_has_value_or_default &&
      !create_property(2, name_value)) {
    return false;
  }

  v8::Local<v8::Value> syntax_value;
  bool syntax_has_value_or_default = false;
  if (impl->hasSyntax()) {
    syntax_value = V8String(isolate, impl->syntax());
    syntax_has_value_or_default = true;
  } else {
    syntax_value = V8String(isolate, "*");
    syntax_has_value_or_default = true;
  }
  if (syntax_has_value_or_default &&
      !create_property(3, syntax_value)) {
    return false;
  }

  return true;
}

PropertyDescriptor* NativeValueTraits<PropertyDescriptor>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  PropertyDescriptor* impl = PropertyDescriptor::Create();
  V8PropertyDescriptor::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
