// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_share_data.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_file.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/runtime_enabled_features.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8ShareDataKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "files",
    "text",
    "title",
    "url",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8ShareData::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, ShareData* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8ShareDataKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> text_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&text_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (text_value.IsEmpty() || text_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> text_cpp_value = NativeValueTraits<IDLUSVString>::NativeValue(isolate, text_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setText(text_cpp_value);
  }

  v8::Local<v8::Value> title_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&title_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (title_value.IsEmpty() || title_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> title_cpp_value = NativeValueTraits<IDLUSVString>::NativeValue(isolate, title_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setTitle(title_cpp_value);
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

  if (RuntimeEnabledFeatures::WebShareV2Enabled()) {
    v8::Local<v8::Value> files_value;
    if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&files_value)) {
      exception_state.RethrowV8Exception(block.Exception());
      return;
    }
    if (files_value.IsEmpty() || files_value->IsUndefined()) {
      // Do nothing.
    } else {
      HeapVector<Member<File>> files_cpp_value = NativeValueTraits<IDLSequence<File>>::NativeValue(isolate, files_value, exception_state);
      if (exception_state.HadException())
        return;
      impl->setFiles(files_cpp_value);
    }
  }
}

v8::Local<v8::Value> ShareData::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8ShareData(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8ShareData(const ShareData* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8ShareDataKeys(isolate);
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

  v8::Local<v8::Value> text_value;
  bool text_has_value_or_default = false;
  if (impl->hasText()) {
    text_value = V8String(isolate, impl->text());
    text_has_value_or_default = true;
  }
  if (text_has_value_or_default &&
      !create_property(1, text_value)) {
    return false;
  }

  v8::Local<v8::Value> title_value;
  bool title_has_value_or_default = false;
  if (impl->hasTitle()) {
    title_value = V8String(isolate, impl->title());
    title_has_value_or_default = true;
  }
  if (title_has_value_or_default &&
      !create_property(2, title_value)) {
    return false;
  }

  v8::Local<v8::Value> url_value;
  bool url_has_value_or_default = false;
  if (impl->hasURL()) {
    url_value = V8String(isolate, impl->url());
    url_has_value_or_default = true;
  }
  if (url_has_value_or_default &&
      !create_property(3, url_value)) {
    return false;
  }

  if (RuntimeEnabledFeatures::WebShareV2Enabled()) {
    v8::Local<v8::Value> files_value;
    bool files_has_value_or_default = false;
    if (impl->hasFiles()) {
      files_value = FreezeV8Object(ToV8(impl->files(), creationContext, isolate), isolate);
      files_has_value_or_default = true;
    }
    if (files_has_value_or_default &&
        !create_property(0, files_value)) {
      return false;
    }
  }

  return true;
}

ShareData* NativeValueTraits<ShareData>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  ShareData* impl = ShareData::Create();
  V8ShareData::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
