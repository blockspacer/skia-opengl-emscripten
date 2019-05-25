// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_TRIAL_COMPARISON_CERT_VERIFIER_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_TRIAL_COMPARISON_CERT_VERIFIER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace network {
namespace mojom {

namespace internal {


// The 671195383 value is based on sha256(salt + "TrialComparisonCertVerifierConfigClient1").
constexpr uint32_t kTrialComparisonCertVerifierConfigClient_OnTrialConfigUpdated_Name = 671195383;
// The 2042427620 value is based on sha256(salt + "TrialComparisonCertVerifierReportClient1").
constexpr uint32_t kTrialComparisonCertVerifierReportClient_SendTrialReport_Name = 2042427620;

}  // namespace internal
}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_TRIAL_COMPARISON_CERT_VERIFIER_MOJOM_SHARED_MESSAGE_IDS_H_