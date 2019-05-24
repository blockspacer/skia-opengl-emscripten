// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_choose_file_system_entries_options_accepts.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8ChooseFileSystemEntriesOptionsAcceptsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "description",
    "extensions",
    "mimeTypes",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8ChooseFileSystemEntriesOptionsAccepts::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, ChooseFileSystemEntriesOptionsAccepts* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8ChooseFileSystemEntriesOptionsAcceptsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> description_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&description_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (description_value.IsEmpty() || description_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> description_cpp_value = description_value;
    if (!description_cpp_value.Prepare(exception_state))
      return;
    impl->setDescription(description_cpp_value);
  }

  v8::Local<v8::Value> extensions_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&extensions_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (extensions_value.IsEmpty() || extensions_value->IsUndefined()) {
    // Do nothing.
  } else {
    Vector<String> extensions_cpp_value = NativeValueTraits<IDLSequence<IDLString>>::NativeValue(isolate, extensions_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setExtensions(extensions_cpp_value);
  }

  v8::Local<v8::Value> mime_types_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&mime_types_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (mime_types_value.IsEmpty() || mime_types_value->IsUndefined()) {
    // Do nothing.
  } else {
    Vector<String> mime_types_cpp_value = NativeValueTraits<IDLSequence<IDLString>>::NativeValue(isolate, mime_types_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setMimeTypes(mime_types_cpp_value);
  }
}

v8::Local<v8::Value> ChooseFileSystemEntriesOptionsAccepts::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8ChooseFileSystemEntriesOptionsAccepts(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8ChooseFileSystemEntriesOptionsAccepts(const ChooseFileSystemEntriesOptionsAccepts* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8ChooseFileSystemEntriesOptionsAcceptsKeys(isolate);
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

  v8::Local<v8::Value> description_value;
  bool description_has_value_or_default = false;
  if (impl->hasDescription()) {
    description_value = V8String(isolate, impl->description());
    description_has_value_or_default = true;
  }
  if (description_has_value_or_default &&
      !create_property(0, description_value)) {
    return false;
  }

  v8::Local<v8::Value> extensions_value;
  bool extensions_has_value_or_default = false;
  if (impl->hasExtensions()) {
    extensions_value = ToV8(impl->extensions(), creationContext, isolate);
    extensions_has_value_or_default = true;
  }
  if (extensions_has_value_or_default &&
      !create_property(1, extensions_value)) {
    return false;
  }

  v8::Local<v8::Value> mime_types_value;
  bool mime_types_has_value_or_default = false;
  if (impl->hasMimeTypes()) {
    mime_types_value = ToV8(impl->mimeTypes(), creationContext, isolate);
    mime_types_has_value_or_default = true;
  }
  if (mime_types_has_value_or_default &&
      !create_property(2, mime_types_value)) {
    return false;
  }

  return true;
}

ChooseFileSystemEntriesOptionsAccepts* NativeValueTraits<ChooseFileSystemEntriesOptionsAccepts>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  ChooseFileSystemEntriesOptionsAccepts* impl = ChooseFileSystemEntriesOptionsAccepts::Create();
  V8ChooseFileSystemEntriesOptionsAccepts::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
