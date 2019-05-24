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


#include "third_party/blink/public/mojom/speech/speech_recognizer.mojom-blink-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
#include "third_party/blink/public/mojom/speech/speech_recognition_grammar.mojom-blink.h"
#include "third_party/blink/public/mojom/speech/speech_recognition_result.mojom-blink.h"
#include "third_party/blink/public/mojom/speech/speech_recognition_error.mojom-blink.h"
#include "url/mojom/origin.mojom-blink.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SPEECH_SPEECH_RECOGNIZER_MOJOM_BLINK_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SPEECH_SPEECH_RECOGNIZER_MOJOM_BLINK_JUMBO_H_
#include "mojo/public/cpp/base/unguessable_token_mojom_traits.h"
#include "third_party/blink/renderer/platform/mojo/kurl_struct_traits.h"
#include "third_party/blink/renderer/platform/mojo/security_origin_struct_traits.h"
#include "third_party/blink/renderer/platform/mojo/string16_mojom_traits.h"
#endif


namespace blink {
namespace mojom {
namespace blink {


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




void SpeechRecognitionSessionClientInterceptorForTesting::ResultRetrieved(WTF::Vector<::blink::mojom::blink::SpeechRecognitionResultPtr> results) {
  GetForwardingInterface()->ResultRetrieved(std::move(results));
}
void SpeechRecognitionSessionClientInterceptorForTesting::ErrorOccurred(::blink::mojom::blink::SpeechRecognitionErrorPtr error) {
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






}  // namespace blink
}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif