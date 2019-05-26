// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "third_party/blink/public/mojom/frame_sinks/embedded_frame_sink.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "base/stl_util.h"  // for base::size()
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"

#include "third_party/blink/public/mojom/frame_sinks/embedded_frame_sink.mojom-params-data.h"
namespace blink {
namespace mojom {

namespace internal {


// static
bool SurfaceEmbedder_SetLocalSurfaceId_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const SurfaceEmbedder_SetLocalSurfaceId_Params_Data* object = static_cast<const SurfaceEmbedder_SetLocalSurfaceId_Params_Data*>(data);

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
          object->local_surface_id, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->local_surface_id, validation_context))
    return false;

  return true;
}

SurfaceEmbedder_SetLocalSurfaceId_Params_Data::SurfaceEmbedder_SetLocalSurfaceId_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool EmbeddedFrameSinkClient_OnFirstSurfaceActivation_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const EmbeddedFrameSinkClient_OnFirstSurfaceActivation_Params_Data* object = static_cast<const EmbeddedFrameSinkClient_OnFirstSurfaceActivation_Params_Data*>(data);

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
          object->surface_info, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->surface_info, validation_context))
    return false;

  return true;
}

EmbeddedFrameSinkClient_OnFirstSurfaceActivation_Params_Data::EmbeddedFrameSinkClient_OnFirstSurfaceActivation_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool EmbeddedFrameSinkClient_BindSurfaceEmbedder_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const EmbeddedFrameSinkClient_BindSurfaceEmbedder_Params_Data* object = static_cast<const EmbeddedFrameSinkClient_BindSurfaceEmbedder_Params_Data*>(data);

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
          object->embedder, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->embedder,
                                                 validation_context)) {
    return false;
  }

  return true;
}

EmbeddedFrameSinkClient_BindSurfaceEmbedder_Params_Data::EmbeddedFrameSinkClient_BindSurfaceEmbedder_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool EmbeddedFrameSinkProvider_RegisterEmbeddedFrameSink_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const EmbeddedFrameSinkProvider_RegisterEmbeddedFrameSink_Params_Data* object = static_cast<const EmbeddedFrameSinkProvider_RegisterEmbeddedFrameSink_Params_Data*>(data);

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
          object->parent_frame_sink_id, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->parent_frame_sink_id, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->frame_sink_id, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->frame_sink_id, validation_context))
    return false;

  if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
          object->client, 3, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->client,
                                                 validation_context)) {
    return false;
  }

  return true;
}

EmbeddedFrameSinkProvider_RegisterEmbeddedFrameSink_Params_Data::EmbeddedFrameSinkProvider_RegisterEmbeddedFrameSink_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool EmbeddedFrameSinkProvider_CreateCompositorFrameSink_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const EmbeddedFrameSinkProvider_CreateCompositorFrameSink_Params_Data* object = static_cast<const EmbeddedFrameSinkProvider_CreateCompositorFrameSink_Params_Data*>(data);

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
          object->frame_sink_id, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->frame_sink_id, validation_context))
    return false;

  if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
          object->client, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->client,
                                                 validation_context)) {
    return false;
  }

  if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
          object->sink, 3, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->sink,
                                                 validation_context)) {
    return false;
  }

  return true;
}

EmbeddedFrameSinkProvider_CreateCompositorFrameSink_Params_Data::EmbeddedFrameSinkProvider_CreateCompositorFrameSink_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool EmbeddedFrameSinkProvider_CreateSimpleCompositorFrameSink_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const EmbeddedFrameSinkProvider_CreateSimpleCompositorFrameSink_Params_Data* object = static_cast<const EmbeddedFrameSinkProvider_CreateSimpleCompositorFrameSink_Params_Data*>(data);

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
          object->parent_frame_sink_id, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->parent_frame_sink_id, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->frame_sink_id, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->frame_sink_id, validation_context))
    return false;

  if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
          object->surface_client, 3, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->surface_client,
                                                 validation_context)) {
    return false;
  }

  if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
          object->client, 4, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->client,
                                                 validation_context)) {
    return false;
  }

  if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
          object->sink, 5, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->sink,
                                                 validation_context)) {
    return false;
  }

  return true;
}

EmbeddedFrameSinkProvider_CreateSimpleCompositorFrameSink_Params_Data::EmbeddedFrameSinkProvider_CreateSimpleCompositorFrameSink_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool EmbeddedFrameSinkProvider_ConnectToEmbedder_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const EmbeddedFrameSinkProvider_ConnectToEmbedder_Params_Data* object = static_cast<const EmbeddedFrameSinkProvider_ConnectToEmbedder_Params_Data*>(data);

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
          object->frame_sink_id, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->frame_sink_id, validation_context))
    return false;

  if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
          object->embedder, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->embedder,
                                                 validation_context)) {
    return false;
  }

  return true;
}

EmbeddedFrameSinkProvider_ConnectToEmbedder_Params_Data::EmbeddedFrameSinkProvider_ConnectToEmbedder_Params_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#if defined(_MSC_VER)
#pragma warning(pop)
#endif