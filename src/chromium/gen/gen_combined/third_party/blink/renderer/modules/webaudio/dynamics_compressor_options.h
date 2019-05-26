// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_WEBAUDIO_DYNAMICS_COMPRESSOR_OPTIONS_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_WEBAUDIO_DYNAMICS_COMPRESSOR_OPTIONS_H_

#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/modules/webaudio/audio_node_options.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class MODULES_EXPORT DynamicsCompressorOptions : public AudioNodeOptions {
 public:
  static DynamicsCompressorOptions* Create() { return MakeGarbageCollected<DynamicsCompressorOptions>(); }

  DynamicsCompressorOptions();
  virtual ~DynamicsCompressorOptions();

  bool hasAttack() const { return has_attack_; }
  float attack() const {
    DCHECK(has_attack_);
    return attack_;
  }
  inline void setAttack(float);

  bool hasKnee() const { return has_knee_; }
  float knee() const {
    DCHECK(has_knee_);
    return knee_;
  }
  inline void setKnee(float);

  bool hasRatio() const { return has_ratio_; }
  float ratio() const {
    DCHECK(has_ratio_);
    return ratio_;
  }
  inline void setRatio(float);

  bool hasRelease() const { return has_release_; }
  float release() const {
    DCHECK(has_release_);
    return release_;
  }
  inline void setRelease(float);

  bool hasThreshold() const { return has_threshold_; }
  float threshold() const {
    DCHECK(has_threshold_);
    return threshold_;
  }
  inline void setThreshold(float);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_attack_ = false;
  bool has_knee_ = false;
  bool has_ratio_ = false;
  bool has_release_ = false;
  bool has_threshold_ = false;

  float attack_;
  float knee_;
  float ratio_;
  float release_;
  float threshold_;

  friend class V8DynamicsCompressorOptions;
};

void DynamicsCompressorOptions::setAttack(float value) {
  attack_ = value;
  has_attack_ = true;
}

void DynamicsCompressorOptions::setKnee(float value) {
  knee_ = value;
  has_knee_ = true;
}

void DynamicsCompressorOptions::setRatio(float value) {
  ratio_ = value;
  has_ratio_ = true;
}

void DynamicsCompressorOptions::setRelease(float value) {
  release_ = value;
  has_release_ = true;
}

void DynamicsCompressorOptions::setThreshold(float value) {
  threshold_ = value;
  has_threshold_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_WEBAUDIO_DYNAMICS_COMPRESSOR_OPTIONS_H_
