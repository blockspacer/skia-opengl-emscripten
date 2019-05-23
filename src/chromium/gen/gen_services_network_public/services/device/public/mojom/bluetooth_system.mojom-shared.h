// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_BLUETOOTH_SYSTEM_MOJOM_SHARED_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_BLUETOOTH_SYSTEM_MOJOM_SHARED_H_

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
#include "services/device/public/mojom/bluetooth_system.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace device {
namespace mojom {
class BluetoothAddressDataView;

class BluetoothDeviceInfoDataView;



}  // namespace mojom
}  // namespace device

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::device::mojom::BluetoothAddressDataView> {
  using Data = ::device::mojom::internal::BluetoothAddress_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::device::mojom::BluetoothDeviceInfoDataView> {
  using Data = ::device::mojom::internal::BluetoothDeviceInfo_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace device {
namespace mojom {


enum class BluetoothDeviceInfo_ConnectionState : int32_t {
  
  kNotConnected,
  
  kConnecting,
  
  kConnected,
  kMinValue = 0,
  kMaxValue = 2,
};

 std::ostream& operator<<(std::ostream& os, BluetoothDeviceInfo_ConnectionState value);
inline bool IsKnownEnumValue(BluetoothDeviceInfo_ConnectionState value) {
  return internal::BluetoothDeviceInfo_ConnectionState_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class BluetoothDeviceInfo_DeviceType : int32_t {
  
  kUnknown,
  
  kComputer,
  
  kPhone,
  
  kModem,
  
  kAudio,
  
  kCarAudio,
  
  kVideo,
  
  kPeripheral,
  
  kJoystick,
  
  kGamepad,
  
  kKeyboard,
  
  kMouse,
  
  kTablet,
  
  kKeyboardMouseCombo,
  kMinValue = 0,
  kMaxValue = 13,
};

 std::ostream& operator<<(std::ostream& os, BluetoothDeviceInfo_DeviceType value);
inline bool IsKnownEnumValue(BluetoothDeviceInfo_DeviceType value) {
  return internal::BluetoothDeviceInfo_DeviceType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class BluetoothSystem_State : int32_t {
  
  kUnsupported,
  
  kUnavailable,
  
  kPoweredOff,
  
  kTransitioning,
  
  kPoweredOn,
  kMinValue = 0,
  kMaxValue = 4,
};

 std::ostream& operator<<(std::ostream& os, BluetoothSystem_State value);
inline bool IsKnownEnumValue(BluetoothSystem_State value) {
  return internal::BluetoothSystem_State_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class BluetoothSystem_SetPoweredResult : int32_t {
  
  kSuccess,
  
  kFailedUnknownReason,
  
  kFailedBluetoothUnavailable,
  
  kFailedInProgress,
  kMinValue = 0,
  kMaxValue = 3,
};

 std::ostream& operator<<(std::ostream& os, BluetoothSystem_SetPoweredResult value);
inline bool IsKnownEnumValue(BluetoothSystem_SetPoweredResult value) {
  return internal::BluetoothSystem_SetPoweredResult_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class BluetoothSystem_ScanState : int32_t {
  
  kNotScanning,
  
  kTransitioning,
  
  kScanning,
  kMinValue = 0,
  kMaxValue = 2,
};

 std::ostream& operator<<(std::ostream& os, BluetoothSystem_ScanState value);
inline bool IsKnownEnumValue(BluetoothSystem_ScanState value) {
  return internal::BluetoothSystem_ScanState_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class BluetoothSystem_StartScanResult : int32_t {
  
  kSuccess,
  
  kFailedUnknownReason,
  
  kFailedBluetoothUnavailable,
  kMinValue = 0,
  kMaxValue = 2,
};

 std::ostream& operator<<(std::ostream& os, BluetoothSystem_StartScanResult value);
inline bool IsKnownEnumValue(BluetoothSystem_StartScanResult value) {
  return internal::BluetoothSystem_StartScanResult_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class BluetoothSystem_StopScanResult : int32_t {
  
  kSuccess,
  
  kFailedUnknownReason,
  
  kFailedBluetoothUnavailable,
  kMinValue = 0,
  kMaxValue = 2,
};

 std::ostream& operator<<(std::ostream& os, BluetoothSystem_StopScanResult value);
inline bool IsKnownEnumValue(BluetoothSystem_StopScanResult value) {
  return internal::BluetoothSystem_StopScanResult_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class BluetoothSystemFactoryInterfaceBase {};

using BluetoothSystemFactoryPtrDataView =
    mojo::InterfacePtrDataView<BluetoothSystemFactoryInterfaceBase>;
using BluetoothSystemFactoryRequestDataView =
    mojo::InterfaceRequestDataView<BluetoothSystemFactoryInterfaceBase>;
using BluetoothSystemFactoryAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<BluetoothSystemFactoryInterfaceBase>;
using BluetoothSystemFactoryAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<BluetoothSystemFactoryInterfaceBase>;
class BluetoothSystemInterfaceBase {};

using BluetoothSystemPtrDataView =
    mojo::InterfacePtrDataView<BluetoothSystemInterfaceBase>;
using BluetoothSystemRequestDataView =
    mojo::InterfaceRequestDataView<BluetoothSystemInterfaceBase>;
using BluetoothSystemAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<BluetoothSystemInterfaceBase>;
using BluetoothSystemAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<BluetoothSystemInterfaceBase>;
class BluetoothSystemClientInterfaceBase {};

using BluetoothSystemClientPtrDataView =
    mojo::InterfacePtrDataView<BluetoothSystemClientInterfaceBase>;
using BluetoothSystemClientRequestDataView =
    mojo::InterfaceRequestDataView<BluetoothSystemClientInterfaceBase>;
using BluetoothSystemClientAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<BluetoothSystemClientInterfaceBase>;
using BluetoothSystemClientAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<BluetoothSystemClientInterfaceBase>;
class BluetoothAddressDataView {
 public:
  BluetoothAddressDataView() {}

  BluetoothAddressDataView(
      internal::BluetoothAddress_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetAddressDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAddress(UserType* output) {
    auto* pointer = data_->address.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
 private:
  internal::BluetoothAddress_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class BluetoothDeviceInfoDataView {
 public:
  BluetoothDeviceInfoDataView() {}

  BluetoothDeviceInfoDataView(
      internal::BluetoothDeviceInfo_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetAddressDataView(
      BluetoothAddressDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAddress(UserType* output) {
    auto* pointer = data_->address.Get();
    return mojo::internal::Deserialize<::device::mojom::BluetoothAddressDataView>(
        pointer, output, context_);
  }
  inline void GetNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadName(UserType* output) {
    auto* pointer = data_->name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadConnectionState(UserType* output) const {
    auto data_value = data_->connection_state;
    return mojo::internal::Deserialize<::device::mojom::BluetoothDeviceInfo_ConnectionState>(
        data_value, output);
  }

  BluetoothDeviceInfo_ConnectionState connection_state() const {
    return static_cast<BluetoothDeviceInfo_ConnectionState>(data_->connection_state);
  }
  bool is_paired() const {
    return data_->is_paired;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDeviceType(UserType* output) const {
    auto data_value = data_->device_type;
    return mojo::internal::Deserialize<::device::mojom::BluetoothDeviceInfo_DeviceType>(
        data_value, output);
  }

  BluetoothDeviceInfo_DeviceType device_type() const {
    return static_cast<BluetoothDeviceInfo_DeviceType>(data_->device_type);
  }
 private:
  internal::BluetoothDeviceInfo_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace device

namespace std {

template <>
struct hash<::device::mojom::BluetoothDeviceInfo_ConnectionState>
    : public mojo::internal::EnumHashImpl<::device::mojom::BluetoothDeviceInfo_ConnectionState> {};

template <>
struct hash<::device::mojom::BluetoothDeviceInfo_DeviceType>
    : public mojo::internal::EnumHashImpl<::device::mojom::BluetoothDeviceInfo_DeviceType> {};

template <>
struct hash<::device::mojom::BluetoothSystem_State>
    : public mojo::internal::EnumHashImpl<::device::mojom::BluetoothSystem_State> {};

template <>
struct hash<::device::mojom::BluetoothSystem_SetPoweredResult>
    : public mojo::internal::EnumHashImpl<::device::mojom::BluetoothSystem_SetPoweredResult> {};

template <>
struct hash<::device::mojom::BluetoothSystem_ScanState>
    : public mojo::internal::EnumHashImpl<::device::mojom::BluetoothSystem_ScanState> {};

template <>
struct hash<::device::mojom::BluetoothSystem_StartScanResult>
    : public mojo::internal::EnumHashImpl<::device::mojom::BluetoothSystem_StartScanResult> {};

template <>
struct hash<::device::mojom::BluetoothSystem_StopScanResult>
    : public mojo::internal::EnumHashImpl<::device::mojom::BluetoothSystem_StopScanResult> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::device::mojom::BluetoothDeviceInfo_ConnectionState, ::device::mojom::BluetoothDeviceInfo_ConnectionState> {
  static ::device::mojom::BluetoothDeviceInfo_ConnectionState ToMojom(::device::mojom::BluetoothDeviceInfo_ConnectionState input) { return input; }
  static bool FromMojom(::device::mojom::BluetoothDeviceInfo_ConnectionState input, ::device::mojom::BluetoothDeviceInfo_ConnectionState* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::BluetoothDeviceInfo_ConnectionState, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::device::mojom::BluetoothDeviceInfo_ConnectionState, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::device::mojom::BluetoothDeviceInfo_ConnectionState>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::device::mojom::BluetoothDeviceInfo_DeviceType, ::device::mojom::BluetoothDeviceInfo_DeviceType> {
  static ::device::mojom::BluetoothDeviceInfo_DeviceType ToMojom(::device::mojom::BluetoothDeviceInfo_DeviceType input) { return input; }
  static bool FromMojom(::device::mojom::BluetoothDeviceInfo_DeviceType input, ::device::mojom::BluetoothDeviceInfo_DeviceType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::BluetoothDeviceInfo_DeviceType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::device::mojom::BluetoothDeviceInfo_DeviceType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::device::mojom::BluetoothDeviceInfo_DeviceType>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::device::mojom::BluetoothSystem_State, ::device::mojom::BluetoothSystem_State> {
  static ::device::mojom::BluetoothSystem_State ToMojom(::device::mojom::BluetoothSystem_State input) { return input; }
  static bool FromMojom(::device::mojom::BluetoothSystem_State input, ::device::mojom::BluetoothSystem_State* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::BluetoothSystem_State, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::device::mojom::BluetoothSystem_State, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::device::mojom::BluetoothSystem_State>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::device::mojom::BluetoothSystem_SetPoweredResult, ::device::mojom::BluetoothSystem_SetPoweredResult> {
  static ::device::mojom::BluetoothSystem_SetPoweredResult ToMojom(::device::mojom::BluetoothSystem_SetPoweredResult input) { return input; }
  static bool FromMojom(::device::mojom::BluetoothSystem_SetPoweredResult input, ::device::mojom::BluetoothSystem_SetPoweredResult* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::BluetoothSystem_SetPoweredResult, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::device::mojom::BluetoothSystem_SetPoweredResult, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::device::mojom::BluetoothSystem_SetPoweredResult>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::device::mojom::BluetoothSystem_ScanState, ::device::mojom::BluetoothSystem_ScanState> {
  static ::device::mojom::BluetoothSystem_ScanState ToMojom(::device::mojom::BluetoothSystem_ScanState input) { return input; }
  static bool FromMojom(::device::mojom::BluetoothSystem_ScanState input, ::device::mojom::BluetoothSystem_ScanState* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::BluetoothSystem_ScanState, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::device::mojom::BluetoothSystem_ScanState, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::device::mojom::BluetoothSystem_ScanState>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::device::mojom::BluetoothSystem_StartScanResult, ::device::mojom::BluetoothSystem_StartScanResult> {
  static ::device::mojom::BluetoothSystem_StartScanResult ToMojom(::device::mojom::BluetoothSystem_StartScanResult input) { return input; }
  static bool FromMojom(::device::mojom::BluetoothSystem_StartScanResult input, ::device::mojom::BluetoothSystem_StartScanResult* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::BluetoothSystem_StartScanResult, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::device::mojom::BluetoothSystem_StartScanResult, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::device::mojom::BluetoothSystem_StartScanResult>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::device::mojom::BluetoothSystem_StopScanResult, ::device::mojom::BluetoothSystem_StopScanResult> {
  static ::device::mojom::BluetoothSystem_StopScanResult ToMojom(::device::mojom::BluetoothSystem_StopScanResult input) { return input; }
  static bool FromMojom(::device::mojom::BluetoothSystem_StopScanResult input, ::device::mojom::BluetoothSystem_StopScanResult* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::BluetoothSystem_StopScanResult, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::device::mojom::BluetoothSystem_StopScanResult, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::device::mojom::BluetoothSystem_StopScanResult>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::BluetoothAddressDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::device::mojom::BluetoothAddressDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::device::mojom::internal::BluetoothAddress_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::address(input)) in_address = Traits::address(input);
    typename decltype((*output)->address)::BaseType::BufferWriter
        address_writer;
    const mojo::internal::ContainerValidateParams address_validate_params(
        6, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
        in_address, buffer, &address_writer, &address_validate_params,
        context);
    (*output)->address.Set(
        address_writer.is_null() ? nullptr : address_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->address.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null address in BluetoothAddress struct");
  }

  static bool Deserialize(::device::mojom::internal::BluetoothAddress_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::device::mojom::BluetoothAddressDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::BluetoothDeviceInfoDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::device::mojom::BluetoothDeviceInfoDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::device::mojom::internal::BluetoothDeviceInfo_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::address(input)) in_address = Traits::address(input);
    typename decltype((*output)->address)::BaseType::BufferWriter
        address_writer;
    mojo::internal::Serialize<::device::mojom::BluetoothAddressDataView>(
        in_address, buffer, &address_writer, context);
    (*output)->address.Set(
        address_writer.is_null() ? nullptr : address_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->address.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null address in BluetoothDeviceInfo struct");
    decltype(Traits::name(input)) in_name = Traits::name(input);
    typename decltype((*output)->name)::BaseType::BufferWriter
        name_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_name, buffer, &name_writer, context);
    (*output)->name.Set(
        name_writer.is_null() ? nullptr : name_writer.data());
    mojo::internal::Serialize<::device::mojom::BluetoothDeviceInfo_ConnectionState>(
        Traits::connection_state(input), &(*output)->connection_state);
    (*output)->is_paired = Traits::is_paired(input);
    mojo::internal::Serialize<::device::mojom::BluetoothDeviceInfo_DeviceType>(
        Traits::device_type(input), &(*output)->device_type);
  }

  static bool Deserialize(::device::mojom::internal::BluetoothDeviceInfo_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::device::mojom::BluetoothDeviceInfoDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace device {
namespace mojom {

inline void BluetoothAddressDataView::GetAddressDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->address.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}


inline void BluetoothDeviceInfoDataView::GetAddressDataView(
    BluetoothAddressDataView* output) {
  auto pointer = data_->address.Get();
  *output = BluetoothAddressDataView(pointer, context_);
}
inline void BluetoothDeviceInfoDataView::GetNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->name.Get();
  *output = mojo::StringDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace device

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_BLUETOOTH_SYSTEM_MOJOM_SHARED_H_