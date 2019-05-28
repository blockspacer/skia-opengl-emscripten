// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SPEECH_SPEECH_RECOGNIZER_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SPEECH_SPEECH_RECOGNIZER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


// The 489232524 value is based on sha256(salt + "SpeechRecognizer1").
constexpr uint32_t kSpeechRecognizer_Start_Name = 489232524;
// The 1666439790 value is based on sha256(salt + "SpeechRecognitionSession1").
constexpr uint32_t kSpeechRecognitionSession_Abort_Name = 1666439790;
// The 551605534 value is based on sha256(salt + "SpeechRecognitionSession2").
constexpr uint32_t kSpeechRecognitionSession_StopCapture_Name = 551605534;
// The 401851671 value is based on sha256(salt + "SpeechRecognitionSessionClient1").
constexpr uint32_t kSpeechRecognitionSessionClient_ResultRetrieved_Name = 401851671;
// The 150737135 value is based on sha256(salt + "SpeechRecognitionSessionClient2").
constexpr uint32_t kSpeechRecognitionSessionClient_ErrorOccurred_Name = 150737135;
// The 1279953092 value is based on sha256(salt + "SpeechRecognitionSessionClient3").
constexpr uint32_t kSpeechRecognitionSessionClient_Started_Name = 1279953092;
// The 734114239 value is based on sha256(salt + "SpeechRecognitionSessionClient4").
constexpr uint32_t kSpeechRecognitionSessionClient_AudioStarted_Name = 734114239;
// The 578351654 value is based on sha256(salt + "SpeechRecognitionSessionClient5").
constexpr uint32_t kSpeechRecognitionSessionClient_SoundStarted_Name = 578351654;
// The 1795443291 value is based on sha256(salt + "SpeechRecognitionSessionClient6").
constexpr uint32_t kSpeechRecognitionSessionClient_SoundEnded_Name = 1795443291;
// The 1261705127 value is based on sha256(salt + "SpeechRecognitionSessionClient7").
constexpr uint32_t kSpeechRecognitionSessionClient_AudioEnded_Name = 1261705127;
// The 1165731095 value is based on sha256(salt + "SpeechRecognitionSessionClient8").
constexpr uint32_t kSpeechRecognitionSessionClient_Ended_Name = 1165731095;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_SPEECH_SPEECH_RECOGNIZER_MOJOM_SHARED_MESSAGE_IDS_H_