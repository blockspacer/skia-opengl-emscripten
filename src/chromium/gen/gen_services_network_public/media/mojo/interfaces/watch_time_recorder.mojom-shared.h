// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_WATCH_TIME_RECORDER_MOJOM_SHARED_H_
#define MEDIA_MOJO_INTERFACES_WATCH_TIME_RECORDER_MOJOM_SHARED_H_

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
#include "media/mojo/interfaces/watch_time_recorder.mojom-shared-internal.h"
#include "media/mojo/interfaces/media_types.mojom-shared.h"
#include "mojo/public/mojom/base/time.mojom-shared.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared.h"
#include "url/mojom/origin.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace media {
namespace mojom {
class PlaybackPropertiesDataView;

class SecondaryPlaybackPropertiesDataView;



}  // namespace mojom
}  // namespace media

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::media::mojom::PlaybackPropertiesDataView> {
  using Data = ::media::mojom::internal::PlaybackProperties_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::media::mojom::SecondaryPlaybackPropertiesDataView> {
  using Data = ::media::mojom::internal::SecondaryPlaybackProperties_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace media {
namespace mojom {
// Interface base classes. They are used for type safety check.
class WatchTimeRecorderInterfaceBase {};

using WatchTimeRecorderPtrDataView =
    mojo::InterfacePtrDataView<WatchTimeRecorderInterfaceBase>;
using WatchTimeRecorderRequestDataView =
    mojo::InterfaceRequestDataView<WatchTimeRecorderInterfaceBase>;
using WatchTimeRecorderAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<WatchTimeRecorderInterfaceBase>;
using WatchTimeRecorderAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<WatchTimeRecorderInterfaceBase>;
class PlaybackPropertiesDataView {
 public:
  PlaybackPropertiesDataView() {}

  PlaybackPropertiesDataView(
      internal::PlaybackProperties_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool has_audio() const {
    return data_->has_audio;
  }
  bool has_video() const {
    return data_->has_video;
  }
  bool is_background() const {
    return data_->is_background;
  }
  bool is_muted() const {
    return data_->is_muted;
  }
  bool is_mse() const {
    return data_->is_mse;
  }
  bool is_eme() const {
    return data_->is_eme;
  }
  bool is_embedded_media_experience() const {
    return data_->is_embedded_media_experience;
  }
 private:
  internal::PlaybackProperties_Data* data_ = nullptr;
};

class SecondaryPlaybackPropertiesDataView {
 public:
  SecondaryPlaybackPropertiesDataView() {}

  SecondaryPlaybackPropertiesDataView(
      internal::SecondaryPlaybackProperties_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAudioCodec(UserType* output) const {
    auto data_value = data_->audio_codec;
    return mojo::internal::Deserialize<::media::mojom::AudioCodec>(
        data_value, output);
  }

  ::media::mojom::AudioCodec audio_codec() const {
    return static_cast<::media::mojom::AudioCodec>(data_->audio_codec);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadVideoCodec(UserType* output) const {
    auto data_value = data_->video_codec;
    return mojo::internal::Deserialize<::media::mojom::VideoCodec>(
        data_value, output);
  }

  ::media::mojom::VideoCodec video_codec() const {
    return static_cast<::media::mojom::VideoCodec>(data_->video_codec);
  }
  inline void GetAudioDecoderNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAudioDecoderName(UserType* output) {
    auto* pointer = data_->audio_decoder_name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetVideoDecoderNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadVideoDecoderName(UserType* output) {
    auto* pointer = data_->video_decoder_name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAudioEncryptionScheme(UserType* output) const {
    auto data_value = data_->audio_encryption_scheme;
    return mojo::internal::Deserialize<::media::mojom::EncryptionMode>(
        data_value, output);
  }

  ::media::mojom::EncryptionMode audio_encryption_scheme() const {
    return static_cast<::media::mojom::EncryptionMode>(data_->audio_encryption_scheme);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadVideoEncryptionScheme(UserType* output) const {
    auto data_value = data_->video_encryption_scheme;
    return mojo::internal::Deserialize<::media::mojom::EncryptionMode>(
        data_value, output);
  }

  ::media::mojom::EncryptionMode video_encryption_scheme() const {
    return static_cast<::media::mojom::EncryptionMode>(data_->video_encryption_scheme);
  }
  inline void GetNaturalSizeDataView(
      ::gfx::mojom::SizeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadNaturalSize(UserType* output) {
    auto* pointer = data_->natural_size.Get();
    return mojo::internal::Deserialize<::gfx::mojom::SizeDataView>(
        pointer, output, context_);
  }
 private:
  internal::SecondaryPlaybackProperties_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace media

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::PlaybackPropertiesDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::media::mojom::PlaybackPropertiesDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::media::mojom::internal::PlaybackProperties_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->has_audio = Traits::has_audio(input);
    (*output)->has_video = Traits::has_video(input);
    (*output)->is_background = Traits::is_background(input);
    (*output)->is_muted = Traits::is_muted(input);
    (*output)->is_mse = Traits::is_mse(input);
    (*output)->is_eme = Traits::is_eme(input);
    (*output)->is_embedded_media_experience = Traits::is_embedded_media_experience(input);
  }

  static bool Deserialize(::media::mojom::internal::PlaybackProperties_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::media::mojom::PlaybackPropertiesDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::SecondaryPlaybackPropertiesDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::media::mojom::SecondaryPlaybackPropertiesDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::media::mojom::internal::SecondaryPlaybackProperties_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    mojo::internal::Serialize<::media::mojom::AudioCodec>(
        Traits::audio_codec(input), &(*output)->audio_codec);
    mojo::internal::Serialize<::media::mojom::VideoCodec>(
        Traits::video_codec(input), &(*output)->video_codec);
    decltype(Traits::audio_decoder_name(input)) in_audio_decoder_name = Traits::audio_decoder_name(input);
    typename decltype((*output)->audio_decoder_name)::BaseType::BufferWriter
        audio_decoder_name_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_audio_decoder_name, buffer, &audio_decoder_name_writer, context);
    (*output)->audio_decoder_name.Set(
        audio_decoder_name_writer.is_null() ? nullptr : audio_decoder_name_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->audio_decoder_name.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null audio_decoder_name in SecondaryPlaybackProperties struct");
    decltype(Traits::video_decoder_name(input)) in_video_decoder_name = Traits::video_decoder_name(input);
    typename decltype((*output)->video_decoder_name)::BaseType::BufferWriter
        video_decoder_name_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_video_decoder_name, buffer, &video_decoder_name_writer, context);
    (*output)->video_decoder_name.Set(
        video_decoder_name_writer.is_null() ? nullptr : video_decoder_name_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->video_decoder_name.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null video_decoder_name in SecondaryPlaybackProperties struct");
    mojo::internal::Serialize<::media::mojom::EncryptionMode>(
        Traits::audio_encryption_scheme(input), &(*output)->audio_encryption_scheme);
    mojo::internal::Serialize<::media::mojom::EncryptionMode>(
        Traits::video_encryption_scheme(input), &(*output)->video_encryption_scheme);
    decltype(Traits::natural_size(input)) in_natural_size = Traits::natural_size(input);
    typename decltype((*output)->natural_size)::BaseType::BufferWriter
        natural_size_writer;
    mojo::internal::Serialize<::gfx::mojom::SizeDataView>(
        in_natural_size, buffer, &natural_size_writer, context);
    (*output)->natural_size.Set(
        natural_size_writer.is_null() ? nullptr : natural_size_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->natural_size.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null natural_size in SecondaryPlaybackProperties struct");
  }

  static bool Deserialize(::media::mojom::internal::SecondaryPlaybackProperties_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::media::mojom::SecondaryPlaybackPropertiesDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace media {
namespace mojom {



inline void SecondaryPlaybackPropertiesDataView::GetAudioDecoderNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->audio_decoder_name.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void SecondaryPlaybackPropertiesDataView::GetVideoDecoderNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->video_decoder_name.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void SecondaryPlaybackPropertiesDataView::GetNaturalSizeDataView(
    ::gfx::mojom::SizeDataView* output) {
  auto pointer = data_->natural_size.Get();
  *output = ::gfx::mojom::SizeDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_WATCH_TIME_RECORDER_MOJOM_SHARED_H_