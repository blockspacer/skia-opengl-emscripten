// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_FRAME_USER_AGENT_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_FRAME_USER_AGENT_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class CORE_EXPORT UserAgent : public IDLDictionaryBase {
 public:
  static UserAgent* Create() { return MakeGarbageCollected<UserAgent>(); }

  UserAgent();
  virtual ~UserAgent();

  bool hasArchitecture() const { return !architecture_.IsNull(); }
  const String& architecture() const {
    return architecture_;
  }
  inline void setArchitecture(const String&);

  bool hasBrand() const { return !brand_.IsNull(); }
  const String& brand() const {
    return brand_;
  }
  inline void setBrand(const String&);

  bool hasModel() const { return !model_.IsNull(); }
  const String& model() const {
    return model_;
  }
  inline void setModel(const String&);

  bool hasPlatform() const { return !platform_.IsNull(); }
  const String& platform() const {
    return platform_;
  }
  inline void setPlatform(const String&);

  bool hasVersion() const { return !version_.IsNull(); }
  const String& version() const {
    return version_;
  }
  inline void setVersion(const String&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:

  String architecture_;
  String brand_;
  String model_;
  String platform_;
  String version_;

  friend class V8UserAgent;
};

void UserAgent::setArchitecture(const String& value) {
  architecture_ = value;
}

void UserAgent::setBrand(const String& value) {
  brand_ = value;
}

void UserAgent::setModel(const String& value) {
  model_ = value;
}

void UserAgent::setPlatform(const String& value) {
  platform_ = value;
}

void UserAgent::setVersion(const String& value) {
  version_ = value;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_FRAME_USER_AGENT_H_
