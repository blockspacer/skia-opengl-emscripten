// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_WEBAUDIO_AUDIO_PARAM_DESCRIPTOR_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_WEBAUDIO_AUDIO_PARAM_DESCRIPTOR_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class MODULES_EXPORT AudioParamDescriptor : public IDLDictionaryBase {
 public:
  static AudioParamDescriptor* Create() { return MakeGarbageCollected<AudioParamDescriptor>(); }

  AudioParamDescriptor();
  virtual ~AudioParamDescriptor();

  bool hasAutomationRate() const { return !automation_rate_.IsNull(); }
  const String& automationRate() const {
    return automation_rate_;
  }
  inline void setAutomationRate(const String&);

  bool hasDefaultValue() const { return has_default_value_; }
  float defaultValue() const {
    DCHECK(has_default_value_);
    return default_value_;
  }
  inline void setDefaultValue(float);

  bool hasMaxValue() const { return has_max_value_; }
  float maxValue() const {
    DCHECK(has_max_value_);
    return max_value_;
  }
  inline void setMaxValue(float);

  bool hasMinValue() const { return has_min_value_; }
  float minValue() const {
    DCHECK(has_min_value_);
    return min_value_;
  }
  inline void setMinValue(float);

  bool hasName() const { return !name_.IsNull(); }
  const String& name() const {
    return name_;
  }
  inline void setName(const String&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_default_value_ = false;
  bool has_max_value_ = false;
  bool has_min_value_ = false;

  String automation_rate_;
  float default_value_;
  float max_value_;
  float min_value_;
  String name_;

  friend class V8AudioParamDescriptor;
};

void AudioParamDescriptor::setAutomationRate(const String& value) {
  automation_rate_ = value;
}

void AudioParamDescriptor::setDefaultValue(float value) {
  default_value_ = value;
  has_default_value_ = true;
}

void AudioParamDescriptor::setMaxValue(float value) {
  max_value_ = value;
  has_max_value_ = true;
}

void AudioParamDescriptor::setMinValue(float value) {
  min_value_ = value;
  has_min_value_ = true;
}

void AudioParamDescriptor::setName(const String& value) {
  name_ = value;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_WEBAUDIO_AUDIO_PARAM_DESCRIPTOR_H_
