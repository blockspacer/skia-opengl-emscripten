// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_WEBAUDIO_CONVOLVER_OPTIONS_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_WEBAUDIO_CONVOLVER_OPTIONS_H_

#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/modules/webaudio/audio_node_options.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class AudioBuffer;

class MODULES_EXPORT ConvolverOptions : public AudioNodeOptions {
 public:
  static ConvolverOptions* Create() { return MakeGarbageCollected<ConvolverOptions>(); }

  ConvolverOptions();
  virtual ~ConvolverOptions();

  bool hasBuffer() const { return has_buffer_; }
  AudioBuffer* buffer() const {
    return buffer_;
  }
  inline void setBuffer(AudioBuffer*);
  inline void setBufferToNull();

  bool hasDisableNormalization() const { return has_disable_normalization_; }
  bool disableNormalization() const {
    DCHECK(has_disable_normalization_);
    return disable_normalization_;
  }
  inline void setDisableNormalization(bool);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_buffer_ = false;
  bool has_disable_normalization_ = false;

  Member<AudioBuffer> buffer_;
  bool disable_normalization_;

  friend class V8ConvolverOptions;
};

void ConvolverOptions::setBuffer(AudioBuffer* value) {
  buffer_ = value;
  has_buffer_ = true;
}

void ConvolverOptions::setBufferToNull() {
  buffer_ = Member<AudioBuffer>();
  has_buffer_ = true;
}

void ConvolverOptions::setDisableNormalization(bool value) {
  disable_normalization_ = value;
  has_disable_normalization_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_WEBAUDIO_CONVOLVER_OPTIONS_H_
