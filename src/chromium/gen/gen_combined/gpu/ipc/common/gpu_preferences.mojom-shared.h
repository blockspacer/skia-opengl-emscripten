// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef GPU_IPC_COMMON_GPU_PREFERENCES_MOJOM_SHARED_H_
#define GPU_IPC_COMMON_GPU_PREFERENCES_MOJOM_SHARED_H_

#include <stdint.h>

#include <functional>
#include <ostream>
#include <type_traits>
#include <utility>

#include "base/compiler_specific.h"
#include "base/containers/flat_map.h"
#include "mojo/public/cpp/bindings/array_data_view.h"
#include "mojo/public/cpp/bindings/enum_traits.h"
#include "mojo/public/cpp/bindings/interface_data_view.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/serialization.h"
#include "mojo/public/cpp/bindings/map_data_view.h"
#include "mojo/public/cpp/bindings/string_data_view.h"
#include "gpu/ipc/common/gpu_preferences.mojom-shared-internal.h"
#include "ui/gfx/mojo/buffer_types.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace gpu {
namespace mojom {
class GpuPreferencesDataView;



}  // namespace mojom
}  // namespace gpu

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::gpu::mojom::GpuPreferencesDataView> {
  using Data = ::gpu::mojom::internal::GpuPreferences_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace gpu {
namespace mojom {


enum class VpxDecodeVendors : int32_t {
  
  VPX_VENDOR_NONE = 0,
  
  VPX_VENDOR_MICROSOFT = 1,
  
  VPX_VENDOR_AMD = 2,
  
  VPX_VENDOR_ALL = 3,
  kMinValue = 0,
  kMaxValue = 3,
};

 std::ostream& operator<<(std::ostream& os, VpxDecodeVendors value);
inline bool IsKnownEnumValue(VpxDecodeVendors value) {
  return internal::VpxDecodeVendors_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
class GpuPreferencesDataView {
 public:
  GpuPreferencesDataView() {}

  GpuPreferencesDataView(
      internal::GpuPreferences_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  bool disable_accelerated_video_decode() const {
    return data_->disable_accelerated_video_decode;
  }
  bool disable_accelerated_video_encode() const {
    return data_->disable_accelerated_video_encode;
  }
  bool gpu_startup_dialog() const {
    return data_->gpu_startup_dialog;
  }
  bool disable_gpu_watchdog() const {
    return data_->disable_gpu_watchdog;
  }
  bool gpu_sandbox_start_early() const {
    return data_->gpu_sandbox_start_early;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadEnableAcceleratedVpxDecode(UserType* output) const {
    auto data_value = data_->enable_accelerated_vpx_decode;
    return mojo::internal::Deserialize<::gpu::mojom::VpxDecodeVendors>(
        data_value, output);
  }

  VpxDecodeVendors enable_accelerated_vpx_decode() const {
    return static_cast<VpxDecodeVendors>(data_->enable_accelerated_vpx_decode);
  }
  bool enable_low_latency_dxva() const {
    return data_->enable_low_latency_dxva;
  }
  bool enable_zero_copy_dxgi_video() const {
    return data_->enable_zero_copy_dxgi_video;
  }
  bool enable_nv12_dxgi_video() const {
    return data_->enable_nv12_dxgi_video;
  }
  bool enable_media_foundation_vea_on_windows7() const {
    return data_->enable_media_foundation_vea_on_windows7;
  }
  bool disable_software_rasterizer() const {
    return data_->disable_software_rasterizer;
  }
  bool log_gpu_control_list_decisions() const {
    return data_->log_gpu_control_list_decisions;
  }
  bool compile_shader_always_succeeds() const {
    return data_->compile_shader_always_succeeds;
  }
  bool disable_gl_error_limit() const {
    return data_->disable_gl_error_limit;
  }
  bool disable_glsl_translator() const {
    return data_->disable_glsl_translator;
  }
  bool disable_shader_name_hashing() const {
    return data_->disable_shader_name_hashing;
  }
  bool enable_gpu_command_logging() const {
    return data_->enable_gpu_command_logging;
  }
  bool enable_gpu_debugging() const {
    return data_->enable_gpu_debugging;
  }
  bool enable_gpu_service_logging_gpu() const {
    return data_->enable_gpu_service_logging_gpu;
  }
  bool enable_gpu_driver_debug_logging() const {
    return data_->enable_gpu_driver_debug_logging;
  }
  bool disable_gpu_program_cache() const {
    return data_->disable_gpu_program_cache;
  }
  bool enforce_gl_minimums() const {
    return data_->enforce_gl_minimums;
  }
  uint32_t force_gpu_mem_available() const {
    return data_->force_gpu_mem_available;
  }
  uint32_t gpu_program_cache_size() const {
    return data_->gpu_program_cache_size;
  }
  bool disable_gpu_shader_disk_cache() const {
    return data_->disable_gpu_shader_disk_cache;
  }
  bool enable_threaded_texture_mailboxes() const {
    return data_->enable_threaded_texture_mailboxes;
  }
  bool gl_shader_interm_output() const {
    return data_->gl_shader_interm_output;
  }
  bool emulate_shader_precision() const {
    return data_->emulate_shader_precision;
  }
  uint32_t max_active_webgl_contexts() const {
    return data_->max_active_webgl_contexts;
  }
  bool enable_android_surface_control() const {
    return data_->enable_android_surface_control;
  }
  bool enable_gpu_service_logging() const {
    return data_->enable_gpu_service_logging;
  }
  bool enable_gpu_service_tracing() const {
    return data_->enable_gpu_service_tracing;
  }
  bool use_passthrough_cmd_decoder() const {
    return data_->use_passthrough_cmd_decoder;
  }
  bool disable_biplanar_gpu_memory_buffers_for_video_frames() const {
    return data_->disable_biplanar_gpu_memory_buffers_for_video_frames;
  }
  inline void GetTextureTargetExceptionListDataView(
      mojo::ArrayDataView<::gfx::mojom::BufferUsageAndFormatDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTextureTargetExceptionList(UserType* output) {
    auto* pointer = data_->texture_target_exception_list.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::gfx::mojom::BufferUsageAndFormatDataView>>(
        pointer, output, context_);
  }
  bool disable_gpu_driver_bug_workarounds() const {
    return data_->disable_gpu_driver_bug_workarounds;
  }
  bool ignore_gpu_blacklist() const {
    return data_->ignore_gpu_blacklist;
  }
  bool enable_oop_rasterization() const {
    return data_->enable_oop_rasterization;
  }
  bool disable_oop_rasterization() const {
    return data_->disable_oop_rasterization;
  }
  bool enable_oop_rasterization_ddl() const {
    return data_->enable_oop_rasterization_ddl;
  }
  bool watchdog_starts_backgrounded() const {
    return data_->watchdog_starts_backgrounded;
  }
  bool enable_vulkan() const {
    return data_->enable_vulkan;
  }
  bool disable_vulkan_surface() const {
    return data_->disable_vulkan_surface;
  }
  bool disable_vulkan_fallback_to_gl_for_testing() const {
    return data_->disable_vulkan_fallback_to_gl_for_testing;
  }
  bool enable_metal() const {
    return data_->enable_metal;
  }
  bool enable_gpu_benchmarking_extension() const {
    return data_->enable_gpu_benchmarking_extension;
  }
  bool enable_webgpu() const {
    return data_->enable_webgpu;
  }
 private:
  internal::GpuPreferences_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace gpu

namespace std {

template <>
struct hash<::gpu::mojom::VpxDecodeVendors>
    : public mojo::internal::EnumHashImpl<::gpu::mojom::VpxDecodeVendors> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::gpu::mojom::VpxDecodeVendors, ::gpu::mojom::VpxDecodeVendors> {
  static ::gpu::mojom::VpxDecodeVendors ToMojom(::gpu::mojom::VpxDecodeVendors input) { return input; }
  static bool FromMojom(::gpu::mojom::VpxDecodeVendors input, ::gpu::mojom::VpxDecodeVendors* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::gpu::mojom::VpxDecodeVendors, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::gpu::mojom::VpxDecodeVendors, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::gpu::mojom::VpxDecodeVendors>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::gpu::mojom::GpuPreferencesDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::gpu::mojom::GpuPreferencesDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::gpu::mojom::internal::GpuPreferences_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->disable_accelerated_video_decode = Traits::disable_accelerated_video_decode(input);
    (*output)->disable_accelerated_video_encode = Traits::disable_accelerated_video_encode(input);
    (*output)->gpu_startup_dialog = Traits::gpu_startup_dialog(input);
    (*output)->disable_gpu_watchdog = Traits::disable_gpu_watchdog(input);
    (*output)->gpu_sandbox_start_early = Traits::gpu_sandbox_start_early(input);
    mojo::internal::Serialize<::gpu::mojom::VpxDecodeVendors>(
        Traits::enable_accelerated_vpx_decode(input), &(*output)->enable_accelerated_vpx_decode);
    (*output)->enable_low_latency_dxva = Traits::enable_low_latency_dxva(input);
    (*output)->enable_zero_copy_dxgi_video = Traits::enable_zero_copy_dxgi_video(input);
    (*output)->enable_nv12_dxgi_video = Traits::enable_nv12_dxgi_video(input);
    (*output)->enable_media_foundation_vea_on_windows7 = Traits::enable_media_foundation_vea_on_windows7(input);
    (*output)->disable_software_rasterizer = Traits::disable_software_rasterizer(input);
    (*output)->log_gpu_control_list_decisions = Traits::log_gpu_control_list_decisions(input);
    (*output)->compile_shader_always_succeeds = Traits::compile_shader_always_succeeds(input);
    (*output)->disable_gl_error_limit = Traits::disable_gl_error_limit(input);
    (*output)->disable_glsl_translator = Traits::disable_glsl_translator(input);
    (*output)->disable_shader_name_hashing = Traits::disable_shader_name_hashing(input);
    (*output)->enable_gpu_command_logging = Traits::enable_gpu_command_logging(input);
    (*output)->enable_gpu_debugging = Traits::enable_gpu_debugging(input);
    (*output)->enable_gpu_service_logging_gpu = Traits::enable_gpu_service_logging_gpu(input);
    (*output)->enable_gpu_driver_debug_logging = Traits::enable_gpu_driver_debug_logging(input);
    (*output)->disable_gpu_program_cache = Traits::disable_gpu_program_cache(input);
    (*output)->enforce_gl_minimums = Traits::enforce_gl_minimums(input);
    (*output)->force_gpu_mem_available = Traits::force_gpu_mem_available(input);
    (*output)->gpu_program_cache_size = Traits::gpu_program_cache_size(input);
    (*output)->disable_gpu_shader_disk_cache = Traits::disable_gpu_shader_disk_cache(input);
    (*output)->enable_threaded_texture_mailboxes = Traits::enable_threaded_texture_mailboxes(input);
    (*output)->gl_shader_interm_output = Traits::gl_shader_interm_output(input);
    (*output)->emulate_shader_precision = Traits::emulate_shader_precision(input);
    (*output)->max_active_webgl_contexts = Traits::max_active_webgl_contexts(input);
    (*output)->enable_android_surface_control = Traits::enable_android_surface_control(input);
    (*output)->enable_gpu_service_logging = Traits::enable_gpu_service_logging(input);
    (*output)->enable_gpu_service_tracing = Traits::enable_gpu_service_tracing(input);
    (*output)->use_passthrough_cmd_decoder = Traits::use_passthrough_cmd_decoder(input);
    (*output)->disable_biplanar_gpu_memory_buffers_for_video_frames = Traits::disable_biplanar_gpu_memory_buffers_for_video_frames(input);
    decltype(Traits::texture_target_exception_list(input)) in_texture_target_exception_list = Traits::texture_target_exception_list(input);
    typename decltype((*output)->texture_target_exception_list)::BaseType::BufferWriter
        texture_target_exception_list_writer;
    const mojo::internal::ContainerValidateParams texture_target_exception_list_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::gfx::mojom::BufferUsageAndFormatDataView>>(
        in_texture_target_exception_list, buffer, &texture_target_exception_list_writer, &texture_target_exception_list_validate_params,
        context);
    (*output)->texture_target_exception_list.Set(
        texture_target_exception_list_writer.is_null() ? nullptr : texture_target_exception_list_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->texture_target_exception_list.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null texture_target_exception_list in GpuPreferences struct");
    (*output)->disable_gpu_driver_bug_workarounds = Traits::disable_gpu_driver_bug_workarounds(input);
    (*output)->ignore_gpu_blacklist = Traits::ignore_gpu_blacklist(input);
    (*output)->enable_oop_rasterization = Traits::enable_oop_rasterization(input);
    (*output)->disable_oop_rasterization = Traits::disable_oop_rasterization(input);
    (*output)->enable_oop_rasterization_ddl = Traits::enable_oop_rasterization_ddl(input);
    (*output)->watchdog_starts_backgrounded = Traits::watchdog_starts_backgrounded(input);
    (*output)->enable_vulkan = Traits::enable_vulkan(input);
    (*output)->disable_vulkan_surface = Traits::disable_vulkan_surface(input);
    (*output)->disable_vulkan_fallback_to_gl_for_testing = Traits::disable_vulkan_fallback_to_gl_for_testing(input);
    (*output)->enable_metal = Traits::enable_metal(input);
    (*output)->enable_gpu_benchmarking_extension = Traits::enable_gpu_benchmarking_extension(input);
    (*output)->enable_webgpu = Traits::enable_webgpu(input);
  }

  static bool Deserialize(::gpu::mojom::internal::GpuPreferences_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::gpu::mojom::GpuPreferencesDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace gpu {
namespace mojom {

inline void GpuPreferencesDataView::GetTextureTargetExceptionListDataView(
    mojo::ArrayDataView<::gfx::mojom::BufferUsageAndFormatDataView>* output) {
  auto pointer = data_->texture_target_exception_list.Get();
  *output = mojo::ArrayDataView<::gfx::mojom::BufferUsageAndFormatDataView>(pointer, context_);
}



}  // namespace mojom
}  // namespace gpu

#endif  // GPU_IPC_COMMON_GPU_PREFERENCES_MOJOM_SHARED_H_