// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "ui/latency/mojo/latency_info.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "base/stl_util.h"  // for base::size()
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"

#include "ui/latency/mojo/latency_info.mojom-params-data.h"
namespace ui {
namespace mojom {

std::ostream& operator<<(std::ostream& os, LatencyComponentType value) {
  switch(value) {
    case LatencyComponentType::INPUT_EVENT_LATENCY_BEGIN_RWH_COMPONENT:
      return os << "LatencyComponentType::INPUT_EVENT_LATENCY_BEGIN_RWH_COMPONENT";
    case LatencyComponentType::LATENCY_BEGIN_SCROLL_LISTENER_UPDATE_MAIN_COMPONENT:
      return os << "LatencyComponentType::LATENCY_BEGIN_SCROLL_LISTENER_UPDATE_MAIN_COMPONENT";
    case LatencyComponentType::LATENCY_BEGIN_FRAME_RENDERER_MAIN_COMPONENT:
      return os << "LatencyComponentType::LATENCY_BEGIN_FRAME_RENDERER_MAIN_COMPONENT";
    case LatencyComponentType::LATENCY_BEGIN_FRAME_RENDERER_INVALIDATE_COMPONENT:
      return os << "LatencyComponentType::LATENCY_BEGIN_FRAME_RENDERER_INVALIDATE_COMPONENT";
    case LatencyComponentType::LATENCY_BEGIN_FRAME_RENDERER_COMPOSITOR_COMPONENT:
      return os << "LatencyComponentType::LATENCY_BEGIN_FRAME_RENDERER_COMPOSITOR_COMPONENT";
    case LatencyComponentType::LATENCY_BEGIN_FRAME_UI_MAIN_COMPONENT:
      return os << "LatencyComponentType::LATENCY_BEGIN_FRAME_UI_MAIN_COMPONENT";
    case LatencyComponentType::LATENCY_BEGIN_FRAME_UI_COMPOSITOR_COMPONENT:
      return os << "LatencyComponentType::LATENCY_BEGIN_FRAME_UI_COMPOSITOR_COMPONENT";
    case LatencyComponentType::LATENCY_BEGIN_FRAME_DISPLAY_COMPOSITOR_COMPONENT:
      return os << "LatencyComponentType::LATENCY_BEGIN_FRAME_DISPLAY_COMPOSITOR_COMPONENT";
    case LatencyComponentType::INPUT_EVENT_LATENCY_SCROLL_UPDATE_ORIGINAL_COMPONENT:
      return os << "LatencyComponentType::INPUT_EVENT_LATENCY_SCROLL_UPDATE_ORIGINAL_COMPONENT";
    case LatencyComponentType::INPUT_EVENT_LATENCY_FIRST_SCROLL_UPDATE_ORIGINAL_COMPONENT:
      return os << "LatencyComponentType::INPUT_EVENT_LATENCY_FIRST_SCROLL_UPDATE_ORIGINAL_COMPONENT";
    case LatencyComponentType::INPUT_EVENT_LATENCY_ORIGINAL_COMPONENT:
      return os << "LatencyComponentType::INPUT_EVENT_LATENCY_ORIGINAL_COMPONENT";
    case LatencyComponentType::INPUT_EVENT_LATENCY_UI_COMPONENT:
      return os << "LatencyComponentType::INPUT_EVENT_LATENCY_UI_COMPONENT";
    case LatencyComponentType::INPUT_EVENT_LATENCY_RENDERER_MAIN_COMPONENT:
      return os << "LatencyComponentType::INPUT_EVENT_LATENCY_RENDERER_MAIN_COMPONENT";
    case LatencyComponentType::INPUT_EVENT_LATENCY_RENDERING_SCHEDULED_MAIN_COMPONENT:
      return os << "LatencyComponentType::INPUT_EVENT_LATENCY_RENDERING_SCHEDULED_MAIN_COMPONENT";
    case LatencyComponentType::INPUT_EVENT_LATENCY_RENDERING_SCHEDULED_IMPL_COMPONENT:
      return os << "LatencyComponentType::INPUT_EVENT_LATENCY_RENDERING_SCHEDULED_IMPL_COMPONENT";
    case LatencyComponentType::INPUT_EVENT_LATENCY_FORWARD_SCROLL_UPDATE_TO_MAIN_COMPONENT:
      return os << "LatencyComponentType::INPUT_EVENT_LATENCY_FORWARD_SCROLL_UPDATE_TO_MAIN_COMPONENT";
    case LatencyComponentType::INPUT_EVENT_LATENCY_SCROLL_UPDATE_LAST_EVENT_COMPONENT:
      return os << "LatencyComponentType::INPUT_EVENT_LATENCY_SCROLL_UPDATE_LAST_EVENT_COMPONENT";
    case LatencyComponentType::INPUT_EVENT_LATENCY_ACK_RWH_COMPONENT:
      return os << "LatencyComponentType::INPUT_EVENT_LATENCY_ACK_RWH_COMPONENT";
    case LatencyComponentType::INPUT_EVENT_LATENCY_RENDERER_SWAP_COMPONENT:
      return os << "LatencyComponentType::INPUT_EVENT_LATENCY_RENDERER_SWAP_COMPONENT";
    case LatencyComponentType::DISPLAY_COMPOSITOR_RECEIVED_FRAME_COMPONENT:
      return os << "LatencyComponentType::DISPLAY_COMPOSITOR_RECEIVED_FRAME_COMPONENT";
    case LatencyComponentType::INPUT_EVENT_GPU_SWAP_BUFFER_COMPONENT:
      return os << "LatencyComponentType::INPUT_EVENT_GPU_SWAP_BUFFER_COMPONENT";
    case LatencyComponentType::INPUT_EVENT_LATENCY_FRAME_SWAP_COMPONENT:
      return os << "LatencyComponentType::INPUT_EVENT_LATENCY_FRAME_SWAP_COMPONENT";
    default:
      return os << "Unknown LatencyComponentType value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, SourceEventType value) {
  switch(value) {
    case SourceEventType::UNKNOWN:
      return os << "SourceEventType::UNKNOWN";
    case SourceEventType::WHEEL:
      return os << "SourceEventType::WHEEL";
    case SourceEventType::MOUSE:
      return os << "SourceEventType::MOUSE";
    case SourceEventType::TOUCH:
      return os << "SourceEventType::TOUCH";
    case SourceEventType::INERTIAL:
      return os << "SourceEventType::INERTIAL";
    case SourceEventType::KEY_PRESS:
      return os << "SourceEventType::KEY_PRESS";
    case SourceEventType::TOUCHPAD:
      return os << "SourceEventType::TOUCHPAD";
    case SourceEventType::FRAME:
      return os << "SourceEventType::FRAME";
    case SourceEventType::SCROLLBAR:
      return os << "SourceEventType::SCROLLBAR";
    case SourceEventType::OTHER:
      return os << "SourceEventType::OTHER";
    default:
      return os << "Unknown SourceEventType value: " << static_cast<int32_t>(value);
  }
}

namespace internal {


// static
bool LatencyInfo_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const LatencyInfo_Data* object = static_cast<const LatencyInfo_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 56 }};

  if (object->header_.version <=
          kVersionSizes[base::size(kVersionSizes) - 1].version) {
    // Scan in reverse order to optimize for more recent versions.
    for (int i = base::size(kVersionSizes) - 1; i >= 0; --i) {
      if (object->header_.version >= kVersionSizes[i].version) {
        if (object->header_.num_bytes == kVersionSizes[i].num_bytes)
          break;

        ReportValidationError(
            validation_context,
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
        return false;
      }
    }
  } else if (object->header_.num_bytes <
                 kVersionSizes[base::size(kVersionSizes) - 1].num_bytes) {
    ReportValidationError(
        validation_context,
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->trace_name, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams trace_name_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->trace_name, validation_context,
                                         &trace_name_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->latency_components, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams latency_components_validate_params(
      new mojo::internal::ContainerValidateParams(0, ::ui::mojom::internal::LatencyComponentType_Data::Validate), new mojo::internal::ContainerValidateParams(0, false, nullptr));
  if (!mojo::internal::ValidateContainer(object->latency_components, validation_context,
                                         &latency_components_validate_params)) {
    return false;
  }


  if (!::ui::mojom::internal::SourceEventType_Data
        ::Validate(object->source_event_type, validation_context))
    return false;

  return true;
}

LatencyInfo_Data::LatencyInfo_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace ui

#if defined(_MSC_VER)
#pragma warning(pop)
#endif