// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_DOM_IDLE_REQUEST_OPTIONS_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_DOM_IDLE_REQUEST_OPTIONS_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class CORE_EXPORT IdleRequestOptions : public IDLDictionaryBase {
 public:
  static IdleRequestOptions* Create() { return MakeGarbageCollected<IdleRequestOptions>(); }

  IdleRequestOptions();
  virtual ~IdleRequestOptions();

  bool hasTimeout() const { return has_timeout_; }
  uint32_t timeout() const {
    DCHECK(has_timeout_);
    return timeout_;
  }
  inline void setTimeout(uint32_t);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_timeout_ = false;

  uint32_t timeout_;

  friend class V8IdleRequestOptions;
};

void IdleRequestOptions::setTimeout(uint32_t value) {
  timeout_ = value;
  has_timeout_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_DOM_IDLE_REQUEST_OPTIONS_H_
