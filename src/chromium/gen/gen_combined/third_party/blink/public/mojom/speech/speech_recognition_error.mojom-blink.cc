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

#include "third_party/blink/public/mojom/speech/speech_recognition_error.mojom-blink.h"

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

#include "third_party/blink/public/mojom/speech/speech_recognition_error.mojom-params-data.h"
#include "third_party/blink/public/mojom/speech/speech_recognition_error.mojom-shared-message-ids.h"

#include "third_party/blink/public/mojom/speech/speech_recognition_error.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SPEECH_SPEECH_RECOGNITION_ERROR_MOJOM_BLINK_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SPEECH_SPEECH_RECOGNITION_ERROR_MOJOM_BLINK_JUMBO_H_
#endif
namespace blink {
namespace mojom {
namespace blink {
SpeechRecognitionError::SpeechRecognitionError()
    : code(),
      details() {}

SpeechRecognitionError::SpeechRecognitionError(
    ::blink::mojom::blink::SpeechRecognitionErrorCode code_in,
    SpeechAudioErrorDetails details_in)
    : code(std::move(code_in)),
      details(std::move(details_in)) {}

SpeechRecognitionError::~SpeechRecognitionError() = default;
size_t SpeechRecognitionError::Hash(size_t seed) const {
  seed = mojo::internal::WTFHash(seed, this->code);
  seed = mojo::internal::WTFHash(seed, this->details);
  return seed;
}

bool SpeechRecognitionError::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {


// static
bool StructTraits<::blink::mojom::blink::SpeechRecognitionError::DataView, ::blink::mojom::blink::SpeechRecognitionErrorPtr>::Read(
    ::blink::mojom::blink::SpeechRecognitionError::DataView input,
    ::blink::mojom::blink::SpeechRecognitionErrorPtr* output) {
  bool success = true;
  ::blink::mojom::blink::SpeechRecognitionErrorPtr result(::blink::mojom::blink::SpeechRecognitionError::New());
  
      if (!input.ReadCode(&result->code))
        success = false;
      if (!input.ReadDetails(&result->details))
        success = false;
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif