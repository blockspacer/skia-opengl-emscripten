// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_SERVICE_TEST_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_SERVICE_TEST_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace network {
namespace mojom {

namespace internal {


// The 988251651 value is based on sha256(salt + "NetworkServiceTest1").
constexpr uint32_t kNetworkServiceTest_AddRules_Name = 988251651;
// The 241499256 value is based on sha256(salt + "NetworkServiceTest2").
constexpr uint32_t kNetworkServiceTest_SimulateNetworkChange_Name = 241499256;
// The 917065536 value is based on sha256(salt + "NetworkServiceTest3").
constexpr uint32_t kNetworkServiceTest_SimulateNetworkQualityChange_Name = 917065536;
// The 44430520 value is based on sha256(salt + "NetworkServiceTest4").
constexpr uint32_t kNetworkServiceTest_SimulateCrash_Name = 44430520;
// The 28980400 value is based on sha256(salt + "NetworkServiceTest5").
constexpr uint32_t kNetworkServiceTest_MockCertVerifierSetDefaultResult_Name = 28980400;
// The 1571177623 value is based on sha256(salt + "NetworkServiceTest6").
constexpr uint32_t kNetworkServiceTest_MockCertVerifierAddResultForCertAndHost_Name = 1571177623;
// The 893387868 value is based on sha256(salt + "NetworkServiceTest7").
constexpr uint32_t kNetworkServiceTest_SetShouldRequireCT_Name = 893387868;
// The 1538465550 value is based on sha256(salt + "NetworkServiceTest8").
constexpr uint32_t kNetworkServiceTest_SetTransportSecurityStateSource_Name = 1538465550;
// The 262969647 value is based on sha256(salt + "NetworkServiceTest9").
constexpr uint32_t kNetworkServiceTest_CrashOnResolveHost_Name = 262969647;
// The 212208601 value is based on sha256(salt + "NetworkServiceTest10").
constexpr uint32_t kNetworkServiceTest_CrashOnGetCookieList_Name = 212208601;
// The 386344175 value is based on sha256(salt + "NetworkServiceTest11").
constexpr uint32_t kNetworkServiceTest_GetLatestMemoryPressureLevel_Name = 386344175;
// The 697905039 value is based on sha256(salt + "NetworkServiceTest12").
constexpr uint32_t kNetworkServiceTest_GetEnvironmentVariableValue_Name = 697905039;

}  // namespace internal
}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_SERVICE_TEST_MOJOM_SHARED_MESSAGE_IDS_H_