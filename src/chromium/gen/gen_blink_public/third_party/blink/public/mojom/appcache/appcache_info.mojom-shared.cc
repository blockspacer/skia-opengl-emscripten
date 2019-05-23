// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "third_party/blink/public/mojom/appcache/appcache_info.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "base/stl_util.h"  // for base::size()
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"

#include "third_party/blink/public/mojom/appcache/appcache_info.mojom-params-data.h"
namespace blink {
namespace mojom {

std::ostream& operator<<(std::ostream& os, AppCacheStatus value) {
  switch(value) {
    case AppCacheStatus::APPCACHE_STATUS_UNCACHED:
      return os << "AppCacheStatus::APPCACHE_STATUS_UNCACHED";
    case AppCacheStatus::APPCACHE_STATUS_IDLE:
      return os << "AppCacheStatus::APPCACHE_STATUS_IDLE";
    case AppCacheStatus::APPCACHE_STATUS_CHECKING:
      return os << "AppCacheStatus::APPCACHE_STATUS_CHECKING";
    case AppCacheStatus::APPCACHE_STATUS_DOWNLOADING:
      return os << "AppCacheStatus::APPCACHE_STATUS_DOWNLOADING";
    case AppCacheStatus::APPCACHE_STATUS_UPDATE_READY:
      return os << "AppCacheStatus::APPCACHE_STATUS_UPDATE_READY";
    case AppCacheStatus::APPCACHE_STATUS_OBSOLETE:
      return os << "AppCacheStatus::APPCACHE_STATUS_OBSOLETE";
    default:
      return os << "Unknown AppCacheStatus value: " << static_cast<int32_t>(value);
  }
}

namespace internal {


// static
bool AppCacheInfo_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const AppCacheInfo_Data* object = static_cast<const AppCacheInfo_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 80 }};

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
          object->manifest_url, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->manifest_url, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->creation_time, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->creation_time, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->last_update_time, 3, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->last_update_time, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->last_access_time, 4, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->last_access_time, validation_context))
    return false;


  if (!::blink::mojom::internal::AppCacheStatus_Data
        ::Validate(object->status, validation_context))
    return false;

  return true;
}

AppCacheInfo_Data::AppCacheInfo_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#if defined(_MSC_VER)
#pragma warning(pop)
#endif