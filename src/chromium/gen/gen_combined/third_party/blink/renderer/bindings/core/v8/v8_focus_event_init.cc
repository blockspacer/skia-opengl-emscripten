// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_focus_event_init.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_event_target.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_ui_event_init.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8FocusEventInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "relatedTarget",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8FocusEventInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, FocusEventInit* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  V8UIEventInit::ToImpl(isolate, v8_value, impl, exception_state);
  if (exception_state.HadException())
    return;

  const v8::Eternal<v8::Name>* keys = eternalV8FocusEventInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> related_target_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&related_target_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (related_target_value.IsEmpty() || related_target_value->IsUndefined()) {
    // Do nothing.
  } else if (related_target_value->IsNull()) {
    impl->setRelatedTargetToNull();
  } else {
    EventTarget* related_target_cpp_value = V8EventTarget::ToImplWithTypeCheck(isolate, related_target_value);
    if (!related_target_cpp_value) {
      exception_state.ThrowTypeError("member relatedTarget is not of type EventTarget.");
      return;
    }
    impl->setRelatedTarget(related_target_cpp_value);
  }
}

v8::Local<v8::Value> FocusEventInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8FocusEventInit(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8FocusEventInit(const FocusEventInit* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8UIEventInit(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8FocusEventInitKeys(isolate);
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

  v8::Local<v8::Value> related_target_value;
  bool related_target_has_value_or_default = false;
  if (impl->hasRelatedTarget()) {
    related_target_value = ToV8(impl->relatedTarget(), creationContext, isolate);
    related_target_has_value_or_default = true;
  } else {
    related_target_value = v8::Null(isolate);
    related_target_has_value_or_default = true;
  }
  if (related_target_has_value_or_default &&
      !create_property(0, related_target_value)) {
    return false;
  }

  return true;
}

FocusEventInit* NativeValueTraits<FocusEventInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  FocusEventInit* impl = FocusEventInit::Create();
  V8FocusEventInit::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
