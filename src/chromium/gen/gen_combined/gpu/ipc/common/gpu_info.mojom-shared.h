// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef GPU_IPC_COMMON_GPU_INFO_MOJOM_SHARED_H_
#define GPU_IPC_COMMON_GPU_INFO_MOJOM_SHARED_H_

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
#include "gpu/ipc/common/gpu_info.mojom-shared-internal.h"
#include "gpu/ipc/common/dx_diag_node.mojom-shared.h"
#include "mojo/public/mojom/base/time.mojom-shared.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace gpu {
namespace mojom {
class GpuDeviceDataView;

class VideoDecodeAcceleratorSupportedProfileDataView;

class VideoDecodeAcceleratorCapabilitiesDataView;

class VideoEncodeAcceleratorSupportedProfileDataView;

class ImageDecodeAcceleratorSupportedProfileDataView;

class GpuInfoDataView;



}  // namespace mojom
}  // namespace gpu

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::gpu::mojom::GpuDeviceDataView> {
  using Data = ::gpu::mojom::internal::GpuDevice_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::gpu::mojom::VideoDecodeAcceleratorSupportedProfileDataView> {
  using Data = ::gpu::mojom::internal::VideoDecodeAcceleratorSupportedProfile_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::gpu::mojom::VideoDecodeAcceleratorCapabilitiesDataView> {
  using Data = ::gpu::mojom::internal::VideoDecodeAcceleratorCapabilities_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::gpu::mojom::VideoEncodeAcceleratorSupportedProfileDataView> {
  using Data = ::gpu::mojom::internal::VideoEncodeAcceleratorSupportedProfile_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::gpu::mojom::ImageDecodeAcceleratorSupportedProfileDataView> {
  using Data = ::gpu::mojom::internal::ImageDecodeAcceleratorSupportedProfile_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::gpu::mojom::GpuInfoDataView> {
  using Data = ::gpu::mojom::internal::GpuInfo_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace gpu {
namespace mojom {


enum class VideoCodecProfile : int32_t {
  
  VIDEO_CODEC_PROFILE_UNKNOWN = -1,
  
  H264PROFILE_BASELINE = 0,
  
  H264PROFILE_MAIN,
  
  H264PROFILE_EXTENDED,
  
  H264PROFILE_HIGH,
  
  H264PROFILE_HIGH10PROFILE,
  
  H264PROFILE_HIGH422PROFILE,
  
  H264PROFILE_HIGH444PREDICTIVEPROFILE,
  
  H264PROFILE_SCALABLEBASELINE,
  
  H264PROFILE_SCALABLEHIGH,
  
  H264PROFILE_STEREOHIGH,
  
  H264PROFILE_MULTIVIEWHIGH,
  
  VP8PROFILE_ANY,
  
  VP9PROFILE_PROFILE0,
  
  VP9PROFILE_PROFILE1,
  
  VP9PROFILE_PROFILE2,
  
  VP9PROFILE_PROFILE3,
  
  HEVCPROFILE_MAIN,
  
  HEVCPROFILE_MAIN10,
  
  HEVCPROFILE_MAIN_STILL_PICTURE,
  
  DOLBYVISION_PROFILE0,
  
  DOLBYVISION_PROFILE4,
  
  DOLBYVISION_PROFILE5,
  
  DOLBYVISION_PROFILE7,
  
  THEORAPROFILE_ANY,
  
  AV1PROFILE_PROFILE_MAIN,
  
  AV1PROFILE_PROFILE_HIGH,
  
  AV1PROFILE_PROFILE_PRO,
  kMinValue = -1,
  kMaxValue = 26,
};

 std::ostream& operator<<(std::ostream& os, VideoCodecProfile value);
inline bool IsKnownEnumValue(VideoCodecProfile value) {
  return internal::VideoCodecProfile_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class ImageDecodeAcceleratorType : int32_t {
  
  kJpeg,
  
  kUnknown,
  kMinValue = 0,
  kMaxValue = 1,
};

 std::ostream& operator<<(std::ostream& os, ImageDecodeAcceleratorType value);
inline bool IsKnownEnumValue(ImageDecodeAcceleratorType value) {
  return internal::ImageDecodeAcceleratorType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class ImageDecodeAcceleratorSubsampling : int32_t {
  
  k420,
  
  k422,
  
  k444,
  kMinValue = 0,
  kMaxValue = 2,
};

 std::ostream& operator<<(std::ostream& os, ImageDecodeAcceleratorSubsampling value);
inline bool IsKnownEnumValue(ImageDecodeAcceleratorSubsampling value) {
  return internal::ImageDecodeAcceleratorSubsampling_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
class GpuDeviceDataView {
 public:
  GpuDeviceDataView() {}

  GpuDeviceDataView(
      internal::GpuDevice_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint32_t vendor_id() const {
    return data_->vendor_id;
  }
  uint32_t device_id() const {
    return data_->device_id;
  }
  bool active() const {
    return data_->active;
  }
  inline void GetVendorStringDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadVendorString(UserType* output) {
    auto* pointer = data_->vendor_string.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetDeviceStringDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDeviceString(UserType* output) {
    auto* pointer = data_->device_string.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetDriverVendorDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDriverVendor(UserType* output) {
    auto* pointer = data_->driver_vendor.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetDriverVersionDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDriverVersion(UserType* output) {
    auto* pointer = data_->driver_version.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetDriverDateDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDriverDate(UserType* output) {
    auto* pointer = data_->driver_date.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  int32_t cuda_compute_capability_major() const {
    return data_->cuda_compute_capability_major;
  }
 private:
  internal::GpuDevice_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class VideoDecodeAcceleratorSupportedProfileDataView {
 public:
  VideoDecodeAcceleratorSupportedProfileDataView() {}

  VideoDecodeAcceleratorSupportedProfileDataView(
      internal::VideoDecodeAcceleratorSupportedProfile_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadProfile(UserType* output) const {
    auto data_value = data_->profile;
    return mojo::internal::Deserialize<::gpu::mojom::VideoCodecProfile>(
        data_value, output);
  }

  VideoCodecProfile profile() const {
    return static_cast<VideoCodecProfile>(data_->profile);
  }
  inline void GetMaxResolutionDataView(
      ::gfx::mojom::SizeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMaxResolution(UserType* output) {
    auto* pointer = data_->max_resolution.Get();
    return mojo::internal::Deserialize<::gfx::mojom::SizeDataView>(
        pointer, output, context_);
  }
  inline void GetMinResolutionDataView(
      ::gfx::mojom::SizeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMinResolution(UserType* output) {
    auto* pointer = data_->min_resolution.Get();
    return mojo::internal::Deserialize<::gfx::mojom::SizeDataView>(
        pointer, output, context_);
  }
  bool encrypted_only() const {
    return data_->encrypted_only;
  }
 private:
  internal::VideoDecodeAcceleratorSupportedProfile_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class VideoDecodeAcceleratorCapabilitiesDataView {
 public:
  VideoDecodeAcceleratorCapabilitiesDataView() {}

  VideoDecodeAcceleratorCapabilitiesDataView(
      internal::VideoDecodeAcceleratorCapabilities_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSupportedProfilesDataView(
      mojo::ArrayDataView<VideoDecodeAcceleratorSupportedProfileDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSupportedProfiles(UserType* output) {
    auto* pointer = data_->supported_profiles.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::gpu::mojom::VideoDecodeAcceleratorSupportedProfileDataView>>(
        pointer, output, context_);
  }
  uint32_t flags() const {
    return data_->flags;
  }
 private:
  internal::VideoDecodeAcceleratorCapabilities_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class VideoEncodeAcceleratorSupportedProfileDataView {
 public:
  VideoEncodeAcceleratorSupportedProfileDataView() {}

  VideoEncodeAcceleratorSupportedProfileDataView(
      internal::VideoEncodeAcceleratorSupportedProfile_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadProfile(UserType* output) const {
    auto data_value = data_->profile;
    return mojo::internal::Deserialize<::gpu::mojom::VideoCodecProfile>(
        data_value, output);
  }

  VideoCodecProfile profile() const {
    return static_cast<VideoCodecProfile>(data_->profile);
  }
  inline void GetMaxResolutionDataView(
      ::gfx::mojom::SizeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMaxResolution(UserType* output) {
    auto* pointer = data_->max_resolution.Get();
    return mojo::internal::Deserialize<::gfx::mojom::SizeDataView>(
        pointer, output, context_);
  }
  uint32_t max_framerate_numerator() const {
    return data_->max_framerate_numerator;
  }
  uint32_t max_framerate_denominator() const {
    return data_->max_framerate_denominator;
  }
 private:
  internal::VideoEncodeAcceleratorSupportedProfile_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ImageDecodeAcceleratorSupportedProfileDataView {
 public:
  ImageDecodeAcceleratorSupportedProfileDataView() {}

  ImageDecodeAcceleratorSupportedProfileDataView(
      internal::ImageDecodeAcceleratorSupportedProfile_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadImageType(UserType* output) const {
    auto data_value = data_->image_type;
    return mojo::internal::Deserialize<::gpu::mojom::ImageDecodeAcceleratorType>(
        data_value, output);
  }

  ImageDecodeAcceleratorType image_type() const {
    return static_cast<ImageDecodeAcceleratorType>(data_->image_type);
  }
  inline void GetMinEncodedDimensionsDataView(
      ::gfx::mojom::SizeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMinEncodedDimensions(UserType* output) {
    auto* pointer = data_->min_encoded_dimensions.Get();
    return mojo::internal::Deserialize<::gfx::mojom::SizeDataView>(
        pointer, output, context_);
  }
  inline void GetMaxEncodedDimensionsDataView(
      ::gfx::mojom::SizeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMaxEncodedDimensions(UserType* output) {
    auto* pointer = data_->max_encoded_dimensions.Get();
    return mojo::internal::Deserialize<::gfx::mojom::SizeDataView>(
        pointer, output, context_);
  }
  inline void GetSubsamplingsDataView(
      mojo::ArrayDataView<ImageDecodeAcceleratorSubsampling>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSubsamplings(UserType* output) {
    auto* pointer = data_->subsamplings.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::gpu::mojom::ImageDecodeAcceleratorSubsampling>>(
        pointer, output, context_);
  }
 private:
  internal::ImageDecodeAcceleratorSupportedProfile_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class GpuInfoDataView {
 public:
  GpuInfoDataView() {}

  GpuInfoDataView(
      internal::GpuInfo_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetInitializationTimeDataView(
      ::mojo_base::mojom::TimeDeltaDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadInitializationTime(UserType* output) {
    auto* pointer = data_->initialization_time.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDeltaDataView>(
        pointer, output, context_);
  }
  bool optimus() const {
    return data_->optimus;
  }
  bool amd_switchable() const {
    return data_->amd_switchable;
  }
  inline void GetGpuDataView(
      GpuDeviceDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadGpu(UserType* output) {
    auto* pointer = data_->gpu.Get();
    return mojo::internal::Deserialize<::gpu::mojom::GpuDeviceDataView>(
        pointer, output, context_);
  }
  inline void GetSecondaryGpusDataView(
      mojo::ArrayDataView<GpuDeviceDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSecondaryGpus(UserType* output) {
    auto* pointer = data_->secondary_gpus.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::gpu::mojom::GpuDeviceDataView>>(
        pointer, output, context_);
  }
  inline void GetPixelShaderVersionDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPixelShaderVersion(UserType* output) {
    auto* pointer = data_->pixel_shader_version.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetVertexShaderVersionDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadVertexShaderVersion(UserType* output) {
    auto* pointer = data_->vertex_shader_version.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetMaxMsaaSamplesDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMaxMsaaSamples(UserType* output) {
    auto* pointer = data_->max_msaa_samples.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetMachineModelNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMachineModelName(UserType* output) {
    auto* pointer = data_->machine_model_name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetMachineModelVersionDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMachineModelVersion(UserType* output) {
    auto* pointer = data_->machine_model_version.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetGlVersionDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadGlVersion(UserType* output) {
    auto* pointer = data_->gl_version.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetGlVendorDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadGlVendor(UserType* output) {
    auto* pointer = data_->gl_vendor.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetGlRendererDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadGlRenderer(UserType* output) {
    auto* pointer = data_->gl_renderer.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetGlExtensionsDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadGlExtensions(UserType* output) {
    auto* pointer = data_->gl_extensions.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetGlWsVendorDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadGlWsVendor(UserType* output) {
    auto* pointer = data_->gl_ws_vendor.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetGlWsVersionDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadGlWsVersion(UserType* output) {
    auto* pointer = data_->gl_ws_version.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetGlWsExtensionsDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadGlWsExtensions(UserType* output) {
    auto* pointer = data_->gl_ws_extensions.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  uint32_t gl_reset_notification_strategy() const {
    return data_->gl_reset_notification_strategy;
  }
  bool software_rendering() const {
    return data_->software_rendering;
  }
  inline void GetDirectRenderingVersionDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDirectRenderingVersion(UserType* output) {
    auto* pointer = data_->direct_rendering_version.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  bool sandboxed() const {
    return data_->sandboxed;
  }
  bool in_process_gpu() const {
    return data_->in_process_gpu;
  }
  bool passthrough_cmd_decoder() const {
    return data_->passthrough_cmd_decoder;
  }
  bool can_support_threaded_texture_mailbox() const {
    return data_->can_support_threaded_texture_mailbox;
  }
  inline void GetVideoDecodeAcceleratorCapabilitiesDataView(
      VideoDecodeAcceleratorCapabilitiesDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadVideoDecodeAcceleratorCapabilities(UserType* output) {
    auto* pointer = data_->video_decode_accelerator_capabilities.Get();
    return mojo::internal::Deserialize<::gpu::mojom::VideoDecodeAcceleratorCapabilitiesDataView>(
        pointer, output, context_);
  }
  inline void GetVideoEncodeAcceleratorSupportedProfilesDataView(
      mojo::ArrayDataView<VideoEncodeAcceleratorSupportedProfileDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadVideoEncodeAcceleratorSupportedProfiles(UserType* output) {
    auto* pointer = data_->video_encode_accelerator_supported_profiles.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::gpu::mojom::VideoEncodeAcceleratorSupportedProfileDataView>>(
        pointer, output, context_);
  }
  bool jpeg_decode_accelerator_supported() const {
    return data_->jpeg_decode_accelerator_supported;
  }
  inline void GetImageDecodeAcceleratorSupportedProfilesDataView(
      mojo::ArrayDataView<ImageDecodeAcceleratorSupportedProfileDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadImageDecodeAcceleratorSupportedProfiles(UserType* output) {
    auto* pointer = data_->image_decode_accelerator_supported_profiles.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::gpu::mojom::ImageDecodeAcceleratorSupportedProfileDataView>>(
        pointer, output, context_);
  }
  uint64_t system_visual() const {
    return data_->system_visual;
  }
  uint64_t rgba_visual() const {
    return data_->rgba_visual;
  }
  bool oop_rasterization_supported() const {
    return data_->oop_rasterization_supported;
  }
 private:
  internal::GpuInfo_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace gpu

namespace std {

template <>
struct hash<::gpu::mojom::VideoCodecProfile>
    : public mojo::internal::EnumHashImpl<::gpu::mojom::VideoCodecProfile> {};

template <>
struct hash<::gpu::mojom::ImageDecodeAcceleratorType>
    : public mojo::internal::EnumHashImpl<::gpu::mojom::ImageDecodeAcceleratorType> {};

template <>
struct hash<::gpu::mojom::ImageDecodeAcceleratorSubsampling>
    : public mojo::internal::EnumHashImpl<::gpu::mojom::ImageDecodeAcceleratorSubsampling> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::gpu::mojom::VideoCodecProfile, ::gpu::mojom::VideoCodecProfile> {
  static ::gpu::mojom::VideoCodecProfile ToMojom(::gpu::mojom::VideoCodecProfile input) { return input; }
  static bool FromMojom(::gpu::mojom::VideoCodecProfile input, ::gpu::mojom::VideoCodecProfile* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::gpu::mojom::VideoCodecProfile, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::gpu::mojom::VideoCodecProfile, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::gpu::mojom::VideoCodecProfile>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::gpu::mojom::ImageDecodeAcceleratorType, ::gpu::mojom::ImageDecodeAcceleratorType> {
  static ::gpu::mojom::ImageDecodeAcceleratorType ToMojom(::gpu::mojom::ImageDecodeAcceleratorType input) { return input; }
  static bool FromMojom(::gpu::mojom::ImageDecodeAcceleratorType input, ::gpu::mojom::ImageDecodeAcceleratorType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::gpu::mojom::ImageDecodeAcceleratorType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::gpu::mojom::ImageDecodeAcceleratorType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::gpu::mojom::ImageDecodeAcceleratorType>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::gpu::mojom::ImageDecodeAcceleratorSubsampling, ::gpu::mojom::ImageDecodeAcceleratorSubsampling> {
  static ::gpu::mojom::ImageDecodeAcceleratorSubsampling ToMojom(::gpu::mojom::ImageDecodeAcceleratorSubsampling input) { return input; }
  static bool FromMojom(::gpu::mojom::ImageDecodeAcceleratorSubsampling input, ::gpu::mojom::ImageDecodeAcceleratorSubsampling* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::gpu::mojom::ImageDecodeAcceleratorSubsampling, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::gpu::mojom::ImageDecodeAcceleratorSubsampling, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::gpu::mojom::ImageDecodeAcceleratorSubsampling>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::gpu::mojom::GpuDeviceDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::gpu::mojom::GpuDeviceDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::gpu::mojom::internal::GpuDevice_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->vendor_id = Traits::vendor_id(input);
    (*output)->device_id = Traits::device_id(input);
    (*output)->active = Traits::active(input);
    decltype(Traits::vendor_string(input)) in_vendor_string = Traits::vendor_string(input);
    typename decltype((*output)->vendor_string)::BaseType::BufferWriter
        vendor_string_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_vendor_string, buffer, &vendor_string_writer, context);
    (*output)->vendor_string.Set(
        vendor_string_writer.is_null() ? nullptr : vendor_string_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->vendor_string.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null vendor_string in GpuDevice struct");
    decltype(Traits::device_string(input)) in_device_string = Traits::device_string(input);
    typename decltype((*output)->device_string)::BaseType::BufferWriter
        device_string_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_device_string, buffer, &device_string_writer, context);
    (*output)->device_string.Set(
        device_string_writer.is_null() ? nullptr : device_string_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->device_string.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null device_string in GpuDevice struct");
    decltype(Traits::driver_vendor(input)) in_driver_vendor = Traits::driver_vendor(input);
    typename decltype((*output)->driver_vendor)::BaseType::BufferWriter
        driver_vendor_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_driver_vendor, buffer, &driver_vendor_writer, context);
    (*output)->driver_vendor.Set(
        driver_vendor_writer.is_null() ? nullptr : driver_vendor_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->driver_vendor.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null driver_vendor in GpuDevice struct");
    decltype(Traits::driver_version(input)) in_driver_version = Traits::driver_version(input);
    typename decltype((*output)->driver_version)::BaseType::BufferWriter
        driver_version_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_driver_version, buffer, &driver_version_writer, context);
    (*output)->driver_version.Set(
        driver_version_writer.is_null() ? nullptr : driver_version_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->driver_version.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null driver_version in GpuDevice struct");
    decltype(Traits::driver_date(input)) in_driver_date = Traits::driver_date(input);
    typename decltype((*output)->driver_date)::BaseType::BufferWriter
        driver_date_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_driver_date, buffer, &driver_date_writer, context);
    (*output)->driver_date.Set(
        driver_date_writer.is_null() ? nullptr : driver_date_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->driver_date.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null driver_date in GpuDevice struct");
    (*output)->cuda_compute_capability_major = Traits::cuda_compute_capability_major(input);
  }

  static bool Deserialize(::gpu::mojom::internal::GpuDevice_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::gpu::mojom::GpuDeviceDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::gpu::mojom::VideoDecodeAcceleratorSupportedProfileDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::gpu::mojom::VideoDecodeAcceleratorSupportedProfileDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::gpu::mojom::internal::VideoDecodeAcceleratorSupportedProfile_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    mojo::internal::Serialize<::gpu::mojom::VideoCodecProfile>(
        Traits::profile(input), &(*output)->profile);
    decltype(Traits::max_resolution(input)) in_max_resolution = Traits::max_resolution(input);
    typename decltype((*output)->max_resolution)::BaseType::BufferWriter
        max_resolution_writer;
    mojo::internal::Serialize<::gfx::mojom::SizeDataView>(
        in_max_resolution, buffer, &max_resolution_writer, context);
    (*output)->max_resolution.Set(
        max_resolution_writer.is_null() ? nullptr : max_resolution_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->max_resolution.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null max_resolution in VideoDecodeAcceleratorSupportedProfile struct");
    decltype(Traits::min_resolution(input)) in_min_resolution = Traits::min_resolution(input);
    typename decltype((*output)->min_resolution)::BaseType::BufferWriter
        min_resolution_writer;
    mojo::internal::Serialize<::gfx::mojom::SizeDataView>(
        in_min_resolution, buffer, &min_resolution_writer, context);
    (*output)->min_resolution.Set(
        min_resolution_writer.is_null() ? nullptr : min_resolution_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->min_resolution.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null min_resolution in VideoDecodeAcceleratorSupportedProfile struct");
    (*output)->encrypted_only = Traits::encrypted_only(input);
  }

  static bool Deserialize(::gpu::mojom::internal::VideoDecodeAcceleratorSupportedProfile_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::gpu::mojom::VideoDecodeAcceleratorSupportedProfileDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::gpu::mojom::VideoDecodeAcceleratorCapabilitiesDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::gpu::mojom::VideoDecodeAcceleratorCapabilitiesDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::gpu::mojom::internal::VideoDecodeAcceleratorCapabilities_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::supported_profiles(input)) in_supported_profiles = Traits::supported_profiles(input);
    typename decltype((*output)->supported_profiles)::BaseType::BufferWriter
        supported_profiles_writer;
    const mojo::internal::ContainerValidateParams supported_profiles_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::gpu::mojom::VideoDecodeAcceleratorSupportedProfileDataView>>(
        in_supported_profiles, buffer, &supported_profiles_writer, &supported_profiles_validate_params,
        context);
    (*output)->supported_profiles.Set(
        supported_profiles_writer.is_null() ? nullptr : supported_profiles_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->supported_profiles.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null supported_profiles in VideoDecodeAcceleratorCapabilities struct");
    (*output)->flags = Traits::flags(input);
  }

  static bool Deserialize(::gpu::mojom::internal::VideoDecodeAcceleratorCapabilities_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::gpu::mojom::VideoDecodeAcceleratorCapabilitiesDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::gpu::mojom::VideoEncodeAcceleratorSupportedProfileDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::gpu::mojom::VideoEncodeAcceleratorSupportedProfileDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::gpu::mojom::internal::VideoEncodeAcceleratorSupportedProfile_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    mojo::internal::Serialize<::gpu::mojom::VideoCodecProfile>(
        Traits::profile(input), &(*output)->profile);
    decltype(Traits::max_resolution(input)) in_max_resolution = Traits::max_resolution(input);
    typename decltype((*output)->max_resolution)::BaseType::BufferWriter
        max_resolution_writer;
    mojo::internal::Serialize<::gfx::mojom::SizeDataView>(
        in_max_resolution, buffer, &max_resolution_writer, context);
    (*output)->max_resolution.Set(
        max_resolution_writer.is_null() ? nullptr : max_resolution_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->max_resolution.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null max_resolution in VideoEncodeAcceleratorSupportedProfile struct");
    (*output)->max_framerate_numerator = Traits::max_framerate_numerator(input);
    (*output)->max_framerate_denominator = Traits::max_framerate_denominator(input);
  }

  static bool Deserialize(::gpu::mojom::internal::VideoEncodeAcceleratorSupportedProfile_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::gpu::mojom::VideoEncodeAcceleratorSupportedProfileDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::gpu::mojom::ImageDecodeAcceleratorSupportedProfileDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::gpu::mojom::ImageDecodeAcceleratorSupportedProfileDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::gpu::mojom::internal::ImageDecodeAcceleratorSupportedProfile_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    mojo::internal::Serialize<::gpu::mojom::ImageDecodeAcceleratorType>(
        Traits::image_type(input), &(*output)->image_type);
    decltype(Traits::min_encoded_dimensions(input)) in_min_encoded_dimensions = Traits::min_encoded_dimensions(input);
    typename decltype((*output)->min_encoded_dimensions)::BaseType::BufferWriter
        min_encoded_dimensions_writer;
    mojo::internal::Serialize<::gfx::mojom::SizeDataView>(
        in_min_encoded_dimensions, buffer, &min_encoded_dimensions_writer, context);
    (*output)->min_encoded_dimensions.Set(
        min_encoded_dimensions_writer.is_null() ? nullptr : min_encoded_dimensions_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->min_encoded_dimensions.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null min_encoded_dimensions in ImageDecodeAcceleratorSupportedProfile struct");
    decltype(Traits::max_encoded_dimensions(input)) in_max_encoded_dimensions = Traits::max_encoded_dimensions(input);
    typename decltype((*output)->max_encoded_dimensions)::BaseType::BufferWriter
        max_encoded_dimensions_writer;
    mojo::internal::Serialize<::gfx::mojom::SizeDataView>(
        in_max_encoded_dimensions, buffer, &max_encoded_dimensions_writer, context);
    (*output)->max_encoded_dimensions.Set(
        max_encoded_dimensions_writer.is_null() ? nullptr : max_encoded_dimensions_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->max_encoded_dimensions.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null max_encoded_dimensions in ImageDecodeAcceleratorSupportedProfile struct");
    decltype(Traits::subsamplings(input)) in_subsamplings = Traits::subsamplings(input);
    typename decltype((*output)->subsamplings)::BaseType::BufferWriter
        subsamplings_writer;
    const mojo::internal::ContainerValidateParams subsamplings_validate_params(
        0, ::gpu::mojom::internal::ImageDecodeAcceleratorSubsampling_Data::Validate);
    mojo::internal::Serialize<mojo::ArrayDataView<::gpu::mojom::ImageDecodeAcceleratorSubsampling>>(
        in_subsamplings, buffer, &subsamplings_writer, &subsamplings_validate_params,
        context);
    (*output)->subsamplings.Set(
        subsamplings_writer.is_null() ? nullptr : subsamplings_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->subsamplings.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null subsamplings in ImageDecodeAcceleratorSupportedProfile struct");
  }

  static bool Deserialize(::gpu::mojom::internal::ImageDecodeAcceleratorSupportedProfile_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::gpu::mojom::ImageDecodeAcceleratorSupportedProfileDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::gpu::mojom::GpuInfoDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::gpu::mojom::GpuInfoDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::gpu::mojom::internal::GpuInfo_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::initialization_time(input)) in_initialization_time = Traits::initialization_time(input);
    typename decltype((*output)->initialization_time)::BaseType::BufferWriter
        initialization_time_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TimeDeltaDataView>(
        in_initialization_time, buffer, &initialization_time_writer, context);
    (*output)->initialization_time.Set(
        initialization_time_writer.is_null() ? nullptr : initialization_time_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->initialization_time.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null initialization_time in GpuInfo struct");
    (*output)->optimus = Traits::optimus(input);
    (*output)->amd_switchable = Traits::amd_switchable(input);
    decltype(Traits::gpu(input)) in_gpu = Traits::gpu(input);
    typename decltype((*output)->gpu)::BaseType::BufferWriter
        gpu_writer;
    mojo::internal::Serialize<::gpu::mojom::GpuDeviceDataView>(
        in_gpu, buffer, &gpu_writer, context);
    (*output)->gpu.Set(
        gpu_writer.is_null() ? nullptr : gpu_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->gpu.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null gpu in GpuInfo struct");
    decltype(Traits::secondary_gpus(input)) in_secondary_gpus = Traits::secondary_gpus(input);
    typename decltype((*output)->secondary_gpus)::BaseType::BufferWriter
        secondary_gpus_writer;
    const mojo::internal::ContainerValidateParams secondary_gpus_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::gpu::mojom::GpuDeviceDataView>>(
        in_secondary_gpus, buffer, &secondary_gpus_writer, &secondary_gpus_validate_params,
        context);
    (*output)->secondary_gpus.Set(
        secondary_gpus_writer.is_null() ? nullptr : secondary_gpus_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->secondary_gpus.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null secondary_gpus in GpuInfo struct");
    decltype(Traits::pixel_shader_version(input)) in_pixel_shader_version = Traits::pixel_shader_version(input);
    typename decltype((*output)->pixel_shader_version)::BaseType::BufferWriter
        pixel_shader_version_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_pixel_shader_version, buffer, &pixel_shader_version_writer, context);
    (*output)->pixel_shader_version.Set(
        pixel_shader_version_writer.is_null() ? nullptr : pixel_shader_version_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->pixel_shader_version.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null pixel_shader_version in GpuInfo struct");
    decltype(Traits::vertex_shader_version(input)) in_vertex_shader_version = Traits::vertex_shader_version(input);
    typename decltype((*output)->vertex_shader_version)::BaseType::BufferWriter
        vertex_shader_version_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_vertex_shader_version, buffer, &vertex_shader_version_writer, context);
    (*output)->vertex_shader_version.Set(
        vertex_shader_version_writer.is_null() ? nullptr : vertex_shader_version_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->vertex_shader_version.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null vertex_shader_version in GpuInfo struct");
    decltype(Traits::max_msaa_samples(input)) in_max_msaa_samples = Traits::max_msaa_samples(input);
    typename decltype((*output)->max_msaa_samples)::BaseType::BufferWriter
        max_msaa_samples_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_max_msaa_samples, buffer, &max_msaa_samples_writer, context);
    (*output)->max_msaa_samples.Set(
        max_msaa_samples_writer.is_null() ? nullptr : max_msaa_samples_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->max_msaa_samples.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null max_msaa_samples in GpuInfo struct");
    decltype(Traits::machine_model_name(input)) in_machine_model_name = Traits::machine_model_name(input);
    typename decltype((*output)->machine_model_name)::BaseType::BufferWriter
        machine_model_name_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_machine_model_name, buffer, &machine_model_name_writer, context);
    (*output)->machine_model_name.Set(
        machine_model_name_writer.is_null() ? nullptr : machine_model_name_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->machine_model_name.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null machine_model_name in GpuInfo struct");
    decltype(Traits::machine_model_version(input)) in_machine_model_version = Traits::machine_model_version(input);
    typename decltype((*output)->machine_model_version)::BaseType::BufferWriter
        machine_model_version_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_machine_model_version, buffer, &machine_model_version_writer, context);
    (*output)->machine_model_version.Set(
        machine_model_version_writer.is_null() ? nullptr : machine_model_version_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->machine_model_version.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null machine_model_version in GpuInfo struct");
    decltype(Traits::gl_version(input)) in_gl_version = Traits::gl_version(input);
    typename decltype((*output)->gl_version)::BaseType::BufferWriter
        gl_version_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_gl_version, buffer, &gl_version_writer, context);
    (*output)->gl_version.Set(
        gl_version_writer.is_null() ? nullptr : gl_version_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->gl_version.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null gl_version in GpuInfo struct");
    decltype(Traits::gl_vendor(input)) in_gl_vendor = Traits::gl_vendor(input);
    typename decltype((*output)->gl_vendor)::BaseType::BufferWriter
        gl_vendor_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_gl_vendor, buffer, &gl_vendor_writer, context);
    (*output)->gl_vendor.Set(
        gl_vendor_writer.is_null() ? nullptr : gl_vendor_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->gl_vendor.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null gl_vendor in GpuInfo struct");
    decltype(Traits::gl_renderer(input)) in_gl_renderer = Traits::gl_renderer(input);
    typename decltype((*output)->gl_renderer)::BaseType::BufferWriter
        gl_renderer_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_gl_renderer, buffer, &gl_renderer_writer, context);
    (*output)->gl_renderer.Set(
        gl_renderer_writer.is_null() ? nullptr : gl_renderer_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->gl_renderer.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null gl_renderer in GpuInfo struct");
    decltype(Traits::gl_extensions(input)) in_gl_extensions = Traits::gl_extensions(input);
    typename decltype((*output)->gl_extensions)::BaseType::BufferWriter
        gl_extensions_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_gl_extensions, buffer, &gl_extensions_writer, context);
    (*output)->gl_extensions.Set(
        gl_extensions_writer.is_null() ? nullptr : gl_extensions_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->gl_extensions.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null gl_extensions in GpuInfo struct");
    decltype(Traits::gl_ws_vendor(input)) in_gl_ws_vendor = Traits::gl_ws_vendor(input);
    typename decltype((*output)->gl_ws_vendor)::BaseType::BufferWriter
        gl_ws_vendor_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_gl_ws_vendor, buffer, &gl_ws_vendor_writer, context);
    (*output)->gl_ws_vendor.Set(
        gl_ws_vendor_writer.is_null() ? nullptr : gl_ws_vendor_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->gl_ws_vendor.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null gl_ws_vendor in GpuInfo struct");
    decltype(Traits::gl_ws_version(input)) in_gl_ws_version = Traits::gl_ws_version(input);
    typename decltype((*output)->gl_ws_version)::BaseType::BufferWriter
        gl_ws_version_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_gl_ws_version, buffer, &gl_ws_version_writer, context);
    (*output)->gl_ws_version.Set(
        gl_ws_version_writer.is_null() ? nullptr : gl_ws_version_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->gl_ws_version.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null gl_ws_version in GpuInfo struct");
    decltype(Traits::gl_ws_extensions(input)) in_gl_ws_extensions = Traits::gl_ws_extensions(input);
    typename decltype((*output)->gl_ws_extensions)::BaseType::BufferWriter
        gl_ws_extensions_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_gl_ws_extensions, buffer, &gl_ws_extensions_writer, context);
    (*output)->gl_ws_extensions.Set(
        gl_ws_extensions_writer.is_null() ? nullptr : gl_ws_extensions_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->gl_ws_extensions.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null gl_ws_extensions in GpuInfo struct");
    (*output)->gl_reset_notification_strategy = Traits::gl_reset_notification_strategy(input);
    (*output)->software_rendering = Traits::software_rendering(input);
    decltype(Traits::direct_rendering_version(input)) in_direct_rendering_version = Traits::direct_rendering_version(input);
    typename decltype((*output)->direct_rendering_version)::BaseType::BufferWriter
        direct_rendering_version_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_direct_rendering_version, buffer, &direct_rendering_version_writer, context);
    (*output)->direct_rendering_version.Set(
        direct_rendering_version_writer.is_null() ? nullptr : direct_rendering_version_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->direct_rendering_version.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null direct_rendering_version in GpuInfo struct");
    (*output)->sandboxed = Traits::sandboxed(input);
    (*output)->in_process_gpu = Traits::in_process_gpu(input);
    (*output)->passthrough_cmd_decoder = Traits::passthrough_cmd_decoder(input);
    (*output)->can_support_threaded_texture_mailbox = Traits::can_support_threaded_texture_mailbox(input);
    decltype(Traits::video_decode_accelerator_capabilities(input)) in_video_decode_accelerator_capabilities = Traits::video_decode_accelerator_capabilities(input);
    typename decltype((*output)->video_decode_accelerator_capabilities)::BaseType::BufferWriter
        video_decode_accelerator_capabilities_writer;
    mojo::internal::Serialize<::gpu::mojom::VideoDecodeAcceleratorCapabilitiesDataView>(
        in_video_decode_accelerator_capabilities, buffer, &video_decode_accelerator_capabilities_writer, context);
    (*output)->video_decode_accelerator_capabilities.Set(
        video_decode_accelerator_capabilities_writer.is_null() ? nullptr : video_decode_accelerator_capabilities_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->video_decode_accelerator_capabilities.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null video_decode_accelerator_capabilities in GpuInfo struct");
    decltype(Traits::video_encode_accelerator_supported_profiles(input)) in_video_encode_accelerator_supported_profiles = Traits::video_encode_accelerator_supported_profiles(input);
    typename decltype((*output)->video_encode_accelerator_supported_profiles)::BaseType::BufferWriter
        video_encode_accelerator_supported_profiles_writer;
    const mojo::internal::ContainerValidateParams video_encode_accelerator_supported_profiles_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::gpu::mojom::VideoEncodeAcceleratorSupportedProfileDataView>>(
        in_video_encode_accelerator_supported_profiles, buffer, &video_encode_accelerator_supported_profiles_writer, &video_encode_accelerator_supported_profiles_validate_params,
        context);
    (*output)->video_encode_accelerator_supported_profiles.Set(
        video_encode_accelerator_supported_profiles_writer.is_null() ? nullptr : video_encode_accelerator_supported_profiles_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->video_encode_accelerator_supported_profiles.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null video_encode_accelerator_supported_profiles in GpuInfo struct");
    (*output)->jpeg_decode_accelerator_supported = Traits::jpeg_decode_accelerator_supported(input);
    decltype(Traits::image_decode_accelerator_supported_profiles(input)) in_image_decode_accelerator_supported_profiles = Traits::image_decode_accelerator_supported_profiles(input);
    typename decltype((*output)->image_decode_accelerator_supported_profiles)::BaseType::BufferWriter
        image_decode_accelerator_supported_profiles_writer;
    const mojo::internal::ContainerValidateParams image_decode_accelerator_supported_profiles_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::gpu::mojom::ImageDecodeAcceleratorSupportedProfileDataView>>(
        in_image_decode_accelerator_supported_profiles, buffer, &image_decode_accelerator_supported_profiles_writer, &image_decode_accelerator_supported_profiles_validate_params,
        context);
    (*output)->image_decode_accelerator_supported_profiles.Set(
        image_decode_accelerator_supported_profiles_writer.is_null() ? nullptr : image_decode_accelerator_supported_profiles_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->image_decode_accelerator_supported_profiles.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null image_decode_accelerator_supported_profiles in GpuInfo struct");
    (*output)->system_visual = Traits::system_visual(input);
    (*output)->rgba_visual = Traits::rgba_visual(input);
    (*output)->oop_rasterization_supported = Traits::oop_rasterization_supported(input);
  }

  static bool Deserialize(::gpu::mojom::internal::GpuInfo_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::gpu::mojom::GpuInfoDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace gpu {
namespace mojom {

inline void GpuDeviceDataView::GetVendorStringDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->vendor_string.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void GpuDeviceDataView::GetDeviceStringDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->device_string.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void GpuDeviceDataView::GetDriverVendorDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->driver_vendor.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void GpuDeviceDataView::GetDriverVersionDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->driver_version.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void GpuDeviceDataView::GetDriverDateDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->driver_date.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void VideoDecodeAcceleratorSupportedProfileDataView::GetMaxResolutionDataView(
    ::gfx::mojom::SizeDataView* output) {
  auto pointer = data_->max_resolution.Get();
  *output = ::gfx::mojom::SizeDataView(pointer, context_);
}
inline void VideoDecodeAcceleratorSupportedProfileDataView::GetMinResolutionDataView(
    ::gfx::mojom::SizeDataView* output) {
  auto pointer = data_->min_resolution.Get();
  *output = ::gfx::mojom::SizeDataView(pointer, context_);
}


inline void VideoDecodeAcceleratorCapabilitiesDataView::GetSupportedProfilesDataView(
    mojo::ArrayDataView<VideoDecodeAcceleratorSupportedProfileDataView>* output) {
  auto pointer = data_->supported_profiles.Get();
  *output = mojo::ArrayDataView<VideoDecodeAcceleratorSupportedProfileDataView>(pointer, context_);
}


inline void VideoEncodeAcceleratorSupportedProfileDataView::GetMaxResolutionDataView(
    ::gfx::mojom::SizeDataView* output) {
  auto pointer = data_->max_resolution.Get();
  *output = ::gfx::mojom::SizeDataView(pointer, context_);
}


inline void ImageDecodeAcceleratorSupportedProfileDataView::GetMinEncodedDimensionsDataView(
    ::gfx::mojom::SizeDataView* output) {
  auto pointer = data_->min_encoded_dimensions.Get();
  *output = ::gfx::mojom::SizeDataView(pointer, context_);
}
inline void ImageDecodeAcceleratorSupportedProfileDataView::GetMaxEncodedDimensionsDataView(
    ::gfx::mojom::SizeDataView* output) {
  auto pointer = data_->max_encoded_dimensions.Get();
  *output = ::gfx::mojom::SizeDataView(pointer, context_);
}
inline void ImageDecodeAcceleratorSupportedProfileDataView::GetSubsamplingsDataView(
    mojo::ArrayDataView<ImageDecodeAcceleratorSubsampling>* output) {
  auto pointer = data_->subsamplings.Get();
  *output = mojo::ArrayDataView<ImageDecodeAcceleratorSubsampling>(pointer, context_);
}


inline void GpuInfoDataView::GetInitializationTimeDataView(
    ::mojo_base::mojom::TimeDeltaDataView* output) {
  auto pointer = data_->initialization_time.Get();
  *output = ::mojo_base::mojom::TimeDeltaDataView(pointer, context_);
}
inline void GpuInfoDataView::GetGpuDataView(
    GpuDeviceDataView* output) {
  auto pointer = data_->gpu.Get();
  *output = GpuDeviceDataView(pointer, context_);
}
inline void GpuInfoDataView::GetSecondaryGpusDataView(
    mojo::ArrayDataView<GpuDeviceDataView>* output) {
  auto pointer = data_->secondary_gpus.Get();
  *output = mojo::ArrayDataView<GpuDeviceDataView>(pointer, context_);
}
inline void GpuInfoDataView::GetPixelShaderVersionDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->pixel_shader_version.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void GpuInfoDataView::GetVertexShaderVersionDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->vertex_shader_version.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void GpuInfoDataView::GetMaxMsaaSamplesDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->max_msaa_samples.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void GpuInfoDataView::GetMachineModelNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->machine_model_name.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void GpuInfoDataView::GetMachineModelVersionDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->machine_model_version.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void GpuInfoDataView::GetGlVersionDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->gl_version.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void GpuInfoDataView::GetGlVendorDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->gl_vendor.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void GpuInfoDataView::GetGlRendererDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->gl_renderer.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void GpuInfoDataView::GetGlExtensionsDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->gl_extensions.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void GpuInfoDataView::GetGlWsVendorDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->gl_ws_vendor.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void GpuInfoDataView::GetGlWsVersionDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->gl_ws_version.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void GpuInfoDataView::GetGlWsExtensionsDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->gl_ws_extensions.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void GpuInfoDataView::GetDirectRenderingVersionDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->direct_rendering_version.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void GpuInfoDataView::GetVideoDecodeAcceleratorCapabilitiesDataView(
    VideoDecodeAcceleratorCapabilitiesDataView* output) {
  auto pointer = data_->video_decode_accelerator_capabilities.Get();
  *output = VideoDecodeAcceleratorCapabilitiesDataView(pointer, context_);
}
inline void GpuInfoDataView::GetVideoEncodeAcceleratorSupportedProfilesDataView(
    mojo::ArrayDataView<VideoEncodeAcceleratorSupportedProfileDataView>* output) {
  auto pointer = data_->video_encode_accelerator_supported_profiles.Get();
  *output = mojo::ArrayDataView<VideoEncodeAcceleratorSupportedProfileDataView>(pointer, context_);
}
inline void GpuInfoDataView::GetImageDecodeAcceleratorSupportedProfilesDataView(
    mojo::ArrayDataView<ImageDecodeAcceleratorSupportedProfileDataView>* output) {
  auto pointer = data_->image_decode_accelerator_supported_profiles.Get();
  *output = mojo::ArrayDataView<ImageDecodeAcceleratorSupportedProfileDataView>(pointer, context_);
}



}  // namespace mojom
}  // namespace gpu

#endif  // GPU_IPC_COMMON_GPU_INFO_MOJOM_SHARED_H_