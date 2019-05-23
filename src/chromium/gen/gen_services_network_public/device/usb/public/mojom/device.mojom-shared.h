// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef DEVICE_USB_PUBLIC_MOJOM_DEVICE_MOJOM_SHARED_H_
#define DEVICE_USB_PUBLIC_MOJOM_DEVICE_MOJOM_SHARED_H_

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
#include "device/usb/public/mojom/device.mojom-shared-internal.h"
#include "mojo/public/mojom/base/string16.mojom-shared.h"
#include "url/mojom/url.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace device {
namespace mojom {
class UsbEndpointInfoDataView;

class UsbAlternateInterfaceInfoDataView;

class UsbInterfaceInfoDataView;

class UsbConfigurationInfoDataView;

class UsbDeviceInfoDataView;

class UsbControlTransferParamsDataView;

class UsbIsochronousPacketDataView;



}  // namespace mojom
}  // namespace device

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::device::mojom::UsbEndpointInfoDataView> {
  using Data = ::device::mojom::internal::UsbEndpointInfo_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::device::mojom::UsbAlternateInterfaceInfoDataView> {
  using Data = ::device::mojom::internal::UsbAlternateInterfaceInfo_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::device::mojom::UsbInterfaceInfoDataView> {
  using Data = ::device::mojom::internal::UsbInterfaceInfo_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::device::mojom::UsbConfigurationInfoDataView> {
  using Data = ::device::mojom::internal::UsbConfigurationInfo_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::device::mojom::UsbDeviceInfoDataView> {
  using Data = ::device::mojom::internal::UsbDeviceInfo_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::device::mojom::UsbControlTransferParamsDataView> {
  using Data = ::device::mojom::internal::UsbControlTransferParams_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::device::mojom::UsbIsochronousPacketDataView> {
  using Data = ::device::mojom::internal::UsbIsochronousPacket_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace device {
namespace mojom {


enum class UsbOpenDeviceError : int32_t {
  
  OK,
  
  ACCESS_DENIED,
  
  ALREADY_OPEN,
  kMinValue = 0,
  kMaxValue = 2,
};

 std::ostream& operator<<(std::ostream& os, UsbOpenDeviceError value);
inline bool IsKnownEnumValue(UsbOpenDeviceError value) {
  return internal::UsbOpenDeviceError_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class UsbTransferDirection : int32_t {
  
  INBOUND = 0,
  
  OUTBOUND,
  kMinValue = 0,
  kMaxValue = 1,
};

 std::ostream& operator<<(std::ostream& os, UsbTransferDirection value);
inline bool IsKnownEnumValue(UsbTransferDirection value) {
  return internal::UsbTransferDirection_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class UsbControlTransferType : int32_t {
  
  STANDARD,
  
  CLASS,
  
  VENDOR,
  
  RESERVED,
  kMinValue = 0,
  kMaxValue = 3,
};

 std::ostream& operator<<(std::ostream& os, UsbControlTransferType value);
inline bool IsKnownEnumValue(UsbControlTransferType value) {
  return internal::UsbControlTransferType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class UsbControlTransferRecipient : int32_t {
  
  DEVICE,
  
  INTERFACE,
  
  ENDPOINT,
  
  OTHER,
  kMinValue = 0,
  kMaxValue = 3,
};

 std::ostream& operator<<(std::ostream& os, UsbControlTransferRecipient value);
inline bool IsKnownEnumValue(UsbControlTransferRecipient value) {
  return internal::UsbControlTransferRecipient_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class UsbTransferType : int32_t {
  
  CONTROL = 0,
  
  ISOCHRONOUS,
  
  BULK,
  
  INTERRUPT,
  kMinValue = 0,
  kMaxValue = 3,
};

 std::ostream& operator<<(std::ostream& os, UsbTransferType value);
inline bool IsKnownEnumValue(UsbTransferType value) {
  return internal::UsbTransferType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class UsbSynchronizationType : int32_t {
  
  NONE = 0,
  
  ASYNCHRONOUS,
  
  ADAPTIVE,
  
  SYNCHRONOUS,
  kMinValue = 0,
  kMaxValue = 3,
};

 std::ostream& operator<<(std::ostream& os, UsbSynchronizationType value);
inline bool IsKnownEnumValue(UsbSynchronizationType value) {
  return internal::UsbSynchronizationType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class UsbUsageType : int32_t {
  
  DATA = 0,
  
  FEEDBACK,
  
  EXPLICIT_FEEDBACK,
  
  PERIODIC,
  
  NOTIFICATION,
  
  RESERVED,
  kMinValue = 0,
  kMaxValue = 5,
};

 std::ostream& operator<<(std::ostream& os, UsbUsageType value);
inline bool IsKnownEnumValue(UsbUsageType value) {
  return internal::UsbUsageType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class UsbTransferStatus : int32_t {
  
  COMPLETED = 0,
  
  TRANSFER_ERROR,
  
  TIMEOUT,
  
  CANCELLED,
  
  STALLED,
  
  DISCONNECT,
  
  BABBLE,
  
  SHORT_PACKET,
  
  PERMISSION_DENIED,
  kMinValue = 0,
  kMaxValue = 8,
};

 std::ostream& operator<<(std::ostream& os, UsbTransferStatus value);
inline bool IsKnownEnumValue(UsbTransferStatus value) {
  return internal::UsbTransferStatus_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class UsbDeviceInterfaceBase {};

using UsbDevicePtrDataView =
    mojo::InterfacePtrDataView<UsbDeviceInterfaceBase>;
using UsbDeviceRequestDataView =
    mojo::InterfaceRequestDataView<UsbDeviceInterfaceBase>;
using UsbDeviceAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<UsbDeviceInterfaceBase>;
using UsbDeviceAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<UsbDeviceInterfaceBase>;
class UsbDeviceClientInterfaceBase {};

using UsbDeviceClientPtrDataView =
    mojo::InterfacePtrDataView<UsbDeviceClientInterfaceBase>;
using UsbDeviceClientRequestDataView =
    mojo::InterfaceRequestDataView<UsbDeviceClientInterfaceBase>;
using UsbDeviceClientAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<UsbDeviceClientInterfaceBase>;
using UsbDeviceClientAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<UsbDeviceClientInterfaceBase>;
class UsbEndpointInfoDataView {
 public:
  UsbEndpointInfoDataView() {}

  UsbEndpointInfoDataView(
      internal::UsbEndpointInfo_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint8_t endpoint_number() const {
    return data_->endpoint_number;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDirection(UserType* output) const {
    auto data_value = data_->direction;
    return mojo::internal::Deserialize<::device::mojom::UsbTransferDirection>(
        data_value, output);
  }

  UsbTransferDirection direction() const {
    return static_cast<UsbTransferDirection>(data_->direction);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadType(UserType* output) const {
    auto data_value = data_->type;
    return mojo::internal::Deserialize<::device::mojom::UsbTransferType>(
        data_value, output);
  }

  UsbTransferType type() const {
    return static_cast<UsbTransferType>(data_->type);
  }
  uint32_t packet_size() const {
    return data_->packet_size;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSynchronizationType(UserType* output) const {
    auto data_value = data_->synchronization_type;
    return mojo::internal::Deserialize<::device::mojom::UsbSynchronizationType>(
        data_value, output);
  }

  UsbSynchronizationType synchronization_type() const {
    return static_cast<UsbSynchronizationType>(data_->synchronization_type);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUsageType(UserType* output) const {
    auto data_value = data_->usage_type;
    return mojo::internal::Deserialize<::device::mojom::UsbUsageType>(
        data_value, output);
  }

  UsbUsageType usage_type() const {
    return static_cast<UsbUsageType>(data_->usage_type);
  }
  uint8_t polling_interval() const {
    return data_->polling_interval;
  }
  inline void GetExtraDataDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadExtraData(UserType* output) {
    auto* pointer = data_->extra_data.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
 private:
  internal::UsbEndpointInfo_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class UsbAlternateInterfaceInfoDataView {
 public:
  UsbAlternateInterfaceInfoDataView() {}

  UsbAlternateInterfaceInfoDataView(
      internal::UsbAlternateInterfaceInfo_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint8_t alternate_setting() const {
    return data_->alternate_setting;
  }
  uint8_t class_code() const {
    return data_->class_code;
  }
  uint8_t subclass_code() const {
    return data_->subclass_code;
  }
  uint8_t protocol_code() const {
    return data_->protocol_code;
  }
  inline void GetInterfaceNameDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadInterfaceName(UserType* output) {
    auto* pointer = data_->interface_name.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
  inline void GetEndpointsDataView(
      mojo::ArrayDataView<UsbEndpointInfoDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadEndpoints(UserType* output) {
    auto* pointer = data_->endpoints.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::device::mojom::UsbEndpointInfoDataView>>(
        pointer, output, context_);
  }
  inline void GetExtraDataDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadExtraData(UserType* output) {
    auto* pointer = data_->extra_data.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
 private:
  internal::UsbAlternateInterfaceInfo_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class UsbInterfaceInfoDataView {
 public:
  UsbInterfaceInfoDataView() {}

  UsbInterfaceInfoDataView(
      internal::UsbInterfaceInfo_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint8_t interface_number() const {
    return data_->interface_number;
  }
  inline void GetAlternatesDataView(
      mojo::ArrayDataView<UsbAlternateInterfaceInfoDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAlternates(UserType* output) {
    auto* pointer = data_->alternates.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::device::mojom::UsbAlternateInterfaceInfoDataView>>(
        pointer, output, context_);
  }
 private:
  internal::UsbInterfaceInfo_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class UsbConfigurationInfoDataView {
 public:
  UsbConfigurationInfoDataView() {}

  UsbConfigurationInfoDataView(
      internal::UsbConfigurationInfo_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint8_t configuration_value() const {
    return data_->configuration_value;
  }
  inline void GetConfigurationNameDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadConfigurationName(UserType* output) {
    auto* pointer = data_->configuration_name.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
  bool self_powered() const {
    return data_->self_powered;
  }
  bool remote_wakeup() const {
    return data_->remote_wakeup;
  }
  uint8_t maximum_power() const {
    return data_->maximum_power;
  }
  inline void GetInterfacesDataView(
      mojo::ArrayDataView<UsbInterfaceInfoDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadInterfaces(UserType* output) {
    auto* pointer = data_->interfaces.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::device::mojom::UsbInterfaceInfoDataView>>(
        pointer, output, context_);
  }
  inline void GetExtraDataDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadExtraData(UserType* output) {
    auto* pointer = data_->extra_data.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
 private:
  internal::UsbConfigurationInfo_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class UsbDeviceInfoDataView {
 public:
  UsbDeviceInfoDataView() {}

  UsbDeviceInfoDataView(
      internal::UsbDeviceInfo_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetGuidDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadGuid(UserType* output) {
    auto* pointer = data_->guid.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  uint8_t usb_version_major() const {
    return data_->usb_version_major;
  }
  uint8_t usb_version_minor() const {
    return data_->usb_version_minor;
  }
  uint8_t usb_version_subminor() const {
    return data_->usb_version_subminor;
  }
  uint8_t class_code() const {
    return data_->class_code;
  }
  uint8_t subclass_code() const {
    return data_->subclass_code;
  }
  uint8_t protocol_code() const {
    return data_->protocol_code;
  }
  uint32_t bus_number() const {
    return data_->bus_number;
  }
  uint32_t port_number() const {
    return data_->port_number;
  }
  uint16_t vendor_id() const {
    return data_->vendor_id;
  }
  uint16_t product_id() const {
    return data_->product_id;
  }
  uint8_t device_version_major() const {
    return data_->device_version_major;
  }
  uint8_t device_version_minor() const {
    return data_->device_version_minor;
  }
  uint8_t device_version_subminor() const {
    return data_->device_version_subminor;
  }
  inline void GetManufacturerNameDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadManufacturerName(UserType* output) {
    auto* pointer = data_->manufacturer_name.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
  inline void GetProductNameDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadProductName(UserType* output) {
    auto* pointer = data_->product_name.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
  inline void GetSerialNumberDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSerialNumber(UserType* output) {
    auto* pointer = data_->serial_number.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
  inline void GetWebusbLandingPageDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadWebusbLandingPage(UserType* output) {
    auto* pointer = data_->webusb_landing_page.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  uint8_t active_configuration() const {
    return data_->active_configuration;
  }
  inline void GetConfigurationsDataView(
      mojo::ArrayDataView<UsbConfigurationInfoDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadConfigurations(UserType* output) {
    auto* pointer = data_->configurations.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::device::mojom::UsbConfigurationInfoDataView>>(
        pointer, output, context_);
  }
 private:
  internal::UsbDeviceInfo_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class UsbControlTransferParamsDataView {
 public:
  UsbControlTransferParamsDataView() {}

  UsbControlTransferParamsDataView(
      internal::UsbControlTransferParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadType(UserType* output) const {
    auto data_value = data_->type;
    return mojo::internal::Deserialize<::device::mojom::UsbControlTransferType>(
        data_value, output);
  }

  UsbControlTransferType type() const {
    return static_cast<UsbControlTransferType>(data_->type);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRecipient(UserType* output) const {
    auto data_value = data_->recipient;
    return mojo::internal::Deserialize<::device::mojom::UsbControlTransferRecipient>(
        data_value, output);
  }

  UsbControlTransferRecipient recipient() const {
    return static_cast<UsbControlTransferRecipient>(data_->recipient);
  }
  uint8_t request() const {
    return data_->request;
  }
  uint16_t value() const {
    return data_->value;
  }
  uint16_t index() const {
    return data_->index;
  }
 private:
  internal::UsbControlTransferParams_Data* data_ = nullptr;
};

class UsbIsochronousPacketDataView {
 public:
  UsbIsochronousPacketDataView() {}

  UsbIsochronousPacketDataView(
      internal::UsbIsochronousPacket_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t length() const {
    return data_->length;
  }
  uint32_t transferred_length() const {
    return data_->transferred_length;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::device::mojom::UsbTransferStatus>(
        data_value, output);
  }

  UsbTransferStatus status() const {
    return static_cast<UsbTransferStatus>(data_->status);
  }
 private:
  internal::UsbIsochronousPacket_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace device

namespace std {

template <>
struct hash<::device::mojom::UsbOpenDeviceError>
    : public mojo::internal::EnumHashImpl<::device::mojom::UsbOpenDeviceError> {};

template <>
struct hash<::device::mojom::UsbTransferDirection>
    : public mojo::internal::EnumHashImpl<::device::mojom::UsbTransferDirection> {};

template <>
struct hash<::device::mojom::UsbControlTransferType>
    : public mojo::internal::EnumHashImpl<::device::mojom::UsbControlTransferType> {};

template <>
struct hash<::device::mojom::UsbControlTransferRecipient>
    : public mojo::internal::EnumHashImpl<::device::mojom::UsbControlTransferRecipient> {};

template <>
struct hash<::device::mojom::UsbTransferType>
    : public mojo::internal::EnumHashImpl<::device::mojom::UsbTransferType> {};

template <>
struct hash<::device::mojom::UsbSynchronizationType>
    : public mojo::internal::EnumHashImpl<::device::mojom::UsbSynchronizationType> {};

template <>
struct hash<::device::mojom::UsbUsageType>
    : public mojo::internal::EnumHashImpl<::device::mojom::UsbUsageType> {};

template <>
struct hash<::device::mojom::UsbTransferStatus>
    : public mojo::internal::EnumHashImpl<::device::mojom::UsbTransferStatus> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::device::mojom::UsbOpenDeviceError, ::device::mojom::UsbOpenDeviceError> {
  static ::device::mojom::UsbOpenDeviceError ToMojom(::device::mojom::UsbOpenDeviceError input) { return input; }
  static bool FromMojom(::device::mojom::UsbOpenDeviceError input, ::device::mojom::UsbOpenDeviceError* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::UsbOpenDeviceError, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::device::mojom::UsbOpenDeviceError, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::device::mojom::UsbOpenDeviceError>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::device::mojom::UsbTransferDirection, ::device::mojom::UsbTransferDirection> {
  static ::device::mojom::UsbTransferDirection ToMojom(::device::mojom::UsbTransferDirection input) { return input; }
  static bool FromMojom(::device::mojom::UsbTransferDirection input, ::device::mojom::UsbTransferDirection* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::UsbTransferDirection, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::device::mojom::UsbTransferDirection, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::device::mojom::UsbTransferDirection>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::device::mojom::UsbControlTransferType, ::device::mojom::UsbControlTransferType> {
  static ::device::mojom::UsbControlTransferType ToMojom(::device::mojom::UsbControlTransferType input) { return input; }
  static bool FromMojom(::device::mojom::UsbControlTransferType input, ::device::mojom::UsbControlTransferType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::UsbControlTransferType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::device::mojom::UsbControlTransferType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::device::mojom::UsbControlTransferType>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::device::mojom::UsbControlTransferRecipient, ::device::mojom::UsbControlTransferRecipient> {
  static ::device::mojom::UsbControlTransferRecipient ToMojom(::device::mojom::UsbControlTransferRecipient input) { return input; }
  static bool FromMojom(::device::mojom::UsbControlTransferRecipient input, ::device::mojom::UsbControlTransferRecipient* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::UsbControlTransferRecipient, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::device::mojom::UsbControlTransferRecipient, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::device::mojom::UsbControlTransferRecipient>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::device::mojom::UsbTransferType, ::device::mojom::UsbTransferType> {
  static ::device::mojom::UsbTransferType ToMojom(::device::mojom::UsbTransferType input) { return input; }
  static bool FromMojom(::device::mojom::UsbTransferType input, ::device::mojom::UsbTransferType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::UsbTransferType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::device::mojom::UsbTransferType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::device::mojom::UsbTransferType>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::device::mojom::UsbSynchronizationType, ::device::mojom::UsbSynchronizationType> {
  static ::device::mojom::UsbSynchronizationType ToMojom(::device::mojom::UsbSynchronizationType input) { return input; }
  static bool FromMojom(::device::mojom::UsbSynchronizationType input, ::device::mojom::UsbSynchronizationType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::UsbSynchronizationType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::device::mojom::UsbSynchronizationType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::device::mojom::UsbSynchronizationType>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::device::mojom::UsbUsageType, ::device::mojom::UsbUsageType> {
  static ::device::mojom::UsbUsageType ToMojom(::device::mojom::UsbUsageType input) { return input; }
  static bool FromMojom(::device::mojom::UsbUsageType input, ::device::mojom::UsbUsageType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::UsbUsageType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::device::mojom::UsbUsageType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::device::mojom::UsbUsageType>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::device::mojom::UsbTransferStatus, ::device::mojom::UsbTransferStatus> {
  static ::device::mojom::UsbTransferStatus ToMojom(::device::mojom::UsbTransferStatus input) { return input; }
  static bool FromMojom(::device::mojom::UsbTransferStatus input, ::device::mojom::UsbTransferStatus* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::UsbTransferStatus, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::device::mojom::UsbTransferStatus, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::device::mojom::UsbTransferStatus>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::UsbEndpointInfoDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::device::mojom::UsbEndpointInfoDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::device::mojom::internal::UsbEndpointInfo_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->endpoint_number = Traits::endpoint_number(input);
    mojo::internal::Serialize<::device::mojom::UsbTransferDirection>(
        Traits::direction(input), &(*output)->direction);
    mojo::internal::Serialize<::device::mojom::UsbTransferType>(
        Traits::type(input), &(*output)->type);
    (*output)->packet_size = Traits::packet_size(input);
    mojo::internal::Serialize<::device::mojom::UsbSynchronizationType>(
        Traits::synchronization_type(input), &(*output)->synchronization_type);
    mojo::internal::Serialize<::device::mojom::UsbUsageType>(
        Traits::usage_type(input), &(*output)->usage_type);
    (*output)->polling_interval = Traits::polling_interval(input);
    decltype(Traits::extra_data(input)) in_extra_data = Traits::extra_data(input);
    typename decltype((*output)->extra_data)::BaseType::BufferWriter
        extra_data_writer;
    const mojo::internal::ContainerValidateParams extra_data_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
        in_extra_data, buffer, &extra_data_writer, &extra_data_validate_params,
        context);
    (*output)->extra_data.Set(
        extra_data_writer.is_null() ? nullptr : extra_data_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->extra_data.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null extra_data in UsbEndpointInfo struct");
  }

  static bool Deserialize(::device::mojom::internal::UsbEndpointInfo_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::device::mojom::UsbEndpointInfoDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::UsbAlternateInterfaceInfoDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::device::mojom::UsbAlternateInterfaceInfoDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::device::mojom::internal::UsbAlternateInterfaceInfo_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->alternate_setting = Traits::alternate_setting(input);
    (*output)->class_code = Traits::class_code(input);
    (*output)->subclass_code = Traits::subclass_code(input);
    (*output)->protocol_code = Traits::protocol_code(input);
    decltype(Traits::interface_name(input)) in_interface_name = Traits::interface_name(input);
    typename decltype((*output)->interface_name)::BaseType::BufferWriter
        interface_name_writer;
    mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
        in_interface_name, buffer, &interface_name_writer, context);
    (*output)->interface_name.Set(
        interface_name_writer.is_null() ? nullptr : interface_name_writer.data());
    decltype(Traits::endpoints(input)) in_endpoints = Traits::endpoints(input);
    typename decltype((*output)->endpoints)::BaseType::BufferWriter
        endpoints_writer;
    const mojo::internal::ContainerValidateParams endpoints_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::device::mojom::UsbEndpointInfoDataView>>(
        in_endpoints, buffer, &endpoints_writer, &endpoints_validate_params,
        context);
    (*output)->endpoints.Set(
        endpoints_writer.is_null() ? nullptr : endpoints_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->endpoints.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null endpoints in UsbAlternateInterfaceInfo struct");
    decltype(Traits::extra_data(input)) in_extra_data = Traits::extra_data(input);
    typename decltype((*output)->extra_data)::BaseType::BufferWriter
        extra_data_writer;
    const mojo::internal::ContainerValidateParams extra_data_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
        in_extra_data, buffer, &extra_data_writer, &extra_data_validate_params,
        context);
    (*output)->extra_data.Set(
        extra_data_writer.is_null() ? nullptr : extra_data_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->extra_data.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null extra_data in UsbAlternateInterfaceInfo struct");
  }

  static bool Deserialize(::device::mojom::internal::UsbAlternateInterfaceInfo_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::device::mojom::UsbAlternateInterfaceInfoDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::UsbInterfaceInfoDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::device::mojom::UsbInterfaceInfoDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::device::mojom::internal::UsbInterfaceInfo_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->interface_number = Traits::interface_number(input);
    decltype(Traits::alternates(input)) in_alternates = Traits::alternates(input);
    typename decltype((*output)->alternates)::BaseType::BufferWriter
        alternates_writer;
    const mojo::internal::ContainerValidateParams alternates_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::device::mojom::UsbAlternateInterfaceInfoDataView>>(
        in_alternates, buffer, &alternates_writer, &alternates_validate_params,
        context);
    (*output)->alternates.Set(
        alternates_writer.is_null() ? nullptr : alternates_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->alternates.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null alternates in UsbInterfaceInfo struct");
  }

  static bool Deserialize(::device::mojom::internal::UsbInterfaceInfo_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::device::mojom::UsbInterfaceInfoDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::UsbConfigurationInfoDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::device::mojom::UsbConfigurationInfoDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::device::mojom::internal::UsbConfigurationInfo_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->configuration_value = Traits::configuration_value(input);
    decltype(Traits::configuration_name(input)) in_configuration_name = Traits::configuration_name(input);
    typename decltype((*output)->configuration_name)::BaseType::BufferWriter
        configuration_name_writer;
    mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
        in_configuration_name, buffer, &configuration_name_writer, context);
    (*output)->configuration_name.Set(
        configuration_name_writer.is_null() ? nullptr : configuration_name_writer.data());
    (*output)->self_powered = Traits::self_powered(input);
    (*output)->remote_wakeup = Traits::remote_wakeup(input);
    (*output)->maximum_power = Traits::maximum_power(input);
    decltype(Traits::interfaces(input)) in_interfaces = Traits::interfaces(input);
    typename decltype((*output)->interfaces)::BaseType::BufferWriter
        interfaces_writer;
    const mojo::internal::ContainerValidateParams interfaces_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::device::mojom::UsbInterfaceInfoDataView>>(
        in_interfaces, buffer, &interfaces_writer, &interfaces_validate_params,
        context);
    (*output)->interfaces.Set(
        interfaces_writer.is_null() ? nullptr : interfaces_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->interfaces.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null interfaces in UsbConfigurationInfo struct");
    decltype(Traits::extra_data(input)) in_extra_data = Traits::extra_data(input);
    typename decltype((*output)->extra_data)::BaseType::BufferWriter
        extra_data_writer;
    const mojo::internal::ContainerValidateParams extra_data_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
        in_extra_data, buffer, &extra_data_writer, &extra_data_validate_params,
        context);
    (*output)->extra_data.Set(
        extra_data_writer.is_null() ? nullptr : extra_data_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->extra_data.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null extra_data in UsbConfigurationInfo struct");
  }

  static bool Deserialize(::device::mojom::internal::UsbConfigurationInfo_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::device::mojom::UsbConfigurationInfoDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::UsbDeviceInfoDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::device::mojom::UsbDeviceInfoDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::device::mojom::internal::UsbDeviceInfo_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::guid(input)) in_guid = Traits::guid(input);
    typename decltype((*output)->guid)::BaseType::BufferWriter
        guid_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_guid, buffer, &guid_writer, context);
    (*output)->guid.Set(
        guid_writer.is_null() ? nullptr : guid_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->guid.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null guid in UsbDeviceInfo struct");
    (*output)->usb_version_major = Traits::usb_version_major(input);
    (*output)->usb_version_minor = Traits::usb_version_minor(input);
    (*output)->usb_version_subminor = Traits::usb_version_subminor(input);
    (*output)->class_code = Traits::class_code(input);
    (*output)->subclass_code = Traits::subclass_code(input);
    (*output)->protocol_code = Traits::protocol_code(input);
    (*output)->bus_number = Traits::bus_number(input);
    (*output)->port_number = Traits::port_number(input);
    (*output)->vendor_id = Traits::vendor_id(input);
    (*output)->product_id = Traits::product_id(input);
    (*output)->device_version_major = Traits::device_version_major(input);
    (*output)->device_version_minor = Traits::device_version_minor(input);
    (*output)->device_version_subminor = Traits::device_version_subminor(input);
    decltype(Traits::manufacturer_name(input)) in_manufacturer_name = Traits::manufacturer_name(input);
    typename decltype((*output)->manufacturer_name)::BaseType::BufferWriter
        manufacturer_name_writer;
    mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
        in_manufacturer_name, buffer, &manufacturer_name_writer, context);
    (*output)->manufacturer_name.Set(
        manufacturer_name_writer.is_null() ? nullptr : manufacturer_name_writer.data());
    decltype(Traits::product_name(input)) in_product_name = Traits::product_name(input);
    typename decltype((*output)->product_name)::BaseType::BufferWriter
        product_name_writer;
    mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
        in_product_name, buffer, &product_name_writer, context);
    (*output)->product_name.Set(
        product_name_writer.is_null() ? nullptr : product_name_writer.data());
    decltype(Traits::serial_number(input)) in_serial_number = Traits::serial_number(input);
    typename decltype((*output)->serial_number)::BaseType::BufferWriter
        serial_number_writer;
    mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
        in_serial_number, buffer, &serial_number_writer, context);
    (*output)->serial_number.Set(
        serial_number_writer.is_null() ? nullptr : serial_number_writer.data());
    decltype(Traits::webusb_landing_page(input)) in_webusb_landing_page = Traits::webusb_landing_page(input);
    typename decltype((*output)->webusb_landing_page)::BaseType::BufferWriter
        webusb_landing_page_writer;
    mojo::internal::Serialize<::url::mojom::UrlDataView>(
        in_webusb_landing_page, buffer, &webusb_landing_page_writer, context);
    (*output)->webusb_landing_page.Set(
        webusb_landing_page_writer.is_null() ? nullptr : webusb_landing_page_writer.data());
    (*output)->active_configuration = Traits::active_configuration(input);
    decltype(Traits::configurations(input)) in_configurations = Traits::configurations(input);
    typename decltype((*output)->configurations)::BaseType::BufferWriter
        configurations_writer;
    const mojo::internal::ContainerValidateParams configurations_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::device::mojom::UsbConfigurationInfoDataView>>(
        in_configurations, buffer, &configurations_writer, &configurations_validate_params,
        context);
    (*output)->configurations.Set(
        configurations_writer.is_null() ? nullptr : configurations_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->configurations.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null configurations in UsbDeviceInfo struct");
  }

  static bool Deserialize(::device::mojom::internal::UsbDeviceInfo_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::device::mojom::UsbDeviceInfoDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::UsbControlTransferParamsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::device::mojom::UsbControlTransferParamsDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::device::mojom::internal::UsbControlTransferParams_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    mojo::internal::Serialize<::device::mojom::UsbControlTransferType>(
        Traits::type(input), &(*output)->type);
    mojo::internal::Serialize<::device::mojom::UsbControlTransferRecipient>(
        Traits::recipient(input), &(*output)->recipient);
    (*output)->request = Traits::request(input);
    (*output)->value = Traits::value(input);
    (*output)->index = Traits::index(input);
  }

  static bool Deserialize(::device::mojom::internal::UsbControlTransferParams_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::device::mojom::UsbControlTransferParamsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::UsbIsochronousPacketDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::device::mojom::UsbIsochronousPacketDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::device::mojom::internal::UsbIsochronousPacket_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->length = Traits::length(input);
    (*output)->transferred_length = Traits::transferred_length(input);
    mojo::internal::Serialize<::device::mojom::UsbTransferStatus>(
        Traits::status(input), &(*output)->status);
  }

  static bool Deserialize(::device::mojom::internal::UsbIsochronousPacket_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::device::mojom::UsbIsochronousPacketDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace device {
namespace mojom {

inline void UsbEndpointInfoDataView::GetExtraDataDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->extra_data.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}


inline void UsbAlternateInterfaceInfoDataView::GetInterfaceNameDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->interface_name.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}
inline void UsbAlternateInterfaceInfoDataView::GetEndpointsDataView(
    mojo::ArrayDataView<UsbEndpointInfoDataView>* output) {
  auto pointer = data_->endpoints.Get();
  *output = mojo::ArrayDataView<UsbEndpointInfoDataView>(pointer, context_);
}
inline void UsbAlternateInterfaceInfoDataView::GetExtraDataDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->extra_data.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}


inline void UsbInterfaceInfoDataView::GetAlternatesDataView(
    mojo::ArrayDataView<UsbAlternateInterfaceInfoDataView>* output) {
  auto pointer = data_->alternates.Get();
  *output = mojo::ArrayDataView<UsbAlternateInterfaceInfoDataView>(pointer, context_);
}


inline void UsbConfigurationInfoDataView::GetConfigurationNameDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->configuration_name.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}
inline void UsbConfigurationInfoDataView::GetInterfacesDataView(
    mojo::ArrayDataView<UsbInterfaceInfoDataView>* output) {
  auto pointer = data_->interfaces.Get();
  *output = mojo::ArrayDataView<UsbInterfaceInfoDataView>(pointer, context_);
}
inline void UsbConfigurationInfoDataView::GetExtraDataDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->extra_data.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}


inline void UsbDeviceInfoDataView::GetGuidDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->guid.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void UsbDeviceInfoDataView::GetManufacturerNameDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->manufacturer_name.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}
inline void UsbDeviceInfoDataView::GetProductNameDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->product_name.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}
inline void UsbDeviceInfoDataView::GetSerialNumberDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->serial_number.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}
inline void UsbDeviceInfoDataView::GetWebusbLandingPageDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->webusb_landing_page.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void UsbDeviceInfoDataView::GetConfigurationsDataView(
    mojo::ArrayDataView<UsbConfigurationInfoDataView>* output) {
  auto pointer = data_->configurations.Get();
  *output = mojo::ArrayDataView<UsbConfigurationInfoDataView>(pointer, context_);
}







}  // namespace mojom
}  // namespace device

#endif  // DEVICE_USB_PUBLIC_MOJOM_DEVICE_MOJOM_SHARED_H_