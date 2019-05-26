// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SKIA_PUBLIC_INTERFACES_IMAGE_INFO_MOJOM_SHARED_H_
#define SKIA_PUBLIC_INTERFACES_IMAGE_INFO_MOJOM_SHARED_H_

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
#include "skia/public/interfaces/image_info.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace skia {
namespace mojom {
class ImageInfoDataView;



}  // namespace mojom
}  // namespace skia

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::skia::mojom::ImageInfoDataView> {
  using Data = ::skia::mojom::internal::ImageInfo_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace skia {
namespace mojom {


enum class ColorType : int32_t {
  
  UNKNOWN,
  
  ALPHA_8,
  
  RGB_565,
  
  ARGB_4444,
  
  RGBA_8888,
  
  BGRA_8888,
  
  INDEX_8,
  
  GRAY_8,
  kMinValue = 0,
  kMaxValue = 7,
};

 std::ostream& operator<<(std::ostream& os, ColorType value);
inline bool IsKnownEnumValue(ColorType value) {
  return internal::ColorType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class AlphaType : int32_t {
  
  UNKNOWN,
  
  ALPHA_TYPE_OPAQUE,
  
  PREMUL,
  
  UNPREMUL,
  kMinValue = 0,
  kMaxValue = 3,
};

 std::ostream& operator<<(std::ostream& os, AlphaType value);
inline bool IsKnownEnumValue(AlphaType value) {
  return internal::AlphaType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
class ImageInfoDataView {
 public:
  ImageInfoDataView() {}

  ImageInfoDataView(
      internal::ImageInfo_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadColorType(UserType* output) const {
    auto data_value = data_->color_type;
    return mojo::internal::Deserialize<::skia::mojom::ColorType>(
        data_value, output);
  }

  ColorType color_type() const {
    return static_cast<ColorType>(data_->color_type);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAlphaType(UserType* output) const {
    auto data_value = data_->alpha_type;
    return mojo::internal::Deserialize<::skia::mojom::AlphaType>(
        data_value, output);
  }

  AlphaType alpha_type() const {
    return static_cast<AlphaType>(data_->alpha_type);
  }
  inline void GetSerializedColorSpaceDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSerializedColorSpace(UserType* output) {
    auto* pointer = data_->serialized_color_space.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
  uint32_t width() const {
    return data_->width;
  }
  uint32_t height() const {
    return data_->height;
  }
 private:
  internal::ImageInfo_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace skia

namespace std {

template <>
struct hash<::skia::mojom::ColorType>
    : public mojo::internal::EnumHashImpl<::skia::mojom::ColorType> {};

template <>
struct hash<::skia::mojom::AlphaType>
    : public mojo::internal::EnumHashImpl<::skia::mojom::AlphaType> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::skia::mojom::ColorType, ::skia::mojom::ColorType> {
  static ::skia::mojom::ColorType ToMojom(::skia::mojom::ColorType input) { return input; }
  static bool FromMojom(::skia::mojom::ColorType input, ::skia::mojom::ColorType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::skia::mojom::ColorType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::skia::mojom::ColorType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::skia::mojom::ColorType>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::skia::mojom::AlphaType, ::skia::mojom::AlphaType> {
  static ::skia::mojom::AlphaType ToMojom(::skia::mojom::AlphaType input) { return input; }
  static bool FromMojom(::skia::mojom::AlphaType input, ::skia::mojom::AlphaType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::skia::mojom::AlphaType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::skia::mojom::AlphaType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::skia::mojom::AlphaType>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::skia::mojom::ImageInfoDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::skia::mojom::ImageInfoDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::skia::mojom::internal::ImageInfo_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    mojo::internal::Serialize<::skia::mojom::ColorType>(
        Traits::color_type(input), &(*output)->color_type);
    mojo::internal::Serialize<::skia::mojom::AlphaType>(
        Traits::alpha_type(input), &(*output)->alpha_type);
    decltype(Traits::serialized_color_space(input)) in_serialized_color_space = Traits::serialized_color_space(input);
    typename decltype((*output)->serialized_color_space)::BaseType::BufferWriter
        serialized_color_space_writer;
    const mojo::internal::ContainerValidateParams serialized_color_space_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
        in_serialized_color_space, buffer, &serialized_color_space_writer, &serialized_color_space_validate_params,
        context);
    (*output)->serialized_color_space.Set(
        serialized_color_space_writer.is_null() ? nullptr : serialized_color_space_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->serialized_color_space.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null serialized_color_space in ImageInfo struct");
    (*output)->width = Traits::width(input);
    (*output)->height = Traits::height(input);
  }

  static bool Deserialize(::skia::mojom::internal::ImageInfo_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::skia::mojom::ImageInfoDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace skia {
namespace mojom {

inline void ImageInfoDataView::GetSerializedColorSpaceDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->serialized_color_space.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}



}  // namespace mojom
}  // namespace skia

#endif  // SKIA_PUBLIC_INTERFACES_IMAGE_INFO_MOJOM_SHARED_H_