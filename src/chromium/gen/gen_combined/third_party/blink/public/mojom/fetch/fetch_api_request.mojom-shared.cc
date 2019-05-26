// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "third_party/blink/public/mojom/fetch/fetch_api_request.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "base/stl_util.h"  // for base::size()
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"

#include "third_party/blink/public/mojom/fetch/fetch_api_request.mojom-params-data.h"
namespace blink {
namespace mojom {

std::ostream& operator<<(std::ostream& os, RequestContextType value) {
  switch(value) {
    case RequestContextType::UNSPECIFIED:
      return os << "RequestContextType::UNSPECIFIED";
    case RequestContextType::AUDIO:
      return os << "RequestContextType::AUDIO";
    case RequestContextType::BEACON:
      return os << "RequestContextType::BEACON";
    case RequestContextType::CSP_REPORT:
      return os << "RequestContextType::CSP_REPORT";
    case RequestContextType::DOWNLOAD:
      return os << "RequestContextType::DOWNLOAD";
    case RequestContextType::EMBED:
      return os << "RequestContextType::EMBED";
    case RequestContextType::EVENT_SOURCE:
      return os << "RequestContextType::EVENT_SOURCE";
    case RequestContextType::FAVICON:
      return os << "RequestContextType::FAVICON";
    case RequestContextType::FETCH:
      return os << "RequestContextType::FETCH";
    case RequestContextType::FONT:
      return os << "RequestContextType::FONT";
    case RequestContextType::FORM:
      return os << "RequestContextType::FORM";
    case RequestContextType::FRAME:
      return os << "RequestContextType::FRAME";
    case RequestContextType::HYPERLINK:
      return os << "RequestContextType::HYPERLINK";
    case RequestContextType::IFRAME:
      return os << "RequestContextType::IFRAME";
    case RequestContextType::IMAGE:
      return os << "RequestContextType::IMAGE";
    case RequestContextType::IMAGE_SET:
      return os << "RequestContextType::IMAGE_SET";
    case RequestContextType::IMPORT:
      return os << "RequestContextType::IMPORT";
    case RequestContextType::INTERNAL:
      return os << "RequestContextType::INTERNAL";
    case RequestContextType::LOCATION:
      return os << "RequestContextType::LOCATION";
    case RequestContextType::MANIFEST:
      return os << "RequestContextType::MANIFEST";
    case RequestContextType::OBJECT:
      return os << "RequestContextType::OBJECT";
    case RequestContextType::PING:
      return os << "RequestContextType::PING";
    case RequestContextType::PLUGIN:
      return os << "RequestContextType::PLUGIN";
    case RequestContextType::PREFETCH:
      return os << "RequestContextType::PREFETCH";
    case RequestContextType::SCRIPT:
      return os << "RequestContextType::SCRIPT";
    case RequestContextType::SERVICE_WORKER:
      return os << "RequestContextType::SERVICE_WORKER";
    case RequestContextType::SHARED_WORKER:
      return os << "RequestContextType::SHARED_WORKER";
    case RequestContextType::SUBRESOURCE:
      return os << "RequestContextType::SUBRESOURCE";
    case RequestContextType::STYLE:
      return os << "RequestContextType::STYLE";
    case RequestContextType::TRACK:
      return os << "RequestContextType::TRACK";
    case RequestContextType::VIDEO:
      return os << "RequestContextType::VIDEO";
    case RequestContextType::WORKER:
      return os << "RequestContextType::WORKER";
    case RequestContextType::XML_HTTP_REQUEST:
      return os << "RequestContextType::XML_HTTP_REQUEST";
    case RequestContextType::XSLT:
      return os << "RequestContextType::XSLT";
    default:
      return os << "Unknown RequestContextType value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, FetchCacheMode value) {
  switch(value) {
    case FetchCacheMode::kDefault:
      return os << "FetchCacheMode::kDefault";
    case FetchCacheMode::kNoStore:
      return os << "FetchCacheMode::kNoStore";
    case FetchCacheMode::kBypassCache:
      return os << "FetchCacheMode::kBypassCache";
    case FetchCacheMode::kValidateCache:
      return os << "FetchCacheMode::kValidateCache";
    case FetchCacheMode::kForceCache:
      return os << "FetchCacheMode::kForceCache";
    case FetchCacheMode::kOnlyIfCached:
      return os << "FetchCacheMode::kOnlyIfCached";
    case FetchCacheMode::kUnspecifiedOnlyIfCachedStrict:
      return os << "FetchCacheMode::kUnspecifiedOnlyIfCachedStrict";
    case FetchCacheMode::kUnspecifiedForceCacheMiss:
      return os << "FetchCacheMode::kUnspecifiedForceCacheMiss";
    default:
      return os << "Unknown FetchCacheMode value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, FetchImportanceMode value) {
  switch(value) {
    case FetchImportanceMode::kImportanceLow:
      return os << "FetchImportanceMode::kImportanceLow";
    case FetchImportanceMode::kImportanceAuto:
      return os << "FetchImportanceMode::kImportanceAuto";
    case FetchImportanceMode::kImportanceHigh:
      return os << "FetchImportanceMode::kImportanceHigh";
    default:
      return os << "Unknown FetchImportanceMode value: " << static_cast<int32_t>(value);
  }
}

namespace internal {


// static
bool FetchAPIRequestHeaders_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const FetchAPIRequestHeaders_Data* object = static_cast<const FetchAPIRequestHeaders_Data*>(data);

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
          object->headers, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams headers_validate_params(
      new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)), new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)));
  if (!mojo::internal::ValidateContainer(object->headers, validation_context,
                                         &headers_validate_params)) {
    return false;
  }

  return true;
}

FetchAPIRequestHeaders_Data::FetchAPIRequestHeaders_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool FetchAPIRequest_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const FetchAPIRequest_Data* object = static_cast<const FetchAPIRequest_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 104 }};

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


  if (!::network::mojom::internal::FetchRequestMode_Data
        ::Validate(object->mode, validation_context))
    return false;


  if (!::blink::mojom::internal::RequestContextType_Data
        ::Validate(object->request_context_type, validation_context))
    return false;


  if (!::network::mojom::internal::RequestContextFrameType_Data
        ::Validate(object->frame_type, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->url, 5, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->url, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->method, 6, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams method_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->method, validation_context,
                                         &method_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->headers, 7, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->headers, validation_context))
    return false;

  if (!mojo::internal::ValidateStruct(object->blob, validation_context))
    return false;

  if (!mojo::internal::ValidateStruct(object->body, validation_context))
    return false;

  if (!mojo::internal::ValidateStruct(object->referrer, validation_context))
    return false;


  if (!::network::mojom::internal::FetchCredentialsMode_Data
        ::Validate(object->credentials_mode, validation_context))
    return false;


  if (!::blink::mojom::internal::FetchCacheMode_Data
        ::Validate(object->cache_mode, validation_context))
    return false;


  if (!::network::mojom::internal::FetchRedirectMode_Data
        ::Validate(object->redirect_mode, validation_context))
    return false;

  const mojo::internal::ContainerValidateParams integrity_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->integrity, validation_context,
                                         &integrity_validate_params)) {
    return false;
  }


  if (!::network::mojom::internal::RequestPriority_Data
        ::Validate(object->priority, validation_context))
    return false;

  if (!mojo::internal::ValidateStruct(object->fetch_window_id, validation_context))
    return false;

  return true;
}

FetchAPIRequest_Data::FetchAPIRequest_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#if defined(_MSC_VER)
#pragma warning(pop)
#endif