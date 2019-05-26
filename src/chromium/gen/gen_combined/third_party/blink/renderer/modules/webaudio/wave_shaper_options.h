// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_WEBAUDIO_WAVE_SHAPER_OPTIONS_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_WEBAUDIO_WAVE_SHAPER_OPTIONS_H_

#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/modules/webaudio/audio_node_options.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"
#include "third_party/blink/renderer/platform/wtf/vector.h"

namespace blink {

class MODULES_EXPORT WaveShaperOptions : public AudioNodeOptions {
 public:
  static WaveShaperOptions* Create() { return MakeGarbageCollected<WaveShaperOptions>(); }

  WaveShaperOptions();
  virtual ~WaveShaperOptions();

  bool hasCurve() const { return has_curve_; }
  const Vector<float>& curve() const {
    DCHECK(has_curve_);
    return curve_;
  }
  void setCurve(const Vector<float>&);

  bool hasOversample() const { return !oversample_.IsNull(); }
  const String& oversample() const {
    return oversample_;
  }
  inline void setOversample(const String&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_curve_ = false;

  Vector<float> curve_;
  String oversample_;

  friend class V8WaveShaperOptions;
};

void WaveShaperOptions::setOversample(const String& value) {
  oversample_ = value;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_WEBAUDIO_WAVE_SHAPER_OPTIONS_H_
