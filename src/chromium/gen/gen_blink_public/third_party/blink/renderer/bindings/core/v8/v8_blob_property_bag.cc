// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_blob_property_bag.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8BlobPropertyBagKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "endings",
    "type",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8BlobPropertyBag::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, BlobPropertyBag* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8BlobPropertyBagKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> endings_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&endings_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (endings_value.IsEmpty() || endings_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> endings_cpp_value = endings_value;
    if (!endings_cpp_value.Prepare(exception_state))
      return;
    const char* kValidValues[] = {
        "transparent",
        "native",
    };
    if (!IsValidEnum(endings_cpp_value, kValidValues, base::size(kValidValues), "EndingType", exception_state))
      return;
    impl->setEndings(endings_cpp_value);
  }

  v8::Local<v8::Value> type_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&type_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (type_value.IsEmpty() || type_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> type_cpp_value = type_value;
    if (!type_cpp_value.Prepare(exception_state))
      return;
    impl->setType(type_cpp_value);
  }
}

v8::Local<v8::Value> BlobPropertyBag::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8BlobPropertyBag(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8BlobPropertyBag(const BlobPropertyBag* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8BlobPropertyBagKeys(isolate);
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

  v8::Local<v8::Value> endings_value;
  bool endings_has_value_or_default = false;
  if (impl->hasEndings()) {
    endings_value = V8String(isolate, impl->endings());
    endings_has_value_or_default = true;
  } else {
    endings_value = V8String(isolate, "transparent");
    endings_has_value_or_default = true;
  }
  if (endings_has_value_or_default &&
      !create_property(0, endings_value)) {
    return false;
  }

  v8::Local<v8::Value> type_value;
  bool type_has_value_or_default = false;
  if (impl->hasType()) {
    type_value = V8String(isolate, impl->type());
    type_has_value_or_default = true;
  } else {
    type_value = V8String(isolate, WTF::g_empty_string);
    type_has_value_or_default = true;
  }
  if (type_has_value_or_default &&
      !create_property(1, type_value)) {
    return false;
  }

  return true;
}

BlobPropertyBag* NativeValueTraits<BlobPropertyBag>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  BlobPropertyBag* impl = BlobPropertyBag::Create();
  V8BlobPropertyBag::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
