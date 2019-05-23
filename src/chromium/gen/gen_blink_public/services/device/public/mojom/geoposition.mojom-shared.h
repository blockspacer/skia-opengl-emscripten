// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_GEOPOSITION_MOJOM_SHARED_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_GEOPOSITION_MOJOM_SHARED_H_

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
#include "services/device/public/mojom/geoposition.mojom-shared-internal.h"
#include "mojo/public/mojom/base/time.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace device {
namespace mojom {
class GeopositionDataView;



}  // namespace mojom
}  // namespace device

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::device::mojom::GeopositionDataView> {
  using Data = ::device::mojom::internal::Geoposition_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace device {
namespace mojom {


enum class Geoposition_ErrorCode : int32_t {
  
  NONE = 0,
  
  PERMISSION_DENIED = 1,
  
  POSITION_UNAVAILABLE = 2,
  
  TIMEOUT = 3,
  
  LAST = Geoposition_ErrorCode::TIMEOUT,
  kMinValue = 0,
  kMaxValue = 3,
};

 std::ostream& operator<<(std::ostream& os, Geoposition_ErrorCode value);
inline bool IsKnownEnumValue(Geoposition_ErrorCode value) {
  return internal::Geoposition_ErrorCode_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
class GeopositionDataView {
 public:
  GeopositionDataView() {}

  GeopositionDataView(
      internal::Geoposition_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  bool valid() const {
    return data_->valid;
  }
  double latitude() const {
    return data_->latitude;
  }
  double longitude() const {
    return data_->longitude;
  }
  double altitude() const {
    return data_->altitude;
  }
  double accuracy() const {
    return data_->accuracy;
  }
  double altitude_accuracy() const {
    return data_->altitude_accuracy;
  }
  double heading() const {
    return data_->heading;
  }
  double speed() const {
    return data_->speed;
  }
  inline void GetTimestampDataView(
      ::mojo_base::mojom::TimeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTimestamp(UserType* output) {
    auto* pointer = data_->timestamp.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadErrorCode(UserType* output) const {
    auto data_value = data_->error_code;
    return mojo::internal::Deserialize<::device::mojom::Geoposition_ErrorCode>(
        data_value, output);
  }

  Geoposition_ErrorCode error_code() const {
    return static_cast<Geoposition_ErrorCode>(data_->error_code);
  }
  inline void GetErrorMessageDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadErrorMessage(UserType* output) {
    auto* pointer = data_->error_message.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::Geoposition_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace device

namespace std {

template <>
struct hash<::device::mojom::Geoposition_ErrorCode>
    : public mojo::internal::EnumHashImpl<::device::mojom::Geoposition_ErrorCode> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::device::mojom::Geoposition_ErrorCode, ::device::mojom::Geoposition_ErrorCode> {
  static ::device::mojom::Geoposition_ErrorCode ToMojom(::device::mojom::Geoposition_ErrorCode input) { return input; }
  static bool FromMojom(::device::mojom::Geoposition_ErrorCode input, ::device::mojom::Geoposition_ErrorCode* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::Geoposition_ErrorCode, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::device::mojom::Geoposition_ErrorCode, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::device::mojom::Geoposition_ErrorCode>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::GeopositionDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::device::mojom::GeopositionDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::device::mojom::internal::Geoposition_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->valid = Traits::valid(input);
    (*output)->latitude = Traits::latitude(input);
    (*output)->longitude = Traits::longitude(input);
    (*output)->altitude = Traits::altitude(input);
    (*output)->accuracy = Traits::accuracy(input);
    (*output)->altitude_accuracy = Traits::altitude_accuracy(input);
    (*output)->heading = Traits::heading(input);
    (*output)->speed = Traits::speed(input);
    decltype(Traits::timestamp(input)) in_timestamp = Traits::timestamp(input);
    typename decltype((*output)->timestamp)::BaseType::BufferWriter
        timestamp_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TimeDataView>(
        in_timestamp, buffer, &timestamp_writer, context);
    (*output)->timestamp.Set(
        timestamp_writer.is_null() ? nullptr : timestamp_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->timestamp.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null timestamp in Geoposition struct");
    mojo::internal::Serialize<::device::mojom::Geoposition_ErrorCode>(
        Traits::error_code(input), &(*output)->error_code);
    decltype(Traits::error_message(input)) in_error_message = Traits::error_message(input);
    typename decltype((*output)->error_message)::BaseType::BufferWriter
        error_message_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_error_message, buffer, &error_message_writer, context);
    (*output)->error_message.Set(
        error_message_writer.is_null() ? nullptr : error_message_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->error_message.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null error_message in Geoposition struct");
  }

  static bool Deserialize(::device::mojom::internal::Geoposition_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::device::mojom::GeopositionDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace device {
namespace mojom {

inline void GeopositionDataView::GetTimestampDataView(
    ::mojo_base::mojom::TimeDataView* output) {
  auto pointer = data_->timestamp.Get();
  *output = ::mojo_base::mojom::TimeDataView(pointer, context_);
}
inline void GeopositionDataView::GetErrorMessageDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->error_message.Get();
  *output = mojo::StringDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace device

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_GEOPOSITION_MOJOM_SHARED_H_