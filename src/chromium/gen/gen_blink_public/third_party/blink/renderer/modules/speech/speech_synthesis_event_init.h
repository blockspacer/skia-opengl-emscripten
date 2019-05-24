// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_SPEECH_SPEECH_SYNTHESIS_EVENT_INIT_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_SPEECH_SPEECH_SYNTHESIS_EVENT_INIT_H_

#include "third_party/blink/renderer/core/dom/events/event_init.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class SpeechSynthesisUtterance;

class MODULES_EXPORT SpeechSynthesisEventInit : public EventInit {
 public:
  static SpeechSynthesisEventInit* Create() { return MakeGarbageCollected<SpeechSynthesisEventInit>(); }

  SpeechSynthesisEventInit();
  virtual ~SpeechSynthesisEventInit();

  bool hasCharIndex() const { return has_char_index_; }
  uint32_t charIndex() const {
    DCHECK(has_char_index_);
    return char_index_;
  }
  inline void setCharIndex(uint32_t);

  bool hasCharLength() const { return has_char_length_; }
  uint32_t charLength() const {
    DCHECK(has_char_length_);
    return char_length_;
  }
  inline void setCharLength(uint32_t);

  bool hasElapsedTime() const { return has_elapsed_time_; }
  float elapsedTime() const {
    DCHECK(has_elapsed_time_);
    return elapsed_time_;
  }
  inline void setElapsedTime(float);

  bool hasName() const { return !name_.IsNull(); }
  const String& name() const {
    return name_;
  }
  inline void setName(const String&);

  bool hasUtterance() const { return utterance_; }
  SpeechSynthesisUtterance* utterance() const {
    return utterance_;
  }
  inline void setUtterance(SpeechSynthesisUtterance*);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_char_index_ = false;
  bool has_char_length_ = false;
  bool has_elapsed_time_ = false;

  uint32_t char_index_;
  uint32_t char_length_;
  float elapsed_time_;
  String name_;
  Member<SpeechSynthesisUtterance> utterance_;

  friend class V8SpeechSynthesisEventInit;
};

void SpeechSynthesisEventInit::setCharIndex(uint32_t value) {
  char_index_ = value;
  has_char_index_ = true;
}

void SpeechSynthesisEventInit::setCharLength(uint32_t value) {
  char_length_ = value;
  has_char_length_ = true;
}

void SpeechSynthesisEventInit::setElapsedTime(float value) {
  elapsed_time_ = value;
  has_elapsed_time_ = true;
}

void SpeechSynthesisEventInit::setName(const String& value) {
  name_ = value;
}

void SpeechSynthesisEventInit::setUtterance(SpeechSynthesisUtterance* value) {
  utterance_ = value;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_SPEECH_SPEECH_SYNTHESIS_EVENT_INIT_H_
