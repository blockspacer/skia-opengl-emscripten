// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_REPORTING_REPORTING_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_REPORTING_REPORTING_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


// The 1369328857 value is based on sha256(salt + "ReportingServiceProxy1").
constexpr uint32_t kReportingServiceProxy_QueueInterventionReport_Name = 1369328857;
// The 872033882 value is based on sha256(salt + "ReportingServiceProxy2").
constexpr uint32_t kReportingServiceProxy_QueueDeprecationReport_Name = 872033882;
// The 636537312 value is based on sha256(salt + "ReportingServiceProxy3").
constexpr uint32_t kReportingServiceProxy_QueueCspViolationReport_Name = 636537312;
// The 1481981724 value is based on sha256(salt + "ReportingServiceProxy4").
constexpr uint32_t kReportingServiceProxy_QueueFeaturePolicyViolationReport_Name = 1481981724;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_REPORTING_REPORTING_MOJOM_SHARED_MESSAGE_IDS_H_