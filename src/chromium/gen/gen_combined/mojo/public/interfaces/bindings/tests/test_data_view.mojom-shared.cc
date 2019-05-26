// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "mojo/public/interfaces/bindings/tests/test_data_view.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "base/stl_util.h"  // for base::size()
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"

#include "mojo/public/interfaces/bindings/tests/test_data_view.mojom-params-data.h"
namespace mojo {
namespace test {
namespace data_view {

std::ostream& operator<<(std::ostream& os, TestEnum value) {
  switch(value) {
    case TestEnum::VALUE_0:
      return os << "TestEnum::VALUE_0";
    case TestEnum::VALUE_1:
      return os << "TestEnum::VALUE_1";
    default:
      return os << "Unknown TestEnum value: " << static_cast<int32_t>(value);
  }
}

namespace internal {
// static
bool TestUnion_Data::Validate(
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

  const TestUnion_Data* object = static_cast<const TestUnion_Data*>(data);
  ALLOW_UNUSED_LOCAL(object);

  if (inlined && object->is_null())
    return true;

  switch (object->tag) {

    case TestUnion_Tag::F_BOOL: {

      return true;
    }
    case TestUnion_Tag::F_INT32: {

      return true;
    }
    default: {
      ReportValidationError(
          validation_context,
          mojo::internal::VALIDATION_ERROR_UNKNOWN_UNION_TAG,
          "unknown tag in TestUnion");
      return false;
    }
  }
}


// static
bool NestedStruct_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const NestedStruct_Data* object = static_cast<const NestedStruct_Data*>(data);

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

NestedStruct_Data::NestedStruct_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool TestStruct_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const TestStruct_Data* object = static_cast<const TestStruct_Data*>(data);

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
          object->f_string, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams f_string_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->f_string, validation_context,
                                         &f_string_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidateStruct(object->f_struct, validation_context))
    return false;

  if (!mojo::internal::ValidateStruct(object->f_native_struct, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->f_bool_array, 4, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams f_bool_array_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->f_bool_array, validation_context,
                                         &f_bool_array_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->f_int32_array, 5, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams f_int32_array_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->f_int32_array, validation_context,
                                         &f_int32_array_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->f_enum_array, 6, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams f_enum_array_validate_params(
      0, ::mojo::test::data_view::internal::TestEnum_Data::Validate);
  if (!mojo::internal::ValidateContainer(object->f_enum_array, validation_context,
                                         &f_enum_array_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->f_interface_array, 7, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams f_interface_array_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->f_interface_array, validation_context,
                                         &f_interface_array_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->f_nested_array, 8, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams f_nested_array_validate_params(
      0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
  if (!mojo::internal::ValidateContainer(object->f_nested_array, validation_context,
                                         &f_nested_array_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->f_struct_array, 9, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams f_struct_array_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->f_struct_array, validation_context,
                                         &f_struct_array_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->f_union_array, 10, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams f_union_array_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->f_union_array, validation_context,
                                         &f_union_array_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->f_map, 11, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams f_map_validate_params(
      new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)), new mojo::internal::ContainerValidateParams(0, false, nullptr));
  if (!mojo::internal::ValidateContainer(object->f_map, validation_context,
                                         &f_map_validate_params)) {
    return false;
  }

  return true;
}

TestStruct_Data::TestStruct_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool TestInterface_Echo_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const TestInterface_Echo_Params_Data* object = static_cast<const TestInterface_Echo_Params_Data*>(data);

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

TestInterface_Echo_Params_Data::TestInterface_Echo_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool TestInterface_Echo_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const TestInterface_Echo_ResponseParams_Data* object = static_cast<const TestInterface_Echo_ResponseParams_Data*>(data);

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

TestInterface_Echo_ResponseParams_Data::TestInterface_Echo_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace data_view
}  // namespace test
}  // namespace mojo

#if defined(_MSC_VER)
#pragma warning(pop)
#endif