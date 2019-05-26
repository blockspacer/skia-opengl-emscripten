// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_TIMING_PERFORMANCE_MARK_OPTIONS_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_TIMING_PERFORMANCE_MARK_OPTIONS_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/bindings/core/v8/script_value.h"
#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class CORE_EXPORT PerformanceMarkOptions : public IDLDictionaryBase {
 public:
  static PerformanceMarkOptions* Create() { return MakeGarbageCollected<PerformanceMarkOptions>(); }

  PerformanceMarkOptions();
  virtual ~PerformanceMarkOptions();

  bool hasDetail() const { return !(detail_.IsEmpty() || detail_.IsUndefined()); }
  ScriptValue detail() const {
    return detail_;
  }
  void setDetail(ScriptValue);

  bool hasStartTime() const { return has_start_time_; }
  double startTime() const {
    DCHECK(has_start_time_);
    return start_time_;
  }
  inline void setStartTime(double);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_start_time_ = false;

  ScriptValue detail_;
  double start_time_;

  friend class V8PerformanceMarkOptions;
};

void PerformanceMarkOptions::setStartTime(double value) {
  start_time_ = value;
  has_start_time_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_TIMING_PERFORMANCE_MARK_OPTIONS_H_
