// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_RTC_ICE_CANDIDATE_INIT_OR_RTC_ICE_CANDIDATE_H_
#define THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_RTC_ICE_CANDIDATE_INIT_OR_RTC_ICE_CANDIDATE_H_

#include "base/optional.h"
#include "third_party/blink/renderer/bindings/core/v8/dictionary.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_binding_for_core.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_ice_candidate_init.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class RTCIceCandidate;

class MODULES_EXPORT RTCIceCandidateInitOrRTCIceCandidate final {
  DISALLOW_NEW();
 public:
  RTCIceCandidateInitOrRTCIceCandidate();
  bool IsNull() const { return type_ == SpecificType::kNone; }

  bool IsRTCIceCandidate() const { return type_ == SpecificType::kRTCIceCandidate; }
  RTCIceCandidate* GetAsRTCIceCandidate() const;
  void SetRTCIceCandidate(RTCIceCandidate*);
  static RTCIceCandidateInitOrRTCIceCandidate FromRTCIceCandidate(RTCIceCandidate*);

  bool IsRTCIceCandidateInit() const { return type_ == SpecificType::kRTCIceCandidateInit; }
  RTCIceCandidateInit* GetAsRTCIceCandidateInit() const;
  void SetRTCIceCandidateInit(RTCIceCandidateInit*);
  static RTCIceCandidateInitOrRTCIceCandidate FromRTCIceCandidateInit(RTCIceCandidateInit*);

  RTCIceCandidateInitOrRTCIceCandidate(const RTCIceCandidateInitOrRTCIceCandidate&);
  ~RTCIceCandidateInitOrRTCIceCandidate();
  RTCIceCandidateInitOrRTCIceCandidate& operator=(const RTCIceCandidateInitOrRTCIceCandidate&);
  void Trace(blink::Visitor*);

 private:
  enum class SpecificType {
    kNone,
    kRTCIceCandidate,
    kRTCIceCandidateInit,
  };
  SpecificType type_;

  Member<RTCIceCandidate> rtc_ice_candidate_;
  Member<RTCIceCandidateInit> rtc_ice_candidate_init_;

  friend MODULES_EXPORT v8::Local<v8::Value> ToV8(const RTCIceCandidateInitOrRTCIceCandidate&, v8::Local<v8::Object>, v8::Isolate*);
};

class V8RTCIceCandidateInitOrRTCIceCandidate final {
 public:
  MODULES_EXPORT static void ToImpl(v8::Isolate*, v8::Local<v8::Value>, RTCIceCandidateInitOrRTCIceCandidate&, UnionTypeConversionMode, ExceptionState&);
};

MODULES_EXPORT v8::Local<v8::Value> ToV8(const RTCIceCandidateInitOrRTCIceCandidate&, v8::Local<v8::Object>, v8::Isolate*);

template <class CallbackInfo>
inline void V8SetReturnValue(const CallbackInfo& callbackInfo, RTCIceCandidateInitOrRTCIceCandidate& impl) {
  V8SetReturnValue(callbackInfo, ToV8(impl, callbackInfo.Holder(), callbackInfo.GetIsolate()));
}

template <class CallbackInfo>
inline void V8SetReturnValue(const CallbackInfo& callbackInfo, RTCIceCandidateInitOrRTCIceCandidate& impl, v8::Local<v8::Object> creationContext) {
  V8SetReturnValue(callbackInfo, ToV8(impl, creationContext, callbackInfo.GetIsolate()));
}

template <>
struct NativeValueTraits<RTCIceCandidateInitOrRTCIceCandidate> : public NativeValueTraitsBase<RTCIceCandidateInitOrRTCIceCandidate> {
  MODULES_EXPORT static RTCIceCandidateInitOrRTCIceCandidate NativeValue(v8::Isolate*, v8::Local<v8::Value>, ExceptionState&);
  MODULES_EXPORT static RTCIceCandidateInitOrRTCIceCandidate NullValue() { return RTCIceCandidateInitOrRTCIceCandidate(); }
};

template <>
struct V8TypeOf<RTCIceCandidateInitOrRTCIceCandidate> {
  typedef V8RTCIceCandidateInitOrRTCIceCandidate Type;
};

}  // namespace blink

// We need to set canInitializeWithMemset=true because HeapVector supports
// items that can initialize with memset or have a vtable. It is safe to
// set canInitializeWithMemset=true for a union type object in practice.
// See https://codereview.chromium.org/1118993002/#msg5 for more details.
WTF_ALLOW_MOVE_AND_INIT_WITH_MEM_FUNCTIONS(blink::RTCIceCandidateInitOrRTCIceCandidate)

#endif  // THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_RTC_ICE_CANDIDATE_INIT_OR_RTC_ICE_CANDIDATE_H_
