// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "mojo/public/interfaces/bindings/tests/test_wtf_types.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "base/stl_util.h"  // for base::size()
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"

#include "mojo/public/interfaces/bindings/tests/test_wtf_types.mojom-params-data.h"
namespace mojo {
namespace test {

std::ostream& operator<<(std::ostream& os, TopLevelEnum value) {
  switch(value) {
    case TopLevelEnum::E0:
      return os << "TopLevelEnum::E0";
    case TopLevelEnum::E1:
      return os << "TopLevelEnum::E1";
    default:
      return os << "Unknown TopLevelEnum value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, TestWTFStruct_NestedEnum value) {
  switch(value) {
    case TestWTFStruct_NestedEnum::E0:
      return os << "TestWTFStruct_NestedEnum::E0";
    case TestWTFStruct_NestedEnum::E1:
      return os << "TestWTFStruct_NestedEnum::E1";
    default:
      return os << "Unknown TestWTFStruct_NestedEnum value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, TestWTF_NestedEnum value) {
  switch(value) {
    case TestWTF_NestedEnum::E0:
      return os << "TestWTF_NestedEnum::E0";
    case TestWTF_NestedEnum::E1:
      return os << "TestWTF_NestedEnum::E1";
    default:
      return os << "Unknown TestWTF_NestedEnum value: " << static_cast<int32_t>(value);
  }
}

namespace internal {
// static
bool TestWTFCodeGeneration2_Data::Validate(
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

  const TestWTFCodeGeneration2_Data* object = static_cast<const TestWTFCodeGeneration2_Data*>(data);
  ALLOW_UNUSED_LOCAL(object);

  if (inlined && object->is_null())
    return true;

  switch (object->tag) {

    case TestWTFCodeGeneration2_Tag::STR: {

      if (!mojo::internal::ValidatePointerNonNullable(
              object->data.f_str, 1, validation_context)) {
        return false;
      }
      const mojo::internal::ContainerValidateParams str_validate_params(
          0, false, nullptr);
      if (!mojo::internal::ValidateContainer(object->data.f_str, validation_context,
                                             &str_validate_params)) {
        return false;
      }
      return true;
    }
    case TestWTFCodeGeneration2_Tag::STRS: {

      if (!mojo::internal::ValidatePointerNonNullable(
              object->data.f_strs, 2, validation_context)) {
        return false;
      }
      const mojo::internal::ContainerValidateParams strs_validate_params(
          0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
      if (!mojo::internal::ValidateContainer(object->data.f_strs, validation_context,
                                             &strs_validate_params)) {
        return false;
      }
      return true;
    }
    case TestWTFCodeGeneration2_Tag::STR_MAP: {

      if (!mojo::internal::ValidatePointerNonNullable(
              object->data.f_str_map, 3, validation_context)) {
        return false;
      }
      const mojo::internal::ContainerValidateParams str_map_validate_params(
          new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)), new mojo::internal::ContainerValidateParams(0, true, new mojo::internal::ContainerValidateParams(0, false, nullptr)));
      if (!mojo::internal::ValidateContainer(object->data.f_str_map, validation_context,
                                             &str_map_validate_params)) {
        return false;
      }
      return true;
    }
    default: {
      ReportValidationError(
          validation_context,
          mojo::internal::VALIDATION_ERROR_UNKNOWN_UNION_TAG,
          "unknown tag in TestWTFCodeGeneration2");
      return false;
    }
  }
}


// static
bool TestWTFCodeGeneration_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const TestWTFCodeGeneration_Data* object = static_cast<const TestWTFCodeGeneration_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 96 }};

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
          object->str, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams str_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->str, validation_context,
                                         &str_validate_params)) {
    return false;
  }

  const mojo::internal::ContainerValidateParams nullable_str_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->nullable_str, validation_context,
                                         &nullable_str_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->strs, 3, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams strs_validate_params(
      0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
  if (!mojo::internal::ValidateContainer(object->strs, validation_context,
                                         &strs_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->nullable_strs, 4, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams nullable_strs_validate_params(
      0, true, new mojo::internal::ContainerValidateParams(0, false, nullptr));
  if (!mojo::internal::ValidateContainer(object->nullable_strs, validation_context,
                                         &nullable_strs_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->arrays, 5, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams arrays_validate_params(
      0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
  if (!mojo::internal::ValidateContainer(object->arrays, validation_context,
                                         &arrays_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->bools, 6, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams bools_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->bools, validation_context,
                                         &bools_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->handles, 7, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams handles_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->handles, validation_context,
                                         &handles_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->str_map, 8, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams str_map_validate_params(
      new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)), new mojo::internal::ContainerValidateParams(0, true, new mojo::internal::ContainerValidateParams(0, false, nullptr)));
  if (!mojo::internal::ValidateContainer(object->str_map, validation_context,
                                         &str_map_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->array_map, 9, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams array_map_validate_params(
      new mojo::internal::ContainerValidateParams(0, false, nullptr), new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)));
  if (!mojo::internal::ValidateContainer(object->array_map, validation_context,
                                         &array_map_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->handle_map, 10, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams handle_map_validate_params(
      new mojo::internal::ContainerValidateParams(0, false, nullptr), new mojo::internal::ContainerValidateParams(0, false, nullptr));
  if (!mojo::internal::ValidateContainer(object->handle_map, validation_context,
                                         &handle_map_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->str_maps, 11, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams str_maps_validate_params(
      0, false, new mojo::internal::ContainerValidateParams(new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)), new mojo::internal::ContainerValidateParams(0, true, new mojo::internal::ContainerValidateParams(0, false, nullptr))));
  if (!mojo::internal::ValidateContainer(object->str_maps, validation_context,
                                         &str_maps_validate_params)) {
    return false;
  }

  return true;
}

TestWTFCodeGeneration_Data::TestWTFCodeGeneration_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool TestWTFStruct_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const TestWTFStruct_Data* object = static_cast<const TestWTFStruct_Data*>(data);

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
          object->str, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams str_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->str, validation_context,
                                         &str_validate_params)) {
    return false;
  }

  return true;
}

TestWTFStruct_Data::TestWTFStruct_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool TestWTFStructWrapper_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const TestWTFStructWrapper_Data* object = static_cast<const TestWTFStructWrapper_Data*>(data);

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
          object->nested_struct, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->nested_struct, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->array_struct, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams array_struct_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->array_struct, validation_context,
                                         &array_struct_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->map_struct, 3, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams map_struct_validate_params(
      new mojo::internal::ContainerValidateParams(0, false, nullptr), new mojo::internal::ContainerValidateParams(0, false, nullptr));
  if (!mojo::internal::ValidateContainer(object->map_struct, validation_context,
                                         &map_struct_validate_params)) {
    return false;
  }

  return true;
}

TestWTFStructWrapper_Data::TestWTFStructWrapper_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool TestWTF_EchoString_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const TestWTF_EchoString_Params_Data* object = static_cast<const TestWTF_EchoString_Params_Data*>(data);

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

  const mojo::internal::ContainerValidateParams str_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->str, validation_context,
                                         &str_validate_params)) {
    return false;
  }

  return true;
}

TestWTF_EchoString_Params_Data::TestWTF_EchoString_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool TestWTF_EchoString_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const TestWTF_EchoString_ResponseParams_Data* object = static_cast<const TestWTF_EchoString_ResponseParams_Data*>(data);

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

  const mojo::internal::ContainerValidateParams str_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->str, validation_context,
                                         &str_validate_params)) {
    return false;
  }

  return true;
}

TestWTF_EchoString_ResponseParams_Data::TestWTF_EchoString_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool TestWTF_EchoStringArray_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const TestWTF_EchoStringArray_Params_Data* object = static_cast<const TestWTF_EchoStringArray_Params_Data*>(data);

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

  const mojo::internal::ContainerValidateParams arr_validate_params(
      0, true, new mojo::internal::ContainerValidateParams(0, false, nullptr));
  if (!mojo::internal::ValidateContainer(object->arr, validation_context,
                                         &arr_validate_params)) {
    return false;
  }

  return true;
}

TestWTF_EchoStringArray_Params_Data::TestWTF_EchoStringArray_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool TestWTF_EchoStringArray_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const TestWTF_EchoStringArray_ResponseParams_Data* object = static_cast<const TestWTF_EchoStringArray_ResponseParams_Data*>(data);

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

  const mojo::internal::ContainerValidateParams arr_validate_params(
      0, true, new mojo::internal::ContainerValidateParams(0, false, nullptr));
  if (!mojo::internal::ValidateContainer(object->arr, validation_context,
                                         &arr_validate_params)) {
    return false;
  }

  return true;
}

TestWTF_EchoStringArray_ResponseParams_Data::TestWTF_EchoStringArray_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool TestWTF_EchoStringMap_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const TestWTF_EchoStringMap_Params_Data* object = static_cast<const TestWTF_EchoStringMap_Params_Data*>(data);

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

  const mojo::internal::ContainerValidateParams str_map_validate_params(
      new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)), new mojo::internal::ContainerValidateParams(0, true, new mojo::internal::ContainerValidateParams(0, false, nullptr)));
  if (!mojo::internal::ValidateContainer(object->str_map, validation_context,
                                         &str_map_validate_params)) {
    return false;
  }

  return true;
}

TestWTF_EchoStringMap_Params_Data::TestWTF_EchoStringMap_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool TestWTF_EchoStringMap_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const TestWTF_EchoStringMap_ResponseParams_Data* object = static_cast<const TestWTF_EchoStringMap_ResponseParams_Data*>(data);

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

  const mojo::internal::ContainerValidateParams str_map_validate_params(
      new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)), new mojo::internal::ContainerValidateParams(0, true, new mojo::internal::ContainerValidateParams(0, false, nullptr)));
  if (!mojo::internal::ValidateContainer(object->str_map, validation_context,
                                         &str_map_validate_params)) {
    return false;
  }

  return true;
}

TestWTF_EchoStringMap_ResponseParams_Data::TestWTF_EchoStringMap_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace test
}  // namespace mojo

#if defined(_MSC_VER)
#pragma warning(pop)
#endif