// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "third_party/blink/public/mojom/worker/shared_worker_factory.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "base/stl_util.h"  // for base::size()
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"

#include "third_party/blink/public/mojom/worker/shared_worker_factory.mojom-params-data.h"
namespace blink {
namespace mojom {

namespace internal {


// static
bool SharedWorkerFactory_CreateSharedWorker_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const SharedWorkerFactory_CreateSharedWorker_Params_Data* object = static_cast<const SharedWorkerFactory_CreateSharedWorker_Params_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 112 }};

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
          object->info, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->info, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->devtools_worker_token, 3, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->devtools_worker_token, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->renderer_preferences, 4, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->renderer_preferences, validation_context))
    return false;

  if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
          object->preference_watcher_request, 5, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->preference_watcher_request,
                                                 validation_context)) {
    return false;
  }

  if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
          object->content_settings, 6, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->content_settings,
                                                 validation_context)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->service_worker_provider_info, 7, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->service_worker_provider_info, validation_context))
    return false;

  if (!mojo::internal::ValidateHandleOrInterface(object->main_script_loader_factory,
                                                 validation_context)) {
    return false;
  }

  if (!mojo::internal::ValidateStruct(object->main_script_load_params, validation_context))
    return false;

  if (!mojo::internal::ValidateStruct(object->subresource_loader_factories, validation_context))
    return false;

  if (!mojo::internal::ValidateStruct(object->controller_info, validation_context))
    return false;

  if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
          object->host, 13, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->host,
                                                 validation_context)) {
    return false;
  }

  if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
          object->shared_worker, 14, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->shared_worker,
                                                 validation_context)) {
    return false;
  }

  if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
          object->interface_provider, 15, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->interface_provider,
                                                 validation_context)) {
    return false;
  }

  return true;
}

SharedWorkerFactory_CreateSharedWorker_Params_Data::SharedWorkerFactory_CreateSharedWorker_Params_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#if defined(_MSC_VER)
#pragma warning(pop)
#endif