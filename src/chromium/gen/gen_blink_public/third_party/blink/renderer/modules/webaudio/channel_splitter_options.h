// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_WEBAUDIO_CHANNEL_SPLITTER_OPTIONS_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_WEBAUDIO_CHANNEL_SPLITTER_OPTIONS_H_

#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/modules/webaudio/audio_node_options.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class MODULES_EXPORT ChannelSplitterOptions : public AudioNodeOptions {
 public:
  static ChannelSplitterOptions* Create() { return MakeGarbageCollected<ChannelSplitterOptions>(); }

  ChannelSplitterOptions();
  virtual ~ChannelSplitterOptions();

  bool hasNumberOfOutputs() const { return has_number_of_outputs_; }
  uint32_t numberOfOutputs() const {
    DCHECK(has_number_of_outputs_);
    return number_of_outputs_;
  }
  inline void setNumberOfOutputs(uint32_t);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_number_of_outputs_ = false;

  uint32_t number_of_outputs_;

  friend class V8ChannelSplitterOptions;
};

void ChannelSplitterOptions::setNumberOfOutputs(uint32_t value) {
  number_of_outputs_ = value;
  has_number_of_outputs_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_WEBAUDIO_CHANNEL_SPLITTER_OPTIONS_H_
