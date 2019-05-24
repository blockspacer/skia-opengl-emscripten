// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_POINT_2D_SEQUENCE_OR_CONSTRAIN_POINT_2D_PARAMETERS_H_
#define THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_POINT_2D_SEQUENCE_OR_CONSTRAIN_POINT_2D_PARAMETERS_H_

#include "base/optional.h"
#include "third_party/blink/renderer/bindings/core/v8/dictionary.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_binding_for_core.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_constrain_point_2d_parameters.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_point_2d.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class MODULES_EXPORT Point2DSequenceOrConstrainPoint2DParameters final {
  DISALLOW_NEW();
 public:
  Point2DSequenceOrConstrainPoint2DParameters();
  bool IsNull() const { return type_ == SpecificType::kNone; }

  bool IsConstrainPoint2DParameters() const { return type_ == SpecificType::kConstrainPoint2DParameters; }
  ConstrainPoint2DParameters* GetAsConstrainPoint2DParameters() const;
  void SetConstrainPoint2DParameters(ConstrainPoint2DParameters*);
  static Point2DSequenceOrConstrainPoint2DParameters FromConstrainPoint2DParameters(ConstrainPoint2DParameters*);

  bool IsPoint2DSequence() const { return type_ == SpecificType::kPoint2DSequence; }
  const HeapVector<Member<Point2D>>& GetAsPoint2DSequence() const;
  void SetPoint2DSequence(const HeapVector<Member<Point2D>>&);
  static Point2DSequenceOrConstrainPoint2DParameters FromPoint2DSequence(const HeapVector<Member<Point2D>>&);

  Point2DSequenceOrConstrainPoint2DParameters(const Point2DSequenceOrConstrainPoint2DParameters&);
  ~Point2DSequenceOrConstrainPoint2DParameters();
  Point2DSequenceOrConstrainPoint2DParameters& operator=(const Point2DSequenceOrConstrainPoint2DParameters&);
  void Trace(blink::Visitor*);

 private:
  enum class SpecificType {
    kNone,
    kConstrainPoint2DParameters,
    kPoint2DSequence,
  };
  SpecificType type_;

  Member<ConstrainPoint2DParameters> constrain_point_2d_parameters_;
  HeapVector<Member<Point2D>> point_2d_sequence_;

  friend MODULES_EXPORT v8::Local<v8::Value> ToV8(const Point2DSequenceOrConstrainPoint2DParameters&, v8::Local<v8::Object>, v8::Isolate*);
};

class V8Point2DSequenceOrConstrainPoint2DParameters final {
 public:
  MODULES_EXPORT static void ToImpl(v8::Isolate*, v8::Local<v8::Value>, Point2DSequenceOrConstrainPoint2DParameters&, UnionTypeConversionMode, ExceptionState&);
};

MODULES_EXPORT v8::Local<v8::Value> ToV8(const Point2DSequenceOrConstrainPoint2DParameters&, v8::Local<v8::Object>, v8::Isolate*);

template <class CallbackInfo>
inline void V8SetReturnValue(const CallbackInfo& callbackInfo, Point2DSequenceOrConstrainPoint2DParameters& impl) {
  V8SetReturnValue(callbackInfo, ToV8(impl, callbackInfo.Holder(), callbackInfo.GetIsolate()));
}

template <class CallbackInfo>
inline void V8SetReturnValue(const CallbackInfo& callbackInfo, Point2DSequenceOrConstrainPoint2DParameters& impl, v8::Local<v8::Object> creationContext) {
  V8SetReturnValue(callbackInfo, ToV8(impl, creationContext, callbackInfo.GetIsolate()));
}

template <>
struct NativeValueTraits<Point2DSequenceOrConstrainPoint2DParameters> : public NativeValueTraitsBase<Point2DSequenceOrConstrainPoint2DParameters> {
  MODULES_EXPORT static Point2DSequenceOrConstrainPoint2DParameters NativeValue(v8::Isolate*, v8::Local<v8::Value>, ExceptionState&);
  MODULES_EXPORT static Point2DSequenceOrConstrainPoint2DParameters NullValue() { return Point2DSequenceOrConstrainPoint2DParameters(); }
};

template <>
struct V8TypeOf<Point2DSequenceOrConstrainPoint2DParameters> {
  typedef V8Point2DSequenceOrConstrainPoint2DParameters Type;
};

}  // namespace blink

// We need to set canInitializeWithMemset=true because HeapVector supports
// items that can initialize with memset or have a vtable. It is safe to
// set canInitializeWithMemset=true for a union type object in practice.
// See https://codereview.chromium.org/1118993002/#msg5 for more details.
WTF_ALLOW_MOVE_AND_INIT_WITH_MEM_FUNCTIONS(blink::Point2DSequenceOrConstrainPoint2DParameters)

#endif  // THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_POINT_2D_SEQUENCE_OR_CONSTRAIN_POINT_2D_PARAMETERS_H_
