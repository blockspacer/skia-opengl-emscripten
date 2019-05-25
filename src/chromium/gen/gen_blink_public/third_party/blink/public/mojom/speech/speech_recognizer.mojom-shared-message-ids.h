// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SPEECH_SPEECH_RECOGNIZER_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SPEECH_SPEECH_RECOGNIZER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


// The 1181403820 value is based on sha256(salt + "SpeechRecognizer1").
constexpr uint32_t kSpeechRecognizer_Start_Name = 1181403820;
// The 1457698733 value is based on sha256(salt + "SpeechRecognitionSession1").
constexpr uint32_t kSpeechRecognitionSession_Abort_Name = 1457698733;
// The 393877475 value is based on sha256(salt + "SpeechRecognitionSession2").
constexpr uint32_t kSpeechRecognitionSession_StopCapture_Name = 393877475;
// The 884553623 value is based on sha256(salt + "SpeechRecognitionSessionClient1").
constexpr uint32_t kSpeechRecognitionSessionClient_ResultRetrieved_Name = 884553623;
// The 769994645 value is based on sha256(salt + "SpeechRecognitionSessionClient2").
constexpr uint32_t kSpeechRecognitionSessionClient_ErrorOccurred_Name = 769994645;
// The 682478476 value is based on sha256(salt + "SpeechRecognitionSessionClient3").
constexpr uint32_t kSpeechRecognitionSessionClient_Started_Name = 682478476;
// The 1163971459 value is based on sha256(salt + "SpeechRecognitionSessionClient4").
constexpr uint32_t kSpeechRecognitionSessionClient_AudioStarted_Name = 1163971459;
// The 2111438049 value is based on sha256(salt + "SpeechRecognitionSessionClient5").
constexpr uint32_t kSpeechRecognitionSessionClient_SoundStarted_Name = 2111438049;
// The 850067632 value is based on sha256(salt + "SpeechRecognitionSessionClient6").
constexpr uint32_t kSpeechRecognitionSessionClient_SoundEnded_Name = 850067632;
// The 1226301217 value is based on sha256(salt + "SpeechRecognitionSessionClient7").
constexpr uint32_t kSpeechRecognitionSessionClient_AudioEnded_Name = 1226301217;
// The 594089720 value is based on sha256(salt + "SpeechRecognitionSessionClient8").
constexpr uint32_t kSpeechRecognitionSessionClient_Ended_Name = 594089720;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_SPEECH_SPEECH_RECOGNIZER_MOJOM_SHARED_MESSAGE_IDS_H_