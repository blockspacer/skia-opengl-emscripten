// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_WEBAUDIO_ANALYSER_OPTIONS_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_WEBAUDIO_ANALYSER_OPTIONS_H_

#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/modules/webaudio/audio_node_options.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class MODULES_EXPORT AnalyserOptions : public AudioNodeOptions {
 public:
  static AnalyserOptions* Create() { return MakeGarbageCollected<AnalyserOptions>(); }

  AnalyserOptions();
  virtual ~AnalyserOptions();

  bool hasFftSize() const { return has_fft_size_; }
  uint32_t fftSize() const {
    DCHECK(has_fft_size_);
    return fft_size_;
  }
  inline void setFftSize(uint32_t);

  bool hasMaxDecibels() const { return has_max_decibels_; }
  double maxDecibels() const {
    DCHECK(has_max_decibels_);
    return max_decibels_;
  }
  inline void setMaxDecibels(double);

  bool hasMinDecibels() const { return has_min_decibels_; }
  double minDecibels() const {
    DCHECK(has_min_decibels_);
    return min_decibels_;
  }
  inline void setMinDecibels(double);

  bool hasSmoothingTimeConstant() const { return has_smoothing_time_constant_; }
  double smoothingTimeConstant() const {
    DCHECK(has_smoothing_time_constant_);
    return smoothing_time_constant_;
  }
  inline void setSmoothingTimeConstant(double);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_fft_size_ = false;
  bool has_max_decibels_ = false;
  bool has_min_decibels_ = false;
  bool has_smoothing_time_constant_ = false;

  uint32_t fft_size_;
  double max_decibels_;
  double min_decibels_;
  double smoothing_time_constant_;

  friend class V8AnalyserOptions;
};

void AnalyserOptions::setFftSize(uint32_t value) {
  fft_size_ = value;
  has_fft_size_ = true;
}

void AnalyserOptions::setMaxDecibels(double value) {
  max_decibels_ = value;
  has_max_decibels_ = true;
}

void AnalyserOptions::setMinDecibels(double value) {
  min_decibels_ = value;
  has_min_decibels_ = true;
}

void AnalyserOptions::setSmoothingTimeConstant(double value) {
  smoothing_time_constant_ = value;
  has_smoothing_time_constant_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_WEBAUDIO_ANALYSER_OPTIONS_H_
