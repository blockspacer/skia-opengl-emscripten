// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_PEERCONNECTION_RTC_ICE_CANDIDATE_PAIR_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_PEERCONNECTION_RTC_ICE_CANDIDATE_PAIR_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class RTCIceCandidate;

class MODULES_EXPORT RTCIceCandidatePair : public IDLDictionaryBase {
 public:
  static RTCIceCandidatePair* Create() { return MakeGarbageCollected<RTCIceCandidatePair>(); }

  RTCIceCandidatePair();
  virtual ~RTCIceCandidatePair();

  bool hasLocal() const { return local_; }
  RTCIceCandidate* local() const {
    return local_;
  }
  inline void setLocal(RTCIceCandidate*);

  bool hasRemote() const { return remote_; }
  RTCIceCandidate* remote() const {
    return remote_;
  }
  inline void setRemote(RTCIceCandidate*);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:

  Member<RTCIceCandidate> local_;
  Member<RTCIceCandidate> remote_;

  friend class V8RTCIceCandidatePair;
};

void RTCIceCandidatePair::setLocal(RTCIceCandidate* value) {
  local_ = value;
}

void RTCIceCandidatePair::setRemote(RTCIceCandidate* value) {
  remote_ = value;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_PEERCONNECTION_RTC_ICE_CANDIDATE_PAIR_H_
