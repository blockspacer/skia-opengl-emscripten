// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_post_message_options.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/script_value.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/runtime_enabled_features.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8PostMessageOptionsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "includeUserActivation",
    "transfer",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8PostMessageOptions::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, PostMessageOptions* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8PostMessageOptionsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> transfer_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&transfer_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (transfer_value.IsEmpty() || transfer_value->IsUndefined()) {
    // Do nothing.
  } else {
    Vector<ScriptValue> transfer_cpp_value = NativeValueTraits<IDLSequence<ScriptValue>>::NativeValue(isolate, transfer_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setTransfer(transfer_cpp_value);
  }

  if (RuntimeEnabledFeatures::UserActivationAPIEnabled()) {
    v8::Local<v8::Value> include_user_activation_value;
    if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&include_user_activation_value)) {
      exception_state.RethrowV8Exception(block.Exception());
      return;
    }
    if (include_user_activation_value.IsEmpty() || include_user_activation_value->IsUndefined()) {
      // Do nothing.
    } else {
      bool include_user_activation_cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(isolate, include_user_activation_value, exception_state);
      if (exception_state.HadException())
        return;
      impl->setIncludeUserActivation(include_user_activation_cpp_value);
    }
  }
}

v8::Local<v8::Value> PostMessageOptions::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8PostMessageOptions(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8PostMessageOptions(const PostMessageOptions* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8PostMessageOptionsKeys(isolate);
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

  v8::Local<v8::Value> transfer_value;
  bool transfer_has_value_or_default = false;
  if (impl->hasTransfer()) {
    transfer_value = ToV8(impl->transfer(), creationContext, isolate);
    transfer_has_value_or_default = true;
  } else {
    transfer_value = ToV8(Vector<ScriptValue>(), creationContext, isolate);
    transfer_has_value_or_default = true;
  }
  if (transfer_has_value_or_default &&
      !create_property(1, transfer_value)) {
    return false;
  }

  if (RuntimeEnabledFeatures::UserActivationAPIEnabled()) {
    v8::Local<v8::Value> include_user_activation_value;
    bool include_user_activation_has_value_or_default = false;
    if (impl->hasIncludeUserActivation()) {
      include_user_activation_value = v8::Boolean::New(isolate, impl->includeUserActivation());
      include_user_activation_has_value_or_default = true;
    } else {
      include_user_activation_value = v8::Boolean::New(isolate, false);
      include_user_activation_has_value_or_default = true;
    }
    if (include_user_activation_has_value_or_default &&
        !create_property(0, include_user_activation_value)) {
      return false;
    }
  }

  return true;
}

PostMessageOptions* NativeValueTraits<PostMessageOptions>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  PostMessageOptions* impl = PostMessageOptions::Create();
  V8PostMessageOptions::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
