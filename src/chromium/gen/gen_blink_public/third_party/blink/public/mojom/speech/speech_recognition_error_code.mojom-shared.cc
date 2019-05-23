// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "third_party/blink/public/mojom/speech/speech_recognition_error_code.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "base/stl_util.h"  // for base::size()
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"

#include "third_party/blink/public/mojom/speech/speech_recognition_error_code.mojom-params-data.h"
namespace blink {
namespace mojom {

std::ostream& operator<<(std::ostream& os, SpeechRecognitionErrorCode value) {
  switch(value) {
    case SpeechRecognitionErrorCode::kNone:
      return os << "SpeechRecognitionErrorCode::kNone";
    case SpeechRecognitionErrorCode::kNoSpeech:
      return os << "SpeechRecognitionErrorCode::kNoSpeech";
    case SpeechRecognitionErrorCode::kAborted:
      return os << "SpeechRecognitionErrorCode::kAborted";
    case SpeechRecognitionErrorCode::kAudioCapture:
      return os << "SpeechRecognitionErrorCode::kAudioCapture";
    case SpeechRecognitionErrorCode::kNetwork:
      return os << "SpeechRecognitionErrorCode::kNetwork";
    case SpeechRecognitionErrorCode::kNotAllowed:
      return os << "SpeechRecognitionErrorCode::kNotAllowed";
    case SpeechRecognitionErrorCode::kServiceNotAllowed:
      return os << "SpeechRecognitionErrorCode::kServiceNotAllowed";
    case SpeechRecognitionErrorCode::kBadGrammar:
      return os << "SpeechRecognitionErrorCode::kBadGrammar";
    case SpeechRecognitionErrorCode::kLanguageNotSupported:
      return os << "SpeechRecognitionErrorCode::kLanguageNotSupported";
    case SpeechRecognitionErrorCode::kNoMatch:
      return os << "SpeechRecognitionErrorCode::kNoMatch";
    default:
      return os << "Unknown SpeechRecognitionErrorCode value: " << static_cast<int32_t>(value);
  }
}

namespace internal {

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#if defined(_MSC_VER)
#pragma warning(pop)
#endif