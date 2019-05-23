// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "mojo/public/interfaces/bindings/tests/sample_service.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "base/stl_util.h"  // for base::size()
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"

#include "mojo/public/interfaces/bindings/tests/sample_service.mojom-params-data.h"
namespace sample {

std::ostream& operator<<(std::ostream& os, Bar_Type value) {
  switch(value) {
    case Bar_Type::VERTICAL:
      return os << "Bar_Type::VERTICAL";
    case Bar_Type::HORIZONTAL:
      return os << "Bar_Type::HORIZONTAL";
    case Bar_Type::BOTH:
      return os << "Bar_Type::BOTH";
    case Bar_Type::INVALID:
      return os << "Bar_Type::INVALID";
    default:
      return os << "Unknown Bar_Type value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, Service_BazOptions value) {
  switch(value) {
    case Service_BazOptions::REGULAR:
      return os << "Service_BazOptions::REGULAR";
    case Service_BazOptions::EXTRA:
      return os << "Service_BazOptions::EXTRA";
    default:
      return os << "Unknown Service_BazOptions value: " << static_cast<int32_t>(value);
  }
}

namespace internal {


// static
bool Bar_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const Bar_Data* object = static_cast<const Bar_Data*>(data);

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


  if (!::sample::internal::Bar_Type_Data
        ::Validate(object->type, validation_context))
    return false;

  return true;
}

Bar_Data::Bar_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool Foo_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const Foo_Data* object = static_cast<const Foo_Data*>(data);

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

  if (!mojo::internal::ValidateStruct(object->bar, validation_context))
    return false;

  const mojo::internal::ContainerValidateParams data_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->data, validation_context,
                                         &data_validate_params)) {
    return false;
  }

  const mojo::internal::ContainerValidateParams extra_bars_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->extra_bars, validation_context,
                                         &extra_bars_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->name, 9, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams name_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->name, validation_context,
                                         &name_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidateHandleOrInterface(object->source,
                                                 validation_context)) {
    return false;
  }

  const mojo::internal::ContainerValidateParams input_streams_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->input_streams, validation_context,
                                         &input_streams_validate_params)) {
    return false;
  }

  const mojo::internal::ContainerValidateParams output_streams_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->output_streams, validation_context,
                                         &output_streams_validate_params)) {
    return false;
  }

  const mojo::internal::ContainerValidateParams array_of_array_of_bools_validate_params(
      0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
  if (!mojo::internal::ValidateContainer(object->array_of_array_of_bools, validation_context,
                                         &array_of_array_of_bools_validate_params)) {
    return false;
  }

  const mojo::internal::ContainerValidateParams multi_array_of_strings_validate_params(
      0, false, new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr))));
  if (!mojo::internal::ValidateContainer(object->multi_array_of_strings, validation_context,
                                         &multi_array_of_strings_validate_params)) {
    return false;
  }

  const mojo::internal::ContainerValidateParams array_of_bools_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->array_of_bools, validation_context,
                                         &array_of_bools_validate_params)) {
    return false;
  }

  return true;
}

Foo_Data::Foo_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool DefaultsTest_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const DefaultsTest_Data* object = static_cast<const DefaultsTest_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 184 }};

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
          object->a18, 19, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams a18_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->a18, validation_context,
                                         &a18_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->a19, 20, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams a19_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->a19, validation_context,
                                         &a19_validate_params)) {
    return false;
  }


  if (!::sample::internal::Bar_Type_Data
        ::Validate(object->a20, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->a21, 22, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->a21, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->a22, 23, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->a22, validation_context))
    return false;

  return true;
}

DefaultsTest_Data::DefaultsTest_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool StructWithHoleV1_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const StructWithHoleV1_Data* object = static_cast<const StructWithHoleV1_Data*>(data);

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

StructWithHoleV1_Data::StructWithHoleV1_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool StructWithHoleV2_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const StructWithHoleV2_Data* object = static_cast<const StructWithHoleV2_Data*>(data);

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

StructWithHoleV2_Data::StructWithHoleV2_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool Service_Frobinate_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const Service_Frobinate_Params_Data* object = static_cast<const Service_Frobinate_Params_Data*>(data);

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

  if (!mojo::internal::ValidateStruct(object->foo, validation_context))
    return false;


  if (!::sample::internal::Service_BazOptions_Data
        ::Validate(object->baz, validation_context))
    return false;

  if (!mojo::internal::ValidateHandleOrInterface(object->port,
                                                 validation_context)) {
    return false;
  }

  return true;
}

Service_Frobinate_Params_Data::Service_Frobinate_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool Service_Frobinate_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const Service_Frobinate_ResponseParams_Data* object = static_cast<const Service_Frobinate_ResponseParams_Data*>(data);

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

Service_Frobinate_ResponseParams_Data::Service_Frobinate_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool Service_GetPort_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const Service_GetPort_Params_Data* object = static_cast<const Service_GetPort_Params_Data*>(data);

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
          object->receiver, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->receiver,
                                                 validation_context)) {
    return false;
  }

  return true;
}

Service_GetPort_Params_Data::Service_GetPort_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool Port_PostMessageToPort_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const Port_PostMessageToPort_Params_Data* object = static_cast<const Port_PostMessageToPort_Params_Data*>(data);

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
          object->message_text, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams message_text_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->message_text, validation_context,
                                         &message_text_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
          object->port, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->port,
                                                 validation_context)) {
    return false;
  }

  return true;
}

Port_PostMessageToPort_Params_Data::Port_PostMessageToPort_Params_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace sample

#if defined(_MSC_VER)
#pragma warning(pop)
#endif