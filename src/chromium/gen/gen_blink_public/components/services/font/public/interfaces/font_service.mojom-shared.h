// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_SERVICES_FONT_PUBLIC_INTERFACES_FONT_SERVICE_MOJOM_SHARED_H_
#define COMPONENTS_SERVICES_FONT_PUBLIC_INTERFACES_FONT_SERVICE_MOJOM_SHARED_H_

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
#include "components/services/font/public/interfaces/font_service.mojom-shared-internal.h"
#include "mojo/public/mojom/base/file.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace font_service {
namespace mojom {
class TypefaceStyleDataView;

class FontIdentityDataView;

class FontRenderStyleDataView;



}  // namespace mojom
}  // namespace font_service

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::font_service::mojom::TypefaceStyleDataView> {
  using Data = ::font_service::mojom::internal::TypefaceStyle_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::font_service::mojom::FontIdentityDataView> {
  using Data = ::font_service::mojom::internal::FontIdentity_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::font_service::mojom::FontRenderStyleDataView> {
  using Data = ::font_service::mojom::internal::FontRenderStyle_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace font_service {
namespace mojom {


enum class TypefaceSlant : int32_t {
  
  ROMAN = 0,
  
  ITALIC = 1,
  
  OBLIQUE = 2,
  kMinValue = 0,
  kMaxValue = 2,
};

 std::ostream& operator<<(std::ostream& os, TypefaceSlant value);
inline bool IsKnownEnumValue(TypefaceSlant value) {
  return internal::TypefaceSlant_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class RenderStyleSwitch : int32_t {
  
  OFF = 0,
  
  ON = 1,
  
  NO_PREFERENCE = 2,
  kMinValue = 0,
  kMaxValue = 2,
};

 std::ostream& operator<<(std::ostream& os, RenderStyleSwitch value);
inline bool IsKnownEnumValue(RenderStyleSwitch value) {
  return internal::RenderStyleSwitch_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class FontServiceInterfaceBase {};

using FontServicePtrDataView =
    mojo::InterfacePtrDataView<FontServiceInterfaceBase>;
using FontServiceRequestDataView =
    mojo::InterfaceRequestDataView<FontServiceInterfaceBase>;
using FontServiceAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<FontServiceInterfaceBase>;
using FontServiceAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<FontServiceInterfaceBase>;
class TypefaceStyleDataView {
 public:
  TypefaceStyleDataView() {}

  TypefaceStyleDataView(
      internal::TypefaceStyle_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint16_t weight() const {
    return data_->weight;
  }
  uint8_t width() const {
    return data_->width;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSlant(UserType* output) const {
    auto data_value = data_->slant;
    return mojo::internal::Deserialize<::font_service::mojom::TypefaceSlant>(
        data_value, output);
  }

  TypefaceSlant slant() const {
    return static_cast<TypefaceSlant>(data_->slant);
  }
 private:
  internal::TypefaceStyle_Data* data_ = nullptr;
};

class FontIdentityDataView {
 public:
  FontIdentityDataView() {}

  FontIdentityDataView(
      internal::FontIdentity_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint32_t id() const {
    return data_->id;
  }
  int32_t ttc_index() const {
    return data_->ttc_index;
  }
  inline void GetStrRepresentationDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStrRepresentation(UserType* output) {
    auto* pointer = data_->str_representation.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::FontIdentity_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FontRenderStyleDataView {
 public:
  FontRenderStyleDataView() {}

  FontRenderStyleDataView(
      internal::FontRenderStyle_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUseBitmaps(UserType* output) const {
    auto data_value = data_->use_bitmaps;
    return mojo::internal::Deserialize<::font_service::mojom::RenderStyleSwitch>(
        data_value, output);
  }

  RenderStyleSwitch use_bitmaps() const {
    return static_cast<RenderStyleSwitch>(data_->use_bitmaps);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUseAutohint(UserType* output) const {
    auto data_value = data_->use_autohint;
    return mojo::internal::Deserialize<::font_service::mojom::RenderStyleSwitch>(
        data_value, output);
  }

  RenderStyleSwitch use_autohint() const {
    return static_cast<RenderStyleSwitch>(data_->use_autohint);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUseHinting(UserType* output) const {
    auto data_value = data_->use_hinting;
    return mojo::internal::Deserialize<::font_service::mojom::RenderStyleSwitch>(
        data_value, output);
  }

  RenderStyleSwitch use_hinting() const {
    return static_cast<RenderStyleSwitch>(data_->use_hinting);
  }
  uint8_t hint_style() const {
    return data_->hint_style;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUseAntialias(UserType* output) const {
    auto data_value = data_->use_antialias;
    return mojo::internal::Deserialize<::font_service::mojom::RenderStyleSwitch>(
        data_value, output);
  }

  RenderStyleSwitch use_antialias() const {
    return static_cast<RenderStyleSwitch>(data_->use_antialias);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUseSubpixelRendering(UserType* output) const {
    auto data_value = data_->use_subpixel_rendering;
    return mojo::internal::Deserialize<::font_service::mojom::RenderStyleSwitch>(
        data_value, output);
  }

  RenderStyleSwitch use_subpixel_rendering() const {
    return static_cast<RenderStyleSwitch>(data_->use_subpixel_rendering);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUseSubpixelPositioning(UserType* output) const {
    auto data_value = data_->use_subpixel_positioning;
    return mojo::internal::Deserialize<::font_service::mojom::RenderStyleSwitch>(
        data_value, output);
  }

  RenderStyleSwitch use_subpixel_positioning() const {
    return static_cast<RenderStyleSwitch>(data_->use_subpixel_positioning);
  }
 private:
  internal::FontRenderStyle_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace font_service

namespace std {

template <>
struct hash<::font_service::mojom::TypefaceSlant>
    : public mojo::internal::EnumHashImpl<::font_service::mojom::TypefaceSlant> {};

template <>
struct hash<::font_service::mojom::RenderStyleSwitch>
    : public mojo::internal::EnumHashImpl<::font_service::mojom::RenderStyleSwitch> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::font_service::mojom::TypefaceSlant, ::font_service::mojom::TypefaceSlant> {
  static ::font_service::mojom::TypefaceSlant ToMojom(::font_service::mojom::TypefaceSlant input) { return input; }
  static bool FromMojom(::font_service::mojom::TypefaceSlant input, ::font_service::mojom::TypefaceSlant* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::font_service::mojom::TypefaceSlant, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::font_service::mojom::TypefaceSlant, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::font_service::mojom::TypefaceSlant>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::font_service::mojom::RenderStyleSwitch, ::font_service::mojom::RenderStyleSwitch> {
  static ::font_service::mojom::RenderStyleSwitch ToMojom(::font_service::mojom::RenderStyleSwitch input) { return input; }
  static bool FromMojom(::font_service::mojom::RenderStyleSwitch input, ::font_service::mojom::RenderStyleSwitch* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::font_service::mojom::RenderStyleSwitch, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::font_service::mojom::RenderStyleSwitch, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::font_service::mojom::RenderStyleSwitch>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::font_service::mojom::TypefaceStyleDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::font_service::mojom::TypefaceStyleDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::font_service::mojom::internal::TypefaceStyle_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->weight = Traits::weight(input);
    (*output)->width = Traits::width(input);
    mojo::internal::Serialize<::font_service::mojom::TypefaceSlant>(
        Traits::slant(input), &(*output)->slant);
  }

  static bool Deserialize(::font_service::mojom::internal::TypefaceStyle_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::font_service::mojom::TypefaceStyleDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::font_service::mojom::FontIdentityDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::font_service::mojom::FontIdentityDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::font_service::mojom::internal::FontIdentity_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->id = Traits::id(input);
    (*output)->ttc_index = Traits::ttc_index(input);
    decltype(Traits::str_representation(input)) in_str_representation = Traits::str_representation(input);
    typename decltype((*output)->str_representation)::BaseType::BufferWriter
        str_representation_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_str_representation, buffer, &str_representation_writer, context);
    (*output)->str_representation.Set(
        str_representation_writer.is_null() ? nullptr : str_representation_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->str_representation.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null str_representation in FontIdentity struct");
  }

  static bool Deserialize(::font_service::mojom::internal::FontIdentity_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::font_service::mojom::FontIdentityDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::font_service::mojom::FontRenderStyleDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::font_service::mojom::FontRenderStyleDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::font_service::mojom::internal::FontRenderStyle_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    mojo::internal::Serialize<::font_service::mojom::RenderStyleSwitch>(
        Traits::use_bitmaps(input), &(*output)->use_bitmaps);
    mojo::internal::Serialize<::font_service::mojom::RenderStyleSwitch>(
        Traits::use_autohint(input), &(*output)->use_autohint);
    mojo::internal::Serialize<::font_service::mojom::RenderStyleSwitch>(
        Traits::use_hinting(input), &(*output)->use_hinting);
    (*output)->hint_style = Traits::hint_style(input);
    mojo::internal::Serialize<::font_service::mojom::RenderStyleSwitch>(
        Traits::use_antialias(input), &(*output)->use_antialias);
    mojo::internal::Serialize<::font_service::mojom::RenderStyleSwitch>(
        Traits::use_subpixel_rendering(input), &(*output)->use_subpixel_rendering);
    mojo::internal::Serialize<::font_service::mojom::RenderStyleSwitch>(
        Traits::use_subpixel_positioning(input), &(*output)->use_subpixel_positioning);
  }

  static bool Deserialize(::font_service::mojom::internal::FontRenderStyle_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::font_service::mojom::FontRenderStyleDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace font_service {
namespace mojom {



inline void FontIdentityDataView::GetStrRepresentationDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->str_representation.Get();
  *output = mojo::StringDataView(pointer, context_);
}





}  // namespace mojom
}  // namespace font_service

#endif  // COMPONENTS_SERVICES_FONT_PUBLIC_INTERFACES_FONT_SERVICE_MOJOM_SHARED_H_