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

#include "services/viz/public/interfaces/hit_test/hit_test_region_list.mojom.h"

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

#include "services/viz/public/interfaces/hit_test/hit_test_region_list.mojom-params-data.h"
#include "services/viz/public/interfaces/hit_test/hit_test_region_list.mojom-shared-message-ids.h"

#include "services/viz/public/interfaces/hit_test/hit_test_region_list.mojom-import-headers.h"


#ifndef SERVICES_VIZ_PUBLIC_INTERFACES_HIT_TEST_HIT_TEST_REGION_LIST_MOJOM_JUMBO_H_
#define SERVICES_VIZ_PUBLIC_INTERFACES_HIT_TEST_HIT_TEST_REGION_LIST_MOJOM_JUMBO_H_
#include "services/viz/public/cpp/compositing/frame_sink_id_struct_traits.h"
#include "services/viz/public/cpp/hit_test/hit_test_region_list_struct_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
#include "ui/gfx/mojo/transform_struct_traits.h"
#endif
namespace viz {
namespace mojom {
HitTestRegion::HitTestRegion()
    : flags(),
      async_hit_test_reasons(),
      frame_sink_id(),
      rect(),
      transform() {}

HitTestRegion::HitTestRegion(
    uint32_t flags_in,
    uint32_t async_hit_test_reasons_in,
    const viz::FrameSinkId& frame_sink_id_in,
    const gfx::Rect& rect_in,
    const gfx::Transform& transform_in)
    : flags(std::move(flags_in)),
      async_hit_test_reasons(std::move(async_hit_test_reasons_in)),
      frame_sink_id(std::move(frame_sink_id_in)),
      rect(std::move(rect_in)),
      transform(std::move(transform_in)) {}

HitTestRegion::~HitTestRegion() = default;

bool HitTestRegion::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
HitTestRegionList::HitTestRegionList()
    : flags(),
      async_hit_test_reasons(),
      bounds(),
      transform(),
      regions() {}

HitTestRegionList::HitTestRegionList(
    uint32_t flags_in,
    uint32_t async_hit_test_reasons_in,
    const gfx::Rect& bounds_in,
    const gfx::Transform& transform_in,
    const std::vector<viz::HitTestRegion>& regions_in)
    : flags(std::move(flags_in)),
      async_hit_test_reasons(std::move(async_hit_test_reasons_in)),
      bounds(std::move(bounds_in)),
      transform(std::move(transform_in)),
      regions(std::move(regions_in)) {}

HitTestRegionList::~HitTestRegionList() = default;

bool HitTestRegionList::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace mojom
}  // namespace viz

namespace mojo {


// static
bool StructTraits<::viz::mojom::HitTestRegion::DataView, ::viz::mojom::HitTestRegionPtr>::Read(
    ::viz::mojom::HitTestRegion::DataView input,
    ::viz::mojom::HitTestRegionPtr* output) {
  bool success = true;
  ::viz::mojom::HitTestRegionPtr result(::viz::mojom::HitTestRegion::New());
  
      result->flags = input.flags();
      result->async_hit_test_reasons = input.async_hit_test_reasons();
      if (!input.ReadFrameSinkId(&result->frame_sink_id))
        success = false;
      if (!input.ReadRect(&result->rect))
        success = false;
      if (!input.ReadTransform(&result->transform))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::viz::mojom::HitTestRegionList::DataView, ::viz::mojom::HitTestRegionListPtr>::Read(
    ::viz::mojom::HitTestRegionList::DataView input,
    ::viz::mojom::HitTestRegionListPtr* output) {
  bool success = true;
  ::viz::mojom::HitTestRegionListPtr result(::viz::mojom::HitTestRegionList::New());
  
      result->flags = input.flags();
      result->async_hit_test_reasons = input.async_hit_test_reasons();
      if (!input.ReadBounds(&result->bounds))
        success = false;
      if (!input.ReadTransform(&result->transform))
        success = false;
      if (!input.ReadRegions(&result->regions))
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