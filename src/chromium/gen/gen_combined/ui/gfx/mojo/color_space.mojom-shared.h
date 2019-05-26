// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_GFX_MOJO_COLOR_SPACE_MOJOM_SHARED_H_
#define UI_GFX_MOJO_COLOR_SPACE_MOJOM_SHARED_H_

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
#include "ui/gfx/mojo/color_space.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace gfx {
namespace mojom {
class ColorSpaceDataView;



}  // namespace mojom
}  // namespace gfx

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::gfx::mojom::ColorSpaceDataView> {
  using Data = ::gfx::mojom::internal::ColorSpace_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace gfx {
namespace mojom {


enum class ColorSpacePrimaryID : int32_t {
  
  INVALID,
  
  BT709,
  
  BT470M,
  
  BT470BG,
  
  SMPTE170M,
  
  SMPTE240M,
  
  FILM,
  
  BT2020,
  
  SMPTEST428_1,
  
  SMPTEST431_2,
  
  SMPTEST432_1,
  
  XYZ_D50,
  
  ADOBE_RGB,
  
  APPLE_GENERIC_RGB,
  
  WIDE_GAMUT_COLOR_SPIN,
  
  CUSTOM,
  kMinValue = 0,
  kMaxValue = 15,
};

 std::ostream& operator<<(std::ostream& os, ColorSpacePrimaryID value);
inline bool IsKnownEnumValue(ColorSpacePrimaryID value) {
  return internal::ColorSpacePrimaryID_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class ColorSpaceTransferID : int32_t {
  
  INVALID,
  
  BT709,
  
  BT709_APPLE,
  
  GAMMA18,
  
  GAMMA22,
  
  GAMMA24,
  
  GAMMA28,
  
  SMPTE170M,
  
  SMPTE240M,
  
  LINEAR,
  
  LOG,
  
  LOG_SQRT,
  
  IEC61966_2_4,
  
  BT1361_ECG,
  
  IEC61966_2_1,
  
  BT2020_10,
  
  BT2020_12,
  
  SMPTEST2084,
  
  SMPTEST428_1,
  
  ARIB_STD_B67,
  
  SMPTEST2084_NON_HDR,
  
  IEC61966_2_1_HDR,
  
  LINEAR_HDR,
  
  CUSTOM,
  kMinValue = 0,
  kMaxValue = 23,
};

 std::ostream& operator<<(std::ostream& os, ColorSpaceTransferID value);
inline bool IsKnownEnumValue(ColorSpaceTransferID value) {
  return internal::ColorSpaceTransferID_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class ColorSpaceMatrixID : int32_t {
  
  INVALID,
  
  RGB,
  
  BT709,
  
  FCC,
  
  BT470BG,
  
  SMPTE170M,
  
  SMPTE240M,
  
  YCOCG,
  
  BT2020_NCL,
  
  BT2020_CL,
  
  YDZDX,
  
  GBR,
  kMinValue = 0,
  kMaxValue = 11,
};

 std::ostream& operator<<(std::ostream& os, ColorSpaceMatrixID value);
inline bool IsKnownEnumValue(ColorSpaceMatrixID value) {
  return internal::ColorSpaceMatrixID_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class ColorSpaceRangeID : int32_t {
  
  INVALID,
  
  LIMITED,
  
  FULL,
  
  DERIVED,
  kMinValue = 0,
  kMaxValue = 3,
};

 std::ostream& operator<<(std::ostream& os, ColorSpaceRangeID value);
inline bool IsKnownEnumValue(ColorSpaceRangeID value) {
  return internal::ColorSpaceRangeID_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
class ColorSpaceDataView {
 public:
  ColorSpaceDataView() {}

  ColorSpaceDataView(
      internal::ColorSpace_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPrimaries(UserType* output) const {
    auto data_value = data_->primaries;
    return mojo::internal::Deserialize<::gfx::mojom::ColorSpacePrimaryID>(
        data_value, output);
  }

  ColorSpacePrimaryID primaries() const {
    return static_cast<ColorSpacePrimaryID>(data_->primaries);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTransfer(UserType* output) const {
    auto data_value = data_->transfer;
    return mojo::internal::Deserialize<::gfx::mojom::ColorSpaceTransferID>(
        data_value, output);
  }

  ColorSpaceTransferID transfer() const {
    return static_cast<ColorSpaceTransferID>(data_->transfer);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMatrix(UserType* output) const {
    auto data_value = data_->matrix;
    return mojo::internal::Deserialize<::gfx::mojom::ColorSpaceMatrixID>(
        data_value, output);
  }

  ColorSpaceMatrixID matrix() const {
    return static_cast<ColorSpaceMatrixID>(data_->matrix);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRange(UserType* output) const {
    auto data_value = data_->range;
    return mojo::internal::Deserialize<::gfx::mojom::ColorSpaceRangeID>(
        data_value, output);
  }

  ColorSpaceRangeID range() const {
    return static_cast<ColorSpaceRangeID>(data_->range);
  }
  inline void GetCustomPrimaryMatrixDataView(
      mojo::ArrayDataView<float>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCustomPrimaryMatrix(UserType* output) {
    auto* pointer = data_->custom_primary_matrix.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<float>>(
        pointer, output, context_);
  }
  inline void GetCustomTransferParamsDataView(
      mojo::ArrayDataView<float>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCustomTransferParams(UserType* output) {
    auto* pointer = data_->custom_transfer_params.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<float>>(
        pointer, output, context_);
  }
 private:
  internal::ColorSpace_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace gfx

namespace std {

template <>
struct hash<::gfx::mojom::ColorSpacePrimaryID>
    : public mojo::internal::EnumHashImpl<::gfx::mojom::ColorSpacePrimaryID> {};

template <>
struct hash<::gfx::mojom::ColorSpaceTransferID>
    : public mojo::internal::EnumHashImpl<::gfx::mojom::ColorSpaceTransferID> {};

template <>
struct hash<::gfx::mojom::ColorSpaceMatrixID>
    : public mojo::internal::EnumHashImpl<::gfx::mojom::ColorSpaceMatrixID> {};

template <>
struct hash<::gfx::mojom::ColorSpaceRangeID>
    : public mojo::internal::EnumHashImpl<::gfx::mojom::ColorSpaceRangeID> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::gfx::mojom::ColorSpacePrimaryID, ::gfx::mojom::ColorSpacePrimaryID> {
  static ::gfx::mojom::ColorSpacePrimaryID ToMojom(::gfx::mojom::ColorSpacePrimaryID input) { return input; }
  static bool FromMojom(::gfx::mojom::ColorSpacePrimaryID input, ::gfx::mojom::ColorSpacePrimaryID* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::gfx::mojom::ColorSpacePrimaryID, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::gfx::mojom::ColorSpacePrimaryID, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::gfx::mojom::ColorSpacePrimaryID>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::gfx::mojom::ColorSpaceTransferID, ::gfx::mojom::ColorSpaceTransferID> {
  static ::gfx::mojom::ColorSpaceTransferID ToMojom(::gfx::mojom::ColorSpaceTransferID input) { return input; }
  static bool FromMojom(::gfx::mojom::ColorSpaceTransferID input, ::gfx::mojom::ColorSpaceTransferID* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::gfx::mojom::ColorSpaceTransferID, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::gfx::mojom::ColorSpaceTransferID, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::gfx::mojom::ColorSpaceTransferID>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::gfx::mojom::ColorSpaceMatrixID, ::gfx::mojom::ColorSpaceMatrixID> {
  static ::gfx::mojom::ColorSpaceMatrixID ToMojom(::gfx::mojom::ColorSpaceMatrixID input) { return input; }
  static bool FromMojom(::gfx::mojom::ColorSpaceMatrixID input, ::gfx::mojom::ColorSpaceMatrixID* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::gfx::mojom::ColorSpaceMatrixID, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::gfx::mojom::ColorSpaceMatrixID, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::gfx::mojom::ColorSpaceMatrixID>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::gfx::mojom::ColorSpaceRangeID, ::gfx::mojom::ColorSpaceRangeID> {
  static ::gfx::mojom::ColorSpaceRangeID ToMojom(::gfx::mojom::ColorSpaceRangeID input) { return input; }
  static bool FromMojom(::gfx::mojom::ColorSpaceRangeID input, ::gfx::mojom::ColorSpaceRangeID* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::gfx::mojom::ColorSpaceRangeID, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::gfx::mojom::ColorSpaceRangeID, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::gfx::mojom::ColorSpaceRangeID>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::gfx::mojom::ColorSpaceDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::gfx::mojom::ColorSpaceDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::gfx::mojom::internal::ColorSpace_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    mojo::internal::Serialize<::gfx::mojom::ColorSpacePrimaryID>(
        Traits::primaries(input), &(*output)->primaries);
    mojo::internal::Serialize<::gfx::mojom::ColorSpaceTransferID>(
        Traits::transfer(input), &(*output)->transfer);
    mojo::internal::Serialize<::gfx::mojom::ColorSpaceMatrixID>(
        Traits::matrix(input), &(*output)->matrix);
    mojo::internal::Serialize<::gfx::mojom::ColorSpaceRangeID>(
        Traits::range(input), &(*output)->range);
    decltype(Traits::custom_primary_matrix(input)) in_custom_primary_matrix = Traits::custom_primary_matrix(input);
    typename decltype((*output)->custom_primary_matrix)::BaseType::BufferWriter
        custom_primary_matrix_writer;
    const mojo::internal::ContainerValidateParams custom_primary_matrix_validate_params(
        9, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<float>>(
        in_custom_primary_matrix, buffer, &custom_primary_matrix_writer, &custom_primary_matrix_validate_params,
        context);
    (*output)->custom_primary_matrix.Set(
        custom_primary_matrix_writer.is_null() ? nullptr : custom_primary_matrix_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->custom_primary_matrix.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null custom_primary_matrix in ColorSpace struct");
    decltype(Traits::custom_transfer_params(input)) in_custom_transfer_params = Traits::custom_transfer_params(input);
    typename decltype((*output)->custom_transfer_params)::BaseType::BufferWriter
        custom_transfer_params_writer;
    const mojo::internal::ContainerValidateParams custom_transfer_params_validate_params(
        7, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<float>>(
        in_custom_transfer_params, buffer, &custom_transfer_params_writer, &custom_transfer_params_validate_params,
        context);
    (*output)->custom_transfer_params.Set(
        custom_transfer_params_writer.is_null() ? nullptr : custom_transfer_params_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->custom_transfer_params.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null custom_transfer_params in ColorSpace struct");
  }

  static bool Deserialize(::gfx::mojom::internal::ColorSpace_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::gfx::mojom::ColorSpaceDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace gfx {
namespace mojom {

inline void ColorSpaceDataView::GetCustomPrimaryMatrixDataView(
    mojo::ArrayDataView<float>* output) {
  auto pointer = data_->custom_primary_matrix.Get();
  *output = mojo::ArrayDataView<float>(pointer, context_);
}
inline void ColorSpaceDataView::GetCustomTransferParamsDataView(
    mojo::ArrayDataView<float>* output) {
  auto pointer = data_->custom_transfer_params.Get();
  *output = mojo::ArrayDataView<float>(pointer, context_);
}



}  // namespace mojom
}  // namespace gfx

#endif  // UI_GFX_MOJO_COLOR_SPACE_MOJOM_SHARED_H_