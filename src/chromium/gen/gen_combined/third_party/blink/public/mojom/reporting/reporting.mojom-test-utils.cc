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


#include "third_party/blink/public/mojom/reporting/reporting.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/mojom/base/time.mojom.h"
#include "url/mojom/url.mojom.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_REPORTING_REPORTING_MOJOM_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_REPORTING_REPORTING_MOJOM_JUMBO_H_
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "url/mojom/url_gurl_mojom_traits.h"
#endif


namespace blink {
namespace mojom {


void ReportingServiceProxyInterceptorForTesting::QueueInterventionReport(const GURL& url, const std::string& id, const std::string& message, const base::Optional<std::string>& source_file, int32_t line_number, int32_t column_number) {
  GetForwardingInterface()->QueueInterventionReport(std::move(url), std::move(id), std::move(message), std::move(source_file), std::move(line_number), std::move(column_number));
}
void ReportingServiceProxyInterceptorForTesting::QueueDeprecationReport(const GURL& url, const std::string& id, base::Optional<base::Time> anticipatedRemoval, const std::string& message, const base::Optional<std::string>& source_file, int32_t line_number, int32_t column_number) {
  GetForwardingInterface()->QueueDeprecationReport(std::move(url), std::move(id), std::move(anticipatedRemoval), std::move(message), std::move(source_file), std::move(line_number), std::move(column_number));
}
void ReportingServiceProxyInterceptorForTesting::QueueCspViolationReport(const GURL& url, const std::string& group, const std::string& document_url, const base::Optional<std::string>& referrer, const base::Optional<std::string>& blocked_url, const std::string& effective_directive, const std::string& original_policy, const base::Optional<std::string>& source_file, const base::Optional<std::string>& script_sample, const std::string& disposition, uint16_t status_code, int32_t line_number, int32_t column_number) {
  GetForwardingInterface()->QueueCspViolationReport(std::move(url), std::move(group), std::move(document_url), std::move(referrer), std::move(blocked_url), std::move(effective_directive), std::move(original_policy), std::move(source_file), std::move(script_sample), std::move(disposition), std::move(status_code), std::move(line_number), std::move(column_number));
}
void ReportingServiceProxyInterceptorForTesting::QueueFeaturePolicyViolationReport(const GURL& url, const std::string& policy_id, const std::string& disposition, const base::Optional<std::string>& message, const base::Optional<std::string>& source_file, int32_t line_number, int32_t column_number) {
  GetForwardingInterface()->QueueFeaturePolicyViolationReport(std::move(url), std::move(policy_id), std::move(disposition), std::move(message), std::move(source_file), std::move(line_number), std::move(column_number));
}
ReportingServiceProxyAsyncWaiter::ReportingServiceProxyAsyncWaiter(
    ReportingServiceProxy* proxy) : proxy_(proxy) {}

ReportingServiceProxyAsyncWaiter::~ReportingServiceProxyAsyncWaiter() = default;






}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif