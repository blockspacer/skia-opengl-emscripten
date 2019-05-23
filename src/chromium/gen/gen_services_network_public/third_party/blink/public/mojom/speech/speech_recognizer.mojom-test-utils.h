// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SPEECH_SPEECH_RECOGNIZER_MOJOM_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SPEECH_SPEECH_RECOGNIZER_MOJOM_TEST_UTILS_H_

#include "third_party/blink/public/mojom/speech/speech_recognizer.mojom.h"
#include "third_party/blink/public/common/common_export.h"


namespace blink {
namespace mojom {


class BLINK_COMMON_EXPORT SpeechRecognizerInterceptorForTesting : public SpeechRecognizer {
  virtual SpeechRecognizer* GetForwardingInterface() = 0;
  void Start(StartSpeechRecognitionRequestParamsPtr params) override;
};
class BLINK_COMMON_EXPORT SpeechRecognizerAsyncWaiter {
 public:
  explicit SpeechRecognizerAsyncWaiter(SpeechRecognizer* proxy);
  ~SpeechRecognizerAsyncWaiter();

 private:
  SpeechRecognizer* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(SpeechRecognizerAsyncWaiter);
};


class BLINK_COMMON_EXPORT SpeechRecognitionSessionInterceptorForTesting : public SpeechRecognitionSession {
  virtual SpeechRecognitionSession* GetForwardingInterface() = 0;
  void Abort() override;
  void StopCapture() override;
};
class BLINK_COMMON_EXPORT SpeechRecognitionSessionAsyncWaiter {
 public:
  explicit SpeechRecognitionSessionAsyncWaiter(SpeechRecognitionSession* proxy);
  ~SpeechRecognitionSessionAsyncWaiter();

 private:
  SpeechRecognitionSession* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(SpeechRecognitionSessionAsyncWaiter);
};


class BLINK_COMMON_EXPORT SpeechRecognitionSessionClientInterceptorForTesting : public SpeechRecognitionSessionClient {
  virtual SpeechRecognitionSessionClient* GetForwardingInterface() = 0;
  void ResultRetrieved(std::vector<::blink::mojom::SpeechRecognitionResultPtr> results) override;
  void ErrorOccurred(::blink::mojom::SpeechRecognitionErrorPtr error) override;
  void Started() override;
  void AudioStarted() override;
  void SoundStarted() override;
  void SoundEnded() override;
  void AudioEnded() override;
  void Ended() override;
};
class BLINK_COMMON_EXPORT SpeechRecognitionSessionClientAsyncWaiter {
 public:
  explicit SpeechRecognitionSessionClientAsyncWaiter(SpeechRecognitionSessionClient* proxy);
  ~SpeechRecognitionSessionClientAsyncWaiter();

 private:
  SpeechRecognitionSessionClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(SpeechRecognitionSessionClientAsyncWaiter);
};




}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_SPEECH_SPEECH_RECOGNIZER_MOJOM_TEST_UTILS_H_