// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_SPEECH_SPEECH_SYNTHESIS_ERROR_EVENT_INIT_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_SPEECH_SPEECH_SYNTHESIS_ERROR_EVENT_INIT_H_

#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/modules/speech/speech_synthesis_event_init.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class MODULES_EXPORT SpeechSynthesisErrorEventInit : public SpeechSynthesisEventInit {
 public:
  static SpeechSynthesisErrorEventInit* Create() { return MakeGarbageCollected<SpeechSynthesisErrorEventInit>(); }

  SpeechSynthesisErrorEventInit();
  virtual ~SpeechSynthesisErrorEventInit();

  bool hasError() const { return !error_.IsNull(); }
  const String& error() const {
    return error_;
  }
  inline void setError(const String&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:

  String error_;

  friend class V8SpeechSynthesisErrorEventInit;
};

void SpeechSynthesisErrorEventInit::setError(const String& value) {
  error_ = value;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_SPEECH_SPEECH_SYNTHESIS_ERROR_EVENT_INIT_H_
