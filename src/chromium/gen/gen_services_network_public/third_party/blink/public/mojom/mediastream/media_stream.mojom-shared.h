// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_MEDIASTREAM_MEDIA_STREAM_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_MEDIASTREAM_MEDIA_STREAM_MOJOM_SHARED_H_

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
#include "third_party/blink/public/mojom/mediastream/media_stream.mojom-shared-internal.h"
#include "media/capture/mojom/video_capture_types.mojom-shared.h"
#include "media/mojo/interfaces/audio_parameters.mojom-shared.h"
#include "media/mojo/interfaces/display_media_information.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"




namespace blink {
namespace mojom {
class MediaStreamDeviceDataView;

class TrackControlsDataView;

class StreamControlsDataView;



}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::blink::mojom::MediaStreamDeviceDataView> {
  using Data = ::blink::mojom::internal::MediaStreamDevice_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::blink::mojom::TrackControlsDataView> {
  using Data = ::blink::mojom::internal::TrackControls_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::blink::mojom::StreamControlsDataView> {
  using Data = ::blink::mojom::internal::StreamControls_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace blink {
namespace mojom {


enum class MediaStreamType : int32_t {
  
  MEDIA_NO_SERVICE,
  
  MEDIA_DEVICE_AUDIO_CAPTURE,
  
  MEDIA_DEVICE_VIDEO_CAPTURE,
  
  MEDIA_GUM_TAB_AUDIO_CAPTURE,
  
  MEDIA_GUM_TAB_VIDEO_CAPTURE,
  
  MEDIA_GUM_DESKTOP_VIDEO_CAPTURE,
  
  MEDIA_GUM_DESKTOP_AUDIO_CAPTURE,
  
  MEDIA_DISPLAY_VIDEO_CAPTURE,
  
  MEDIA_DISPLAY_AUDIO_CAPTURE,
  
  NUM_MEDIA_TYPES,
  kMinValue = 0,
  kMaxValue = 9,
};

COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) std::ostream& operator<<(std::ostream& os, MediaStreamType value);
inline bool IsKnownEnumValue(MediaStreamType value) {
  return internal::MediaStreamType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class MediaStreamRequestResult : int32_t {
  
  OK,
  
  PERMISSION_DENIED,
  
  PERMISSION_DISMISSED,
  
  INVALID_STATE,
  
  NO_HARDWARE,
  
  INVALID_SECURITY_ORIGIN,
  
  TAB_CAPTURE_FAILURE,
  
  SCREEN_CAPTURE_FAILURE,
  
  CAPTURE_FAILURE,
  
  CONSTRAINT_NOT_SATISFIED,
  
  TRACK_START_FAILURE_AUDIO,
  
  TRACK_START_FAILURE_VIDEO,
  
  NOT_SUPPORTED,
  
  FAILED_DUE_TO_SHUTDOWN,
  
  KILL_SWITCH_ON,
  
  SYSTEM_PERMISSION_DENIED,
  kMinValue = 0,
  kMaxValue = 15,
};

COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) std::ostream& operator<<(std::ostream& os, MediaStreamRequestResult value);
inline bool IsKnownEnumValue(MediaStreamRequestResult value) {
  return internal::MediaStreamRequestResult_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class MediaStreamDeviceObserverInterfaceBase {};

using MediaStreamDeviceObserverPtrDataView =
    mojo::InterfacePtrDataView<MediaStreamDeviceObserverInterfaceBase>;
using MediaStreamDeviceObserverRequestDataView =
    mojo::InterfaceRequestDataView<MediaStreamDeviceObserverInterfaceBase>;
using MediaStreamDeviceObserverAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<MediaStreamDeviceObserverInterfaceBase>;
using MediaStreamDeviceObserverAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<MediaStreamDeviceObserverInterfaceBase>;
class MediaStreamDispatcherHostInterfaceBase {};

using MediaStreamDispatcherHostPtrDataView =
    mojo::InterfacePtrDataView<MediaStreamDispatcherHostInterfaceBase>;
using MediaStreamDispatcherHostRequestDataView =
    mojo::InterfaceRequestDataView<MediaStreamDispatcherHostInterfaceBase>;
using MediaStreamDispatcherHostAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<MediaStreamDispatcherHostInterfaceBase>;
using MediaStreamDispatcherHostAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<MediaStreamDispatcherHostInterfaceBase>;
class MediaStreamTrackMetricsHostInterfaceBase {};

using MediaStreamTrackMetricsHostPtrDataView =
    mojo::InterfacePtrDataView<MediaStreamTrackMetricsHostInterfaceBase>;
using MediaStreamTrackMetricsHostRequestDataView =
    mojo::InterfaceRequestDataView<MediaStreamTrackMetricsHostInterfaceBase>;
using MediaStreamTrackMetricsHostAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<MediaStreamTrackMetricsHostInterfaceBase>;
using MediaStreamTrackMetricsHostAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<MediaStreamTrackMetricsHostInterfaceBase>;
class MediaStreamDeviceDataView {
 public:
  MediaStreamDeviceDataView() {}

  MediaStreamDeviceDataView(
      internal::MediaStreamDevice_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadType(UserType* output) const {
    auto data_value = data_->type;
    return mojo::internal::Deserialize<::blink::mojom::MediaStreamType>(
        data_value, output);
  }

  MediaStreamType type() const {
    return static_cast<MediaStreamType>(data_->type);
  }
  inline void GetIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadId(UserType* output) {
    auto* pointer = data_->id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadVideoFacing(UserType* output) const {
    auto data_value = data_->video_facing;
    return mojo::internal::Deserialize<::media::mojom::VideoFacingMode>(
        data_value, output);
  }

  ::media::mojom::VideoFacingMode video_facing() const {
    return static_cast<::media::mojom::VideoFacingMode>(data_->video_facing);
  }
  inline void GetGroupIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadGroupId(UserType* output) {
    auto* pointer = data_->group_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetMatchedOutputDeviceIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMatchedOutputDeviceId(UserType* output) {
    auto* pointer = data_->matched_output_device_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadName(UserType* output) {
    auto* pointer = data_->name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetInputDataView(
      ::media::mojom::AudioParametersDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadInput(UserType* output) {
    auto* pointer = data_->input.Get();
    return mojo::internal::Deserialize<::media::mojom::AudioParametersDataView>(
        pointer, output, context_);
  }
  int32_t session_id() const {
    return data_->session_id;
  }
  inline void GetDisplayMediaInfoDataView(
      ::media::mojom::DisplayMediaInformationDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDisplayMediaInfo(UserType* output) {
    auto* pointer = data_->display_media_info.Get();
    return mojo::internal::Deserialize<::media::mojom::DisplayMediaInformationDataView>(
        pointer, output, context_);
  }
 private:
  internal::MediaStreamDevice_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class TrackControlsDataView {
 public:
  TrackControlsDataView() {}

  TrackControlsDataView(
      internal::TrackControls_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  bool requested() const {
    return data_->requested;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStreamType(UserType* output) const {
    auto data_value = data_->stream_type;
    return mojo::internal::Deserialize<::blink::mojom::MediaStreamType>(
        data_value, output);
  }

  MediaStreamType stream_type() const {
    return static_cast<MediaStreamType>(data_->stream_type);
  }
  inline void GetDeviceIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDeviceId(UserType* output) {
    auto* pointer = data_->device_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::TrackControls_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class StreamControlsDataView {
 public:
  StreamControlsDataView() {}

  StreamControlsDataView(
      internal::StreamControls_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetAudioDataView(
      TrackControlsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAudio(UserType* output) {
    auto* pointer = data_->audio.Get();
    return mojo::internal::Deserialize<::blink::mojom::TrackControlsDataView>(
        pointer, output, context_);
  }
  inline void GetVideoDataView(
      TrackControlsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadVideo(UserType* output) {
    auto* pointer = data_->video.Get();
    return mojo::internal::Deserialize<::blink::mojom::TrackControlsDataView>(
        pointer, output, context_);
  }
  bool hotword_enabled() const {
    return data_->hotword_enabled;
  }
  bool disable_local_echo() const {
    return data_->disable_local_echo;
  }
 private:
  internal::StreamControls_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace blink

namespace std {

template <>
struct hash<::blink::mojom::MediaStreamType>
    : public mojo::internal::EnumHashImpl<::blink::mojom::MediaStreamType> {};

template <>
struct hash<::blink::mojom::MediaStreamRequestResult>
    : public mojo::internal::EnumHashImpl<::blink::mojom::MediaStreamRequestResult> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::blink::mojom::MediaStreamType, ::blink::mojom::MediaStreamType> {
  static ::blink::mojom::MediaStreamType ToMojom(::blink::mojom::MediaStreamType input) { return input; }
  static bool FromMojom(::blink::mojom::MediaStreamType input, ::blink::mojom::MediaStreamType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::MediaStreamType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::MediaStreamType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::MediaStreamType>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::blink::mojom::MediaStreamRequestResult, ::blink::mojom::MediaStreamRequestResult> {
  static ::blink::mojom::MediaStreamRequestResult ToMojom(::blink::mojom::MediaStreamRequestResult input) { return input; }
  static bool FromMojom(::blink::mojom::MediaStreamRequestResult input, ::blink::mojom::MediaStreamRequestResult* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::MediaStreamRequestResult, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::MediaStreamRequestResult, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::MediaStreamRequestResult>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::MediaStreamDeviceDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::MediaStreamDeviceDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::MediaStreamDevice_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    mojo::internal::Serialize<::blink::mojom::MediaStreamType>(
        Traits::type(input), &(*output)->type);
    decltype(Traits::id(input)) in_id = Traits::id(input);
    typename decltype((*output)->id)::BaseType::BufferWriter
        id_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_id, buffer, &id_writer, context);
    (*output)->id.Set(
        id_writer.is_null() ? nullptr : id_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->id.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null id in MediaStreamDevice struct");
    mojo::internal::Serialize<::media::mojom::VideoFacingMode>(
        Traits::video_facing(input), &(*output)->video_facing);
    decltype(Traits::group_id(input)) in_group_id = Traits::group_id(input);
    typename decltype((*output)->group_id)::BaseType::BufferWriter
        group_id_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_group_id, buffer, &group_id_writer, context);
    (*output)->group_id.Set(
        group_id_writer.is_null() ? nullptr : group_id_writer.data());
    decltype(Traits::matched_output_device_id(input)) in_matched_output_device_id = Traits::matched_output_device_id(input);
    typename decltype((*output)->matched_output_device_id)::BaseType::BufferWriter
        matched_output_device_id_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_matched_output_device_id, buffer, &matched_output_device_id_writer, context);
    (*output)->matched_output_device_id.Set(
        matched_output_device_id_writer.is_null() ? nullptr : matched_output_device_id_writer.data());
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
        "null name in MediaStreamDevice struct");
    decltype(Traits::input(input)) in_input = Traits::input(input);
    typename decltype((*output)->input)::BaseType::BufferWriter
        input_writer;
    mojo::internal::Serialize<::media::mojom::AudioParametersDataView>(
        in_input, buffer, &input_writer, context);
    (*output)->input.Set(
        input_writer.is_null() ? nullptr : input_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->input.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null input in MediaStreamDevice struct");
    (*output)->session_id = Traits::session_id(input);
    decltype(Traits::display_media_info(input)) in_display_media_info = Traits::display_media_info(input);
    typename decltype((*output)->display_media_info)::BaseType::BufferWriter
        display_media_info_writer;
    mojo::internal::Serialize<::media::mojom::DisplayMediaInformationDataView>(
        in_display_media_info, buffer, &display_media_info_writer, context);
    (*output)->display_media_info.Set(
        display_media_info_writer.is_null() ? nullptr : display_media_info_writer.data());
  }

  static bool Deserialize(::blink::mojom::internal::MediaStreamDevice_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::MediaStreamDeviceDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::TrackControlsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::TrackControlsDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::TrackControls_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->requested = Traits::requested(input);
    mojo::internal::Serialize<::blink::mojom::MediaStreamType>(
        Traits::stream_type(input), &(*output)->stream_type);
    decltype(Traits::device_id(input)) in_device_id = Traits::device_id(input);
    typename decltype((*output)->device_id)::BaseType::BufferWriter
        device_id_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_device_id, buffer, &device_id_writer, context);
    (*output)->device_id.Set(
        device_id_writer.is_null() ? nullptr : device_id_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->device_id.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null device_id in TrackControls struct");
  }

  static bool Deserialize(::blink::mojom::internal::TrackControls_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::TrackControlsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::StreamControlsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::StreamControlsDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::StreamControls_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::audio(input)) in_audio = Traits::audio(input);
    typename decltype((*output)->audio)::BaseType::BufferWriter
        audio_writer;
    mojo::internal::Serialize<::blink::mojom::TrackControlsDataView>(
        in_audio, buffer, &audio_writer, context);
    (*output)->audio.Set(
        audio_writer.is_null() ? nullptr : audio_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->audio.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null audio in StreamControls struct");
    decltype(Traits::video(input)) in_video = Traits::video(input);
    typename decltype((*output)->video)::BaseType::BufferWriter
        video_writer;
    mojo::internal::Serialize<::blink::mojom::TrackControlsDataView>(
        in_video, buffer, &video_writer, context);
    (*output)->video.Set(
        video_writer.is_null() ? nullptr : video_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->video.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null video in StreamControls struct");
    (*output)->hotword_enabled = Traits::hotword_enabled(input);
    (*output)->disable_local_echo = Traits::disable_local_echo(input);
  }

  static bool Deserialize(::blink::mojom::internal::StreamControls_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::StreamControlsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace blink {
namespace mojom {

inline void MediaStreamDeviceDataView::GetIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void MediaStreamDeviceDataView::GetGroupIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->group_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void MediaStreamDeviceDataView::GetMatchedOutputDeviceIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->matched_output_device_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void MediaStreamDeviceDataView::GetNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->name.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void MediaStreamDeviceDataView::GetInputDataView(
    ::media::mojom::AudioParametersDataView* output) {
  auto pointer = data_->input.Get();
  *output = ::media::mojom::AudioParametersDataView(pointer, context_);
}
inline void MediaStreamDeviceDataView::GetDisplayMediaInfoDataView(
    ::media::mojom::DisplayMediaInformationDataView* output) {
  auto pointer = data_->display_media_info.Get();
  *output = ::media::mojom::DisplayMediaInformationDataView(pointer, context_);
}


inline void TrackControlsDataView::GetDeviceIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->device_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void StreamControlsDataView::GetAudioDataView(
    TrackControlsDataView* output) {
  auto pointer = data_->audio.Get();
  *output = TrackControlsDataView(pointer, context_);
}
inline void StreamControlsDataView::GetVideoDataView(
    TrackControlsDataView* output) {
  auto pointer = data_->video.Get();
  *output = TrackControlsDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_MEDIASTREAM_MEDIA_STREAM_MOJOM_SHARED_H_