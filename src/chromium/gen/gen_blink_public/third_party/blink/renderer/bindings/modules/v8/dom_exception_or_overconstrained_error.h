// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_DOM_EXCEPTION_OR_OVERCONSTRAINED_ERROR_H_
#define THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_DOM_EXCEPTION_OR_OVERCONSTRAINED_ERROR_H_

#include "base/optional.h"
#include "third_party/blink/renderer/bindings/core/v8/dictionary.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_binding_for_core.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class DOMException;
class OverconstrainedError;

class MODULES_EXPORT DOMExceptionOrOverconstrainedError final {
  DISALLOW_NEW();
 public:
  DOMExceptionOrOverconstrainedError();
  bool IsNull() const { return type_ == SpecificType::kNone; }

  bool IsDOMException() const { return type_ == SpecificType::kDOMException; }
  DOMException* GetAsDOMException() const;
  void SetDOMException(DOMException*);
  static DOMExceptionOrOverconstrainedError FromDOMException(DOMException*);

  bool IsOverconstrainedError() const { return type_ == SpecificType::kOverconstrainedError; }
  OverconstrainedError* GetAsOverconstrainedError() const;
  void SetOverconstrainedError(OverconstrainedError*);
  static DOMExceptionOrOverconstrainedError FromOverconstrainedError(OverconstrainedError*);

  DOMExceptionOrOverconstrainedError(const DOMExceptionOrOverconstrainedError&);
  ~DOMExceptionOrOverconstrainedError();
  DOMExceptionOrOverconstrainedError& operator=(const DOMExceptionOrOverconstrainedError&);
  void Trace(blink::Visitor*);

 private:
  enum class SpecificType {
    kNone,
    kDOMException,
    kOverconstrainedError,
  };
  SpecificType type_;

  Member<DOMException> dom_exception_;
  Member<OverconstrainedError> overconstrained_error_;

  friend MODULES_EXPORT v8::Local<v8::Value> ToV8(const DOMExceptionOrOverconstrainedError&, v8::Local<v8::Object>, v8::Isolate*);
};

class V8DOMExceptionOrOverconstrainedError final {
 public:
  MODULES_EXPORT static void ToImpl(v8::Isolate*, v8::Local<v8::Value>, DOMExceptionOrOverconstrainedError&, UnionTypeConversionMode, ExceptionState&);
};

MODULES_EXPORT v8::Local<v8::Value> ToV8(const DOMExceptionOrOverconstrainedError&, v8::Local<v8::Object>, v8::Isolate*);

template <class CallbackInfo>
inline void V8SetReturnValue(const CallbackInfo& callbackInfo, DOMExceptionOrOverconstrainedError& impl) {
  V8SetReturnValue(callbackInfo, ToV8(impl, callbackInfo.Holder(), callbackInfo.GetIsolate()));
}

template <class CallbackInfo>
inline void V8SetReturnValue(const CallbackInfo& callbackInfo, DOMExceptionOrOverconstrainedError& impl, v8::Local<v8::Object> creationContext) {
  V8SetReturnValue(callbackInfo, ToV8(impl, creationContext, callbackInfo.GetIsolate()));
}

template <>
struct NativeValueTraits<DOMExceptionOrOverconstrainedError> : public NativeValueTraitsBase<DOMExceptionOrOverconstrainedError> {
  MODULES_EXPORT static DOMExceptionOrOverconstrainedError NativeValue(v8::Isolate*, v8::Local<v8::Value>, ExceptionState&);
  MODULES_EXPORT static DOMExceptionOrOverconstrainedError NullValue() { return DOMExceptionOrOverconstrainedError(); }
};

template <>
struct V8TypeOf<DOMExceptionOrOverconstrainedError> {
  typedef V8DOMExceptionOrOverconstrainedError Type;
};

}  // namespace blink

// We need to set canInitializeWithMemset=true because HeapVector supports
// items that can initialize with memset or have a vtable. It is safe to
// set canInitializeWithMemset=true for a union type object in practice.
// See https://codereview.chromium.org/1118993002/#msg5 for more details.
WTF_ALLOW_MOVE_AND_INIT_WITH_MEM_FUNCTIONS(blink::DOMExceptionOrOverconstrainedError)

#endif  // THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_DOM_EXCEPTION_OR_OVERCONSTRAINED_ERROR_H_
