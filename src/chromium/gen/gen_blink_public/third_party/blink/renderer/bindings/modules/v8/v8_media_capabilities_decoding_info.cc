// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_capabilities_decoding_info.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_capabilities_info.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_key_system_access.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/origin_trials/origin_trials.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8MediaCapabilitiesDecodingInfoKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "keySystemAccess",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8MediaCapabilitiesDecodingInfo::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, MediaCapabilitiesDecodingInfo* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  V8MediaCapabilitiesInfo::ToImpl(isolate, v8_value, impl, exception_state);
  if (exception_state.HadException())
    return;

  const v8::Eternal<v8::Name>* keys = eternalV8MediaCapabilitiesDecodingInfoKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  ExecutionContext* executionContext = ToExecutionContext(context);
  DCHECK(executionContext);
  if (RuntimeEnabledFeatures::MediaCapabilitiesEncryptedMediaEnabled(executionContext)) {
    v8::Local<v8::Value> key_system_access_value;
    if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&key_system_access_value)) {
      exception_state.RethrowV8Exception(block.Exception());
      return;
    }
    if (key_system_access_value.IsEmpty() || key_system_access_value->IsUndefined()) {
      // Do nothing.
    } else if (key_system_access_value->IsNull()) {
      impl->setKeySystemAccessToNull();
    } else {
      MediaKeySystemAccess* key_system_access_cpp_value = V8MediaKeySystemAccess::ToImplWithTypeCheck(isolate, key_system_access_value);
      if (!key_system_access_cpp_value) {
        exception_state.ThrowTypeError("member keySystemAccess is not of type MediaKeySystemAccess.");
        return;
      }
      impl->setKeySystemAccess(key_system_access_cpp_value);
    }
  }
}

v8::Local<v8::Value> MediaCapabilitiesDecodingInfo::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8MediaCapabilitiesDecodingInfo(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8MediaCapabilitiesDecodingInfo(const MediaCapabilitiesDecodingInfo* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8MediaCapabilitiesInfo(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8MediaCapabilitiesDecodingInfoKeys(isolate);
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
  if (RuntimeEnabledFeatures::MediaCapabilitiesEncryptedMediaEnabled(executionContext)) {
    v8::Local<v8::Value> key_system_access_value;
    bool key_system_access_has_value_or_default = false;
    if (impl->hasKeySystemAccess()) {
      key_system_access_value = ToV8(impl->keySystemAccess(), creationContext, isolate);
      key_system_access_has_value_or_default = true;
    } else {
      key_system_access_value = v8::Null(isolate);
      key_system_access_has_value_or_default = true;
    }
    if (key_system_access_has_value_or_default &&
        !create_property(0, key_system_access_value)) {
      return false;
    }
  }

  return true;
}

MediaCapabilitiesDecodingInfo* NativeValueTraits<MediaCapabilitiesDecodingInfo>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  MediaCapabilitiesDecodingInfo* impl = MediaCapabilitiesDecodingInfo::Create();
  V8MediaCapabilitiesDecodingInfo::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
