// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/effect_proxy_or_worklet_group_effect_proxy.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_effect_proxy.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_worklet_group_effect_proxy.h"

namespace blink {

EffectProxyOrWorkletGroupEffectProxy::EffectProxyOrWorkletGroupEffectProxy() : type_(SpecificType::kNone) {}

EffectProxy* EffectProxyOrWorkletGroupEffectProxy::GetAsEffectProxy() const {
  DCHECK(IsEffectProxy());
  return effect_proxy_;
}

void EffectProxyOrWorkletGroupEffectProxy::SetEffectProxy(EffectProxy* value) {
  DCHECK(IsNull());
  effect_proxy_ = value;
  type_ = SpecificType::kEffectProxy;
}

EffectProxyOrWorkletGroupEffectProxy EffectProxyOrWorkletGroupEffectProxy::FromEffectProxy(EffectProxy* value) {
  EffectProxyOrWorkletGroupEffectProxy container;
  container.SetEffectProxy(value);
  return container;
}

WorkletGroupEffectProxy* EffectProxyOrWorkletGroupEffectProxy::GetAsWorkletGroupEffectProxy() const {
  DCHECK(IsWorkletGroupEffectProxy());
  return worklet_group_effect_proxy_;
}

void EffectProxyOrWorkletGroupEffectProxy::SetWorkletGroupEffectProxy(WorkletGroupEffectProxy* value) {
  DCHECK(IsNull());
  worklet_group_effect_proxy_ = value;
  type_ = SpecificType::kWorkletGroupEffectProxy;
}

EffectProxyOrWorkletGroupEffectProxy EffectProxyOrWorkletGroupEffectProxy::FromWorkletGroupEffectProxy(WorkletGroupEffectProxy* value) {
  EffectProxyOrWorkletGroupEffectProxy container;
  container.SetWorkletGroupEffectProxy(value);
  return container;
}

EffectProxyOrWorkletGroupEffectProxy::EffectProxyOrWorkletGroupEffectProxy(const EffectProxyOrWorkletGroupEffectProxy&) = default;
EffectProxyOrWorkletGroupEffectProxy::~EffectProxyOrWorkletGroupEffectProxy() = default;
EffectProxyOrWorkletGroupEffectProxy& EffectProxyOrWorkletGroupEffectProxy::operator=(const EffectProxyOrWorkletGroupEffectProxy&) = default;

void EffectProxyOrWorkletGroupEffectProxy::Trace(blink::Visitor* visitor) {
  visitor->Trace(effect_proxy_);
  visitor->Trace(worklet_group_effect_proxy_);
}

void V8EffectProxyOrWorkletGroupEffectProxy::ToImpl(
    v8::Isolate* isolate,
    v8::Local<v8::Value> v8_value,
    EffectProxyOrWorkletGroupEffectProxy& impl,
    UnionTypeConversionMode conversion_mode,
    ExceptionState& exception_state) {
  if (v8_value.IsEmpty())
    return;

  if (conversion_mode == UnionTypeConversionMode::kNullable && IsUndefinedOrNull(v8_value))
    return;

  if (V8EffectProxy::HasInstance(v8_value, isolate)) {
    EffectProxy* cpp_value = V8EffectProxy::ToImpl(v8::Local<v8::Object>::Cast(v8_value));
    impl.SetEffectProxy(cpp_value);
    return;
  }

  if (V8WorkletGroupEffectProxy::HasInstance(v8_value, isolate)) {
    WorkletGroupEffectProxy* cpp_value = V8WorkletGroupEffectProxy::ToImpl(v8::Local<v8::Object>::Cast(v8_value));
    impl.SetWorkletGroupEffectProxy(cpp_value);
    return;
  }

  exception_state.ThrowTypeError("The provided value is not of type '(EffectProxy or WorkletGroupEffectProxy)'");
}

v8::Local<v8::Value> ToV8(const EffectProxyOrWorkletGroupEffectProxy& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  switch (impl.type_) {
    case EffectProxyOrWorkletGroupEffectProxy::SpecificType::kNone:
      return v8::Null(isolate);
    case EffectProxyOrWorkletGroupEffectProxy::SpecificType::kEffectProxy:
      return ToV8(impl.GetAsEffectProxy(), creationContext, isolate);
    case EffectProxyOrWorkletGroupEffectProxy::SpecificType::kWorkletGroupEffectProxy:
      return ToV8(impl.GetAsWorkletGroupEffectProxy(), creationContext, isolate);
    default:
      NOTREACHED();
  }
  return v8::Local<v8::Value>();
}

EffectProxyOrWorkletGroupEffectProxy NativeValueTraits<EffectProxyOrWorkletGroupEffectProxy>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  EffectProxyOrWorkletGroupEffectProxy impl;
  V8EffectProxyOrWorkletGroupEffectProxy::ToImpl(isolate, value, impl, UnionTypeConversionMode::kNotNullable, exception_state);
  return impl;
}

}  // namespace blink
