// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_REPORTING_REPORTING_MOJOM_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_REPORTING_REPORTING_MOJOM_TEST_UTILS_H_

#include "third_party/blink/public/mojom/reporting/reporting.mojom.h"
#include "third_party/blink/public/common/common_export.h"


namespace blink {
namespace mojom {


class BLINK_COMMON_EXPORT ReportingServiceProxyInterceptorForTesting : public ReportingServiceProxy {
  virtual ReportingServiceProxy* GetForwardingInterface() = 0;
  void QueueInterventionReport(const GURL& url, const std::string& id, const std::string& message, const base::Optional<std::string>& source_file, int32_t line_number, int32_t column_number) override;
  void QueueDeprecationReport(const GURL& url, const std::string& id, base::Optional<base::Time> anticipatedRemoval, const std::string& message, const base::Optional<std::string>& source_file, int32_t line_number, int32_t column_number) override;
  void QueueCspViolationReport(const GURL& url, const std::string& group, const std::string& document_url, const base::Optional<std::string>& referrer, const base::Optional<std::string>& blocked_url, const std::string& effective_directive, const std::string& original_policy, const base::Optional<std::string>& source_file, const base::Optional<std::string>& script_sample, const std::string& disposition, uint16_t status_code, int32_t line_number, int32_t column_number) override;
  void QueueFeaturePolicyViolationReport(const GURL& url, const std::string& policy_id, const std::string& disposition, const base::Optional<std::string>& message, const base::Optional<std::string>& source_file, int32_t line_number, int32_t column_number) override;
};
class BLINK_COMMON_EXPORT ReportingServiceProxyAsyncWaiter {
 public:
  explicit ReportingServiceProxyAsyncWaiter(ReportingServiceProxy* proxy);
  ~ReportingServiceProxyAsyncWaiter();

 private:
  ReportingServiceProxy* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ReportingServiceProxyAsyncWaiter);
};




}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_REPORTING_REPORTING_MOJOM_TEST_UTILS_H_