// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_TRIAL_COMPARISON_CERT_VERIFIER_MOJOM_TEST_UTILS_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_TRIAL_COMPARISON_CERT_VERIFIER_MOJOM_TEST_UTILS_H_

#include "services/network/public/mojom/trial_comparison_cert_verifier.mojom.h"


namespace network {
namespace mojom {


class  TrialComparisonCertVerifierConfigClientInterceptorForTesting : public TrialComparisonCertVerifierConfigClient {
  virtual TrialComparisonCertVerifierConfigClient* GetForwardingInterface() = 0;
  void OnTrialConfigUpdated(bool allowed) override;
};
class  TrialComparisonCertVerifierConfigClientAsyncWaiter {
 public:
  explicit TrialComparisonCertVerifierConfigClientAsyncWaiter(TrialComparisonCertVerifierConfigClient* proxy);
  ~TrialComparisonCertVerifierConfigClientAsyncWaiter();

 private:
  TrialComparisonCertVerifierConfigClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(TrialComparisonCertVerifierConfigClientAsyncWaiter);
};


class  TrialComparisonCertVerifierReportClientInterceptorForTesting : public TrialComparisonCertVerifierReportClient {
  virtual TrialComparisonCertVerifierReportClient* GetForwardingInterface() = 0;
  void SendTrialReport(const std::string& hostname, const scoped_refptr<net::X509Certificate>& cert, bool enable_rev_checking, bool require_rev_checking_local_anchors, bool enable_sha1_local_anchors, bool disable_symantec_enforcement, const net::CertVerifyResult& primary_result, const net::CertVerifyResult& trial_result) override;
};
class  TrialComparisonCertVerifierReportClientAsyncWaiter {
 public:
  explicit TrialComparisonCertVerifierReportClientAsyncWaiter(TrialComparisonCertVerifierReportClient* proxy);
  ~TrialComparisonCertVerifierReportClientAsyncWaiter();

 private:
  TrialComparisonCertVerifierReportClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(TrialComparisonCertVerifierReportClientAsyncWaiter);
};




}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_TRIAL_COMPARISON_CERT_VERIFIER_MOJOM_TEST_UTILS_H_