// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_DISPLAY_MEDIA_INFORMATION_MOJOM_SHARED_H_
#define MEDIA_MOJO_INTERFACES_DISPLAY_MEDIA_INFORMATION_MOJOM_SHARED_H_

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
#include "media/mojo/interfaces/display_media_information.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace media {
namespace mojom {
class DisplayMediaInformationDataView;



}  // namespace mojom
}  // namespace media

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::media::mojom::DisplayMediaInformationDataView> {
  using Data = ::media::mojom::internal::DisplayMediaInformation_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace media {
namespace mojom {


enum class DisplayCaptureSurfaceType : int32_t {
  
  MONITOR,
  
  WINDOW,
  
  APPLICATION,
  
  BROWSER,
  kMinValue = 0,
  kMaxValue = 3,
};

 std::ostream& operator<<(std::ostream& os, DisplayCaptureSurfaceType value);
inline bool IsKnownEnumValue(DisplayCaptureSurfaceType value) {
  return internal::DisplayCaptureSurfaceType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class CursorCaptureType : int32_t {
  
  NEVER,
  
  ALWAYS,
  
  MOTION,
  kMinValue = 0,
  kMaxValue = 2,
};

 std::ostream& operator<<(std::ostream& os, CursorCaptureType value);
inline bool IsKnownEnumValue(CursorCaptureType value) {
  return internal::CursorCaptureType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
class DisplayMediaInformationDataView {
 public:
  DisplayMediaInformationDataView() {}

  DisplayMediaInformationDataView(
      internal::DisplayMediaInformation_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDisplaySurface(UserType* output) const {
    auto data_value = data_->display_surface;
    return mojo::internal::Deserialize<::media::mojom::DisplayCaptureSurfaceType>(
        data_value, output);
  }

  DisplayCaptureSurfaceType display_surface() const {
    return static_cast<DisplayCaptureSurfaceType>(data_->display_surface);
  }
  bool logical_surface() const {
    return data_->logical_surface;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCursor(UserType* output) const {
    auto data_value = data_->cursor;
    return mojo::internal::Deserialize<::media::mojom::CursorCaptureType>(
        data_value, output);
  }

  CursorCaptureType cursor() const {
    return static_cast<CursorCaptureType>(data_->cursor);
  }
 private:
  internal::DisplayMediaInformation_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace media

namespace std {

template <>
struct hash<::media::mojom::DisplayCaptureSurfaceType>
    : public mojo::internal::EnumHashImpl<::media::mojom::DisplayCaptureSurfaceType> {};

template <>
struct hash<::media::mojom::CursorCaptureType>
    : public mojo::internal::EnumHashImpl<::media::mojom::CursorCaptureType> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::media::mojom::DisplayCaptureSurfaceType, ::media::mojom::DisplayCaptureSurfaceType> {
  static ::media::mojom::DisplayCaptureSurfaceType ToMojom(::media::mojom::DisplayCaptureSurfaceType input) { return input; }
  static bool FromMojom(::media::mojom::DisplayCaptureSurfaceType input, ::media::mojom::DisplayCaptureSurfaceType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::DisplayCaptureSurfaceType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::media::mojom::DisplayCaptureSurfaceType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::media::mojom::DisplayCaptureSurfaceType>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::media::mojom::CursorCaptureType, ::media::mojom::CursorCaptureType> {
  static ::media::mojom::CursorCaptureType ToMojom(::media::mojom::CursorCaptureType input) { return input; }
  static bool FromMojom(::media::mojom::CursorCaptureType input, ::media::mojom::CursorCaptureType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::CursorCaptureType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::media::mojom::CursorCaptureType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::media::mojom::CursorCaptureType>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::DisplayMediaInformationDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::media::mojom::DisplayMediaInformationDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::media::mojom::internal::DisplayMediaInformation_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    mojo::internal::Serialize<::media::mojom::DisplayCaptureSurfaceType>(
        Traits::display_surface(input), &(*output)->display_surface);
    (*output)->logical_surface = Traits::logical_surface(input);
    mojo::internal::Serialize<::media::mojom::CursorCaptureType>(
        Traits::cursor(input), &(*output)->cursor);
  }

  static bool Deserialize(::media::mojom::internal::DisplayMediaInformation_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::media::mojom::DisplayMediaInformationDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace media {
namespace mojom {




}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_DISPLAY_MEDIA_INFORMATION_MOJOM_SHARED_H_