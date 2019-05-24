// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_mutation_observer_init.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8MutationObserverInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "attributeFilter",
    "attributeOldValue",
    "attributes",
    "characterData",
    "characterDataOldValue",
    "childList",
    "subtree",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8MutationObserverInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, MutationObserverInit* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8MutationObserverInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> attribute_filter_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&attribute_filter_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (attribute_filter_value.IsEmpty() || attribute_filter_value->IsUndefined()) {
    // Do nothing.
  } else {
    Vector<String> attribute_filter_cpp_value = NativeValueTraits<IDLSequence<IDLString>>::NativeValue(isolate, attribute_filter_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setAttributeFilter(attribute_filter_cpp_value);
  }

  v8::Local<v8::Value> attribute_old_value_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&attribute_old_value_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (attribute_old_value_value.IsEmpty() || attribute_old_value_value->IsUndefined()) {
    // Do nothing.
  } else {
    bool attribute_old_value_cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(isolate, attribute_old_value_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setAttributeOldValue(attribute_old_value_cpp_value);
  }

  v8::Local<v8::Value> attributes_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&attributes_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (attributes_value.IsEmpty() || attributes_value->IsUndefined()) {
    // Do nothing.
  } else {
    bool attributes_cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(isolate, attributes_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setAttributes(attributes_cpp_value);
  }

  v8::Local<v8::Value> character_data_value;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&character_data_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (character_data_value.IsEmpty() || character_data_value->IsUndefined()) {
    // Do nothing.
  } else {
    bool character_data_cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(isolate, character_data_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setCharacterData(character_data_cpp_value);
  }

  v8::Local<v8::Value> character_data_old_value_value;
  if (!v8Object->Get(context, keys[4].Get(isolate)).ToLocal(&character_data_old_value_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (character_data_old_value_value.IsEmpty() || character_data_old_value_value->IsUndefined()) {
    // Do nothing.
  } else {
    bool character_data_old_value_cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(isolate, character_data_old_value_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setCharacterDataOldValue(character_data_old_value_cpp_value);
  }

  v8::Local<v8::Value> child_list_value;
  if (!v8Object->Get(context, keys[5].Get(isolate)).ToLocal(&child_list_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (child_list_value.IsEmpty() || child_list_value->IsUndefined()) {
    // Do nothing.
  } else {
    bool child_list_cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(isolate, child_list_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setChildList(child_list_cpp_value);
  }

  v8::Local<v8::Value> subtree_value;
  if (!v8Object->Get(context, keys[6].Get(isolate)).ToLocal(&subtree_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (subtree_value.IsEmpty() || subtree_value->IsUndefined()) {
    // Do nothing.
  } else {
    bool subtree_cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(isolate, subtree_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setSubtree(subtree_cpp_value);
  }
}

v8::Local<v8::Value> MutationObserverInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8MutationObserverInit(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8MutationObserverInit(const MutationObserverInit* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8MutationObserverInitKeys(isolate);
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

  v8::Local<v8::Value> attribute_filter_value;
  bool attribute_filter_has_value_or_default = false;
  if (impl->hasAttributeFilter()) {
    attribute_filter_value = ToV8(impl->attributeFilter(), creationContext, isolate);
    attribute_filter_has_value_or_default = true;
  }
  if (attribute_filter_has_value_or_default &&
      !create_property(0, attribute_filter_value)) {
    return false;
  }

  v8::Local<v8::Value> attribute_old_value_value;
  bool attribute_old_value_has_value_or_default = false;
  if (impl->hasAttributeOldValue()) {
    attribute_old_value_value = v8::Boolean::New(isolate, impl->attributeOldValue());
    attribute_old_value_has_value_or_default = true;
  }
  if (attribute_old_value_has_value_or_default &&
      !create_property(1, attribute_old_value_value)) {
    return false;
  }

  v8::Local<v8::Value> attributes_value;
  bool attributes_has_value_or_default = false;
  if (impl->hasAttributes()) {
    attributes_value = v8::Boolean::New(isolate, impl->attributes());
    attributes_has_value_or_default = true;
  }
  if (attributes_has_value_or_default &&
      !create_property(2, attributes_value)) {
    return false;
  }

  v8::Local<v8::Value> character_data_value;
  bool character_data_has_value_or_default = false;
  if (impl->hasCharacterData()) {
    character_data_value = v8::Boolean::New(isolate, impl->characterData());
    character_data_has_value_or_default = true;
  }
  if (character_data_has_value_or_default &&
      !create_property(3, character_data_value)) {
    return false;
  }

  v8::Local<v8::Value> character_data_old_value_value;
  bool character_data_old_value_has_value_or_default = false;
  if (impl->hasCharacterDataOldValue()) {
    character_data_old_value_value = v8::Boolean::New(isolate, impl->characterDataOldValue());
    character_data_old_value_has_value_or_default = true;
  }
  if (character_data_old_value_has_value_or_default &&
      !create_property(4, character_data_old_value_value)) {
    return false;
  }

  v8::Local<v8::Value> child_list_value;
  bool child_list_has_value_or_default = false;
  if (impl->hasChildList()) {
    child_list_value = v8::Boolean::New(isolate, impl->childList());
    child_list_has_value_or_default = true;
  } else {
    child_list_value = v8::Boolean::New(isolate, false);
    child_list_has_value_or_default = true;
  }
  if (child_list_has_value_or_default &&
      !create_property(5, child_list_value)) {
    return false;
  }

  v8::Local<v8::Value> subtree_value;
  bool subtree_has_value_or_default = false;
  if (impl->hasSubtree()) {
    subtree_value = v8::Boolean::New(isolate, impl->subtree());
    subtree_has_value_or_default = true;
  } else {
    subtree_value = v8::Boolean::New(isolate, false);
    subtree_has_value_or_default = true;
  }
  if (subtree_has_value_or_default &&
      !create_property(6, subtree_value)) {
    return false;
  }

  return true;
}

MutationObserverInit* NativeValueTraits<MutationObserverInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  MutationObserverInit* impl = MutationObserverInit::Create();
  V8MutationObserverInit::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
