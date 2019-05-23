// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "third_party/blink/public/mojom/notifications/notification.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "base/stl_util.h"  // for base::size()
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"

#include "third_party/blink/public/mojom/notifications/notification.mojom-params-data.h"
namespace blink {
namespace mojom {

std::ostream& operator<<(std::ostream& os, NotificationDirection value) {
  switch(value) {
    case NotificationDirection::LEFT_TO_RIGHT:
      return os << "NotificationDirection::LEFT_TO_RIGHT";
    case NotificationDirection::RIGHT_TO_LEFT:
      return os << "NotificationDirection::RIGHT_TO_LEFT";
    case NotificationDirection::AUTO:
      return os << "NotificationDirection::AUTO";
    default:
      return os << "Unknown NotificationDirection value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, NotificationActionType value) {
  switch(value) {
    case NotificationActionType::BUTTON:
      return os << "NotificationActionType::BUTTON";
    case NotificationActionType::TEXT:
      return os << "NotificationActionType::TEXT";
    default:
      return os << "Unknown NotificationActionType value: " << static_cast<int32_t>(value);
  }
}

namespace internal {


// static
bool NotificationAction_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const NotificationAction_Data* object = static_cast<const NotificationAction_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 48 }};

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


  if (!::blink::mojom::internal::NotificationActionType_Data
        ::Validate(object->type, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->action, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams action_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->action, validation_context,
                                         &action_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->title, 3, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->title, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->icon, 4, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->icon, validation_context))
    return false;

  if (!mojo::internal::ValidateStruct(object->placeholder, validation_context))
    return false;

  return true;
}

NotificationAction_Data::NotificationAction_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool NotificationData_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const NotificationData_Data* object = static_cast<const NotificationData_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 112 }};

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
          object->title, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->title, validation_context))
    return false;


  if (!::blink::mojom::internal::NotificationDirection_Data
        ::Validate(object->direction, validation_context))
    return false;

  const mojo::internal::ContainerValidateParams lang_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->lang, validation_context,
                                         &lang_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->body, 4, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->body, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->tag, 5, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams tag_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->tag, validation_context,
                                         &tag_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->image, 6, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->image, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->icon, 7, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->icon, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->badge, 8, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->badge, validation_context))
    return false;

  const mojo::internal::ContainerValidateParams vibration_pattern_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->vibration_pattern, validation_context,
                                         &vibration_pattern_validate_params)) {
    return false;
  }

  const mojo::internal::ContainerValidateParams data_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->data, validation_context,
                                         &data_validate_params)) {
    return false;
  }

  const mojo::internal::ContainerValidateParams actions_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->actions, validation_context,
                                         &actions_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidateStruct(object->show_trigger_timestamp, validation_context))
    return false;

  return true;
}

NotificationData_Data::NotificationData_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool NotificationResources_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const NotificationResources_Data* object = static_cast<const NotificationResources_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 40 }};

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

  if (!mojo::internal::ValidateStruct(object->image, validation_context))
    return false;

  if (!mojo::internal::ValidateStruct(object->icon, validation_context))
    return false;

  if (!mojo::internal::ValidateStruct(object->badge, validation_context))
    return false;

  const mojo::internal::ContainerValidateParams action_icons_validate_params(
      0, true, nullptr);
  if (!mojo::internal::ValidateContainer(object->action_icons, validation_context,
                                         &action_icons_validate_params)) {
    return false;
  }

  return true;
}

NotificationResources_Data::NotificationResources_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#if defined(_MSC_VER)
#pragma warning(pop)
#endif