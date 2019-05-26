// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_css_style_sheet_init.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_media_list.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8CSSStyleSheetInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "alternate",
    "disabled",
    "media",
    "title",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8CSSStyleSheetInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, CSSStyleSheetInit* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8CSSStyleSheetInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> alternate_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&alternate_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (alternate_value.IsEmpty() || alternate_value->IsUndefined()) {
    // Do nothing.
  } else {
    bool alternate_cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(isolate, alternate_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setAlternate(alternate_cpp_value);
  }

  v8::Local<v8::Value> disabled_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&disabled_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (disabled_value.IsEmpty() || disabled_value->IsUndefined()) {
    // Do nothing.
  } else {
    bool disabled_cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(isolate, disabled_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setDisabled(disabled_cpp_value);
  }

  v8::Local<v8::Value> media_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&media_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (media_value.IsEmpty() || media_value->IsUndefined()) {
    // Do nothing.
  } else {
    MediaListOrString media_cpp_value;
    V8MediaListOrString::ToImpl(isolate, media_value, media_cpp_value, UnionTypeConversionMode::kNotNullable, exception_state);
    if (exception_state.HadException())
      return;
    impl->setMedia(media_cpp_value);
  }

  v8::Local<v8::Value> title_value;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&title_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (title_value.IsEmpty() || title_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> title_cpp_value = title_value;
    if (!title_cpp_value.Prepare(exception_state))
      return;
    impl->setTitle(title_cpp_value);
  }
}

v8::Local<v8::Value> CSSStyleSheetInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8CSSStyleSheetInit(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8CSSStyleSheetInit(const CSSStyleSheetInit* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8CSSStyleSheetInitKeys(isolate);
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

  v8::Local<v8::Value> alternate_value;
  bool alternate_has_value_or_default = false;
  if (impl->hasAlternate()) {
    alternate_value = v8::Boolean::New(isolate, impl->alternate());
    alternate_has_value_or_default = true;
  } else {
    alternate_value = v8::Boolean::New(isolate, false);
    alternate_has_value_or_default = true;
  }
  if (alternate_has_value_or_default &&
      !create_property(0, alternate_value)) {
    return false;
  }

  v8::Local<v8::Value> disabled_value;
  bool disabled_has_value_or_default = false;
  if (impl->hasDisabled()) {
    disabled_value = v8::Boolean::New(isolate, impl->disabled());
    disabled_has_value_or_default = true;
  } else {
    disabled_value = v8::Boolean::New(isolate, false);
    disabled_has_value_or_default = true;
  }
  if (disabled_has_value_or_default &&
      !create_property(1, disabled_value)) {
    return false;
  }

  v8::Local<v8::Value> media_value;
  bool media_has_value_or_default = false;
  if (impl->hasMedia()) {
    media_value = ToV8(impl->media(), creationContext, isolate);
    media_has_value_or_default = true;
  } else {
    media_value = ToV8(MediaListOrString::FromString(WTF::g_empty_string), creationContext, isolate);
    media_has_value_or_default = true;
  }
  if (media_has_value_or_default &&
      !create_property(2, media_value)) {
    return false;
  }

  v8::Local<v8::Value> title_value;
  bool title_has_value_or_default = false;
  if (impl->hasTitle()) {
    title_value = V8String(isolate, impl->title());
    title_has_value_or_default = true;
  } else {
    title_value = V8String(isolate, WTF::g_empty_string);
    title_has_value_or_default = true;
  }
  if (title_has_value_or_default &&
      !create_property(3, title_value)) {
    return false;
  }

  return true;
}

CSSStyleSheetInit* NativeValueTraits<CSSStyleSheetInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  CSSStyleSheetInit* impl = CSSStyleSheetInit::Create();
  V8CSSStyleSheetInit::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
