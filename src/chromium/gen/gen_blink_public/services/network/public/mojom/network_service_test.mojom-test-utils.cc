// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#elif defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4056)
#pragma warning(disable:4065)
#pragma warning(disable:4756)
#endif


#include "services/network/public/mojom/network_service_test.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/mojom/base/memory_pressure_level.mojom.h"
#include "services/network/public/mojom/network_change_manager.mojom.h"
#include "services/network/public/mojom/network_param.mojom.h"
#include "services/network/public/mojom/network_types.mojom.h"


#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_SERVICE_TEST_MOJOM_JUMBO_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_SERVICE_TEST_MOJOM_JUMBO_H_
#include "mojo/public/cpp/base/memory_pressure_level_mojom_traits.h"
#include "services/network/public/cpp/net_ipc_param_traits.h"
#include "services/network/public/cpp/network_ipc_param_traits.h"
#include "services/network/public/cpp/network_param_mojom_traits.h"
#endif


namespace network {
namespace mojom {


void NetworkServiceTestInterceptorForTesting::AddRules(std::vector<RulePtr> rules, AddRulesCallback callback) {
  GetForwardingInterface()->AddRules(std::move(rules), std::move(callback));
}
void NetworkServiceTestInterceptorForTesting::SimulateNetworkChange(::network::mojom::ConnectionType type, SimulateNetworkChangeCallback callback) {
  GetForwardingInterface()->SimulateNetworkChange(std::move(type), std::move(callback));
}
void NetworkServiceTestInterceptorForTesting::SimulateNetworkQualityChange(net::EffectiveConnectionType type, SimulateNetworkQualityChangeCallback callback) {
  GetForwardingInterface()->SimulateNetworkQualityChange(std::move(type), std::move(callback));
}
void NetworkServiceTestInterceptorForTesting::SimulateCrash() {
  GetForwardingInterface()->SimulateCrash();
}
void NetworkServiceTestInterceptorForTesting::MockCertVerifierSetDefaultResult(int32_t default_result, MockCertVerifierSetDefaultResultCallback callback) {
  GetForwardingInterface()->MockCertVerifierSetDefaultResult(std::move(default_result), std::move(callback));
}
void NetworkServiceTestInterceptorForTesting::MockCertVerifierAddResultForCertAndHost(const scoped_refptr<net::X509Certificate>& cert, const std::string& host_pattern, const net::CertVerifyResult& verify_result, int32_t rv, MockCertVerifierAddResultForCertAndHostCallback callback) {
  GetForwardingInterface()->MockCertVerifierAddResultForCertAndHost(std::move(cert), std::move(host_pattern), std::move(verify_result), std::move(rv), std::move(callback));
}
void NetworkServiceTestInterceptorForTesting::SetShouldRequireCT(NetworkServiceTest::ShouldRequireCT required, SetShouldRequireCTCallback callback) {
  GetForwardingInterface()->SetShouldRequireCT(std::move(required), std::move(callback));
}
void NetworkServiceTestInterceptorForTesting::SetTransportSecurityStateSource(uint16_t reporting_port, SetTransportSecurityStateSourceCallback callback) {
  GetForwardingInterface()->SetTransportSecurityStateSource(std::move(reporting_port), std::move(callback));
}
void NetworkServiceTestInterceptorForTesting::CrashOnResolveHost(const std::string& host) {
  GetForwardingInterface()->CrashOnResolveHost(std::move(host));
}
void NetworkServiceTestInterceptorForTesting::CrashOnGetCookieList() {
  GetForwardingInterface()->CrashOnGetCookieList();
}
void NetworkServiceTestInterceptorForTesting::GetLatestMemoryPressureLevel(GetLatestMemoryPressureLevelCallback callback) {
  GetForwardingInterface()->GetLatestMemoryPressureLevel(std::move(callback));
}
void NetworkServiceTestInterceptorForTesting::GetEnvironmentVariableValue(const std::string& name, GetEnvironmentVariableValueCallback callback) {
  GetForwardingInterface()->GetEnvironmentVariableValue(std::move(name), std::move(callback));
}
NetworkServiceTestAsyncWaiter::NetworkServiceTestAsyncWaiter(
    NetworkServiceTest* proxy) : proxy_(proxy) {}

NetworkServiceTestAsyncWaiter::~NetworkServiceTestAsyncWaiter() = default;

void NetworkServiceTestAsyncWaiter::AddRules(
    std::vector<RulePtr> rules) {
  base::RunLoop loop;
  proxy_->AddRules(std::move(rules),
      base::BindOnce(
          [](base::RunLoop* loop) {
            loop->Quit();
          },
          &loop));
  loop.Run();
}
void NetworkServiceTestAsyncWaiter::SimulateNetworkChange(
    ::network::mojom::ConnectionType type) {
  base::RunLoop loop;
  proxy_->SimulateNetworkChange(std::move(type),
      base::BindOnce(
          [](base::RunLoop* loop) {
            loop->Quit();
          },
          &loop));
  loop.Run();
}
void NetworkServiceTestAsyncWaiter::SimulateNetworkQualityChange(
    net::EffectiveConnectionType type) {
  base::RunLoop loop;
  proxy_->SimulateNetworkQualityChange(std::move(type),
      base::BindOnce(
          [](base::RunLoop* loop) {
            loop->Quit();
          },
          &loop));
  loop.Run();
}
void NetworkServiceTestAsyncWaiter::MockCertVerifierSetDefaultResult(
    int32_t default_result) {
  base::RunLoop loop;
  proxy_->MockCertVerifierSetDefaultResult(std::move(default_result),
      base::BindOnce(
          [](base::RunLoop* loop) {
            loop->Quit();
          },
          &loop));
  loop.Run();
}
void NetworkServiceTestAsyncWaiter::MockCertVerifierAddResultForCertAndHost(
    const scoped_refptr<net::X509Certificate>& cert, const std::string& host_pattern, const net::CertVerifyResult& verify_result, int32_t rv) {
  base::RunLoop loop;
  proxy_->MockCertVerifierAddResultForCertAndHost(std::move(cert),std::move(host_pattern),std::move(verify_result),std::move(rv),
      base::BindOnce(
          [](base::RunLoop* loop) {
            loop->Quit();
          },
          &loop));
  loop.Run();
}
void NetworkServiceTestAsyncWaiter::SetShouldRequireCT(
    NetworkServiceTest::ShouldRequireCT required) {
  base::RunLoop loop;
  proxy_->SetShouldRequireCT(std::move(required),
      base::BindOnce(
          [](base::RunLoop* loop) {
            loop->Quit();
          },
          &loop));
  loop.Run();
}
void NetworkServiceTestAsyncWaiter::SetTransportSecurityStateSource(
    uint16_t reporting_port) {
  base::RunLoop loop;
  proxy_->SetTransportSecurityStateSource(std::move(reporting_port),
      base::BindOnce(
          [](base::RunLoop* loop) {
            loop->Quit();
          },
          &loop));
  loop.Run();
}
void NetworkServiceTestAsyncWaiter::GetLatestMemoryPressureLevel(
    base::MemoryPressureListener::MemoryPressureLevel* out_memory_pressure_level) {
  base::RunLoop loop;
  proxy_->GetLatestMemoryPressureLevel(
      base::BindOnce(
          [](base::RunLoop* loop,
             base::MemoryPressureListener::MemoryPressureLevel* out_memory_pressure_level
,
             base::MemoryPressureListener::MemoryPressureLevel memory_pressure_level) {*out_memory_pressure_level = std::move(memory_pressure_level);
            loop->Quit();
          },
          &loop,
          out_memory_pressure_level));
  loop.Run();
}
void NetworkServiceTestAsyncWaiter::GetEnvironmentVariableValue(
    const std::string& name, std::string* out_value) {
  base::RunLoop loop;
  proxy_->GetEnvironmentVariableValue(std::move(name),
      base::BindOnce(
          [](base::RunLoop* loop,
             std::string* out_value
,
             const std::string& value) {*out_value = std::move(value);
            loop->Quit();
          },
          &loop,
          out_value));
  loop.Run();
}





}  // namespace mojom
}  // namespace network

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif