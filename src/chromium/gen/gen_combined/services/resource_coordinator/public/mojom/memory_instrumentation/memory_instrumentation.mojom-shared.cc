// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "services/resource_coordinator/public/mojom/memory_instrumentation/memory_instrumentation.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "base/stl_util.h"  // for base::size()
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"

#include "services/resource_coordinator/public/mojom/memory_instrumentation/memory_instrumentation.mojom-params-data.h"
namespace memory_instrumentation {
namespace mojom {

std::ostream& operator<<(std::ostream& os, DumpType value) {
  switch(value) {
    case DumpType::PERIODIC_INTERVAL:
      return os << "DumpType::PERIODIC_INTERVAL";
    case DumpType::EXPLICITLY_TRIGGERED:
      return os << "DumpType::EXPLICITLY_TRIGGERED";
    case DumpType::SUMMARY_ONLY:
      return os << "DumpType::SUMMARY_ONLY";
    default:
      return os << "Unknown DumpType value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, LevelOfDetail value) {
  switch(value) {
    case LevelOfDetail::BACKGROUND:
      return os << "LevelOfDetail::BACKGROUND";
    case LevelOfDetail::LIGHT:
      return os << "LevelOfDetail::LIGHT";
    case LevelOfDetail::DETAILED:
      return os << "LevelOfDetail::DETAILED";
    default:
      return os << "Unknown LevelOfDetail value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, ProcessType value) {
  switch(value) {
    case ProcessType::OTHER:
      return os << "ProcessType::OTHER";
    case ProcessType::BROWSER:
      return os << "ProcessType::BROWSER";
    case ProcessType::RENDERER:
      return os << "ProcessType::RENDERER";
    case ProcessType::GPU:
      return os << "ProcessType::GPU";
    case ProcessType::UTILITY:
      return os << "ProcessType::UTILITY";
    case ProcessType::PLUGIN:
      return os << "ProcessType::PLUGIN";
    case ProcessType::ARC:
      return os << "ProcessType::ARC";
    default:
      return os << "Unknown ProcessType value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, MemoryMapOption value) {
  switch(value) {
    case MemoryMapOption::NONE:
      return os << "MemoryMapOption::NONE";
    case MemoryMapOption::MODULES:
      return os << "MemoryMapOption::MODULES";
    case MemoryMapOption::FULL:
      return os << "MemoryMapOption::FULL";
    default:
      return os << "Unknown MemoryMapOption value: " << static_cast<int32_t>(value);
  }
}

namespace internal {
// static
bool RawAllocatorDumpEntryValue_Data::Validate(
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

  const RawAllocatorDumpEntryValue_Data* object = static_cast<const RawAllocatorDumpEntryValue_Data*>(data);
  ALLOW_UNUSED_LOCAL(object);

  if (inlined && object->is_null())
    return true;

  switch (object->tag) {

    case RawAllocatorDumpEntryValue_Tag::VALUE_UINT64: {

      return true;
    }
    case RawAllocatorDumpEntryValue_Tag::VALUE_STRING: {

      if (!mojo::internal::ValidatePointerNonNullable(
              object->data.f_value_string, 2, validation_context)) {
        return false;
      }
      const mojo::internal::ContainerValidateParams value_string_validate_params(
          0, false, nullptr);
      if (!mojo::internal::ValidateContainer(object->data.f_value_string, validation_context,
                                             &value_string_validate_params)) {
        return false;
      }
      return true;
    }
    default: {
      ReportValidationError(
          validation_context,
          mojo::internal::VALIDATION_ERROR_UNKNOWN_UNION_TAG,
          "unknown tag in RawAllocatorDumpEntryValue");
      return false;
    }
  }
}


// static
bool RequestArgs_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const RequestArgs_Data* object = static_cast<const RequestArgs_Data*>(data);

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


  if (!::memory_instrumentation::mojom::internal::DumpType_Data
        ::Validate(object->dump_type, validation_context))
    return false;


  if (!::memory_instrumentation::mojom::internal::LevelOfDetail_Data
        ::Validate(object->level_of_detail, validation_context))
    return false;

  return true;
}

RequestArgs_Data::RequestArgs_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool RawAllocatorDumpEdge_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const RawAllocatorDumpEdge_Data* object = static_cast<const RawAllocatorDumpEdge_Data*>(data);

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

  return true;
}

RawAllocatorDumpEdge_Data::RawAllocatorDumpEdge_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool RawAllocatorDumpEntry_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const RawAllocatorDumpEntry_Data* object = static_cast<const RawAllocatorDumpEntry_Data*>(data);

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
          object->name, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams name_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->name, validation_context,
                                         &name_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->units, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams units_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->units, validation_context,
                                         &units_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidateInlinedUnionNonNullable(
          object->value, 3, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateInlinedUnion(object->value, validation_context))
    return false;

  return true;
}

RawAllocatorDumpEntry_Data::RawAllocatorDumpEntry_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool RawAllocatorDump_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const RawAllocatorDump_Data* object = static_cast<const RawAllocatorDump_Data*>(data);

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
          object->absolute_name, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams absolute_name_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->absolute_name, validation_context,
                                         &absolute_name_validate_params)) {
    return false;
  }


  if (!::memory_instrumentation::mojom::internal::LevelOfDetail_Data
        ::Validate(object->level_of_detail, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->entries, 5, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams entries_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->entries, validation_context,
                                         &entries_validate_params)) {
    return false;
  }

  return true;
}

RawAllocatorDump_Data::RawAllocatorDump_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool RawProcessMemoryDump_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const RawProcessMemoryDump_Data* object = static_cast<const RawProcessMemoryDump_Data*>(data);

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


  if (!::memory_instrumentation::mojom::internal::LevelOfDetail_Data
        ::Validate(object->level_of_detail, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->allocator_dump_edges, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams allocator_dump_edges_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->allocator_dump_edges, validation_context,
                                         &allocator_dump_edges_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->allocator_dumps, 3, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams allocator_dumps_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->allocator_dumps, validation_context,
                                         &allocator_dumps_validate_params)) {
    return false;
  }

  return true;
}

RawProcessMemoryDump_Data::RawProcessMemoryDump_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool VmRegion_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const VmRegion_Data* object = static_cast<const VmRegion_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 112 }};

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
          object->module_debugid, 4, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams module_debugid_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->module_debugid, validation_context,
                                         &module_debugid_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->module_debug_path, 5, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams module_debug_path_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->module_debug_path, validation_context,
                                         &module_debug_path_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->mapped_file, 7, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams mapped_file_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->mapped_file, validation_context,
                                         &mapped_file_validate_params)) {
    return false;
  }

  return true;
}

VmRegion_Data::VmRegion_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PlatformPrivateFootprint_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PlatformPrivateFootprint_Data* object = static_cast<const PlatformPrivateFootprint_Data*>(data);

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

  return true;
}

PlatformPrivateFootprint_Data::PlatformPrivateFootprint_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool RawOSMemDump_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const RawOSMemDump_Data* object = static_cast<const RawOSMemDump_Data*>(data);

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

  if (!mojo::internal::ValidatePointerNonNullable(
          object->platform_private_footprint, 4, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->platform_private_footprint, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->memory_maps, 5, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams memory_maps_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->memory_maps, validation_context,
                                         &memory_maps_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->native_library_pages_bitmap, 6, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams native_library_pages_bitmap_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->native_library_pages_bitmap, validation_context,
                                         &native_library_pages_bitmap_validate_params)) {
    return false;
  }

  return true;
}

RawOSMemDump_Data::RawOSMemDump_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool OSMemDump_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const OSMemDump_Data* object = static_cast<const OSMemDump_Data*>(data);

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

  return true;
}

OSMemDump_Data::OSMemDump_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool AllocatorMemDump_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const AllocatorMemDump_Data* object = static_cast<const AllocatorMemDump_Data*>(data);

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
          object->numeric_entries, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams numeric_entries_validate_params(
      new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)), new mojo::internal::ContainerValidateParams(0, false, nullptr));
  if (!mojo::internal::ValidateContainer(object->numeric_entries, validation_context,
                                         &numeric_entries_validate_params)) {
    return false;
  }

  return true;
}

AllocatorMemDump_Data::AllocatorMemDump_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ProcessMemoryDump_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ProcessMemoryDump_Data* object = static_cast<const ProcessMemoryDump_Data*>(data);

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


  if (!::memory_instrumentation::mojom::internal::ProcessType_Data
        ::Validate(object->process_type, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->os_dump, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->os_dump, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->chrome_allocator_dumps, 3, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams chrome_allocator_dumps_validate_params(
      new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)), new mojo::internal::ContainerValidateParams(0, false, nullptr));
  if (!mojo::internal::ValidateContainer(object->chrome_allocator_dumps, validation_context,
                                         &chrome_allocator_dumps_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->pid, 4, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->pid, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->service_names, 5, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams service_names_validate_params(
      0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
  if (!mojo::internal::ValidateContainer(object->service_names, validation_context,
                                         &service_names_validate_params)) {
    return false;
  }

  return true;
}

ProcessMemoryDump_Data::ProcessMemoryDump_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool AggregatedMetrics_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const AggregatedMetrics_Data* object = static_cast<const AggregatedMetrics_Data*>(data);

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

AggregatedMetrics_Data::AggregatedMetrics_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool GlobalMemoryDump_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const GlobalMemoryDump_Data* object = static_cast<const GlobalMemoryDump_Data*>(data);

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
          object->start_time, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->start_time, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->process_dumps, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams process_dumps_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->process_dumps, validation_context,
                                         &process_dumps_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->aggregated_metrics, 3, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->aggregated_metrics, validation_context))
    return false;

  return true;
}

GlobalMemoryDump_Data::GlobalMemoryDump_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool HeapProfileResult_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const HeapProfileResult_Data* object = static_cast<const HeapProfileResult_Data*>(data);

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
          object->pid, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->pid, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->json, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->json, validation_context))
    return false;

  return true;
}

HeapProfileResult_Data::HeapProfileResult_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ClientProcess_RequestChromeMemoryDump_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ClientProcess_RequestChromeMemoryDump_Params_Data* object = static_cast<const ClientProcess_RequestChromeMemoryDump_Params_Data*>(data);

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
          object->args, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->args, validation_context))
    return false;

  return true;
}

ClientProcess_RequestChromeMemoryDump_Params_Data::ClientProcess_RequestChromeMemoryDump_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ClientProcess_RequestChromeMemoryDump_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ClientProcess_RequestChromeMemoryDump_ResponseParams_Data* object = static_cast<const ClientProcess_RequestChromeMemoryDump_ResponseParams_Data*>(data);

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

  if (!mojo::internal::ValidateStruct(object->raw_process_memory_dump, validation_context))
    return false;

  return true;
}

ClientProcess_RequestChromeMemoryDump_ResponseParams_Data::ClientProcess_RequestChromeMemoryDump_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ClientProcess_RequestOSMemoryDump_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ClientProcess_RequestOSMemoryDump_Params_Data* object = static_cast<const ClientProcess_RequestOSMemoryDump_Params_Data*>(data);

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


  if (!::memory_instrumentation::mojom::internal::MemoryMapOption_Data
        ::Validate(object->option, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->pids, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams pids_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->pids, validation_context,
                                         &pids_validate_params)) {
    return false;
  }

  return true;
}

ClientProcess_RequestOSMemoryDump_Params_Data::ClientProcess_RequestOSMemoryDump_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ClientProcess_RequestOSMemoryDump_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ClientProcess_RequestOSMemoryDump_ResponseParams_Data* object = static_cast<const ClientProcess_RequestOSMemoryDump_ResponseParams_Data*>(data);

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
          object->dumps, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams dumps_validate_params(
      new mojo::internal::ContainerValidateParams(0, false, nullptr), new mojo::internal::ContainerValidateParams(0, false, nullptr));
  if (!mojo::internal::ValidateContainer(object->dumps, validation_context,
                                         &dumps_validate_params)) {
    return false;
  }

  return true;
}

ClientProcess_RequestOSMemoryDump_ResponseParams_Data::ClientProcess_RequestOSMemoryDump_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool HeapProfiler_DumpProcessesForTracing_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const HeapProfiler_DumpProcessesForTracing_Params_Data* object = static_cast<const HeapProfiler_DumpProcessesForTracing_Params_Data*>(data);

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

HeapProfiler_DumpProcessesForTracing_Params_Data::HeapProfiler_DumpProcessesForTracing_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool HeapProfiler_DumpProcessesForTracing_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const HeapProfiler_DumpProcessesForTracing_ResponseParams_Data* object = static_cast<const HeapProfiler_DumpProcessesForTracing_ResponseParams_Data*>(data);

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
          object->results, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams results_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->results, validation_context,
                                         &results_validate_params)) {
    return false;
  }

  return true;
}

HeapProfiler_DumpProcessesForTracing_ResponseParams_Data::HeapProfiler_DumpProcessesForTracing_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool HeapProfilerHelper_GetVmRegionsForHeapProfiler_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const HeapProfilerHelper_GetVmRegionsForHeapProfiler_Params_Data* object = static_cast<const HeapProfilerHelper_GetVmRegionsForHeapProfiler_Params_Data*>(data);

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
          object->pids, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams pids_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->pids, validation_context,
                                         &pids_validate_params)) {
    return false;
  }

  return true;
}

HeapProfilerHelper_GetVmRegionsForHeapProfiler_Params_Data::HeapProfilerHelper_GetVmRegionsForHeapProfiler_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool HeapProfilerHelper_GetVmRegionsForHeapProfiler_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const HeapProfilerHelper_GetVmRegionsForHeapProfiler_ResponseParams_Data* object = static_cast<const HeapProfilerHelper_GetVmRegionsForHeapProfiler_ResponseParams_Data*>(data);

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
          object->vm_regions, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams vm_regions_validate_params(
      new mojo::internal::ContainerValidateParams(0, false, nullptr), new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)));
  if (!mojo::internal::ValidateContainer(object->vm_regions, validation_context,
                                         &vm_regions_validate_params)) {
    return false;
  }

  return true;
}

HeapProfilerHelper_GetVmRegionsForHeapProfiler_ResponseParams_Data::HeapProfilerHelper_GetVmRegionsForHeapProfiler_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool Coordinator_RegisterClientProcess_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const Coordinator_RegisterClientProcess_Params_Data* object = static_cast<const Coordinator_RegisterClientProcess_Params_Data*>(data);

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
          object->client_process, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->client_process,
                                                 validation_context)) {
    return false;
  }


  if (!::memory_instrumentation::mojom::internal::ProcessType_Data
        ::Validate(object->process_type, validation_context))
    return false;

  return true;
}

Coordinator_RegisterClientProcess_Params_Data::Coordinator_RegisterClientProcess_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool Coordinator_RequestGlobalMemoryDump_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const Coordinator_RequestGlobalMemoryDump_Params_Data* object = static_cast<const Coordinator_RequestGlobalMemoryDump_Params_Data*>(data);

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


  if (!::memory_instrumentation::mojom::internal::DumpType_Data
        ::Validate(object->dump_type, validation_context))
    return false;


  if (!::memory_instrumentation::mojom::internal::LevelOfDetail_Data
        ::Validate(object->level_of_detail, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->allocator_dump_names, 3, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams allocator_dump_names_validate_params(
      0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
  if (!mojo::internal::ValidateContainer(object->allocator_dump_names, validation_context,
                                         &allocator_dump_names_validate_params)) {
    return false;
  }

  return true;
}

Coordinator_RequestGlobalMemoryDump_Params_Data::Coordinator_RequestGlobalMemoryDump_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool Coordinator_RequestGlobalMemoryDump_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const Coordinator_RequestGlobalMemoryDump_ResponseParams_Data* object = static_cast<const Coordinator_RequestGlobalMemoryDump_ResponseParams_Data*>(data);

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

  if (!mojo::internal::ValidateStruct(object->global_memory_dump, validation_context))
    return false;

  return true;
}

Coordinator_RequestGlobalMemoryDump_ResponseParams_Data::Coordinator_RequestGlobalMemoryDump_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool Coordinator_RequestGlobalMemoryDumpForPid_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const Coordinator_RequestGlobalMemoryDumpForPid_Params_Data* object = static_cast<const Coordinator_RequestGlobalMemoryDumpForPid_Params_Data*>(data);

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
          object->pid, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->pid, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->allocator_dump_names, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams allocator_dump_names_validate_params(
      0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
  if (!mojo::internal::ValidateContainer(object->allocator_dump_names, validation_context,
                                         &allocator_dump_names_validate_params)) {
    return false;
  }

  return true;
}

Coordinator_RequestGlobalMemoryDumpForPid_Params_Data::Coordinator_RequestGlobalMemoryDumpForPid_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool Coordinator_RequestGlobalMemoryDumpForPid_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const Coordinator_RequestGlobalMemoryDumpForPid_ResponseParams_Data* object = static_cast<const Coordinator_RequestGlobalMemoryDumpForPid_ResponseParams_Data*>(data);

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

  if (!mojo::internal::ValidateStruct(object->global_memory_dump, validation_context))
    return false;

  return true;
}

Coordinator_RequestGlobalMemoryDumpForPid_ResponseParams_Data::Coordinator_RequestGlobalMemoryDumpForPid_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool Coordinator_RequestPrivateMemoryFootprint_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const Coordinator_RequestPrivateMemoryFootprint_Params_Data* object = static_cast<const Coordinator_RequestPrivateMemoryFootprint_Params_Data*>(data);

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
          object->pid, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->pid, validation_context))
    return false;

  return true;
}

Coordinator_RequestPrivateMemoryFootprint_Params_Data::Coordinator_RequestPrivateMemoryFootprint_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool Coordinator_RequestPrivateMemoryFootprint_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const Coordinator_RequestPrivateMemoryFootprint_ResponseParams_Data* object = static_cast<const Coordinator_RequestPrivateMemoryFootprint_ResponseParams_Data*>(data);

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

  if (!mojo::internal::ValidateStruct(object->global_memory_dump, validation_context))
    return false;

  return true;
}

Coordinator_RequestPrivateMemoryFootprint_ResponseParams_Data::Coordinator_RequestPrivateMemoryFootprint_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_Params_Data* object = static_cast<const Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_Params_Data*>(data);

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


  if (!::memory_instrumentation::mojom::internal::DumpType_Data
        ::Validate(object->dump_type, validation_context))
    return false;


  if (!::memory_instrumentation::mojom::internal::LevelOfDetail_Data
        ::Validate(object->level_of_detail, validation_context))
    return false;

  return true;
}

Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_Params_Data::Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_ResponseParams_Data* object = static_cast<const Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_ResponseParams_Data*>(data);

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

Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_ResponseParams_Data::Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool Coordinator_RegisterHeapProfiler_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const Coordinator_RegisterHeapProfiler_Params_Data* object = static_cast<const Coordinator_RegisterHeapProfiler_Params_Data*>(data);

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
          object->heap_profiler, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->heap_profiler,
                                                 validation_context)) {
    return false;
  }

  return true;
}

Coordinator_RegisterHeapProfiler_Params_Data::Coordinator_RegisterHeapProfiler_Params_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace memory_instrumentation

#if defined(_MSC_VER)
#pragma warning(pop)
#endif