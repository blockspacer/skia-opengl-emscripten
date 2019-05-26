// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_base_property_indexed_keyframe.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8BasePropertyIndexedKeyframeKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "composite",
    "easing",
    "offset",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8BasePropertyIndexedKeyframe::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, BasePropertyIndexedKeyframe* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8BasePropertyIndexedKeyframeKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> composite_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&composite_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (composite_value.IsEmpty() || composite_value->IsUndefined()) {
    // Do nothing.
  } else {
    CompositeOperationOrAutoOrCompositeOperationOrAutoSequence composite_cpp_value;
    V8CompositeOperationOrAutoOrCompositeOperationOrAutoSequence::ToImpl(isolate, composite_value, composite_cpp_value, UnionTypeConversionMode::kNotNullable, exception_state);
    if (exception_state.HadException())
      return;
    impl->setComposite(composite_cpp_value);
  }

  v8::Local<v8::Value> easing_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&easing_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (easing_value.IsEmpty() || easing_value->IsUndefined()) {
    // Do nothing.
  } else {
    StringOrStringSequence easing_cpp_value;
    V8StringOrStringSequence::ToImpl(isolate, easing_value, easing_cpp_value, UnionTypeConversionMode::kNotNullable, exception_state);
    if (exception_state.HadException())
      return;
    impl->setEasing(easing_cpp_value);
  }

  v8::Local<v8::Value> offset_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&offset_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (offset_value.IsEmpty() || offset_value->IsUndefined()) {
    // Do nothing.
  } else {
    DoubleOrDoubleOrNullSequence offset_cpp_value;
    V8DoubleOrDoubleOrNullSequence::ToImpl(isolate, offset_value, offset_cpp_value, UnionTypeConversionMode::kNullable, exception_state);
    if (exception_state.HadException())
      return;
    impl->setOffset(offset_cpp_value);
  }
}

v8::Local<v8::Value> BasePropertyIndexedKeyframe::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8BasePropertyIndexedKeyframe(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8BasePropertyIndexedKeyframe(const BasePropertyIndexedKeyframe* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8BasePropertyIndexedKeyframeKeys(isolate);
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

  v8::Local<v8::Value> composite_value;
  bool composite_has_value_or_default = false;
  if (impl->hasComposite()) {
    composite_value = ToV8(impl->composite(), creationContext, isolate);
    composite_has_value_or_default = true;
  } else {
    composite_value = ToV8(CompositeOperationOrAutoOrCompositeOperationOrAutoSequence::FromCompositeOperationOrAutoSequence(Vector<String>()), creationContext, isolate);
    composite_has_value_or_default = true;
  }
  if (composite_has_value_or_default &&
      !create_property(0, composite_value)) {
    return false;
  }

  v8::Local<v8::Value> easing_value;
  bool easing_has_value_or_default = false;
  if (impl->hasEasing()) {
    easing_value = ToV8(impl->easing(), creationContext, isolate);
    easing_has_value_or_default = true;
  } else {
    easing_value = ToV8(StringOrStringSequence::FromStringSequence(Vector<String>()), creationContext, isolate);
    easing_has_value_or_default = true;
  }
  if (easing_has_value_or_default &&
      !create_property(1, easing_value)) {
    return false;
  }

  v8::Local<v8::Value> offset_value;
  bool offset_has_value_or_default = false;
  if (impl->hasOffset()) {
    offset_value = ToV8(impl->offset(), creationContext, isolate);
    offset_has_value_or_default = true;
  } else {
    offset_value = ToV8(DoubleOrDoubleOrNullSequence::FromDoubleOrNullSequence(Vector<base::Optional<double>>()), creationContext, isolate);
    offset_has_value_or_default = true;
  }
  if (offset_has_value_or_default &&
      !create_property(2, offset_value)) {
    return false;
  }

  return true;
}

BasePropertyIndexedKeyframe* NativeValueTraits<BasePropertyIndexedKeyframe>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  BasePropertyIndexedKeyframe* impl = BasePropertyIndexedKeyframe::Create();
  V8BasePropertyIndexedKeyframe::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
