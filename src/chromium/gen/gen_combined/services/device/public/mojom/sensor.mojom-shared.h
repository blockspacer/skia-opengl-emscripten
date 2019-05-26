// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_SENSOR_MOJOM_SHARED_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_SENSOR_MOJOM_SHARED_H_

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
#include "services/device/public/mojom/sensor.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace device {
namespace mojom {
class SensorConfigurationDataView;



}  // namespace mojom
}  // namespace device

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::device::mojom::SensorConfigurationDataView> {
  using Data = ::device::mojom::internal::SensorConfiguration_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace device {
namespace mojom {


enum class SensorType : int32_t {
  
  AMBIENT_LIGHT,
  
  PROXIMITY,
  
  ACCELEROMETER,
  
  LINEAR_ACCELERATION,
  
  GYROSCOPE,
  
  MAGNETOMETER,
  
  PRESSURE,
  
  ABSOLUTE_ORIENTATION_EULER_ANGLES,
  
  ABSOLUTE_ORIENTATION_QUATERNION,
  
  RELATIVE_ORIENTATION_EULER_ANGLES,
  
  RELATIVE_ORIENTATION_QUATERNION,
  kMinValue = 0,
  kMaxValue = 10,
};

 std::ostream& operator<<(std::ostream& os, SensorType value);
inline bool IsKnownEnumValue(SensorType value) {
  return internal::SensorType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class ReportingMode : int32_t {
  
  ON_CHANGE,
  
  CONTINUOUS,
  kMinValue = 0,
  kMaxValue = 1,
};

 std::ostream& operator<<(std::ostream& os, ReportingMode value);
inline bool IsKnownEnumValue(ReportingMode value) {
  return internal::ReportingMode_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class SensorInterfaceBase {};

using SensorPtrDataView =
    mojo::InterfacePtrDataView<SensorInterfaceBase>;
using SensorRequestDataView =
    mojo::InterfaceRequestDataView<SensorInterfaceBase>;
using SensorAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<SensorInterfaceBase>;
using SensorAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<SensorInterfaceBase>;
class SensorClientInterfaceBase {};

using SensorClientPtrDataView =
    mojo::InterfacePtrDataView<SensorClientInterfaceBase>;
using SensorClientRequestDataView =
    mojo::InterfaceRequestDataView<SensorClientInterfaceBase>;
using SensorClientAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<SensorClientInterfaceBase>;
using SensorClientAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<SensorClientInterfaceBase>;
class SensorConfigurationDataView {
 public:
  SensorConfigurationDataView() {}

  SensorConfigurationDataView(
      internal::SensorConfiguration_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  double frequency() const {
    return data_->frequency;
  }
 private:
  internal::SensorConfiguration_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace device

namespace std {

template <>
struct hash<::device::mojom::SensorType>
    : public mojo::internal::EnumHashImpl<::device::mojom::SensorType> {};

template <>
struct hash<::device::mojom::ReportingMode>
    : public mojo::internal::EnumHashImpl<::device::mojom::ReportingMode> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::device::mojom::SensorType, ::device::mojom::SensorType> {
  static ::device::mojom::SensorType ToMojom(::device::mojom::SensorType input) { return input; }
  static bool FromMojom(::device::mojom::SensorType input, ::device::mojom::SensorType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::SensorType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::device::mojom::SensorType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::device::mojom::SensorType>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::device::mojom::ReportingMode, ::device::mojom::ReportingMode> {
  static ::device::mojom::ReportingMode ToMojom(::device::mojom::ReportingMode input) { return input; }
  static bool FromMojom(::device::mojom::ReportingMode input, ::device::mojom::ReportingMode* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::ReportingMode, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::device::mojom::ReportingMode, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::device::mojom::ReportingMode>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::SensorConfigurationDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::device::mojom::SensorConfigurationDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::device::mojom::internal::SensorConfiguration_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->frequency = Traits::frequency(input);
  }

  static bool Deserialize(::device::mojom::internal::SensorConfiguration_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::device::mojom::SensorConfigurationDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace device {
namespace mojom {




}  // namespace mojom
}  // namespace device

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_SENSOR_MOJOM_SHARED_H_