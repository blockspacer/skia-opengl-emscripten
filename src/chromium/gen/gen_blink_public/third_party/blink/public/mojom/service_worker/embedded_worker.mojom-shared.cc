// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "third_party/blink/public/mojom/service_worker/embedded_worker.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "base/stl_util.h"  // for base::size()
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"

#include "third_party/blink/public/mojom/service_worker/embedded_worker.mojom-params-data.h"
namespace blink {
namespace mojom {

namespace internal {


// static
bool EmbeddedWorkerStartParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const EmbeddedWorkerStartParams_Data* object = static_cast<const EmbeddedWorkerStartParams_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 128 }};

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
          object->scope, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->scope, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->script_url, 3, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->script_url, validation_context))
    return false;


  if (!::blink::mojom::internal::ScriptType_Data
        ::Validate(object->script_type, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->user_agent, 5, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams user_agent_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->user_agent, validation_context,
                                         &user_agent_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->devtools_worker_token, 7, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->devtools_worker_token, validation_context))
    return false;


  if (!::blink::mojom::internal::V8CacheOptions_Data
        ::Validate(object->v8_cache_options, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->renderer_preferences, 12, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->renderer_preferences, validation_context))
    return false;

  if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
          object->service_worker_request, 13, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->service_worker_request,
                                                 validation_context)) {
    return false;
  }

  if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
          object->controller_request, 14, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->controller_request,
                                                 validation_context)) {
    return false;
  }

  if (!mojo::internal::ValidateStruct(object->installed_scripts_info, validation_context))
    return false;

  if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
          object->instance_host, 16, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->instance_host,
                                                 validation_context)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->provider_info, 17, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->provider_info, validation_context))
    return false;

  if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
          object->content_settings_proxy, 18, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->content_settings_proxy,
                                                 validation_context)) {
    return false;
  }

  if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
          object->preference_watcher_request, 19, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->preference_watcher_request,
                                                 validation_context)) {
    return false;
  }

  if (!mojo::internal::ValidateStruct(object->subresource_loader_factories, validation_context))
    return false;

  return true;
}

EmbeddedWorkerStartParams_Data::EmbeddedWorkerStartParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool EmbeddedWorkerStartTiming_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const EmbeddedWorkerStartTiming_Data* object = static_cast<const EmbeddedWorkerStartTiming_Data*>(data);

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
          object->start_worker_received_time, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->start_worker_received_time, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->script_evaluation_start_time, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->script_evaluation_start_time, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->script_evaluation_end_time, 3, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->script_evaluation_end_time, validation_context))
    return false;

  return true;
}

EmbeddedWorkerStartTiming_Data::EmbeddedWorkerStartTiming_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool EmbeddedWorkerInstanceClient_StartWorker_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const EmbeddedWorkerInstanceClient_StartWorker_Params_Data* object = static_cast<const EmbeddedWorkerInstanceClient_StartWorker_Params_Data*>(data);

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
          object->params, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->params, validation_context))
    return false;

  return true;
}

EmbeddedWorkerInstanceClient_StartWorker_Params_Data::EmbeddedWorkerInstanceClient_StartWorker_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool EmbeddedWorkerInstanceClient_StopWorker_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const EmbeddedWorkerInstanceClient_StopWorker_Params_Data* object = static_cast<const EmbeddedWorkerInstanceClient_StopWorker_Params_Data*>(data);

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

EmbeddedWorkerInstanceClient_StopWorker_Params_Data::EmbeddedWorkerInstanceClient_StopWorker_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool EmbeddedWorkerInstanceClient_ResumeAfterDownload_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const EmbeddedWorkerInstanceClient_ResumeAfterDownload_Params_Data* object = static_cast<const EmbeddedWorkerInstanceClient_ResumeAfterDownload_Params_Data*>(data);

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

EmbeddedWorkerInstanceClient_ResumeAfterDownload_Params_Data::EmbeddedWorkerInstanceClient_ResumeAfterDownload_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool EmbeddedWorkerInstanceClient_AddMessageToConsole_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const EmbeddedWorkerInstanceClient_AddMessageToConsole_Params_Data* object = static_cast<const EmbeddedWorkerInstanceClient_AddMessageToConsole_Params_Data*>(data);

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


  if (!::blink::mojom::internal::ConsoleMessageLevel_Data
        ::Validate(object->level, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->message, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams message_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->message, validation_context,
                                         &message_validate_params)) {
    return false;
  }

  return true;
}

EmbeddedWorkerInstanceClient_AddMessageToConsole_Params_Data::EmbeddedWorkerInstanceClient_AddMessageToConsole_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool EmbeddedWorkerInstanceClient_BindDevToolsAgent_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const EmbeddedWorkerInstanceClient_BindDevToolsAgent_Params_Data* object = static_cast<const EmbeddedWorkerInstanceClient_BindDevToolsAgent_Params_Data*>(data);

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
          object->agent_host, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->agent_host,
                                                 validation_context)) {
    return false;
  }

  if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
          object->agent, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->agent,
                                                 validation_context)) {
    return false;
  }

  return true;
}

EmbeddedWorkerInstanceClient_BindDevToolsAgent_Params_Data::EmbeddedWorkerInstanceClient_BindDevToolsAgent_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool EmbeddedWorkerInstanceClient_UpdateSubresourceLoaderFactories_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const EmbeddedWorkerInstanceClient_UpdateSubresourceLoaderFactories_Params_Data* object = static_cast<const EmbeddedWorkerInstanceClient_UpdateSubresourceLoaderFactories_Params_Data*>(data);

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
          object->subresource_loader_factories, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->subresource_loader_factories, validation_context))
    return false;

  return true;
}

EmbeddedWorkerInstanceClient_UpdateSubresourceLoaderFactories_Params_Data::EmbeddedWorkerInstanceClient_UpdateSubresourceLoaderFactories_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool EmbeddedWorkerInstanceHost_RequestTermination_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const EmbeddedWorkerInstanceHost_RequestTermination_Params_Data* object = static_cast<const EmbeddedWorkerInstanceHost_RequestTermination_Params_Data*>(data);

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

EmbeddedWorkerInstanceHost_RequestTermination_Params_Data::EmbeddedWorkerInstanceHost_RequestTermination_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool EmbeddedWorkerInstanceHost_RequestTermination_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const EmbeddedWorkerInstanceHost_RequestTermination_ResponseParams_Data* object = static_cast<const EmbeddedWorkerInstanceHost_RequestTermination_ResponseParams_Data*>(data);

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

EmbeddedWorkerInstanceHost_RequestTermination_ResponseParams_Data::EmbeddedWorkerInstanceHost_RequestTermination_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool EmbeddedWorkerInstanceHost_CountFeature_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const EmbeddedWorkerInstanceHost_CountFeature_Params_Data* object = static_cast<const EmbeddedWorkerInstanceHost_CountFeature_Params_Data*>(data);

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


  if (!::blink::mojom::internal::WebFeature_Data
        ::Validate(object->feature, validation_context))
    return false;

  return true;
}

EmbeddedWorkerInstanceHost_CountFeature_Params_Data::EmbeddedWorkerInstanceHost_CountFeature_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool EmbeddedWorkerInstanceHost_OnReadyForInspection_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const EmbeddedWorkerInstanceHost_OnReadyForInspection_Params_Data* object = static_cast<const EmbeddedWorkerInstanceHost_OnReadyForInspection_Params_Data*>(data);

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

EmbeddedWorkerInstanceHost_OnReadyForInspection_Params_Data::EmbeddedWorkerInstanceHost_OnReadyForInspection_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool EmbeddedWorkerInstanceHost_OnScriptLoaded_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const EmbeddedWorkerInstanceHost_OnScriptLoaded_Params_Data* object = static_cast<const EmbeddedWorkerInstanceHost_OnScriptLoaded_Params_Data*>(data);

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

EmbeddedWorkerInstanceHost_OnScriptLoaded_Params_Data::EmbeddedWorkerInstanceHost_OnScriptLoaded_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool EmbeddedWorkerInstanceHost_OnScriptEvaluationStart_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const EmbeddedWorkerInstanceHost_OnScriptEvaluationStart_Params_Data* object = static_cast<const EmbeddedWorkerInstanceHost_OnScriptEvaluationStart_Params_Data*>(data);

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

EmbeddedWorkerInstanceHost_OnScriptEvaluationStart_Params_Data::EmbeddedWorkerInstanceHost_OnScriptEvaluationStart_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool EmbeddedWorkerInstanceHost_OnStarted_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const EmbeddedWorkerInstanceHost_OnStarted_Params_Data* object = static_cast<const EmbeddedWorkerInstanceHost_OnStarted_Params_Data*>(data);

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


  if (!::blink::mojom::internal::ServiceWorkerStartStatus_Data
        ::Validate(object->status, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->start_timing, 3, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->start_timing, validation_context))
    return false;

  return true;
}

EmbeddedWorkerInstanceHost_OnStarted_Params_Data::EmbeddedWorkerInstanceHost_OnStarted_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool EmbeddedWorkerInstanceHost_OnReportException_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const EmbeddedWorkerInstanceHost_OnReportException_Params_Data* object = static_cast<const EmbeddedWorkerInstanceHost_OnReportException_Params_Data*>(data);

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
          object->error_message, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->error_message, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->source_url, 4, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->source_url, validation_context))
    return false;

  return true;
}

EmbeddedWorkerInstanceHost_OnReportException_Params_Data::EmbeddedWorkerInstanceHost_OnReportException_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool EmbeddedWorkerInstanceHost_OnReportConsoleMessage_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const EmbeddedWorkerInstanceHost_OnReportConsoleMessage_Params_Data* object = static_cast<const EmbeddedWorkerInstanceHost_OnReportConsoleMessage_Params_Data*>(data);

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


  if (!::blink::mojom::internal::ConsoleMessageSource_Data
        ::Validate(object->source, validation_context))
    return false;


  if (!::blink::mojom::internal::ConsoleMessageLevel_Data
        ::Validate(object->message_level, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->message, 3, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->message, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->source_url, 5, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->source_url, validation_context))
    return false;

  return true;
}

EmbeddedWorkerInstanceHost_OnReportConsoleMessage_Params_Data::EmbeddedWorkerInstanceHost_OnReportConsoleMessage_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool EmbeddedWorkerInstanceHost_OnStopped_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const EmbeddedWorkerInstanceHost_OnStopped_Params_Data* object = static_cast<const EmbeddedWorkerInstanceHost_OnStopped_Params_Data*>(data);

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

EmbeddedWorkerInstanceHost_OnStopped_Params_Data::EmbeddedWorkerInstanceHost_OnStopped_Params_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#if defined(_MSC_VER)
#pragma warning(pop)
#endif