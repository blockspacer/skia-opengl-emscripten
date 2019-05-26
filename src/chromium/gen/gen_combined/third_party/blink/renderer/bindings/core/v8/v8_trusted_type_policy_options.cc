// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_trusted_type_policy_options.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_create_html_callback.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_create_script_callback.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_create_url_callback.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8TrustedTypePolicyOptionsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "createHTML",
    "createScript",
    "createScriptURL",
    "createURL",
    "exposed",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8TrustedTypePolicyOptions::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, TrustedTypePolicyOptions* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8TrustedTypePolicyOptionsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> create_html_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&create_html_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (create_html_value.IsEmpty() || create_html_value->IsUndefined()) {
    // Do nothing.
  } else {
    if (!create_html_value->IsFunction()) {
      exception_state.ThrowTypeError("member createHTML is not a function.");
      return;
    }
    V8CreateHTMLCallback* create_html_cpp_value = V8CreateHTMLCallback::Create(create_html_value.As<v8::Function>());
    impl->setCreateHTML(create_html_cpp_value);
  }

  v8::Local<v8::Value> create_script_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&create_script_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (create_script_value.IsEmpty() || create_script_value->IsUndefined()) {
    // Do nothing.
  } else {
    if (!create_script_value->IsFunction()) {
      exception_state.ThrowTypeError("member createScript is not a function.");
      return;
    }
    V8CreateScriptCallback* create_script_cpp_value = V8CreateScriptCallback::Create(create_script_value.As<v8::Function>());
    impl->setCreateScript(create_script_cpp_value);
  }

  v8::Local<v8::Value> create_script_url_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&create_script_url_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (create_script_url_value.IsEmpty() || create_script_url_value->IsUndefined()) {
    // Do nothing.
  } else {
    if (!create_script_url_value->IsFunction()) {
      exception_state.ThrowTypeError("member createScriptURL is not a function.");
      return;
    }
    V8CreateURLCallback* create_script_url_cpp_value = V8CreateURLCallback::Create(create_script_url_value.As<v8::Function>());
    impl->setCreateScriptURL(create_script_url_cpp_value);
  }

  v8::Local<v8::Value> create_url_value;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&create_url_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (create_url_value.IsEmpty() || create_url_value->IsUndefined()) {
    // Do nothing.
  } else {
    if (!create_url_value->IsFunction()) {
      exception_state.ThrowTypeError("member createURL is not a function.");
      return;
    }
    V8CreateURLCallback* create_url_cpp_value = V8CreateURLCallback::Create(create_url_value.As<v8::Function>());
    impl->setCreateURL(create_url_cpp_value);
  }

  v8::Local<v8::Value> exposed_value;
  if (!v8Object->Get(context, keys[4].Get(isolate)).ToLocal(&exposed_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (exposed_value.IsEmpty() || exposed_value->IsUndefined()) {
    // Do nothing.
  } else {
    bool exposed_cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(isolate, exposed_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setExposed(exposed_cpp_value);
  }
}

v8::Local<v8::Value> TrustedTypePolicyOptions::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8TrustedTypePolicyOptions(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8TrustedTypePolicyOptions(const TrustedTypePolicyOptions* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8TrustedTypePolicyOptionsKeys(isolate);
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

  v8::Local<v8::Value> create_html_value;
  bool create_html_has_value_or_default = false;
  if (impl->hasCreateHTML()) {
    create_html_value = ToV8(impl->createHTML(), creationContext, isolate);
    create_html_has_value_or_default = true;
  }
  if (create_html_has_value_or_default &&
      !create_property(0, create_html_value)) {
    return false;
  }

  v8::Local<v8::Value> create_script_value;
  bool create_script_has_value_or_default = false;
  if (impl->hasCreateScript()) {
    create_script_value = ToV8(impl->createScript(), creationContext, isolate);
    create_script_has_value_or_default = true;
  }
  if (create_script_has_value_or_default &&
      !create_property(1, create_script_value)) {
    return false;
  }

  v8::Local<v8::Value> create_script_url_value;
  bool create_script_url_has_value_or_default = false;
  if (impl->hasCreateScriptURL()) {
    create_script_url_value = ToV8(impl->createScriptURL(), creationContext, isolate);
    create_script_url_has_value_or_default = true;
  }
  if (create_script_url_has_value_or_default &&
      !create_property(2, create_script_url_value)) {
    return false;
  }

  v8::Local<v8::Value> create_url_value;
  bool create_url_has_value_or_default = false;
  if (impl->hasCreateURL()) {
    create_url_value = ToV8(impl->createURL(), creationContext, isolate);
    create_url_has_value_or_default = true;
  }
  if (create_url_has_value_or_default &&
      !create_property(3, create_url_value)) {
    return false;
  }

  v8::Local<v8::Value> exposed_value;
  bool exposed_has_value_or_default = false;
  if (impl->hasExposed()) {
    exposed_value = v8::Boolean::New(isolate, impl->exposed());
    exposed_has_value_or_default = true;
  } else {
    exposed_value = v8::Boolean::New(isolate, false);
    exposed_has_value_or_default = true;
  }
  if (exposed_has_value_or_default &&
      !create_property(4, exposed_value)) {
    return false;
  }

  return true;
}

TrustedTypePolicyOptions* NativeValueTraits<TrustedTypePolicyOptions>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  TrustedTypePolicyOptions* impl = TrustedTypePolicyOptions::Create();
  V8TrustedTypePolicyOptions::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
