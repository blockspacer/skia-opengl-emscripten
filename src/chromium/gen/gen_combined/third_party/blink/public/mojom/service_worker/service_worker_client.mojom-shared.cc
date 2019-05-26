// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "third_party/blink/public/mojom/service_worker/service_worker_client.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "base/stl_util.h"  // for base::size()
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"

#include "third_party/blink/public/mojom/service_worker/service_worker_client.mojom-params-data.h"
namespace blink {
namespace mojom {

std::ostream& operator<<(std::ostream& os, ServiceWorkerClientType value) {
  switch(value) {
    case ServiceWorkerClientType::kWindow:
      return os << "ServiceWorkerClientType::kWindow";
    case ServiceWorkerClientType::kSharedWorker:
      return os << "ServiceWorkerClientType::kSharedWorker";
    case ServiceWorkerClientType::kAll:
      return os << "ServiceWorkerClientType::kAll";
    default:
      return os << "Unknown ServiceWorkerClientType value: " << static_cast<int32_t>(value);
  }
}

namespace internal {


// static
bool ServiceWorkerClientQueryOptions_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ServiceWorkerClientQueryOptions_Data* object = static_cast<const ServiceWorkerClientQueryOptions_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 16 }};

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


  if (!::blink::mojom::internal::ServiceWorkerClientType_Data
        ::Validate(object->client_type, validation_context))
    return false;

  return true;
}

ServiceWorkerClientQueryOptions_Data::ServiceWorkerClientQueryOptions_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ServiceWorkerClientInfo_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ServiceWorkerClientInfo_Data* object = static_cast<const ServiceWorkerClientInfo_Data*>(data);

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
          object->url, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->url, validation_context))
    return false;


  if (!::network::mojom::internal::RequestContextFrameType_Data
        ::Validate(object->frame_type, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->client_uuid, 3, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams client_uuid_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->client_uuid, validation_context,
                                         &client_uuid_validate_params)) {
    return false;
  }


  if (!::blink::mojom::internal::ServiceWorkerClientType_Data
        ::Validate(object->client_type, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->last_focus_time, 7, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->last_focus_time, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->creation_time, 8, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->creation_time, validation_context))
    return false;

  return true;
}

ServiceWorkerClientInfo_Data::ServiceWorkerClientInfo_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#if defined(_MSC_VER)
#pragma warning(pop)
#endif