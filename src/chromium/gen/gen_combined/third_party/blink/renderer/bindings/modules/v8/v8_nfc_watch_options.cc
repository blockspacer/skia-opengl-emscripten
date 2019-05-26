// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_nfc_watch_options.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8NFCWatchOptionsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "mediaType",
    "mode",
    "recordType",
    "url",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8NFCWatchOptions::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, NFCWatchOptions* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8NFCWatchOptionsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> media_type_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&media_type_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (media_type_value.IsEmpty() || media_type_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> media_type_cpp_value = NativeValueTraits<IDLUSVString>::NativeValue(isolate, media_type_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setMediaType(media_type_cpp_value);
  }

  v8::Local<v8::Value> mode_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&mode_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (mode_value.IsEmpty() || mode_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> mode_cpp_value = mode_value;
    if (!mode_cpp_value.Prepare(exception_state))
      return;
    const char* kValidValues[] = {
        "web-nfc-only",
        "any",
    };
    if (!IsValidEnum(mode_cpp_value, kValidValues, base::size(kValidValues), "NFCWatchMode", exception_state))
      return;
    impl->setMode(mode_cpp_value);
  }

  v8::Local<v8::Value> record_type_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&record_type_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (record_type_value.IsEmpty() || record_type_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<kTreatNullAndUndefinedAsNullString> record_type_cpp_value = record_type_value;
    if (!record_type_cpp_value.Prepare(exception_state))
      return;
    const char* kValidValues[] = {
        nullptr,
        "empty",
        "text",
        "url",
        "json",
        "opaque",
    };
    if (!IsValidEnum(record_type_cpp_value, kValidValues, base::size(kValidValues), "NDEFRecordType", exception_state))
      return;
    impl->setRecordType(record_type_cpp_value);
  }

  v8::Local<v8::Value> url_value;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&url_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (url_value.IsEmpty() || url_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> url_cpp_value = NativeValueTraits<IDLUSVString>::NativeValue(isolate, url_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setURL(url_cpp_value);
  }
}

v8::Local<v8::Value> NFCWatchOptions::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8NFCWatchOptions(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8NFCWatchOptions(const NFCWatchOptions* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8NFCWatchOptionsKeys(isolate);
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

  v8::Local<v8::Value> media_type_value;
  bool media_type_has_value_or_default = false;
  if (impl->hasMediaType()) {
    media_type_value = V8String(isolate, impl->mediaType());
    media_type_has_value_or_default = true;
  } else {
    media_type_value = V8String(isolate, WTF::g_empty_string);
    media_type_has_value_or_default = true;
  }
  if (media_type_has_value_or_default &&
      !create_property(0, media_type_value)) {
    return false;
  }

  v8::Local<v8::Value> mode_value;
  bool mode_has_value_or_default = false;
  if (impl->hasMode()) {
    mode_value = V8String(isolate, impl->mode());
    mode_has_value_or_default = true;
  } else {
    mode_value = V8String(isolate, "web-nfc-only");
    mode_has_value_or_default = true;
  }
  if (mode_has_value_or_default &&
      !create_property(1, mode_value)) {
    return false;
  }

  v8::Local<v8::Value> record_type_value;
  bool record_type_has_value_or_default = false;
  if (impl->hasRecordType()) {
    record_type_value = V8String(isolate, impl->recordType());
    record_type_has_value_or_default = true;
  } else {
    record_type_value = v8::Null(isolate);
    record_type_has_value_or_default = true;
  }
  if (record_type_has_value_or_default &&
      !create_property(2, record_type_value)) {
    return false;
  }

  v8::Local<v8::Value> url_value;
  bool url_has_value_or_default = false;
  if (impl->hasURL()) {
    url_value = V8String(isolate, impl->url());
    url_has_value_or_default = true;
  } else {
    url_value = V8String(isolate, WTF::g_empty_string);
    url_has_value_or_default = true;
  }
  if (url_has_value_or_default &&
      !create_property(3, url_value)) {
    return false;
  }

  return true;
}

NFCWatchOptions* NativeValueTraits<NFCWatchOptions>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  NFCWatchOptions* impl = NFCWatchOptions::Create();
  V8NFCWatchOptions::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
