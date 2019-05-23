// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "ui/gfx/mojo/buffer_types.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "base/stl_util.h"  // for base::size()
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"

#include "ui/gfx/mojo/buffer_types.mojom-params-data.h"
namespace gfx {
namespace mojom {

std::ostream& operator<<(std::ostream& os, BufferFormat value) {
  switch(value) {
    case BufferFormat::R_8:
      return os << "BufferFormat::R_8";
    case BufferFormat::R_16:
      return os << "BufferFormat::R_16";
    case BufferFormat::RG_88:
      return os << "BufferFormat::RG_88";
    case BufferFormat::BGR_565:
      return os << "BufferFormat::BGR_565";
    case BufferFormat::RGBA_4444:
      return os << "BufferFormat::RGBA_4444";
    case BufferFormat::RGBX_8888:
      return os << "BufferFormat::RGBX_8888";
    case BufferFormat::RGBA_8888:
      return os << "BufferFormat::RGBA_8888";
    case BufferFormat::BGRX_8888:
      return os << "BufferFormat::BGRX_8888";
    case BufferFormat::BGRX_1010102:
      return os << "BufferFormat::BGRX_1010102";
    case BufferFormat::RGBX_1010102:
      return os << "BufferFormat::RGBX_1010102";
    case BufferFormat::BGRA_8888:
      return os << "BufferFormat::BGRA_8888";
    case BufferFormat::RGBA_F16:
      return os << "BufferFormat::RGBA_F16";
    case BufferFormat::YVU_420:
      return os << "BufferFormat::YVU_420";
    case BufferFormat::YUV_420_BIPLANAR:
      return os << "BufferFormat::YUV_420_BIPLANAR";
    case BufferFormat::UYVY_422:
      return os << "BufferFormat::UYVY_422";
    default:
      return os << "Unknown BufferFormat value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, BufferUsage value) {
  switch(value) {
    case BufferUsage::GPU_READ:
      return os << "BufferUsage::GPU_READ";
    case BufferUsage::SCANOUT:
      return os << "BufferUsage::SCANOUT";
    case BufferUsage::SCANOUT_CAMERA_READ_WRITE:
      return os << "BufferUsage::SCANOUT_CAMERA_READ_WRITE";
    case BufferUsage::CAMERA_AND_CPU_READ_WRITE:
      return os << "BufferUsage::CAMERA_AND_CPU_READ_WRITE";
    case BufferUsage::SCANOUT_CPU_READ_WRITE:
      return os << "BufferUsage::SCANOUT_CPU_READ_WRITE";
    case BufferUsage::SCANOUT_VDA_WRITE:
      return os << "BufferUsage::SCANOUT_VDA_WRITE";
    case BufferUsage::GPU_READ_CPU_READ_WRITE:
      return os << "BufferUsage::GPU_READ_CPU_READ_WRITE";
    default:
      return os << "Unknown BufferUsage value: " << static_cast<int32_t>(value);
  }
}

namespace internal {
// static
bool GpuMemoryBufferPlatformHandle_Data::Validate(
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

  const GpuMemoryBufferPlatformHandle_Data* object = static_cast<const GpuMemoryBufferPlatformHandle_Data*>(data);
  ALLOW_UNUSED_LOCAL(object);

  if (inlined && object->is_null())
    return true;

  switch (object->tag) {

    case GpuMemoryBufferPlatformHandle_Tag::SHARED_MEMORY_HANDLE: {

      if (!mojo::internal::ValidatePointerNonNullable(
              object->data.f_shared_memory_handle, 1, validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateStruct(object->data.f_shared_memory_handle, validation_context))
        return false;
      return true;
    }
    case GpuMemoryBufferPlatformHandle_Tag::NATIVE_PIXMAP_HANDLE: {

      if (!mojo::internal::ValidatePointerNonNullable(
              object->data.f_native_pixmap_handle, 2, validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateStruct(object->data.f_native_pixmap_handle, validation_context))
        return false;
      return true;
    }
    default: {
      ReportValidationError(
          validation_context,
          mojo::internal::VALIDATION_ERROR_UNKNOWN_UNION_TAG,
          "unknown tag in GpuMemoryBufferPlatformHandle");
      return false;
    }
  }
}


// static
bool BufferUsageAndFormat_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const BufferUsageAndFormat_Data* object = static_cast<const BufferUsageAndFormat_Data*>(data);

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


  if (!::gfx::mojom::internal::BufferUsage_Data
        ::Validate(object->usage, validation_context))
    return false;


  if (!::gfx::mojom::internal::BufferFormat_Data
        ::Validate(object->format, validation_context))
    return false;

  return true;
}

BufferUsageAndFormat_Data::BufferUsageAndFormat_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool GpuMemoryBufferId_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const GpuMemoryBufferId_Data* object = static_cast<const GpuMemoryBufferId_Data*>(data);

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

GpuMemoryBufferId_Data::GpuMemoryBufferId_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool NativePixmapPlane_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const NativePixmapPlane_Data* object = static_cast<const NativePixmapPlane_Data*>(data);

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

  if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
          object->buffer_handle, 4, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->buffer_handle,
                                                 validation_context)) {
    return false;
  }

  return true;
}

NativePixmapPlane_Data::NativePixmapPlane_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool NativePixmapHandle_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const NativePixmapHandle_Data* object = static_cast<const NativePixmapHandle_Data*>(data);

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
          object->planes, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams planes_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->planes, validation_context,
                                         &planes_validate_params)) {
    return false;
  }

  return true;
}

NativePixmapHandle_Data::NativePixmapHandle_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool GpuMemoryBufferHandle_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const GpuMemoryBufferHandle_Data* object = static_cast<const GpuMemoryBufferHandle_Data*>(data);

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
          object->id, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->id, validation_context))
    return false;

  if (!mojo::internal::ValidateInlinedUnion(object->platform_handle, validation_context))
    return false;

  return true;
}

GpuMemoryBufferHandle_Data::GpuMemoryBufferHandle_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace gfx

#if defined(_MSC_VER)
#pragma warning(pop)
#endif