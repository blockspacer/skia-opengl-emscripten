// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MIDI_MIDI_SERVICE_MOJOM_SHARED_MESSAGE_IDS_H_
#define MEDIA_MIDI_MIDI_SERVICE_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace midi {
namespace mojom {

namespace internal {


// The 531373289 value is based on sha256(salt + "MidiSessionClient1").
constexpr uint32_t kMidiSessionClient_AddInputPort_Name = 531373289;
// The 1274773448 value is based on sha256(salt + "MidiSessionClient2").
constexpr uint32_t kMidiSessionClient_AddOutputPort_Name = 1274773448;
// The 163062991 value is based on sha256(salt + "MidiSessionClient3").
constexpr uint32_t kMidiSessionClient_SetInputPortState_Name = 163062991;
// The 418260139 value is based on sha256(salt + "MidiSessionClient4").
constexpr uint32_t kMidiSessionClient_SetOutputPortState_Name = 418260139;
// The 318201769 value is based on sha256(salt + "MidiSessionClient5").
constexpr uint32_t kMidiSessionClient_SessionStarted_Name = 318201769;
// The 1775271256 value is based on sha256(salt + "MidiSessionClient6").
constexpr uint32_t kMidiSessionClient_AcknowledgeSentData_Name = 1775271256;
// The 569809635 value is based on sha256(salt + "MidiSessionClient7").
constexpr uint32_t kMidiSessionClient_DataReceived_Name = 569809635;
// The 504180855 value is based on sha256(salt + "MidiSessionProvider1").
constexpr uint32_t kMidiSessionProvider_StartSession_Name = 504180855;
// The 1045580337 value is based on sha256(salt + "MidiSession1").
constexpr uint32_t kMidiSession_SendData_Name = 1045580337;

}  // namespace internal
}  // namespace mojom
}  // namespace midi

#endif  // MEDIA_MIDI_MIDI_SERVICE_MOJOM_SHARED_MESSAGE_IDS_H_