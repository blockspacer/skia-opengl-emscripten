// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_SERVICE_TEST_MOJOM_BLINK_TEST_UTILS_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_SERVICE_TEST_MOJOM_BLINK_TEST_UTILS_H_

#include "services/network/public/mojom/network_service_test.mojom-blink.h"
#include "third_party/blink/public/platform/web_common.h"


namespace network {
namespace mojom {
namespace blink {


class BLINK_PLATFORM_EXPORT NetworkServiceTestInterceptorForTesting : public NetworkServiceTest {
  virtual NetworkServiceTest* GetForwardingInterface() = 0;
  void AddRules(WTF::Vector<RulePtr> rules, AddRulesCallback callback) override;
  void SimulateNetworkChange(::network::mojom::blink::ConnectionType type, SimulateNetworkChangeCallback callback) override;
  void SimulateNetworkQualityChange(::network::mojom::blink::EffectiveConnectionType type, SimulateNetworkQualityChangeCallback callback) override;
  void SimulateCrash() override;
  void MockCertVerifierSetDefaultResult(int32_t default_result, MockCertVerifierSetDefaultResultCallback callback) override;
  void MockCertVerifierAddResultForCertAndHost(::network::mojom::blink::X509CertificatePtr cert, const WTF::String& host_pattern, ::network::mojom::blink::CertVerifyResultPtr verify_result, int32_t rv, MockCertVerifierAddResultForCertAndHostCallback callback) override;
  void SetShouldRequireCT(NetworkServiceTest::ShouldRequireCT required, SetShouldRequireCTCallback callback) override;
  void SetTransportSecurityStateSource(uint16_t reporting_port, SetTransportSecurityStateSourceCallback callback) override;
  void CrashOnResolveHost(const WTF::String& host) override;
  void CrashOnGetCookieList() override;
  void GetLatestMemoryPressureLevel(GetLatestMemoryPressureLevelCallback callback) override;
  void GetEnvironmentVariableValue(const WTF::String& name, GetEnvironmentVariableValueCallback callback) override;
};
class BLINK_PLATFORM_EXPORT NetworkServiceTestAsyncWaiter {
 public:
  explicit NetworkServiceTestAsyncWaiter(NetworkServiceTest* proxy);
  ~NetworkServiceTestAsyncWaiter();
  void AddRules(
      WTF::Vector<RulePtr> rules);
  void SimulateNetworkChange(
      ::network::mojom::blink::ConnectionType type);
  void SimulateNetworkQualityChange(
      ::network::mojom::blink::EffectiveConnectionType type);
  void MockCertVerifierSetDefaultResult(
      int32_t default_result);
  void MockCertVerifierAddResultForCertAndHost(
      ::network::mojom::blink::X509CertificatePtr cert, const WTF::String& host_pattern, ::network::mojom::blink::CertVerifyResultPtr verify_result, int32_t rv);
  void SetShouldRequireCT(
      NetworkServiceTest::ShouldRequireCT required);
  void SetTransportSecurityStateSource(
      uint16_t reporting_port);
  void GetLatestMemoryPressureLevel(
      ::mojo_base::mojom::blink::MemoryPressureLevel* out_memory_pressure_level);
  void GetEnvironmentVariableValue(
      const WTF::String& name, WTF::String* out_value);

 private:
  NetworkServiceTest* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(NetworkServiceTestAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_SERVICE_TEST_MOJOM_BLINK_TEST_UTILS_H_