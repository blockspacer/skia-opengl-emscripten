// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_WEBAUDIO_IIR_FILTER_OPTIONS_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_WEBAUDIO_IIR_FILTER_OPTIONS_H_

#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/modules/webaudio/audio_node_options.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/vector.h"

namespace blink {

class MODULES_EXPORT IIRFilterOptions : public AudioNodeOptions {
 public:
  static IIRFilterOptions* Create() { return MakeGarbageCollected<IIRFilterOptions>(); }

  IIRFilterOptions();
  virtual ~IIRFilterOptions();

  bool hasFeedback() const { return has_feedback_; }
  const Vector<double>& feedback() const {
    DCHECK(has_feedback_);
    return feedback_;
  }
  void setFeedback(const Vector<double>&);

  bool hasFeedforward() const { return has_feedforward_; }
  const Vector<double>& feedforward() const {
    DCHECK(has_feedforward_);
    return feedforward_;
  }
  void setFeedforward(const Vector<double>&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_feedback_ = false;
  bool has_feedforward_ = false;

  Vector<double> feedback_;
  Vector<double> feedforward_;

  friend class V8IIRFilterOptions;
};

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_WEBAUDIO_IIR_FILTER_OPTIONS_H_
