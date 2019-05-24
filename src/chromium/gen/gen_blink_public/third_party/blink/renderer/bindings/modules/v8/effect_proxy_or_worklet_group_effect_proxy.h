// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_EFFECT_PROXY_OR_WORKLET_GROUP_EFFECT_PROXY_H_
#define THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_EFFECT_PROXY_OR_WORKLET_GROUP_EFFECT_PROXY_H_

#include "base/optional.h"
#include "third_party/blink/renderer/bindings/core/v8/dictionary.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_binding_for_core.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class EffectProxy;
class WorkletGroupEffectProxy;

class MODULES_EXPORT EffectProxyOrWorkletGroupEffectProxy final {
  DISALLOW_NEW();
 public:
  EffectProxyOrWorkletGroupEffectProxy();
  bool IsNull() const { return type_ == SpecificType::kNone; }

  bool IsEffectProxy() const { return type_ == SpecificType::kEffectProxy; }
  EffectProxy* GetAsEffectProxy() const;
  void SetEffectProxy(EffectProxy*);
  static EffectProxyOrWorkletGroupEffectProxy FromEffectProxy(EffectProxy*);

  bool IsWorkletGroupEffectProxy() const { return type_ == SpecificType::kWorkletGroupEffectProxy; }
  WorkletGroupEffectProxy* GetAsWorkletGroupEffectProxy() const;
  void SetWorkletGroupEffectProxy(WorkletGroupEffectProxy*);
  static EffectProxyOrWorkletGroupEffectProxy FromWorkletGroupEffectProxy(WorkletGroupEffectProxy*);

  EffectProxyOrWorkletGroupEffectProxy(const EffectProxyOrWorkletGroupEffectProxy&);
  ~EffectProxyOrWorkletGroupEffectProxy();
  EffectProxyOrWorkletGroupEffectProxy& operator=(const EffectProxyOrWorkletGroupEffectProxy&);
  void Trace(blink::Visitor*);

 private:
  enum class SpecificType {
    kNone,
    kEffectProxy,
    kWorkletGroupEffectProxy,
  };
  SpecificType type_;

  Member<EffectProxy> effect_proxy_;
  Member<WorkletGroupEffectProxy> worklet_group_effect_proxy_;

  friend MODULES_EXPORT v8::Local<v8::Value> ToV8(const EffectProxyOrWorkletGroupEffectProxy&, v8::Local<v8::Object>, v8::Isolate*);
};

class V8EffectProxyOrWorkletGroupEffectProxy final {
 public:
  MODULES_EXPORT static void ToImpl(v8::Isolate*, v8::Local<v8::Value>, EffectProxyOrWorkletGroupEffectProxy&, UnionTypeConversionMode, ExceptionState&);
};

MODULES_EXPORT v8::Local<v8::Value> ToV8(const EffectProxyOrWorkletGroupEffectProxy&, v8::Local<v8::Object>, v8::Isolate*);

template <class CallbackInfo>
inline void V8SetReturnValue(const CallbackInfo& callbackInfo, EffectProxyOrWorkletGroupEffectProxy& impl) {
  V8SetReturnValue(callbackInfo, ToV8(impl, callbackInfo.Holder(), callbackInfo.GetIsolate()));
}

template <class CallbackInfo>
inline void V8SetReturnValue(const CallbackInfo& callbackInfo, EffectProxyOrWorkletGroupEffectProxy& impl, v8::Local<v8::Object> creationContext) {
  V8SetReturnValue(callbackInfo, ToV8(impl, creationContext, callbackInfo.GetIsolate()));
}

template <>
struct NativeValueTraits<EffectProxyOrWorkletGroupEffectProxy> : public NativeValueTraitsBase<EffectProxyOrWorkletGroupEffectProxy> {
  MODULES_EXPORT static EffectProxyOrWorkletGroupEffectProxy NativeValue(v8::Isolate*, v8::Local<v8::Value>, ExceptionState&);
  MODULES_EXPORT static EffectProxyOrWorkletGroupEffectProxy NullValue() { return EffectProxyOrWorkletGroupEffectProxy(); }
};

template <>
struct V8TypeOf<EffectProxyOrWorkletGroupEffectProxy> {
  typedef V8EffectProxyOrWorkletGroupEffectProxy Type;
};

}  // namespace blink

// We need to set canInitializeWithMemset=true because HeapVector supports
// items that can initialize with memset or have a vtable. It is safe to
// set canInitializeWithMemset=true for a union type object in practice.
// See https://codereview.chromium.org/1118993002/#msg5 for more details.
WTF_ALLOW_MOVE_AND_INIT_WITH_MEM_FUNCTIONS(blink::EffectProxyOrWorkletGroupEffectProxy)

#endif  // THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_EFFECT_PROXY_OR_WORKLET_GROUP_EFFECT_PROXY_H_
