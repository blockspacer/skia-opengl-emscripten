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


#include "third_party/blink/public/mojom/reporting/reporting.mojom-blink-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
#include "mojo/public/mojom/base/time.mojom-blink.h"
#include "url/mojom/url.mojom-blink.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_REPORTING_REPORTING_MOJOM_BLINK_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_REPORTING_REPORTING_MOJOM_BLINK_JUMBO_H_
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "third_party/blink/renderer/platform/mojo/kurl_struct_traits.h"
#endif


namespace blink {
namespace mojom {
namespace blink {


void ReportingServiceProxyInterceptorForTesting::QueueInterventionReport(const ::blink::KURL& url, const WTF::String& id, const WTF::String& message, const WTF::String& source_file, int32_t line_number, int32_t column_number) {
  GetForwardingInterface()->QueueInterventionReport(std::move(url), std::move(id), std::move(message), std::move(source_file), std::move(line_number), std::move(column_number));
}
void ReportingServiceProxyInterceptorForTesting::QueueDeprecationReport(const ::blink::KURL& url, const WTF::String& id, base::Optional<base::Time> anticipatedRemoval, const WTF::String& message, const WTF::String& source_file, int32_t line_number, int32_t column_number) {
  GetForwardingInterface()->QueueDeprecationReport(std::move(url), std::move(id), std::move(anticipatedRemoval), std::move(message), std::move(source_file), std::move(line_number), std::move(column_number));
}
void ReportingServiceProxyInterceptorForTesting::QueueCspViolationReport(const ::blink::KURL& url, const WTF::String& group, const WTF::String& document_url, const WTF::String& referrer, const WTF::String& blocked_url, const WTF::String& effective_directive, const WTF::String& original_policy, const WTF::String& source_file, const WTF::String& script_sample, const WTF::String& disposition, uint16_t status_code, int32_t line_number, int32_t column_number) {
  GetForwardingInterface()->QueueCspViolationReport(std::move(url), std::move(group), std::move(document_url), std::move(referrer), std::move(blocked_url), std::move(effective_directive), std::move(original_policy), std::move(source_file), std::move(script_sample), std::move(disposition), std::move(status_code), std::move(line_number), std::move(column_number));
}
void ReportingServiceProxyInterceptorForTesting::QueueFeaturePolicyViolationReport(const ::blink::KURL& url, const WTF::String& policy_id, const WTF::String& disposition, const WTF::String& message, const WTF::String& source_file, int32_t line_number, int32_t column_number) {
  GetForwardingInterface()->QueueFeaturePolicyViolationReport(std::move(url), std::move(policy_id), std::move(disposition), std::move(message), std::move(source_file), std::move(line_number), std::move(column_number));
}
ReportingServiceProxyAsyncWaiter::ReportingServiceProxyAsyncWaiter(
    ReportingServiceProxy* proxy) : proxy_(proxy) {}

ReportingServiceProxyAsyncWaiter::~ReportingServiceProxyAsyncWaiter() = default;






}  // namespace blink
}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif