// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_PATH_2D_OR_STRING_H_
#define THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_PATH_2D_OR_STRING_H_

#include "base/optional.h"
#include "third_party/blink/renderer/bindings/core/v8/dictionary.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_binding_for_core.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class Path2D;

class MODULES_EXPORT Path2DOrString final {
  DISALLOW_NEW();
 public:
  Path2DOrString();
  bool IsNull() const { return type_ == SpecificType::kNone; }

  bool IsPath2D() const { return type_ == SpecificType::kPath2D; }
  Path2D* GetAsPath2D() const;
  void SetPath2D(Path2D*);
  static Path2DOrString FromPath2D(Path2D*);

  bool IsString() const { return type_ == SpecificType::kString; }
  const String& GetAsString() const;
  void SetString(const String&);
  static Path2DOrString FromString(const String&);

  Path2DOrString(const Path2DOrString&);
  ~Path2DOrString();
  Path2DOrString& operator=(const Path2DOrString&);
  void Trace(blink::Visitor*);

 private:
  enum class SpecificType {
    kNone,
    kPath2D,
    kString,
  };
  SpecificType type_;

  Member<Path2D> path_2d_;
  String string_;

  friend MODULES_EXPORT v8::Local<v8::Value> ToV8(const Path2DOrString&, v8::Local<v8::Object>, v8::Isolate*);
};

class V8Path2DOrString final {
 public:
  MODULES_EXPORT static void ToImpl(v8::Isolate*, v8::Local<v8::Value>, Path2DOrString&, UnionTypeConversionMode, ExceptionState&);
};

MODULES_EXPORT v8::Local<v8::Value> ToV8(const Path2DOrString&, v8::Local<v8::Object>, v8::Isolate*);

template <class CallbackInfo>
inline void V8SetReturnValue(const CallbackInfo& callbackInfo, Path2DOrString& impl) {
  V8SetReturnValue(callbackInfo, ToV8(impl, callbackInfo.Holder(), callbackInfo.GetIsolate()));
}

template <class CallbackInfo>
inline void V8SetReturnValue(const CallbackInfo& callbackInfo, Path2DOrString& impl, v8::Local<v8::Object> creationContext) {
  V8SetReturnValue(callbackInfo, ToV8(impl, creationContext, callbackInfo.GetIsolate()));
}

template <>
struct NativeValueTraits<Path2DOrString> : public NativeValueTraitsBase<Path2DOrString> {
  MODULES_EXPORT static Path2DOrString NativeValue(v8::Isolate*, v8::Local<v8::Value>, ExceptionState&);
  MODULES_EXPORT static Path2DOrString NullValue() { return Path2DOrString(); }
};

template <>
struct V8TypeOf<Path2DOrString> {
  typedef V8Path2DOrString Type;
};

}  // namespace blink

// We need to set canInitializeWithMemset=true because HeapVector supports
// items that can initialize with memset or have a vtable. It is safe to
// set canInitializeWithMemset=true for a union type object in practice.
// See https://codereview.chromium.org/1118993002/#msg5 for more details.
WTF_ALLOW_MOVE_AND_INIT_WITH_MEM_FUNCTIONS(blink::Path2DOrString)

#endif  // THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_PATH_2D_OR_STRING_H_
