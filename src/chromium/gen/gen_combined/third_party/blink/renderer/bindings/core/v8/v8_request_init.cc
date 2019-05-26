// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_request_init.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/script_value.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_abort_signal.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/origin_trials/origin_trials.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8RequestInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "body",
    "cache",
    "credentials",
    "headers",
    "importance",
    "integrity",
    "keepalive",
    "method",
    "mode",
    "redirect",
    "referrer",
    "referrerPolicy",
    "signal",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8RequestInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, RequestInit* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8RequestInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  ExecutionContext* executionContext = ToExecutionContext(context);
  DCHECK(executionContext);
  v8::Local<v8::Value> body_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&body_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (body_value.IsEmpty() || body_value->IsUndefined()) {
    // Do nothing.
  } else {
    ScriptValue body_cpp_value = ScriptValue(ScriptState::Current(isolate), body_value);
    impl->setBody(body_cpp_value);
  }

  v8::Local<v8::Value> cache_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&cache_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (cache_value.IsEmpty() || cache_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> cache_cpp_value = cache_value;
    if (!cache_cpp_value.Prepare(exception_state))
      return;
    const char* kValidValues[] = {
        "default",
        "no-store",
        "reload",
        "no-cache",
        "force-cache",
        "only-if-cached",
    };
    if (!IsValidEnum(cache_cpp_value, kValidValues, base::size(kValidValues), "RequestCache", exception_state))
      return;
    impl->setCache(cache_cpp_value);
  }

  v8::Local<v8::Value> credentials_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&credentials_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (credentials_value.IsEmpty() || credentials_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> credentials_cpp_value = credentials_value;
    if (!credentials_cpp_value.Prepare(exception_state))
      return;
    const char* kValidValues[] = {
        "omit",
        "same-origin",
        "include",
    };
    if (!IsValidEnum(credentials_cpp_value, kValidValues, base::size(kValidValues), "RequestCredentials", exception_state))
      return;
    impl->setCredentials(credentials_cpp_value);
  }

  v8::Local<v8::Value> headers_value;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&headers_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (headers_value.IsEmpty() || headers_value->IsUndefined()) {
    // Do nothing.
  } else {
    ByteStringSequenceSequenceOrByteStringByteStringRecord headers_cpp_value;
    V8ByteStringSequenceSequenceOrByteStringByteStringRecord::ToImpl(isolate, headers_value, headers_cpp_value, UnionTypeConversionMode::kNotNullable, exception_state);
    if (exception_state.HadException())
      return;
    impl->setHeaders(headers_cpp_value);
  }

  v8::Local<v8::Value> integrity_value;
  if (!v8Object->Get(context, keys[5].Get(isolate)).ToLocal(&integrity_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (integrity_value.IsEmpty() || integrity_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> integrity_cpp_value = integrity_value;
    if (!integrity_cpp_value.Prepare(exception_state))
      return;
    impl->setIntegrity(integrity_cpp_value);
  }

  v8::Local<v8::Value> keepalive_value;
  if (!v8Object->Get(context, keys[6].Get(isolate)).ToLocal(&keepalive_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (keepalive_value.IsEmpty() || keepalive_value->IsUndefined()) {
    // Do nothing.
  } else {
    bool keepalive_cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(isolate, keepalive_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setKeepalive(keepalive_cpp_value);
  }

  v8::Local<v8::Value> method_value;
  if (!v8Object->Get(context, keys[7].Get(isolate)).ToLocal(&method_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (method_value.IsEmpty() || method_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> method_cpp_value = NativeValueTraits<IDLByteString>::NativeValue(isolate, method_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setMethod(method_cpp_value);
  }

  v8::Local<v8::Value> mode_value;
  if (!v8Object->Get(context, keys[8].Get(isolate)).ToLocal(&mode_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (mode_value.IsEmpty() || mode_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> mode_cpp_value = mode_value;
    if (!mode_cpp_value.Prepare(exception_state))
      return;
    const char* kValidValues[] = {
        "navigate",
        "same-origin",
        "no-cors",
        "cors",
    };
    if (!IsValidEnum(mode_cpp_value, kValidValues, base::size(kValidValues), "RequestMode", exception_state))
      return;
    impl->setMode(mode_cpp_value);
  }

  v8::Local<v8::Value> redirect_value;
  if (!v8Object->Get(context, keys[9].Get(isolate)).ToLocal(&redirect_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (redirect_value.IsEmpty() || redirect_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> redirect_cpp_value = redirect_value;
    if (!redirect_cpp_value.Prepare(exception_state))
      return;
    const char* kValidValues[] = {
        "follow",
        "error",
        "manual",
    };
    if (!IsValidEnum(redirect_cpp_value, kValidValues, base::size(kValidValues), "RequestRedirect", exception_state))
      return;
    impl->setRedirect(redirect_cpp_value);
  }

  v8::Local<v8::Value> referrer_value;
  if (!v8Object->Get(context, keys[10].Get(isolate)).ToLocal(&referrer_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (referrer_value.IsEmpty() || referrer_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> referrer_cpp_value = NativeValueTraits<IDLUSVString>::NativeValue(isolate, referrer_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setReferrer(referrer_cpp_value);
  }

  v8::Local<v8::Value> referrer_policy_value;
  if (!v8Object->Get(context, keys[11].Get(isolate)).ToLocal(&referrer_policy_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (referrer_policy_value.IsEmpty() || referrer_policy_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> referrer_policy_cpp_value = referrer_policy_value;
    if (!referrer_policy_cpp_value.Prepare(exception_state))
      return;
    const char* kValidValues[] = {
        "",
        "no-referrer",
        "no-referrer-when-downgrade",
        "same-origin",
        "origin",
        "strict-origin",
        "origin-when-cross-origin",
        "strict-origin-when-cross-origin",
        "unsafe-url",
    };
    if (!IsValidEnum(referrer_policy_cpp_value, kValidValues, base::size(kValidValues), "ReferrerPolicy", exception_state))
      return;
    impl->setReferrerPolicy(referrer_policy_cpp_value);
  }

  v8::Local<v8::Value> signal_value;
  if (!v8Object->Get(context, keys[12].Get(isolate)).ToLocal(&signal_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (signal_value.IsEmpty() || signal_value->IsUndefined()) {
    // Do nothing.
  } else if (signal_value->IsNull()) {
    impl->setSignalToNull();
  } else {
    AbortSignal* signal_cpp_value = V8AbortSignal::ToImplWithTypeCheck(isolate, signal_value);
    if (!signal_cpp_value) {
      exception_state.ThrowTypeError("member signal is not of type AbortSignal.");
      return;
    }
    impl->setSignal(signal_cpp_value);
  }

  if (RuntimeEnabledFeatures::PriorityHintsEnabled(executionContext)) {
    v8::Local<v8::Value> importance_value;
    if (!v8Object->Get(context, keys[4].Get(isolate)).ToLocal(&importance_value)) {
      exception_state.RethrowV8Exception(block.Exception());
      return;
    }
    if (importance_value.IsEmpty() || importance_value->IsUndefined()) {
      // Do nothing.
    } else {
      V8StringResource<> importance_cpp_value = importance_value;
      if (!importance_cpp_value.Prepare(exception_state))
        return;
      const char* kValidValues[] = {
          "low",
          "auto",
          "high",
      };
      if (!IsValidEnum(importance_cpp_value, kValidValues, base::size(kValidValues), "RequestImportance", exception_state))
        return;
      impl->setImportance(importance_cpp_value);
    }
  }
}

v8::Local<v8::Value> RequestInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8RequestInit(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8RequestInit(const RequestInit* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8RequestInitKeys(isolate);
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

  ExecutionContext* executionContext = ToExecutionContext(context);
  DCHECK(executionContext);
  v8::Local<v8::Value> body_value;
  bool body_has_value_or_default = false;
  if (impl->hasBody()) {
    body_value = impl->body().V8Value();
    body_has_value_or_default = true;
  }
  if (body_has_value_or_default &&
      !create_property(0, body_value)) {
    return false;
  }

  v8::Local<v8::Value> cache_value;
  bool cache_has_value_or_default = false;
  if (impl->hasCache()) {
    cache_value = V8String(isolate, impl->cache());
    cache_has_value_or_default = true;
  }
  if (cache_has_value_or_default &&
      !create_property(1, cache_value)) {
    return false;
  }

  v8::Local<v8::Value> credentials_value;
  bool credentials_has_value_or_default = false;
  if (impl->hasCredentials()) {
    credentials_value = V8String(isolate, impl->credentials());
    credentials_has_value_or_default = true;
  }
  if (credentials_has_value_or_default &&
      !create_property(2, credentials_value)) {
    return false;
  }

  v8::Local<v8::Value> headers_value;
  bool headers_has_value_or_default = false;
  if (impl->hasHeaders()) {
    headers_value = ToV8(impl->headers(), creationContext, isolate);
    headers_has_value_or_default = true;
  }
  if (headers_has_value_or_default &&
      !create_property(3, headers_value)) {
    return false;
  }

  v8::Local<v8::Value> integrity_value;
  bool integrity_has_value_or_default = false;
  if (impl->hasIntegrity()) {
    integrity_value = V8String(isolate, impl->integrity());
    integrity_has_value_or_default = true;
  }
  if (integrity_has_value_or_default &&
      !create_property(5, integrity_value)) {
    return false;
  }

  v8::Local<v8::Value> keepalive_value;
  bool keepalive_has_value_or_default = false;
  if (impl->hasKeepalive()) {
    keepalive_value = v8::Boolean::New(isolate, impl->keepalive());
    keepalive_has_value_or_default = true;
  }
  if (keepalive_has_value_or_default &&
      !create_property(6, keepalive_value)) {
    return false;
  }

  v8::Local<v8::Value> method_value;
  bool method_has_value_or_default = false;
  if (impl->hasMethod()) {
    method_value = V8String(isolate, impl->method());
    method_has_value_or_default = true;
  }
  if (method_has_value_or_default &&
      !create_property(7, method_value)) {
    return false;
  }

  v8::Local<v8::Value> mode_value;
  bool mode_has_value_or_default = false;
  if (impl->hasMode()) {
    mode_value = V8String(isolate, impl->mode());
    mode_has_value_or_default = true;
  }
  if (mode_has_value_or_default &&
      !create_property(8, mode_value)) {
    return false;
  }

  v8::Local<v8::Value> redirect_value;
  bool redirect_has_value_or_default = false;
  if (impl->hasRedirect()) {
    redirect_value = V8String(isolate, impl->redirect());
    redirect_has_value_or_default = true;
  }
  if (redirect_has_value_or_default &&
      !create_property(9, redirect_value)) {
    return false;
  }

  v8::Local<v8::Value> referrer_value;
  bool referrer_has_value_or_default = false;
  if (impl->hasReferrer()) {
    referrer_value = V8String(isolate, impl->referrer());
    referrer_has_value_or_default = true;
  }
  if (referrer_has_value_or_default &&
      !create_property(10, referrer_value)) {
    return false;
  }

  v8::Local<v8::Value> referrer_policy_value;
  bool referrer_policy_has_value_or_default = false;
  if (impl->hasReferrerPolicy()) {
    referrer_policy_value = V8String(isolate, impl->referrerPolicy());
    referrer_policy_has_value_or_default = true;
  }
  if (referrer_policy_has_value_or_default &&
      !create_property(11, referrer_policy_value)) {
    return false;
  }

  v8::Local<v8::Value> signal_value;
  bool signal_has_value_or_default = false;
  if (impl->hasSignal()) {
    signal_value = ToV8(impl->signal(), creationContext, isolate);
    signal_has_value_or_default = true;
  }
  if (signal_has_value_or_default &&
      !create_property(12, signal_value)) {
    return false;
  }

  if (RuntimeEnabledFeatures::PriorityHintsEnabled(executionContext)) {
    v8::Local<v8::Value> importance_value;
    bool importance_has_value_or_default = false;
    if (impl->hasImportance()) {
      importance_value = V8String(isolate, impl->importance());
      importance_has_value_or_default = true;
    }
    if (importance_has_value_or_default &&
        !create_property(4, importance_value)) {
      return false;
    }
  }

  return true;
}

RequestInit* NativeValueTraits<RequestInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  RequestInit* impl = RequestInit::Create();
  V8RequestInit::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
