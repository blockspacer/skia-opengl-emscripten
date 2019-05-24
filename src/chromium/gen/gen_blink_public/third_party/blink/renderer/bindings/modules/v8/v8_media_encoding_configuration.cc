// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_encoding_configuration.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_configuration.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8MediaEncodingConfigurationKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "type",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8MediaEncodingConfiguration::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, MediaEncodingConfiguration* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    exception_state.ThrowTypeError("Missing required member(s): type.");
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  V8MediaConfiguration::ToImpl(isolate, v8_value, impl, exception_state);
  if (exception_state.HadException())
    return;

  const v8::Eternal<v8::Name>* keys = eternalV8MediaEncodingConfigurationKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> type_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&type_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (type_value.IsEmpty() || type_value->IsUndefined()) {
    exception_state.ThrowTypeError("required member type is undefined.");
    return;
  } else {
    V8StringResource<> type_cpp_value = type_value;
    if (!type_cpp_value.Prepare(exception_state))
      return;
    const char* kValidValues[] = {
        "record",
        "transmission",
    };
    if (!IsValidEnum(type_cpp_value, kValidValues, base::size(kValidValues), "MediaEncodingType", exception_state))
      return;
    impl->setType(type_cpp_value);
  }
}

v8::Local<v8::Value> MediaEncodingConfiguration::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8MediaEncodingConfiguration(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8MediaEncodingConfiguration(const MediaEncodingConfiguration* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8MediaConfiguration(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8MediaEncodingConfigurationKeys(isolate);
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

  v8::Local<v8::Value> type_value;
  bool type_has_value_or_default = false;
  if (impl->hasType()) {
    type_value = V8String(isolate, impl->type());
    type_has_value_or_default = true;
  } else {
    NOTREACHED();
  }
  if (type_has_value_or_default &&
      !create_property(0, type_value)) {
    return false;
  }

  return true;
}

MediaEncodingConfiguration* NativeValueTraits<MediaEncodingConfiguration>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  MediaEncodingConfiguration* impl = MediaEncodingConfiguration::Create();
  V8MediaEncodingConfiguration::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
