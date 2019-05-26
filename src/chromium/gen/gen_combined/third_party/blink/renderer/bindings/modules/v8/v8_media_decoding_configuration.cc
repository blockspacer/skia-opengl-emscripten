// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_decoding_configuration.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_capabilities_key_system_configuration.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_configuration.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/origin_trials/origin_trials.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8MediaDecodingConfigurationKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "keySystemConfiguration",
    "type",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8MediaDecodingConfiguration::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, MediaDecodingConfiguration* impl, ExceptionState& exception_state) {
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

  const v8::Eternal<v8::Name>* keys = eternalV8MediaDecodingConfigurationKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  ExecutionContext* executionContext = ToExecutionContext(context);
  DCHECK(executionContext);
  v8::Local<v8::Value> type_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&type_value)) {
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
        "file",
        "media-source",
    };
    if (!IsValidEnum(type_cpp_value, kValidValues, base::size(kValidValues), "MediaDecodingType", exception_state))
      return;
    impl->setType(type_cpp_value);
  }

  if (RuntimeEnabledFeatures::MediaCapabilitiesEncryptedMediaEnabled(executionContext)) {
    v8::Local<v8::Value> key_system_configuration_value;
    if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&key_system_configuration_value)) {
      exception_state.RethrowV8Exception(block.Exception());
      return;
    }
    if (key_system_configuration_value.IsEmpty() || key_system_configuration_value->IsUndefined()) {
      // Do nothing.
    } else {
      MediaCapabilitiesKeySystemConfiguration* key_system_configuration_cpp_value = NativeValueTraits<MediaCapabilitiesKeySystemConfiguration>::NativeValue(isolate, key_system_configuration_value, exception_state);
      if (exception_state.HadException())
        return;
      impl->setKeySystemConfiguration(key_system_configuration_cpp_value);
    }
  }
}

v8::Local<v8::Value> MediaDecodingConfiguration::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8MediaDecodingConfiguration(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8MediaDecodingConfiguration(const MediaDecodingConfiguration* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8MediaConfiguration(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8MediaDecodingConfigurationKeys(isolate);
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

  ExecutionContext* executionContext = ToExecutionContext(context);
  DCHECK(executionContext);
  v8::Local<v8::Value> type_value;
  bool type_has_value_or_default = false;
  if (impl->hasType()) {
    type_value = V8String(isolate, impl->type());
    type_has_value_or_default = true;
  } else {
    NOTREACHED();
  }
  if (type_has_value_or_default &&
      !create_property(1, type_value)) {
    return false;
  }

  if (RuntimeEnabledFeatures::MediaCapabilitiesEncryptedMediaEnabled(executionContext)) {
    v8::Local<v8::Value> key_system_configuration_value;
    bool key_system_configuration_has_value_or_default = false;
    if (impl->hasKeySystemConfiguration()) {
      key_system_configuration_value = ToV8(impl->keySystemConfiguration(), creationContext, isolate);
      key_system_configuration_has_value_or_default = true;
    }
    if (key_system_configuration_has_value_or_default &&
        !create_property(0, key_system_configuration_value)) {
      return false;
    }
  }

  return true;
}

MediaDecodingConfiguration* NativeValueTraits<MediaDecodingConfiguration>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  MediaDecodingConfiguration* impl = MediaDecodingConfiguration::Create();
  V8MediaDecodingConfiguration::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
