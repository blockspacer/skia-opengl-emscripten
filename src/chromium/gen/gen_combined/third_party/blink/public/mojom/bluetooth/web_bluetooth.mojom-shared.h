// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLUETOOTH_WEB_BLUETOOTH_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLUETOOTH_WEB_BLUETOOTH_MOJOM_SHARED_H_

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
#include "third_party/blink/public/mojom/bluetooth/web_bluetooth.mojom-shared-internal.h"
#include "device/bluetooth/public/mojom/uuid.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"




namespace blink {
namespace mojom {
class WebBluetoothLeScanFilterDataView;

class WebBluetoothRequestDeviceOptionsDataView;

class WebBluetoothRequestLEScanOptionsDataView;

class WebBluetoothDeviceIdDataView;

class WebBluetoothDeviceDataView;

class WebBluetoothRemoteGATTServiceDataView;

class WebBluetoothRemoteGATTCharacteristicDataView;

class WebBluetoothScanResultDataView;

class WebBluetoothRemoteGATTDescriptorDataView;

class RequestScanningStartResultDataView;


}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::blink::mojom::WebBluetoothLeScanFilterDataView> {
  using Data = ::blink::mojom::internal::WebBluetoothLeScanFilter_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::blink::mojom::WebBluetoothRequestDeviceOptionsDataView> {
  using Data = ::blink::mojom::internal::WebBluetoothRequestDeviceOptions_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::blink::mojom::WebBluetoothRequestLEScanOptionsDataView> {
  using Data = ::blink::mojom::internal::WebBluetoothRequestLEScanOptions_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::blink::mojom::WebBluetoothDeviceIdDataView> {
  using Data = ::blink::mojom::internal::WebBluetoothDeviceId_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::blink::mojom::WebBluetoothDeviceDataView> {
  using Data = ::blink::mojom::internal::WebBluetoothDevice_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::blink::mojom::WebBluetoothRemoteGATTServiceDataView> {
  using Data = ::blink::mojom::internal::WebBluetoothRemoteGATTService_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::blink::mojom::WebBluetoothRemoteGATTCharacteristicDataView> {
  using Data = ::blink::mojom::internal::WebBluetoothRemoteGATTCharacteristic_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::blink::mojom::WebBluetoothScanResultDataView> {
  using Data = ::blink::mojom::internal::WebBluetoothScanResult_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::blink::mojom::WebBluetoothRemoteGATTDescriptorDataView> {
  using Data = ::blink::mojom::internal::WebBluetoothRemoteGATTDescriptor_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::blink::mojom::RequestScanningStartResultDataView> {
  using Data = ::blink::mojom::internal::RequestScanningStartResult_Data;
  using DataAsArrayElement = Data;
  static constexpr MojomTypeCategory category = MojomTypeCategory::UNION;
};

}  // namespace internal
}  // namespace mojo


namespace blink {
namespace mojom {


enum class WebBluetoothResult : int32_t {
  
  SUCCESS,
  
  GATT_INVALID_ATTRIBUTE_LENGTH,
  
  SERVICE_NO_LONGER_EXISTS,
  
  CHARACTERISTIC_NO_LONGER_EXISTS,
  
  PROMPT_CANCELED,
  
  CONNECT_ALREADY_IN_PROGRESS,
  
  CONNECT_AUTH_CANCELED,
  
  CONNECT_AUTH_FAILED,
  
  CONNECT_AUTH_REJECTED,
  
  CONNECT_AUTH_TIMEOUT,
  
  CONNECT_UNKNOWN_ERROR,
  
  CONNECT_UNKNOWN_FAILURE,
  
  CONNECT_UNSUPPORTED_DEVICE,
  
  DEVICE_NO_LONGER_IN_RANGE,
  
  GATT_NOT_PAIRED,
  
  GATT_OPERATION_IN_PROGRESS,
  
  NO_BLUETOOTH_ADAPTER,
  
  CHOSEN_DEVICE_VANISHED,
  
  CHOOSER_CANCELLED,
  
  CHOOSER_NOT_SHOWN_API_GLOBALLY_DISABLED,
  
  CHOOSER_NOT_SHOWN_API_LOCALLY_DISABLED,
  
  CHOOSER_NOT_SHOWN_USER_DENIED_PERMISSION_TO_SCAN,
  
  SERVICE_NOT_FOUND,
  
  NO_SERVICES_FOUND,
  
  CHARACTERISTIC_NOT_FOUND,
  
  NO_CHARACTERISTICS_FOUND,
  
  DESCRIPTOR_NOT_FOUND,
  
  NO_DESCRIPTORS_FOUND,
  
  WEB_BLUETOOTH_NOT_SUPPORTED,
  
  BLUETOOTH_LOW_ENERGY_NOT_AVAILABLE,
  
  GATT_UNKNOWN_ERROR,
  
  GATT_UNKNOWN_FAILURE,
  
  GATT_NOT_PERMITTED,
  
  GATT_NOT_SUPPORTED,
  
  GATT_UNTRANSLATED_ERROR_CODE,
  
  GATT_NOT_AUTHORIZED,
  
  BLOCKLISTED_DESCRIPTOR_UUID,
  
  BLOCKLISTED_CHARACTERISTIC_UUID,
  
  BLOCKLISTED_READ,
  
  BLOCKLISTED_WRITE,
  
  NOT_ALLOWED_TO_ACCESS_ANY_SERVICE,
  
  NOT_ALLOWED_TO_ACCESS_SERVICE,
  
  REQUEST_DEVICE_WITH_BLOCKLISTED_UUID,
  
  REQUEST_DEVICE_FROM_CROSS_ORIGIN_IFRAME,
  
  DESCRIPTOR_NO_LONGER_EXISTS,
  
  SCANNING_BLOCKED,
  kMinValue = 0,
  kMaxValue = 45,
};

COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) std::ostream& operator<<(std::ostream& os, WebBluetoothResult value);
inline bool IsKnownEnumValue(WebBluetoothResult value) {
  return internal::WebBluetoothResult_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class WebBluetoothGATTQueryQuantity : int32_t {
  
  SINGLE,
  
  MULTIPLE,
  kMinValue = 0,
  kMaxValue = 1,
};

COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) std::ostream& operator<<(std::ostream& os, WebBluetoothGATTQueryQuantity value);
inline bool IsKnownEnumValue(WebBluetoothGATTQueryQuantity value) {
  return internal::WebBluetoothGATTQueryQuantity_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class WebBluetoothServiceInterfaceBase {};

using WebBluetoothServicePtrDataView =
    mojo::InterfacePtrDataView<WebBluetoothServiceInterfaceBase>;
using WebBluetoothServiceRequestDataView =
    mojo::InterfaceRequestDataView<WebBluetoothServiceInterfaceBase>;
using WebBluetoothServiceAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<WebBluetoothServiceInterfaceBase>;
using WebBluetoothServiceAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<WebBluetoothServiceInterfaceBase>;
class WebBluetoothServerClientInterfaceBase {};

using WebBluetoothServerClientPtrDataView =
    mojo::InterfacePtrDataView<WebBluetoothServerClientInterfaceBase>;
using WebBluetoothServerClientRequestDataView =
    mojo::InterfaceRequestDataView<WebBluetoothServerClientInterfaceBase>;
using WebBluetoothServerClientAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<WebBluetoothServerClientInterfaceBase>;
using WebBluetoothServerClientAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<WebBluetoothServerClientInterfaceBase>;
class WebBluetoothCharacteristicClientInterfaceBase {};

using WebBluetoothCharacteristicClientPtrDataView =
    mojo::InterfacePtrDataView<WebBluetoothCharacteristicClientInterfaceBase>;
using WebBluetoothCharacteristicClientRequestDataView =
    mojo::InterfaceRequestDataView<WebBluetoothCharacteristicClientInterfaceBase>;
using WebBluetoothCharacteristicClientAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<WebBluetoothCharacteristicClientInterfaceBase>;
using WebBluetoothCharacteristicClientAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<WebBluetoothCharacteristicClientInterfaceBase>;
class WebBluetoothScanClientInterfaceBase {};

using WebBluetoothScanClientPtrDataView =
    mojo::InterfacePtrDataView<WebBluetoothScanClientInterfaceBase>;
using WebBluetoothScanClientRequestDataView =
    mojo::InterfaceRequestDataView<WebBluetoothScanClientInterfaceBase>;
using WebBluetoothScanClientAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<WebBluetoothScanClientInterfaceBase>;
using WebBluetoothScanClientAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<WebBluetoothScanClientInterfaceBase>;
class WebBluetoothLeScanFilterDataView {
 public:
  WebBluetoothLeScanFilterDataView() {}

  WebBluetoothLeScanFilterDataView(
      internal::WebBluetoothLeScanFilter_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetServicesDataView(
      mojo::ArrayDataView<::bluetooth::mojom::UUIDDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadServices(UserType* output) {
    auto* pointer = data_->services.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::bluetooth::mojom::UUIDDataView>>(
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
  inline void GetNamePrefixDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadNamePrefix(UserType* output) {
    auto* pointer = data_->name_prefix.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::WebBluetoothLeScanFilter_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WebBluetoothRequestDeviceOptionsDataView {
 public:
  WebBluetoothRequestDeviceOptionsDataView() {}

  WebBluetoothRequestDeviceOptionsDataView(
      internal::WebBluetoothRequestDeviceOptions_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetFiltersDataView(
      mojo::ArrayDataView<WebBluetoothLeScanFilterDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFilters(UserType* output) {
    auto* pointer = data_->filters.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::blink::mojom::WebBluetoothLeScanFilterDataView>>(
        pointer, output, context_);
  }
  inline void GetOptionalServicesDataView(
      mojo::ArrayDataView<::bluetooth::mojom::UUIDDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOptionalServices(UserType* output) {
    auto* pointer = data_->optional_services.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::bluetooth::mojom::UUIDDataView>>(
        pointer, output, context_);
  }
  bool accept_all_devices() const {
    return data_->accept_all_devices;
  }
 private:
  internal::WebBluetoothRequestDeviceOptions_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WebBluetoothRequestLEScanOptionsDataView {
 public:
  WebBluetoothRequestLEScanOptionsDataView() {}

  WebBluetoothRequestLEScanOptionsDataView(
      internal::WebBluetoothRequestLEScanOptions_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetFiltersDataView(
      mojo::ArrayDataView<WebBluetoothLeScanFilterDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFilters(UserType* output) {
    auto* pointer = data_->filters.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::blink::mojom::WebBluetoothLeScanFilterDataView>>(
        pointer, output, context_);
  }
  bool keep_repeated_devices() const {
    return data_->keep_repeated_devices;
  }
  bool accept_all_advertisements() const {
    return data_->accept_all_advertisements;
  }
 private:
  internal::WebBluetoothRequestLEScanOptions_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WebBluetoothDeviceIdDataView {
 public:
  WebBluetoothDeviceIdDataView() {}

  WebBluetoothDeviceIdDataView(
      internal::WebBluetoothDeviceId_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDeviceIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDeviceId(UserType* output) {
    auto* pointer = data_->device_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::WebBluetoothDeviceId_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WebBluetoothDeviceDataView {
 public:
  WebBluetoothDeviceDataView() {}

  WebBluetoothDeviceDataView(
      internal::WebBluetoothDevice_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetIdDataView(
      WebBluetoothDeviceIdDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadId(UserType* output) {
    auto* pointer = data_->id.Get();
    return mojo::internal::Deserialize<::blink::mojom::WebBluetoothDeviceIdDataView>(
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
 private:
  internal::WebBluetoothDevice_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WebBluetoothRemoteGATTServiceDataView {
 public:
  WebBluetoothRemoteGATTServiceDataView() {}

  WebBluetoothRemoteGATTServiceDataView(
      internal::WebBluetoothRemoteGATTService_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetInstanceIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadInstanceId(UserType* output) {
    auto* pointer = data_->instance_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetUuidDataView(
      ::bluetooth::mojom::UUIDDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUuid(UserType* output) {
    auto* pointer = data_->uuid.Get();
    return mojo::internal::Deserialize<::bluetooth::mojom::UUIDDataView>(
        pointer, output, context_);
  }
 private:
  internal::WebBluetoothRemoteGATTService_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WebBluetoothRemoteGATTCharacteristicDataView {
 public:
  WebBluetoothRemoteGATTCharacteristicDataView() {}

  WebBluetoothRemoteGATTCharacteristicDataView(
      internal::WebBluetoothRemoteGATTCharacteristic_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetInstanceIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadInstanceId(UserType* output) {
    auto* pointer = data_->instance_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetUuidDataView(
      ::bluetooth::mojom::UUIDDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUuid(UserType* output) {
    auto* pointer = data_->uuid.Get();
    return mojo::internal::Deserialize<::bluetooth::mojom::UUIDDataView>(
        pointer, output, context_);
  }
  uint32_t properties() const {
    return data_->properties;
  }
 private:
  internal::WebBluetoothRemoteGATTCharacteristic_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WebBluetoothScanResultDataView {
 public:
  WebBluetoothScanResultDataView() {}

  WebBluetoothScanResultDataView(
      internal::WebBluetoothScanResult_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDeviceDataView(
      WebBluetoothDeviceDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDevice(UserType* output) {
    auto* pointer = data_->device.Get();
    return mojo::internal::Deserialize<::blink::mojom::WebBluetoothDeviceDataView>(
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
  inline void GetUuidsDataView(
      mojo::ArrayDataView<::bluetooth::mojom::UUIDDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUuids(UserType* output) {
    auto* pointer = data_->uuids.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::bluetooth::mojom::UUIDDataView>>(
        pointer, output, context_);
  }
  bool appearance_is_set() const {
    return data_->appearance_is_set;
  }
  uint16_t appearance() const {
    return data_->appearance;
  }
  bool tx_power_is_set() const {
    return data_->tx_power_is_set;
  }
  uint8_t tx_power() const {
    return data_->tx_power;
  }
  bool rssi_is_set() const {
    return data_->rssi_is_set;
  }
  uint8_t rssi() const {
    return data_->rssi;
  }
  inline void GetManufacturerDataDataView(
      mojo::MapDataView<uint16_t, mojo::ArrayDataView<uint8_t>>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadManufacturerData(UserType* output) {
    auto* pointer = data_->manufacturer_data.Get();
    return mojo::internal::Deserialize<mojo::MapDataView<uint16_t, mojo::ArrayDataView<uint8_t>>>(
        pointer, output, context_);
  }
  inline void GetServiceDataDataView(
      mojo::MapDataView<mojo::StringDataView, mojo::ArrayDataView<uint8_t>>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadServiceData(UserType* output) {
    auto* pointer = data_->service_data.Get();
    return mojo::internal::Deserialize<mojo::MapDataView<mojo::StringDataView, mojo::ArrayDataView<uint8_t>>>(
        pointer, output, context_);
  }
 private:
  internal::WebBluetoothScanResult_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WebBluetoothRemoteGATTDescriptorDataView {
 public:
  WebBluetoothRemoteGATTDescriptorDataView() {}

  WebBluetoothRemoteGATTDescriptorDataView(
      internal::WebBluetoothRemoteGATTDescriptor_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetInstanceIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadInstanceId(UserType* output) {
    auto* pointer = data_->instance_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetUuidDataView(
      ::bluetooth::mojom::UUIDDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUuid(UserType* output) {
    auto* pointer = data_->uuid.Get();
    return mojo::internal::Deserialize<::bluetooth::mojom::UUIDDataView>(
        pointer, output, context_);
  }
 private:
  internal::WebBluetoothRemoteGATTDescriptor_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class RequestScanningStartResultDataView {
 public:
  using Tag = internal::RequestScanningStartResult_Data::RequestScanningStartResult_Tag;

  RequestScanningStartResultDataView() {}

  RequestScanningStartResultDataView(
      internal::RequestScanningStartResult_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const {
    // For inlined unions, |data_| is always non-null. In that case we need to
    // check |data_->is_null()|.
    return !data_ || data_->is_null();
  }

  Tag tag() const { return data_->tag; }
  bool is_error_result() const { return data_->tag == Tag::ERROR_RESULT; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadErrorResult(UserType* output) const {
    DCHECK(is_error_result());
    return mojo::internal::Deserialize<::blink::mojom::WebBluetoothResult>(
        data_->data.f_error_result, output);
  }

  WebBluetoothResult error_result() const {
    DCHECK(is_error_result());
    return static_cast<WebBluetoothResult>(
        data_->data.f_error_result);
  }
  bool is_options() const { return data_->tag == Tag::OPTIONS; }
  inline void GetOptionsDataView(
      WebBluetoothRequestLEScanOptionsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOptions(UserType* output) {
    DCHECK(is_options());
    return mojo::internal::Deserialize<::blink::mojom::WebBluetoothRequestLEScanOptionsDataView>(
        data_->data.f_options.Get(), output, context_);
  }

 private:
  internal::RequestScanningStartResult_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace blink

namespace std {

template <>
struct hash<::blink::mojom::WebBluetoothResult>
    : public mojo::internal::EnumHashImpl<::blink::mojom::WebBluetoothResult> {};

template <>
struct hash<::blink::mojom::WebBluetoothGATTQueryQuantity>
    : public mojo::internal::EnumHashImpl<::blink::mojom::WebBluetoothGATTQueryQuantity> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::blink::mojom::WebBluetoothResult, ::blink::mojom::WebBluetoothResult> {
  static ::blink::mojom::WebBluetoothResult ToMojom(::blink::mojom::WebBluetoothResult input) { return input; }
  static bool FromMojom(::blink::mojom::WebBluetoothResult input, ::blink::mojom::WebBluetoothResult* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::WebBluetoothResult, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::WebBluetoothResult, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::WebBluetoothResult>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::blink::mojom::WebBluetoothGATTQueryQuantity, ::blink::mojom::WebBluetoothGATTQueryQuantity> {
  static ::blink::mojom::WebBluetoothGATTQueryQuantity ToMojom(::blink::mojom::WebBluetoothGATTQueryQuantity input) { return input; }
  static bool FromMojom(::blink::mojom::WebBluetoothGATTQueryQuantity input, ::blink::mojom::WebBluetoothGATTQueryQuantity* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::WebBluetoothGATTQueryQuantity, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::WebBluetoothGATTQueryQuantity, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::WebBluetoothGATTQueryQuantity>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::WebBluetoothLeScanFilterDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::WebBluetoothLeScanFilterDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::WebBluetoothLeScanFilter_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::services(input)) in_services = Traits::services(input);
    typename decltype((*output)->services)::BaseType::BufferWriter
        services_writer;
    const mojo::internal::ContainerValidateParams services_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::bluetooth::mojom::UUIDDataView>>(
        in_services, buffer, &services_writer, &services_validate_params,
        context);
    (*output)->services.Set(
        services_writer.is_null() ? nullptr : services_writer.data());
    decltype(Traits::name(input)) in_name = Traits::name(input);
    typename decltype((*output)->name)::BaseType::BufferWriter
        name_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_name, buffer, &name_writer, context);
    (*output)->name.Set(
        name_writer.is_null() ? nullptr : name_writer.data());
    decltype(Traits::name_prefix(input)) in_name_prefix = Traits::name_prefix(input);
    typename decltype((*output)->name_prefix)::BaseType::BufferWriter
        name_prefix_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_name_prefix, buffer, &name_prefix_writer, context);
    (*output)->name_prefix.Set(
        name_prefix_writer.is_null() ? nullptr : name_prefix_writer.data());
  }

  static bool Deserialize(::blink::mojom::internal::WebBluetoothLeScanFilter_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::WebBluetoothLeScanFilterDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::WebBluetoothRequestDeviceOptionsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::WebBluetoothRequestDeviceOptionsDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::WebBluetoothRequestDeviceOptions_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::filters(input)) in_filters = Traits::filters(input);
    typename decltype((*output)->filters)::BaseType::BufferWriter
        filters_writer;
    const mojo::internal::ContainerValidateParams filters_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::blink::mojom::WebBluetoothLeScanFilterDataView>>(
        in_filters, buffer, &filters_writer, &filters_validate_params,
        context);
    (*output)->filters.Set(
        filters_writer.is_null() ? nullptr : filters_writer.data());
    decltype(Traits::optional_services(input)) in_optional_services = Traits::optional_services(input);
    typename decltype((*output)->optional_services)::BaseType::BufferWriter
        optional_services_writer;
    const mojo::internal::ContainerValidateParams optional_services_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::bluetooth::mojom::UUIDDataView>>(
        in_optional_services, buffer, &optional_services_writer, &optional_services_validate_params,
        context);
    (*output)->optional_services.Set(
        optional_services_writer.is_null() ? nullptr : optional_services_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->optional_services.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null optional_services in WebBluetoothRequestDeviceOptions struct");
    (*output)->accept_all_devices = Traits::accept_all_devices(input);
  }

  static bool Deserialize(::blink::mojom::internal::WebBluetoothRequestDeviceOptions_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::WebBluetoothRequestDeviceOptionsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::WebBluetoothRequestLEScanOptionsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::WebBluetoothRequestLEScanOptionsDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::WebBluetoothRequestLEScanOptions_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::filters(input)) in_filters = Traits::filters(input);
    typename decltype((*output)->filters)::BaseType::BufferWriter
        filters_writer;
    const mojo::internal::ContainerValidateParams filters_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::blink::mojom::WebBluetoothLeScanFilterDataView>>(
        in_filters, buffer, &filters_writer, &filters_validate_params,
        context);
    (*output)->filters.Set(
        filters_writer.is_null() ? nullptr : filters_writer.data());
    (*output)->keep_repeated_devices = Traits::keep_repeated_devices(input);
    (*output)->accept_all_advertisements = Traits::accept_all_advertisements(input);
  }

  static bool Deserialize(::blink::mojom::internal::WebBluetoothRequestLEScanOptions_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::WebBluetoothRequestLEScanOptionsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::WebBluetoothDeviceIdDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::WebBluetoothDeviceIdDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::WebBluetoothDeviceId_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::device_id(input)) in_device_id = Traits::device_id(input);
    typename decltype((*output)->device_id)::BaseType::BufferWriter
        device_id_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_device_id, buffer, &device_id_writer, context);
    (*output)->device_id.Set(
        device_id_writer.is_null() ? nullptr : device_id_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->device_id.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null device_id in WebBluetoothDeviceId struct");
  }

  static bool Deserialize(::blink::mojom::internal::WebBluetoothDeviceId_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::WebBluetoothDeviceIdDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::WebBluetoothDeviceDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::WebBluetoothDeviceDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::WebBluetoothDevice_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::id(input)) in_id = Traits::id(input);
    typename decltype((*output)->id)::BaseType::BufferWriter
        id_writer;
    mojo::internal::Serialize<::blink::mojom::WebBluetoothDeviceIdDataView>(
        in_id, buffer, &id_writer, context);
    (*output)->id.Set(
        id_writer.is_null() ? nullptr : id_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->id.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null id in WebBluetoothDevice struct");
    decltype(Traits::name(input)) in_name = Traits::name(input);
    typename decltype((*output)->name)::BaseType::BufferWriter
        name_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_name, buffer, &name_writer, context);
    (*output)->name.Set(
        name_writer.is_null() ? nullptr : name_writer.data());
  }

  static bool Deserialize(::blink::mojom::internal::WebBluetoothDevice_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::WebBluetoothDeviceDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::WebBluetoothRemoteGATTServiceDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::WebBluetoothRemoteGATTServiceDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::WebBluetoothRemoteGATTService_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::instance_id(input)) in_instance_id = Traits::instance_id(input);
    typename decltype((*output)->instance_id)::BaseType::BufferWriter
        instance_id_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_instance_id, buffer, &instance_id_writer, context);
    (*output)->instance_id.Set(
        instance_id_writer.is_null() ? nullptr : instance_id_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->instance_id.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null instance_id in WebBluetoothRemoteGATTService struct");
    decltype(Traits::uuid(input)) in_uuid = Traits::uuid(input);
    typename decltype((*output)->uuid)::BaseType::BufferWriter
        uuid_writer;
    mojo::internal::Serialize<::bluetooth::mojom::UUIDDataView>(
        in_uuid, buffer, &uuid_writer, context);
    (*output)->uuid.Set(
        uuid_writer.is_null() ? nullptr : uuid_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->uuid.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null uuid in WebBluetoothRemoteGATTService struct");
  }

  static bool Deserialize(::blink::mojom::internal::WebBluetoothRemoteGATTService_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::WebBluetoothRemoteGATTServiceDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::WebBluetoothRemoteGATTCharacteristicDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::WebBluetoothRemoteGATTCharacteristicDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::WebBluetoothRemoteGATTCharacteristic_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::instance_id(input)) in_instance_id = Traits::instance_id(input);
    typename decltype((*output)->instance_id)::BaseType::BufferWriter
        instance_id_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_instance_id, buffer, &instance_id_writer, context);
    (*output)->instance_id.Set(
        instance_id_writer.is_null() ? nullptr : instance_id_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->instance_id.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null instance_id in WebBluetoothRemoteGATTCharacteristic struct");
    decltype(Traits::uuid(input)) in_uuid = Traits::uuid(input);
    typename decltype((*output)->uuid)::BaseType::BufferWriter
        uuid_writer;
    mojo::internal::Serialize<::bluetooth::mojom::UUIDDataView>(
        in_uuid, buffer, &uuid_writer, context);
    (*output)->uuid.Set(
        uuid_writer.is_null() ? nullptr : uuid_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->uuid.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null uuid in WebBluetoothRemoteGATTCharacteristic struct");
    (*output)->properties = Traits::properties(input);
  }

  static bool Deserialize(::blink::mojom::internal::WebBluetoothRemoteGATTCharacteristic_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::WebBluetoothRemoteGATTCharacteristicDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::WebBluetoothScanResultDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::WebBluetoothScanResultDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::WebBluetoothScanResult_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::device(input)) in_device = Traits::device(input);
    typename decltype((*output)->device)::BaseType::BufferWriter
        device_writer;
    mojo::internal::Serialize<::blink::mojom::WebBluetoothDeviceDataView>(
        in_device, buffer, &device_writer, context);
    (*output)->device.Set(
        device_writer.is_null() ? nullptr : device_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->device.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null device in WebBluetoothScanResult struct");
    decltype(Traits::name(input)) in_name = Traits::name(input);
    typename decltype((*output)->name)::BaseType::BufferWriter
        name_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_name, buffer, &name_writer, context);
    (*output)->name.Set(
        name_writer.is_null() ? nullptr : name_writer.data());
    decltype(Traits::uuids(input)) in_uuids = Traits::uuids(input);
    typename decltype((*output)->uuids)::BaseType::BufferWriter
        uuids_writer;
    const mojo::internal::ContainerValidateParams uuids_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::bluetooth::mojom::UUIDDataView>>(
        in_uuids, buffer, &uuids_writer, &uuids_validate_params,
        context);
    (*output)->uuids.Set(
        uuids_writer.is_null() ? nullptr : uuids_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->uuids.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null uuids in WebBluetoothScanResult struct");
    (*output)->appearance_is_set = Traits::appearance_is_set(input);
    (*output)->appearance = Traits::appearance(input);
    (*output)->tx_power_is_set = Traits::tx_power_is_set(input);
    (*output)->tx_power = Traits::tx_power(input);
    (*output)->rssi_is_set = Traits::rssi_is_set(input);
    (*output)->rssi = Traits::rssi(input);
    decltype(Traits::manufacturer_data(input)) in_manufacturer_data = Traits::manufacturer_data(input);
    typename decltype((*output)->manufacturer_data)::BaseType::BufferWriter
        manufacturer_data_writer;
    const mojo::internal::ContainerValidateParams manufacturer_data_validate_params(
        new mojo::internal::ContainerValidateParams(0, false, nullptr), new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)));
    mojo::internal::Serialize<mojo::MapDataView<uint16_t, mojo::ArrayDataView<uint8_t>>>(
        in_manufacturer_data, buffer, &manufacturer_data_writer, &manufacturer_data_validate_params,
        context);
    (*output)->manufacturer_data.Set(
        manufacturer_data_writer.is_null() ? nullptr : manufacturer_data_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->manufacturer_data.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null manufacturer_data in WebBluetoothScanResult struct");
    decltype(Traits::service_data(input)) in_service_data = Traits::service_data(input);
    typename decltype((*output)->service_data)::BaseType::BufferWriter
        service_data_writer;
    const mojo::internal::ContainerValidateParams service_data_validate_params(
        new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)), new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)));
    mojo::internal::Serialize<mojo::MapDataView<mojo::StringDataView, mojo::ArrayDataView<uint8_t>>>(
        in_service_data, buffer, &service_data_writer, &service_data_validate_params,
        context);
    (*output)->service_data.Set(
        service_data_writer.is_null() ? nullptr : service_data_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->service_data.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null service_data in WebBluetoothScanResult struct");
  }

  static bool Deserialize(::blink::mojom::internal::WebBluetoothScanResult_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::WebBluetoothScanResultDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::WebBluetoothRemoteGATTDescriptorDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::WebBluetoothRemoteGATTDescriptorDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::WebBluetoothRemoteGATTDescriptor_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::instance_id(input)) in_instance_id = Traits::instance_id(input);
    typename decltype((*output)->instance_id)::BaseType::BufferWriter
        instance_id_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_instance_id, buffer, &instance_id_writer, context);
    (*output)->instance_id.Set(
        instance_id_writer.is_null() ? nullptr : instance_id_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->instance_id.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null instance_id in WebBluetoothRemoteGATTDescriptor struct");
    decltype(Traits::uuid(input)) in_uuid = Traits::uuid(input);
    typename decltype((*output)->uuid)::BaseType::BufferWriter
        uuid_writer;
    mojo::internal::Serialize<::bluetooth::mojom::UUIDDataView>(
        in_uuid, buffer, &uuid_writer, context);
    (*output)->uuid.Set(
        uuid_writer.is_null() ? nullptr : uuid_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->uuid.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null uuid in WebBluetoothRemoteGATTDescriptor struct");
  }

  static bool Deserialize(::blink::mojom::internal::WebBluetoothRemoteGATTDescriptor_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::WebBluetoothRemoteGATTDescriptorDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::RequestScanningStartResultDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = UnionTraits<::blink::mojom::RequestScanningStartResultDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::RequestScanningStartResult_Data::BufferWriter* writer,
                        bool inlined,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
       if (inlined)
         writer->data()->set_null();
      return;
    }
    if (!inlined)
      writer->Allocate(buffer);

    ::blink::mojom::internal::RequestScanningStartResult_Data::BufferWriter& result = *writer;
    ALLOW_UNUSED_LOCAL(result);
    // TODO(azani): Handle unknown and objects.
    // Set the not-null flag.
    result->size = kUnionDataSize;
    result->tag = Traits::GetTag(input);
    switch (result->tag) {
      case ::blink::mojom::RequestScanningStartResultDataView::Tag::ERROR_RESULT: {
        decltype(Traits::error_result(input))
            in_error_result = Traits::error_result(input);
        mojo::internal::Serialize<::blink::mojom::WebBluetoothResult>(
            in_error_result, &result->data.f_error_result);
        break;
      }
      case ::blink::mojom::RequestScanningStartResultDataView::Tag::OPTIONS: {
        decltype(Traits::options(input))
            in_options = Traits::options(input);
        typename decltype(result->data.f_options)::BaseType::BufferWriter
            value_writer;
        mojo::internal::Serialize<::blink::mojom::WebBluetoothRequestLEScanOptionsDataView>(
            in_options, buffer, &value_writer, context);
        MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
            value_writer.is_null(),
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
            "null options in RequestScanningStartResult union");
        result->data.f_options.Set(
            value_writer.is_null() ? nullptr : value_writer.data());
        break;
      }
    }
  }

  static bool Deserialize(::blink::mojom::internal::RequestScanningStartResult_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input || input->is_null())
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::RequestScanningStartResultDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace blink {
namespace mojom {

inline void WebBluetoothLeScanFilterDataView::GetServicesDataView(
    mojo::ArrayDataView<::bluetooth::mojom::UUIDDataView>* output) {
  auto pointer = data_->services.Get();
  *output = mojo::ArrayDataView<::bluetooth::mojom::UUIDDataView>(pointer, context_);
}
inline void WebBluetoothLeScanFilterDataView::GetNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->name.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void WebBluetoothLeScanFilterDataView::GetNamePrefixDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->name_prefix.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void WebBluetoothRequestDeviceOptionsDataView::GetFiltersDataView(
    mojo::ArrayDataView<WebBluetoothLeScanFilterDataView>* output) {
  auto pointer = data_->filters.Get();
  *output = mojo::ArrayDataView<WebBluetoothLeScanFilterDataView>(pointer, context_);
}
inline void WebBluetoothRequestDeviceOptionsDataView::GetOptionalServicesDataView(
    mojo::ArrayDataView<::bluetooth::mojom::UUIDDataView>* output) {
  auto pointer = data_->optional_services.Get();
  *output = mojo::ArrayDataView<::bluetooth::mojom::UUIDDataView>(pointer, context_);
}


inline void WebBluetoothRequestLEScanOptionsDataView::GetFiltersDataView(
    mojo::ArrayDataView<WebBluetoothLeScanFilterDataView>* output) {
  auto pointer = data_->filters.Get();
  *output = mojo::ArrayDataView<WebBluetoothLeScanFilterDataView>(pointer, context_);
}


inline void WebBluetoothDeviceIdDataView::GetDeviceIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->device_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void WebBluetoothDeviceDataView::GetIdDataView(
    WebBluetoothDeviceIdDataView* output) {
  auto pointer = data_->id.Get();
  *output = WebBluetoothDeviceIdDataView(pointer, context_);
}
inline void WebBluetoothDeviceDataView::GetNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->name.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void WebBluetoothRemoteGATTServiceDataView::GetInstanceIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->instance_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void WebBluetoothRemoteGATTServiceDataView::GetUuidDataView(
    ::bluetooth::mojom::UUIDDataView* output) {
  auto pointer = data_->uuid.Get();
  *output = ::bluetooth::mojom::UUIDDataView(pointer, context_);
}


inline void WebBluetoothRemoteGATTCharacteristicDataView::GetInstanceIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->instance_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void WebBluetoothRemoteGATTCharacteristicDataView::GetUuidDataView(
    ::bluetooth::mojom::UUIDDataView* output) {
  auto pointer = data_->uuid.Get();
  *output = ::bluetooth::mojom::UUIDDataView(pointer, context_);
}


inline void WebBluetoothScanResultDataView::GetDeviceDataView(
    WebBluetoothDeviceDataView* output) {
  auto pointer = data_->device.Get();
  *output = WebBluetoothDeviceDataView(pointer, context_);
}
inline void WebBluetoothScanResultDataView::GetNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->name.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void WebBluetoothScanResultDataView::GetUuidsDataView(
    mojo::ArrayDataView<::bluetooth::mojom::UUIDDataView>* output) {
  auto pointer = data_->uuids.Get();
  *output = mojo::ArrayDataView<::bluetooth::mojom::UUIDDataView>(pointer, context_);
}
inline void WebBluetoothScanResultDataView::GetManufacturerDataDataView(
    mojo::MapDataView<uint16_t, mojo::ArrayDataView<uint8_t>>* output) {
  auto pointer = data_->manufacturer_data.Get();
  *output = mojo::MapDataView<uint16_t, mojo::ArrayDataView<uint8_t>>(pointer, context_);
}
inline void WebBluetoothScanResultDataView::GetServiceDataDataView(
    mojo::MapDataView<mojo::StringDataView, mojo::ArrayDataView<uint8_t>>* output) {
  auto pointer = data_->service_data.Get();
  *output = mojo::MapDataView<mojo::StringDataView, mojo::ArrayDataView<uint8_t>>(pointer, context_);
}


inline void WebBluetoothRemoteGATTDescriptorDataView::GetInstanceIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->instance_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void WebBluetoothRemoteGATTDescriptorDataView::GetUuidDataView(
    ::bluetooth::mojom::UUIDDataView* output) {
  auto pointer = data_->uuid.Get();
  *output = ::bluetooth::mojom::UUIDDataView(pointer, context_);
}


inline void RequestScanningStartResultDataView::GetOptionsDataView(
    WebBluetoothRequestLEScanOptionsDataView* output) {
  DCHECK(is_options());
  *output = WebBluetoothRequestLEScanOptionsDataView(data_->data.f_options.Get(), context_);
}


}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLUETOOTH_WEB_BLUETOOTH_MOJOM_SHARED_H_