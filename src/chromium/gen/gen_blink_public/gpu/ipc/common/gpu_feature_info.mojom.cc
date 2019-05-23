// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#elif defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4056)
#pragma warning(disable:4065)
#pragma warning(disable:4756)
#endif

#include "gpu/ipc/common/gpu_feature_info.mojom.h"

#include <math.h>
#include <stdint.h>
#include <utility>

#include "base/location.h"
#include "base/logging.h"
#include "base/run_loop.h"
#include "base/task/common/task_annotator.h"
#include "mojo/public/cpp/bindings/lib/message_internal.h"
#include "mojo/public/cpp/bindings/lib/serialization_util.h"
#include "mojo/public/cpp/bindings/lib/unserialized_message_context.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/interfaces/bindings/interface_control_messages.mojom.h"

#include "gpu/ipc/common/gpu_feature_info.mojom-params-data.h"
#include "gpu/ipc/common/gpu_feature_info.mojom-shared-message-ids.h"

#include "gpu/ipc/common/gpu_feature_info.mojom-import-headers.h"


#ifndef GPU_IPC_COMMON_GPU_FEATURE_INFO_MOJOM_JUMBO_H_
#define GPU_IPC_COMMON_GPU_FEATURE_INFO_MOJOM_JUMBO_H_
#include "gpu/ipc/common/gpu_feature_info_struct_traits.h"
#endif
namespace gpu {
namespace mojom {
WebglPreferences::WebglPreferences()
    : anti_aliasing_mode(),
      msaa_sample_count(),
      max_active_webgl_contexts(),
      max_active_webgl_contexts_on_worker() {}

WebglPreferences::WebglPreferences(
    gpu::AntialiasingMode anti_aliasing_mode_in,
    uint32_t msaa_sample_count_in,
    uint32_t max_active_webgl_contexts_in,
    uint32_t max_active_webgl_contexts_on_worker_in)
    : anti_aliasing_mode(std::move(anti_aliasing_mode_in)),
      msaa_sample_count(std::move(msaa_sample_count_in)),
      max_active_webgl_contexts(std::move(max_active_webgl_contexts_in)),
      max_active_webgl_contexts_on_worker(std::move(max_active_webgl_contexts_on_worker_in)) {}

WebglPreferences::~WebglPreferences() = default;

bool WebglPreferences::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
GpuFeatureInfo::GpuFeatureInfo()
    : status_values(),
      enabled_gpu_driver_bug_workarounds(),
      disabled_extensions(),
      disabled_webgl_extensions(),
      webgl_preferences(),
      applied_gpu_blacklist_entries(),
      applied_gpu_driver_bug_list_entries() {}

GpuFeatureInfo::GpuFeatureInfo(
    const std::vector<gpu::GpuFeatureStatus>& status_values_in,
    const std::vector<int32_t>& enabled_gpu_driver_bug_workarounds_in,
    const std::string& disabled_extensions_in,
    const std::string& disabled_webgl_extensions_in,
    const gpu::WebglPreferences& webgl_preferences_in,
    const std::vector<uint32_t>& applied_gpu_blacklist_entries_in,
    const std::vector<uint32_t>& applied_gpu_driver_bug_list_entries_in)
    : status_values(std::move(status_values_in)),
      enabled_gpu_driver_bug_workarounds(std::move(enabled_gpu_driver_bug_workarounds_in)),
      disabled_extensions(std::move(disabled_extensions_in)),
      disabled_webgl_extensions(std::move(disabled_webgl_extensions_in)),
      webgl_preferences(std::move(webgl_preferences_in)),
      applied_gpu_blacklist_entries(std::move(applied_gpu_blacklist_entries_in)),
      applied_gpu_driver_bug_list_entries(std::move(applied_gpu_driver_bug_list_entries_in)) {}

GpuFeatureInfo::~GpuFeatureInfo() = default;

bool GpuFeatureInfo::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace mojom
}  // namespace gpu

namespace mojo {


// static
bool StructTraits<::gpu::mojom::WebglPreferences::DataView, ::gpu::mojom::WebglPreferencesPtr>::Read(
    ::gpu::mojom::WebglPreferences::DataView input,
    ::gpu::mojom::WebglPreferencesPtr* output) {
  bool success = true;
  ::gpu::mojom::WebglPreferencesPtr result(::gpu::mojom::WebglPreferences::New());
  
      if (!input.ReadAntiAliasingMode(&result->anti_aliasing_mode))
        success = false;
      result->msaa_sample_count = input.msaa_sample_count();
      result->max_active_webgl_contexts = input.max_active_webgl_contexts();
      result->max_active_webgl_contexts_on_worker = input.max_active_webgl_contexts_on_worker();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::gpu::mojom::GpuFeatureInfo::DataView, ::gpu::mojom::GpuFeatureInfoPtr>::Read(
    ::gpu::mojom::GpuFeatureInfo::DataView input,
    ::gpu::mojom::GpuFeatureInfoPtr* output) {
  bool success = true;
  ::gpu::mojom::GpuFeatureInfoPtr result(::gpu::mojom::GpuFeatureInfo::New());
  
      if (!input.ReadStatusValues(&result->status_values))
        success = false;
      if (!input.ReadEnabledGpuDriverBugWorkarounds(&result->enabled_gpu_driver_bug_workarounds))
        success = false;
      if (!input.ReadDisabledExtensions(&result->disabled_extensions))
        success = false;
      if (!input.ReadDisabledWebglExtensions(&result->disabled_webgl_extensions))
        success = false;
      if (!input.ReadWebglPreferences(&result->webgl_preferences))
        success = false;
      if (!input.ReadAppliedGpuBlacklistEntries(&result->applied_gpu_blacklist_entries))
        success = false;
      if (!input.ReadAppliedGpuDriverBugListEntries(&result->applied_gpu_driver_bug_list_entries))
        success = false;
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif