// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_METRICS_PUBLIC_INTERFACES_SINGLE_SAMPLE_METRICS_MOJOM_FORWARD_H_
#define COMPONENTS_METRICS_PUBLIC_INTERFACES_SINGLE_SAMPLE_METRICS_MOJOM_FORWARD_H_



#include "mojo/public/cpp/bindings/associated_interface_ptr.h"
#include "mojo/public/cpp/bindings/associated_interface_ptr_info.h"
#include "mojo/public/cpp/bindings/associated_interface_request.h"
#include "mojo/public/cpp/bindings/interface_ptr.h"
#include "mojo/public/cpp/bindings/interface_request.h"
#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/pending_associated_receiver.h"
#include "mojo/public/cpp/bindings/pending_associated_remote.h"
#include "mojo/public/cpp/bindings/pending_receiver.h"
#include "mojo/public/cpp/bindings/pending_remote.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"
#include "mojo/public/cpp/bindings/thread_safe_interface_ptr.h"






namespace metrics {
namespace mojom {
class SingleSampleMetricsProvider;
using SingleSampleMetricsProviderPtr = mojo::InterfacePtr<SingleSampleMetricsProvider>;
using SingleSampleMetricsProviderPtrInfo = mojo::InterfacePtrInfo<SingleSampleMetricsProvider>;
using ThreadSafeSingleSampleMetricsProviderPtr =
    mojo::ThreadSafeInterfacePtr<SingleSampleMetricsProvider>;
using SingleSampleMetricsProviderRequest = mojo::InterfaceRequest<SingleSampleMetricsProvider>;
using SingleSampleMetricsProviderAssociatedPtr =
    mojo::AssociatedInterfacePtr<SingleSampleMetricsProvider>;
using ThreadSafeSingleSampleMetricsProviderAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<SingleSampleMetricsProvider>;
using SingleSampleMetricsProviderAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<SingleSampleMetricsProvider>;
using SingleSampleMetricsProviderAssociatedRequest =
    mojo::AssociatedInterfaceRequest<SingleSampleMetricsProvider>;

class SingleSampleMetric;
using SingleSampleMetricPtr = mojo::InterfacePtr<SingleSampleMetric>;
using SingleSampleMetricPtrInfo = mojo::InterfacePtrInfo<SingleSampleMetric>;
using ThreadSafeSingleSampleMetricPtr =
    mojo::ThreadSafeInterfacePtr<SingleSampleMetric>;
using SingleSampleMetricRequest = mojo::InterfaceRequest<SingleSampleMetric>;
using SingleSampleMetricAssociatedPtr =
    mojo::AssociatedInterfacePtr<SingleSampleMetric>;
using ThreadSafeSingleSampleMetricAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<SingleSampleMetric>;
using SingleSampleMetricAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<SingleSampleMetric>;
using SingleSampleMetricAssociatedRequest =
    mojo::AssociatedInterfaceRequest<SingleSampleMetric>;




}  // namespace mojom
}  // namespace metrics

#endif  // COMPONENTS_METRICS_PUBLIC_INTERFACES_SINGLE_SAMPLE_METRICS_MOJOM_FORWARD_H_