// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "mojo/public/cpp/test/module.test-mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "base/stl_util.h"  // for base::size()
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"

#include "mojo/public/cpp/test/module.test-mojom-params-data.h"
namespace test_module {

std::ostream& operator<<(std::ostream& os, GlobalEnum value) {
  switch(value) {
    case GlobalEnum::FIRST:
      return os << "GlobalEnum::FIRST";
    case GlobalEnum::SECOND:
      return os << "GlobalEnum::SECOND";
    default:
      return os << "Unknown GlobalEnum value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, Struct_StructEnum value) {
  switch(value) {
    case Struct_StructEnum::SECOND:
      return os << "Struct_StructEnum::SECOND";
    case Struct_StructEnum::THIRD:
      return os << "Struct_StructEnum::THIRD";
    case Struct_StructEnum::FOURTH:
      return os << "Struct_StructEnum::FOURTH";
    default:
      return os << "Unknown Struct_StructEnum value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, Interface_InterfaceEnum value) {
  switch(value) {
    case Interface_InterfaceEnum::FIFTH:
      return os << "Interface_InterfaceEnum::FIFTH";
    case Interface_InterfaceEnum::SIXTH:
      return os << "Interface_InterfaceEnum::SIXTH";
    default:
      return os << "Unknown Interface_InterfaceEnum value: " << static_cast<int32_t>(value);
  }
}

namespace internal {
// static
bool Union_Data::Validate(
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

  const Union_Data* object = static_cast<const Union_Data*>(data);
  ALLOW_UNUSED_LOCAL(object);

  if (inlined && object->is_null())
    return true;

  switch (object->tag) {

    case Union_Tag::A: {

      return true;
    }
    case Union_Tag::B: {

      return true;
    }
    default: {
      ReportValidationError(
          validation_context,
          mojo::internal::VALIDATION_ERROR_UNKNOWN_UNION_TAG,
          "unknown tag in Union");
      return false;
    }
  }
}


// static
bool Struct_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const Struct_Data* object = static_cast<const Struct_Data*>(data);

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

Struct_Data::Struct_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool Interface_DoSomething_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const Interface_DoSomething_Params_Data* object = static_cast<const Interface_DoSomething_Params_Data*>(data);

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

Interface_DoSomething_Params_Data::Interface_DoSomething_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool Interface_DoSomethingElse_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const Interface_DoSomethingElse_Params_Data* object = static_cast<const Interface_DoSomethingElse_Params_Data*>(data);

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
          object->s, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->s, validation_context))
    return false;

  return true;
}

Interface_DoSomethingElse_Params_Data::Interface_DoSomethingElse_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool Interface_DoSomethingElse_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const Interface_DoSomethingElse_ResponseParams_Data* object = static_cast<const Interface_DoSomethingElse_ResponseParams_Data*>(data);

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


  if (!::test_module::internal::GlobalEnum_Data
        ::Validate(object->e, validation_context))
    return false;

  return true;
}

Interface_DoSomethingElse_ResponseParams_Data::Interface_DoSomethingElse_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace test_module

#if defined(_MSC_VER)
#pragma warning(pop)
#endif