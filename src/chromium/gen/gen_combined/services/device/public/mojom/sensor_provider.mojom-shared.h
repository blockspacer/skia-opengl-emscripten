// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_SENSOR_PROVIDER_MOJOM_SHARED_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_SENSOR_PROVIDER_MOJOM_SHARED_H_

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
#include "services/device/public/mojom/sensor_provider.mojom-shared-internal.h"
#include "services/device/public/mojom/sensor.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace device {
namespace mojom {
class SensorInitParamsDataView;



}  // namespace mojom
}  // namespace device

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::device::mojom::SensorInitParamsDataView> {
  using Data = ::device::mojom::internal::SensorInitParams_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace device {
namespace mojom {


enum class SensorCreationResult : int32_t {
  
  SUCCESS,
  
  ERROR_NOT_AVAILABLE,
  
  ERROR_NOT_ALLOWED,
  kMinValue = 0,
  kMaxValue = 2,
};

 std::ostream& operator<<(std::ostream& os, SensorCreationResult value);
inline bool IsKnownEnumValue(SensorCreationResult value) {
  return internal::SensorCreationResult_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class SensorProviderInterfaceBase {};

using SensorProviderPtrDataView =
    mojo::InterfacePtrDataView<SensorProviderInterfaceBase>;
using SensorProviderRequestDataView =
    mojo::InterfaceRequestDataView<SensorProviderInterfaceBase>;
using SensorProviderAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<SensorProviderInterfaceBase>;
using SensorProviderAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<SensorProviderInterfaceBase>;
class SensorInitParamsDataView {
 public:
  SensorInitParamsDataView() {}

  SensorInitParamsDataView(
      internal::SensorInitParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeSensor() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::device::mojom::SensorPtrDataView>(
            &data_->sensor, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeClientRequest() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::device::mojom::SensorClientRequestDataView>(
            &data_->client_request, &result, context_);
    DCHECK(ret);
    return result;
  }
  mojo::ScopedSharedBufferHandle TakeMemory() {
    mojo::ScopedSharedBufferHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedSharedBufferHandle>(
            &data_->memory, &result, context_);
    DCHECK(ret);
    return result;
  }
  uint64_t buffer_offset() const {
    return data_->buffer_offset;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMode(UserType* output) const {
    auto data_value = data_->mode;
    return mojo::internal::Deserialize<::device::mojom::ReportingMode>(
        data_value, output);
  }

  ::device::mojom::ReportingMode mode() const {
    return static_cast<::device::mojom::ReportingMode>(data_->mode);
  }
  inline void GetDefaultConfigurationDataView(
      ::device::mojom::SensorConfigurationDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDefaultConfiguration(UserType* output) {
    auto* pointer = data_->default_configuration.Get();
    return mojo::internal::Deserialize<::device::mojom::SensorConfigurationDataView>(
        pointer, output, context_);
  }
  double maximum_frequency() const {
    return data_->maximum_frequency;
  }
  double minimum_frequency() const {
    return data_->minimum_frequency;
  }
 private:
  internal::SensorInitParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace device

namespace std {

template <>
struct hash<::device::mojom::SensorCreationResult>
    : public mojo::internal::EnumHashImpl<::device::mojom::SensorCreationResult> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::device::mojom::SensorCreationResult, ::device::mojom::SensorCreationResult> {
  static ::device::mojom::SensorCreationResult ToMojom(::device::mojom::SensorCreationResult input) { return input; }
  static bool FromMojom(::device::mojom::SensorCreationResult input, ::device::mojom::SensorCreationResult* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::SensorCreationResult, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::device::mojom::SensorCreationResult, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::device::mojom::SensorCreationResult>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::SensorInitParamsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::device::mojom::SensorInitParamsDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::device::mojom::internal::SensorInitParams_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::sensor(input)) in_sensor = Traits::sensor(input);
    mojo::internal::Serialize<::device::mojom::SensorPtrDataView>(
        in_sensor, &(*output)->sensor, context);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !mojo::internal::IsHandleOrInterfaceValid((*output)->sensor),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
        "invalid sensor in SensorInitParams struct");
    decltype(Traits::client_request(input)) in_client_request = Traits::client_request(input);
    mojo::internal::Serialize<::device::mojom::SensorClientRequestDataView>(
        in_client_request, &(*output)->client_request, context);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !mojo::internal::IsHandleOrInterfaceValid((*output)->client_request),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
        "invalid client_request in SensorInitParams struct");
    decltype(Traits::memory(input)) in_memory = Traits::memory(input);
    mojo::internal::Serialize<mojo::ScopedSharedBufferHandle>(
        in_memory, &(*output)->memory, context);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !mojo::internal::IsHandleOrInterfaceValid((*output)->memory),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
        "invalid memory in SensorInitParams struct");
    (*output)->buffer_offset = Traits::buffer_offset(input);
    mojo::internal::Serialize<::device::mojom::ReportingMode>(
        Traits::mode(input), &(*output)->mode);
    decltype(Traits::default_configuration(input)) in_default_configuration = Traits::default_configuration(input);
    typename decltype((*output)->default_configuration)::BaseType::BufferWriter
        default_configuration_writer;
    mojo::internal::Serialize<::device::mojom::SensorConfigurationDataView>(
        in_default_configuration, buffer, &default_configuration_writer, context);
    (*output)->default_configuration.Set(
        default_configuration_writer.is_null() ? nullptr : default_configuration_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->default_configuration.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null default_configuration in SensorInitParams struct");
    (*output)->maximum_frequency = Traits::maximum_frequency(input);
    (*output)->minimum_frequency = Traits::minimum_frequency(input);
  }

  static bool Deserialize(::device::mojom::internal::SensorInitParams_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::device::mojom::SensorInitParamsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace device {
namespace mojom {

inline void SensorInitParamsDataView::GetDefaultConfigurationDataView(
    ::device::mojom::SensorConfigurationDataView* output) {
  auto pointer = data_->default_configuration.Get();
  *output = ::device::mojom::SensorConfigurationDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace device

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_SENSOR_PROVIDER_MOJOM_SHARED_H_