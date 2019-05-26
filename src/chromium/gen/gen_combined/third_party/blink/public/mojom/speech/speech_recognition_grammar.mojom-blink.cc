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

#include "third_party/blink/public/mojom/speech/speech_recognition_grammar.mojom-blink.h"

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

#include "third_party/blink/public/mojom/speech/speech_recognition_grammar.mojom-params-data.h"
#include "third_party/blink/public/mojom/speech/speech_recognition_grammar.mojom-shared-message-ids.h"

#include "third_party/blink/public/mojom/speech/speech_recognition_grammar.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SPEECH_SPEECH_RECOGNITION_GRAMMAR_MOJOM_BLINK_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SPEECH_SPEECH_RECOGNITION_GRAMMAR_MOJOM_BLINK_JUMBO_H_
#include "third_party/blink/renderer/platform/mojo/kurl_struct_traits.h"
#endif
namespace blink {
namespace mojom {
namespace blink {
SpeechRecognitionGrammar::SpeechRecognitionGrammar()
    : url(),
      weight() {}

SpeechRecognitionGrammar::SpeechRecognitionGrammar(
    const ::blink::KURL& url_in,
    double weight_in)
    : url(std::move(url_in)),
      weight(std::move(weight_in)) {}

SpeechRecognitionGrammar::~SpeechRecognitionGrammar() = default;

bool SpeechRecognitionGrammar::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {


// static
bool StructTraits<::blink::mojom::blink::SpeechRecognitionGrammar::DataView, ::blink::mojom::blink::SpeechRecognitionGrammarPtr>::Read(
    ::blink::mojom::blink::SpeechRecognitionGrammar::DataView input,
    ::blink::mojom::blink::SpeechRecognitionGrammarPtr* output) {
  bool success = true;
  ::blink::mojom::blink::SpeechRecognitionGrammarPtr result(::blink::mojom::blink::SpeechRecognitionGrammar::New());
  
      if (!input.ReadUrl(&result->url))
        success = false;
      result->weight = input.weight();
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif