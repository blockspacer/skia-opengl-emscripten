// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_SPEECH_SPEECH_RECOGNITION_EVENT_INIT_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_SPEECH_SPEECH_RECOGNITION_EVENT_INIT_H_

#include "third_party/blink/renderer/core/dom/events/event_init.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class SpeechRecognitionResultList;

class MODULES_EXPORT SpeechRecognitionEventInit : public EventInit {
 public:
  static SpeechRecognitionEventInit* Create() { return MakeGarbageCollected<SpeechRecognitionEventInit>(); }

  SpeechRecognitionEventInit();
  virtual ~SpeechRecognitionEventInit();

  bool hasResultIndex() const { return has_result_index_; }
  uint32_t resultIndex() const {
    DCHECK(has_result_index_);
    return result_index_;
  }
  inline void setResultIndex(uint32_t);

  bool hasResults() const { return has_results_; }
  SpeechRecognitionResultList* results() const {
    return results_;
  }
  inline void setResults(SpeechRecognitionResultList*);
  inline void setResultsToNull();

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_result_index_ = false;
  bool has_results_ = false;

  uint32_t result_index_;
  Member<SpeechRecognitionResultList> results_;

  friend class V8SpeechRecognitionEventInit;
};

void SpeechRecognitionEventInit::setResultIndex(uint32_t value) {
  result_index_ = value;
  has_result_index_ = true;
}

void SpeechRecognitionEventInit::setResults(SpeechRecognitionResultList* value) {
  results_ = value;
  has_results_ = true;
}

void SpeechRecognitionEventInit::setResultsToNull() {
  results_ = Member<SpeechRecognitionResultList>();
  has_results_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_SPEECH_SPEECH_RECOGNITION_EVENT_INIT_H_
