// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_file_property_bag.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_blob_property_bag.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8FilePropertyBagKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "lastModified",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8FilePropertyBag::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, FilePropertyBag* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  V8BlobPropertyBag::ToImpl(isolate, v8_value, impl, exception_state);
  if (exception_state.HadException())
    return;

  const v8::Eternal<v8::Name>* keys = eternalV8FilePropertyBagKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> last_modified_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&last_modified_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (last_modified_value.IsEmpty() || last_modified_value->IsUndefined()) {
    // Do nothing.
  } else {
    int64_t last_modified_cpp_value = NativeValueTraits<IDLLongLong>::NativeValue(isolate, last_modified_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setLastModified(last_modified_cpp_value);
  }
}

v8::Local<v8::Value> FilePropertyBag::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8FilePropertyBag(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8FilePropertyBag(const FilePropertyBag* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8BlobPropertyBag(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8FilePropertyBagKeys(isolate);
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

  v8::Local<v8::Value> last_modified_value;
  bool last_modified_has_value_or_default = false;
  if (impl->hasLastModified()) {
    last_modified_value = v8::Number::New(isolate, static_cast<double>(impl->lastModified()));
    last_modified_has_value_or_default = true;
  }
  if (last_modified_has_value_or_default &&
      !create_property(0, last_modified_value)) {
    return false;
  }

  return true;
}

FilePropertyBag* NativeValueTraits<FilePropertyBag>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  FilePropertyBag* impl = FilePropertyBag::Create();
  V8FilePropertyBag::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
