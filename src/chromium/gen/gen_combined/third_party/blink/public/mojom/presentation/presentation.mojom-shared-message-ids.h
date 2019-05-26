// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_PRESENTATION_PRESENTATION_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_PRESENTATION_PRESENTATION_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


// The 318496509 value is based on sha256(salt + "PresentationConnection1").
constexpr uint32_t kPresentationConnection_OnMessage_Name = 318496509;
// The 28839945 value is based on sha256(salt + "PresentationConnection2").
constexpr uint32_t kPresentationConnection_DidChangeState_Name = 28839945;
// The 2129144083 value is based on sha256(salt + "PresentationConnection3").
constexpr uint32_t kPresentationConnection_DidClose_Name = 2129144083;
// The 1915992794 value is based on sha256(salt + "PresentationService1").
constexpr uint32_t kPresentationService_SetController_Name = 1915992794;
// The 1794582317 value is based on sha256(salt + "PresentationService2").
constexpr uint32_t kPresentationService_SetReceiver_Name = 1794582317;
// The 1407923756 value is based on sha256(salt + "PresentationService3").
constexpr uint32_t kPresentationService_SetDefaultPresentationUrls_Name = 1407923756;
// The 514063488 value is based on sha256(salt + "PresentationService4").
constexpr uint32_t kPresentationService_ListenForScreenAvailability_Name = 514063488;
// The 462806110 value is based on sha256(salt + "PresentationService5").
constexpr uint32_t kPresentationService_StopListeningForScreenAvailability_Name = 462806110;
// The 446538639 value is based on sha256(salt + "PresentationService6").
constexpr uint32_t kPresentationService_StartPresentation_Name = 446538639;
// The 713884591 value is based on sha256(salt + "PresentationService7").
constexpr uint32_t kPresentationService_ReconnectPresentation_Name = 713884591;
// The 199791275 value is based on sha256(salt + "PresentationService8").
constexpr uint32_t kPresentationService_CloseConnection_Name = 199791275;
// The 294807347 value is based on sha256(salt + "PresentationService9").
constexpr uint32_t kPresentationService_Terminate_Name = 294807347;
// The 2071125721 value is based on sha256(salt + "PresentationController1").
constexpr uint32_t kPresentationController_OnScreenAvailabilityUpdated_Name = 2071125721;
// The 2029252067 value is based on sha256(salt + "PresentationController2").
constexpr uint32_t kPresentationController_OnDefaultPresentationStarted_Name = 2029252067;
// The 808953628 value is based on sha256(salt + "PresentationController3").
constexpr uint32_t kPresentationController_OnConnectionStateChanged_Name = 808953628;
// The 220428712 value is based on sha256(salt + "PresentationController4").
constexpr uint32_t kPresentationController_OnConnectionClosed_Name = 220428712;
// The 183132890 value is based on sha256(salt + "PresentationReceiver1").
constexpr uint32_t kPresentationReceiver_OnReceiverConnectionAvailable_Name = 183132890;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_PRESENTATION_PRESENTATION_MOJOM_SHARED_MESSAGE_IDS_H_