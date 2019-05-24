// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_PEERCONNECTION_RTC_ICE_SERVER_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_PEERCONNECTION_RTC_ICE_SERVER_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/bindings/core/v8/string_or_string_sequence.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"
#include "third_party/blink/renderer/platform/wtf/vector.h"

namespace blink {

class MODULES_EXPORT RTCIceServer : public IDLDictionaryBase {
 public:
  static RTCIceServer* Create() { return MakeGarbageCollected<RTCIceServer>(); }

  RTCIceServer();
  virtual ~RTCIceServer();

  bool hasCredential() const { return !credential_.IsNull(); }
  const String& credential() const {
    return credential_;
  }
  inline void setCredential(const String&);

  bool hasURL() const { return !url_.IsNull(); }
  const String& url() const {
    return url_;
  }
  inline void setURL(const String&);

  bool hasURLs() const { return !urls_.IsNull(); }
  const StringOrStringSequence& urls() const {
    return urls_;
  }
  void setURLs(const StringOrStringSequence&);

  bool hasUsername() const { return !username_.IsNull(); }
  const String& username() const {
    return username_;
  }
  inline void setUsername(const String&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:

  String credential_;
  String url_;
  StringOrStringSequence urls_;
  String username_;

  friend class V8RTCIceServer;
};

void RTCIceServer::setCredential(const String& value) {
  credential_ = value;
}

void RTCIceServer::setURL(const String& value) {
  url_ = value;
}

void RTCIceServer::setUsername(const String& value) {
  username_ = value;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_PEERCONNECTION_RTC_ICE_SERVER_H_
