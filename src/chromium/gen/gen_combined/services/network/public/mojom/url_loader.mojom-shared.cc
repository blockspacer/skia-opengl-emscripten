// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "services/network/public/mojom/url_loader.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "base/stl_util.h"  // for base::size()
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"

#include "services/network/public/mojom/url_loader.mojom-params-data.h"
namespace network {
namespace mojom {

std::ostream& operator<<(std::ostream& os, RequestPriority value) {
  switch(value) {
    case RequestPriority::kThrottled:
      return os << "RequestPriority::kThrottled";
    case RequestPriority::kIdle:
      return os << "RequestPriority::kIdle";
    case RequestPriority::kLowest:
      return os << "RequestPriority::kLowest";
    case RequestPriority::kLow:
      return os << "RequestPriority::kLow";
    case RequestPriority::kMedium:
      return os << "RequestPriority::kMedium";
    case RequestPriority::kHighest:
      return os << "RequestPriority::kHighest";
    default:
      return os << "Unknown RequestPriority value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, URLRequestReferrerPolicy value) {
  switch(value) {
    case URLRequestReferrerPolicy::kClearReferrerOnTransitionFromSecureToInsecure:
      return os << "URLRequestReferrerPolicy::kClearReferrerOnTransitionFromSecureToInsecure";
    case URLRequestReferrerPolicy::kReduceReferrerGranularityOnTransitionCrossOrigin:
      return os << "URLRequestReferrerPolicy::kReduceReferrerGranularityOnTransitionCrossOrigin";
    case URLRequestReferrerPolicy::kOriginOnlyOnTransitionCrossOrigin:
      return os << "URLRequestReferrerPolicy::kOriginOnlyOnTransitionCrossOrigin";
    case URLRequestReferrerPolicy::kNeverClearReferrer:
      return os << "URLRequestReferrerPolicy::kNeverClearReferrer";
    case URLRequestReferrerPolicy::kOrigin:
      return os << "URLRequestReferrerPolicy::kOrigin";
    case URLRequestReferrerPolicy::kClearReferrerOnTransitionCrossOrigin:
      return os << "URLRequestReferrerPolicy::kClearReferrerOnTransitionCrossOrigin";
    case URLRequestReferrerPolicy::kOriginClearOnTransitionFromSecureToInsecure:
      return os << "URLRequestReferrerPolicy::kOriginClearOnTransitionFromSecureToInsecure";
    case URLRequestReferrerPolicy::kNoReferrer:
      return os << "URLRequestReferrerPolicy::kNoReferrer";
    default:
      return os << "Unknown URLRequestReferrerPolicy value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, DataElementType value) {
  switch(value) {
    case DataElementType::kUnknown:
      return os << "DataElementType::kUnknown";
    case DataElementType::kDataPipe:
      return os << "DataElementType::kDataPipe";
    case DataElementType::kChunkedDataPipe:
      return os << "DataElementType::kChunkedDataPipe";
    case DataElementType::kRawFile:
      return os << "DataElementType::kRawFile";
    case DataElementType::kBlob:
      return os << "DataElementType::kBlob";
    case DataElementType::kFile:
      return os << "DataElementType::kFile";
    case DataElementType::kBytes:
      return os << "DataElementType::kBytes";
    default:
      return os << "Unknown DataElementType value: " << static_cast<int32_t>(value);
  }
}

namespace internal {


// static
bool URLRequest_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const URLRequest_Data* object = static_cast<const URLRequest_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 192 }};

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
          object->method, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams method_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->method, validation_context,
                                         &method_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->url, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->url, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->site_for_cookies, 3, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->site_for_cookies, validation_context))
    return false;

  if (!mojo::internal::ValidateStruct(object->top_frame_origin, validation_context))
    return false;

  if (!mojo::internal::ValidateStruct(object->request_initiator, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->referrer, 8, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->referrer, validation_context))
    return false;


  if (!::network::mojom::internal::URLRequestReferrerPolicy_Data
        ::Validate(object->referrer_policy, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->headers, 11, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->headers, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->cors_exempt_headers, 12, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->cors_exempt_headers, validation_context))
    return false;


  if (!::network::mojom::internal::RequestPriority_Data
        ::Validate(object->priority, validation_context))
    return false;


  if (!::network::mojom::internal::CorsPreflightPolicy_Data
        ::Validate(object->cors_preflight_policy, validation_context))
    return false;


  if (!::network::mojom::internal::FetchRequestMode_Data
        ::Validate(object->fetch_request_mode, validation_context))
    return false;


  if (!::network::mojom::internal::FetchCredentialsMode_Data
        ::Validate(object->fetch_credentials_mode, validation_context))
    return false;


  if (!::network::mojom::internal::FetchRedirectMode_Data
        ::Validate(object->fetch_redirect_mode, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->fetch_integrity, 29, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams fetch_integrity_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->fetch_integrity, validation_context,
                                         &fetch_integrity_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidateStruct(object->request_body, validation_context))
    return false;

  if (!mojo::internal::ValidateStruct(object->throttling_profile_id, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->custom_proxy_pre_cache_headers, 47, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->custom_proxy_pre_cache_headers, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->custom_proxy_post_cache_headers, 48, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->custom_proxy_post_cache_headers, validation_context))
    return false;

  if (!mojo::internal::ValidateStruct(object->fetch_window_id, validation_context))
    return false;

  const mojo::internal::ContainerValidateParams devtools_request_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->devtools_request_id, validation_context,
                                         &devtools_request_id_validate_params)) {
    return false;
  }

  return true;
}

URLRequest_Data::URLRequest_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool URLRequestBody_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const URLRequestBody_Data* object = static_cast<const URLRequestBody_Data*>(data);

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
          object->elements, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams elements_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->elements, validation_context,
                                         &elements_validate_params)) {
    return false;
  }

  return true;
}

URLRequestBody_Data::URLRequestBody_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool DataElement_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const DataElement_Data* object = static_cast<const DataElement_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 88 }};

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


  if (!::network::mojom::internal::DataElementType_Data
        ::Validate(object->type, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->buf, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams buf_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->buf, validation_context,
                                         &buf_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->path, 3, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->path, validation_context))
    return false;

  if (!mojo::internal::ValidateStruct(object->file, validation_context))
    return false;

  const mojo::internal::ContainerValidateParams blob_uuid_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->blob_uuid, validation_context,
                                         &blob_uuid_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidateHandleOrInterface(object->data_pipe_getter,
                                                 validation_context)) {
    return false;
  }

  if (!mojo::internal::ValidateHandleOrInterface(object->chunked_data_pipe_getter,
                                                 validation_context)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->expected_modification_time, 10, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->expected_modification_time, validation_context))
    return false;

  return true;
}

DataElement_Data::DataElement_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool URLLoaderClientEndpoints_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const URLLoaderClientEndpoints_Data* object = static_cast<const URLLoaderClientEndpoints_Data*>(data);

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

  if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
          object->url_loader, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->url_loader,
                                                 validation_context)) {
    return false;
  }

  if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
          object->url_loader_client, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->url_loader_client,
                                                 validation_context)) {
    return false;
  }

  return true;
}

URLLoaderClientEndpoints_Data::URLLoaderClientEndpoints_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool URLLoader_FollowRedirect_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const URLLoader_FollowRedirect_Params_Data* object = static_cast<const URLLoader_FollowRedirect_Params_Data*>(data);

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
          object->removed_headers, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams removed_headers_validate_params(
      0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
  if (!mojo::internal::ValidateContainer(object->removed_headers, validation_context,
                                         &removed_headers_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->modified_headers, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->modified_headers, validation_context))
    return false;

  if (!mojo::internal::ValidateStruct(object->new_url, validation_context))
    return false;

  return true;
}

URLLoader_FollowRedirect_Params_Data::URLLoader_FollowRedirect_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool URLLoader_ProceedWithResponse_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const URLLoader_ProceedWithResponse_Params_Data* object = static_cast<const URLLoader_ProceedWithResponse_Params_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 8 }};

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

  return true;
}

URLLoader_ProceedWithResponse_Params_Data::URLLoader_ProceedWithResponse_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool URLLoader_SetPriority_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const URLLoader_SetPriority_Params_Data* object = static_cast<const URLLoader_SetPriority_Params_Data*>(data);

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


  if (!::network::mojom::internal::RequestPriority_Data
        ::Validate(object->priority, validation_context))
    return false;

  return true;
}

URLLoader_SetPriority_Params_Data::URLLoader_SetPriority_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool URLLoader_PauseReadingBodyFromNet_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const URLLoader_PauseReadingBodyFromNet_Params_Data* object = static_cast<const URLLoader_PauseReadingBodyFromNet_Params_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 8 }};

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

  return true;
}

URLLoader_PauseReadingBodyFromNet_Params_Data::URLLoader_PauseReadingBodyFromNet_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool URLLoader_ResumeReadingBodyFromNet_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const URLLoader_ResumeReadingBodyFromNet_Params_Data* object = static_cast<const URLLoader_ResumeReadingBodyFromNet_Params_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 8 }};

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

  return true;
}

URLLoader_ResumeReadingBodyFromNet_Params_Data::URLLoader_ResumeReadingBodyFromNet_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool URLLoaderClient_OnReceiveResponse_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const URLLoaderClient_OnReceiveResponse_Params_Data* object = static_cast<const URLLoaderClient_OnReceiveResponse_Params_Data*>(data);

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
          object->head, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->head, validation_context))
    return false;

  return true;
}

URLLoaderClient_OnReceiveResponse_Params_Data::URLLoaderClient_OnReceiveResponse_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool URLLoaderClient_OnReceiveRedirect_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const URLLoaderClient_OnReceiveRedirect_Params_Data* object = static_cast<const URLLoaderClient_OnReceiveRedirect_Params_Data*>(data);

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
          object->redirect_info, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->redirect_info, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->head, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->head, validation_context))
    return false;

  return true;
}

URLLoaderClient_OnReceiveRedirect_Params_Data::URLLoaderClient_OnReceiveRedirect_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool URLLoaderClient_OnUploadProgress_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const URLLoaderClient_OnUploadProgress_Params_Data* object = static_cast<const URLLoaderClient_OnUploadProgress_Params_Data*>(data);

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

  return true;
}

URLLoaderClient_OnUploadProgress_Params_Data::URLLoaderClient_OnUploadProgress_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool URLLoaderClient_OnUploadProgress_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const URLLoaderClient_OnUploadProgress_ResponseParams_Data* object = static_cast<const URLLoaderClient_OnUploadProgress_ResponseParams_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 8 }};

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

  return true;
}

URLLoaderClient_OnUploadProgress_ResponseParams_Data::URLLoaderClient_OnUploadProgress_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool URLLoaderClient_OnReceiveCachedMetadata_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const URLLoaderClient_OnReceiveCachedMetadata_Params_Data* object = static_cast<const URLLoaderClient_OnReceiveCachedMetadata_Params_Data*>(data);

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

  if (!mojo::internal::ValidateInlinedUnionNonNullable(
          object->data, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateInlinedUnion(object->data, validation_context))
    return false;

  return true;
}

URLLoaderClient_OnReceiveCachedMetadata_Params_Data::URLLoaderClient_OnReceiveCachedMetadata_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool URLLoaderClient_OnTransferSizeUpdated_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const URLLoaderClient_OnTransferSizeUpdated_Params_Data* object = static_cast<const URLLoaderClient_OnTransferSizeUpdated_Params_Data*>(data);

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

  return true;
}

URLLoaderClient_OnTransferSizeUpdated_Params_Data::URLLoaderClient_OnTransferSizeUpdated_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool URLLoaderClient_OnStartLoadingResponseBody_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const URLLoaderClient_OnStartLoadingResponseBody_Params_Data* object = static_cast<const URLLoaderClient_OnStartLoadingResponseBody_Params_Data*>(data);

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
          object->body, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->body,
                                                 validation_context)) {
    return false;
  }

  return true;
}

URLLoaderClient_OnStartLoadingResponseBody_Params_Data::URLLoaderClient_OnStartLoadingResponseBody_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool URLLoaderClient_OnComplete_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const URLLoaderClient_OnComplete_Params_Data* object = static_cast<const URLLoaderClient_OnComplete_Params_Data*>(data);

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
          object->status, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->status, validation_context))
    return false;

  return true;
}

URLLoaderClient_OnComplete_Params_Data::URLLoaderClient_OnComplete_Params_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace network

#if defined(_MSC_VER)
#pragma warning(pop)
#endif