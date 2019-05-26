// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_CAPTURE_MOJOM_IMAGE_CAPTURE_MOJOM_SHARED_H_
#define MEDIA_CAPTURE_MOJOM_IMAGE_CAPTURE_MOJOM_SHARED_H_

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
#include "media/capture/mojom/image_capture.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace media {
namespace mojom {
class RangeDataView;

class PhotoStateDataView;

class Point2DDataView;

class PhotoSettingsDataView;

class BlobDataView;



}  // namespace mojom
}  // namespace media

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::media::mojom::RangeDataView> {
  using Data = ::media::mojom::internal::Range_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::media::mojom::PhotoStateDataView> {
  using Data = ::media::mojom::internal::PhotoState_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::media::mojom::Point2DDataView> {
  using Data = ::media::mojom::internal::Point2D_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::media::mojom::PhotoSettingsDataView> {
  using Data = ::media::mojom::internal::PhotoSettings_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::media::mojom::BlobDataView> {
  using Data = ::media::mojom::internal::Blob_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace media {
namespace mojom {


enum class MeteringMode : int32_t {
  
  NONE,
  
  MANUAL,
  
  SINGLE_SHOT,
  
  CONTINUOUS,
  kMinValue = 0,
  kMaxValue = 3,
};

 std::ostream& operator<<(std::ostream& os, MeteringMode value);
inline bool IsKnownEnumValue(MeteringMode value) {
  return internal::MeteringMode_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class RedEyeReduction : int32_t {
  
  NEVER,
  
  ALWAYS,
  
  CONTROLLABLE,
  kMinValue = 0,
  kMaxValue = 2,
};

 std::ostream& operator<<(std::ostream& os, RedEyeReduction value);
inline bool IsKnownEnumValue(RedEyeReduction value) {
  return internal::RedEyeReduction_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class FillLightMode : int32_t {
  
  OFF,
  
  AUTO,
  
  FLASH,
  kMinValue = 0,
  kMaxValue = 2,
};

 std::ostream& operator<<(std::ostream& os, FillLightMode value);
inline bool IsKnownEnumValue(FillLightMode value) {
  return internal::FillLightMode_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class ImageCaptureInterfaceBase {};

using ImageCapturePtrDataView =
    mojo::InterfacePtrDataView<ImageCaptureInterfaceBase>;
using ImageCaptureRequestDataView =
    mojo::InterfaceRequestDataView<ImageCaptureInterfaceBase>;
using ImageCaptureAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<ImageCaptureInterfaceBase>;
using ImageCaptureAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<ImageCaptureInterfaceBase>;
class RangeDataView {
 public:
  RangeDataView() {}

  RangeDataView(
      internal::Range_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  double max() const {
    return data_->max;
  }
  double min() const {
    return data_->min;
  }
  double current() const {
    return data_->current;
  }
  double step() const {
    return data_->step;
  }
 private:
  internal::Range_Data* data_ = nullptr;
};

class PhotoStateDataView {
 public:
  PhotoStateDataView() {}

  PhotoStateDataView(
      internal::PhotoState_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSupportedWhiteBalanceModesDataView(
      mojo::ArrayDataView<MeteringMode>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSupportedWhiteBalanceModes(UserType* output) {
    auto* pointer = data_->supported_white_balance_modes.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::media::mojom::MeteringMode>>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCurrentWhiteBalanceMode(UserType* output) const {
    auto data_value = data_->current_white_balance_mode;
    return mojo::internal::Deserialize<::media::mojom::MeteringMode>(
        data_value, output);
  }

  MeteringMode current_white_balance_mode() const {
    return static_cast<MeteringMode>(data_->current_white_balance_mode);
  }
  inline void GetSupportedExposureModesDataView(
      mojo::ArrayDataView<MeteringMode>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSupportedExposureModes(UserType* output) {
    auto* pointer = data_->supported_exposure_modes.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::media::mojom::MeteringMode>>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCurrentExposureMode(UserType* output) const {
    auto data_value = data_->current_exposure_mode;
    return mojo::internal::Deserialize<::media::mojom::MeteringMode>(
        data_value, output);
  }

  MeteringMode current_exposure_mode() const {
    return static_cast<MeteringMode>(data_->current_exposure_mode);
  }
  inline void GetSupportedFocusModesDataView(
      mojo::ArrayDataView<MeteringMode>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSupportedFocusModes(UserType* output) {
    auto* pointer = data_->supported_focus_modes.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::media::mojom::MeteringMode>>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCurrentFocusMode(UserType* output) const {
    auto data_value = data_->current_focus_mode;
    return mojo::internal::Deserialize<::media::mojom::MeteringMode>(
        data_value, output);
  }

  MeteringMode current_focus_mode() const {
    return static_cast<MeteringMode>(data_->current_focus_mode);
  }
  inline void GetPointsOfInterestDataView(
      mojo::ArrayDataView<Point2DDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPointsOfInterest(UserType* output) {
    auto* pointer = data_->points_of_interest.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::media::mojom::Point2DDataView>>(
        pointer, output, context_);
  }
  inline void GetExposureCompensationDataView(
      RangeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadExposureCompensation(UserType* output) {
    auto* pointer = data_->exposure_compensation.Get();
    return mojo::internal::Deserialize<::media::mojom::RangeDataView>(
        pointer, output, context_);
  }
  inline void GetExposureTimeDataView(
      RangeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadExposureTime(UserType* output) {
    auto* pointer = data_->exposure_time.Get();
    return mojo::internal::Deserialize<::media::mojom::RangeDataView>(
        pointer, output, context_);
  }
  inline void GetColorTemperatureDataView(
      RangeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadColorTemperature(UserType* output) {
    auto* pointer = data_->color_temperature.Get();
    return mojo::internal::Deserialize<::media::mojom::RangeDataView>(
        pointer, output, context_);
  }
  inline void GetIsoDataView(
      RangeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadIso(UserType* output) {
    auto* pointer = data_->iso.Get();
    return mojo::internal::Deserialize<::media::mojom::RangeDataView>(
        pointer, output, context_);
  }
  inline void GetBrightnessDataView(
      RangeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBrightness(UserType* output) {
    auto* pointer = data_->brightness.Get();
    return mojo::internal::Deserialize<::media::mojom::RangeDataView>(
        pointer, output, context_);
  }
  inline void GetContrastDataView(
      RangeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadContrast(UserType* output) {
    auto* pointer = data_->contrast.Get();
    return mojo::internal::Deserialize<::media::mojom::RangeDataView>(
        pointer, output, context_);
  }
  inline void GetSaturationDataView(
      RangeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSaturation(UserType* output) {
    auto* pointer = data_->saturation.Get();
    return mojo::internal::Deserialize<::media::mojom::RangeDataView>(
        pointer, output, context_);
  }
  inline void GetSharpnessDataView(
      RangeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSharpness(UserType* output) {
    auto* pointer = data_->sharpness.Get();
    return mojo::internal::Deserialize<::media::mojom::RangeDataView>(
        pointer, output, context_);
  }
  inline void GetFocusDistanceDataView(
      RangeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFocusDistance(UserType* output) {
    auto* pointer = data_->focus_distance.Get();
    return mojo::internal::Deserialize<::media::mojom::RangeDataView>(
        pointer, output, context_);
  }
  inline void GetZoomDataView(
      RangeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadZoom(UserType* output) {
    auto* pointer = data_->zoom.Get();
    return mojo::internal::Deserialize<::media::mojom::RangeDataView>(
        pointer, output, context_);
  }
  bool supports_torch() const {
    return data_->supports_torch;
  }
  bool torch() const {
    return data_->torch;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRedEyeReduction(UserType* output) const {
    auto data_value = data_->red_eye_reduction;
    return mojo::internal::Deserialize<::media::mojom::RedEyeReduction>(
        data_value, output);
  }

  RedEyeReduction red_eye_reduction() const {
    return static_cast<RedEyeReduction>(data_->red_eye_reduction);
  }
  inline void GetHeightDataView(
      RangeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadHeight(UserType* output) {
    auto* pointer = data_->height.Get();
    return mojo::internal::Deserialize<::media::mojom::RangeDataView>(
        pointer, output, context_);
  }
  inline void GetWidthDataView(
      RangeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadWidth(UserType* output) {
    auto* pointer = data_->width.Get();
    return mojo::internal::Deserialize<::media::mojom::RangeDataView>(
        pointer, output, context_);
  }
  inline void GetFillLightModeDataView(
      mojo::ArrayDataView<FillLightMode>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFillLightMode(UserType* output) {
    auto* pointer = data_->fill_light_mode.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::media::mojom::FillLightMode>>(
        pointer, output, context_);
  }
 private:
  internal::PhotoState_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Point2DDataView {
 public:
  Point2DDataView() {}

  Point2DDataView(
      internal::Point2D_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  double x() const {
    return data_->x;
  }
  double y() const {
    return data_->y;
  }
 private:
  internal::Point2D_Data* data_ = nullptr;
};

class PhotoSettingsDataView {
 public:
  PhotoSettingsDataView() {}

  PhotoSettingsDataView(
      internal::PhotoSettings_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  bool has_white_balance_mode() const {
    return data_->has_white_balance_mode;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadWhiteBalanceMode(UserType* output) const {
    auto data_value = data_->white_balance_mode;
    return mojo::internal::Deserialize<::media::mojom::MeteringMode>(
        data_value, output);
  }

  MeteringMode white_balance_mode() const {
    return static_cast<MeteringMode>(data_->white_balance_mode);
  }
  bool has_exposure_mode() const {
    return data_->has_exposure_mode;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadExposureMode(UserType* output) const {
    auto data_value = data_->exposure_mode;
    return mojo::internal::Deserialize<::media::mojom::MeteringMode>(
        data_value, output);
  }

  MeteringMode exposure_mode() const {
    return static_cast<MeteringMode>(data_->exposure_mode);
  }
  bool has_focus_mode() const {
    return data_->has_focus_mode;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFocusMode(UserType* output) const {
    auto data_value = data_->focus_mode;
    return mojo::internal::Deserialize<::media::mojom::MeteringMode>(
        data_value, output);
  }

  MeteringMode focus_mode() const {
    return static_cast<MeteringMode>(data_->focus_mode);
  }
  inline void GetPointsOfInterestDataView(
      mojo::ArrayDataView<Point2DDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPointsOfInterest(UserType* output) {
    auto* pointer = data_->points_of_interest.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::media::mojom::Point2DDataView>>(
        pointer, output, context_);
  }
  bool has_exposure_compensation() const {
    return data_->has_exposure_compensation;
  }
  double exposure_compensation() const {
    return data_->exposure_compensation;
  }
  bool has_exposure_time() const {
    return data_->has_exposure_time;
  }
  double exposure_time() const {
    return data_->exposure_time;
  }
  bool has_color_temperature() const {
    return data_->has_color_temperature;
  }
  double color_temperature() const {
    return data_->color_temperature;
  }
  bool has_iso() const {
    return data_->has_iso;
  }
  double iso() const {
    return data_->iso;
  }
  bool has_brightness() const {
    return data_->has_brightness;
  }
  double brightness() const {
    return data_->brightness;
  }
  bool has_contrast() const {
    return data_->has_contrast;
  }
  double contrast() const {
    return data_->contrast;
  }
  bool has_saturation() const {
    return data_->has_saturation;
  }
  double saturation() const {
    return data_->saturation;
  }
  bool has_sharpness() const {
    return data_->has_sharpness;
  }
  double sharpness() const {
    return data_->sharpness;
  }
  bool has_focus_distance() const {
    return data_->has_focus_distance;
  }
  double focus_distance() const {
    return data_->focus_distance;
  }
  bool has_zoom() const {
    return data_->has_zoom;
  }
  double zoom() const {
    return data_->zoom;
  }
  bool has_torch() const {
    return data_->has_torch;
  }
  bool torch() const {
    return data_->torch;
  }
  bool has_fill_light_mode() const {
    return data_->has_fill_light_mode;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFillLightMode(UserType* output) const {
    auto data_value = data_->fill_light_mode;
    return mojo::internal::Deserialize<::media::mojom::FillLightMode>(
        data_value, output);
  }

  FillLightMode fill_light_mode() const {
    return static_cast<FillLightMode>(data_->fill_light_mode);
  }
  bool has_width() const {
    return data_->has_width;
  }
  double width() const {
    return data_->width;
  }
  bool has_height() const {
    return data_->has_height;
  }
  double height() const {
    return data_->height;
  }
  bool has_red_eye_reduction() const {
    return data_->has_red_eye_reduction;
  }
  bool red_eye_reduction() const {
    return data_->red_eye_reduction;
  }
 private:
  internal::PhotoSettings_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class BlobDataView {
 public:
  BlobDataView() {}

  BlobDataView(
      internal::Blob_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetMimeTypeDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMimeType(UserType* output) {
    auto* pointer = data_->mime_type.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetDataDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadData(UserType* output) {
    auto* pointer = data_->data.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
 private:
  internal::Blob_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace media

namespace std {

template <>
struct hash<::media::mojom::MeteringMode>
    : public mojo::internal::EnumHashImpl<::media::mojom::MeteringMode> {};

template <>
struct hash<::media::mojom::RedEyeReduction>
    : public mojo::internal::EnumHashImpl<::media::mojom::RedEyeReduction> {};

template <>
struct hash<::media::mojom::FillLightMode>
    : public mojo::internal::EnumHashImpl<::media::mojom::FillLightMode> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::media::mojom::MeteringMode, ::media::mojom::MeteringMode> {
  static ::media::mojom::MeteringMode ToMojom(::media::mojom::MeteringMode input) { return input; }
  static bool FromMojom(::media::mojom::MeteringMode input, ::media::mojom::MeteringMode* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::MeteringMode, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::media::mojom::MeteringMode, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::media::mojom::MeteringMode>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::media::mojom::RedEyeReduction, ::media::mojom::RedEyeReduction> {
  static ::media::mojom::RedEyeReduction ToMojom(::media::mojom::RedEyeReduction input) { return input; }
  static bool FromMojom(::media::mojom::RedEyeReduction input, ::media::mojom::RedEyeReduction* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::RedEyeReduction, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::media::mojom::RedEyeReduction, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::media::mojom::RedEyeReduction>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::media::mojom::FillLightMode, ::media::mojom::FillLightMode> {
  static ::media::mojom::FillLightMode ToMojom(::media::mojom::FillLightMode input) { return input; }
  static bool FromMojom(::media::mojom::FillLightMode input, ::media::mojom::FillLightMode* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::FillLightMode, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::media::mojom::FillLightMode, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::media::mojom::FillLightMode>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::RangeDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::media::mojom::RangeDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::media::mojom::internal::Range_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->max = Traits::max(input);
    (*output)->min = Traits::min(input);
    (*output)->current = Traits::current(input);
    (*output)->step = Traits::step(input);
  }

  static bool Deserialize(::media::mojom::internal::Range_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::media::mojom::RangeDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::PhotoStateDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::media::mojom::PhotoStateDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::media::mojom::internal::PhotoState_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::supported_white_balance_modes(input)) in_supported_white_balance_modes = Traits::supported_white_balance_modes(input);
    typename decltype((*output)->supported_white_balance_modes)::BaseType::BufferWriter
        supported_white_balance_modes_writer;
    const mojo::internal::ContainerValidateParams supported_white_balance_modes_validate_params(
        0, ::media::mojom::internal::MeteringMode_Data::Validate);
    mojo::internal::Serialize<mojo::ArrayDataView<::media::mojom::MeteringMode>>(
        in_supported_white_balance_modes, buffer, &supported_white_balance_modes_writer, &supported_white_balance_modes_validate_params,
        context);
    (*output)->supported_white_balance_modes.Set(
        supported_white_balance_modes_writer.is_null() ? nullptr : supported_white_balance_modes_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->supported_white_balance_modes.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null supported_white_balance_modes in PhotoState struct");
    mojo::internal::Serialize<::media::mojom::MeteringMode>(
        Traits::current_white_balance_mode(input), &(*output)->current_white_balance_mode);
    decltype(Traits::supported_exposure_modes(input)) in_supported_exposure_modes = Traits::supported_exposure_modes(input);
    typename decltype((*output)->supported_exposure_modes)::BaseType::BufferWriter
        supported_exposure_modes_writer;
    const mojo::internal::ContainerValidateParams supported_exposure_modes_validate_params(
        0, ::media::mojom::internal::MeteringMode_Data::Validate);
    mojo::internal::Serialize<mojo::ArrayDataView<::media::mojom::MeteringMode>>(
        in_supported_exposure_modes, buffer, &supported_exposure_modes_writer, &supported_exposure_modes_validate_params,
        context);
    (*output)->supported_exposure_modes.Set(
        supported_exposure_modes_writer.is_null() ? nullptr : supported_exposure_modes_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->supported_exposure_modes.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null supported_exposure_modes in PhotoState struct");
    mojo::internal::Serialize<::media::mojom::MeteringMode>(
        Traits::current_exposure_mode(input), &(*output)->current_exposure_mode);
    decltype(Traits::supported_focus_modes(input)) in_supported_focus_modes = Traits::supported_focus_modes(input);
    typename decltype((*output)->supported_focus_modes)::BaseType::BufferWriter
        supported_focus_modes_writer;
    const mojo::internal::ContainerValidateParams supported_focus_modes_validate_params(
        0, ::media::mojom::internal::MeteringMode_Data::Validate);
    mojo::internal::Serialize<mojo::ArrayDataView<::media::mojom::MeteringMode>>(
        in_supported_focus_modes, buffer, &supported_focus_modes_writer, &supported_focus_modes_validate_params,
        context);
    (*output)->supported_focus_modes.Set(
        supported_focus_modes_writer.is_null() ? nullptr : supported_focus_modes_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->supported_focus_modes.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null supported_focus_modes in PhotoState struct");
    mojo::internal::Serialize<::media::mojom::MeteringMode>(
        Traits::current_focus_mode(input), &(*output)->current_focus_mode);
    decltype(Traits::points_of_interest(input)) in_points_of_interest = Traits::points_of_interest(input);
    typename decltype((*output)->points_of_interest)::BaseType::BufferWriter
        points_of_interest_writer;
    const mojo::internal::ContainerValidateParams points_of_interest_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::media::mojom::Point2DDataView>>(
        in_points_of_interest, buffer, &points_of_interest_writer, &points_of_interest_validate_params,
        context);
    (*output)->points_of_interest.Set(
        points_of_interest_writer.is_null() ? nullptr : points_of_interest_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->points_of_interest.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null points_of_interest in PhotoState struct");
    decltype(Traits::exposure_compensation(input)) in_exposure_compensation = Traits::exposure_compensation(input);
    typename decltype((*output)->exposure_compensation)::BaseType::BufferWriter
        exposure_compensation_writer;
    mojo::internal::Serialize<::media::mojom::RangeDataView>(
        in_exposure_compensation, buffer, &exposure_compensation_writer, context);
    (*output)->exposure_compensation.Set(
        exposure_compensation_writer.is_null() ? nullptr : exposure_compensation_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->exposure_compensation.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null exposure_compensation in PhotoState struct");
    decltype(Traits::exposure_time(input)) in_exposure_time = Traits::exposure_time(input);
    typename decltype((*output)->exposure_time)::BaseType::BufferWriter
        exposure_time_writer;
    mojo::internal::Serialize<::media::mojom::RangeDataView>(
        in_exposure_time, buffer, &exposure_time_writer, context);
    (*output)->exposure_time.Set(
        exposure_time_writer.is_null() ? nullptr : exposure_time_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->exposure_time.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null exposure_time in PhotoState struct");
    decltype(Traits::color_temperature(input)) in_color_temperature = Traits::color_temperature(input);
    typename decltype((*output)->color_temperature)::BaseType::BufferWriter
        color_temperature_writer;
    mojo::internal::Serialize<::media::mojom::RangeDataView>(
        in_color_temperature, buffer, &color_temperature_writer, context);
    (*output)->color_temperature.Set(
        color_temperature_writer.is_null() ? nullptr : color_temperature_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->color_temperature.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null color_temperature in PhotoState struct");
    decltype(Traits::iso(input)) in_iso = Traits::iso(input);
    typename decltype((*output)->iso)::BaseType::BufferWriter
        iso_writer;
    mojo::internal::Serialize<::media::mojom::RangeDataView>(
        in_iso, buffer, &iso_writer, context);
    (*output)->iso.Set(
        iso_writer.is_null() ? nullptr : iso_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->iso.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null iso in PhotoState struct");
    decltype(Traits::brightness(input)) in_brightness = Traits::brightness(input);
    typename decltype((*output)->brightness)::BaseType::BufferWriter
        brightness_writer;
    mojo::internal::Serialize<::media::mojom::RangeDataView>(
        in_brightness, buffer, &brightness_writer, context);
    (*output)->brightness.Set(
        brightness_writer.is_null() ? nullptr : brightness_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->brightness.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null brightness in PhotoState struct");
    decltype(Traits::contrast(input)) in_contrast = Traits::contrast(input);
    typename decltype((*output)->contrast)::BaseType::BufferWriter
        contrast_writer;
    mojo::internal::Serialize<::media::mojom::RangeDataView>(
        in_contrast, buffer, &contrast_writer, context);
    (*output)->contrast.Set(
        contrast_writer.is_null() ? nullptr : contrast_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->contrast.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null contrast in PhotoState struct");
    decltype(Traits::saturation(input)) in_saturation = Traits::saturation(input);
    typename decltype((*output)->saturation)::BaseType::BufferWriter
        saturation_writer;
    mojo::internal::Serialize<::media::mojom::RangeDataView>(
        in_saturation, buffer, &saturation_writer, context);
    (*output)->saturation.Set(
        saturation_writer.is_null() ? nullptr : saturation_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->saturation.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null saturation in PhotoState struct");
    decltype(Traits::sharpness(input)) in_sharpness = Traits::sharpness(input);
    typename decltype((*output)->sharpness)::BaseType::BufferWriter
        sharpness_writer;
    mojo::internal::Serialize<::media::mojom::RangeDataView>(
        in_sharpness, buffer, &sharpness_writer, context);
    (*output)->sharpness.Set(
        sharpness_writer.is_null() ? nullptr : sharpness_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->sharpness.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null sharpness in PhotoState struct");
    decltype(Traits::focus_distance(input)) in_focus_distance = Traits::focus_distance(input);
    typename decltype((*output)->focus_distance)::BaseType::BufferWriter
        focus_distance_writer;
    mojo::internal::Serialize<::media::mojom::RangeDataView>(
        in_focus_distance, buffer, &focus_distance_writer, context);
    (*output)->focus_distance.Set(
        focus_distance_writer.is_null() ? nullptr : focus_distance_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->focus_distance.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null focus_distance in PhotoState struct");
    decltype(Traits::zoom(input)) in_zoom = Traits::zoom(input);
    typename decltype((*output)->zoom)::BaseType::BufferWriter
        zoom_writer;
    mojo::internal::Serialize<::media::mojom::RangeDataView>(
        in_zoom, buffer, &zoom_writer, context);
    (*output)->zoom.Set(
        zoom_writer.is_null() ? nullptr : zoom_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->zoom.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null zoom in PhotoState struct");
    (*output)->supports_torch = Traits::supports_torch(input);
    (*output)->torch = Traits::torch(input);
    mojo::internal::Serialize<::media::mojom::RedEyeReduction>(
        Traits::red_eye_reduction(input), &(*output)->red_eye_reduction);
    decltype(Traits::height(input)) in_height = Traits::height(input);
    typename decltype((*output)->height)::BaseType::BufferWriter
        height_writer;
    mojo::internal::Serialize<::media::mojom::RangeDataView>(
        in_height, buffer, &height_writer, context);
    (*output)->height.Set(
        height_writer.is_null() ? nullptr : height_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->height.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null height in PhotoState struct");
    decltype(Traits::width(input)) in_width = Traits::width(input);
    typename decltype((*output)->width)::BaseType::BufferWriter
        width_writer;
    mojo::internal::Serialize<::media::mojom::RangeDataView>(
        in_width, buffer, &width_writer, context);
    (*output)->width.Set(
        width_writer.is_null() ? nullptr : width_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->width.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null width in PhotoState struct");
    decltype(Traits::fill_light_mode(input)) in_fill_light_mode = Traits::fill_light_mode(input);
    typename decltype((*output)->fill_light_mode)::BaseType::BufferWriter
        fill_light_mode_writer;
    const mojo::internal::ContainerValidateParams fill_light_mode_validate_params(
        0, ::media::mojom::internal::FillLightMode_Data::Validate);
    mojo::internal::Serialize<mojo::ArrayDataView<::media::mojom::FillLightMode>>(
        in_fill_light_mode, buffer, &fill_light_mode_writer, &fill_light_mode_validate_params,
        context);
    (*output)->fill_light_mode.Set(
        fill_light_mode_writer.is_null() ? nullptr : fill_light_mode_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->fill_light_mode.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null fill_light_mode in PhotoState struct");
  }

  static bool Deserialize(::media::mojom::internal::PhotoState_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::media::mojom::PhotoStateDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::Point2DDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::media::mojom::Point2DDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::media::mojom::internal::Point2D_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->x = Traits::x(input);
    (*output)->y = Traits::y(input);
  }

  static bool Deserialize(::media::mojom::internal::Point2D_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::media::mojom::Point2DDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::PhotoSettingsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::media::mojom::PhotoSettingsDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::media::mojom::internal::PhotoSettings_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->has_white_balance_mode = Traits::has_white_balance_mode(input);
    mojo::internal::Serialize<::media::mojom::MeteringMode>(
        Traits::white_balance_mode(input), &(*output)->white_balance_mode);
    (*output)->has_exposure_mode = Traits::has_exposure_mode(input);
    mojo::internal::Serialize<::media::mojom::MeteringMode>(
        Traits::exposure_mode(input), &(*output)->exposure_mode);
    (*output)->has_focus_mode = Traits::has_focus_mode(input);
    mojo::internal::Serialize<::media::mojom::MeteringMode>(
        Traits::focus_mode(input), &(*output)->focus_mode);
    decltype(Traits::points_of_interest(input)) in_points_of_interest = Traits::points_of_interest(input);
    typename decltype((*output)->points_of_interest)::BaseType::BufferWriter
        points_of_interest_writer;
    const mojo::internal::ContainerValidateParams points_of_interest_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::media::mojom::Point2DDataView>>(
        in_points_of_interest, buffer, &points_of_interest_writer, &points_of_interest_validate_params,
        context);
    (*output)->points_of_interest.Set(
        points_of_interest_writer.is_null() ? nullptr : points_of_interest_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->points_of_interest.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null points_of_interest in PhotoSettings struct");
    (*output)->has_exposure_compensation = Traits::has_exposure_compensation(input);
    (*output)->exposure_compensation = Traits::exposure_compensation(input);
    (*output)->has_exposure_time = Traits::has_exposure_time(input);
    (*output)->exposure_time = Traits::exposure_time(input);
    (*output)->has_color_temperature = Traits::has_color_temperature(input);
    (*output)->color_temperature = Traits::color_temperature(input);
    (*output)->has_iso = Traits::has_iso(input);
    (*output)->iso = Traits::iso(input);
    (*output)->has_brightness = Traits::has_brightness(input);
    (*output)->brightness = Traits::brightness(input);
    (*output)->has_contrast = Traits::has_contrast(input);
    (*output)->contrast = Traits::contrast(input);
    (*output)->has_saturation = Traits::has_saturation(input);
    (*output)->saturation = Traits::saturation(input);
    (*output)->has_sharpness = Traits::has_sharpness(input);
    (*output)->sharpness = Traits::sharpness(input);
    (*output)->has_focus_distance = Traits::has_focus_distance(input);
    (*output)->focus_distance = Traits::focus_distance(input);
    (*output)->has_zoom = Traits::has_zoom(input);
    (*output)->zoom = Traits::zoom(input);
    (*output)->has_torch = Traits::has_torch(input);
    (*output)->torch = Traits::torch(input);
    (*output)->has_fill_light_mode = Traits::has_fill_light_mode(input);
    mojo::internal::Serialize<::media::mojom::FillLightMode>(
        Traits::fill_light_mode(input), &(*output)->fill_light_mode);
    (*output)->has_width = Traits::has_width(input);
    (*output)->width = Traits::width(input);
    (*output)->has_height = Traits::has_height(input);
    (*output)->height = Traits::height(input);
    (*output)->has_red_eye_reduction = Traits::has_red_eye_reduction(input);
    (*output)->red_eye_reduction = Traits::red_eye_reduction(input);
  }

  static bool Deserialize(::media::mojom::internal::PhotoSettings_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::media::mojom::PhotoSettingsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::BlobDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::media::mojom::BlobDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::media::mojom::internal::Blob_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::mime_type(input)) in_mime_type = Traits::mime_type(input);
    typename decltype((*output)->mime_type)::BaseType::BufferWriter
        mime_type_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_mime_type, buffer, &mime_type_writer, context);
    (*output)->mime_type.Set(
        mime_type_writer.is_null() ? nullptr : mime_type_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->mime_type.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null mime_type in Blob struct");
    decltype(Traits::data(input)) in_data = Traits::data(input);
    typename decltype((*output)->data)::BaseType::BufferWriter
        data_writer;
    const mojo::internal::ContainerValidateParams data_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
        in_data, buffer, &data_writer, &data_validate_params,
        context);
    (*output)->data.Set(
        data_writer.is_null() ? nullptr : data_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->data.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null data in Blob struct");
  }

  static bool Deserialize(::media::mojom::internal::Blob_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::media::mojom::BlobDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace media {
namespace mojom {



inline void PhotoStateDataView::GetSupportedWhiteBalanceModesDataView(
    mojo::ArrayDataView<MeteringMode>* output) {
  auto pointer = data_->supported_white_balance_modes.Get();
  *output = mojo::ArrayDataView<MeteringMode>(pointer, context_);
}
inline void PhotoStateDataView::GetSupportedExposureModesDataView(
    mojo::ArrayDataView<MeteringMode>* output) {
  auto pointer = data_->supported_exposure_modes.Get();
  *output = mojo::ArrayDataView<MeteringMode>(pointer, context_);
}
inline void PhotoStateDataView::GetSupportedFocusModesDataView(
    mojo::ArrayDataView<MeteringMode>* output) {
  auto pointer = data_->supported_focus_modes.Get();
  *output = mojo::ArrayDataView<MeteringMode>(pointer, context_);
}
inline void PhotoStateDataView::GetPointsOfInterestDataView(
    mojo::ArrayDataView<Point2DDataView>* output) {
  auto pointer = data_->points_of_interest.Get();
  *output = mojo::ArrayDataView<Point2DDataView>(pointer, context_);
}
inline void PhotoStateDataView::GetExposureCompensationDataView(
    RangeDataView* output) {
  auto pointer = data_->exposure_compensation.Get();
  *output = RangeDataView(pointer, context_);
}
inline void PhotoStateDataView::GetExposureTimeDataView(
    RangeDataView* output) {
  auto pointer = data_->exposure_time.Get();
  *output = RangeDataView(pointer, context_);
}
inline void PhotoStateDataView::GetColorTemperatureDataView(
    RangeDataView* output) {
  auto pointer = data_->color_temperature.Get();
  *output = RangeDataView(pointer, context_);
}
inline void PhotoStateDataView::GetIsoDataView(
    RangeDataView* output) {
  auto pointer = data_->iso.Get();
  *output = RangeDataView(pointer, context_);
}
inline void PhotoStateDataView::GetBrightnessDataView(
    RangeDataView* output) {
  auto pointer = data_->brightness.Get();
  *output = RangeDataView(pointer, context_);
}
inline void PhotoStateDataView::GetContrastDataView(
    RangeDataView* output) {
  auto pointer = data_->contrast.Get();
  *output = RangeDataView(pointer, context_);
}
inline void PhotoStateDataView::GetSaturationDataView(
    RangeDataView* output) {
  auto pointer = data_->saturation.Get();
  *output = RangeDataView(pointer, context_);
}
inline void PhotoStateDataView::GetSharpnessDataView(
    RangeDataView* output) {
  auto pointer = data_->sharpness.Get();
  *output = RangeDataView(pointer, context_);
}
inline void PhotoStateDataView::GetFocusDistanceDataView(
    RangeDataView* output) {
  auto pointer = data_->focus_distance.Get();
  *output = RangeDataView(pointer, context_);
}
inline void PhotoStateDataView::GetZoomDataView(
    RangeDataView* output) {
  auto pointer = data_->zoom.Get();
  *output = RangeDataView(pointer, context_);
}
inline void PhotoStateDataView::GetHeightDataView(
    RangeDataView* output) {
  auto pointer = data_->height.Get();
  *output = RangeDataView(pointer, context_);
}
inline void PhotoStateDataView::GetWidthDataView(
    RangeDataView* output) {
  auto pointer = data_->width.Get();
  *output = RangeDataView(pointer, context_);
}
inline void PhotoStateDataView::GetFillLightModeDataView(
    mojo::ArrayDataView<FillLightMode>* output) {
  auto pointer = data_->fill_light_mode.Get();
  *output = mojo::ArrayDataView<FillLightMode>(pointer, context_);
}




inline void PhotoSettingsDataView::GetPointsOfInterestDataView(
    mojo::ArrayDataView<Point2DDataView>* output) {
  auto pointer = data_->points_of_interest.Get();
  *output = mojo::ArrayDataView<Point2DDataView>(pointer, context_);
}


inline void BlobDataView::GetMimeTypeDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->mime_type.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void BlobDataView::GetDataDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->data.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}



}  // namespace mojom
}  // namespace media

#endif  // MEDIA_CAPTURE_MOJOM_IMAGE_CAPTURE_MOJOM_SHARED_H_