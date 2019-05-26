// Copyright 2019 The Chromium Authors. All rights reserved.
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


#include "third_party/blink/public/mojom/speech/speech_recognizer.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "third_party/blink/public/mojom/speech/speech_recognition_grammar.mojom.h"
#include "third_party/blink/public/mojom/speech/speech_recognition_result.mojom.h"
#include "third_party/blink/public/mojom/speech/speech_recognition_error.mojom.h"
#include "url/mojom/origin.mojom.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SPEECH_SPEECH_RECOGNIZER_MOJOM_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SPEECH_SPEECH_RECOGNIZER_MOJOM_JUMBO_H_
#include "mojo/public/cpp/base/string16_mojom_traits.h"
#include "mojo/public/cpp/base/unguessable_token_mojom_traits.h"
#include "url/mojom/origin_mojom_traits.h"
#include "url/mojom/url_gurl_mojom_traits.h"
#endif


namespace blink {
namespace mojom {


void SpeechRecognizerInterceptorForTesting::Start(StartSpeechRecognitionRequestParamsPtr params) {
  GetForwardingInterface()->Start(std::move(params));
}
SpeechRecognizerAsyncWaiter::SpeechRecognizerAsyncWaiter(
    SpeechRecognizer* proxy) : proxy_(proxy) {}

SpeechRecognizerAsyncWaiter::~SpeechRecognizerAsyncWaiter() = default;




void SpeechRecognitionSessionInterceptorForTesting::Abort() {
  GetForwardingInterface()->Abort();
}
void SpeechRecognitionSessionInterceptorForTesting::StopCapture() {
  GetForwardingInterface()->StopCapture();
}
SpeechRecognitionSessionAsyncWaiter::SpeechRecognitionSessionAsyncWaiter(
    SpeechRecognitionSession* proxy) : proxy_(proxy) {}

SpeechRecognitionSessionAsyncWaiter::~SpeechRecognitionSessionAsyncWaiter() = default;




void SpeechRecognitionSessionClientInterceptorForTesting::ResultRetrieved(std::vector<::blink::mojom::SpeechRecognitionResultPtr> results) {
  GetForwardingInterface()->ResultRetrieved(std::move(results));
}
void SpeechRecognitionSessionClientInterceptorForTesting::ErrorOccurred(::blink::mojom::SpeechRecognitionErrorPtr error) {
  GetForwardingInterface()->ErrorOccurred(std::move(error));
}
void SpeechRecognitionSessionClientInterceptorForTesting::Started() {
  GetForwardingInterface()->Started();
}
void SpeechRecognitionSessionClientInterceptorForTesting::AudioStarted() {
  GetForwardingInterface()->AudioStarted();
}
void SpeechRecognitionSessionClientInterceptorForTesting::SoundStarted() {
  GetForwardingInterface()->SoundStarted();
}
void SpeechRecognitionSessionClientInterceptorForTesting::SoundEnded() {
  GetForwardingInterface()->SoundEnded();
}
void SpeechRecognitionSessionClientInterceptorForTesting::AudioEnded() {
  GetForwardingInterface()->AudioEnded();
}
void SpeechRecognitionSessionClientInterceptorForTesting::Ended() {
  GetForwardingInterface()->Ended();
}
SpeechRecognitionSessionClientAsyncWaiter::SpeechRecognitionSessionClientAsyncWaiter(
    SpeechRecognitionSessionClient* proxy) : proxy_(proxy) {}

SpeechRecognitionSessionClientAsyncWaiter::~SpeechRecognitionSessionClientAsyncWaiter() = default;






}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif