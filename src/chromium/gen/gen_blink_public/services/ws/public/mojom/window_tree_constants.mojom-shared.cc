// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "services/ws/public/mojom/window_tree_constants.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "base/stl_util.h"  // for base::size()
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"

#include "services/ws/public/mojom/window_tree_constants.mojom-params-data.h"
namespace ws {
namespace mojom {

std::ostream& operator<<(std::ostream& os, EventResult value) {
  switch(value) {
    case EventResult::HANDLED:
      return os << "EventResult::HANDLED";
    case EventResult::UNHANDLED:
      return os << "EventResult::UNHANDLED";
    default:
      return os << "Unknown EventResult value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, EventTargetingPolicy value) {
  switch(value) {
    case EventTargetingPolicy::TARGET_ONLY:
      return os << "EventTargetingPolicy::TARGET_ONLY";
    case EventTargetingPolicy::TARGET_AND_DESCENDANTS:
      return os << "EventTargetingPolicy::TARGET_AND_DESCENDANTS";
    case EventTargetingPolicy::DESCENDANTS_ONLY:
      return os << "EventTargetingPolicy::DESCENDANTS_ONLY";
    case EventTargetingPolicy::NONE:
      return os << "EventTargetingPolicy::NONE";
    default:
      return os << "Unknown EventTargetingPolicy value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, MoveLoopSource value) {
  switch(value) {
    case MoveLoopSource::MOUSE:
      return os << "MoveLoopSource::MOUSE";
    case MoveLoopSource::TOUCH:
      return os << "MoveLoopSource::TOUCH";
    default:
      return os << "Unknown MoveLoopSource value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, OrderDirection value) {
  switch(value) {
    case OrderDirection::ABOVE:
      return os << "OrderDirection::ABOVE";
    case OrderDirection::BELOW:
      return os << "OrderDirection::BELOW";
    default:
      return os << "Unknown OrderDirection value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, ShowState value) {
  switch(value) {
    case ShowState::DEFAULT:
      return os << "ShowState::DEFAULT";
    case ShowState::NORMAL:
      return os << "ShowState::NORMAL";
    case ShowState::MINIMIZED:
      return os << "ShowState::MINIMIZED";
    case ShowState::MAXIMIZED:
      return os << "ShowState::MAXIMIZED";
    case ShowState::INACTIVE:
      return os << "ShowState::INACTIVE";
    case ShowState::FULLSCREEN:
      return os << "ShowState::FULLSCREEN";
    default:
      return os << "Unknown ShowState value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, WindowType value) {
  switch(value) {
    case WindowType::WINDOW:
      return os << "WindowType::WINDOW";
    case WindowType::WINDOW_FRAMELESS:
      return os << "WindowType::WINDOW_FRAMELESS";
    case WindowType::CONTROL:
      return os << "WindowType::CONTROL";
    case WindowType::POPUP:
      return os << "WindowType::POPUP";
    case WindowType::MENU:
      return os << "WindowType::MENU";
    case WindowType::TOOLTIP:
      return os << "WindowType::TOOLTIP";
    case WindowType::BUBBLE:
      return os << "WindowType::BUBBLE";
    case WindowType::DRAG:
      return os << "WindowType::DRAG";
    case WindowType::UNKNOWN:
      return os << "WindowType::UNKNOWN";
    default:
      return os << "Unknown WindowType value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, OcclusionState value) {
  switch(value) {
    case OcclusionState::kUnknown:
      return os << "OcclusionState::kUnknown";
    case OcclusionState::kVisible:
      return os << "OcclusionState::kVisible";
    case OcclusionState::kOccluded:
      return os << "OcclusionState::kOccluded";
    case OcclusionState::kHidden:
      return os << "OcclusionState::kHidden";
    default:
      return os << "Unknown OcclusionState value: " << static_cast<int32_t>(value);
  }
}

namespace internal {


// static
bool FrameDecorationValues_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const FrameDecorationValues_Data* object = static_cast<const FrameDecorationValues_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 32 }};

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
          object->normal_client_area_insets, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->normal_client_area_insets, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->maximized_client_area_insets, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->maximized_client_area_insets, validation_context))
    return false;

  return true;
}

FrameDecorationValues_Data::FrameDecorationValues_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool WindowData_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const WindowData_Data* object = static_cast<const WindowData_Data*>(data);

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
          object->bounds, 4, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->bounds, validation_context))
    return false;


  if (!::ui::mojom::internal::WindowShowState_Data
        ::Validate(object->state, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->properties, 6, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams properties_validate_params(
      new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)), new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)));
  if (!mojo::internal::ValidateContainer(object->properties, validation_context,
                                         &properties_validate_params)) {
    return false;
  }

  return true;
}

WindowData_Data::WindowData_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool WsDisplay_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const WsDisplay_Data* object = static_cast<const WsDisplay_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 24 }};

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
          object->display, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->display, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->frame_decoration_values, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->frame_decoration_values, validation_context))
    return false;

  return true;
}

WsDisplay_Data::WsDisplay_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace ws

#if defined(_MSC_VER)
#pragma warning(pop)
#endif