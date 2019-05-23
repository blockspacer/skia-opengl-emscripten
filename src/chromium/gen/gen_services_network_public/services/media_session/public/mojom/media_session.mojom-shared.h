// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_MEDIA_SESSION_PUBLIC_MOJOM_MEDIA_SESSION_MOJOM_SHARED_H_
#define SERVICES_MEDIA_SESSION_PUBLIC_MOJOM_MEDIA_SESSION_MOJOM_SHARED_H_

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
#include "services/media_session/public/mojom/media_session.mojom-shared-internal.h"
#include "mojo/public/mojom/base/string16.mojom-shared.h"
#include "mojo/public/mojom/base/time.mojom-shared.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared.h"
#include "url/mojom/url.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace media_session {
namespace mojom {
class MediaImageDataView;

class MediaMetadataDataView;

class MediaImageBitmapDataView;

class MediaSessionInfoDataView;

class MediaSessionDebugInfoDataView;



}  // namespace mojom
}  // namespace media_session

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::media_session::mojom::MediaImageDataView> {
  using Data = ::media_session::mojom::internal::MediaImage_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::media_session::mojom::MediaMetadataDataView> {
  using Data = ::media_session::mojom::internal::MediaMetadata_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::media_session::mojom::MediaImageBitmapDataView> {
  using Data = ::media_session::mojom::internal::MediaImageBitmap_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::media_session::mojom::MediaSessionInfoDataView> {
  using Data = ::media_session::mojom::internal::MediaSessionInfo_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::media_session::mojom::MediaSessionDebugInfoDataView> {
  using Data = ::media_session::mojom::internal::MediaSessionDebugInfo_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace media_session {
namespace mojom {


enum class MediaPlaybackState : int32_t {
  
  kPaused,
  
  kPlaying,
  kMinValue = 0,
  kMaxValue = 1,
};

 std::ostream& operator<<(std::ostream& os, MediaPlaybackState value);
inline bool IsKnownEnumValue(MediaPlaybackState value) {
  return internal::MediaPlaybackState_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class MediaSessionAction : int32_t {
  
  kPlay,
  
  kPause,
  
  kPreviousTrack,
  
  kNextTrack,
  
  kSeekBackward,
  
  kSeekForward,
  
  kSkipAd,
  
  kStop,
  kMinValue = 0,
  kMaxValue = 7,
};

 std::ostream& operator<<(std::ostream& os, MediaSessionAction value);
inline bool IsKnownEnumValue(MediaSessionAction value) {
  return internal::MediaSessionAction_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class MediaSessionImageType : int32_t {
  
  kArtwork,
  
  kSourceIcon,
  kMinValue = 0,
  kMaxValue = 1,
};

 std::ostream& operator<<(std::ostream& os, MediaSessionImageType value);
inline bool IsKnownEnumValue(MediaSessionImageType value) {
  return internal::MediaSessionImageType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class MediaSessionInfo_SessionState : int32_t {
  
  kActive,
  
  kDucking,
  
  kSuspended,
  
  kInactive,
  kMinValue = 0,
  kMaxValue = 3,
};

 std::ostream& operator<<(std::ostream& os, MediaSessionInfo_SessionState value);
inline bool IsKnownEnumValue(MediaSessionInfo_SessionState value) {
  return internal::MediaSessionInfo_SessionState_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class MediaSession_SuspendType : int32_t {
  
  kSystem,
  
  kUI,
  
  kContent,
  kMinValue = 0,
  kMaxValue = 2,
};

 std::ostream& operator<<(std::ostream& os, MediaSession_SuspendType value);
inline bool IsKnownEnumValue(MediaSession_SuspendType value) {
  return internal::MediaSession_SuspendType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class MediaSessionObserverInterfaceBase {};

using MediaSessionObserverPtrDataView =
    mojo::InterfacePtrDataView<MediaSessionObserverInterfaceBase>;
using MediaSessionObserverRequestDataView =
    mojo::InterfaceRequestDataView<MediaSessionObserverInterfaceBase>;
using MediaSessionObserverAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<MediaSessionObserverInterfaceBase>;
using MediaSessionObserverAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<MediaSessionObserverInterfaceBase>;
class MediaSessionInterfaceBase {};

using MediaSessionPtrDataView =
    mojo::InterfacePtrDataView<MediaSessionInterfaceBase>;
using MediaSessionRequestDataView =
    mojo::InterfaceRequestDataView<MediaSessionInterfaceBase>;
using MediaSessionAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<MediaSessionInterfaceBase>;
using MediaSessionAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<MediaSessionInterfaceBase>;
class MediaImageDataView {
 public:
  MediaImageDataView() {}

  MediaImageDataView(
      internal::MediaImage_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSrcDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSrc(UserType* output) {
    auto* pointer = data_->src.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  inline void GetTypeDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadType(UserType* output) {
    auto* pointer = data_->type.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
  inline void GetSizesDataView(
      mojo::ArrayDataView<::gfx::mojom::SizeDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSizes(UserType* output) {
    auto* pointer = data_->sizes.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::gfx::mojom::SizeDataView>>(
        pointer, output, context_);
  }
 private:
  internal::MediaImage_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MediaMetadataDataView {
 public:
  MediaMetadataDataView() {}

  MediaMetadataDataView(
      internal::MediaMetadata_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetTitleDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTitle(UserType* output) {
    auto* pointer = data_->title.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
  inline void GetArtistDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadArtist(UserType* output) {
    auto* pointer = data_->artist.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
  inline void GetAlbumDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAlbum(UserType* output) {
    auto* pointer = data_->album.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
  inline void GetSourceTitleDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSourceTitle(UserType* output) {
    auto* pointer = data_->source_title.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
 private:
  internal::MediaMetadata_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MediaImageBitmapDataView {
 public:
  MediaImageBitmapDataView() {}

  MediaImageBitmapDataView(
      internal::MediaImageBitmap_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t width() const {
    return data_->width;
  }
  int32_t height() const {
    return data_->height;
  }
  inline void GetPixelDataDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPixelData(UserType* output) {
    auto* pointer = data_->pixel_data.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
 private:
  internal::MediaImageBitmap_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MediaSessionInfoDataView {
 public:
  MediaSessionInfoDataView() {}

  MediaSessionInfoDataView(
      internal::MediaSessionInfo_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadState(UserType* output) const {
    auto data_value = data_->state;
    return mojo::internal::Deserialize<::media_session::mojom::MediaSessionInfo_SessionState>(
        data_value, output);
  }

  MediaSessionInfo_SessionState state() const {
    return static_cast<MediaSessionInfo_SessionState>(data_->state);
  }
  bool force_duck() const {
    return data_->force_duck;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPlaybackState(UserType* output) const {
    auto data_value = data_->header_.version >= 1
                      ? data_->playback_state : 0;
    return mojo::internal::Deserialize<::media_session::mojom::MediaPlaybackState>(
        data_value, output);
  }

  MediaPlaybackState playback_state() const {
    if (data_->header_.version < 1)
      return ::media_session::mojom::MediaPlaybackState{};
    return static_cast<MediaPlaybackState>(data_->playback_state);
  }
  bool is_controllable() const {
    if (data_->header_.version < 2)
      return bool{};
    return data_->is_controllable;
  }
  bool prefer_stop_for_gain_focus_loss() const {
    if (data_->header_.version < 4)
      return bool{};
    return data_->prefer_stop_for_gain_focus_loss;
  }
 private:
  internal::MediaSessionInfo_Data* data_ = nullptr;
};

class MediaSessionDebugInfoDataView {
 public:
  MediaSessionDebugInfoDataView() {}

  MediaSessionDebugInfoDataView(
      internal::MediaSessionDebugInfo_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadName(UserType* output) {
    auto* pointer = data_->name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetOwnerDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOwner(UserType* output) {
    auto* pointer = data_->owner.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetStateDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadState(UserType* output) {
    auto* pointer = data_->state.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::MediaSessionDebugInfo_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace media_session

namespace std {

template <>
struct hash<::media_session::mojom::MediaPlaybackState>
    : public mojo::internal::EnumHashImpl<::media_session::mojom::MediaPlaybackState> {};

template <>
struct hash<::media_session::mojom::MediaSessionAction>
    : public mojo::internal::EnumHashImpl<::media_session::mojom::MediaSessionAction> {};

template <>
struct hash<::media_session::mojom::MediaSessionImageType>
    : public mojo::internal::EnumHashImpl<::media_session::mojom::MediaSessionImageType> {};

template <>
struct hash<::media_session::mojom::MediaSessionInfo_SessionState>
    : public mojo::internal::EnumHashImpl<::media_session::mojom::MediaSessionInfo_SessionState> {};

template <>
struct hash<::media_session::mojom::MediaSession_SuspendType>
    : public mojo::internal::EnumHashImpl<::media_session::mojom::MediaSession_SuspendType> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::media_session::mojom::MediaPlaybackState, ::media_session::mojom::MediaPlaybackState> {
  static ::media_session::mojom::MediaPlaybackState ToMojom(::media_session::mojom::MediaPlaybackState input) { return input; }
  static bool FromMojom(::media_session::mojom::MediaPlaybackState input, ::media_session::mojom::MediaPlaybackState* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media_session::mojom::MediaPlaybackState, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::media_session::mojom::MediaPlaybackState, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::media_session::mojom::MediaPlaybackState>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::media_session::mojom::MediaSessionAction, ::media_session::mojom::MediaSessionAction> {
  static ::media_session::mojom::MediaSessionAction ToMojom(::media_session::mojom::MediaSessionAction input) { return input; }
  static bool FromMojom(::media_session::mojom::MediaSessionAction input, ::media_session::mojom::MediaSessionAction* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media_session::mojom::MediaSessionAction, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::media_session::mojom::MediaSessionAction, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::media_session::mojom::MediaSessionAction>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::media_session::mojom::MediaSessionImageType, ::media_session::mojom::MediaSessionImageType> {
  static ::media_session::mojom::MediaSessionImageType ToMojom(::media_session::mojom::MediaSessionImageType input) { return input; }
  static bool FromMojom(::media_session::mojom::MediaSessionImageType input, ::media_session::mojom::MediaSessionImageType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media_session::mojom::MediaSessionImageType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::media_session::mojom::MediaSessionImageType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::media_session::mojom::MediaSessionImageType>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::media_session::mojom::MediaSessionInfo_SessionState, ::media_session::mojom::MediaSessionInfo_SessionState> {
  static ::media_session::mojom::MediaSessionInfo_SessionState ToMojom(::media_session::mojom::MediaSessionInfo_SessionState input) { return input; }
  static bool FromMojom(::media_session::mojom::MediaSessionInfo_SessionState input, ::media_session::mojom::MediaSessionInfo_SessionState* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media_session::mojom::MediaSessionInfo_SessionState, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::media_session::mojom::MediaSessionInfo_SessionState, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::media_session::mojom::MediaSessionInfo_SessionState>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::media_session::mojom::MediaSession_SuspendType, ::media_session::mojom::MediaSession_SuspendType> {
  static ::media_session::mojom::MediaSession_SuspendType ToMojom(::media_session::mojom::MediaSession_SuspendType input) { return input; }
  static bool FromMojom(::media_session::mojom::MediaSession_SuspendType input, ::media_session::mojom::MediaSession_SuspendType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media_session::mojom::MediaSession_SuspendType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::media_session::mojom::MediaSession_SuspendType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::media_session::mojom::MediaSession_SuspendType>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media_session::mojom::MediaImageDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::media_session::mojom::MediaImageDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::media_session::mojom::internal::MediaImage_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::src(input)) in_src = Traits::src(input);
    typename decltype((*output)->src)::BaseType::BufferWriter
        src_writer;
    mojo::internal::Serialize<::url::mojom::UrlDataView>(
        in_src, buffer, &src_writer, context);
    (*output)->src.Set(
        src_writer.is_null() ? nullptr : src_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->src.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null src in MediaImage struct");
    decltype(Traits::type(input)) in_type = Traits::type(input);
    typename decltype((*output)->type)::BaseType::BufferWriter
        type_writer;
    mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
        in_type, buffer, &type_writer, context);
    (*output)->type.Set(
        type_writer.is_null() ? nullptr : type_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->type.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null type in MediaImage struct");
    decltype(Traits::sizes(input)) in_sizes = Traits::sizes(input);
    typename decltype((*output)->sizes)::BaseType::BufferWriter
        sizes_writer;
    const mojo::internal::ContainerValidateParams sizes_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::gfx::mojom::SizeDataView>>(
        in_sizes, buffer, &sizes_writer, &sizes_validate_params,
        context);
    (*output)->sizes.Set(
        sizes_writer.is_null() ? nullptr : sizes_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->sizes.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null sizes in MediaImage struct");
  }

  static bool Deserialize(::media_session::mojom::internal::MediaImage_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::media_session::mojom::MediaImageDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media_session::mojom::MediaMetadataDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::media_session::mojom::MediaMetadataDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::media_session::mojom::internal::MediaMetadata_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::title(input)) in_title = Traits::title(input);
    typename decltype((*output)->title)::BaseType::BufferWriter
        title_writer;
    mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
        in_title, buffer, &title_writer, context);
    (*output)->title.Set(
        title_writer.is_null() ? nullptr : title_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->title.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null title in MediaMetadata struct");
    decltype(Traits::artist(input)) in_artist = Traits::artist(input);
    typename decltype((*output)->artist)::BaseType::BufferWriter
        artist_writer;
    mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
        in_artist, buffer, &artist_writer, context);
    (*output)->artist.Set(
        artist_writer.is_null() ? nullptr : artist_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->artist.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null artist in MediaMetadata struct");
    decltype(Traits::album(input)) in_album = Traits::album(input);
    typename decltype((*output)->album)::BaseType::BufferWriter
        album_writer;
    mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
        in_album, buffer, &album_writer, context);
    (*output)->album.Set(
        album_writer.is_null() ? nullptr : album_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->album.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null album in MediaMetadata struct");
    decltype(Traits::source_title(input)) in_source_title = Traits::source_title(input);
    typename decltype((*output)->source_title)::BaseType::BufferWriter
        source_title_writer;
    mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
        in_source_title, buffer, &source_title_writer, context);
    (*output)->source_title.Set(
        source_title_writer.is_null() ? nullptr : source_title_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->source_title.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null source_title in MediaMetadata struct");
  }

  static bool Deserialize(::media_session::mojom::internal::MediaMetadata_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::media_session::mojom::MediaMetadataDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media_session::mojom::MediaImageBitmapDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::media_session::mojom::MediaImageBitmapDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::media_session::mojom::internal::MediaImageBitmap_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->width = Traits::width(input);
    (*output)->height = Traits::height(input);
    decltype(Traits::pixel_data(input)) in_pixel_data = Traits::pixel_data(input);
    typename decltype((*output)->pixel_data)::BaseType::BufferWriter
        pixel_data_writer;
    const mojo::internal::ContainerValidateParams pixel_data_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
        in_pixel_data, buffer, &pixel_data_writer, &pixel_data_validate_params,
        context);
    (*output)->pixel_data.Set(
        pixel_data_writer.is_null() ? nullptr : pixel_data_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->pixel_data.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null pixel_data in MediaImageBitmap struct");
  }

  static bool Deserialize(::media_session::mojom::internal::MediaImageBitmap_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::media_session::mojom::MediaImageBitmapDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media_session::mojom::MediaSessionInfoDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::media_session::mojom::MediaSessionInfoDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::media_session::mojom::internal::MediaSessionInfo_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    mojo::internal::Serialize<::media_session::mojom::MediaSessionInfo_SessionState>(
        Traits::state(input), &(*output)->state);
    (*output)->force_duck = Traits::force_duck(input);
    mojo::internal::Serialize<::media_session::mojom::MediaPlaybackState>(
        Traits::playback_state(input), &(*output)->playback_state);
    (*output)->is_controllable = Traits::is_controllable(input);
    (*output)->prefer_stop_for_gain_focus_loss = Traits::prefer_stop_for_gain_focus_loss(input);
  }

  static bool Deserialize(::media_session::mojom::internal::MediaSessionInfo_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::media_session::mojom::MediaSessionInfoDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media_session::mojom::MediaSessionDebugInfoDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::media_session::mojom::MediaSessionDebugInfoDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::media_session::mojom::internal::MediaSessionDebugInfo_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::name(input)) in_name = Traits::name(input);
    typename decltype((*output)->name)::BaseType::BufferWriter
        name_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_name, buffer, &name_writer, context);
    (*output)->name.Set(
        name_writer.is_null() ? nullptr : name_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->name.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null name in MediaSessionDebugInfo struct");
    decltype(Traits::owner(input)) in_owner = Traits::owner(input);
    typename decltype((*output)->owner)::BaseType::BufferWriter
        owner_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_owner, buffer, &owner_writer, context);
    (*output)->owner.Set(
        owner_writer.is_null() ? nullptr : owner_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->owner.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null owner in MediaSessionDebugInfo struct");
    decltype(Traits::state(input)) in_state = Traits::state(input);
    typename decltype((*output)->state)::BaseType::BufferWriter
        state_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_state, buffer, &state_writer, context);
    (*output)->state.Set(
        state_writer.is_null() ? nullptr : state_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->state.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null state in MediaSessionDebugInfo struct");
  }

  static bool Deserialize(::media_session::mojom::internal::MediaSessionDebugInfo_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::media_session::mojom::MediaSessionDebugInfoDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace media_session {
namespace mojom {

inline void MediaImageDataView::GetSrcDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->src.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void MediaImageDataView::GetTypeDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->type.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}
inline void MediaImageDataView::GetSizesDataView(
    mojo::ArrayDataView<::gfx::mojom::SizeDataView>* output) {
  auto pointer = data_->sizes.Get();
  *output = mojo::ArrayDataView<::gfx::mojom::SizeDataView>(pointer, context_);
}


inline void MediaMetadataDataView::GetTitleDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->title.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}
inline void MediaMetadataDataView::GetArtistDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->artist.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}
inline void MediaMetadataDataView::GetAlbumDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->album.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}
inline void MediaMetadataDataView::GetSourceTitleDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->source_title.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}


inline void MediaImageBitmapDataView::GetPixelDataDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->pixel_data.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}




inline void MediaSessionDebugInfoDataView::GetNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->name.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void MediaSessionDebugInfoDataView::GetOwnerDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->owner.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void MediaSessionDebugInfoDataView::GetStateDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->state.Get();
  *output = mojo::StringDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace media_session

#endif  // SERVICES_MEDIA_SESSION_PUBLIC_MOJOM_MEDIA_SESSION_MOJOM_SHARED_H_