// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_REPORTING_REPORTING_MOJOM_BLINK_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_REPORTING_REPORTING_MOJOM_BLINK_TEST_UTILS_H_

#include "third_party/blink/public/mojom/reporting/reporting.mojom-blink.h"
#include "third_party/blink/renderer/platform/platform_export.h"


namespace blink {
namespace mojom {
namespace blink {


class PLATFORM_EXPORT ReportingServiceProxyInterceptorForTesting : public ReportingServiceProxy {
  virtual ReportingServiceProxy* GetForwardingInterface() = 0;
  void QueueInterventionReport(const ::blink::KURL& url, const WTF::String& id, const WTF::String& message, const WTF::String& source_file, int32_t line_number, int32_t column_number) override;
  void QueueDeprecationReport(const ::blink::KURL& url, const WTF::String& id, base::Optional<base::Time> anticipatedRemoval, const WTF::String& message, const WTF::String& source_file, int32_t line_number, int32_t column_number) override;
  void QueueCspViolationReport(const ::blink::KURL& url, const WTF::String& group, const WTF::String& document_url, const WTF::String& referrer, const WTF::String& blocked_url, const WTF::String& effective_directive, const WTF::String& original_policy, const WTF::String& source_file, const WTF::String& script_sample, const WTF::String& disposition, uint16_t status_code, int32_t line_number, int32_t column_number) override;
  void QueueFeaturePolicyViolationReport(const ::blink::KURL& url, const WTF::String& policy_id, const WTF::String& disposition, const WTF::String& message, const WTF::String& source_file, int32_t line_number, int32_t column_number) override;
};
class PLATFORM_EXPORT ReportingServiceProxyAsyncWaiter {
 public:
  explicit ReportingServiceProxyAsyncWaiter(ReportingServiceProxy* proxy);
  ~ReportingServiceProxyAsyncWaiter();

 private:
  ReportingServiceProxy* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ReportingServiceProxyAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_REPORTING_REPORTING_MOJOM_BLINK_TEST_UTILS_H_