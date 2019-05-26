// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_FETCH_REQUEST_INIT_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_FETCH_REQUEST_INIT_H_

#include "third_party/blink/renderer/bindings/core/v8/byte_string_sequence_sequence_or_byte_string_byte_string_record.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/bindings/core/v8/script_value.h"
#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"
#include "third_party/blink/renderer/platform/wtf/vector.h"

namespace blink {

class AbortSignal;

class CORE_EXPORT RequestInit : public IDLDictionaryBase {
 public:
  static RequestInit* Create() { return MakeGarbageCollected<RequestInit>(); }

  RequestInit();
  virtual ~RequestInit();

  bool hasBody() const { return !(body_.IsEmpty() || body_.IsUndefined()); }
  ScriptValue body() const {
    return body_;
  }
  void setBody(ScriptValue);

  bool hasCache() const { return !cache_.IsNull(); }
  const String& cache() const {
    return cache_;
  }
  inline void setCache(const String&);

  bool hasCredentials() const { return !credentials_.IsNull(); }
  const String& credentials() const {
    return credentials_;
  }
  inline void setCredentials(const String&);

  bool hasHeaders() const { return !headers_.IsNull(); }
  const ByteStringSequenceSequenceOrByteStringByteStringRecord& headers() const {
    return headers_;
  }
  void setHeaders(const ByteStringSequenceSequenceOrByteStringByteStringRecord&);

  bool hasImportance() const { return !importance_.IsNull(); }
  const String& importance() const {
    return importance_;
  }
  inline void setImportance(const String&);

  bool hasIntegrity() const { return !integrity_.IsNull(); }
  const String& integrity() const {
    return integrity_;
  }
  inline void setIntegrity(const String&);

  bool hasKeepalive() const { return has_keepalive_; }
  bool keepalive() const {
    DCHECK(has_keepalive_);
    return keepalive_;
  }
  inline void setKeepalive(bool);

  bool hasMethod() const { return !method_.IsNull(); }
  const String& method() const {
    return method_;
  }
  inline void setMethod(const String&);

  bool hasMode() const { return !mode_.IsNull(); }
  const String& mode() const {
    return mode_;
  }
  inline void setMode(const String&);

  bool hasRedirect() const { return !redirect_.IsNull(); }
  const String& redirect() const {
    return redirect_;
  }
  inline void setRedirect(const String&);

  bool hasReferrer() const { return !referrer_.IsNull(); }
  const String& referrer() const {
    return referrer_;
  }
  inline void setReferrer(const String&);

  bool hasReferrerPolicy() const { return !referrer_policy_.IsNull(); }
  const String& referrerPolicy() const {
    return referrer_policy_;
  }
  inline void setReferrerPolicy(const String&);

  bool hasSignal() const { return has_signal_; }
  AbortSignal* signal() const {
    return signal_;
  }
  inline void setSignal(AbortSignal*);
  inline void setSignalToNull();

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_keepalive_ = false;
  bool has_signal_ = false;

  ScriptValue body_;
  String cache_;
  String credentials_;
  ByteStringSequenceSequenceOrByteStringByteStringRecord headers_;
  String importance_;
  String integrity_;
  bool keepalive_;
  String method_;
  String mode_;
  String redirect_;
  String referrer_;
  String referrer_policy_;
  Member<AbortSignal> signal_;

  friend class V8RequestInit;
};

void RequestInit::setCache(const String& value) {
  cache_ = value;
}

void RequestInit::setCredentials(const String& value) {
  credentials_ = value;
}

void RequestInit::setImportance(const String& value) {
  importance_ = value;
}

void RequestInit::setIntegrity(const String& value) {
  integrity_ = value;
}

void RequestInit::setKeepalive(bool value) {
  keepalive_ = value;
  has_keepalive_ = true;
}

void RequestInit::setMethod(const String& value) {
  method_ = value;
}

void RequestInit::setMode(const String& value) {
  mode_ = value;
}

void RequestInit::setRedirect(const String& value) {
  redirect_ = value;
}

void RequestInit::setReferrer(const String& value) {
  referrer_ = value;
}

void RequestInit::setReferrerPolicy(const String& value) {
  referrer_policy_ = value;
}

void RequestInit::setSignal(AbortSignal* value) {
  signal_ = value;
  has_signal_ = true;
}

void RequestInit::setSignalToNull() {
  signal_ = Member<AbortSignal>();
  has_signal_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_FETCH_REQUEST_INIT_H_
