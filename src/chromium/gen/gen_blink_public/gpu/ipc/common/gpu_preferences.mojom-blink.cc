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

#include "gpu/ipc/common/gpu_preferences.mojom-blink.h"

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

#include "gpu/ipc/common/gpu_preferences.mojom-params-data.h"
#include "gpu/ipc/common/gpu_preferences.mojom-shared-message-ids.h"

#include "gpu/ipc/common/gpu_preferences.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef GPU_IPC_COMMON_GPU_PREFERENCES_MOJOM_BLINK_JUMBO_H_
#define GPU_IPC_COMMON_GPU_PREFERENCES_MOJOM_BLINK_JUMBO_H_
#endif
namespace gpu {
namespace mojom {
namespace blink {
GpuPreferences::GpuPreferences()
    : disable_accelerated_video_decode(),
      disable_accelerated_video_encode(),
      gpu_startup_dialog(),
      disable_gpu_watchdog(),
      gpu_sandbox_start_early(),
      enable_accelerated_vpx_decode(),
      enable_low_latency_dxva(),
      enable_zero_copy_dxgi_video(),
      enable_nv12_dxgi_video(),
      enable_media_foundation_vea_on_windows7(),
      disable_software_rasterizer(),
      log_gpu_control_list_decisions(),
      compile_shader_always_succeeds(),
      disable_gl_error_limit(),
      disable_glsl_translator(),
      disable_shader_name_hashing(),
      enable_gpu_command_logging(),
      enable_gpu_debugging(),
      enable_gpu_service_logging_gpu(),
      enable_gpu_driver_debug_logging(),
      disable_gpu_program_cache(),
      enforce_gl_minimums(),
      force_gpu_mem_available(),
      gpu_program_cache_size(),
      disable_gpu_shader_disk_cache(),
      enable_threaded_texture_mailboxes(),
      gl_shader_interm_output(),
      emulate_shader_precision(),
      max_active_webgl_contexts(),
      enable_android_surface_control(),
      enable_gpu_service_logging(),
      enable_gpu_service_tracing(),
      use_passthrough_cmd_decoder(),
      disable_biplanar_gpu_memory_buffers_for_video_frames(),
      texture_target_exception_list(),
      disable_gpu_driver_bug_workarounds(),
      ignore_gpu_blacklist(),
      enable_oop_rasterization(),
      disable_oop_rasterization(),
      enable_oop_rasterization_ddl(),
      watchdog_starts_backgrounded(),
      enable_vulkan(),
      disable_vulkan_surface(),
      disable_vulkan_fallback_to_gl_for_testing(),
      enable_metal(),
      enable_gpu_benchmarking_extension(),
      enable_webgpu() {}

GpuPreferences::GpuPreferences(
    bool disable_accelerated_video_decode_in,
    bool disable_accelerated_video_encode_in,
    bool gpu_startup_dialog_in,
    bool disable_gpu_watchdog_in,
    bool gpu_sandbox_start_early_in,
    VpxDecodeVendors enable_accelerated_vpx_decode_in,
    bool enable_low_latency_dxva_in,
    bool enable_zero_copy_dxgi_video_in,
    bool enable_nv12_dxgi_video_in,
    bool enable_media_foundation_vea_on_windows7_in,
    bool disable_software_rasterizer_in,
    bool log_gpu_control_list_decisions_in,
    bool compile_shader_always_succeeds_in,
    bool disable_gl_error_limit_in,
    bool disable_glsl_translator_in,
    bool disable_shader_name_hashing_in,
    bool enable_gpu_command_logging_in,
    bool enable_gpu_debugging_in,
    bool enable_gpu_service_logging_gpu_in,
    bool enable_gpu_driver_debug_logging_in,
    bool disable_gpu_program_cache_in,
    bool enforce_gl_minimums_in,
    uint32_t force_gpu_mem_available_in,
    uint32_t gpu_program_cache_size_in,
    bool disable_gpu_shader_disk_cache_in,
    bool enable_threaded_texture_mailboxes_in,
    bool gl_shader_interm_output_in,
    bool emulate_shader_precision_in,
    uint32_t max_active_webgl_contexts_in,
    bool enable_android_surface_control_in,
    bool enable_gpu_service_logging_in,
    bool enable_gpu_service_tracing_in,
    bool use_passthrough_cmd_decoder_in,
    bool disable_biplanar_gpu_memory_buffers_for_video_frames_in,
    WTF::Vector<::gfx::mojom::blink::BufferUsageAndFormatPtr> texture_target_exception_list_in,
    bool disable_gpu_driver_bug_workarounds_in,
    bool ignore_gpu_blacklist_in,
    bool enable_oop_rasterization_in,
    bool disable_oop_rasterization_in,
    bool enable_oop_rasterization_ddl_in,
    bool watchdog_starts_backgrounded_in,
    bool enable_vulkan_in,
    bool disable_vulkan_surface_in,
    bool disable_vulkan_fallback_to_gl_for_testing_in,
    bool enable_metal_in,
    bool enable_gpu_benchmarking_extension_in,
    bool enable_webgpu_in)
    : disable_accelerated_video_decode(std::move(disable_accelerated_video_decode_in)),
      disable_accelerated_video_encode(std::move(disable_accelerated_video_encode_in)),
      gpu_startup_dialog(std::move(gpu_startup_dialog_in)),
      disable_gpu_watchdog(std::move(disable_gpu_watchdog_in)),
      gpu_sandbox_start_early(std::move(gpu_sandbox_start_early_in)),
      enable_accelerated_vpx_decode(std::move(enable_accelerated_vpx_decode_in)),
      enable_low_latency_dxva(std::move(enable_low_latency_dxva_in)),
      enable_zero_copy_dxgi_video(std::move(enable_zero_copy_dxgi_video_in)),
      enable_nv12_dxgi_video(std::move(enable_nv12_dxgi_video_in)),
      enable_media_foundation_vea_on_windows7(std::move(enable_media_foundation_vea_on_windows7_in)),
      disable_software_rasterizer(std::move(disable_software_rasterizer_in)),
      log_gpu_control_list_decisions(std::move(log_gpu_control_list_decisions_in)),
      compile_shader_always_succeeds(std::move(compile_shader_always_succeeds_in)),
      disable_gl_error_limit(std::move(disable_gl_error_limit_in)),
      disable_glsl_translator(std::move(disable_glsl_translator_in)),
      disable_shader_name_hashing(std::move(disable_shader_name_hashing_in)),
      enable_gpu_command_logging(std::move(enable_gpu_command_logging_in)),
      enable_gpu_debugging(std::move(enable_gpu_debugging_in)),
      enable_gpu_service_logging_gpu(std::move(enable_gpu_service_logging_gpu_in)),
      enable_gpu_driver_debug_logging(std::move(enable_gpu_driver_debug_logging_in)),
      disable_gpu_program_cache(std::move(disable_gpu_program_cache_in)),
      enforce_gl_minimums(std::move(enforce_gl_minimums_in)),
      force_gpu_mem_available(std::move(force_gpu_mem_available_in)),
      gpu_program_cache_size(std::move(gpu_program_cache_size_in)),
      disable_gpu_shader_disk_cache(std::move(disable_gpu_shader_disk_cache_in)),
      enable_threaded_texture_mailboxes(std::move(enable_threaded_texture_mailboxes_in)),
      gl_shader_interm_output(std::move(gl_shader_interm_output_in)),
      emulate_shader_precision(std::move(emulate_shader_precision_in)),
      max_active_webgl_contexts(std::move(max_active_webgl_contexts_in)),
      enable_android_surface_control(std::move(enable_android_surface_control_in)),
      enable_gpu_service_logging(std::move(enable_gpu_service_logging_in)),
      enable_gpu_service_tracing(std::move(enable_gpu_service_tracing_in)),
      use_passthrough_cmd_decoder(std::move(use_passthrough_cmd_decoder_in)),
      disable_biplanar_gpu_memory_buffers_for_video_frames(std::move(disable_biplanar_gpu_memory_buffers_for_video_frames_in)),
      texture_target_exception_list(std::move(texture_target_exception_list_in)),
      disable_gpu_driver_bug_workarounds(std::move(disable_gpu_driver_bug_workarounds_in)),
      ignore_gpu_blacklist(std::move(ignore_gpu_blacklist_in)),
      enable_oop_rasterization(std::move(enable_oop_rasterization_in)),
      disable_oop_rasterization(std::move(disable_oop_rasterization_in)),
      enable_oop_rasterization_ddl(std::move(enable_oop_rasterization_ddl_in)),
      watchdog_starts_backgrounded(std::move(watchdog_starts_backgrounded_in)),
      enable_vulkan(std::move(enable_vulkan_in)),
      disable_vulkan_surface(std::move(disable_vulkan_surface_in)),
      disable_vulkan_fallback_to_gl_for_testing(std::move(disable_vulkan_fallback_to_gl_for_testing_in)),
      enable_metal(std::move(enable_metal_in)),
      enable_gpu_benchmarking_extension(std::move(enable_gpu_benchmarking_extension_in)),
      enable_webgpu(std::move(enable_webgpu_in)) {}

GpuPreferences::~GpuPreferences() = default;

bool GpuPreferences::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace blink
}  // namespace mojom
}  // namespace gpu

namespace mojo {


// static
bool StructTraits<::gpu::mojom::blink::GpuPreferences::DataView, ::gpu::mojom::blink::GpuPreferencesPtr>::Read(
    ::gpu::mojom::blink::GpuPreferences::DataView input,
    ::gpu::mojom::blink::GpuPreferencesPtr* output) {
  bool success = true;
  ::gpu::mojom::blink::GpuPreferencesPtr result(::gpu::mojom::blink::GpuPreferences::New());
  
      result->disable_accelerated_video_decode = input.disable_accelerated_video_decode();
      result->disable_accelerated_video_encode = input.disable_accelerated_video_encode();
      result->gpu_startup_dialog = input.gpu_startup_dialog();
      result->disable_gpu_watchdog = input.disable_gpu_watchdog();
      result->gpu_sandbox_start_early = input.gpu_sandbox_start_early();
      if (!input.ReadEnableAcceleratedVpxDecode(&result->enable_accelerated_vpx_decode))
        success = false;
      result->enable_low_latency_dxva = input.enable_low_latency_dxva();
      result->enable_zero_copy_dxgi_video = input.enable_zero_copy_dxgi_video();
      result->enable_nv12_dxgi_video = input.enable_nv12_dxgi_video();
      result->enable_media_foundation_vea_on_windows7 = input.enable_media_foundation_vea_on_windows7();
      result->disable_software_rasterizer = input.disable_software_rasterizer();
      result->log_gpu_control_list_decisions = input.log_gpu_control_list_decisions();
      result->compile_shader_always_succeeds = input.compile_shader_always_succeeds();
      result->disable_gl_error_limit = input.disable_gl_error_limit();
      result->disable_glsl_translator = input.disable_glsl_translator();
      result->disable_shader_name_hashing = input.disable_shader_name_hashing();
      result->enable_gpu_command_logging = input.enable_gpu_command_logging();
      result->enable_gpu_debugging = input.enable_gpu_debugging();
      result->enable_gpu_service_logging_gpu = input.enable_gpu_service_logging_gpu();
      result->enable_gpu_driver_debug_logging = input.enable_gpu_driver_debug_logging();
      result->disable_gpu_program_cache = input.disable_gpu_program_cache();
      result->enforce_gl_minimums = input.enforce_gl_minimums();
      result->force_gpu_mem_available = input.force_gpu_mem_available();
      result->gpu_program_cache_size = input.gpu_program_cache_size();
      result->disable_gpu_shader_disk_cache = input.disable_gpu_shader_disk_cache();
      result->enable_threaded_texture_mailboxes = input.enable_threaded_texture_mailboxes();
      result->gl_shader_interm_output = input.gl_shader_interm_output();
      result->emulate_shader_precision = input.emulate_shader_precision();
      result->max_active_webgl_contexts = input.max_active_webgl_contexts();
      result->enable_android_surface_control = input.enable_android_surface_control();
      result->enable_gpu_service_logging = input.enable_gpu_service_logging();
      result->enable_gpu_service_tracing = input.enable_gpu_service_tracing();
      result->use_passthrough_cmd_decoder = input.use_passthrough_cmd_decoder();
      result->disable_biplanar_gpu_memory_buffers_for_video_frames = input.disable_biplanar_gpu_memory_buffers_for_video_frames();
      if (!input.ReadTextureTargetExceptionList(&result->texture_target_exception_list))
        success = false;
      result->disable_gpu_driver_bug_workarounds = input.disable_gpu_driver_bug_workarounds();
      result->ignore_gpu_blacklist = input.ignore_gpu_blacklist();
      result->enable_oop_rasterization = input.enable_oop_rasterization();
      result->disable_oop_rasterization = input.disable_oop_rasterization();
      result->enable_oop_rasterization_ddl = input.enable_oop_rasterization_ddl();
      result->watchdog_starts_backgrounded = input.watchdog_starts_backgrounded();
      result->enable_vulkan = input.enable_vulkan();
      result->disable_vulkan_surface = input.disable_vulkan_surface();
      result->disable_vulkan_fallback_to_gl_for_testing = input.disable_vulkan_fallback_to_gl_for_testing();
      result->enable_metal = input.enable_metal();
      result->enable_gpu_benchmarking_extension = input.enable_gpu_benchmarking_extension();
      result->enable_webgpu = input.enable_webgpu();
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif