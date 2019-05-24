// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_element_definition_options.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_style_sheet.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8ElementDefinitionOptionsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "extends",
    "styles",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8ElementDefinitionOptions::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, ElementDefinitionOptions* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8ElementDefinitionOptionsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> extends_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&extends_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (extends_value.IsEmpty() || extends_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<kTreatNullAndUndefinedAsNullString> extends_cpp_value = extends_value;
    if (!extends_cpp_value.Prepare(exception_state))
      return;
    impl->setExtends(extends_cpp_value);
  }

  v8::Local<v8::Value> styles_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&styles_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (styles_value.IsEmpty() || styles_value->IsUndefined()) {
    // Do nothing.
  } else {
    HeapVector<Member<CSSStyleSheet>> styles_cpp_value = NativeValueTraits<IDLSequence<CSSStyleSheet>>::NativeValue(isolate, styles_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setStyles(styles_cpp_value);
  }
}

v8::Local<v8::Value> ElementDefinitionOptions::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8ElementDefinitionOptions(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8ElementDefinitionOptions(const ElementDefinitionOptions* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8ElementDefinitionOptionsKeys(isolate);
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

  v8::Local<v8::Value> extends_value;
  bool extends_has_value_or_default = false;
  if (impl->hasExtends()) {
    extends_value = V8String(isolate, impl->extends());
    extends_has_value_or_default = true;
  } else {
    extends_value = v8::Null(isolate);
    extends_has_value_or_default = true;
  }
  if (extends_has_value_or_default &&
      !create_property(0, extends_value)) {
    return false;
  }

  v8::Local<v8::Value> styles_value;
  bool styles_has_value_or_default = false;
  if (impl->hasStyles()) {
    styles_value = ToV8(impl->styles(), creationContext, isolate);
    styles_has_value_or_default = true;
  }
  if (styles_has_value_or_default &&
      !create_property(1, styles_value)) {
    return false;
  }

  return true;
}

ElementDefinitionOptions* NativeValueTraits<ElementDefinitionOptions>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  ElementDefinitionOptions* impl = ElementDefinitionOptions::Create();
  V8ElementDefinitionOptions::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
