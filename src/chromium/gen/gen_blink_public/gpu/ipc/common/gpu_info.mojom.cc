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

#include "gpu/ipc/common/gpu_info.mojom.h"

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

#include "gpu/ipc/common/gpu_info.mojom-params-data.h"
#include "gpu/ipc/common/gpu_info.mojom-shared-message-ids.h"

#include "gpu/ipc/common/gpu_info.mojom-import-headers.h"


#ifndef GPU_IPC_COMMON_GPU_INFO_MOJOM_JUMBO_H_
#define GPU_IPC_COMMON_GPU_INFO_MOJOM_JUMBO_H_
#include "gpu/ipc/common/gpu_info_struct_traits.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
#endif
namespace gpu {
namespace mojom {
GpuDevice::GpuDevice()
    : vendor_id(),
      device_id(),
      active(),
      vendor_string(),
      device_string(),
      driver_vendor(),
      driver_version(),
      driver_date(),
      cuda_compute_capability_major() {}

GpuDevice::GpuDevice(
    uint32_t vendor_id_in,
    uint32_t device_id_in,
    bool active_in,
    const std::string& vendor_string_in,
    const std::string& device_string_in,
    const std::string& driver_vendor_in,
    const std::string& driver_version_in,
    const std::string& driver_date_in,
    int32_t cuda_compute_capability_major_in)
    : vendor_id(std::move(vendor_id_in)),
      device_id(std::move(device_id_in)),
      active(std::move(active_in)),
      vendor_string(std::move(vendor_string_in)),
      device_string(std::move(device_string_in)),
      driver_vendor(std::move(driver_vendor_in)),
      driver_version(std::move(driver_version_in)),
      driver_date(std::move(driver_date_in)),
      cuda_compute_capability_major(std::move(cuda_compute_capability_major_in)) {}

GpuDevice::~GpuDevice() = default;

bool GpuDevice::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
VideoDecodeAcceleratorSupportedProfile::VideoDecodeAcceleratorSupportedProfile()
    : profile(),
      max_resolution(),
      min_resolution(),
      encrypted_only() {}

VideoDecodeAcceleratorSupportedProfile::VideoDecodeAcceleratorSupportedProfile(
    gpu::VideoCodecProfile profile_in,
    const gfx::Size& max_resolution_in,
    const gfx::Size& min_resolution_in,
    bool encrypted_only_in)
    : profile(std::move(profile_in)),
      max_resolution(std::move(max_resolution_in)),
      min_resolution(std::move(min_resolution_in)),
      encrypted_only(std::move(encrypted_only_in)) {}

VideoDecodeAcceleratorSupportedProfile::~VideoDecodeAcceleratorSupportedProfile() = default;

bool VideoDecodeAcceleratorSupportedProfile::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
VideoDecodeAcceleratorCapabilities::VideoDecodeAcceleratorCapabilities()
    : supported_profiles(),
      flags() {}

VideoDecodeAcceleratorCapabilities::VideoDecodeAcceleratorCapabilities(
    const std::vector<gpu::VideoDecodeAcceleratorSupportedProfile>& supported_profiles_in,
    uint32_t flags_in)
    : supported_profiles(std::move(supported_profiles_in)),
      flags(std::move(flags_in)) {}

VideoDecodeAcceleratorCapabilities::~VideoDecodeAcceleratorCapabilities() = default;

bool VideoDecodeAcceleratorCapabilities::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
VideoEncodeAcceleratorSupportedProfile::VideoEncodeAcceleratorSupportedProfile()
    : profile(),
      max_resolution(),
      max_framerate_numerator(),
      max_framerate_denominator() {}

VideoEncodeAcceleratorSupportedProfile::VideoEncodeAcceleratorSupportedProfile(
    gpu::VideoCodecProfile profile_in,
    const gfx::Size& max_resolution_in,
    uint32_t max_framerate_numerator_in,
    uint32_t max_framerate_denominator_in)
    : profile(std::move(profile_in)),
      max_resolution(std::move(max_resolution_in)),
      max_framerate_numerator(std::move(max_framerate_numerator_in)),
      max_framerate_denominator(std::move(max_framerate_denominator_in)) {}

VideoEncodeAcceleratorSupportedProfile::~VideoEncodeAcceleratorSupportedProfile() = default;

bool VideoEncodeAcceleratorSupportedProfile::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
ImageDecodeAcceleratorSupportedProfile::ImageDecodeAcceleratorSupportedProfile()
    : image_type(),
      min_encoded_dimensions(),
      max_encoded_dimensions(),
      subsamplings() {}

ImageDecodeAcceleratorSupportedProfile::ImageDecodeAcceleratorSupportedProfile(
    ImageDecodeAcceleratorType image_type_in,
    const gfx::Size& min_encoded_dimensions_in,
    const gfx::Size& max_encoded_dimensions_in,
    const std::vector<ImageDecodeAcceleratorSubsampling>& subsamplings_in)
    : image_type(std::move(image_type_in)),
      min_encoded_dimensions(std::move(min_encoded_dimensions_in)),
      max_encoded_dimensions(std::move(max_encoded_dimensions_in)),
      subsamplings(std::move(subsamplings_in)) {}

ImageDecodeAcceleratorSupportedProfile::~ImageDecodeAcceleratorSupportedProfile() = default;

bool ImageDecodeAcceleratorSupportedProfile::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
GpuInfo::GpuInfo()
    : initialization_time(),
      optimus(),
      amd_switchable(),
      gpu(),
      secondary_gpus(),
      pixel_shader_version(),
      vertex_shader_version(),
      max_msaa_samples(),
      machine_model_name(),
      machine_model_version(),
      gl_version(),
      gl_vendor(),
      gl_renderer(),
      gl_extensions(),
      gl_ws_vendor(),
      gl_ws_version(),
      gl_ws_extensions(),
      gl_reset_notification_strategy(),
      software_rendering(),
      direct_rendering_version(),
      sandboxed(),
      in_process_gpu(),
      passthrough_cmd_decoder(),
      can_support_threaded_texture_mailbox(),
      video_decode_accelerator_capabilities(),
      video_encode_accelerator_supported_profiles(),
      jpeg_decode_accelerator_supported(),
      image_decode_accelerator_supported_profiles(),
      system_visual(),
      rgba_visual(),
      oop_rasterization_supported() {}

GpuInfo::GpuInfo(
    base::TimeDelta initialization_time_in,
    bool optimus_in,
    bool amd_switchable_in,
    const gpu::GPUInfo::GPUDevice& gpu_in,
    const std::vector<gpu::GPUInfo::GPUDevice>& secondary_gpus_in,
    const std::string& pixel_shader_version_in,
    const std::string& vertex_shader_version_in,
    const std::string& max_msaa_samples_in,
    const std::string& machine_model_name_in,
    const std::string& machine_model_version_in,
    const std::string& gl_version_in,
    const std::string& gl_vendor_in,
    const std::string& gl_renderer_in,
    const std::string& gl_extensions_in,
    const std::string& gl_ws_vendor_in,
    const std::string& gl_ws_version_in,
    const std::string& gl_ws_extensions_in,
    uint32_t gl_reset_notification_strategy_in,
    bool software_rendering_in,
    const std::string& direct_rendering_version_in,
    bool sandboxed_in,
    bool in_process_gpu_in,
    bool passthrough_cmd_decoder_in,
    bool can_support_threaded_texture_mailbox_in,
    const gpu::VideoDecodeAcceleratorCapabilities& video_decode_accelerator_capabilities_in,
    const std::vector<gpu::VideoEncodeAcceleratorSupportedProfile>& video_encode_accelerator_supported_profiles_in,
    bool jpeg_decode_accelerator_supported_in,
    const std::vector<gpu::ImageDecodeAcceleratorSupportedProfile>& image_decode_accelerator_supported_profiles_in,
    uint64_t system_visual_in,
    uint64_t rgba_visual_in,
    bool oop_rasterization_supported_in)
    : initialization_time(std::move(initialization_time_in)),
      optimus(std::move(optimus_in)),
      amd_switchable(std::move(amd_switchable_in)),
      gpu(std::move(gpu_in)),
      secondary_gpus(std::move(secondary_gpus_in)),
      pixel_shader_version(std::move(pixel_shader_version_in)),
      vertex_shader_version(std::move(vertex_shader_version_in)),
      max_msaa_samples(std::move(max_msaa_samples_in)),
      machine_model_name(std::move(machine_model_name_in)),
      machine_model_version(std::move(machine_model_version_in)),
      gl_version(std::move(gl_version_in)),
      gl_vendor(std::move(gl_vendor_in)),
      gl_renderer(std::move(gl_renderer_in)),
      gl_extensions(std::move(gl_extensions_in)),
      gl_ws_vendor(std::move(gl_ws_vendor_in)),
      gl_ws_version(std::move(gl_ws_version_in)),
      gl_ws_extensions(std::move(gl_ws_extensions_in)),
      gl_reset_notification_strategy(std::move(gl_reset_notification_strategy_in)),
      software_rendering(std::move(software_rendering_in)),
      direct_rendering_version(std::move(direct_rendering_version_in)),
      sandboxed(std::move(sandboxed_in)),
      in_process_gpu(std::move(in_process_gpu_in)),
      passthrough_cmd_decoder(std::move(passthrough_cmd_decoder_in)),
      can_support_threaded_texture_mailbox(std::move(can_support_threaded_texture_mailbox_in)),
      video_decode_accelerator_capabilities(std::move(video_decode_accelerator_capabilities_in)),
      video_encode_accelerator_supported_profiles(std::move(video_encode_accelerator_supported_profiles_in)),
      jpeg_decode_accelerator_supported(std::move(jpeg_decode_accelerator_supported_in)),
      image_decode_accelerator_supported_profiles(std::move(image_decode_accelerator_supported_profiles_in)),
      system_visual(std::move(system_visual_in)),
      rgba_visual(std::move(rgba_visual_in)),
      oop_rasterization_supported(std::move(oop_rasterization_supported_in)) {}

GpuInfo::~GpuInfo() = default;

bool GpuInfo::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace mojom
}  // namespace gpu

namespace mojo {


// static
bool StructTraits<::gpu::mojom::GpuDevice::DataView, ::gpu::mojom::GpuDevicePtr>::Read(
    ::gpu::mojom::GpuDevice::DataView input,
    ::gpu::mojom::GpuDevicePtr* output) {
  bool success = true;
  ::gpu::mojom::GpuDevicePtr result(::gpu::mojom::GpuDevice::New());
  
      result->vendor_id = input.vendor_id();
      result->device_id = input.device_id();
      result->active = input.active();
      if (!input.ReadVendorString(&result->vendor_string))
        success = false;
      if (!input.ReadDeviceString(&result->device_string))
        success = false;
      if (!input.ReadDriverVendor(&result->driver_vendor))
        success = false;
      if (!input.ReadDriverVersion(&result->driver_version))
        success = false;
      if (!input.ReadDriverDate(&result->driver_date))
        success = false;
      result->cuda_compute_capability_major = input.cuda_compute_capability_major();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::gpu::mojom::VideoDecodeAcceleratorSupportedProfile::DataView, ::gpu::mojom::VideoDecodeAcceleratorSupportedProfilePtr>::Read(
    ::gpu::mojom::VideoDecodeAcceleratorSupportedProfile::DataView input,
    ::gpu::mojom::VideoDecodeAcceleratorSupportedProfilePtr* output) {
  bool success = true;
  ::gpu::mojom::VideoDecodeAcceleratorSupportedProfilePtr result(::gpu::mojom::VideoDecodeAcceleratorSupportedProfile::New());
  
      if (!input.ReadProfile(&result->profile))
        success = false;
      if (!input.ReadMaxResolution(&result->max_resolution))
        success = false;
      if (!input.ReadMinResolution(&result->min_resolution))
        success = false;
      result->encrypted_only = input.encrypted_only();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::gpu::mojom::VideoDecodeAcceleratorCapabilities::DataView, ::gpu::mojom::VideoDecodeAcceleratorCapabilitiesPtr>::Read(
    ::gpu::mojom::VideoDecodeAcceleratorCapabilities::DataView input,
    ::gpu::mojom::VideoDecodeAcceleratorCapabilitiesPtr* output) {
  bool success = true;
  ::gpu::mojom::VideoDecodeAcceleratorCapabilitiesPtr result(::gpu::mojom::VideoDecodeAcceleratorCapabilities::New());
  
      if (!input.ReadSupportedProfiles(&result->supported_profiles))
        success = false;
      result->flags = input.flags();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::gpu::mojom::VideoEncodeAcceleratorSupportedProfile::DataView, ::gpu::mojom::VideoEncodeAcceleratorSupportedProfilePtr>::Read(
    ::gpu::mojom::VideoEncodeAcceleratorSupportedProfile::DataView input,
    ::gpu::mojom::VideoEncodeAcceleratorSupportedProfilePtr* output) {
  bool success = true;
  ::gpu::mojom::VideoEncodeAcceleratorSupportedProfilePtr result(::gpu::mojom::VideoEncodeAcceleratorSupportedProfile::New());
  
      if (!input.ReadProfile(&result->profile))
        success = false;
      if (!input.ReadMaxResolution(&result->max_resolution))
        success = false;
      result->max_framerate_numerator = input.max_framerate_numerator();
      result->max_framerate_denominator = input.max_framerate_denominator();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::gpu::mojom::ImageDecodeAcceleratorSupportedProfile::DataView, ::gpu::mojom::ImageDecodeAcceleratorSupportedProfilePtr>::Read(
    ::gpu::mojom::ImageDecodeAcceleratorSupportedProfile::DataView input,
    ::gpu::mojom::ImageDecodeAcceleratorSupportedProfilePtr* output) {
  bool success = true;
  ::gpu::mojom::ImageDecodeAcceleratorSupportedProfilePtr result(::gpu::mojom::ImageDecodeAcceleratorSupportedProfile::New());
  
      if (!input.ReadImageType(&result->image_type))
        success = false;
      if (!input.ReadMinEncodedDimensions(&result->min_encoded_dimensions))
        success = false;
      if (!input.ReadMaxEncodedDimensions(&result->max_encoded_dimensions))
        success = false;
      if (!input.ReadSubsamplings(&result->subsamplings))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::gpu::mojom::GpuInfo::DataView, ::gpu::mojom::GpuInfoPtr>::Read(
    ::gpu::mojom::GpuInfo::DataView input,
    ::gpu::mojom::GpuInfoPtr* output) {
  bool success = true;
  ::gpu::mojom::GpuInfoPtr result(::gpu::mojom::GpuInfo::New());
  
      if (!input.ReadInitializationTime(&result->initialization_time))
        success = false;
      result->optimus = input.optimus();
      result->amd_switchable = input.amd_switchable();
      if (!input.ReadGpu(&result->gpu))
        success = false;
      if (!input.ReadSecondaryGpus(&result->secondary_gpus))
        success = false;
      if (!input.ReadPixelShaderVersion(&result->pixel_shader_version))
        success = false;
      if (!input.ReadVertexShaderVersion(&result->vertex_shader_version))
        success = false;
      if (!input.ReadMaxMsaaSamples(&result->max_msaa_samples))
        success = false;
      if (!input.ReadMachineModelName(&result->machine_model_name))
        success = false;
      if (!input.ReadMachineModelVersion(&result->machine_model_version))
        success = false;
      if (!input.ReadGlVersion(&result->gl_version))
        success = false;
      if (!input.ReadGlVendor(&result->gl_vendor))
        success = false;
      if (!input.ReadGlRenderer(&result->gl_renderer))
        success = false;
      if (!input.ReadGlExtensions(&result->gl_extensions))
        success = false;
      if (!input.ReadGlWsVendor(&result->gl_ws_vendor))
        success = false;
      if (!input.ReadGlWsVersion(&result->gl_ws_version))
        success = false;
      if (!input.ReadGlWsExtensions(&result->gl_ws_extensions))
        success = false;
      result->gl_reset_notification_strategy = input.gl_reset_notification_strategy();
      result->software_rendering = input.software_rendering();
      if (!input.ReadDirectRenderingVersion(&result->direct_rendering_version))
        success = false;
      result->sandboxed = input.sandboxed();
      result->in_process_gpu = input.in_process_gpu();
      result->passthrough_cmd_decoder = input.passthrough_cmd_decoder();
      result->can_support_threaded_texture_mailbox = input.can_support_threaded_texture_mailbox();
      if (!input.ReadVideoDecodeAcceleratorCapabilities(&result->video_decode_accelerator_capabilities))
        success = false;
      if (!input.ReadVideoEncodeAcceleratorSupportedProfiles(&result->video_encode_accelerator_supported_profiles))
        success = false;
      result->jpeg_decode_accelerator_supported = input.jpeg_decode_accelerator_supported();
      if (!input.ReadImageDecodeAcceleratorSupportedProfiles(&result->image_decode_accelerator_supported_profiles))
        success = false;
      result->system_visual = input.system_visual();
      result->rgba_visual = input.rgba_visual();
      result->oop_rasterization_supported = input.oop_rasterization_supported();
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif