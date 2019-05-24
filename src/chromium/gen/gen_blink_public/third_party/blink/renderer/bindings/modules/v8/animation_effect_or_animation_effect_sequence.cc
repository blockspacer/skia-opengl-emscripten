// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/animation_effect_or_animation_effect_sequence.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_animation_effect.h"

namespace blink {

AnimationEffectOrAnimationEffectSequence::AnimationEffectOrAnimationEffectSequence() : type_(SpecificType::kNone) {}

AnimationEffect* AnimationEffectOrAnimationEffectSequence::GetAsAnimationEffect() const {
  DCHECK(IsAnimationEffect());
  return animation_effect_;
}

void AnimationEffectOrAnimationEffectSequence::SetAnimationEffect(AnimationEffect* value) {
  DCHECK(IsNull());
  animation_effect_ = value;
  type_ = SpecificType::kAnimationEffect;
}

AnimationEffectOrAnimationEffectSequence AnimationEffectOrAnimationEffectSequence::FromAnimationEffect(AnimationEffect* value) {
  AnimationEffectOrAnimationEffectSequence container;
  container.SetAnimationEffect(value);
  return container;
}

const HeapVector<Member<AnimationEffect>>& AnimationEffectOrAnimationEffectSequence::GetAsAnimationEffectSequence() const {
  DCHECK(IsAnimationEffectSequence());
  return animation_effect_sequence_;
}

void AnimationEffectOrAnimationEffectSequence::SetAnimationEffectSequence(const HeapVector<Member<AnimationEffect>>& value) {
  DCHECK(IsNull());
  animation_effect_sequence_ = value;
  type_ = SpecificType::kAnimationEffectSequence;
}

AnimationEffectOrAnimationEffectSequence AnimationEffectOrAnimationEffectSequence::FromAnimationEffectSequence(const HeapVector<Member<AnimationEffect>>& value) {
  AnimationEffectOrAnimationEffectSequence container;
  container.SetAnimationEffectSequence(value);
  return container;
}

AnimationEffectOrAnimationEffectSequence::AnimationEffectOrAnimationEffectSequence(const AnimationEffectOrAnimationEffectSequence&) = default;
AnimationEffectOrAnimationEffectSequence::~AnimationEffectOrAnimationEffectSequence() = default;
AnimationEffectOrAnimationEffectSequence& AnimationEffectOrAnimationEffectSequence::operator=(const AnimationEffectOrAnimationEffectSequence&) = default;

void AnimationEffectOrAnimationEffectSequence::Trace(blink::Visitor* visitor) {
  visitor->Trace(animation_effect_);
  visitor->Trace(animation_effect_sequence_);
}

void V8AnimationEffectOrAnimationEffectSequence::ToImpl(
    v8::Isolate* isolate,
    v8::Local<v8::Value> v8_value,
    AnimationEffectOrAnimationEffectSequence& impl,
    UnionTypeConversionMode conversion_mode,
    ExceptionState& exception_state) {
  if (v8_value.IsEmpty())
    return;

  if (conversion_mode == UnionTypeConversionMode::kNullable && IsUndefinedOrNull(v8_value))
    return;

  if (V8AnimationEffect::HasInstance(v8_value, isolate)) {
    AnimationEffect* cpp_value = V8AnimationEffect::ToImpl(v8::Local<v8::Object>::Cast(v8_value));
    impl.SetAnimationEffect(cpp_value);
    return;
  }

  if (HasCallableIteratorSymbol(isolate, v8_value, exception_state)) {
    HeapVector<Member<AnimationEffect>> cpp_value = NativeValueTraits<IDLSequence<AnimationEffect>>::NativeValue(isolate, v8_value, exception_state);
    if (exception_state.HadException())
      return;
    impl.SetAnimationEffectSequence(cpp_value);
    return;
  }

  exception_state.ThrowTypeError("The provided value is not of type '(AnimationEffect or sequence<AnimationEffect>)'");
}

v8::Local<v8::Value> ToV8(const AnimationEffectOrAnimationEffectSequence& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  switch (impl.type_) {
    case AnimationEffectOrAnimationEffectSequence::SpecificType::kNone:
      return v8::Null(isolate);
    case AnimationEffectOrAnimationEffectSequence::SpecificType::kAnimationEffect:
      return ToV8(impl.GetAsAnimationEffect(), creationContext, isolate);
    case AnimationEffectOrAnimationEffectSequence::SpecificType::kAnimationEffectSequence:
      return ToV8(impl.GetAsAnimationEffectSequence(), creationContext, isolate);
    default:
      NOTREACHED();
  }
  return v8::Local<v8::Value>();
}

AnimationEffectOrAnimationEffectSequence NativeValueTraits<AnimationEffectOrAnimationEffectSequence>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  AnimationEffectOrAnimationEffectSequence impl;
  V8AnimationEffectOrAnimationEffectSequence::ToImpl(isolate, value, impl, UnionTypeConversionMode::kNotNullable, exception_state);
  return impl;
}

}  // namespace blink
