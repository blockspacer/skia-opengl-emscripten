// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_SERVICE_TEST_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_SERVICE_TEST_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace network {
namespace mojom {

namespace internal {


// The 918113594 value is based on sha256(salt + "NetworkServiceTest1").
constexpr uint32_t kNetworkServiceTest_AddRules_Name = 918113594;
// The 1008326025 value is based on sha256(salt + "NetworkServiceTest2").
constexpr uint32_t kNetworkServiceTest_SimulateNetworkChange_Name = 1008326025;
// The 386989862 value is based on sha256(salt + "NetworkServiceTest3").
constexpr uint32_t kNetworkServiceTest_SimulateNetworkQualityChange_Name = 386989862;
// The 600531095 value is based on sha256(salt + "NetworkServiceTest4").
constexpr uint32_t kNetworkServiceTest_SimulateCrash_Name = 600531095;
// The 1226229137 value is based on sha256(salt + "NetworkServiceTest5").
constexpr uint32_t kNetworkServiceTest_MockCertVerifierSetDefaultResult_Name = 1226229137;
// The 226905117 value is based on sha256(salt + "NetworkServiceTest6").
constexpr uint32_t kNetworkServiceTest_MockCertVerifierAddResultForCertAndHost_Name = 226905117;
// The 1887648015 value is based on sha256(salt + "NetworkServiceTest7").
constexpr uint32_t kNetworkServiceTest_SetShouldRequireCT_Name = 1887648015;
// The 1316330312 value is based on sha256(salt + "NetworkServiceTest8").
constexpr uint32_t kNetworkServiceTest_SetTransportSecurityStateSource_Name = 1316330312;
// The 1352749232 value is based on sha256(salt + "NetworkServiceTest9").
constexpr uint32_t kNetworkServiceTest_CrashOnResolveHost_Name = 1352749232;
// The 1762245305 value is based on sha256(salt + "NetworkServiceTest10").
constexpr uint32_t kNetworkServiceTest_CrashOnGetCookieList_Name = 1762245305;
// The 1332785061 value is based on sha256(salt + "NetworkServiceTest11").
constexpr uint32_t kNetworkServiceTest_GetLatestMemoryPressureLevel_Name = 1332785061;
// The 1379495791 value is based on sha256(salt + "NetworkServiceTest12").
constexpr uint32_t kNetworkServiceTest_GetEnvironmentVariableValue_Name = 1379495791;

}  // namespace internal
}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_SERVICE_TEST_MOJOM_SHARED_MESSAGE_IDS_H_