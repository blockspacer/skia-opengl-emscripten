// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "services/ws/public/mojom/gpu.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "base/stl_util.h"  // for base::size()
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"

#include "services/ws/public/mojom/gpu.mojom-params-data.h"
namespace ws {
namespace mojom {

namespace internal {


// static
bool GpuMemoryBufferFactory_CreateGpuMemoryBuffer_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const GpuMemoryBufferFactory_CreateGpuMemoryBuffer_Params_Data* object = static_cast<const GpuMemoryBufferFactory_CreateGpuMemoryBuffer_Params_Data*>(data);

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
          object->id, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->id, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->size, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->size, validation_context))
    return false;


  if (!::gfx::mojom::internal::BufferFormat_Data
        ::Validate(object->format, validation_context))
    return false;


  if (!::gfx::mojom::internal::BufferUsage_Data
        ::Validate(object->usage, validation_context))
    return false;

  return true;
}

GpuMemoryBufferFactory_CreateGpuMemoryBuffer_Params_Data::GpuMemoryBufferFactory_CreateGpuMemoryBuffer_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool GpuMemoryBufferFactory_CreateGpuMemoryBuffer_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const GpuMemoryBufferFactory_CreateGpuMemoryBuffer_ResponseParams_Data* object = static_cast<const GpuMemoryBufferFactory_CreateGpuMemoryBuffer_ResponseParams_Data*>(data);

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
          object->buffer_handle, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->buffer_handle, validation_context))
    return false;

  return true;
}

GpuMemoryBufferFactory_CreateGpuMemoryBuffer_ResponseParams_Data::GpuMemoryBufferFactory_CreateGpuMemoryBuffer_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool GpuMemoryBufferFactory_DestroyGpuMemoryBuffer_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const GpuMemoryBufferFactory_DestroyGpuMemoryBuffer_Params_Data* object = static_cast<const GpuMemoryBufferFactory_DestroyGpuMemoryBuffer_Params_Data*>(data);

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
          object->id, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->id, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->sync_token, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->sync_token, validation_context))
    return false;

  return true;
}

GpuMemoryBufferFactory_DestroyGpuMemoryBuffer_Params_Data::GpuMemoryBufferFactory_DestroyGpuMemoryBuffer_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool Gpu_CreateGpuMemoryBufferFactory_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const Gpu_CreateGpuMemoryBufferFactory_Params_Data* object = static_cast<const Gpu_CreateGpuMemoryBufferFactory_Params_Data*>(data);

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
          object->request, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->request,
                                                 validation_context)) {
    return false;
  }

  return true;
}

Gpu_CreateGpuMemoryBufferFactory_Params_Data::Gpu_CreateGpuMemoryBufferFactory_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool Gpu_EstablishGpuChannel_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const Gpu_EstablishGpuChannel_Params_Data* object = static_cast<const Gpu_EstablishGpuChannel_Params_Data*>(data);

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

Gpu_EstablishGpuChannel_Params_Data::Gpu_EstablishGpuChannel_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool Gpu_EstablishGpuChannel_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const Gpu_EstablishGpuChannel_ResponseParams_Data* object = static_cast<const Gpu_EstablishGpuChannel_ResponseParams_Data*>(data);

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

  if (!mojo::internal::ValidateHandleOrInterface(object->channel_handle,
                                                 validation_context)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->gpu_info, 3, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->gpu_info, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->gpu_feature_info, 4, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->gpu_feature_info, validation_context))
    return false;

  return true;
}

Gpu_EstablishGpuChannel_ResponseParams_Data::Gpu_EstablishGpuChannel_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool Gpu_CreateVideoEncodeAcceleratorProvider_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const Gpu_CreateVideoEncodeAcceleratorProvider_Params_Data* object = static_cast<const Gpu_CreateVideoEncodeAcceleratorProvider_Params_Data*>(data);

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
          object->vea_provider, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->vea_provider,
                                                 validation_context)) {
    return false;
  }

  return true;
}

Gpu_CreateVideoEncodeAcceleratorProvider_Params_Data::Gpu_CreateVideoEncodeAcceleratorProvider_Params_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace ws

#if defined(_MSC_VER)
#pragma warning(pop)
#endif