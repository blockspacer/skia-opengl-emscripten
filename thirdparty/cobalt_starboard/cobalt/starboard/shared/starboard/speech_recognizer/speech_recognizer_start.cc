// Copyright 2017 The Cobalt Authors. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "starboard/speech_recognizer.h"

#if SB_HAS(SPEECH_RECOGNIZER) && SB_API_VERSION >= 5

#include "starboard/shared/starboard/speech_recognizer/speech_recognizer_internal.h"

bool SbSpeechRecognizerStart(SbSpeechRecognizer recognizer,
                             const SbSpeechConfiguration* configuration) {
  return SbSpeechRecognizerIsValid(recognizer)
             ? recognizer->Start(configuration)
             : false;
}

#endif  // SB_HAS(SPEECH_RECOGNIZER) && SB_API_VERSION >= 5
