// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_MEDIASTREAM_MEDIA_DEVICES_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_MEDIASTREAM_MEDIA_DEVICES_MOJOM_SHARED_H_

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
#include "third_party/blink/public/mojom/mediastream/media_devices.mojom-shared-internal.h"
#include "media/capture/mojom/video_capture_types.mojom-shared.h"
#include "media/mojo/interfaces/audio_parameters.mojom-shared.h"
#include "mojo/public/mojom/base/time.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"




namespace blink {
namespace mojom {
class MediaDeviceInfoDataView;

class VideoInputDeviceCapabilitiesDataView;

class AudioInputDeviceCapabilitiesDataView;



}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::blink::mojom::MediaDeviceInfoDataView> {
  using Data = ::blink::mojom::internal::MediaDeviceInfo_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::blink::mojom::VideoInputDeviceCapabilitiesDataView> {
  using Data = ::blink::mojom::internal::VideoInputDeviceCapabilities_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::blink::mojom::AudioInputDeviceCapabilitiesDataView> {
  using Data = ::blink::mojom::internal::AudioInputDeviceCapabilities_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace blink {
namespace mojom {


enum class MediaDeviceType : int32_t {
  
  MEDIA_AUDIO_INPUT,
  
  MEDIA_VIDEO_INPUT,
  
  MEDIA_AUDIO_OUTPUT,
  
  NUM_MEDIA_DEVICE_TYPES,
  kMinValue = 0,
  kMaxValue = 3,
};

COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) std::ostream& operator<<(std::ostream& os, MediaDeviceType value);
inline bool IsKnownEnumValue(MediaDeviceType value) {
  return internal::MediaDeviceType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class FacingMode : int32_t {
  
  NONE,
  
  USER,
  
  ENVIRONMENT,
  
  LEFT,
  
  RIGHT,
  kMinValue = 0,
  kMaxValue = 4,
};

COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) std::ostream& operator<<(std::ostream& os, FacingMode value);
inline bool IsKnownEnumValue(FacingMode value) {
  return internal::FacingMode_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class MediaDevicesDispatcherHostInterfaceBase {};

using MediaDevicesDispatcherHostPtrDataView =
    mojo::InterfacePtrDataView<MediaDevicesDispatcherHostInterfaceBase>;
using MediaDevicesDispatcherHostRequestDataView =
    mojo::InterfaceRequestDataView<MediaDevicesDispatcherHostInterfaceBase>;
using MediaDevicesDispatcherHostAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<MediaDevicesDispatcherHostInterfaceBase>;
using MediaDevicesDispatcherHostAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<MediaDevicesDispatcherHostInterfaceBase>;
class MediaDevicesListenerInterfaceBase {};

using MediaDevicesListenerPtrDataView =
    mojo::InterfacePtrDataView<MediaDevicesListenerInterfaceBase>;
using MediaDevicesListenerRequestDataView =
    mojo::InterfaceRequestDataView<MediaDevicesListenerInterfaceBase>;
using MediaDevicesListenerAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<MediaDevicesListenerInterfaceBase>;
using MediaDevicesListenerAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<MediaDevicesListenerInterfaceBase>;
class MediaDeviceInfoDataView {
 public:
  MediaDeviceInfoDataView() {}

  MediaDeviceInfoDataView(
      internal::MediaDeviceInfo_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDeviceIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDeviceId(UserType* output) {
    auto* pointer = data_->device_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetLabelDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLabel(UserType* output) {
    auto* pointer = data_->label.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetGroupIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadGroupId(UserType* output) {
    auto* pointer = data_->group_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::MediaDeviceInfo_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class VideoInputDeviceCapabilitiesDataView {
 public:
  VideoInputDeviceCapabilitiesDataView() {}

  VideoInputDeviceCapabilitiesDataView(
      internal::VideoInputDeviceCapabilities_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDeviceIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDeviceId(UserType* output) {
    auto* pointer = data_->device_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetGroupIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadGroupId(UserType* output) {
    auto* pointer = data_->group_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetFormatsDataView(
      mojo::ArrayDataView<::media::mojom::VideoCaptureFormatDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFormats(UserType* output) {
    auto* pointer = data_->formats.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::media::mojom::VideoCaptureFormatDataView>>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFacingMode(UserType* output) const {
    auto data_value = data_->facing_mode;
    return mojo::internal::Deserialize<::blink::mojom::FacingMode>(
        data_value, output);
  }

  FacingMode facing_mode() const {
    return static_cast<FacingMode>(data_->facing_mode);
  }
 private:
  internal::VideoInputDeviceCapabilities_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class AudioInputDeviceCapabilitiesDataView {
 public:
  AudioInputDeviceCapabilitiesDataView() {}

  AudioInputDeviceCapabilitiesDataView(
      internal::AudioInputDeviceCapabilities_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDeviceIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDeviceId(UserType* output) {
    auto* pointer = data_->device_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetGroupIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadGroupId(UserType* output) {
    auto* pointer = data_->group_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetParametersDataView(
      ::media::mojom::AudioParametersDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadParameters(UserType* output) {
    auto* pointer = data_->parameters.Get();
    return mojo::internal::Deserialize<::media::mojom::AudioParametersDataView>(
        pointer, output, context_);
  }
  bool is_valid() const {
    return data_->is_valid;
  }
  int32_t channels() const {
    return data_->channels;
  }
  int32_t sample_rate() const {
    return data_->sample_rate;
  }
  inline void GetLatencyDataView(
      ::mojo_base::mojom::TimeDeltaDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLatency(UserType* output) {
    auto* pointer = data_->latency.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDeltaDataView>(
        pointer, output, context_);
  }
 private:
  internal::AudioInputDeviceCapabilities_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace blink

namespace std {

template <>
struct hash<::blink::mojom::MediaDeviceType>
    : public mojo::internal::EnumHashImpl<::blink::mojom::MediaDeviceType> {};

template <>
struct hash<::blink::mojom::FacingMode>
    : public mojo::internal::EnumHashImpl<::blink::mojom::FacingMode> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::blink::mojom::MediaDeviceType, ::blink::mojom::MediaDeviceType> {
  static ::blink::mojom::MediaDeviceType ToMojom(::blink::mojom::MediaDeviceType input) { return input; }
  static bool FromMojom(::blink::mojom::MediaDeviceType input, ::blink::mojom::MediaDeviceType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::MediaDeviceType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::MediaDeviceType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::MediaDeviceType>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::blink::mojom::FacingMode, ::blink::mojom::FacingMode> {
  static ::blink::mojom::FacingMode ToMojom(::blink::mojom::FacingMode input) { return input; }
  static bool FromMojom(::blink::mojom::FacingMode input, ::blink::mojom::FacingMode* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::FacingMode, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::FacingMode, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::FacingMode>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::MediaDeviceInfoDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::MediaDeviceInfoDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::MediaDeviceInfo_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
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
        "null device_id in MediaDeviceInfo struct");
    decltype(Traits::label(input)) in_label = Traits::label(input);
    typename decltype((*output)->label)::BaseType::BufferWriter
        label_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_label, buffer, &label_writer, context);
    (*output)->label.Set(
        label_writer.is_null() ? nullptr : label_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->label.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null label in MediaDeviceInfo struct");
    decltype(Traits::group_id(input)) in_group_id = Traits::group_id(input);
    typename decltype((*output)->group_id)::BaseType::BufferWriter
        group_id_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_group_id, buffer, &group_id_writer, context);
    (*output)->group_id.Set(
        group_id_writer.is_null() ? nullptr : group_id_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->group_id.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null group_id in MediaDeviceInfo struct");
  }

  static bool Deserialize(::blink::mojom::internal::MediaDeviceInfo_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::MediaDeviceInfoDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::VideoInputDeviceCapabilitiesDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::VideoInputDeviceCapabilitiesDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::VideoInputDeviceCapabilities_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
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
        "null device_id in VideoInputDeviceCapabilities struct");
    decltype(Traits::group_id(input)) in_group_id = Traits::group_id(input);
    typename decltype((*output)->group_id)::BaseType::BufferWriter
        group_id_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_group_id, buffer, &group_id_writer, context);
    (*output)->group_id.Set(
        group_id_writer.is_null() ? nullptr : group_id_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->group_id.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null group_id in VideoInputDeviceCapabilities struct");
    decltype(Traits::formats(input)) in_formats = Traits::formats(input);
    typename decltype((*output)->formats)::BaseType::BufferWriter
        formats_writer;
    const mojo::internal::ContainerValidateParams formats_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::media::mojom::VideoCaptureFormatDataView>>(
        in_formats, buffer, &formats_writer, &formats_validate_params,
        context);
    (*output)->formats.Set(
        formats_writer.is_null() ? nullptr : formats_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->formats.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null formats in VideoInputDeviceCapabilities struct");
    mojo::internal::Serialize<::blink::mojom::FacingMode>(
        Traits::facing_mode(input), &(*output)->facing_mode);
  }

  static bool Deserialize(::blink::mojom::internal::VideoInputDeviceCapabilities_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::VideoInputDeviceCapabilitiesDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::AudioInputDeviceCapabilitiesDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::AudioInputDeviceCapabilitiesDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::AudioInputDeviceCapabilities_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
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
        "null device_id in AudioInputDeviceCapabilities struct");
    decltype(Traits::group_id(input)) in_group_id = Traits::group_id(input);
    typename decltype((*output)->group_id)::BaseType::BufferWriter
        group_id_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_group_id, buffer, &group_id_writer, context);
    (*output)->group_id.Set(
        group_id_writer.is_null() ? nullptr : group_id_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->group_id.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null group_id in AudioInputDeviceCapabilities struct");
    decltype(Traits::parameters(input)) in_parameters = Traits::parameters(input);
    typename decltype((*output)->parameters)::BaseType::BufferWriter
        parameters_writer;
    mojo::internal::Serialize<::media::mojom::AudioParametersDataView>(
        in_parameters, buffer, &parameters_writer, context);
    (*output)->parameters.Set(
        parameters_writer.is_null() ? nullptr : parameters_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->parameters.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null parameters in AudioInputDeviceCapabilities struct");
    (*output)->is_valid = Traits::is_valid(input);
    (*output)->channels = Traits::channels(input);
    (*output)->sample_rate = Traits::sample_rate(input);
    decltype(Traits::latency(input)) in_latency = Traits::latency(input);
    typename decltype((*output)->latency)::BaseType::BufferWriter
        latency_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TimeDeltaDataView>(
        in_latency, buffer, &latency_writer, context);
    (*output)->latency.Set(
        latency_writer.is_null() ? nullptr : latency_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->latency.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null latency in AudioInputDeviceCapabilities struct");
  }

  static bool Deserialize(::blink::mojom::internal::AudioInputDeviceCapabilities_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::AudioInputDeviceCapabilitiesDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace blink {
namespace mojom {

inline void MediaDeviceInfoDataView::GetDeviceIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->device_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void MediaDeviceInfoDataView::GetLabelDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->label.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void MediaDeviceInfoDataView::GetGroupIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->group_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void VideoInputDeviceCapabilitiesDataView::GetDeviceIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->device_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void VideoInputDeviceCapabilitiesDataView::GetGroupIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->group_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void VideoInputDeviceCapabilitiesDataView::GetFormatsDataView(
    mojo::ArrayDataView<::media::mojom::VideoCaptureFormatDataView>* output) {
  auto pointer = data_->formats.Get();
  *output = mojo::ArrayDataView<::media::mojom::VideoCaptureFormatDataView>(pointer, context_);
}


inline void AudioInputDeviceCapabilitiesDataView::GetDeviceIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->device_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void AudioInputDeviceCapabilitiesDataView::GetGroupIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->group_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void AudioInputDeviceCapabilitiesDataView::GetParametersDataView(
    ::media::mojom::AudioParametersDataView* output) {
  auto pointer = data_->parameters.Get();
  *output = ::media::mojom::AudioParametersDataView(pointer, context_);
}
inline void AudioInputDeviceCapabilitiesDataView::GetLatencyDataView(
    ::mojo_base::mojom::TimeDeltaDataView* output) {
  auto pointer = data_->latency.Get();
  *output = ::mojo_base::mojom::TimeDeltaDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_MEDIASTREAM_MEDIA_DEVICES_MOJOM_SHARED_H_