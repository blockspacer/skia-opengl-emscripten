// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_PEERCONNECTION_RTC_ICE_GATHER_OPTIONS_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_PEERCONNECTION_RTC_ICE_GATHER_OPTIONS_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/modules/peerconnection/rtc_ice_server.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"
#include "third_party/blink/renderer/platform/wtf/vector.h"

namespace blink {

class MODULES_EXPORT RTCIceGatherOptions : public IDLDictionaryBase {
 public:
  static RTCIceGatherOptions* Create() { return MakeGarbageCollected<RTCIceGatherOptions>(); }

  RTCIceGatherOptions();
  virtual ~RTCIceGatherOptions();

  bool hasGatherPolicy() const { return !gather_policy_.IsNull(); }
  const String& gatherPolicy() const {
    return gather_policy_;
  }
  inline void setGatherPolicy(const String&);

  bool hasIceServers() const { return has_ice_servers_; }
  const HeapVector<Member<RTCIceServer>>& iceServers() const {
    DCHECK(has_ice_servers_);
    return ice_servers_;
  }
  void setIceServers(const HeapVector<Member<RTCIceServer>>&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_ice_servers_ = false;

  String gather_policy_;
  HeapVector<Member<RTCIceServer>> ice_servers_;

  friend class V8RTCIceGatherOptions;
};

void RTCIceGatherOptions::setGatherPolicy(const String& value) {
  gather_policy_ = value;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_PEERCONNECTION_RTC_ICE_GATHER_OPTIONS_H_
