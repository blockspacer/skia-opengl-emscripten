// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_background_fetch_ui_options.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_image_resource.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8BackgroundFetchUIOptionsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "icons",
    "title",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8BackgroundFetchUIOptions::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, BackgroundFetchUIOptions* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8BackgroundFetchUIOptionsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> icons_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&icons_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (icons_value.IsEmpty() || icons_value->IsUndefined()) {
    // Do nothing.
  } else {
    HeapVector<Member<ManifestImageResource>> icons_cpp_value = NativeValueTraits<IDLSequence<ManifestImageResource>>::NativeValue(isolate, icons_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setIcons(icons_cpp_value);
  }

  v8::Local<v8::Value> title_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&title_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (title_value.IsEmpty() || title_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<kTreatNullAndUndefinedAsNullString> title_cpp_value = title_value;
    if (!title_cpp_value.Prepare(exception_state))
      return;
    impl->setTitle(title_cpp_value);
  }
}

v8::Local<v8::Value> BackgroundFetchUIOptions::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8BackgroundFetchUIOptions(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8BackgroundFetchUIOptions(const BackgroundFetchUIOptions* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8BackgroundFetchUIOptionsKeys(isolate);
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

  v8::Local<v8::Value> icons_value;
  bool icons_has_value_or_default = false;
  if (impl->hasIcons()) {
    icons_value = ToV8(impl->icons(), creationContext, isolate);
    icons_has_value_or_default = true;
  } else {
    icons_value = ToV8(HeapVector<Member<ManifestImageResource>>(), creationContext, isolate);
    icons_has_value_or_default = true;
  }
  if (icons_has_value_or_default &&
      !create_property(0, icons_value)) {
    return false;
  }

  v8::Local<v8::Value> title_value;
  bool title_has_value_or_default = false;
  if (impl->hasTitle()) {
    title_value = V8String(isolate, impl->title());
    title_has_value_or_default = true;
  } else {
    title_value = v8::Null(isolate);
    title_has_value_or_default = true;
  }
  if (title_has_value_or_default &&
      !create_property(1, title_value)) {
    return false;
  }

  return true;
}

BackgroundFetchUIOptions* NativeValueTraits<BackgroundFetchUIOptions>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  BackgroundFetchUIOptions* impl = BackgroundFetchUIOptions::Create();
  V8BackgroundFetchUIOptions::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
