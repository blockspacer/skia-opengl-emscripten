// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_REMOTING_COMMON_MOJOM_SHARED_H_
#define MEDIA_MOJO_INTERFACES_REMOTING_COMMON_MOJOM_SHARED_H_

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
#include "media/mojo/interfaces/remoting_common.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace media {
namespace mojom {
class RemotingSinkMetadataDataView;



}  // namespace mojom
}  // namespace media

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::media::mojom::RemotingSinkMetadataDataView> {
  using Data = ::media::mojom::internal::RemotingSinkMetadata_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace media {
namespace mojom {


enum class RemotingStopReason : int32_t {
  
  ROUTE_TERMINATED,
  
  LOCAL_PLAYBACK,
  
  SOURCE_GONE,
  
  MESSAGE_SEND_FAILED,
  
  DATA_SEND_FAILED,
  
  UNEXPECTED_FAILURE,
  
  SERVICE_GONE,
  
  USER_DISABLED,
  kMinValue = 0,
  kMaxValue = 7,
};

 std::ostream& operator<<(std::ostream& os, RemotingStopReason value);
inline bool IsKnownEnumValue(RemotingStopReason value) {
  return internal::RemotingStopReason_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class RemotingStartFailReason : int32_t {
  
  CANNOT_START_MULTIPLE,
  
  ROUTE_TERMINATED,
  
  SERVICE_NOT_CONNECTED,
  kMinValue = 0,
  kMaxValue = 2,
};

 std::ostream& operator<<(std::ostream& os, RemotingStartFailReason value);
inline bool IsKnownEnumValue(RemotingStartFailReason value) {
  return internal::RemotingStartFailReason_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class RemotingSinkFeature : int32_t {
  
  RENDERING,
  
  CONTENT_DECRYPTION,
  kMinValue = 0,
  kMaxValue = 1,
};

 std::ostream& operator<<(std::ostream& os, RemotingSinkFeature value);
inline bool IsKnownEnumValue(RemotingSinkFeature value) {
  return internal::RemotingSinkFeature_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class RemotingSinkAudioCapability : int32_t {
  
  CODEC_BASELINE_SET,
  
  CODEC_AAC,
  
  CODEC_OPUS,
  kMinValue = 0,
  kMaxValue = 2,
};

 std::ostream& operator<<(std::ostream& os, RemotingSinkAudioCapability value);
inline bool IsKnownEnumValue(RemotingSinkAudioCapability value) {
  return internal::RemotingSinkAudioCapability_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class RemotingSinkVideoCapability : int32_t {
  
  SUPPORT_4K,
  
  CODEC_BASELINE_SET,
  
  CODEC_H264,
  
  CODEC_VP8,
  
  CODEC_VP9,
  
  CODEC_HEVC,
  kMinValue = 0,
  kMaxValue = 5,
};

 std::ostream& operator<<(std::ostream& os, RemotingSinkVideoCapability value);
inline bool IsKnownEnumValue(RemotingSinkVideoCapability value) {
  return internal::RemotingSinkVideoCapability_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
class RemotingSinkMetadataDataView {
 public:
  RemotingSinkMetadataDataView() {}

  RemotingSinkMetadataDataView(
      internal::RemotingSinkMetadata_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetFeaturesDataView(
      mojo::ArrayDataView<RemotingSinkFeature>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFeatures(UserType* output) {
    auto* pointer = data_->features.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::media::mojom::RemotingSinkFeature>>(
        pointer, output, context_);
  }
  inline void GetAudioCapabilitiesDataView(
      mojo::ArrayDataView<RemotingSinkAudioCapability>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAudioCapabilities(UserType* output) {
    auto* pointer = data_->audio_capabilities.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::media::mojom::RemotingSinkAudioCapability>>(
        pointer, output, context_);
  }
  inline void GetVideoCapabilitiesDataView(
      mojo::ArrayDataView<RemotingSinkVideoCapability>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadVideoCapabilities(UserType* output) {
    auto* pointer = data_->video_capabilities.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::media::mojom::RemotingSinkVideoCapability>>(
        pointer, output, context_);
  }
  inline void GetFriendlyNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFriendlyName(UserType* output) {
    auto* pointer = data_->friendly_name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::RemotingSinkMetadata_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace media

namespace std {

template <>
struct hash<::media::mojom::RemotingStopReason>
    : public mojo::internal::EnumHashImpl<::media::mojom::RemotingStopReason> {};

template <>
struct hash<::media::mojom::RemotingStartFailReason>
    : public mojo::internal::EnumHashImpl<::media::mojom::RemotingStartFailReason> {};

template <>
struct hash<::media::mojom::RemotingSinkFeature>
    : public mojo::internal::EnumHashImpl<::media::mojom::RemotingSinkFeature> {};

template <>
struct hash<::media::mojom::RemotingSinkAudioCapability>
    : public mojo::internal::EnumHashImpl<::media::mojom::RemotingSinkAudioCapability> {};

template <>
struct hash<::media::mojom::RemotingSinkVideoCapability>
    : public mojo::internal::EnumHashImpl<::media::mojom::RemotingSinkVideoCapability> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::media::mojom::RemotingStopReason, ::media::mojom::RemotingStopReason> {
  static ::media::mojom::RemotingStopReason ToMojom(::media::mojom::RemotingStopReason input) { return input; }
  static bool FromMojom(::media::mojom::RemotingStopReason input, ::media::mojom::RemotingStopReason* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::RemotingStopReason, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::media::mojom::RemotingStopReason, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::media::mojom::RemotingStopReason>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::media::mojom::RemotingStartFailReason, ::media::mojom::RemotingStartFailReason> {
  static ::media::mojom::RemotingStartFailReason ToMojom(::media::mojom::RemotingStartFailReason input) { return input; }
  static bool FromMojom(::media::mojom::RemotingStartFailReason input, ::media::mojom::RemotingStartFailReason* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::RemotingStartFailReason, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::media::mojom::RemotingStartFailReason, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::media::mojom::RemotingStartFailReason>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::media::mojom::RemotingSinkFeature, ::media::mojom::RemotingSinkFeature> {
  static ::media::mojom::RemotingSinkFeature ToMojom(::media::mojom::RemotingSinkFeature input) { return input; }
  static bool FromMojom(::media::mojom::RemotingSinkFeature input, ::media::mojom::RemotingSinkFeature* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::RemotingSinkFeature, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::media::mojom::RemotingSinkFeature, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::media::mojom::RemotingSinkFeature>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::media::mojom::RemotingSinkAudioCapability, ::media::mojom::RemotingSinkAudioCapability> {
  static ::media::mojom::RemotingSinkAudioCapability ToMojom(::media::mojom::RemotingSinkAudioCapability input) { return input; }
  static bool FromMojom(::media::mojom::RemotingSinkAudioCapability input, ::media::mojom::RemotingSinkAudioCapability* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::RemotingSinkAudioCapability, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::media::mojom::RemotingSinkAudioCapability, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::media::mojom::RemotingSinkAudioCapability>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::media::mojom::RemotingSinkVideoCapability, ::media::mojom::RemotingSinkVideoCapability> {
  static ::media::mojom::RemotingSinkVideoCapability ToMojom(::media::mojom::RemotingSinkVideoCapability input) { return input; }
  static bool FromMojom(::media::mojom::RemotingSinkVideoCapability input, ::media::mojom::RemotingSinkVideoCapability* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::RemotingSinkVideoCapability, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::media::mojom::RemotingSinkVideoCapability, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::media::mojom::RemotingSinkVideoCapability>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::RemotingSinkMetadataDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::media::mojom::RemotingSinkMetadataDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::media::mojom::internal::RemotingSinkMetadata_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::features(input)) in_features = Traits::features(input);
    typename decltype((*output)->features)::BaseType::BufferWriter
        features_writer;
    const mojo::internal::ContainerValidateParams features_validate_params(
        0, ::media::mojom::internal::RemotingSinkFeature_Data::Validate);
    mojo::internal::Serialize<mojo::ArrayDataView<::media::mojom::RemotingSinkFeature>>(
        in_features, buffer, &features_writer, &features_validate_params,
        context);
    (*output)->features.Set(
        features_writer.is_null() ? nullptr : features_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->features.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null features in RemotingSinkMetadata struct");
    decltype(Traits::audio_capabilities(input)) in_audio_capabilities = Traits::audio_capabilities(input);
    typename decltype((*output)->audio_capabilities)::BaseType::BufferWriter
        audio_capabilities_writer;
    const mojo::internal::ContainerValidateParams audio_capabilities_validate_params(
        0, ::media::mojom::internal::RemotingSinkAudioCapability_Data::Validate);
    mojo::internal::Serialize<mojo::ArrayDataView<::media::mojom::RemotingSinkAudioCapability>>(
        in_audio_capabilities, buffer, &audio_capabilities_writer, &audio_capabilities_validate_params,
        context);
    (*output)->audio_capabilities.Set(
        audio_capabilities_writer.is_null() ? nullptr : audio_capabilities_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->audio_capabilities.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null audio_capabilities in RemotingSinkMetadata struct");
    decltype(Traits::video_capabilities(input)) in_video_capabilities = Traits::video_capabilities(input);
    typename decltype((*output)->video_capabilities)::BaseType::BufferWriter
        video_capabilities_writer;
    const mojo::internal::ContainerValidateParams video_capabilities_validate_params(
        0, ::media::mojom::internal::RemotingSinkVideoCapability_Data::Validate);
    mojo::internal::Serialize<mojo::ArrayDataView<::media::mojom::RemotingSinkVideoCapability>>(
        in_video_capabilities, buffer, &video_capabilities_writer, &video_capabilities_validate_params,
        context);
    (*output)->video_capabilities.Set(
        video_capabilities_writer.is_null() ? nullptr : video_capabilities_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->video_capabilities.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null video_capabilities in RemotingSinkMetadata struct");
    decltype(Traits::friendly_name(input)) in_friendly_name = Traits::friendly_name(input);
    typename decltype((*output)->friendly_name)::BaseType::BufferWriter
        friendly_name_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_friendly_name, buffer, &friendly_name_writer, context);
    (*output)->friendly_name.Set(
        friendly_name_writer.is_null() ? nullptr : friendly_name_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->friendly_name.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null friendly_name in RemotingSinkMetadata struct");
  }

  static bool Deserialize(::media::mojom::internal::RemotingSinkMetadata_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::media::mojom::RemotingSinkMetadataDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace media {
namespace mojom {

inline void RemotingSinkMetadataDataView::GetFeaturesDataView(
    mojo::ArrayDataView<RemotingSinkFeature>* output) {
  auto pointer = data_->features.Get();
  *output = mojo::ArrayDataView<RemotingSinkFeature>(pointer, context_);
}
inline void RemotingSinkMetadataDataView::GetAudioCapabilitiesDataView(
    mojo::ArrayDataView<RemotingSinkAudioCapability>* output) {
  auto pointer = data_->audio_capabilities.Get();
  *output = mojo::ArrayDataView<RemotingSinkAudioCapability>(pointer, context_);
}
inline void RemotingSinkMetadataDataView::GetVideoCapabilitiesDataView(
    mojo::ArrayDataView<RemotingSinkVideoCapability>* output) {
  auto pointer = data_->video_capabilities.Get();
  *output = mojo::ArrayDataView<RemotingSinkVideoCapability>(pointer, context_);
}
inline void RemotingSinkMetadataDataView::GetFriendlyNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->friendly_name.Get();
  *output = mojo::StringDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_REMOTING_COMMON_MOJOM_SHARED_H_