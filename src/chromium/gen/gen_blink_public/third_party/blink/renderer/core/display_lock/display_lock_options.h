// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_DISPLAY_LOCK_DISPLAY_LOCK_OPTIONS_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_DISPLAY_LOCK_DISPLAY_LOCK_OPTIONS_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/vector.h"

namespace blink {

class CORE_EXPORT DisplayLockOptions : public IDLDictionaryBase {
 public:
  static DisplayLockOptions* Create() { return MakeGarbageCollected<DisplayLockOptions>(); }

  DisplayLockOptions();
  virtual ~DisplayLockOptions();

  bool hasActivatable() const { return has_activatable_; }
  bool activatable() const {
    DCHECK(has_activatable_);
    return activatable_;
  }
  inline void setActivatable(bool);

  bool hasSize() const { return has_size_; }
  const Vector<double>& size() const {
    DCHECK(has_size_);
    return size_;
  }
  void setSize(const Vector<double>&);

  bool hasTimeout() const { return has_timeout_; }
  double timeout() const {
    DCHECK(has_timeout_);
    return timeout_;
  }
  inline void setTimeout(double);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_activatable_ = false;
  bool has_size_ = false;
  bool has_timeout_ = false;

  bool activatable_;
  Vector<double> size_;
  double timeout_;

  friend class V8DisplayLockOptions;
};

void DisplayLockOptions::setActivatable(bool value) {
  activatable_ = value;
  has_activatable_ = true;
}

void DisplayLockOptions::setTimeout(double value) {
  timeout_ = value;
  has_timeout_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_DISPLAY_LOCK_DISPLAY_LOCK_OPTIONS_H_
