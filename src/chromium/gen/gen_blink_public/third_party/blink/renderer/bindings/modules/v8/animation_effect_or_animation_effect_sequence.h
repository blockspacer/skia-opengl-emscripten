// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_ANIMATION_EFFECT_OR_ANIMATION_EFFECT_SEQUENCE_H_
#define THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_ANIMATION_EFFECT_OR_ANIMATION_EFFECT_SEQUENCE_H_

#include "base/optional.h"
#include "third_party/blink/renderer/bindings/core/v8/dictionary.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_binding_for_core.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class AnimationEffect;

class MODULES_EXPORT AnimationEffectOrAnimationEffectSequence final {
  DISALLOW_NEW();
 public:
  AnimationEffectOrAnimationEffectSequence();
  bool IsNull() const { return type_ == SpecificType::kNone; }

  bool IsAnimationEffect() const { return type_ == SpecificType::kAnimationEffect; }
  AnimationEffect* GetAsAnimationEffect() const;
  void SetAnimationEffect(AnimationEffect*);
  static AnimationEffectOrAnimationEffectSequence FromAnimationEffect(AnimationEffect*);

  bool IsAnimationEffectSequence() const { return type_ == SpecificType::kAnimationEffectSequence; }
  const HeapVector<Member<AnimationEffect>>& GetAsAnimationEffectSequence() const;
  void SetAnimationEffectSequence(const HeapVector<Member<AnimationEffect>>&);
  static AnimationEffectOrAnimationEffectSequence FromAnimationEffectSequence(const HeapVector<Member<AnimationEffect>>&);

  AnimationEffectOrAnimationEffectSequence(const AnimationEffectOrAnimationEffectSequence&);
  ~AnimationEffectOrAnimationEffectSequence();
  AnimationEffectOrAnimationEffectSequence& operator=(const AnimationEffectOrAnimationEffectSequence&);
  void Trace(blink::Visitor*);

 private:
  enum class SpecificType {
    kNone,
    kAnimationEffect,
    kAnimationEffectSequence,
  };
  SpecificType type_;

  Member<AnimationEffect> animation_effect_;
  HeapVector<Member<AnimationEffect>> animation_effect_sequence_;

  friend MODULES_EXPORT v8::Local<v8::Value> ToV8(const AnimationEffectOrAnimationEffectSequence&, v8::Local<v8::Object>, v8::Isolate*);
};

class V8AnimationEffectOrAnimationEffectSequence final {
 public:
  MODULES_EXPORT static void ToImpl(v8::Isolate*, v8::Local<v8::Value>, AnimationEffectOrAnimationEffectSequence&, UnionTypeConversionMode, ExceptionState&);
};

MODULES_EXPORT v8::Local<v8::Value> ToV8(const AnimationEffectOrAnimationEffectSequence&, v8::Local<v8::Object>, v8::Isolate*);

template <class CallbackInfo>
inline void V8SetReturnValue(const CallbackInfo& callbackInfo, AnimationEffectOrAnimationEffectSequence& impl) {
  V8SetReturnValue(callbackInfo, ToV8(impl, callbackInfo.Holder(), callbackInfo.GetIsolate()));
}

template <class CallbackInfo>
inline void V8SetReturnValue(const CallbackInfo& callbackInfo, AnimationEffectOrAnimationEffectSequence& impl, v8::Local<v8::Object> creationContext) {
  V8SetReturnValue(callbackInfo, ToV8(impl, creationContext, callbackInfo.GetIsolate()));
}

template <>
struct NativeValueTraits<AnimationEffectOrAnimationEffectSequence> : public NativeValueTraitsBase<AnimationEffectOrAnimationEffectSequence> {
  MODULES_EXPORT static AnimationEffectOrAnimationEffectSequence NativeValue(v8::Isolate*, v8::Local<v8::Value>, ExceptionState&);
  MODULES_EXPORT static AnimationEffectOrAnimationEffectSequence NullValue() { return AnimationEffectOrAnimationEffectSequence(); }
};

template <>
struct V8TypeOf<AnimationEffectOrAnimationEffectSequence> {
  typedef V8AnimationEffectOrAnimationEffectSequence Type;
};

}  // namespace blink

// We need to set canInitializeWithMemset=true because HeapVector supports
// items that can initialize with memset or have a vtable. It is safe to
// set canInitializeWithMemset=true for a union type object in practice.
// See https://codereview.chromium.org/1118993002/#msg5 for more details.
WTF_ALLOW_MOVE_AND_INIT_WITH_MEM_FUNCTIONS(blink::AnimationEffectOrAnimationEffectSequence)

#endif  // THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_ANIMATION_EFFECT_OR_ANIMATION_EFFECT_SEQUENCE_H_
