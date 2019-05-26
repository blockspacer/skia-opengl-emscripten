// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_VIDEO_ENCODE_ACCELERATOR_MOJOM_SHARED_H_
#define MEDIA_MOJO_INTERFACES_VIDEO_ENCODE_ACCELERATOR_MOJOM_SHARED_H_

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
#include "media/mojo/interfaces/video_encode_accelerator.mojom-shared-internal.h"
#include "media/mojo/interfaces/media_types.mojom-shared.h"
#include "mojo/public/mojom/base/time.mojom-shared.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace media {
namespace mojom {
class VideoBitrateAllocationDataView;

class VideoEncodeAcceleratorConfigDataView;

class Vp8MetadataDataView;

class BitstreamBufferMetadataDataView;



}  // namespace mojom
}  // namespace media

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::media::mojom::VideoBitrateAllocationDataView> {
  using Data = ::media::mojom::internal::VideoBitrateAllocation_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::media::mojom::VideoEncodeAcceleratorConfigDataView> {
  using Data = ::media::mojom::internal::VideoEncodeAcceleratorConfig_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::media::mojom::Vp8MetadataDataView> {
  using Data = ::media::mojom::internal::Vp8Metadata_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::media::mojom::BitstreamBufferMetadataDataView> {
  using Data = ::media::mojom::internal::BitstreamBufferMetadata_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace media {
namespace mojom {


enum class VideoEncodeAcceleratorConfig_ContentType : int32_t {
  
  kCamera,
  
  kDisplay,
  kMinValue = 0,
  kMaxValue = 1,
};

 std::ostream& operator<<(std::ostream& os, VideoEncodeAcceleratorConfig_ContentType value);
inline bool IsKnownEnumValue(VideoEncodeAcceleratorConfig_ContentType value) {
  return internal::VideoEncodeAcceleratorConfig_ContentType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class VideoEncodeAccelerator_Error : int32_t {
  
  ILLEGAL_STATE,
  
  INVALID_ARGUMENT,
  
  PLATFORM_FAILURE,
  kMinValue = 0,
  kMaxValue = 2,
};

 std::ostream& operator<<(std::ostream& os, VideoEncodeAccelerator_Error value);
inline bool IsKnownEnumValue(VideoEncodeAccelerator_Error value) {
  return internal::VideoEncodeAccelerator_Error_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class VideoEncodeAcceleratorProviderInterfaceBase {};

using VideoEncodeAcceleratorProviderPtrDataView =
    mojo::InterfacePtrDataView<VideoEncodeAcceleratorProviderInterfaceBase>;
using VideoEncodeAcceleratorProviderRequestDataView =
    mojo::InterfaceRequestDataView<VideoEncodeAcceleratorProviderInterfaceBase>;
using VideoEncodeAcceleratorProviderAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<VideoEncodeAcceleratorProviderInterfaceBase>;
using VideoEncodeAcceleratorProviderAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<VideoEncodeAcceleratorProviderInterfaceBase>;
class VideoEncodeAcceleratorInterfaceBase {};

using VideoEncodeAcceleratorPtrDataView =
    mojo::InterfacePtrDataView<VideoEncodeAcceleratorInterfaceBase>;
using VideoEncodeAcceleratorRequestDataView =
    mojo::InterfaceRequestDataView<VideoEncodeAcceleratorInterfaceBase>;
using VideoEncodeAcceleratorAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<VideoEncodeAcceleratorInterfaceBase>;
using VideoEncodeAcceleratorAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<VideoEncodeAcceleratorInterfaceBase>;
class VideoEncodeAcceleratorClientInterfaceBase {};

using VideoEncodeAcceleratorClientPtrDataView =
    mojo::InterfacePtrDataView<VideoEncodeAcceleratorClientInterfaceBase>;
using VideoEncodeAcceleratorClientRequestDataView =
    mojo::InterfaceRequestDataView<VideoEncodeAcceleratorClientInterfaceBase>;
using VideoEncodeAcceleratorClientAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<VideoEncodeAcceleratorClientInterfaceBase>;
using VideoEncodeAcceleratorClientAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<VideoEncodeAcceleratorClientInterfaceBase>;
class VideoBitrateAllocationDataView {
 public:
  VideoBitrateAllocationDataView() {}

  VideoBitrateAllocationDataView(
      internal::VideoBitrateAllocation_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetBitratesDataView(
      mojo::ArrayDataView<int32_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBitrates(UserType* output) {
    auto* pointer = data_->bitrates.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<int32_t>>(
        pointer, output, context_);
  }
 private:
  internal::VideoBitrateAllocation_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class VideoEncodeAcceleratorConfigDataView {
 public:
  VideoEncodeAcceleratorConfigDataView() {}

  VideoEncodeAcceleratorConfigDataView(
      internal::VideoEncodeAcceleratorConfig_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadInputFormat(UserType* output) const {
    auto data_value = data_->input_format;
    return mojo::internal::Deserialize<::media::mojom::VideoPixelFormat>(
        data_value, output);
  }

  ::media::mojom::VideoPixelFormat input_format() const {
    return static_cast<::media::mojom::VideoPixelFormat>(data_->input_format);
  }
  inline void GetInputVisibleSizeDataView(
      ::gfx::mojom::SizeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadInputVisibleSize(UserType* output) {
    auto* pointer = data_->input_visible_size.Get();
    return mojo::internal::Deserialize<::gfx::mojom::SizeDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOutputProfile(UserType* output) const {
    auto data_value = data_->output_profile;
    return mojo::internal::Deserialize<::media::mojom::VideoCodecProfile>(
        data_value, output);
  }

  ::media::mojom::VideoCodecProfile output_profile() const {
    return static_cast<::media::mojom::VideoCodecProfile>(data_->output_profile);
  }
  uint32_t initial_bitrate() const {
    return data_->initial_bitrate;
  }
  uint32_t initial_framerate() const {
    return data_->initial_framerate;
  }
  bool has_initial_framerate() const {
    return data_->has_initial_framerate;
  }
  uint32_t gop_length() const {
    return data_->gop_length;
  }
  bool has_gop_length() const {
    return data_->has_gop_length;
  }
  uint8_t h264_output_level() const {
    return data_->h264_output_level;
  }
  bool has_h264_output_level() const {
    return data_->has_h264_output_level;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadContentType(UserType* output) const {
    auto data_value = data_->content_type;
    return mojo::internal::Deserialize<::media::mojom::VideoEncodeAcceleratorConfig_ContentType>(
        data_value, output);
  }

  VideoEncodeAcceleratorConfig_ContentType content_type() const {
    return static_cast<VideoEncodeAcceleratorConfig_ContentType>(data_->content_type);
  }
 private:
  internal::VideoEncodeAcceleratorConfig_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Vp8MetadataDataView {
 public:
  Vp8MetadataDataView() {}

  Vp8MetadataDataView(
      internal::Vp8Metadata_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool non_reference() const {
    return data_->non_reference;
  }
  uint8_t temporal_idx() const {
    return data_->temporal_idx;
  }
  bool layer_sync() const {
    return data_->layer_sync;
  }
 private:
  internal::Vp8Metadata_Data* data_ = nullptr;
};

class BitstreamBufferMetadataDataView {
 public:
  BitstreamBufferMetadataDataView() {}

  BitstreamBufferMetadataDataView(
      internal::BitstreamBufferMetadata_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint32_t payload_size_bytes() const {
    return data_->payload_size_bytes;
  }
  bool key_frame() const {
    return data_->key_frame;
  }
  inline void GetTimestampDataView(
      ::mojo_base::mojom::TimeDeltaDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTimestamp(UserType* output) {
    auto* pointer = data_->timestamp.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDeltaDataView>(
        pointer, output, context_);
  }
  inline void GetVp8DataView(
      Vp8MetadataDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadVp8(UserType* output) {
    auto* pointer = data_->vp8.Get();
    return mojo::internal::Deserialize<::media::mojom::Vp8MetadataDataView>(
        pointer, output, context_);
  }
 private:
  internal::BitstreamBufferMetadata_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace media

namespace std {

template <>
struct hash<::media::mojom::VideoEncodeAcceleratorConfig_ContentType>
    : public mojo::internal::EnumHashImpl<::media::mojom::VideoEncodeAcceleratorConfig_ContentType> {};

template <>
struct hash<::media::mojom::VideoEncodeAccelerator_Error>
    : public mojo::internal::EnumHashImpl<::media::mojom::VideoEncodeAccelerator_Error> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::media::mojom::VideoEncodeAcceleratorConfig_ContentType, ::media::mojom::VideoEncodeAcceleratorConfig_ContentType> {
  static ::media::mojom::VideoEncodeAcceleratorConfig_ContentType ToMojom(::media::mojom::VideoEncodeAcceleratorConfig_ContentType input) { return input; }
  static bool FromMojom(::media::mojom::VideoEncodeAcceleratorConfig_ContentType input, ::media::mojom::VideoEncodeAcceleratorConfig_ContentType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::VideoEncodeAcceleratorConfig_ContentType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::media::mojom::VideoEncodeAcceleratorConfig_ContentType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::media::mojom::VideoEncodeAcceleratorConfig_ContentType>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::media::mojom::VideoEncodeAccelerator_Error, ::media::mojom::VideoEncodeAccelerator_Error> {
  static ::media::mojom::VideoEncodeAccelerator_Error ToMojom(::media::mojom::VideoEncodeAccelerator_Error input) { return input; }
  static bool FromMojom(::media::mojom::VideoEncodeAccelerator_Error input, ::media::mojom::VideoEncodeAccelerator_Error* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::VideoEncodeAccelerator_Error, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::media::mojom::VideoEncodeAccelerator_Error, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::media::mojom::VideoEncodeAccelerator_Error>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::VideoBitrateAllocationDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::media::mojom::VideoBitrateAllocationDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::media::mojom::internal::VideoBitrateAllocation_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::bitrates(input)) in_bitrates = Traits::bitrates(input);
    typename decltype((*output)->bitrates)::BaseType::BufferWriter
        bitrates_writer;
    const mojo::internal::ContainerValidateParams bitrates_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<int32_t>>(
        in_bitrates, buffer, &bitrates_writer, &bitrates_validate_params,
        context);
    (*output)->bitrates.Set(
        bitrates_writer.is_null() ? nullptr : bitrates_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->bitrates.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null bitrates in VideoBitrateAllocation struct");
  }

  static bool Deserialize(::media::mojom::internal::VideoBitrateAllocation_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::media::mojom::VideoBitrateAllocationDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::VideoEncodeAcceleratorConfigDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::media::mojom::VideoEncodeAcceleratorConfigDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::media::mojom::internal::VideoEncodeAcceleratorConfig_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    mojo::internal::Serialize<::media::mojom::VideoPixelFormat>(
        Traits::input_format(input), &(*output)->input_format);
    decltype(Traits::input_visible_size(input)) in_input_visible_size = Traits::input_visible_size(input);
    typename decltype((*output)->input_visible_size)::BaseType::BufferWriter
        input_visible_size_writer;
    mojo::internal::Serialize<::gfx::mojom::SizeDataView>(
        in_input_visible_size, buffer, &input_visible_size_writer, context);
    (*output)->input_visible_size.Set(
        input_visible_size_writer.is_null() ? nullptr : input_visible_size_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->input_visible_size.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null input_visible_size in VideoEncodeAcceleratorConfig struct");
    mojo::internal::Serialize<::media::mojom::VideoCodecProfile>(
        Traits::output_profile(input), &(*output)->output_profile);
    (*output)->initial_bitrate = Traits::initial_bitrate(input);
    (*output)->initial_framerate = Traits::initial_framerate(input);
    (*output)->has_initial_framerate = Traits::has_initial_framerate(input);
    (*output)->gop_length = Traits::gop_length(input);
    (*output)->has_gop_length = Traits::has_gop_length(input);
    (*output)->h264_output_level = Traits::h264_output_level(input);
    (*output)->has_h264_output_level = Traits::has_h264_output_level(input);
    mojo::internal::Serialize<::media::mojom::VideoEncodeAcceleratorConfig_ContentType>(
        Traits::content_type(input), &(*output)->content_type);
  }

  static bool Deserialize(::media::mojom::internal::VideoEncodeAcceleratorConfig_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::media::mojom::VideoEncodeAcceleratorConfigDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::Vp8MetadataDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::media::mojom::Vp8MetadataDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::media::mojom::internal::Vp8Metadata_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->non_reference = Traits::non_reference(input);
    (*output)->temporal_idx = Traits::temporal_idx(input);
    (*output)->layer_sync = Traits::layer_sync(input);
  }

  static bool Deserialize(::media::mojom::internal::Vp8Metadata_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::media::mojom::Vp8MetadataDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::BitstreamBufferMetadataDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::media::mojom::BitstreamBufferMetadataDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::media::mojom::internal::BitstreamBufferMetadata_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->payload_size_bytes = Traits::payload_size_bytes(input);
    (*output)->key_frame = Traits::key_frame(input);
    decltype(Traits::timestamp(input)) in_timestamp = Traits::timestamp(input);
    typename decltype((*output)->timestamp)::BaseType::BufferWriter
        timestamp_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TimeDeltaDataView>(
        in_timestamp, buffer, &timestamp_writer, context);
    (*output)->timestamp.Set(
        timestamp_writer.is_null() ? nullptr : timestamp_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->timestamp.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null timestamp in BitstreamBufferMetadata struct");
    decltype(Traits::vp8(input)) in_vp8 = Traits::vp8(input);
    typename decltype((*output)->vp8)::BaseType::BufferWriter
        vp8_writer;
    mojo::internal::Serialize<::media::mojom::Vp8MetadataDataView>(
        in_vp8, buffer, &vp8_writer, context);
    (*output)->vp8.Set(
        vp8_writer.is_null() ? nullptr : vp8_writer.data());
  }

  static bool Deserialize(::media::mojom::internal::BitstreamBufferMetadata_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::media::mojom::BitstreamBufferMetadataDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace media {
namespace mojom {

inline void VideoBitrateAllocationDataView::GetBitratesDataView(
    mojo::ArrayDataView<int32_t>* output) {
  auto pointer = data_->bitrates.Get();
  *output = mojo::ArrayDataView<int32_t>(pointer, context_);
}


inline void VideoEncodeAcceleratorConfigDataView::GetInputVisibleSizeDataView(
    ::gfx::mojom::SizeDataView* output) {
  auto pointer = data_->input_visible_size.Get();
  *output = ::gfx::mojom::SizeDataView(pointer, context_);
}




inline void BitstreamBufferMetadataDataView::GetTimestampDataView(
    ::mojo_base::mojom::TimeDeltaDataView* output) {
  auto pointer = data_->timestamp.Get();
  *output = ::mojo_base::mojom::TimeDeltaDataView(pointer, context_);
}
inline void BitstreamBufferMetadataDataView::GetVp8DataView(
    Vp8MetadataDataView* output) {
  auto pointer = data_->vp8.Get();
  *output = Vp8MetadataDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_VIDEO_ENCODE_ACCELERATOR_MOJOM_SHARED_H_