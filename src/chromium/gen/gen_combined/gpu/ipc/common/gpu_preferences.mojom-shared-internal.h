// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef GPU_IPC_COMMON_GPU_PREFERENCES_MOJOM_SHARED_INTERNAL_H_
#define GPU_IPC_COMMON_GPU_PREFERENCES_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "ui/gfx/mojo/buffer_types.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"



namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace gpu {
namespace mojom {
namespace internal {
class GpuPreferences_Data;

struct VpxDecodeVendors_Data {
 public:
  static bool constexpr kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
      case 2:
      case 3:
        return true;
    }
    return false;
  }

  static bool Validate(int32_t value,
                       mojo::internal::ValidationContext* validation_context) {
    if (kIsExtensible || IsKnownValue(value))
      return true;

    ReportValidationError(validation_context,
                          mojo::internal::VALIDATION_ERROR_UNKNOWN_ENUM_VALUE);
    return false;
  }
};

#pragma pack(push, 1)
class  GpuPreferences_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(GpuPreferences_Data));
      new (data()) GpuPreferences_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    GpuPreferences_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<GpuPreferences_Data>(index_);
    }
    GpuPreferences_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t disable_accelerated_video_decode : 1;
  uint8_t disable_accelerated_video_encode : 1;
  uint8_t gpu_startup_dialog : 1;
  uint8_t disable_gpu_watchdog : 1;
  uint8_t gpu_sandbox_start_early : 1;
  uint8_t enable_low_latency_dxva : 1;
  uint8_t enable_zero_copy_dxgi_video : 1;
  uint8_t enable_nv12_dxgi_video : 1;
  uint8_t enable_media_foundation_vea_on_windows7 : 1;
  uint8_t disable_software_rasterizer : 1;
  uint8_t log_gpu_control_list_decisions : 1;
  uint8_t compile_shader_always_succeeds : 1;
  uint8_t disable_gl_error_limit : 1;
  uint8_t disable_glsl_translator : 1;
  uint8_t disable_shader_name_hashing : 1;
  uint8_t enable_gpu_command_logging : 1;
  uint8_t enable_gpu_debugging : 1;
  uint8_t enable_gpu_service_logging_gpu : 1;
  uint8_t enable_gpu_driver_debug_logging : 1;
  uint8_t disable_gpu_program_cache : 1;
  uint8_t enforce_gl_minimums : 1;
  uint8_t disable_gpu_shader_disk_cache : 1;
  uint8_t enable_threaded_texture_mailboxes : 1;
  uint8_t gl_shader_interm_output : 1;
  uint8_t emulate_shader_precision : 1;
  uint8_t enable_android_surface_control : 1;
  uint8_t enable_gpu_service_logging : 1;
  uint8_t enable_gpu_service_tracing : 1;
  uint8_t use_passthrough_cmd_decoder : 1;
  uint8_t disable_biplanar_gpu_memory_buffers_for_video_frames : 1;
  uint8_t disable_gpu_driver_bug_workarounds : 1;
  uint8_t ignore_gpu_blacklist : 1;
  int32_t enable_accelerated_vpx_decode;
  uint32_t force_gpu_mem_available;
  uint32_t gpu_program_cache_size;
  uint32_t max_active_webgl_contexts;
  uint8_t enable_oop_rasterization : 1;
  uint8_t disable_oop_rasterization : 1;
  uint8_t enable_oop_rasterization_ddl : 1;
  uint8_t watchdog_starts_backgrounded : 1;
  uint8_t enable_vulkan : 1;
  uint8_t disable_vulkan_surface : 1;
  uint8_t disable_vulkan_fallback_to_gl_for_testing : 1;
  uint8_t enable_metal : 1;
  uint8_t enable_gpu_benchmarking_extension : 1;
  uint8_t enable_webgpu : 1;
  uint8_t pad45_[2];
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::gfx::mojom::internal::BufferUsageAndFormat_Data>>> texture_target_exception_list;

 private:
  GpuPreferences_Data();
  ~GpuPreferences_Data() = delete;
};
static_assert(sizeof(GpuPreferences_Data) == 40,
              "Bad sizeof(GpuPreferences_Data)");
// Used by GpuPreferences::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct GpuPreferences_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  GpuPreferences_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~GpuPreferences_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    GpuPreferences_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    GpuPreferences_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace gpu

#endif  // GPU_IPC_COMMON_GPU_PREFERENCES_MOJOM_SHARED_INTERNAL_H_