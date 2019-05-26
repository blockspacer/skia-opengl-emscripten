// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_VIDEO_DECODER_MOJOM_SHARED_H_
#define MEDIA_MOJO_INTERFACES_VIDEO_DECODER_MOJOM_SHARED_H_

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
#include "media/mojo/interfaces/video_decoder.mojom-shared-internal.h"
#include "gpu/ipc/common/sync_token.mojom-shared.h"
#include "media/mojo/interfaces/media_log.mojom-shared.h"
#include "media/mojo/interfaces/media_types.mojom-shared.h"
#include "mojo/public/mojom/base/unguessable_token.mojom-shared.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared.h"
#include "ui/gfx/mojo/color_space.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace media {
namespace mojom {
class SupportedVideoDecoderConfigDataView;

class CommandBufferIdDataView;

using OverlayInfoDataView = mojo::native::NativeStructDataView;



}  // namespace mojom
}  // namespace media

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::media::mojom::SupportedVideoDecoderConfigDataView> {
  using Data = ::media::mojom::internal::SupportedVideoDecoderConfig_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::media::mojom::CommandBufferIdDataView> {
  using Data = ::media::mojom::internal::CommandBufferId_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace media {
namespace mojom {
using VideoDecoderImplementation = mojo::NativeEnum;
// Interface base classes. They are used for type safety check.
class VideoFrameHandleReleaserInterfaceBase {};

using VideoFrameHandleReleaserPtrDataView =
    mojo::InterfacePtrDataView<VideoFrameHandleReleaserInterfaceBase>;
using VideoFrameHandleReleaserRequestDataView =
    mojo::InterfaceRequestDataView<VideoFrameHandleReleaserInterfaceBase>;
using VideoFrameHandleReleaserAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<VideoFrameHandleReleaserInterfaceBase>;
using VideoFrameHandleReleaserAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<VideoFrameHandleReleaserInterfaceBase>;
class VideoDecoderInterfaceBase {};

using VideoDecoderPtrDataView =
    mojo::InterfacePtrDataView<VideoDecoderInterfaceBase>;
using VideoDecoderRequestDataView =
    mojo::InterfaceRequestDataView<VideoDecoderInterfaceBase>;
using VideoDecoderAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<VideoDecoderInterfaceBase>;
using VideoDecoderAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<VideoDecoderInterfaceBase>;
class VideoDecoderClientInterfaceBase {};

using VideoDecoderClientPtrDataView =
    mojo::InterfacePtrDataView<VideoDecoderClientInterfaceBase>;
using VideoDecoderClientRequestDataView =
    mojo::InterfaceRequestDataView<VideoDecoderClientInterfaceBase>;
using VideoDecoderClientAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<VideoDecoderClientInterfaceBase>;
using VideoDecoderClientAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<VideoDecoderClientInterfaceBase>;
class SupportedVideoDecoderConfigDataView {
 public:
  SupportedVideoDecoderConfigDataView() {}

  SupportedVideoDecoderConfigDataView(
      internal::SupportedVideoDecoderConfig_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadProfileMin(UserType* output) const {
    auto data_value = data_->profile_min;
    return mojo::internal::Deserialize<::media::mojom::VideoCodecProfile>(
        data_value, output);
  }

  ::media::mojom::VideoCodecProfile profile_min() const {
    return static_cast<::media::mojom::VideoCodecProfile>(data_->profile_min);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadProfileMax(UserType* output) const {
    auto data_value = data_->profile_max;
    return mojo::internal::Deserialize<::media::mojom::VideoCodecProfile>(
        data_value, output);
  }

  ::media::mojom::VideoCodecProfile profile_max() const {
    return static_cast<::media::mojom::VideoCodecProfile>(data_->profile_max);
  }
  inline void GetCodedSizeMinDataView(
      ::gfx::mojom::SizeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCodedSizeMin(UserType* output) {
    auto* pointer = data_->coded_size_min.Get();
    return mojo::internal::Deserialize<::gfx::mojom::SizeDataView>(
        pointer, output, context_);
  }
  inline void GetCodedSizeMaxDataView(
      ::gfx::mojom::SizeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCodedSizeMax(UserType* output) {
    auto* pointer = data_->coded_size_max.Get();
    return mojo::internal::Deserialize<::gfx::mojom::SizeDataView>(
        pointer, output, context_);
  }
  bool allow_encrypted() const {
    return data_->allow_encrypted;
  }
  bool require_encrypted() const {
    return data_->require_encrypted;
  }
 private:
  internal::SupportedVideoDecoderConfig_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CommandBufferIdDataView {
 public:
  CommandBufferIdDataView() {}

  CommandBufferIdDataView(
      internal::CommandBufferId_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetChannelTokenDataView(
      ::mojo_base::mojom::UnguessableTokenDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadChannelToken(UserType* output) {
    auto* pointer = data_->channel_token.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::UnguessableTokenDataView>(
        pointer, output, context_);
  }
  int32_t route_id() const {
    return data_->route_id;
  }
 private:
  internal::CommandBufferId_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace media

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::SupportedVideoDecoderConfigDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::media::mojom::SupportedVideoDecoderConfigDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::media::mojom::internal::SupportedVideoDecoderConfig_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    mojo::internal::Serialize<::media::mojom::VideoCodecProfile>(
        Traits::profile_min(input), &(*output)->profile_min);
    mojo::internal::Serialize<::media::mojom::VideoCodecProfile>(
        Traits::profile_max(input), &(*output)->profile_max);
    decltype(Traits::coded_size_min(input)) in_coded_size_min = Traits::coded_size_min(input);
    typename decltype((*output)->coded_size_min)::BaseType::BufferWriter
        coded_size_min_writer;
    mojo::internal::Serialize<::gfx::mojom::SizeDataView>(
        in_coded_size_min, buffer, &coded_size_min_writer, context);
    (*output)->coded_size_min.Set(
        coded_size_min_writer.is_null() ? nullptr : coded_size_min_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->coded_size_min.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null coded_size_min in SupportedVideoDecoderConfig struct");
    decltype(Traits::coded_size_max(input)) in_coded_size_max = Traits::coded_size_max(input);
    typename decltype((*output)->coded_size_max)::BaseType::BufferWriter
        coded_size_max_writer;
    mojo::internal::Serialize<::gfx::mojom::SizeDataView>(
        in_coded_size_max, buffer, &coded_size_max_writer, context);
    (*output)->coded_size_max.Set(
        coded_size_max_writer.is_null() ? nullptr : coded_size_max_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->coded_size_max.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null coded_size_max in SupportedVideoDecoderConfig struct");
    (*output)->allow_encrypted = Traits::allow_encrypted(input);
    (*output)->require_encrypted = Traits::require_encrypted(input);
  }

  static bool Deserialize(::media::mojom::internal::SupportedVideoDecoderConfig_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::media::mojom::SupportedVideoDecoderConfigDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::CommandBufferIdDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::media::mojom::CommandBufferIdDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::media::mojom::internal::CommandBufferId_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::channel_token(input)) in_channel_token = Traits::channel_token(input);
    typename decltype((*output)->channel_token)::BaseType::BufferWriter
        channel_token_writer;
    mojo::internal::Serialize<::mojo_base::mojom::UnguessableTokenDataView>(
        in_channel_token, buffer, &channel_token_writer, context);
    (*output)->channel_token.Set(
        channel_token_writer.is_null() ? nullptr : channel_token_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->channel_token.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null channel_token in CommandBufferId struct");
    (*output)->route_id = Traits::route_id(input);
  }

  static bool Deserialize(::media::mojom::internal::CommandBufferId_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::media::mojom::CommandBufferIdDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace media {
namespace mojom {

inline void SupportedVideoDecoderConfigDataView::GetCodedSizeMinDataView(
    ::gfx::mojom::SizeDataView* output) {
  auto pointer = data_->coded_size_min.Get();
  *output = ::gfx::mojom::SizeDataView(pointer, context_);
}
inline void SupportedVideoDecoderConfigDataView::GetCodedSizeMaxDataView(
    ::gfx::mojom::SizeDataView* output) {
  auto pointer = data_->coded_size_max.Get();
  *output = ::gfx::mojom::SizeDataView(pointer, context_);
}


inline void CommandBufferIdDataView::GetChannelTokenDataView(
    ::mojo_base::mojom::UnguessableTokenDataView* output) {
  auto pointer = data_->channel_token.Get();
  *output = ::mojo_base::mojom::UnguessableTokenDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_VIDEO_DECODER_MOJOM_SHARED_H_