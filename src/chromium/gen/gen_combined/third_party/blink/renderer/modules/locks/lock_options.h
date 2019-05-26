// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_LOCKS_LOCK_OPTIONS_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_LOCKS_LOCK_OPTIONS_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class AbortSignal;

class MODULES_EXPORT LockOptions : public IDLDictionaryBase {
 public:
  static LockOptions* Create() { return MakeGarbageCollected<LockOptions>(); }

  LockOptions();
  virtual ~LockOptions();

  bool hasIfAvailable() const { return has_if_available_; }
  bool ifAvailable() const {
    DCHECK(has_if_available_);
    return if_available_;
  }
  inline void setIfAvailable(bool);

  bool hasMode() const { return !mode_.IsNull(); }
  const String& mode() const {
    return mode_;
  }
  inline void setMode(const String&);

  bool hasSignal() const { return signal_; }
  AbortSignal* signal() const {
    return signal_;
  }
  inline void setSignal(AbortSignal*);

  bool hasSteal() const { return has_steal_; }
  bool steal() const {
    DCHECK(has_steal_);
    return steal_;
  }
  inline void setSteal(bool);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_if_available_ = false;
  bool has_steal_ = false;

  bool if_available_;
  String mode_;
  Member<AbortSignal> signal_;
  bool steal_;

  friend class V8LockOptions;
};

void LockOptions::setIfAvailable(bool value) {
  if_available_ = value;
  has_if_available_ = true;
}

void LockOptions::setMode(const String& value) {
  mode_ = value;
}

void LockOptions::setSignal(AbortSignal* value) {
  signal_ = value;
}

void LockOptions::setSteal(bool value) {
  steal_ = value;
  has_steal_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_LOCKS_LOCK_OPTIONS_H_
