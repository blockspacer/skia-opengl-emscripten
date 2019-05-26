// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_promise_rejection_event_init.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/script_promise.h"
#include "third_party/blink/renderer/bindings/core/v8/script_value.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_event_init.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8PromiseRejectionEventInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "promise",
    "reason",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8PromiseRejectionEventInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, PromiseRejectionEventInit* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    exception_state.ThrowTypeError("Missing required member(s): promise.");
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  V8EventInit::ToImpl(isolate, v8_value, impl, exception_state);
  if (exception_state.HadException())
    return;

  const v8::Eternal<v8::Name>* keys = eternalV8PromiseRejectionEventInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> promise_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&promise_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (promise_value.IsEmpty() || promise_value->IsUndefined()) {
    exception_state.ThrowTypeError("required member promise is undefined.");
    return;
  } else {
    ScriptPromise promise_cpp_value = ScriptPromise::Cast(ScriptState::Current(isolate), promise_value);
    impl->setPromise(promise_cpp_value);
  }

  v8::Local<v8::Value> reason_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&reason_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (reason_value.IsEmpty() || reason_value->IsUndefined()) {
    // Do nothing.
  } else {
    ScriptValue reason_cpp_value = ScriptValue(ScriptState::Current(isolate), reason_value);
    impl->setReason(reason_cpp_value);
  }
}

v8::Local<v8::Value> PromiseRejectionEventInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8PromiseRejectionEventInit(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8PromiseRejectionEventInit(const PromiseRejectionEventInit* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8EventInit(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8PromiseRejectionEventInitKeys(isolate);
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

  v8::Local<v8::Value> promise_value;
  bool promise_has_value_or_default = false;
  if (impl->hasPromise()) {
    promise_value = impl->promise().V8Value();
    promise_has_value_or_default = true;
  } else {
    NOTREACHED();
  }
  if (promise_has_value_or_default &&
      !create_property(0, promise_value)) {
    return false;
  }

  v8::Local<v8::Value> reason_value;
  bool reason_has_value_or_default = false;
  if (impl->hasReason()) {
    reason_value = impl->reason().V8Value();
    reason_has_value_or_default = true;
  }
  if (reason_has_value_or_default &&
      !create_property(1, reason_value)) {
    return false;
  }

  return true;
}

PromiseRejectionEventInit* NativeValueTraits<PromiseRejectionEventInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  PromiseRejectionEventInit* impl = PromiseRejectionEventInit::Create();
  V8PromiseRejectionEventInit::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
