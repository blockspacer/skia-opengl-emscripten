// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "components/services/heap_profiling/public/mojom/heap_profiling_client.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "base/stl_util.h"  // for base::size()
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"

#include "components/services/heap_profiling/public/mojom/heap_profiling_client.mojom-params-data.h"
namespace heap_profiling {
namespace mojom {

std::ostream& operator<<(std::ostream& os, StackMode value) {
  switch(value) {
    case StackMode::NATIVE_WITH_THREAD_NAMES:
      return os << "StackMode::NATIVE_WITH_THREAD_NAMES";
    case StackMode::NATIVE_WITHOUT_THREAD_NAMES:
      return os << "StackMode::NATIVE_WITHOUT_THREAD_NAMES";
    case StackMode::PSEUDO:
      return os << "StackMode::PSEUDO";
    case StackMode::MIXED:
      return os << "StackMode::MIXED";
    default:
      return os << "Unknown StackMode value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, AllocatorType value) {
  switch(value) {
    case AllocatorType::kMalloc:
      return os << "AllocatorType::kMalloc";
    case AllocatorType::kPartitionAlloc:
      return os << "AllocatorType::kPartitionAlloc";
    case AllocatorType::kOilpan:
      return os << "AllocatorType::kOilpan";
    default:
      return os << "Unknown AllocatorType value: " << static_cast<int32_t>(value);
  }
}

namespace internal {


// static
bool ProfilingParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ProfilingParams_Data* object = static_cast<const ProfilingParams_Data*>(data);

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


  if (!::heap_profiling::mojom::internal::StackMode_Data
        ::Validate(object->stack_mode, validation_context))
    return false;

  return true;
}

ProfilingParams_Data::ProfilingParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool HeapProfileSample_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const HeapProfileSample_Data* object = static_cast<const HeapProfileSample_Data*>(data);

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


  if (!::heap_profiling::mojom::internal::AllocatorType_Data
        ::Validate(object->allocator, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->stack, 4, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams stack_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->stack, validation_context,
                                         &stack_validate_params)) {
    return false;
  }

  return true;
}

HeapProfileSample_Data::HeapProfileSample_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool HeapProfile_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const HeapProfile_Data* object = static_cast<const HeapProfile_Data*>(data);

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
          object->samples, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams samples_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->samples, validation_context,
                                         &samples_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->strings, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams strings_validate_params(
      new mojo::internal::ContainerValidateParams(0, false, nullptr), new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)));
  if (!mojo::internal::ValidateContainer(object->strings, validation_context,
                                         &strings_validate_params)) {
    return false;
  }

  return true;
}

HeapProfile_Data::HeapProfile_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ProfilingClient_StartProfiling_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ProfilingClient_StartProfiling_Params_Data* object = static_cast<const ProfilingClient_StartProfiling_Params_Data*>(data);

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
          object->params, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->params, validation_context))
    return false;

  return true;
}

ProfilingClient_StartProfiling_Params_Data::ProfilingClient_StartProfiling_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ProfilingClient_RetrieveHeapProfile_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ProfilingClient_RetrieveHeapProfile_Params_Data* object = static_cast<const ProfilingClient_RetrieveHeapProfile_Params_Data*>(data);

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

ProfilingClient_RetrieveHeapProfile_Params_Data::ProfilingClient_RetrieveHeapProfile_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ProfilingClient_RetrieveHeapProfile_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ProfilingClient_RetrieveHeapProfile_ResponseParams_Data* object = static_cast<const ProfilingClient_RetrieveHeapProfile_ResponseParams_Data*>(data);

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
          object->profile, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->profile, validation_context))
    return false;

  return true;
}

ProfilingClient_RetrieveHeapProfile_ResponseParams_Data::ProfilingClient_RetrieveHeapProfile_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace heap_profiling

#if defined(_MSC_VER)
#pragma warning(pop)
#endif