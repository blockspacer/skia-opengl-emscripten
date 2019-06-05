// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_METRICS_PUBLIC_INTERFACES_SINGLE_SAMPLE_METRICS_MOJOM_SHARED_H_
#define COMPONENTS_METRICS_PUBLIC_INTERFACES_SINGLE_SAMPLE_METRICS_MOJOM_SHARED_H_

#include <stdint.h>

#include <functional>
#include <ostream>
#include <type_traits>
#include <utility>

#include "base/compiler_specific.h"
#include "base/containers/flat_map.h"
#include "mojo/public/cpp/bindings/array_data_view.h"
#include "mojo/public/cpp/bindings/enum_traits.h"
#include "mojo/public/cpp/bindings/interface_data_view.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/serialization.h"
#include "mojo/public/cpp/bindings/map_data_view.h"
#include "mojo/public/cpp/bindings/string_data_view.h"
#include "components/metrics/public/interfaces/single_sample_metrics.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace metrics {
namespace mojom {


}  // namespace mojom
}  // namespace metrics

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace metrics {
namespace mojom {
// Interface base classes. They are used for type safety check.
class SingleSampleMetricsProviderInterfaceBase {};

using SingleSampleMetricsProviderPtrDataView =
    mojo::InterfacePtrDataView<SingleSampleMetricsProviderInterfaceBase>;
using SingleSampleMetricsProviderRequestDataView =
    mojo::InterfaceRequestDataView<SingleSampleMetricsProviderInterfaceBase>;
using SingleSampleMetricsProviderAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<SingleSampleMetricsProviderInterfaceBase>;
using SingleSampleMetricsProviderAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<SingleSampleMetricsProviderInterfaceBase>;
class SingleSampleMetricInterfaceBase {};

using SingleSampleMetricPtrDataView =
    mojo::InterfacePtrDataView<SingleSampleMetricInterfaceBase>;
using SingleSampleMetricRequestDataView =
    mojo::InterfaceRequestDataView<SingleSampleMetricInterfaceBase>;
using SingleSampleMetricAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<SingleSampleMetricInterfaceBase>;
using SingleSampleMetricAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<SingleSampleMetricInterfaceBase>;


}  // namespace mojom
}  // namespace metrics

namespace std {

}  // namespace std

namespace mojo {

}  // namespace mojo


namespace metrics {
namespace mojom {


}  // namespace mojom
}  // namespace metrics

#endif  // COMPONENTS_METRICS_PUBLIC_INTERFACES_SINGLE_SAMPLE_METRICS_MOJOM_SHARED_H_