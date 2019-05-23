// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "services/viz/public/interfaces/compositing/compositor_frame_sink.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "base/stl_util.h"  // for base::size()
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"

#include "services/viz/public/interfaces/compositing/compositor_frame_sink.mojom-params-data.h"
namespace viz {
namespace mojom {

namespace internal {


// static
bool CompositorFrameSink_SetNeedsBeginFrame_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const CompositorFrameSink_SetNeedsBeginFrame_Params_Data* object = static_cast<const CompositorFrameSink_SetNeedsBeginFrame_Params_Data*>(data);

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

CompositorFrameSink_SetNeedsBeginFrame_Params_Data::CompositorFrameSink_SetNeedsBeginFrame_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool CompositorFrameSink_SetWantsAnimateOnlyBeginFrames_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const CompositorFrameSink_SetWantsAnimateOnlyBeginFrames_Params_Data* object = static_cast<const CompositorFrameSink_SetWantsAnimateOnlyBeginFrames_Params_Data*>(data);

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

CompositorFrameSink_SetWantsAnimateOnlyBeginFrames_Params_Data::CompositorFrameSink_SetWantsAnimateOnlyBeginFrames_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool CompositorFrameSink_SubmitCompositorFrame_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const CompositorFrameSink_SubmitCompositorFrame_Params_Data* object = static_cast<const CompositorFrameSink_SubmitCompositorFrame_Params_Data*>(data);

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
          object->local_surface_id, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->local_surface_id, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->frame, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->frame, validation_context))
    return false;

  if (!mojo::internal::ValidateStruct(object->hit_test_region_list, validation_context))
    return false;

  return true;
}

CompositorFrameSink_SubmitCompositorFrame_Params_Data::CompositorFrameSink_SubmitCompositorFrame_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool CompositorFrameSink_SubmitCompositorFrameSync_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const CompositorFrameSink_SubmitCompositorFrameSync_Params_Data* object = static_cast<const CompositorFrameSink_SubmitCompositorFrameSync_Params_Data*>(data);

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
          object->local_surface_id, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->local_surface_id, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->frame, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->frame, validation_context))
    return false;

  if (!mojo::internal::ValidateStruct(object->hit_test_region_list, validation_context))
    return false;

  return true;
}

CompositorFrameSink_SubmitCompositorFrameSync_Params_Data::CompositorFrameSink_SubmitCompositorFrameSync_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool CompositorFrameSink_SubmitCompositorFrameSync_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const CompositorFrameSink_SubmitCompositorFrameSync_ResponseParams_Data* object = static_cast<const CompositorFrameSink_SubmitCompositorFrameSync_ResponseParams_Data*>(data);

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
          object->resources, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams resources_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->resources, validation_context,
                                         &resources_validate_params)) {
    return false;
  }

  return true;
}

CompositorFrameSink_SubmitCompositorFrameSync_ResponseParams_Data::CompositorFrameSink_SubmitCompositorFrameSync_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool CompositorFrameSink_DidNotProduceFrame_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const CompositorFrameSink_DidNotProduceFrame_Params_Data* object = static_cast<const CompositorFrameSink_DidNotProduceFrame_Params_Data*>(data);

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
          object->ack, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->ack, validation_context))
    return false;

  return true;
}

CompositorFrameSink_DidNotProduceFrame_Params_Data::CompositorFrameSink_DidNotProduceFrame_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool CompositorFrameSink_DidAllocateSharedBitmap_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const CompositorFrameSink_DidAllocateSharedBitmap_Params_Data* object = static_cast<const CompositorFrameSink_DidAllocateSharedBitmap_Params_Data*>(data);

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
          object->buffer, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->buffer,
                                                 validation_context)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->id, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->id, validation_context))
    return false;

  return true;
}

CompositorFrameSink_DidAllocateSharedBitmap_Params_Data::CompositorFrameSink_DidAllocateSharedBitmap_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool CompositorFrameSink_DidDeleteSharedBitmap_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const CompositorFrameSink_DidDeleteSharedBitmap_Params_Data* object = static_cast<const CompositorFrameSink_DidDeleteSharedBitmap_Params_Data*>(data);

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
          object->id, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->id, validation_context))
    return false;

  return true;
}

CompositorFrameSink_DidDeleteSharedBitmap_Params_Data::CompositorFrameSink_DidDeleteSharedBitmap_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool CompositorFrameSinkClient_DidReceiveCompositorFrameAck_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const CompositorFrameSinkClient_DidReceiveCompositorFrameAck_Params_Data* object = static_cast<const CompositorFrameSinkClient_DidReceiveCompositorFrameAck_Params_Data*>(data);

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
          object->resources, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams resources_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->resources, validation_context,
                                         &resources_validate_params)) {
    return false;
  }

  return true;
}

CompositorFrameSinkClient_DidReceiveCompositorFrameAck_Params_Data::CompositorFrameSinkClient_DidReceiveCompositorFrameAck_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool CompositorFrameSinkClient_OnBeginFrame_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const CompositorFrameSinkClient_OnBeginFrame_Params_Data* object = static_cast<const CompositorFrameSinkClient_OnBeginFrame_Params_Data*>(data);

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
          object->args, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->args, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->presentations, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams presentations_validate_params(
      new mojo::internal::ContainerValidateParams(0, false, nullptr), new mojo::internal::ContainerValidateParams(0, false, nullptr));
  if (!mojo::internal::ValidateContainer(object->presentations, validation_context,
                                         &presentations_validate_params)) {
    return false;
  }

  return true;
}

CompositorFrameSinkClient_OnBeginFrame_Params_Data::CompositorFrameSinkClient_OnBeginFrame_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool CompositorFrameSinkClient_OnBeginFramePausedChanged_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const CompositorFrameSinkClient_OnBeginFramePausedChanged_Params_Data* object = static_cast<const CompositorFrameSinkClient_OnBeginFramePausedChanged_Params_Data*>(data);

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

CompositorFrameSinkClient_OnBeginFramePausedChanged_Params_Data::CompositorFrameSinkClient_OnBeginFramePausedChanged_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool CompositorFrameSinkClient_ReclaimResources_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const CompositorFrameSinkClient_ReclaimResources_Params_Data* object = static_cast<const CompositorFrameSinkClient_ReclaimResources_Params_Data*>(data);

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
          object->resources, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams resources_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->resources, validation_context,
                                         &resources_validate_params)) {
    return false;
  }

  return true;
}

CompositorFrameSinkClient_ReclaimResources_Params_Data::CompositorFrameSinkClient_ReclaimResources_Params_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace viz

#if defined(_MSC_VER)
#pragma warning(pop)
#endif