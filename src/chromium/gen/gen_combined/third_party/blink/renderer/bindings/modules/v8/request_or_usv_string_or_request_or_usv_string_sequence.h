// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_REQUEST_OR_USV_STRING_OR_REQUEST_OR_USV_STRING_SEQUENCE_H_
#define THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_REQUEST_OR_USV_STRING_OR_REQUEST_OR_USV_STRING_SEQUENCE_H_

#include "base/optional.h"
#include "third_party/blink/renderer/bindings/core/v8/dictionary.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_binding_for_core.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class Request;
class RequestOrUSVString;

class MODULES_EXPORT RequestOrUSVStringOrRequestOrUSVStringSequence final {
  DISALLOW_NEW();
 public:
  RequestOrUSVStringOrRequestOrUSVStringSequence();
  bool IsNull() const { return type_ == SpecificType::kNone; }

  bool IsRequest() const { return type_ == SpecificType::kRequest; }
  Request* GetAsRequest() const;
  void SetRequest(Request*);
  static RequestOrUSVStringOrRequestOrUSVStringSequence FromRequest(Request*);

  bool IsRequestOrUSVStringSequence() const { return type_ == SpecificType::kRequestOrUSVStringSequence; }
  const HeapVector<RequestOrUSVString>& GetAsRequestOrUSVStringSequence() const;
  void SetRequestOrUSVStringSequence(const HeapVector<RequestOrUSVString>&);
  static RequestOrUSVStringOrRequestOrUSVStringSequence FromRequestOrUSVStringSequence(const HeapVector<RequestOrUSVString>&);

  bool IsUSVString() const { return type_ == SpecificType::kUSVString; }
  const String& GetAsUSVString() const;
  void SetUSVString(const String&);
  static RequestOrUSVStringOrRequestOrUSVStringSequence FromUSVString(const String&);

  RequestOrUSVStringOrRequestOrUSVStringSequence(const RequestOrUSVStringOrRequestOrUSVStringSequence&);
  ~RequestOrUSVStringOrRequestOrUSVStringSequence();
  RequestOrUSVStringOrRequestOrUSVStringSequence& operator=(const RequestOrUSVStringOrRequestOrUSVStringSequence&);
  void Trace(blink::Visitor*);

 private:
  enum class SpecificType {
    kNone,
    kRequest,
    kRequestOrUSVStringSequence,
    kUSVString,
  };
  SpecificType type_;

  Member<Request> request_;
  HeapVector<RequestOrUSVString> request_or_usv_string_sequence_;
  String usv_string_;

  friend MODULES_EXPORT v8::Local<v8::Value> ToV8(const RequestOrUSVStringOrRequestOrUSVStringSequence&, v8::Local<v8::Object>, v8::Isolate*);
};

class V8RequestOrUSVStringOrRequestOrUSVStringSequence final {
 public:
  MODULES_EXPORT static void ToImpl(v8::Isolate*, v8::Local<v8::Value>, RequestOrUSVStringOrRequestOrUSVStringSequence&, UnionTypeConversionMode, ExceptionState&);
};

MODULES_EXPORT v8::Local<v8::Value> ToV8(const RequestOrUSVStringOrRequestOrUSVStringSequence&, v8::Local<v8::Object>, v8::Isolate*);

template <class CallbackInfo>
inline void V8SetReturnValue(const CallbackInfo& callbackInfo, RequestOrUSVStringOrRequestOrUSVStringSequence& impl) {
  V8SetReturnValue(callbackInfo, ToV8(impl, callbackInfo.Holder(), callbackInfo.GetIsolate()));
}

template <class CallbackInfo>
inline void V8SetReturnValue(const CallbackInfo& callbackInfo, RequestOrUSVStringOrRequestOrUSVStringSequence& impl, v8::Local<v8::Object> creationContext) {
  V8SetReturnValue(callbackInfo, ToV8(impl, creationContext, callbackInfo.GetIsolate()));
}

template <>
struct NativeValueTraits<RequestOrUSVStringOrRequestOrUSVStringSequence> : public NativeValueTraitsBase<RequestOrUSVStringOrRequestOrUSVStringSequence> {
  MODULES_EXPORT static RequestOrUSVStringOrRequestOrUSVStringSequence NativeValue(v8::Isolate*, v8::Local<v8::Value>, ExceptionState&);
  MODULES_EXPORT static RequestOrUSVStringOrRequestOrUSVStringSequence NullValue() { return RequestOrUSVStringOrRequestOrUSVStringSequence(); }
};

template <>
struct V8TypeOf<RequestOrUSVStringOrRequestOrUSVStringSequence> {
  typedef V8RequestOrUSVStringOrRequestOrUSVStringSequence Type;
};

}  // namespace blink

// We need to set canInitializeWithMemset=true because HeapVector supports
// items that can initialize with memset or have a vtable. It is safe to
// set canInitializeWithMemset=true for a union type object in practice.
// See https://codereview.chromium.org/1118993002/#msg5 for more details.
WTF_ALLOW_MOVE_AND_INIT_WITH_MEM_FUNCTIONS(blink::RequestOrUSVStringOrRequestOrUSVStringSequence)

#endif  // THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_REQUEST_OR_USV_STRING_OR_REQUEST_OR_USV_STRING_SEQUENCE_H_
