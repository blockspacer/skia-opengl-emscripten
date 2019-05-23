// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_PRESENTATION_PRESENTATION_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_PRESENTATION_PRESENTATION_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


// The 1421392900 value is based on sha256(salt + "PresentationConnection1").
constexpr uint32_t kPresentationConnection_OnMessage_Name = 1421392900;
// The 1849593003 value is based on sha256(salt + "PresentationConnection2").
constexpr uint32_t kPresentationConnection_DidChangeState_Name = 1849593003;
// The 2072778190 value is based on sha256(salt + "PresentationConnection3").
constexpr uint32_t kPresentationConnection_DidClose_Name = 2072778190;
// The 1446167181 value is based on sha256(salt + "PresentationService1").
constexpr uint32_t kPresentationService_SetController_Name = 1446167181;
// The 1636644527 value is based on sha256(salt + "PresentationService2").
constexpr uint32_t kPresentationService_SetReceiver_Name = 1636644527;
// The 1504795557 value is based on sha256(salt + "PresentationService3").
constexpr uint32_t kPresentationService_SetDefaultPresentationUrls_Name = 1504795557;
// The 768309205 value is based on sha256(salt + "PresentationService4").
constexpr uint32_t kPresentationService_ListenForScreenAvailability_Name = 768309205;
// The 1537962955 value is based on sha256(salt + "PresentationService5").
constexpr uint32_t kPresentationService_StopListeningForScreenAvailability_Name = 1537962955;
// The 736137901 value is based on sha256(salt + "PresentationService6").
constexpr uint32_t kPresentationService_StartPresentation_Name = 736137901;
// The 261824753 value is based on sha256(salt + "PresentationService7").
constexpr uint32_t kPresentationService_ReconnectPresentation_Name = 261824753;
// The 225381494 value is based on sha256(salt + "PresentationService8").
constexpr uint32_t kPresentationService_CloseConnection_Name = 225381494;
// The 1860942821 value is based on sha256(salt + "PresentationService9").
constexpr uint32_t kPresentationService_Terminate_Name = 1860942821;
// The 63963637 value is based on sha256(salt + "PresentationController1").
constexpr uint32_t kPresentationController_OnScreenAvailabilityUpdated_Name = 63963637;
// The 536548752 value is based on sha256(salt + "PresentationController2").
constexpr uint32_t kPresentationController_OnDefaultPresentationStarted_Name = 536548752;
// The 481077377 value is based on sha256(salt + "PresentationController3").
constexpr uint32_t kPresentationController_OnConnectionStateChanged_Name = 481077377;
// The 1584047138 value is based on sha256(salt + "PresentationController4").
constexpr uint32_t kPresentationController_OnConnectionClosed_Name = 1584047138;
// The 178040198 value is based on sha256(salt + "PresentationReceiver1").
constexpr uint32_t kPresentationReceiver_OnReceiverConnectionAvailable_Name = 178040198;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_PRESENTATION_PRESENTATION_MOJOM_SHARED_MESSAGE_IDS_H_