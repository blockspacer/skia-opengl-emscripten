// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_MEDIASESSION_MEDIA_SESSION_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_MEDIASESSION_MEDIA_SESSION_MOJOM_SHARED_H_

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
#include "third_party/blink/public/mojom/mediasession/media_session.mojom-shared-internal.h"
#include "mojo/public/mojom/base/string16.mojom-shared.h"
#include "services/media_session/public/mojom/media_session.mojom-shared.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared.h"
#include "url/mojom/url.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"




namespace blink {
namespace mojom {
class SpecMediaMetadataDataView;



}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::blink::mojom::SpecMediaMetadataDataView> {
  using Data = ::blink::mojom::internal::SpecMediaMetadata_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace blink {
namespace mojom {


enum class MediaSessionPlaybackState : int32_t {
  
  NONE,
  
  PAUSED,
  
  PLAYING,
  kMinValue = 0,
  kMaxValue = 2,
};

COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) std::ostream& operator<<(std::ostream& os, MediaSessionPlaybackState value);
inline bool IsKnownEnumValue(MediaSessionPlaybackState value) {
  return internal::MediaSessionPlaybackState_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class MediaSessionClientInterfaceBase {};

using MediaSessionClientPtrDataView =
    mojo::InterfacePtrDataView<MediaSessionClientInterfaceBase>;
using MediaSessionClientRequestDataView =
    mojo::InterfaceRequestDataView<MediaSessionClientInterfaceBase>;
using MediaSessionClientAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<MediaSessionClientInterfaceBase>;
using MediaSessionClientAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<MediaSessionClientInterfaceBase>;
class MediaSessionServiceInterfaceBase {};

using MediaSessionServicePtrDataView =
    mojo::InterfacePtrDataView<MediaSessionServiceInterfaceBase>;
using MediaSessionServiceRequestDataView =
    mojo::InterfaceRequestDataView<MediaSessionServiceInterfaceBase>;
using MediaSessionServiceAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<MediaSessionServiceInterfaceBase>;
using MediaSessionServiceAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<MediaSessionServiceInterfaceBase>;
class SpecMediaMetadataDataView {
 public:
  SpecMediaMetadataDataView() {}

  SpecMediaMetadataDataView(
      internal::SpecMediaMetadata_Data* data,
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
  inline void GetArtworkDataView(
      mojo::ArrayDataView<::media_session::mojom::MediaImageDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadArtwork(UserType* output) {
    auto* pointer = data_->artwork.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::media_session::mojom::MediaImageDataView>>(
        pointer, output, context_);
  }
 private:
  internal::SpecMediaMetadata_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace blink

namespace std {

template <>
struct hash<::blink::mojom::MediaSessionPlaybackState>
    : public mojo::internal::EnumHashImpl<::blink::mojom::MediaSessionPlaybackState> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::blink::mojom::MediaSessionPlaybackState, ::blink::mojom::MediaSessionPlaybackState> {
  static ::blink::mojom::MediaSessionPlaybackState ToMojom(::blink::mojom::MediaSessionPlaybackState input) { return input; }
  static bool FromMojom(::blink::mojom::MediaSessionPlaybackState input, ::blink::mojom::MediaSessionPlaybackState* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::MediaSessionPlaybackState, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::MediaSessionPlaybackState, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::MediaSessionPlaybackState>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::SpecMediaMetadataDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::SpecMediaMetadataDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::SpecMediaMetadata_Data::BufferWriter* output,
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
        "null title in SpecMediaMetadata struct");
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
        "null artist in SpecMediaMetadata struct");
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
        "null album in SpecMediaMetadata struct");
    decltype(Traits::artwork(input)) in_artwork = Traits::artwork(input);
    typename decltype((*output)->artwork)::BaseType::BufferWriter
        artwork_writer;
    const mojo::internal::ContainerValidateParams artwork_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::media_session::mojom::MediaImageDataView>>(
        in_artwork, buffer, &artwork_writer, &artwork_validate_params,
        context);
    (*output)->artwork.Set(
        artwork_writer.is_null() ? nullptr : artwork_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->artwork.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null artwork in SpecMediaMetadata struct");
  }

  static bool Deserialize(::blink::mojom::internal::SpecMediaMetadata_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::SpecMediaMetadataDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace blink {
namespace mojom {

inline void SpecMediaMetadataDataView::GetTitleDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->title.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}
inline void SpecMediaMetadataDataView::GetArtistDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->artist.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}
inline void SpecMediaMetadataDataView::GetAlbumDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->album.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}
inline void SpecMediaMetadataDataView::GetArtworkDataView(
    mojo::ArrayDataView<::media_session::mojom::MediaImageDataView>* output) {
  auto pointer = data_->artwork.Get();
  *output = mojo::ArrayDataView<::media_session::mojom::MediaImageDataView>(pointer, context_);
}



}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_MEDIASESSION_MEDIA_SESSION_MOJOM_SHARED_H_