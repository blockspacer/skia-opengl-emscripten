// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/core/timing/performance_measure_options.h"

namespace blink {

PerformanceMeasureOptions::PerformanceMeasureOptions() {
}

PerformanceMeasureOptions::~PerformanceMeasureOptions() = default;

void PerformanceMeasureOptions::setDetail(ScriptValue value) {
  detail_ = value;
}

void PerformanceMeasureOptions::setEndTime(const StringOrDouble& value) {
  end_time_ = value;
}

void PerformanceMeasureOptions::setEndTimeToNull() {
  end_time_ = StringOrDouble();
}

void PerformanceMeasureOptions::setStartTime(const StringOrDouble& value) {
  start_time_ = value;
}

void PerformanceMeasureOptions::setStartTimeToNull() {
  start_time_ = StringOrDouble();
}

void PerformanceMeasureOptions::Trace(blink::Visitor* visitor) {
  visitor->Trace(end_time_);
  visitor->Trace(start_time_);
  IDLDictionaryBase::Trace(visitor);
}

}  // namespace blink
