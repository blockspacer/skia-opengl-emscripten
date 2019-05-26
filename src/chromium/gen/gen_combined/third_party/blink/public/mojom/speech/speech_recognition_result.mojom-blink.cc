// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#elif defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4056)
#pragma warning(disable:4065)
#pragma warning(disable:4756)
#endif

#include "third_party/blink/public/mojom/speech/speech_recognition_result.mojom-blink.h"

#include <math.h>
#include <stdint.h>
#include <utility>

#include "base/location.h"
#include "base/logging.h"
#include "base/run_loop.h"
#include "base/task/common/task_annotator.h"
#include "mojo/public/cpp/bindings/lib/message_internal.h"
#include "mojo/public/cpp/bindings/lib/serialization_util.h"
#include "mojo/public/cpp/bindings/lib/unserialized_message_context.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/interfaces/bindings/interface_control_messages.mojom.h"

#include "third_party/blink/public/mojom/speech/speech_recognition_result.mojom-params-data.h"
#include "third_party/blink/public/mojom/speech/speech_recognition_result.mojom-shared-message-ids.h"

#include "third_party/blink/public/mojom/speech/speech_recognition_result.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SPEECH_SPEECH_RECOGNITION_RESULT_MOJOM_BLINK_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SPEECH_SPEECH_RECOGNITION_RESULT_MOJOM_BLINK_JUMBO_H_
#include "third_party/blink/renderer/platform/mojo/string16_mojom_traits.h"
#endif
namespace blink {
namespace mojom {
namespace blink {
SpeechRecognitionHypothesis::SpeechRecognitionHypothesis()
    : utterance(),
      confidence() {}

SpeechRecognitionHypothesis::SpeechRecognitionHypothesis(
    const WTF::String& utterance_in,
    double confidence_in)
    : utterance(std::move(utterance_in)),
      confidence(std::move(confidence_in)) {}

SpeechRecognitionHypothesis::~SpeechRecognitionHypothesis() = default;

bool SpeechRecognitionHypothesis::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
SpeechRecognitionResult::SpeechRecognitionResult()
    : hypotheses(),
      is_provisional() {}

SpeechRecognitionResult::SpeechRecognitionResult(
    WTF::Vector<SpeechRecognitionHypothesisPtr> hypotheses_in,
    bool is_provisional_in)
    : hypotheses(std::move(hypotheses_in)),
      is_provisional(std::move(is_provisional_in)) {}

SpeechRecognitionResult::~SpeechRecognitionResult() = default;

bool SpeechRecognitionResult::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {


// static
bool StructTraits<::blink::mojom::blink::SpeechRecognitionHypothesis::DataView, ::blink::mojom::blink::SpeechRecognitionHypothesisPtr>::Read(
    ::blink::mojom::blink::SpeechRecognitionHypothesis::DataView input,
    ::blink::mojom::blink::SpeechRecognitionHypothesisPtr* output) {
  bool success = true;
  ::blink::mojom::blink::SpeechRecognitionHypothesisPtr result(::blink::mojom::blink::SpeechRecognitionHypothesis::New());
  
      if (!input.ReadUtterance(&result->utterance))
        success = false;
      result->confidence = input.confidence();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::blink::mojom::blink::SpeechRecognitionResult::DataView, ::blink::mojom::blink::SpeechRecognitionResultPtr>::Read(
    ::blink::mojom::blink::SpeechRecognitionResult::DataView input,
    ::blink::mojom::blink::SpeechRecognitionResultPtr* output) {
  bool success = true;
  ::blink::mojom::blink::SpeechRecognitionResultPtr result(::blink::mojom::blink::SpeechRecognitionResult::New());
  
      if (!input.ReadHypotheses(&result->hypotheses))
        success = false;
      result->is_provisional = input.is_provisional();
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif