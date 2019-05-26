// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_internal_dictionary_derived.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_internal_dictionary.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8InternalDictionaryDerivedKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "derivedStringMember",
    "derivedStringMemberWithDefault",
    "requiredBooleanMember",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8InternalDictionaryDerived::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, InternalDictionaryDerived* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    exception_state.ThrowTypeError("Missing required member(s): requiredBooleanMember.");
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  V8InternalDictionary::ToImpl(isolate, v8_value, impl, exception_state);
  if (exception_state.HadException())
    return;

  const v8::Eternal<v8::Name>* keys = eternalV8InternalDictionaryDerivedKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> derived_string_member_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&derived_string_member_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (derived_string_member_value.IsEmpty() || derived_string_member_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> derived_string_member_cpp_value = derived_string_member_value;
    if (!derived_string_member_cpp_value.Prepare(exception_state))
      return;
    impl->setDerivedStringMember(derived_string_member_cpp_value);
  }

  v8::Local<v8::Value> derived_string_member_with_default_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&derived_string_member_with_default_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (derived_string_member_with_default_value.IsEmpty() || derived_string_member_with_default_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> derived_string_member_with_default_cpp_value = derived_string_member_with_default_value;
    if (!derived_string_member_with_default_cpp_value.Prepare(exception_state))
      return;
    impl->setDerivedStringMemberWithDefault(derived_string_member_with_default_cpp_value);
  }

  v8::Local<v8::Value> required_boolean_member_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&required_boolean_member_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (required_boolean_member_value.IsEmpty() || required_boolean_member_value->IsUndefined()) {
    exception_state.ThrowTypeError("required member requiredBooleanMember is undefined.");
    return;
  } else {
    bool required_boolean_member_cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(isolate, required_boolean_member_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setRequiredBooleanMember(required_boolean_member_cpp_value);
  }
}

v8::Local<v8::Value> InternalDictionaryDerived::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8InternalDictionaryDerived(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8InternalDictionaryDerived(const InternalDictionaryDerived* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8InternalDictionary(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8InternalDictionaryDerivedKeys(isolate);
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

  v8::Local<v8::Value> derived_string_member_value;
  bool derived_string_member_has_value_or_default = false;
  if (impl->hasDerivedStringMember()) {
    derived_string_member_value = V8String(isolate, impl->derivedStringMember());
    derived_string_member_has_value_or_default = true;
  }
  if (derived_string_member_has_value_or_default &&
      !create_property(0, derived_string_member_value)) {
    return false;
  }

  v8::Local<v8::Value> derived_string_member_with_default_value;
  bool derived_string_member_with_default_has_value_or_default = false;
  if (impl->hasDerivedStringMemberWithDefault()) {
    derived_string_member_with_default_value = V8String(isolate, impl->derivedStringMemberWithDefault());
    derived_string_member_with_default_has_value_or_default = true;
  } else {
    derived_string_member_with_default_value = V8String(isolate, "derivedDefaultStringValue");
    derived_string_member_with_default_has_value_or_default = true;
  }
  if (derived_string_member_with_default_has_value_or_default &&
      !create_property(1, derived_string_member_with_default_value)) {
    return false;
  }

  v8::Local<v8::Value> required_boolean_member_value;
  bool required_boolean_member_has_value_or_default = false;
  if (impl->hasRequiredBooleanMember()) {
    required_boolean_member_value = v8::Boolean::New(isolate, impl->requiredBooleanMember());
    required_boolean_member_has_value_or_default = true;
  } else {
    NOTREACHED();
  }
  if (required_boolean_member_has_value_or_default &&
      !create_property(2, required_boolean_member_value)) {
    return false;
  }

  return true;
}

InternalDictionaryDerived* NativeValueTraits<InternalDictionaryDerived>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  InternalDictionaryDerived* impl = InternalDictionaryDerived::Create();
  V8InternalDictionaryDerived::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
