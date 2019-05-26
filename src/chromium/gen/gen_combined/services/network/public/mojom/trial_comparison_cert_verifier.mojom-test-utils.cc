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


#include "services/network/public/mojom/trial_comparison_cert_verifier.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "services/network/public/mojom/network_param.mojom.h"


#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_TRIAL_COMPARISON_CERT_VERIFIER_MOJOM_JUMBO_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_TRIAL_COMPARISON_CERT_VERIFIER_MOJOM_JUMBO_H_
#include "services/network/public/cpp/net_ipc_param_traits.h"
#include "services/network/public/cpp/network_param_mojom_traits.h"
#endif


namespace network {
namespace mojom {


void TrialComparisonCertVerifierConfigClientInterceptorForTesting::OnTrialConfigUpdated(bool allowed) {
  GetForwardingInterface()->OnTrialConfigUpdated(std::move(allowed));
}
TrialComparisonCertVerifierConfigClientAsyncWaiter::TrialComparisonCertVerifierConfigClientAsyncWaiter(
    TrialComparisonCertVerifierConfigClient* proxy) : proxy_(proxy) {}

TrialComparisonCertVerifierConfigClientAsyncWaiter::~TrialComparisonCertVerifierConfigClientAsyncWaiter() = default;




void TrialComparisonCertVerifierReportClientInterceptorForTesting::SendTrialReport(const std::string& hostname, const scoped_refptr<net::X509Certificate>& cert, bool enable_rev_checking, bool require_rev_checking_local_anchors, bool enable_sha1_local_anchors, bool disable_symantec_enforcement, const net::CertVerifyResult& primary_result, const net::CertVerifyResult& trial_result) {
  GetForwardingInterface()->SendTrialReport(std::move(hostname), std::move(cert), std::move(enable_rev_checking), std::move(require_rev_checking_local_anchors), std::move(enable_sha1_local_anchors), std::move(disable_symantec_enforcement), std::move(primary_result), std::move(trial_result));
}
TrialComparisonCertVerifierReportClientAsyncWaiter::TrialComparisonCertVerifierReportClientAsyncWaiter(
    TrialComparisonCertVerifierReportClient* proxy) : proxy_(proxy) {}

TrialComparisonCertVerifierReportClientAsyncWaiter::~TrialComparisonCertVerifierReportClientAsyncWaiter() = default;






}  // namespace mojom
}  // namespace network

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif