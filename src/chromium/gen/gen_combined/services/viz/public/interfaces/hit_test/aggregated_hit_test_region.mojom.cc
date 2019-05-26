// Copyright 2013 The Chromium Authors. All rights reserved.
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

#include "services/viz/public/interfaces/hit_test/aggregated_hit_test_region.mojom.h"

#include <math.h>
#include <stdint.h>
#include <utility>

#include "base/location.h"
#include "base/logging.h"
#include "base/run_loop.h"
#include "base/task/common/task_annotator.h"
#include "mojo/public/cpp/bindings/lib/message_internal.h"
#include "mojo/public/cpp/bindings/lib/serialization_util.h"
#include "mojo/public/cpp/bindings/lib/unserialized_message_context.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/interfaces/bindings/interface_control_messages.mojom.h"

#include "services/viz/public/interfaces/hit_test/aggregated_hit_test_region.mojom-params-data.h"
#include "services/viz/public/interfaces/hit_test/aggregated_hit_test_region.mojom-shared-message-ids.h"

#include "services/viz/public/interfaces/hit_test/aggregated_hit_test_region.mojom-import-headers.h"


#ifndef SERVICES_VIZ_PUBLIC_INTERFACES_HIT_TEST_AGGREGATED_HIT_TEST_REGION_MOJOM_JUMBO_H_
#define SERVICES_VIZ_PUBLIC_INTERFACES_HIT_TEST_AGGREGATED_HIT_TEST_REGION_MOJOM_JUMBO_H_
#include "services/viz/public/cpp/compositing/frame_sink_id_struct_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
#include "ui/gfx/mojo/transform_struct_traits.h"
#endif
namespace viz {
namespace mojom {
AggregatedHitTestRegion::AggregatedHitTestRegion()
    : frame_sink_id(),
      flags(),
      async_hit_test_reasons(),
      rect(),
      child_count(),
      transform() {}

AggregatedHitTestRegion::AggregatedHitTestRegion(
    const viz::FrameSinkId& frame_sink_id_in,
    uint32_t flags_in,
    uint32_t async_hit_test_reasons_in,
    const gfx::Rect& rect_in,
    uint32_t child_count_in,
    const gfx::Transform& transform_in)
    : frame_sink_id(std::move(frame_sink_id_in)),
      flags(std::move(flags_in)),
      async_hit_test_reasons(std::move(async_hit_test_reasons_in)),
      rect(std::move(rect_in)),
      child_count(std::move(child_count_in)),
      transform(std::move(transform_in)) {}

AggregatedHitTestRegion::~AggregatedHitTestRegion() = default;

bool AggregatedHitTestRegion::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace mojom
}  // namespace viz

namespace mojo {


// static
bool StructTraits<::viz::mojom::AggregatedHitTestRegion::DataView, ::viz::mojom::AggregatedHitTestRegionPtr>::Read(
    ::viz::mojom::AggregatedHitTestRegion::DataView input,
    ::viz::mojom::AggregatedHitTestRegionPtr* output) {
  bool success = true;
  ::viz::mojom::AggregatedHitTestRegionPtr result(::viz::mojom::AggregatedHitTestRegion::New());
  
      if (!input.ReadFrameSinkId(&result->frame_sink_id))
        success = false;
      result->flags = input.flags();
      result->async_hit_test_reasons = input.async_hit_test_reasons();
      if (!input.ReadRect(&result->rect))
        success = false;
      result->child_count = input.child_count();
      if (!input.ReadTransform(&result->transform))
        success = false;
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif