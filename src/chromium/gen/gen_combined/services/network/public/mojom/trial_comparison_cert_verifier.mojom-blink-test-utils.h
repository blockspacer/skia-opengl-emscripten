// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_TRIAL_COMPARISON_CERT_VERIFIER_MOJOM_BLINK_TEST_UTILS_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_TRIAL_COMPARISON_CERT_VERIFIER_MOJOM_BLINK_TEST_UTILS_H_

#include "services/network/public/mojom/trial_comparison_cert_verifier.mojom-blink.h"
#include "third_party/blink/public/platform/web_common.h"


namespace network {
namespace mojom {
namespace blink {


class BLINK_PLATFORM_EXPORT TrialComparisonCertVerifierConfigClientInterceptorForTesting : public TrialComparisonCertVerifierConfigClient {
  virtual TrialComparisonCertVerifierConfigClient* GetForwardingInterface() = 0;
  void OnTrialConfigUpdated(bool allowed) override;
};
class BLINK_PLATFORM_EXPORT TrialComparisonCertVerifierConfigClientAsyncWaiter {
 public:
  explicit TrialComparisonCertVerifierConfigClientAsyncWaiter(TrialComparisonCertVerifierConfigClient* proxy);
  ~TrialComparisonCertVerifierConfigClientAsyncWaiter();

 private:
  TrialComparisonCertVerifierConfigClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(TrialComparisonCertVerifierConfigClientAsyncWaiter);
};


class BLINK_PLATFORM_EXPORT TrialComparisonCertVerifierReportClientInterceptorForTesting : public TrialComparisonCertVerifierReportClient {
  virtual TrialComparisonCertVerifierReportClient* GetForwardingInterface() = 0;
  void SendTrialReport(const WTF::String& hostname, ::network::mojom::blink::X509CertificatePtr cert, bool enable_rev_checking, bool require_rev_checking_local_anchors, bool enable_sha1_local_anchors, bool disable_symantec_enforcement, ::network::mojom::blink::CertVerifyResultPtr primary_result, ::network::mojom::blink::CertVerifyResultPtr trial_result) override;
};
class BLINK_PLATFORM_EXPORT TrialComparisonCertVerifierReportClientAsyncWaiter {
 public:
  explicit TrialComparisonCertVerifierReportClientAsyncWaiter(TrialComparisonCertVerifierReportClient* proxy);
  ~TrialComparisonCertVerifierReportClientAsyncWaiter();

 private:
  TrialComparisonCertVerifierReportClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(TrialComparisonCertVerifierReportClientAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_TRIAL_COMPARISON_CERT_VERIFIER_MOJOM_BLINK_TEST_UTILS_H_