// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "third_party/blink/public/mojom/worker/worker_main_script_load_params.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "base/stl_util.h"  // for base::size()
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"

#include "third_party/blink/public/mojom/worker/worker_main_script_load_params.mojom-params-data.h"
namespace blink {
namespace mojom {

namespace internal {


// static
bool WorkerMainScriptLoadParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const WorkerMainScriptLoadParams_Data* object = static_cast<const WorkerMainScriptLoadParams_Data*>(data);

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
          object->response_head, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->response_head, validation_context))
    return false;

  if (!mojo::internal::ValidateStruct(object->url_loader_client_endpoints, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->redirect_infos, 3, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams redirect_infos_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->redirect_infos, validation_context,
                                         &redirect_infos_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->redirect_response_heads, 4, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams redirect_response_heads_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->redirect_response_heads, validation_context,
                                         &redirect_response_heads_validate_params)) {
    return false;
  }

  return true;
}

WorkerMainScriptLoadParams_Data::WorkerMainScriptLoadParams_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#if defined(_MSC_VER)
#pragma warning(pop)
#endif