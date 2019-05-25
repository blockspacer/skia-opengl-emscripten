// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MIDI_MIDI_SERVICE_MOJOM_SHARED_MESSAGE_IDS_H_
#define MEDIA_MIDI_MIDI_SERVICE_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace midi {
namespace mojom {

namespace internal {


// The 1734973245 value is based on sha256(salt + "MidiSessionClient1").
constexpr uint32_t kMidiSessionClient_AddInputPort_Name = 1734973245;
// The 257457434 value is based on sha256(salt + "MidiSessionClient2").
constexpr uint32_t kMidiSessionClient_AddOutputPort_Name = 257457434;
// The 807515995 value is based on sha256(salt + "MidiSessionClient3").
constexpr uint32_t kMidiSessionClient_SetInputPortState_Name = 807515995;
// The 794022520 value is based on sha256(salt + "MidiSessionClient4").
constexpr uint32_t kMidiSessionClient_SetOutputPortState_Name = 794022520;
// The 405425724 value is based on sha256(salt + "MidiSessionClient5").
constexpr uint32_t kMidiSessionClient_SessionStarted_Name = 405425724;
// The 1948735453 value is based on sha256(salt + "MidiSessionClient6").
constexpr uint32_t kMidiSessionClient_AcknowledgeSentData_Name = 1948735453;
// The 1796115990 value is based on sha256(salt + "MidiSessionClient7").
constexpr uint32_t kMidiSessionClient_DataReceived_Name = 1796115990;
// The 958703052 value is based on sha256(salt + "MidiSessionProvider1").
constexpr uint32_t kMidiSessionProvider_StartSession_Name = 958703052;
// The 1373405827 value is based on sha256(salt + "MidiSession1").
constexpr uint32_t kMidiSession_SendData_Name = 1373405827;

}  // namespace internal
}  // namespace mojom
}  // namespace midi

#endif  // MEDIA_MIDI_MIDI_SERVICE_MOJOM_SHARED_MESSAGE_IDS_H_