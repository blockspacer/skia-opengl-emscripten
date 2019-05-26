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

#include "third_party/blink/public/mojom/speech/speech_recognition_result.mojom.h"

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

#include "third_party/blink/public/mojom/speech/speech_recognition_result.mojom-import-headers.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SPEECH_SPEECH_RECOGNITION_RESULT_MOJOM_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SPEECH_SPEECH_RECOGNITION_RESULT_MOJOM_JUMBO_H_
#include "mojo/public/cpp/base/string16_mojom_traits.h"
#endif
namespace blink {
namespace mojom {
SpeechRecognitionHypothesis::SpeechRecognitionHypothesis()
    : utterance(),
      confidence() {}

SpeechRecognitionHypothesis::SpeechRecognitionHypothesis(
    const base::string16& utterance_in,
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
    std::vector<SpeechRecognitionHypothesisPtr> hypotheses_in,
    bool is_provisional_in)
    : hypotheses(std::move(hypotheses_in)),
      is_provisional(std::move(is_provisional_in)) {}

SpeechRecognitionResult::~SpeechRecognitionResult() = default;

bool SpeechRecognitionResult::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace mojom
}  // namespace blink

namespace mojo {


// static
bool StructTraits<::blink::mojom::SpeechRecognitionHypothesis::DataView, ::blink::mojom::SpeechRecognitionHypothesisPtr>::Read(
    ::blink::mojom::SpeechRecognitionHypothesis::DataView input,
    ::blink::mojom::SpeechRecognitionHypothesisPtr* output) {
  bool success = true;
  ::blink::mojom::SpeechRecognitionHypothesisPtr result(::blink::mojom::SpeechRecognitionHypothesis::New());
  
      if (!input.ReadUtterance(&result->utterance))
        success = false;
      result->confidence = input.confidence();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::blink::mojom::SpeechRecognitionResult::DataView, ::blink::mojom::SpeechRecognitionResultPtr>::Read(
    ::blink::mojom::SpeechRecognitionResult::DataView input,
    ::blink::mojom::SpeechRecognitionResultPtr* output) {
  bool success = true;
  ::blink::mojom::SpeechRecognitionResultPtr result(::blink::mojom::SpeechRecognitionResult::New());
  
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