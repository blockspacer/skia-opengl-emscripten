// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_key_system_media_capability.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/runtime_enabled_features.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8MediaKeySystemMediaCapabilityKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "contentType",
    "encryptionScheme",
    "robustness",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8MediaKeySystemMediaCapability::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, MediaKeySystemMediaCapability* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8MediaKeySystemMediaCapabilityKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> content_type_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&content_type_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (content_type_value.IsEmpty() || content_type_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> content_type_cpp_value = content_type_value;
    if (!content_type_cpp_value.Prepare(exception_state))
      return;
    impl->setContentType(content_type_cpp_value);
  }

  v8::Local<v8::Value> robustness_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&robustness_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (robustness_value.IsEmpty() || robustness_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> robustness_cpp_value = robustness_value;
    if (!robustness_cpp_value.Prepare(exception_state))
      return;
    impl->setRobustness(robustness_cpp_value);
  }

  if (RuntimeEnabledFeatures::EncryptedMediaEncryptionSchemeQueryEnabled()) {
    v8::Local<v8::Value> encryption_scheme_value;
    if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&encryption_scheme_value)) {
      exception_state.RethrowV8Exception(block.Exception());
      return;
    }
    if (encryption_scheme_value.IsEmpty() || encryption_scheme_value->IsUndefined()) {
      // Do nothing.
    } else {
      V8StringResource<kTreatNullAndUndefinedAsNullString> encryption_scheme_cpp_value = encryption_scheme_value;
      if (!encryption_scheme_cpp_value.Prepare(exception_state))
        return;
      const char* kValidValues[] = {
          nullptr,
          "cenc",
          "cbcs",
      };
      if (!IsValidEnum(encryption_scheme_cpp_value, kValidValues, base::size(kValidValues), "EncryptionScheme", exception_state))
        return;
      impl->setEncryptionScheme(encryption_scheme_cpp_value);
    }
  }
}

v8::Local<v8::Value> MediaKeySystemMediaCapability::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8MediaKeySystemMediaCapability(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8MediaKeySystemMediaCapability(const MediaKeySystemMediaCapability* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8MediaKeySystemMediaCapabilityKeys(isolate);
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

  v8::Local<v8::Value> content_type_value;
  bool content_type_has_value_or_default = false;
  if (impl->hasContentType()) {
    content_type_value = V8String(isolate, impl->contentType());
    content_type_has_value_or_default = true;
  } else {
    content_type_value = V8String(isolate, WTF::g_empty_string);
    content_type_has_value_or_default = true;
  }
  if (content_type_has_value_or_default &&
      !create_property(0, content_type_value)) {
    return false;
  }

  v8::Local<v8::Value> robustness_value;
  bool robustness_has_value_or_default = false;
  if (impl->hasRobustness()) {
    robustness_value = V8String(isolate, impl->robustness());
    robustness_has_value_or_default = true;
  } else {
    robustness_value = V8String(isolate, WTF::g_empty_string);
    robustness_has_value_or_default = true;
  }
  if (robustness_has_value_or_default &&
      !create_property(2, robustness_value)) {
    return false;
  }

  if (RuntimeEnabledFeatures::EncryptedMediaEncryptionSchemeQueryEnabled()) {
    v8::Local<v8::Value> encryption_scheme_value;
    bool encryption_scheme_has_value_or_default = false;
    if (impl->hasEncryptionScheme()) {
      encryption_scheme_value = V8String(isolate, impl->encryptionScheme());
      encryption_scheme_has_value_or_default = true;
    } else {
      encryption_scheme_value = v8::Null(isolate);
      encryption_scheme_has_value_or_default = true;
    }
    if (encryption_scheme_has_value_or_default &&
        !create_property(1, encryption_scheme_value)) {
      return false;
    }
  }

  return true;
}

MediaKeySystemMediaCapability* NativeValueTraits<MediaKeySystemMediaCapability>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  MediaKeySystemMediaCapability* impl = MediaKeySystemMediaCapability::Create();
  V8MediaKeySystemMediaCapability::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
