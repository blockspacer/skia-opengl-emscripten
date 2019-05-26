// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_EVENTS_SECURITY_POLICY_VIOLATION_EVENT_INIT_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_EVENTS_SECURITY_POLICY_VIOLATION_EVENT_INIT_H_

#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/core/dom/events/event_init.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class CORE_EXPORT SecurityPolicyViolationEventInit : public EventInit {
 public:
  static SecurityPolicyViolationEventInit* Create() { return MakeGarbageCollected<SecurityPolicyViolationEventInit>(); }

  SecurityPolicyViolationEventInit();
  virtual ~SecurityPolicyViolationEventInit();

  bool hasBlockedURI() const { return !blocked_uri_.IsNull(); }
  const String& blockedURI() const {
    return blocked_uri_;
  }
  inline void setBlockedURI(const String&);

  bool hasColumnNumber() const { return has_column_number_; }
  int32_t columnNumber() const {
    DCHECK(has_column_number_);
    return column_number_;
  }
  inline void setColumnNumber(int32_t);

  bool hasDisposition() const { return !disposition_.IsNull(); }
  const String& disposition() const {
    return disposition_;
  }
  inline void setDisposition(const String&);

  bool hasDocumentURI() const { return !document_uri_.IsNull(); }
  const String& documentURI() const {
    return document_uri_;
  }
  inline void setDocumentURI(const String&);

  bool hasEffectiveDirective() const { return !effective_directive_.IsNull(); }
  const String& effectiveDirective() const {
    return effective_directive_;
  }
  inline void setEffectiveDirective(const String&);

  bool hasLineNumber() const { return has_line_number_; }
  int32_t lineNumber() const {
    DCHECK(has_line_number_);
    return line_number_;
  }
  inline void setLineNumber(int32_t);

  bool hasOriginalPolicy() const { return !original_policy_.IsNull(); }
  const String& originalPolicy() const {
    return original_policy_;
  }
  inline void setOriginalPolicy(const String&);

  bool hasReferrer() const { return !referrer_.IsNull(); }
  const String& referrer() const {
    return referrer_;
  }
  inline void setReferrer(const String&);

  bool hasSample() const { return !sample_.IsNull(); }
  const String& sample() const {
    return sample_;
  }
  inline void setSample(const String&);

  bool hasSourceFile() const { return !source_file_.IsNull(); }
  const String& sourceFile() const {
    return source_file_;
  }
  inline void setSourceFile(const String&);

  bool hasStatusCode() const { return has_status_code_; }
  uint16_t statusCode() const {
    DCHECK(has_status_code_);
    return status_code_;
  }
  inline void setStatusCode(uint16_t);

  bool hasViolatedDirective() const { return !violated_directive_.IsNull(); }
  const String& violatedDirective() const {
    return violated_directive_;
  }
  inline void setViolatedDirective(const String&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_column_number_ = false;
  bool has_line_number_ = false;
  bool has_status_code_ = false;

  String blocked_uri_;
  int32_t column_number_;
  String disposition_;
  String document_uri_;
  String effective_directive_;
  int32_t line_number_;
  String original_policy_;
  String referrer_;
  String sample_;
  String source_file_;
  uint16_t status_code_;
  String violated_directive_;

  friend class V8SecurityPolicyViolationEventInit;
};

void SecurityPolicyViolationEventInit::setBlockedURI(const String& value) {
  blocked_uri_ = value;
}

void SecurityPolicyViolationEventInit::setColumnNumber(int32_t value) {
  column_number_ = value;
  has_column_number_ = true;
}

void SecurityPolicyViolationEventInit::setDisposition(const String& value) {
  disposition_ = value;
}

void SecurityPolicyViolationEventInit::setDocumentURI(const String& value) {
  document_uri_ = value;
}

void SecurityPolicyViolationEventInit::setEffectiveDirective(const String& value) {
  effective_directive_ = value;
}

void SecurityPolicyViolationEventInit::setLineNumber(int32_t value) {
  line_number_ = value;
  has_line_number_ = true;
}

void SecurityPolicyViolationEventInit::setOriginalPolicy(const String& value) {
  original_policy_ = value;
}

void SecurityPolicyViolationEventInit::setReferrer(const String& value) {
  referrer_ = value;
}

void SecurityPolicyViolationEventInit::setSample(const String& value) {
  sample_ = value;
}

void SecurityPolicyViolationEventInit::setSourceFile(const String& value) {
  source_file_ = value;
}

void SecurityPolicyViolationEventInit::setStatusCode(uint16_t value) {
  status_code_ = value;
  has_status_code_ = true;
}

void SecurityPolicyViolationEventInit::setViolatedDirective(const String& value) {
  violated_directive_ = value;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_EVENTS_SECURITY_POLICY_VIOLATION_EVENT_INIT_H_
