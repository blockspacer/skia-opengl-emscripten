// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "third_party/blink/public/mojom/loader/code_cache.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "base/stl_util.h"  // for base::size()
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"

#include "third_party/blink/public/mojom/loader/code_cache.mojom-params-data.h"
namespace blink {
namespace mojom {

std::ostream& operator<<(std::ostream& os, CodeCacheType value) {
  switch(value) {
    case CodeCacheType::kJavascript:
      return os << "CodeCacheType::kJavascript";
    case CodeCacheType::kWebAssembly:
      return os << "CodeCacheType::kWebAssembly";
    default:
      return os << "Unknown CodeCacheType value: " << static_cast<int32_t>(value);
  }
}

namespace internal {


// static
bool CodeCacheHost_DidGenerateCacheableMetadata_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const CodeCacheHost_DidGenerateCacheableMetadata_Params_Data* object = static_cast<const CodeCacheHost_DidGenerateCacheableMetadata_Params_Data*>(data);

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


  if (!::blink::mojom::internal::CodeCacheType_Data
        ::Validate(object->cache_type, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->url, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->url, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->expected_response_time, 3, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->expected_response_time, validation_context))
    return false;

  if (!mojo::internal::ValidateInlinedUnionNonNullable(
          object->data, 4, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateInlinedUnion(object->data, validation_context))
    return false;

  return true;
}

CodeCacheHost_DidGenerateCacheableMetadata_Params_Data::CodeCacheHost_DidGenerateCacheableMetadata_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool CodeCacheHost_FetchCachedCode_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const CodeCacheHost_FetchCachedCode_Params_Data* object = static_cast<const CodeCacheHost_FetchCachedCode_Params_Data*>(data);

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


  if (!::blink::mojom::internal::CodeCacheType_Data
        ::Validate(object->cache_type, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->url, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->url, validation_context))
    return false;

  return true;
}

CodeCacheHost_FetchCachedCode_Params_Data::CodeCacheHost_FetchCachedCode_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool CodeCacheHost_FetchCachedCode_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const CodeCacheHost_FetchCachedCode_ResponseParams_Data* object = static_cast<const CodeCacheHost_FetchCachedCode_ResponseParams_Data*>(data);

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
          object->response_time, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->response_time, validation_context))
    return false;

  if (!mojo::internal::ValidateInlinedUnionNonNullable(
          object->data, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateInlinedUnion(object->data, validation_context))
    return false;

  return true;
}

CodeCacheHost_FetchCachedCode_ResponseParams_Data::CodeCacheHost_FetchCachedCode_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool CodeCacheHost_ClearCodeCacheEntry_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const CodeCacheHost_ClearCodeCacheEntry_Params_Data* object = static_cast<const CodeCacheHost_ClearCodeCacheEntry_Params_Data*>(data);

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


  if (!::blink::mojom::internal::CodeCacheType_Data
        ::Validate(object->cache_type, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->url, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->url, validation_context))
    return false;

  return true;
}

CodeCacheHost_ClearCodeCacheEntry_Params_Data::CodeCacheHost_ClearCodeCacheEntry_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool CodeCacheHost_DidGenerateCacheableMetadataInCacheStorage_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const CodeCacheHost_DidGenerateCacheableMetadataInCacheStorage_Params_Data* object = static_cast<const CodeCacheHost_DidGenerateCacheableMetadataInCacheStorage_Params_Data*>(data);

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

  if (!mojo::internal::ValidatePointerNonNullable(
          object->expected_response_time, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->expected_response_time, validation_context))
    return false;

  if (!mojo::internal::ValidateInlinedUnionNonNullable(
          object->data, 3, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateInlinedUnion(object->data, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->cache_storage_origin, 4, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->cache_storage_origin, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->cache_storage_cache_name, 5, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams cache_storage_cache_name_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->cache_storage_cache_name, validation_context,
                                         &cache_storage_cache_name_validate_params)) {
    return false;
  }

  return true;
}

CodeCacheHost_DidGenerateCacheableMetadataInCacheStorage_Params_Data::CodeCacheHost_DidGenerateCacheableMetadataInCacheStorage_Params_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#if defined(_MSC_VER)
#pragma warning(pop)
#endif