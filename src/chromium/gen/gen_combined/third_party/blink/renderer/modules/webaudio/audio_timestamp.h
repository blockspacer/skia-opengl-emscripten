// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_WEBAUDIO_AUDIO_TIMESTAMP_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_WEBAUDIO_AUDIO_TIMESTAMP_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class MODULES_EXPORT AudioTimestamp : public IDLDictionaryBase {
 public:
  static AudioTimestamp* Create() { return MakeGarbageCollected<AudioTimestamp>(); }

  AudioTimestamp();
  virtual ~AudioTimestamp();

  bool hasContextTime() const { return has_context_time_; }
  double contextTime() const {
    DCHECK(has_context_time_);
    return context_time_;
  }
  inline void setContextTime(double);

  bool hasPerformanceTime() const { return has_performance_time_; }
  double performanceTime() const {
    DCHECK(has_performance_time_);
    return performance_time_;
  }
  inline void setPerformanceTime(double);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_context_time_ = false;
  bool has_performance_time_ = false;

  double context_time_;
  double performance_time_;

  friend class V8AudioTimestamp;
};

void AudioTimestamp::setContextTime(double value) {
  context_time_ = value;
  has_context_time_ = true;
}

void AudioTimestamp::setPerformanceTime(double value) {
  performance_time_ = value;
  has_performance_time_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_WEBAUDIO_AUDIO_TIMESTAMP_H_
