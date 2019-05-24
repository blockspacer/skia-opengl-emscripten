// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_TIMING_PERFORMANCE_MEASURE_OPTIONS_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_TIMING_PERFORMANCE_MEASURE_OPTIONS_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/bindings/core/v8/script_value.h"
#include "third_party/blink/renderer/bindings/core/v8/string_or_double.h"
#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class CORE_EXPORT PerformanceMeasureOptions : public IDLDictionaryBase {
 public:
  static PerformanceMeasureOptions* Create() { return MakeGarbageCollected<PerformanceMeasureOptions>(); }

  PerformanceMeasureOptions();
  virtual ~PerformanceMeasureOptions();

  bool hasDetail() const { return !(detail_.IsEmpty() || detail_.IsUndefined()); }
  ScriptValue detail() const {
    return detail_;
  }
  void setDetail(ScriptValue);

  bool hasEndTime() const { return !end_time_.IsNull(); }
  const StringOrDouble& endTime() const {
    return end_time_;
  }
  void setEndTime(const StringOrDouble&);
  void setEndTimeToNull();

  bool hasStartTime() const { return !start_time_.IsNull(); }
  const StringOrDouble& startTime() const {
    return start_time_;
  }
  void setStartTime(const StringOrDouble&);
  void setStartTimeToNull();

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:

  ScriptValue detail_;
  StringOrDouble end_time_;
  StringOrDouble start_time_;

  friend class V8PerformanceMeasureOptions;
};

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_TIMING_PERFORMANCE_MEASURE_OPTIONS_H_
