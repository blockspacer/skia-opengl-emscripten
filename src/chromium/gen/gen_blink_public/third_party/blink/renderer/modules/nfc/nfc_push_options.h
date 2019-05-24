// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_NFC_NFC_PUSH_OPTIONS_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_NFC_NFC_PUSH_OPTIONS_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class MODULES_EXPORT NFCPushOptions : public IDLDictionaryBase {
 public:
  static NFCPushOptions* Create() { return MakeGarbageCollected<NFCPushOptions>(); }

  NFCPushOptions();
  virtual ~NFCPushOptions();

  bool hasIgnoreRead() const { return has_ignore_read_; }
  bool ignoreRead() const {
    DCHECK(has_ignore_read_);
    return ignore_read_;
  }
  inline void setIgnoreRead(bool);

  bool hasTarget() const { return !target_.IsNull(); }
  const String& target() const {
    return target_;
  }
  inline void setTarget(const String&);

  bool hasTimeout() const { return has_timeout_; }
  double timeout() const {
    DCHECK(has_timeout_);
    return timeout_;
  }
  inline void setTimeout(double);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_ignore_read_ = false;
  bool has_timeout_ = false;

  bool ignore_read_;
  String target_;
  double timeout_;

  friend class V8NFCPushOptions;
};

void NFCPushOptions::setIgnoreRead(bool value) {
  ignore_read_ = value;
  has_ignore_read_ = true;
}

void NFCPushOptions::setTarget(const String& value) {
  target_ = value;
}

void NFCPushOptions::setTimeout(double value) {
  timeout_ = value;
  has_timeout_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_NFC_NFC_PUSH_OPTIONS_H_
