// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_WEBAUDIO_STEREO_PANNER_OPTIONS_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_WEBAUDIO_STEREO_PANNER_OPTIONS_H_

#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/modules/webaudio/audio_node_options.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class MODULES_EXPORT StereoPannerOptions : public AudioNodeOptions {
 public:
  static StereoPannerOptions* Create() { return MakeGarbageCollected<StereoPannerOptions>(); }

  StereoPannerOptions();
  virtual ~StereoPannerOptions();

  bool hasPan() const { return has_pan_; }
  float pan() const {
    DCHECK(has_pan_);
    return pan_;
  }
  inline void setPan(float);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_pan_ = false;

  float pan_;

  friend class V8StereoPannerOptions;
};

void StereoPannerOptions::setPan(float value) {
  pan_ = value;
  has_pan_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_WEBAUDIO_STEREO_PANNER_OPTIONS_H_
