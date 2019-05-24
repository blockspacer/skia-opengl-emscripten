// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "components/download/public/common/download_stream.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "base/stl_util.h"  // for base::size()
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"

#include "components/download/public/common/download_stream.mojom-params-data.h"
namespace download {
namespace mojom {

std::ostream& operator<<(std::ostream& os, NetworkRequestStatus value) {
  switch(value) {
    case NetworkRequestStatus::OK:
      return os << "NetworkRequestStatus::OK";
    case NetworkRequestStatus::NETWORK_TIMEOUT:
      return os << "NetworkRequestStatus::NETWORK_TIMEOUT";
    case NetworkRequestStatus::NETWORK_DISCONNECTED:
      return os << "NetworkRequestStatus::NETWORK_DISCONNECTED";
    case NetworkRequestStatus::NETWORK_SERVER_DOWN:
      return os << "NetworkRequestStatus::NETWORK_SERVER_DOWN";
    case NetworkRequestStatus::SERVER_NO_RANGE:
      return os << "NetworkRequestStatus::SERVER_NO_RANGE";
    case NetworkRequestStatus::SERVER_CONTENT_LENGTH_MISMATCH:
      return os << "NetworkRequestStatus::SERVER_CONTENT_LENGTH_MISMATCH";
    case NetworkRequestStatus::SERVER_UNREACHABLE:
      return os << "NetworkRequestStatus::SERVER_UNREACHABLE";
    case NetworkRequestStatus::SERVER_CERT_PROBLEM:
      return os << "NetworkRequestStatus::SERVER_CERT_PROBLEM";
    case NetworkRequestStatus::USER_CANCELED:
      return os << "NetworkRequestStatus::USER_CANCELED";
    case NetworkRequestStatus::NETWORK_FAILED:
      return os << "NetworkRequestStatus::NETWORK_FAILED";
    default:
      return os << "Unknown NetworkRequestStatus value: " << static_cast<int32_t>(value);
  }
}

namespace internal {


// static
bool DownloadStreamHandle_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const DownloadStreamHandle_Data* object = static_cast<const DownloadStreamHandle_Data*>(data);

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

  if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
          object->stream, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->stream,
                                                 validation_context)) {
    return false;
  }

  if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
          object->client_request, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->client_request,
                                                 validation_context)) {
    return false;
  }

  return true;
}

DownloadStreamHandle_Data::DownloadStreamHandle_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool DownloadStreamClient_OnStreamCompleted_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const DownloadStreamClient_OnStreamCompleted_Params_Data* object = static_cast<const DownloadStreamClient_OnStreamCompleted_Params_Data*>(data);

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


  if (!::download::mojom::internal::NetworkRequestStatus_Data
        ::Validate(object->status, validation_context))
    return false;

  return true;
}

DownloadStreamClient_OnStreamCompleted_Params_Data::DownloadStreamClient_OnStreamCompleted_Params_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace download

#if defined(_MSC_VER)
#pragma warning(pop)
#endif