// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_SHAPE_DETECTION_PUBLIC_MOJOM_FACEDETECTION_MOJOM_SHARED_H_
#define SERVICES_SHAPE_DETECTION_PUBLIC_MOJOM_FACEDETECTION_MOJOM_SHARED_H_

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
#include "services/shape_detection/public/mojom/facedetection.mojom-shared-internal.h"
#include "skia/public/interfaces/bitmap.mojom-shared.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace shape_detection {
namespace mojom {
class LandmarkDataView;

class FaceDetectionResultDataView;

class FaceDetectorOptionsDataView;



}  // namespace mojom
}  // namespace shape_detection

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::shape_detection::mojom::LandmarkDataView> {
  using Data = ::shape_detection::mojom::internal::Landmark_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::shape_detection::mojom::FaceDetectionResultDataView> {
  using Data = ::shape_detection::mojom::internal::FaceDetectionResult_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::shape_detection::mojom::FaceDetectorOptionsDataView> {
  using Data = ::shape_detection::mojom::internal::FaceDetectorOptions_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace shape_detection {
namespace mojom {


enum class LandmarkType : int32_t {
  
  MOUTH,
  
  EYE,
  
  NOSE,
  kMinValue = 0,
  kMaxValue = 2,
};

 std::ostream& operator<<(std::ostream& os, LandmarkType value);
inline bool IsKnownEnumValue(LandmarkType value) {
  return internal::LandmarkType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class FaceDetectionInterfaceBase {};

using FaceDetectionPtrDataView =
    mojo::InterfacePtrDataView<FaceDetectionInterfaceBase>;
using FaceDetectionRequestDataView =
    mojo::InterfaceRequestDataView<FaceDetectionInterfaceBase>;
using FaceDetectionAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<FaceDetectionInterfaceBase>;
using FaceDetectionAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<FaceDetectionInterfaceBase>;
class LandmarkDataView {
 public:
  LandmarkDataView() {}

  LandmarkDataView(
      internal::Landmark_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetLocationsDataView(
      mojo::ArrayDataView<::gfx::mojom::PointFDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLocations(UserType* output) {
    auto* pointer = data_->locations.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::gfx::mojom::PointFDataView>>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadType(UserType* output) const {
    auto data_value = data_->type;
    return mojo::internal::Deserialize<::shape_detection::mojom::LandmarkType>(
        data_value, output);
  }

  LandmarkType type() const {
    return static_cast<LandmarkType>(data_->type);
  }
 private:
  internal::Landmark_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FaceDetectionResultDataView {
 public:
  FaceDetectionResultDataView() {}

  FaceDetectionResultDataView(
      internal::FaceDetectionResult_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetBoundingBoxDataView(
      ::gfx::mojom::RectFDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBoundingBox(UserType* output) {
    auto* pointer = data_->bounding_box.Get();
    return mojo::internal::Deserialize<::gfx::mojom::RectFDataView>(
        pointer, output, context_);
  }
  inline void GetLandmarksDataView(
      mojo::ArrayDataView<LandmarkDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLandmarks(UserType* output) {
    auto* pointer = data_->landmarks.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::shape_detection::mojom::LandmarkDataView>>(
        pointer, output, context_);
  }
 private:
  internal::FaceDetectionResult_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FaceDetectorOptionsDataView {
 public:
  FaceDetectorOptionsDataView() {}

  FaceDetectorOptionsDataView(
      internal::FaceDetectorOptions_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t max_detected_faces() const {
    return data_->max_detected_faces;
  }
  bool fast_mode() const {
    return data_->fast_mode;
  }
 private:
  internal::FaceDetectorOptions_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace shape_detection

namespace std {

template <>
struct hash<::shape_detection::mojom::LandmarkType>
    : public mojo::internal::EnumHashImpl<::shape_detection::mojom::LandmarkType> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::shape_detection::mojom::LandmarkType, ::shape_detection::mojom::LandmarkType> {
  static ::shape_detection::mojom::LandmarkType ToMojom(::shape_detection::mojom::LandmarkType input) { return input; }
  static bool FromMojom(::shape_detection::mojom::LandmarkType input, ::shape_detection::mojom::LandmarkType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::shape_detection::mojom::LandmarkType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::shape_detection::mojom::LandmarkType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::shape_detection::mojom::LandmarkType>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::shape_detection::mojom::LandmarkDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::shape_detection::mojom::LandmarkDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::shape_detection::mojom::internal::Landmark_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::locations(input)) in_locations = Traits::locations(input);
    typename decltype((*output)->locations)::BaseType::BufferWriter
        locations_writer;
    const mojo::internal::ContainerValidateParams locations_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::gfx::mojom::PointFDataView>>(
        in_locations, buffer, &locations_writer, &locations_validate_params,
        context);
    (*output)->locations.Set(
        locations_writer.is_null() ? nullptr : locations_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->locations.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null locations in Landmark struct");
    mojo::internal::Serialize<::shape_detection::mojom::LandmarkType>(
        Traits::type(input), &(*output)->type);
  }

  static bool Deserialize(::shape_detection::mojom::internal::Landmark_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::shape_detection::mojom::LandmarkDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::shape_detection::mojom::FaceDetectionResultDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::shape_detection::mojom::FaceDetectionResultDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::shape_detection::mojom::internal::FaceDetectionResult_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::bounding_box(input)) in_bounding_box = Traits::bounding_box(input);
    typename decltype((*output)->bounding_box)::BaseType::BufferWriter
        bounding_box_writer;
    mojo::internal::Serialize<::gfx::mojom::RectFDataView>(
        in_bounding_box, buffer, &bounding_box_writer, context);
    (*output)->bounding_box.Set(
        bounding_box_writer.is_null() ? nullptr : bounding_box_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->bounding_box.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null bounding_box in FaceDetectionResult struct");
    decltype(Traits::landmarks(input)) in_landmarks = Traits::landmarks(input);
    typename decltype((*output)->landmarks)::BaseType::BufferWriter
        landmarks_writer;
    const mojo::internal::ContainerValidateParams landmarks_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::shape_detection::mojom::LandmarkDataView>>(
        in_landmarks, buffer, &landmarks_writer, &landmarks_validate_params,
        context);
    (*output)->landmarks.Set(
        landmarks_writer.is_null() ? nullptr : landmarks_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->landmarks.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null landmarks in FaceDetectionResult struct");
  }

  static bool Deserialize(::shape_detection::mojom::internal::FaceDetectionResult_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::shape_detection::mojom::FaceDetectionResultDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::shape_detection::mojom::FaceDetectorOptionsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::shape_detection::mojom::FaceDetectorOptionsDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::shape_detection::mojom::internal::FaceDetectorOptions_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->max_detected_faces = Traits::max_detected_faces(input);
    (*output)->fast_mode = Traits::fast_mode(input);
  }

  static bool Deserialize(::shape_detection::mojom::internal::FaceDetectorOptions_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::shape_detection::mojom::FaceDetectorOptionsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace shape_detection {
namespace mojom {

inline void LandmarkDataView::GetLocationsDataView(
    mojo::ArrayDataView<::gfx::mojom::PointFDataView>* output) {
  auto pointer = data_->locations.Get();
  *output = mojo::ArrayDataView<::gfx::mojom::PointFDataView>(pointer, context_);
}


inline void FaceDetectionResultDataView::GetBoundingBoxDataView(
    ::gfx::mojom::RectFDataView* output) {
  auto pointer = data_->bounding_box.Get();
  *output = ::gfx::mojom::RectFDataView(pointer, context_);
}
inline void FaceDetectionResultDataView::GetLandmarksDataView(
    mojo::ArrayDataView<LandmarkDataView>* output) {
  auto pointer = data_->landmarks.Get();
  *output = mojo::ArrayDataView<LandmarkDataView>(pointer, context_);
}





}  // namespace mojom
}  // namespace shape_detection

#endif  // SERVICES_SHAPE_DETECTION_PUBLIC_MOJOM_FACEDETECTION_MOJOM_SHARED_H_