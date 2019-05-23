// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_SERVICE_TEST_MOJOM_TEST_UTILS_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_SERVICE_TEST_MOJOM_TEST_UTILS_H_

#include "services/network/public/mojom/network_service_test.mojom.h"


namespace network {
namespace mojom {


class  NetworkServiceTestInterceptorForTesting : public NetworkServiceTest {
  virtual NetworkServiceTest* GetForwardingInterface() = 0;
  void AddRules(std::vector<RulePtr> rules, AddRulesCallback callback) override;
  void SimulateNetworkChange(::network::mojom::ConnectionType type, SimulateNetworkChangeCallback callback) override;
  void SimulateNetworkQualityChange(net::EffectiveConnectionType type, SimulateNetworkQualityChangeCallback callback) override;
  void SimulateCrash() override;
  void MockCertVerifierSetDefaultResult(int32_t default_result, MockCertVerifierSetDefaultResultCallback callback) override;
  void MockCertVerifierAddResultForCertAndHost(const scoped_refptr<net::X509Certificate>& cert, const std::string& host_pattern, const net::CertVerifyResult& verify_result, int32_t rv, MockCertVerifierAddResultForCertAndHostCallback callback) override;
  void SetShouldRequireCT(NetworkServiceTest::ShouldRequireCT required, SetShouldRequireCTCallback callback) override;
  void SetTransportSecurityStateSource(uint16_t reporting_port, SetTransportSecurityStateSourceCallback callback) override;
  void CrashOnResolveHost(const std::string& host) override;
  void CrashOnGetCookieList() override;
  void GetLatestMemoryPressureLevel(GetLatestMemoryPressureLevelCallback callback) override;
  void GetEnvironmentVariableValue(const std::string& name, GetEnvironmentVariableValueCallback callback) override;
};
class  NetworkServiceTestAsyncWaiter {
 public:
  explicit NetworkServiceTestAsyncWaiter(NetworkServiceTest* proxy);
  ~NetworkServiceTestAsyncWaiter();
  void AddRules(
      std::vector<RulePtr> rules);
  void SimulateNetworkChange(
      ::network::mojom::ConnectionType type);
  void SimulateNetworkQualityChange(
      net::EffectiveConnectionType type);
  void MockCertVerifierSetDefaultResult(
      int32_t default_result);
  void MockCertVerifierAddResultForCertAndHost(
      const scoped_refptr<net::X509Certificate>& cert, const std::string& host_pattern, const net::CertVerifyResult& verify_result, int32_t rv);
  void SetShouldRequireCT(
      NetworkServiceTest::ShouldRequireCT required);
  void SetTransportSecurityStateSource(
      uint16_t reporting_port);
  void GetLatestMemoryPressureLevel(
      base::MemoryPressureListener::MemoryPressureLevel* out_memory_pressure_level);
  void GetEnvironmentVariableValue(
      const std::string& name, std::string* out_value);

 private:
  NetworkServiceTest* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(NetworkServiceTestAsyncWaiter);
};




}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_SERVICE_TEST_MOJOM_TEST_UTILS_H_