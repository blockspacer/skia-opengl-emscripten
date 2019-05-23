// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "third_party/blink/public/mojom/service_worker/service_worker_fetch_response_callback.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "base/stl_util.h"  // for base::size()
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"

#include "third_party/blink/public/mojom/service_worker/service_worker_fetch_response_callback.mojom-params-data.h"
namespace blink {
namespace mojom {

namespace internal {


// static
bool ServiceWorkerFetchEventTiming_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ServiceWorkerFetchEventTiming_Data* object = static_cast<const ServiceWorkerFetchEventTiming_Data*>(data);

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
          object->dispatch_event_time, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->dispatch_event_time, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->respond_with_settled_time, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->respond_with_settled_time, validation_context))
    return false;

  return true;
}

ServiceWorkerFetchEventTiming_Data::ServiceWorkerFetchEventTiming_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ServiceWorkerFetchResponseCallback_OnResponse_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ServiceWorkerFetchResponseCallback_OnResponse_Params_Data* object = static_cast<const ServiceWorkerFetchResponseCallback_OnResponse_Params_Data*>(data);

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
          object->response, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->response, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->timing, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->timing, validation_context))
    return false;

  return true;
}

ServiceWorkerFetchResponseCallback_OnResponse_Params_Data::ServiceWorkerFetchResponseCallback_OnResponse_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ServiceWorkerFetchResponseCallback_OnResponseStream_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ServiceWorkerFetchResponseCallback_OnResponseStream_Params_Data* object = static_cast<const ServiceWorkerFetchResponseCallback_OnResponseStream_Params_Data*>(data);

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
          object->response, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->response, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->body_as_stream, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->body_as_stream, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->timing, 3, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->timing, validation_context))
    return false;

  return true;
}

ServiceWorkerFetchResponseCallback_OnResponseStream_Params_Data::ServiceWorkerFetchResponseCallback_OnResponseStream_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ServiceWorkerFetchResponseCallback_OnFallback_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ServiceWorkerFetchResponseCallback_OnFallback_Params_Data* object = static_cast<const ServiceWorkerFetchResponseCallback_OnFallback_Params_Data*>(data);

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

  if (!mojo::internal::ValidatePointerNonNullable(
          object->timing, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->timing, validation_context))
    return false;

  return true;
}

ServiceWorkerFetchResponseCallback_OnFallback_Params_Data::ServiceWorkerFetchResponseCallback_OnFallback_Params_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#if defined(_MSC_VER)
#pragma warning(pop)
#endif