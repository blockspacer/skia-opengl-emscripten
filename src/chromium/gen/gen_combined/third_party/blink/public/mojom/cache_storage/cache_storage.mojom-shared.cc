// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "third_party/blink/public/mojom/cache_storage/cache_storage.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "base/stl_util.h"  // for base::size()
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"

#include "third_party/blink/public/mojom/cache_storage/cache_storage.mojom-params-data.h"
namespace blink {
namespace mojom {

std::ostream& operator<<(std::ostream& os, CacheStorageError value) {
  switch(value) {
    case CacheStorageError::kSuccess:
      return os << "CacheStorageError::kSuccess";
    case CacheStorageError::kErrorExists:
      return os << "CacheStorageError::kErrorExists";
    case CacheStorageError::kErrorStorage:
      return os << "CacheStorageError::kErrorStorage";
    case CacheStorageError::kErrorNotFound:
      return os << "CacheStorageError::kErrorNotFound";
    case CacheStorageError::kErrorQuotaExceeded:
      return os << "CacheStorageError::kErrorQuotaExceeded";
    case CacheStorageError::kErrorCacheNameNotFound:
      return os << "CacheStorageError::kErrorCacheNameNotFound";
    case CacheStorageError::kErrorQueryTooLarge:
      return os << "CacheStorageError::kErrorQueryTooLarge";
    case CacheStorageError::kErrorNotImplemented:
      return os << "CacheStorageError::kErrorNotImplemented";
    case CacheStorageError::kErrorDuplicateOperation:
      return os << "CacheStorageError::kErrorDuplicateOperation";
    default:
      return os << "Unknown CacheStorageError value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, OperationType value) {
  switch(value) {
    case OperationType::kUndefined:
      return os << "OperationType::kUndefined";
    case OperationType::kPut:
      return os << "OperationType::kPut";
    case OperationType::kDelete:
      return os << "OperationType::kDelete";
    default:
      return os << "Unknown OperationType value: " << static_cast<int32_t>(value);
  }
}

namespace internal {
// static
bool OpenResult_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context,
    bool inlined) {
  if (!data) {
    DCHECK(!inlined);
    return true;
  }

  // If it is inlined, the alignment is already enforced by its enclosing
  // object. We don't have to validate that.
  DCHECK(!inlined || mojo::internal::IsAligned(data));

  if (!inlined &&
      !mojo::internal::ValidateNonInlinedUnionHeaderAndClaimMemory(
          data, validation_context)) {
    return false;
  }

  const OpenResult_Data* object = static_cast<const OpenResult_Data*>(data);
  ALLOW_UNUSED_LOCAL(object);

  if (inlined && object->is_null())
    return true;

  switch (object->tag) {

    case OpenResult_Tag::STATUS: {


      if (!::blink::mojom::internal::CacheStorageError_Data
            ::Validate(object->data.f_status, validation_context))
        return false;
      return true;
    }
    case OpenResult_Tag::CACHE: {

      if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
              object->data.f_cache, 2, validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateHandleOrInterface(object->data.f_cache,
                                                     validation_context)) {
        return false;
      }
      return true;
    }
    default: {
      ReportValidationError(
          validation_context,
          mojo::internal::VALIDATION_ERROR_UNKNOWN_UNION_TAG,
          "unknown tag in OpenResult");
      return false;
    }
  }
}
// static
bool MatchResult_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context,
    bool inlined) {
  if (!data) {
    DCHECK(!inlined);
    return true;
  }

  // If it is inlined, the alignment is already enforced by its enclosing
  // object. We don't have to validate that.
  DCHECK(!inlined || mojo::internal::IsAligned(data));

  if (!inlined &&
      !mojo::internal::ValidateNonInlinedUnionHeaderAndClaimMemory(
          data, validation_context)) {
    return false;
  }

  const MatchResult_Data* object = static_cast<const MatchResult_Data*>(data);
  ALLOW_UNUSED_LOCAL(object);

  if (inlined && object->is_null())
    return true;

  switch (object->tag) {

    case MatchResult_Tag::STATUS: {


      if (!::blink::mojom::internal::CacheStorageError_Data
            ::Validate(object->data.f_status, validation_context))
        return false;
      return true;
    }
    case MatchResult_Tag::RESPONSE: {

      if (!mojo::internal::ValidatePointerNonNullable(
              object->data.f_response, 2, validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateStruct(object->data.f_response, validation_context))
        return false;
      return true;
    }
    default: {
      ReportValidationError(
          validation_context,
          mojo::internal::VALIDATION_ERROR_UNKNOWN_UNION_TAG,
          "unknown tag in MatchResult");
      return false;
    }
  }
}
// static
bool MatchAllResult_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context,
    bool inlined) {
  if (!data) {
    DCHECK(!inlined);
    return true;
  }

  // If it is inlined, the alignment is already enforced by its enclosing
  // object. We don't have to validate that.
  DCHECK(!inlined || mojo::internal::IsAligned(data));

  if (!inlined &&
      !mojo::internal::ValidateNonInlinedUnionHeaderAndClaimMemory(
          data, validation_context)) {
    return false;
  }

  const MatchAllResult_Data* object = static_cast<const MatchAllResult_Data*>(data);
  ALLOW_UNUSED_LOCAL(object);

  if (inlined && object->is_null())
    return true;

  switch (object->tag) {

    case MatchAllResult_Tag::STATUS: {


      if (!::blink::mojom::internal::CacheStorageError_Data
            ::Validate(object->data.f_status, validation_context))
        return false;
      return true;
    }
    case MatchAllResult_Tag::RESPONSES: {

      if (!mojo::internal::ValidatePointerNonNullable(
              object->data.f_responses, 2, validation_context)) {
        return false;
      }
      const mojo::internal::ContainerValidateParams responses_validate_params(
          0, false, nullptr);
      if (!mojo::internal::ValidateContainer(object->data.f_responses, validation_context,
                                             &responses_validate_params)) {
        return false;
      }
      return true;
    }
    default: {
      ReportValidationError(
          validation_context,
          mojo::internal::VALIDATION_ERROR_UNKNOWN_UNION_TAG,
          "unknown tag in MatchAllResult");
      return false;
    }
  }
}
// static
bool CacheKeysResult_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context,
    bool inlined) {
  if (!data) {
    DCHECK(!inlined);
    return true;
  }

  // If it is inlined, the alignment is already enforced by its enclosing
  // object. We don't have to validate that.
  DCHECK(!inlined || mojo::internal::IsAligned(data));

  if (!inlined &&
      !mojo::internal::ValidateNonInlinedUnionHeaderAndClaimMemory(
          data, validation_context)) {
    return false;
  }

  const CacheKeysResult_Data* object = static_cast<const CacheKeysResult_Data*>(data);
  ALLOW_UNUSED_LOCAL(object);

  if (inlined && object->is_null())
    return true;

  switch (object->tag) {

    case CacheKeysResult_Tag::STATUS: {


      if (!::blink::mojom::internal::CacheStorageError_Data
            ::Validate(object->data.f_status, validation_context))
        return false;
      return true;
    }
    case CacheKeysResult_Tag::KEYS: {

      if (!mojo::internal::ValidatePointerNonNullable(
              object->data.f_keys, 2, validation_context)) {
        return false;
      }
      const mojo::internal::ContainerValidateParams keys_validate_params(
          0, false, nullptr);
      if (!mojo::internal::ValidateContainer(object->data.f_keys, validation_context,
                                             &keys_validate_params)) {
        return false;
      }
      return true;
    }
    default: {
      ReportValidationError(
          validation_context,
          mojo::internal::VALIDATION_ERROR_UNKNOWN_UNION_TAG,
          "unknown tag in CacheKeysResult");
      return false;
    }
  }
}


// static
bool CacheStorageVerboseError_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const CacheStorageVerboseError_Data* object = static_cast<const CacheStorageVerboseError_Data*>(data);

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


  if (!::blink::mojom::internal::CacheStorageError_Data
        ::Validate(object->value, validation_context))
    return false;

  const mojo::internal::ContainerValidateParams message_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->message, validation_context,
                                         &message_validate_params)) {
    return false;
  }

  return true;
}

CacheStorageVerboseError_Data::CacheStorageVerboseError_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool CacheQueryOptions_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const CacheQueryOptions_Data* object = static_cast<const CacheQueryOptions_Data*>(data);

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

CacheQueryOptions_Data::CacheQueryOptions_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool MultiCacheQueryOptions_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const MultiCacheQueryOptions_Data* object = static_cast<const MultiCacheQueryOptions_Data*>(data);

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
          object->query_options, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->query_options, validation_context))
    return false;

  if (!mojo::internal::ValidateStruct(object->cache_name, validation_context))
    return false;

  return true;
}

MultiCacheQueryOptions_Data::MultiCacheQueryOptions_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool BatchOperation_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const BatchOperation_Data* object = static_cast<const BatchOperation_Data*>(data);

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


  if (!::blink::mojom::internal::OperationType_Data
        ::Validate(object->operation_type, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->request, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->request, validation_context))
    return false;

  if (!mojo::internal::ValidateStruct(object->response, validation_context))
    return false;

  if (!mojo::internal::ValidateStruct(object->match_options, validation_context))
    return false;

  return true;
}

BatchOperation_Data::BatchOperation_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool CacheStorageCache_Match_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const CacheStorageCache_Match_Params_Data* object = static_cast<const CacheStorageCache_Match_Params_Data*>(data);

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
          object->request, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->request, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->query_options, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->query_options, validation_context))
    return false;

  return true;
}

CacheStorageCache_Match_Params_Data::CacheStorageCache_Match_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool CacheStorageCache_Match_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const CacheStorageCache_Match_ResponseParams_Data* object = static_cast<const CacheStorageCache_Match_ResponseParams_Data*>(data);

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
          object->result, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateInlinedUnion(object->result, validation_context))
    return false;

  return true;
}

CacheStorageCache_Match_ResponseParams_Data::CacheStorageCache_Match_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool CacheStorageCache_MatchAll_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const CacheStorageCache_MatchAll_Params_Data* object = static_cast<const CacheStorageCache_MatchAll_Params_Data*>(data);

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

  if (!mojo::internal::ValidateStruct(object->request, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->query_options, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->query_options, validation_context))
    return false;

  return true;
}

CacheStorageCache_MatchAll_Params_Data::CacheStorageCache_MatchAll_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool CacheStorageCache_MatchAll_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const CacheStorageCache_MatchAll_ResponseParams_Data* object = static_cast<const CacheStorageCache_MatchAll_ResponseParams_Data*>(data);

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
          object->result, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateInlinedUnion(object->result, validation_context))
    return false;

  return true;
}

CacheStorageCache_MatchAll_ResponseParams_Data::CacheStorageCache_MatchAll_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool CacheStorageCache_Keys_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const CacheStorageCache_Keys_Params_Data* object = static_cast<const CacheStorageCache_Keys_Params_Data*>(data);

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

  if (!mojo::internal::ValidateStruct(object->request, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->query_options, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->query_options, validation_context))
    return false;

  return true;
}

CacheStorageCache_Keys_Params_Data::CacheStorageCache_Keys_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool CacheStorageCache_Keys_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const CacheStorageCache_Keys_ResponseParams_Data* object = static_cast<const CacheStorageCache_Keys_ResponseParams_Data*>(data);

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
          object->result, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateInlinedUnion(object->result, validation_context))
    return false;

  return true;
}

CacheStorageCache_Keys_ResponseParams_Data::CacheStorageCache_Keys_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool CacheStorageCache_Batch_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const CacheStorageCache_Batch_Params_Data* object = static_cast<const CacheStorageCache_Batch_Params_Data*>(data);

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
          object->batch_operations, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams batch_operations_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->batch_operations, validation_context,
                                         &batch_operations_validate_params)) {
    return false;
  }

  return true;
}

CacheStorageCache_Batch_Params_Data::CacheStorageCache_Batch_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool CacheStorageCache_Batch_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const CacheStorageCache_Batch_ResponseParams_Data* object = static_cast<const CacheStorageCache_Batch_ResponseParams_Data*>(data);

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
          object->result, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->result, validation_context))
    return false;

  return true;
}

CacheStorageCache_Batch_ResponseParams_Data::CacheStorageCache_Batch_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool CacheStorageCache_SetSideData_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const CacheStorageCache_SetSideData_Params_Data* object = static_cast<const CacheStorageCache_SetSideData_Params_Data*>(data);

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

  if (!mojo::internal::ValidatePointerNonNullable(
          object->url, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->url, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->response_time, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->response_time, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->side_data, 3, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams side_data_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->side_data, validation_context,
                                         &side_data_validate_params)) {
    return false;
  }

  return true;
}

CacheStorageCache_SetSideData_Params_Data::CacheStorageCache_SetSideData_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool CacheStorageCache_SetSideData_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const CacheStorageCache_SetSideData_ResponseParams_Data* object = static_cast<const CacheStorageCache_SetSideData_ResponseParams_Data*>(data);

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


  if (!::blink::mojom::internal::CacheStorageError_Data
        ::Validate(object->result, validation_context))
    return false;

  return true;
}

CacheStorageCache_SetSideData_ResponseParams_Data::CacheStorageCache_SetSideData_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool CacheStorage_Has_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const CacheStorage_Has_Params_Data* object = static_cast<const CacheStorage_Has_Params_Data*>(data);

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
          object->cache_name, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->cache_name, validation_context))
    return false;

  return true;
}

CacheStorage_Has_Params_Data::CacheStorage_Has_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool CacheStorage_Has_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const CacheStorage_Has_ResponseParams_Data* object = static_cast<const CacheStorage_Has_ResponseParams_Data*>(data);

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


  if (!::blink::mojom::internal::CacheStorageError_Data
        ::Validate(object->result, validation_context))
    return false;

  return true;
}

CacheStorage_Has_ResponseParams_Data::CacheStorage_Has_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool CacheStorage_Delete_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const CacheStorage_Delete_Params_Data* object = static_cast<const CacheStorage_Delete_Params_Data*>(data);

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
          object->cache_name, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->cache_name, validation_context))
    return false;

  return true;
}

CacheStorage_Delete_Params_Data::CacheStorage_Delete_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool CacheStorage_Delete_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const CacheStorage_Delete_ResponseParams_Data* object = static_cast<const CacheStorage_Delete_ResponseParams_Data*>(data);

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


  if (!::blink::mojom::internal::CacheStorageError_Data
        ::Validate(object->result, validation_context))
    return false;

  return true;
}

CacheStorage_Delete_ResponseParams_Data::CacheStorage_Delete_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool CacheStorage_Keys_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const CacheStorage_Keys_Params_Data* object = static_cast<const CacheStorage_Keys_Params_Data*>(data);

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

CacheStorage_Keys_Params_Data::CacheStorage_Keys_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool CacheStorage_Keys_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const CacheStorage_Keys_ResponseParams_Data* object = static_cast<const CacheStorage_Keys_ResponseParams_Data*>(data);

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
          object->keys, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams keys_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->keys, validation_context,
                                         &keys_validate_params)) {
    return false;
  }

  return true;
}

CacheStorage_Keys_ResponseParams_Data::CacheStorage_Keys_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool CacheStorage_Match_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const CacheStorage_Match_Params_Data* object = static_cast<const CacheStorage_Match_Params_Data*>(data);

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
          object->request, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->request, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->match_options, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->match_options, validation_context))
    return false;

  return true;
}

CacheStorage_Match_Params_Data::CacheStorage_Match_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool CacheStorage_Match_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const CacheStorage_Match_ResponseParams_Data* object = static_cast<const CacheStorage_Match_ResponseParams_Data*>(data);

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
          object->result, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateInlinedUnion(object->result, validation_context))
    return false;

  return true;
}

CacheStorage_Match_ResponseParams_Data::CacheStorage_Match_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool CacheStorage_Open_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const CacheStorage_Open_Params_Data* object = static_cast<const CacheStorage_Open_Params_Data*>(data);

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
          object->cache_name, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->cache_name, validation_context))
    return false;

  return true;
}

CacheStorage_Open_Params_Data::CacheStorage_Open_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool CacheStorage_Open_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const CacheStorage_Open_ResponseParams_Data* object = static_cast<const CacheStorage_Open_ResponseParams_Data*>(data);

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
          object->result, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateInlinedUnion(object->result, validation_context))
    return false;

  return true;
}

CacheStorage_Open_ResponseParams_Data::CacheStorage_Open_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#if defined(_MSC_VER)
#pragma warning(pop)
#endif