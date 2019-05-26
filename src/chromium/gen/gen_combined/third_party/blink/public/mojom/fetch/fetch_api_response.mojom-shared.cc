// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "third_party/blink/public/mojom/fetch/fetch_api_response.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "base/stl_util.h"  // for base::size()
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"

#include "third_party/blink/public/mojom/fetch/fetch_api_response.mojom-params-data.h"
namespace blink {
namespace mojom {

namespace internal {


// static
bool FetchAPIResponse_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const FetchAPIResponse_Data* object = static_cast<const FetchAPIResponse_Data*>(data);

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

  if (!mojo::internal::ValidatePointerNonNullable(
          object->url_list, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams url_list_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->url_list, validation_context,
                                         &url_list_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->status_text, 3, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams status_text_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->status_text, validation_context,
                                         &status_text_validate_params)) {
    return false;
  }


  if (!::network::mojom::internal::FetchResponseType_Data
        ::Validate(object->response_type, validation_context))
    return false;


  if (!::network::mojom::internal::FetchResponseSource_Data
        ::Validate(object->response_source, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->headers, 6, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams headers_validate_params(
      new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)), new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)));
  if (!mojo::internal::ValidateContainer(object->headers, validation_context,
                                         &headers_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidateStruct(object->blob, validation_context))
    return false;


  if (!::blink::mojom::internal::ServiceWorkerResponseError_Data
        ::Validate(object->error, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->response_time, 9, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->response_time, validation_context))
    return false;

  const mojo::internal::ContainerValidateParams cache_storage_cache_name_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->cache_storage_cache_name, validation_context,
                                         &cache_storage_cache_name_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->cors_exposed_header_names, 11, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams cors_exposed_header_names_validate_params(
      0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
  if (!mojo::internal::ValidateContainer(object->cors_exposed_header_names, validation_context,
                                         &cors_exposed_header_names_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidateStruct(object->side_data_blob, validation_context))
    return false;

  return true;
}

FetchAPIResponse_Data::FetchAPIResponse_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#if defined(_MSC_VER)
#pragma warning(pop)
#endif