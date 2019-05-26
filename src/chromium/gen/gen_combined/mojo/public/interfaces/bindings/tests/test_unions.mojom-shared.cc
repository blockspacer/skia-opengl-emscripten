// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "mojo/public/interfaces/bindings/tests/test_unions.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "base/stl_util.h"  // for base::size()
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"

#include "mojo/public/interfaces/bindings/tests/test_unions.mojom-params-data.h"
namespace mojo {
namespace test {

std::ostream& operator<<(std::ostream& os, AnEnum value) {
  switch(value) {
    case AnEnum::FIRST:
      return os << "AnEnum::FIRST";
    case AnEnum::SECOND:
      return os << "AnEnum::SECOND";
    default:
      return os << "Unknown AnEnum value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, AnExtensibleEnum value) {
  switch(value) {
    case AnExtensibleEnum::FIRST:
      return os << "AnExtensibleEnum::FIRST";
    case AnExtensibleEnum::SECOND:
      return os << "AnExtensibleEnum::SECOND";
    case AnExtensibleEnum::THIRD:
      return os << "AnExtensibleEnum::THIRD";
    default:
      return os << "Unknown AnExtensibleEnum value: " << static_cast<int32_t>(value);
  }
}

namespace internal {
// static
bool PodUnion_Data::Validate(
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

  const PodUnion_Data* object = static_cast<const PodUnion_Data*>(data);
  ALLOW_UNUSED_LOCAL(object);

  if (inlined && object->is_null())
    return true;

  switch (object->tag) {

    case PodUnion_Tag::F_INT8: {

      return true;
    }
    case PodUnion_Tag::F_INT8_OTHER: {

      return true;
    }
    case PodUnion_Tag::F_UINT8: {

      return true;
    }
    case PodUnion_Tag::F_INT16: {

      return true;
    }
    case PodUnion_Tag::F_UINT16: {

      return true;
    }
    case PodUnion_Tag::F_INT32: {

      return true;
    }
    case PodUnion_Tag::F_UINT32: {

      return true;
    }
    case PodUnion_Tag::F_INT64: {

      return true;
    }
    case PodUnion_Tag::F_UINT64: {

      return true;
    }
    case PodUnion_Tag::F_FLOAT: {

      return true;
    }
    case PodUnion_Tag::F_DOUBLE: {

      return true;
    }
    case PodUnion_Tag::F_BOOL: {

      return true;
    }
    case PodUnion_Tag::F_ENUM: {


      if (!::mojo::test::internal::AnEnum_Data
            ::Validate(object->data.f_f_enum, validation_context))
        return false;
      return true;
    }
    case PodUnion_Tag::F_EXTENSIBLE_ENUM: {


      if (!::mojo::test::internal::AnExtensibleEnum_Data
            ::Validate(object->data.f_f_extensible_enum, validation_context))
        return false;
      return true;
    }
    default: {
      ReportValidationError(
          validation_context,
          mojo::internal::VALIDATION_ERROR_UNKNOWN_UNION_TAG,
          "unknown tag in PodUnion");
      return false;
    }
  }
}
// static
bool ObjectUnion_Data::Validate(
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

  const ObjectUnion_Data* object = static_cast<const ObjectUnion_Data*>(data);
  ALLOW_UNUSED_LOCAL(object);

  if (inlined && object->is_null())
    return true;

  switch (object->tag) {

    case ObjectUnion_Tag::F_INT8: {

      return true;
    }
    case ObjectUnion_Tag::F_STRING: {

      if (!mojo::internal::ValidatePointerNonNullable(
              object->data.f_f_string, 2, validation_context)) {
        return false;
      }
      const mojo::internal::ContainerValidateParams f_string_validate_params(
          0, false, nullptr);
      if (!mojo::internal::ValidateContainer(object->data.f_f_string, validation_context,
                                             &f_string_validate_params)) {
        return false;
      }
      return true;
    }
    case ObjectUnion_Tag::F_DUMMY: {

      if (!mojo::internal::ValidatePointerNonNullable(
              object->data.f_f_dummy, 3, validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateStruct(object->data.f_f_dummy, validation_context))
        return false;
      return true;
    }
    case ObjectUnion_Tag::F_NULLABLE: {

      if (!mojo::internal::ValidateStruct(object->data.f_f_nullable, validation_context))
        return false;
      return true;
    }
    case ObjectUnion_Tag::F_ARRAY_INT8: {

      if (!mojo::internal::ValidatePointerNonNullable(
              object->data.f_f_array_int8, 5, validation_context)) {
        return false;
      }
      const mojo::internal::ContainerValidateParams f_array_int8_validate_params(
          0, false, nullptr);
      if (!mojo::internal::ValidateContainer(object->data.f_f_array_int8, validation_context,
                                             &f_array_int8_validate_params)) {
        return false;
      }
      return true;
    }
    case ObjectUnion_Tag::F_MAP_INT8: {

      if (!mojo::internal::ValidatePointerNonNullable(
              object->data.f_f_map_int8, 6, validation_context)) {
        return false;
      }
      const mojo::internal::ContainerValidateParams f_map_int8_validate_params(
          new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)), new mojo::internal::ContainerValidateParams(0, false, nullptr));
      if (!mojo::internal::ValidateContainer(object->data.f_f_map_int8, validation_context,
                                             &f_map_int8_validate_params)) {
        return false;
      }
      return true;
    }
    case ObjectUnion_Tag::F_POD_UNION: {

      if (!mojo::internal::ValidatePointerNonNullable(
              object->data.f_f_pod_union, 7, validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateNonInlinedUnion(object->data.f_f_pod_union,
                                                   validation_context))
        return false;
      return true;
    }
    case ObjectUnion_Tag::F_SMALL_STRUCTS: {

      if (!mojo::internal::ValidatePointerNonNullable(
              object->data.f_f_small_structs, 8, validation_context)) {
        return false;
      }
      const mojo::internal::ContainerValidateParams f_small_structs_validate_params(
          0, false, nullptr);
      if (!mojo::internal::ValidateContainer(object->data.f_f_small_structs, validation_context,
                                             &f_small_structs_validate_params)) {
        return false;
      }
      return true;
    }
    default: {
      ReportValidationError(
          validation_context,
          mojo::internal::VALIDATION_ERROR_UNKNOWN_UNION_TAG,
          "unknown tag in ObjectUnion");
      return false;
    }
  }
}
// static
bool HandleUnion_Data::Validate(
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

  const HandleUnion_Data* object = static_cast<const HandleUnion_Data*>(data);
  ALLOW_UNUSED_LOCAL(object);

  if (inlined && object->is_null())
    return true;

  switch (object->tag) {

    case HandleUnion_Tag::F_HANDLE: {

      if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
              object->data.f_f_handle, 1, validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateHandleOrInterface(object->data.f_f_handle,
                                                     validation_context)) {
        return false;
      }
      return true;
    }
    case HandleUnion_Tag::F_MESSAGE_PIPE: {

      if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
              object->data.f_f_message_pipe, 2, validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateHandleOrInterface(object->data.f_f_message_pipe,
                                                     validation_context)) {
        return false;
      }
      return true;
    }
    case HandleUnion_Tag::F_DATA_PIPE_CONSUMER: {

      if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
              object->data.f_f_data_pipe_consumer, 3, validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateHandleOrInterface(object->data.f_f_data_pipe_consumer,
                                                     validation_context)) {
        return false;
      }
      return true;
    }
    case HandleUnion_Tag::F_DATA_PIPE_PRODUCER: {

      if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
              object->data.f_f_data_pipe_producer, 4, validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateHandleOrInterface(object->data.f_f_data_pipe_producer,
                                                     validation_context)) {
        return false;
      }
      return true;
    }
    case HandleUnion_Tag::F_SHARED_BUFFER: {

      if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
              object->data.f_f_shared_buffer, 5, validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateHandleOrInterface(object->data.f_f_shared_buffer,
                                                     validation_context)) {
        return false;
      }
      return true;
    }
    case HandleUnion_Tag::F_SMALL_CACHE: {

      if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
              object->data.f_f_small_cache, 6, validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateHandleOrInterface(object->data.f_f_small_cache,
                                                     validation_context)) {
        return false;
      }
      return true;
    }
    case HandleUnion_Tag::F_SMALL_CACHE_RECEIVER: {

      if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
              object->data.f_f_small_cache_receiver, 7, validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateHandleOrInterface(object->data.f_f_small_cache_receiver,
                                                     validation_context)) {
        return false;
      }
      return true;
    }
    default: {
      ReportValidationError(
          validation_context,
          mojo::internal::VALIDATION_ERROR_UNKNOWN_UNION_TAG,
          "unknown tag in HandleUnion");
      return false;
    }
  }
}
// static
bool OldUnion_Data::Validate(
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

  const OldUnion_Data* object = static_cast<const OldUnion_Data*>(data);
  ALLOW_UNUSED_LOCAL(object);

  if (inlined && object->is_null())
    return true;

  switch (object->tag) {

    case OldUnion_Tag::F_INT8: {

      return true;
    }
    default: {
      ReportValidationError(
          validation_context,
          mojo::internal::VALIDATION_ERROR_UNKNOWN_UNION_TAG,
          "unknown tag in OldUnion");
      return false;
    }
  }
}
// static
bool NewUnion_Data::Validate(
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

  const NewUnion_Data* object = static_cast<const NewUnion_Data*>(data);
  ALLOW_UNUSED_LOCAL(object);

  if (inlined && object->is_null())
    return true;

  switch (object->tag) {

    case NewUnion_Tag::F_INT8: {

      return true;
    }
    case NewUnion_Tag::F_INT16: {

      return true;
    }
    default: {
      ReportValidationError(
          validation_context,
          mojo::internal::VALIDATION_ERROR_UNKNOWN_UNION_TAG,
          "unknown tag in NewUnion");
      return false;
    }
  }
}
// static
bool ImportedUnionUnion_Data::Validate(
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

  const ImportedUnionUnion_Data* object = static_cast<const ImportedUnionUnion_Data*>(data);
  ALLOW_UNUSED_LOCAL(object);

  if (inlined && object->is_null())
    return true;

  switch (object->tag) {

    case ImportedUnionUnion_Tag::POINT_OR_SHAPE: {

      if (!mojo::internal::ValidatePointerNonNullable(
              object->data.f_point_or_shape, 1, validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateNonInlinedUnion(object->data.f_point_or_shape,
                                                   validation_context))
        return false;
      return true;
    }
    default: {
      ReportValidationError(
          validation_context,
          mojo::internal::VALIDATION_ERROR_UNKNOWN_UNION_TAG,
          "unknown tag in ImportedUnionUnion");
      return false;
    }
  }
}


// static
bool WrapperStruct_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const WrapperStruct_Data* object = static_cast<const WrapperStruct_Data*>(data);

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

  if (!mojo::internal::ValidateInlinedUnion(object->object_union, validation_context))
    return false;

  if (!mojo::internal::ValidateInlinedUnion(object->pod_union, validation_context))
    return false;

  if (!mojo::internal::ValidateInlinedUnion(object->handle_union, validation_context))
    return false;

  return true;
}

WrapperStruct_Data::WrapperStruct_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool DummyStruct_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const DummyStruct_Data* object = static_cast<const DummyStruct_Data*>(data);

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

DummyStruct_Data::DummyStruct_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool SmallStruct_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const SmallStruct_Data* object = static_cast<const SmallStruct_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 72 }};

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

  if (!mojo::internal::ValidateStruct(object->dummy_struct, validation_context))
    return false;

  if (!mojo::internal::ValidateInlinedUnion(object->pod_union, validation_context))
    return false;

  const mojo::internal::ContainerValidateParams pod_union_array_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->pod_union_array, validation_context,
                                         &pod_union_array_validate_params)) {
    return false;
  }

  const mojo::internal::ContainerValidateParams nullable_pod_union_array_validate_params(
      0, true, nullptr);
  if (!mojo::internal::ValidateContainer(object->nullable_pod_union_array, validation_context,
                                         &nullable_pod_union_array_validate_params)) {
    return false;
  }

  const mojo::internal::ContainerValidateParams s_array_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->s_array, validation_context,
                                         &s_array_validate_params)) {
    return false;
  }

  const mojo::internal::ContainerValidateParams pod_union_map_validate_params(
      new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)), new mojo::internal::ContainerValidateParams(0, false, nullptr));
  if (!mojo::internal::ValidateContainer(object->pod_union_map, validation_context,
                                         &pod_union_map_validate_params)) {
    return false;
  }

  const mojo::internal::ContainerValidateParams nullable_pod_union_map_validate_params(
      new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)), new mojo::internal::ContainerValidateParams(0, true, nullptr));
  if (!mojo::internal::ValidateContainer(object->nullable_pod_union_map, validation_context,
                                         &nullable_pod_union_map_validate_params)) {
    return false;
  }

  return true;
}

SmallStruct_Data::SmallStruct_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool SmallStructNonNullableUnion_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const SmallStructNonNullableUnion_Data* object = static_cast<const SmallStructNonNullableUnion_Data*>(data);

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
          object->pod_union, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateInlinedUnion(object->pod_union, validation_context))
    return false;

  return true;
}

SmallStructNonNullableUnion_Data::SmallStructNonNullableUnion_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool SmallObjStruct_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const SmallObjStruct_Data* object = static_cast<const SmallObjStruct_Data*>(data);

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

  if (!mojo::internal::ValidateInlinedUnionNonNullable(
          object->obj_union, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateInlinedUnion(object->obj_union, validation_context))
    return false;

  return true;
}

SmallObjStruct_Data::SmallObjStruct_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool TryNonNullStruct_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const TryNonNullStruct_Data* object = static_cast<const TryNonNullStruct_Data*>(data);

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

  if (!mojo::internal::ValidateStruct(object->nullable, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->non_nullable, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->non_nullable, validation_context))
    return false;

  return true;
}

TryNonNullStruct_Data::TryNonNullStruct_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ImportedUnionStruct_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ImportedUnionStruct_Data* object = static_cast<const ImportedUnionStruct_Data*>(data);

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
          object->point_or_shape, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateInlinedUnion(object->point_or_shape, validation_context))
    return false;

  return true;
}

ImportedUnionStruct_Data::ImportedUnionStruct_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool SmallCache_SetIntValue_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const SmallCache_SetIntValue_Params_Data* object = static_cast<const SmallCache_SetIntValue_Params_Data*>(data);

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

SmallCache_SetIntValue_Params_Data::SmallCache_SetIntValue_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool SmallCache_GetIntValue_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const SmallCache_GetIntValue_Params_Data* object = static_cast<const SmallCache_GetIntValue_Params_Data*>(data);

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

SmallCache_GetIntValue_Params_Data::SmallCache_GetIntValue_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool SmallCache_GetIntValue_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const SmallCache_GetIntValue_ResponseParams_Data* object = static_cast<const SmallCache_GetIntValue_ResponseParams_Data*>(data);

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

SmallCache_GetIntValue_ResponseParams_Data::SmallCache_GetIntValue_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool UnionInterface_Echo_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const UnionInterface_Echo_Params_Data* object = static_cast<const UnionInterface_Echo_Params_Data*>(data);

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
          object->in_val, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateInlinedUnion(object->in_val, validation_context))
    return false;

  return true;
}

UnionInterface_Echo_Params_Data::UnionInterface_Echo_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool UnionInterface_Echo_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const UnionInterface_Echo_ResponseParams_Data* object = static_cast<const UnionInterface_Echo_ResponseParams_Data*>(data);

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
          object->out_val, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateInlinedUnion(object->out_val, validation_context))
    return false;

  return true;
}

UnionInterface_Echo_ResponseParams_Data::UnionInterface_Echo_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace test
}  // namespace mojo

#if defined(_MSC_VER)
#pragma warning(pop)
#endif