// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "third_party/blink/public/mojom/quota/quota_types.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "base/stl_util.h"  // for base::size()
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"

#include "third_party/blink/public/mojom/quota/quota_types.mojom-params-data.h"
namespace blink {
namespace mojom {

std::ostream& operator<<(std::ostream& os, StorageType value) {
  switch(value) {
    case StorageType::kTemporary:
      return os << "StorageType::kTemporary";
    case StorageType::kPersistent:
      return os << "StorageType::kPersistent";
    case StorageType::kSyncable:
      return os << "StorageType::kSyncable";
    case StorageType::kQuotaNotManaged:
      return os << "StorageType::kQuotaNotManaged";
    case StorageType::kUnknown:
      return os << "StorageType::kUnknown";
    default:
      return os << "Unknown StorageType value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, QuotaStatusCode value) {
  switch(value) {
    case QuotaStatusCode::kUnknown:
      return os << "QuotaStatusCode::kUnknown";
    case QuotaStatusCode::kOk:
      return os << "QuotaStatusCode::kOk";
    case QuotaStatusCode::kErrorNotSupported:
      return os << "QuotaStatusCode::kErrorNotSupported";
    case QuotaStatusCode::kErrorInvalidModification:
      return os << "QuotaStatusCode::kErrorInvalidModification";
    case QuotaStatusCode::kErrorInvalidAccess:
      return os << "QuotaStatusCode::kErrorInvalidAccess";
    case QuotaStatusCode::kErrorAbort:
      return os << "QuotaStatusCode::kErrorAbort";
    default:
      return os << "Unknown QuotaStatusCode value: " << static_cast<int32_t>(value);
  }
}

namespace internal {


// static
bool UsageBreakdown_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const UsageBreakdown_Data* object = static_cast<const UsageBreakdown_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 64 }};

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

UsageBreakdown_Data::UsageBreakdown_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#if defined(_MSC_VER)
#pragma warning(pop)
#endif