// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#elif defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4056)
#pragma warning(disable:4065)
#pragma warning(disable:4756)
#endif

#include "device/usb/public/mojom/device.mojom-blink.h"

#include <math.h>
#include <stdint.h>
#include <utility>

#include "base/location.h"
#include "base/logging.h"
#include "base/run_loop.h"
#include "base/task/common/task_annotator.h"
#include "mojo/public/cpp/bindings/lib/message_internal.h"
#include "mojo/public/cpp/bindings/lib/serialization_util.h"
#include "mojo/public/cpp/bindings/lib/unserialized_message_context.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/interfaces/bindings/interface_control_messages.mojom.h"

#include "device/usb/public/mojom/device.mojom-params-data.h"
#include "device/usb/public/mojom/device.mojom-shared-message-ids.h"

#include "device/usb/public/mojom/device.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef DEVICE_USB_PUBLIC_MOJOM_DEVICE_MOJOM_BLINK_JUMBO_H_
#define DEVICE_USB_PUBLIC_MOJOM_DEVICE_MOJOM_BLINK_JUMBO_H_
#include "third_party/blink/renderer/platform/mojo/kurl_struct_traits.h"
#include "third_party/blink/renderer/platform/mojo/string16_mojom_traits.h"
#endif
namespace device {
namespace mojom {
namespace blink {
UsbEndpointInfo::UsbEndpointInfo()
    : endpoint_number(),
      direction(),
      type(),
      packet_size(),
      synchronization_type(),
      usage_type(),
      polling_interval(),
      extra_data() {}

UsbEndpointInfo::UsbEndpointInfo(
    uint8_t endpoint_number_in,
    UsbTransferDirection direction_in,
    UsbTransferType type_in,
    uint32_t packet_size_in,
    UsbSynchronizationType synchronization_type_in,
    UsbUsageType usage_type_in,
    uint8_t polling_interval_in,
    const WTF::Vector<uint8_t>& extra_data_in)
    : endpoint_number(std::move(endpoint_number_in)),
      direction(std::move(direction_in)),
      type(std::move(type_in)),
      packet_size(std::move(packet_size_in)),
      synchronization_type(std::move(synchronization_type_in)),
      usage_type(std::move(usage_type_in)),
      polling_interval(std::move(polling_interval_in)),
      extra_data(std::move(extra_data_in)) {}

UsbEndpointInfo::~UsbEndpointInfo() = default;

bool UsbEndpointInfo::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
UsbAlternateInterfaceInfo::UsbAlternateInterfaceInfo()
    : alternate_setting(),
      class_code(),
      subclass_code(),
      protocol_code(),
      interface_name(),
      endpoints(),
      extra_data() {}

UsbAlternateInterfaceInfo::UsbAlternateInterfaceInfo(
    uint8_t alternate_setting_in,
    uint8_t class_code_in,
    uint8_t subclass_code_in,
    uint8_t protocol_code_in,
    const WTF::String& interface_name_in,
    WTF::Vector<UsbEndpointInfoPtr> endpoints_in,
    const WTF::Vector<uint8_t>& extra_data_in)
    : alternate_setting(std::move(alternate_setting_in)),
      class_code(std::move(class_code_in)),
      subclass_code(std::move(subclass_code_in)),
      protocol_code(std::move(protocol_code_in)),
      interface_name(std::move(interface_name_in)),
      endpoints(std::move(endpoints_in)),
      extra_data(std::move(extra_data_in)) {}

UsbAlternateInterfaceInfo::~UsbAlternateInterfaceInfo() = default;

bool UsbAlternateInterfaceInfo::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
UsbInterfaceInfo::UsbInterfaceInfo()
    : interface_number(),
      alternates() {}

UsbInterfaceInfo::UsbInterfaceInfo(
    uint8_t interface_number_in,
    WTF::Vector<UsbAlternateInterfaceInfoPtr> alternates_in)
    : interface_number(std::move(interface_number_in)),
      alternates(std::move(alternates_in)) {}

UsbInterfaceInfo::~UsbInterfaceInfo() = default;

bool UsbInterfaceInfo::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
UsbConfigurationInfo::UsbConfigurationInfo()
    : configuration_value(),
      configuration_name(),
      self_powered(),
      remote_wakeup(),
      maximum_power(),
      interfaces(),
      extra_data() {}

UsbConfigurationInfo::UsbConfigurationInfo(
    uint8_t configuration_value_in,
    const WTF::String& configuration_name_in,
    bool self_powered_in,
    bool remote_wakeup_in,
    uint8_t maximum_power_in,
    WTF::Vector<UsbInterfaceInfoPtr> interfaces_in,
    const WTF::Vector<uint8_t>& extra_data_in)
    : configuration_value(std::move(configuration_value_in)),
      configuration_name(std::move(configuration_name_in)),
      self_powered(std::move(self_powered_in)),
      remote_wakeup(std::move(remote_wakeup_in)),
      maximum_power(std::move(maximum_power_in)),
      interfaces(std::move(interfaces_in)),
      extra_data(std::move(extra_data_in)) {}

UsbConfigurationInfo::~UsbConfigurationInfo() = default;

bool UsbConfigurationInfo::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
UsbDeviceInfo::UsbDeviceInfo()
    : guid(),
      usb_version_major(),
      usb_version_minor(),
      usb_version_subminor(),
      class_code(),
      subclass_code(),
      protocol_code(),
      bus_number(),
      port_number(),
      vendor_id(),
      product_id(),
      device_version_major(),
      device_version_minor(),
      device_version_subminor(),
      manufacturer_name(),
      product_name(),
      serial_number(),
      webusb_landing_page(),
      active_configuration(),
      configurations() {}

UsbDeviceInfo::UsbDeviceInfo(
    const WTF::String& guid_in,
    uint8_t usb_version_major_in,
    uint8_t usb_version_minor_in,
    uint8_t usb_version_subminor_in,
    uint8_t class_code_in,
    uint8_t subclass_code_in,
    uint8_t protocol_code_in,
    uint32_t bus_number_in,
    uint32_t port_number_in,
    uint16_t vendor_id_in,
    uint16_t product_id_in,
    uint8_t device_version_major_in,
    uint8_t device_version_minor_in,
    uint8_t device_version_subminor_in,
    const WTF::String& manufacturer_name_in,
    const WTF::String& product_name_in,
    const WTF::String& serial_number_in,
    const base::Optional<::blink::KURL>& webusb_landing_page_in,
    uint8_t active_configuration_in,
    WTF::Vector<UsbConfigurationInfoPtr> configurations_in)
    : guid(std::move(guid_in)),
      usb_version_major(std::move(usb_version_major_in)),
      usb_version_minor(std::move(usb_version_minor_in)),
      usb_version_subminor(std::move(usb_version_subminor_in)),
      class_code(std::move(class_code_in)),
      subclass_code(std::move(subclass_code_in)),
      protocol_code(std::move(protocol_code_in)),
      bus_number(std::move(bus_number_in)),
      port_number(std::move(port_number_in)),
      vendor_id(std::move(vendor_id_in)),
      product_id(std::move(product_id_in)),
      device_version_major(std::move(device_version_major_in)),
      device_version_minor(std::move(device_version_minor_in)),
      device_version_subminor(std::move(device_version_subminor_in)),
      manufacturer_name(std::move(manufacturer_name_in)),
      product_name(std::move(product_name_in)),
      serial_number(std::move(serial_number_in)),
      webusb_landing_page(std::move(webusb_landing_page_in)),
      active_configuration(std::move(active_configuration_in)),
      configurations(std::move(configurations_in)) {}

UsbDeviceInfo::~UsbDeviceInfo() = default;

bool UsbDeviceInfo::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
UsbControlTransferParams::UsbControlTransferParams()
    : type(),
      recipient(),
      request(),
      value(),
      index() {}

UsbControlTransferParams::UsbControlTransferParams(
    UsbControlTransferType type_in,
    UsbControlTransferRecipient recipient_in,
    uint8_t request_in,
    uint16_t value_in,
    uint16_t index_in)
    : type(std::move(type_in)),
      recipient(std::move(recipient_in)),
      request(std::move(request_in)),
      value(std::move(value_in)),
      index(std::move(index_in)) {}

UsbControlTransferParams::~UsbControlTransferParams() = default;
size_t UsbControlTransferParams::Hash(size_t seed) const {
  seed = mojo::internal::WTFHash(seed, this->type);
  seed = mojo::internal::WTFHash(seed, this->recipient);
  seed = mojo::internal::WTFHash(seed, this->request);
  seed = mojo::internal::WTFHash(seed, this->value);
  seed = mojo::internal::WTFHash(seed, this->index);
  return seed;
}

bool UsbControlTransferParams::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
UsbIsochronousPacket::UsbIsochronousPacket()
    : length(),
      transferred_length(),
      status() {}

UsbIsochronousPacket::UsbIsochronousPacket(
    uint32_t length_in,
    uint32_t transferred_length_in,
    UsbTransferStatus status_in)
    : length(std::move(length_in)),
      transferred_length(std::move(transferred_length_in)),
      status(std::move(status_in)) {}

UsbIsochronousPacket::~UsbIsochronousPacket() = default;
size_t UsbIsochronousPacket::Hash(size_t seed) const {
  seed = mojo::internal::WTFHash(seed, this->length);
  seed = mojo::internal::WTFHash(seed, this->transferred_length);
  seed = mojo::internal::WTFHash(seed, this->status);
  return seed;
}

bool UsbIsochronousPacket::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char UsbDevice::Name_[] = "device.mojom.UsbDevice";

class UsbDevice_Open_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  UsbDevice_Open_ForwardToCallback(
      UsbDevice::OpenCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  UsbDevice::OpenCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(UsbDevice_Open_ForwardToCallback);
};

class UsbDevice_Close_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  UsbDevice_Close_ForwardToCallback(
      UsbDevice::CloseCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  UsbDevice::CloseCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(UsbDevice_Close_ForwardToCallback);
};

class UsbDevice_SetConfiguration_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  UsbDevice_SetConfiguration_ForwardToCallback(
      UsbDevice::SetConfigurationCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  UsbDevice::SetConfigurationCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(UsbDevice_SetConfiguration_ForwardToCallback);
};

class UsbDevice_ClaimInterface_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  UsbDevice_ClaimInterface_ForwardToCallback(
      UsbDevice::ClaimInterfaceCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  UsbDevice::ClaimInterfaceCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(UsbDevice_ClaimInterface_ForwardToCallback);
};

class UsbDevice_ReleaseInterface_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  UsbDevice_ReleaseInterface_ForwardToCallback(
      UsbDevice::ReleaseInterfaceCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  UsbDevice::ReleaseInterfaceCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(UsbDevice_ReleaseInterface_ForwardToCallback);
};

class UsbDevice_SetInterfaceAlternateSetting_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  UsbDevice_SetInterfaceAlternateSetting_ForwardToCallback(
      UsbDevice::SetInterfaceAlternateSettingCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  UsbDevice::SetInterfaceAlternateSettingCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(UsbDevice_SetInterfaceAlternateSetting_ForwardToCallback);
};

class UsbDevice_Reset_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  UsbDevice_Reset_ForwardToCallback(
      UsbDevice::ResetCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  UsbDevice::ResetCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(UsbDevice_Reset_ForwardToCallback);
};

class UsbDevice_ClearHalt_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  UsbDevice_ClearHalt_ForwardToCallback(
      UsbDevice::ClearHaltCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  UsbDevice::ClearHaltCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(UsbDevice_ClearHalt_ForwardToCallback);
};

class UsbDevice_ControlTransferIn_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  UsbDevice_ControlTransferIn_ForwardToCallback(
      UsbDevice::ControlTransferInCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  UsbDevice::ControlTransferInCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(UsbDevice_ControlTransferIn_ForwardToCallback);
};

class UsbDevice_ControlTransferOut_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  UsbDevice_ControlTransferOut_ForwardToCallback(
      UsbDevice::ControlTransferOutCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  UsbDevice::ControlTransferOutCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(UsbDevice_ControlTransferOut_ForwardToCallback);
};

class UsbDevice_GenericTransferIn_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  UsbDevice_GenericTransferIn_ForwardToCallback(
      UsbDevice::GenericTransferInCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  UsbDevice::GenericTransferInCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(UsbDevice_GenericTransferIn_ForwardToCallback);
};

class UsbDevice_GenericTransferOut_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  UsbDevice_GenericTransferOut_ForwardToCallback(
      UsbDevice::GenericTransferOutCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  UsbDevice::GenericTransferOutCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(UsbDevice_GenericTransferOut_ForwardToCallback);
};

class UsbDevice_IsochronousTransferIn_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  UsbDevice_IsochronousTransferIn_ForwardToCallback(
      UsbDevice::IsochronousTransferInCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  UsbDevice::IsochronousTransferInCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(UsbDevice_IsochronousTransferIn_ForwardToCallback);
};

class UsbDevice_IsochronousTransferOut_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  UsbDevice_IsochronousTransferOut_ForwardToCallback(
      UsbDevice::IsochronousTransferOutCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  UsbDevice::IsochronousTransferOutCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(UsbDevice_IsochronousTransferOut_ForwardToCallback);
};

UsbDeviceProxy::UsbDeviceProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void UsbDeviceProxy::Open(
    OpenCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::UsbDevice::Open");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kUsbDevice_Open_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::UsbDevice_Open_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(UsbDevice::Name_);
  message.set_method_name("Open");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new UsbDevice_Open_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void UsbDeviceProxy::Close(
    CloseCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::UsbDevice::Close");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kUsbDevice_Close_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::UsbDevice_Close_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(UsbDevice::Name_);
  message.set_method_name("Close");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new UsbDevice_Close_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void UsbDeviceProxy::SetConfiguration(
    uint8_t in_value, SetConfigurationCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::UsbDevice::SetConfiguration");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kUsbDevice_SetConfiguration_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::UsbDevice_SetConfiguration_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->value = in_value;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(UsbDevice::Name_);
  message.set_method_name("SetConfiguration");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new UsbDevice_SetConfiguration_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void UsbDeviceProxy::ClaimInterface(
    uint8_t in_interface_number, ClaimInterfaceCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::UsbDevice::ClaimInterface");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kUsbDevice_ClaimInterface_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::UsbDevice_ClaimInterface_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->interface_number = in_interface_number;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(UsbDevice::Name_);
  message.set_method_name("ClaimInterface");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new UsbDevice_ClaimInterface_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void UsbDeviceProxy::ReleaseInterface(
    uint8_t in_interface_number, ReleaseInterfaceCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::UsbDevice::ReleaseInterface");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kUsbDevice_ReleaseInterface_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::UsbDevice_ReleaseInterface_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->interface_number = in_interface_number;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(UsbDevice::Name_);
  message.set_method_name("ReleaseInterface");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new UsbDevice_ReleaseInterface_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void UsbDeviceProxy::SetInterfaceAlternateSetting(
    uint8_t in_interface_number, uint8_t in_alternate_setting, SetInterfaceAlternateSettingCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::UsbDevice::SetInterfaceAlternateSetting");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kUsbDevice_SetInterfaceAlternateSetting_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::UsbDevice_SetInterfaceAlternateSetting_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->interface_number = in_interface_number;
  params->alternate_setting = in_alternate_setting;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(UsbDevice::Name_);
  message.set_method_name("SetInterfaceAlternateSetting");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new UsbDevice_SetInterfaceAlternateSetting_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void UsbDeviceProxy::Reset(
    ResetCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::UsbDevice::Reset");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kUsbDevice_Reset_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::UsbDevice_Reset_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(UsbDevice::Name_);
  message.set_method_name("Reset");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new UsbDevice_Reset_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void UsbDeviceProxy::ClearHalt(
    uint8_t in_endpoint, ClearHaltCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::UsbDevice::ClearHalt");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kUsbDevice_ClearHalt_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::UsbDevice_ClearHalt_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->endpoint = in_endpoint;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(UsbDevice::Name_);
  message.set_method_name("ClearHalt");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new UsbDevice_ClearHalt_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void UsbDeviceProxy::ControlTransferIn(
    UsbControlTransferParamsPtr in_params, uint32_t in_length, uint32_t in_timeout, ControlTransferInCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::UsbDevice::ControlTransferIn");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kUsbDevice_ControlTransferIn_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::UsbDevice_ControlTransferIn_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->params)::BaseType::BufferWriter
      params_writer;
  mojo::internal::Serialize<::device::mojom::UsbControlTransferParamsDataView>(
      in_params, buffer, &params_writer, &serialization_context);
  params->params.Set(
      params_writer.is_null() ? nullptr : params_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->params.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null params in UsbDevice.ControlTransferIn request");
  params->length = in_length;
  params->timeout = in_timeout;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(UsbDevice::Name_);
  message.set_method_name("ControlTransferIn");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new UsbDevice_ControlTransferIn_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void UsbDeviceProxy::ControlTransferOut(
    UsbControlTransferParamsPtr in_params, const WTF::Vector<uint8_t>& in_data, uint32_t in_timeout, ControlTransferOutCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::UsbDevice::ControlTransferOut");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kUsbDevice_ControlTransferOut_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::UsbDevice_ControlTransferOut_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->params)::BaseType::BufferWriter
      params_writer;
  mojo::internal::Serialize<::device::mojom::UsbControlTransferParamsDataView>(
      in_params, buffer, &params_writer, &serialization_context);
  params->params.Set(
      params_writer.is_null() ? nullptr : params_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->params.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null params in UsbDevice.ControlTransferOut request");
  typename decltype(params->data)::BaseType::BufferWriter
      data_writer;
  const mojo::internal::ContainerValidateParams data_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      in_data, buffer, &data_writer, &data_validate_params,
      &serialization_context);
  params->data.Set(
      data_writer.is_null() ? nullptr : data_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->data.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null data in UsbDevice.ControlTransferOut request");
  params->timeout = in_timeout;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(UsbDevice::Name_);
  message.set_method_name("ControlTransferOut");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new UsbDevice_ControlTransferOut_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void UsbDeviceProxy::GenericTransferIn(
    uint8_t in_endpoint_number, uint32_t in_length, uint32_t in_timeout, GenericTransferInCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::UsbDevice::GenericTransferIn");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kUsbDevice_GenericTransferIn_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::UsbDevice_GenericTransferIn_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->endpoint_number = in_endpoint_number;
  params->length = in_length;
  params->timeout = in_timeout;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(UsbDevice::Name_);
  message.set_method_name("GenericTransferIn");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new UsbDevice_GenericTransferIn_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void UsbDeviceProxy::GenericTransferOut(
    uint8_t in_endpoint_number, const WTF::Vector<uint8_t>& in_data, uint32_t in_timeout, GenericTransferOutCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::UsbDevice::GenericTransferOut");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kUsbDevice_GenericTransferOut_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::UsbDevice_GenericTransferOut_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->endpoint_number = in_endpoint_number;
  typename decltype(params->data)::BaseType::BufferWriter
      data_writer;
  const mojo::internal::ContainerValidateParams data_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      in_data, buffer, &data_writer, &data_validate_params,
      &serialization_context);
  params->data.Set(
      data_writer.is_null() ? nullptr : data_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->data.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null data in UsbDevice.GenericTransferOut request");
  params->timeout = in_timeout;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(UsbDevice::Name_);
  message.set_method_name("GenericTransferOut");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new UsbDevice_GenericTransferOut_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void UsbDeviceProxy::IsochronousTransferIn(
    uint8_t in_endpoint_number, const WTF::Vector<uint32_t>& in_packet_lengths, uint32_t in_timeout, IsochronousTransferInCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::UsbDevice::IsochronousTransferIn");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kUsbDevice_IsochronousTransferIn_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::UsbDevice_IsochronousTransferIn_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->endpoint_number = in_endpoint_number;
  typename decltype(params->packet_lengths)::BaseType::BufferWriter
      packet_lengths_writer;
  const mojo::internal::ContainerValidateParams packet_lengths_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint32_t>>(
      in_packet_lengths, buffer, &packet_lengths_writer, &packet_lengths_validate_params,
      &serialization_context);
  params->packet_lengths.Set(
      packet_lengths_writer.is_null() ? nullptr : packet_lengths_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->packet_lengths.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null packet_lengths in UsbDevice.IsochronousTransferIn request");
  params->timeout = in_timeout;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(UsbDevice::Name_);
  message.set_method_name("IsochronousTransferIn");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new UsbDevice_IsochronousTransferIn_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void UsbDeviceProxy::IsochronousTransferOut(
    uint8_t in_endpoint_number, const WTF::Vector<uint8_t>& in_data, const WTF::Vector<uint32_t>& in_packet_lengths, uint32_t in_timeout, IsochronousTransferOutCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::UsbDevice::IsochronousTransferOut");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kUsbDevice_IsochronousTransferOut_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::UsbDevice_IsochronousTransferOut_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->endpoint_number = in_endpoint_number;
  typename decltype(params->data)::BaseType::BufferWriter
      data_writer;
  const mojo::internal::ContainerValidateParams data_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      in_data, buffer, &data_writer, &data_validate_params,
      &serialization_context);
  params->data.Set(
      data_writer.is_null() ? nullptr : data_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->data.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null data in UsbDevice.IsochronousTransferOut request");
  typename decltype(params->packet_lengths)::BaseType::BufferWriter
      packet_lengths_writer;
  const mojo::internal::ContainerValidateParams packet_lengths_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint32_t>>(
      in_packet_lengths, buffer, &packet_lengths_writer, &packet_lengths_validate_params,
      &serialization_context);
  params->packet_lengths.Set(
      packet_lengths_writer.is_null() ? nullptr : packet_lengths_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->packet_lengths.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null packet_lengths in UsbDevice.IsochronousTransferOut request");
  params->timeout = in_timeout;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(UsbDevice::Name_);
  message.set_method_name("IsochronousTransferOut");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new UsbDevice_IsochronousTransferOut_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class UsbDevice_Open_ProxyToResponder {
 public:
  static UsbDevice::OpenCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<UsbDevice_Open_ProxyToResponder> proxy(
        new UsbDevice_Open_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&UsbDevice_Open_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~UsbDevice_Open_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  UsbDevice_Open_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "UsbDevice::OpenCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      UsbOpenDeviceError in_error);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(UsbDevice_Open_ProxyToResponder);
};

bool UsbDevice_Open_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::UsbDevice::OpenCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::UsbDevice_Open_ResponseParams_Data* params =
      reinterpret_cast<
          internal::UsbDevice_Open_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  UsbOpenDeviceError p_error{};
  UsbDevice_Open_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadError(&p_error))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        UsbDevice::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_error));
  return true;
}

void UsbDevice_Open_ProxyToResponder::Run(
    UsbOpenDeviceError in_error) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kUsbDevice_Open_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::UsbDevice_Open_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::device::mojom::UsbOpenDeviceError>(
      in_error, &params->error);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::UsbDevice::OpenCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(UsbDevice::Name_);
  message.set_method_name("Open");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class UsbDevice_Close_ProxyToResponder {
 public:
  static UsbDevice::CloseCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<UsbDevice_Close_ProxyToResponder> proxy(
        new UsbDevice_Close_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&UsbDevice_Close_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~UsbDevice_Close_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  UsbDevice_Close_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "UsbDevice::CloseCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      );

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(UsbDevice_Close_ProxyToResponder);
};

bool UsbDevice_Close_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::UsbDevice::CloseCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::UsbDevice_Close_ResponseParams_Data* params =
      reinterpret_cast<
          internal::UsbDevice_Close_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  UsbDevice_Close_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        UsbDevice::Name_, 1, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run();
  return true;
}

void UsbDevice_Close_ProxyToResponder::Run(
    ) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kUsbDevice_Close_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::UsbDevice_Close_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::UsbDevice::CloseCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(UsbDevice::Name_);
  message.set_method_name("Close");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class UsbDevice_SetConfiguration_ProxyToResponder {
 public:
  static UsbDevice::SetConfigurationCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<UsbDevice_SetConfiguration_ProxyToResponder> proxy(
        new UsbDevice_SetConfiguration_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&UsbDevice_SetConfiguration_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~UsbDevice_SetConfiguration_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  UsbDevice_SetConfiguration_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "UsbDevice::SetConfigurationCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      bool in_success);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(UsbDevice_SetConfiguration_ProxyToResponder);
};

bool UsbDevice_SetConfiguration_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::UsbDevice::SetConfigurationCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::UsbDevice_SetConfiguration_ResponseParams_Data* params =
      reinterpret_cast<
          internal::UsbDevice_SetConfiguration_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_success{};
  UsbDevice_SetConfiguration_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_success = input_data_view.success();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        UsbDevice::Name_, 2, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_success));
  return true;
}

void UsbDevice_SetConfiguration_ProxyToResponder::Run(
    bool in_success) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kUsbDevice_SetConfiguration_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::UsbDevice_SetConfiguration_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->success = in_success;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::UsbDevice::SetConfigurationCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(UsbDevice::Name_);
  message.set_method_name("SetConfiguration");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class UsbDevice_ClaimInterface_ProxyToResponder {
 public:
  static UsbDevice::ClaimInterfaceCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<UsbDevice_ClaimInterface_ProxyToResponder> proxy(
        new UsbDevice_ClaimInterface_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&UsbDevice_ClaimInterface_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~UsbDevice_ClaimInterface_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  UsbDevice_ClaimInterface_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "UsbDevice::ClaimInterfaceCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      bool in_success);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(UsbDevice_ClaimInterface_ProxyToResponder);
};

bool UsbDevice_ClaimInterface_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::UsbDevice::ClaimInterfaceCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::UsbDevice_ClaimInterface_ResponseParams_Data* params =
      reinterpret_cast<
          internal::UsbDevice_ClaimInterface_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_success{};
  UsbDevice_ClaimInterface_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_success = input_data_view.success();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        UsbDevice::Name_, 3, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_success));
  return true;
}

void UsbDevice_ClaimInterface_ProxyToResponder::Run(
    bool in_success) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kUsbDevice_ClaimInterface_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::UsbDevice_ClaimInterface_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->success = in_success;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::UsbDevice::ClaimInterfaceCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(UsbDevice::Name_);
  message.set_method_name("ClaimInterface");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class UsbDevice_ReleaseInterface_ProxyToResponder {
 public:
  static UsbDevice::ReleaseInterfaceCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<UsbDevice_ReleaseInterface_ProxyToResponder> proxy(
        new UsbDevice_ReleaseInterface_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&UsbDevice_ReleaseInterface_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~UsbDevice_ReleaseInterface_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  UsbDevice_ReleaseInterface_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "UsbDevice::ReleaseInterfaceCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      bool in_success);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(UsbDevice_ReleaseInterface_ProxyToResponder);
};

bool UsbDevice_ReleaseInterface_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::UsbDevice::ReleaseInterfaceCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::UsbDevice_ReleaseInterface_ResponseParams_Data* params =
      reinterpret_cast<
          internal::UsbDevice_ReleaseInterface_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_success{};
  UsbDevice_ReleaseInterface_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_success = input_data_view.success();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        UsbDevice::Name_, 4, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_success));
  return true;
}

void UsbDevice_ReleaseInterface_ProxyToResponder::Run(
    bool in_success) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kUsbDevice_ReleaseInterface_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::UsbDevice_ReleaseInterface_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->success = in_success;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::UsbDevice::ReleaseInterfaceCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(UsbDevice::Name_);
  message.set_method_name("ReleaseInterface");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class UsbDevice_SetInterfaceAlternateSetting_ProxyToResponder {
 public:
  static UsbDevice::SetInterfaceAlternateSettingCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<UsbDevice_SetInterfaceAlternateSetting_ProxyToResponder> proxy(
        new UsbDevice_SetInterfaceAlternateSetting_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&UsbDevice_SetInterfaceAlternateSetting_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~UsbDevice_SetInterfaceAlternateSetting_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  UsbDevice_SetInterfaceAlternateSetting_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "UsbDevice::SetInterfaceAlternateSettingCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      bool in_success);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(UsbDevice_SetInterfaceAlternateSetting_ProxyToResponder);
};

bool UsbDevice_SetInterfaceAlternateSetting_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::UsbDevice::SetInterfaceAlternateSettingCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::UsbDevice_SetInterfaceAlternateSetting_ResponseParams_Data* params =
      reinterpret_cast<
          internal::UsbDevice_SetInterfaceAlternateSetting_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_success{};
  UsbDevice_SetInterfaceAlternateSetting_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_success = input_data_view.success();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        UsbDevice::Name_, 5, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_success));
  return true;
}

void UsbDevice_SetInterfaceAlternateSetting_ProxyToResponder::Run(
    bool in_success) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kUsbDevice_SetInterfaceAlternateSetting_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::UsbDevice_SetInterfaceAlternateSetting_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->success = in_success;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::UsbDevice::SetInterfaceAlternateSettingCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(UsbDevice::Name_);
  message.set_method_name("SetInterfaceAlternateSetting");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class UsbDevice_Reset_ProxyToResponder {
 public:
  static UsbDevice::ResetCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<UsbDevice_Reset_ProxyToResponder> proxy(
        new UsbDevice_Reset_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&UsbDevice_Reset_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~UsbDevice_Reset_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  UsbDevice_Reset_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "UsbDevice::ResetCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      bool in_success);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(UsbDevice_Reset_ProxyToResponder);
};

bool UsbDevice_Reset_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::UsbDevice::ResetCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::UsbDevice_Reset_ResponseParams_Data* params =
      reinterpret_cast<
          internal::UsbDevice_Reset_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_success{};
  UsbDevice_Reset_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_success = input_data_view.success();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        UsbDevice::Name_, 6, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_success));
  return true;
}

void UsbDevice_Reset_ProxyToResponder::Run(
    bool in_success) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kUsbDevice_Reset_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::UsbDevice_Reset_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->success = in_success;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::UsbDevice::ResetCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(UsbDevice::Name_);
  message.set_method_name("Reset");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class UsbDevice_ClearHalt_ProxyToResponder {
 public:
  static UsbDevice::ClearHaltCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<UsbDevice_ClearHalt_ProxyToResponder> proxy(
        new UsbDevice_ClearHalt_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&UsbDevice_ClearHalt_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~UsbDevice_ClearHalt_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  UsbDevice_ClearHalt_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "UsbDevice::ClearHaltCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      bool in_success);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(UsbDevice_ClearHalt_ProxyToResponder);
};

bool UsbDevice_ClearHalt_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::UsbDevice::ClearHaltCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::UsbDevice_ClearHalt_ResponseParams_Data* params =
      reinterpret_cast<
          internal::UsbDevice_ClearHalt_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_success{};
  UsbDevice_ClearHalt_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_success = input_data_view.success();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        UsbDevice::Name_, 7, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_success));
  return true;
}

void UsbDevice_ClearHalt_ProxyToResponder::Run(
    bool in_success) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kUsbDevice_ClearHalt_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::UsbDevice_ClearHalt_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->success = in_success;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::UsbDevice::ClearHaltCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(UsbDevice::Name_);
  message.set_method_name("ClearHalt");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class UsbDevice_ControlTransferIn_ProxyToResponder {
 public:
  static UsbDevice::ControlTransferInCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<UsbDevice_ControlTransferIn_ProxyToResponder> proxy(
        new UsbDevice_ControlTransferIn_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&UsbDevice_ControlTransferIn_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~UsbDevice_ControlTransferIn_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  UsbDevice_ControlTransferIn_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "UsbDevice::ControlTransferInCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      UsbTransferStatus in_status, const WTF::Vector<uint8_t>& in_data);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(UsbDevice_ControlTransferIn_ProxyToResponder);
};

bool UsbDevice_ControlTransferIn_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::UsbDevice::ControlTransferInCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::UsbDevice_ControlTransferIn_ResponseParams_Data* params =
      reinterpret_cast<
          internal::UsbDevice_ControlTransferIn_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  UsbTransferStatus p_status{};
  WTF::Vector<uint8_t> p_data{};
  UsbDevice_ControlTransferIn_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadStatus(&p_status))
    success = false;
  if (!input_data_view.ReadData(&p_data))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        UsbDevice::Name_, 8, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_status), 
std::move(p_data));
  return true;
}

void UsbDevice_ControlTransferIn_ProxyToResponder::Run(
    UsbTransferStatus in_status, const WTF::Vector<uint8_t>& in_data) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kUsbDevice_ControlTransferIn_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::UsbDevice_ControlTransferIn_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::device::mojom::UsbTransferStatus>(
      in_status, &params->status);
  typename decltype(params->data)::BaseType::BufferWriter
      data_writer;
  const mojo::internal::ContainerValidateParams data_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      in_data, buffer, &data_writer, &data_validate_params,
      &serialization_context);
  params->data.Set(
      data_writer.is_null() ? nullptr : data_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->data.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null data in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::UsbDevice::ControlTransferInCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(UsbDevice::Name_);
  message.set_method_name("ControlTransferIn");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class UsbDevice_ControlTransferOut_ProxyToResponder {
 public:
  static UsbDevice::ControlTransferOutCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<UsbDevice_ControlTransferOut_ProxyToResponder> proxy(
        new UsbDevice_ControlTransferOut_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&UsbDevice_ControlTransferOut_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~UsbDevice_ControlTransferOut_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  UsbDevice_ControlTransferOut_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "UsbDevice::ControlTransferOutCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      UsbTransferStatus in_status);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(UsbDevice_ControlTransferOut_ProxyToResponder);
};

bool UsbDevice_ControlTransferOut_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::UsbDevice::ControlTransferOutCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::UsbDevice_ControlTransferOut_ResponseParams_Data* params =
      reinterpret_cast<
          internal::UsbDevice_ControlTransferOut_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  UsbTransferStatus p_status{};
  UsbDevice_ControlTransferOut_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadStatus(&p_status))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        UsbDevice::Name_, 9, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_status));
  return true;
}

void UsbDevice_ControlTransferOut_ProxyToResponder::Run(
    UsbTransferStatus in_status) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kUsbDevice_ControlTransferOut_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::UsbDevice_ControlTransferOut_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::device::mojom::UsbTransferStatus>(
      in_status, &params->status);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::UsbDevice::ControlTransferOutCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(UsbDevice::Name_);
  message.set_method_name("ControlTransferOut");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class UsbDevice_GenericTransferIn_ProxyToResponder {
 public:
  static UsbDevice::GenericTransferInCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<UsbDevice_GenericTransferIn_ProxyToResponder> proxy(
        new UsbDevice_GenericTransferIn_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&UsbDevice_GenericTransferIn_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~UsbDevice_GenericTransferIn_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  UsbDevice_GenericTransferIn_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "UsbDevice::GenericTransferInCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      UsbTransferStatus in_status, const WTF::Vector<uint8_t>& in_data);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(UsbDevice_GenericTransferIn_ProxyToResponder);
};

bool UsbDevice_GenericTransferIn_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::UsbDevice::GenericTransferInCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::UsbDevice_GenericTransferIn_ResponseParams_Data* params =
      reinterpret_cast<
          internal::UsbDevice_GenericTransferIn_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  UsbTransferStatus p_status{};
  WTF::Vector<uint8_t> p_data{};
  UsbDevice_GenericTransferIn_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadStatus(&p_status))
    success = false;
  if (!input_data_view.ReadData(&p_data))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        UsbDevice::Name_, 10, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_status), 
std::move(p_data));
  return true;
}

void UsbDevice_GenericTransferIn_ProxyToResponder::Run(
    UsbTransferStatus in_status, const WTF::Vector<uint8_t>& in_data) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kUsbDevice_GenericTransferIn_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::UsbDevice_GenericTransferIn_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::device::mojom::UsbTransferStatus>(
      in_status, &params->status);
  typename decltype(params->data)::BaseType::BufferWriter
      data_writer;
  const mojo::internal::ContainerValidateParams data_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      in_data, buffer, &data_writer, &data_validate_params,
      &serialization_context);
  params->data.Set(
      data_writer.is_null() ? nullptr : data_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->data.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null data in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::UsbDevice::GenericTransferInCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(UsbDevice::Name_);
  message.set_method_name("GenericTransferIn");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class UsbDevice_GenericTransferOut_ProxyToResponder {
 public:
  static UsbDevice::GenericTransferOutCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<UsbDevice_GenericTransferOut_ProxyToResponder> proxy(
        new UsbDevice_GenericTransferOut_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&UsbDevice_GenericTransferOut_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~UsbDevice_GenericTransferOut_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  UsbDevice_GenericTransferOut_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "UsbDevice::GenericTransferOutCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      UsbTransferStatus in_status);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(UsbDevice_GenericTransferOut_ProxyToResponder);
};

bool UsbDevice_GenericTransferOut_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::UsbDevice::GenericTransferOutCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::UsbDevice_GenericTransferOut_ResponseParams_Data* params =
      reinterpret_cast<
          internal::UsbDevice_GenericTransferOut_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  UsbTransferStatus p_status{};
  UsbDevice_GenericTransferOut_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadStatus(&p_status))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        UsbDevice::Name_, 11, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_status));
  return true;
}

void UsbDevice_GenericTransferOut_ProxyToResponder::Run(
    UsbTransferStatus in_status) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kUsbDevice_GenericTransferOut_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::UsbDevice_GenericTransferOut_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::device::mojom::UsbTransferStatus>(
      in_status, &params->status);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::UsbDevice::GenericTransferOutCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(UsbDevice::Name_);
  message.set_method_name("GenericTransferOut");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class UsbDevice_IsochronousTransferIn_ProxyToResponder {
 public:
  static UsbDevice::IsochronousTransferInCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<UsbDevice_IsochronousTransferIn_ProxyToResponder> proxy(
        new UsbDevice_IsochronousTransferIn_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&UsbDevice_IsochronousTransferIn_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~UsbDevice_IsochronousTransferIn_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  UsbDevice_IsochronousTransferIn_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "UsbDevice::IsochronousTransferInCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      const WTF::Vector<uint8_t>& in_data, WTF::Vector<UsbIsochronousPacketPtr> in_packets);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(UsbDevice_IsochronousTransferIn_ProxyToResponder);
};

bool UsbDevice_IsochronousTransferIn_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::UsbDevice::IsochronousTransferInCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::UsbDevice_IsochronousTransferIn_ResponseParams_Data* params =
      reinterpret_cast<
          internal::UsbDevice_IsochronousTransferIn_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  WTF::Vector<uint8_t> p_data{};
  WTF::Vector<UsbIsochronousPacketPtr> p_packets{};
  UsbDevice_IsochronousTransferIn_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadData(&p_data))
    success = false;
  if (!input_data_view.ReadPackets(&p_packets))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        UsbDevice::Name_, 12, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_data), 
std::move(p_packets));
  return true;
}

void UsbDevice_IsochronousTransferIn_ProxyToResponder::Run(
    const WTF::Vector<uint8_t>& in_data, WTF::Vector<UsbIsochronousPacketPtr> in_packets) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kUsbDevice_IsochronousTransferIn_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::UsbDevice_IsochronousTransferIn_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->data)::BaseType::BufferWriter
      data_writer;
  const mojo::internal::ContainerValidateParams data_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      in_data, buffer, &data_writer, &data_validate_params,
      &serialization_context);
  params->data.Set(
      data_writer.is_null() ? nullptr : data_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->data.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null data in ");
  typename decltype(params->packets)::BaseType::BufferWriter
      packets_writer;
  const mojo::internal::ContainerValidateParams packets_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::device::mojom::UsbIsochronousPacketDataView>>(
      in_packets, buffer, &packets_writer, &packets_validate_params,
      &serialization_context);
  params->packets.Set(
      packets_writer.is_null() ? nullptr : packets_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->packets.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null packets in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::UsbDevice::IsochronousTransferInCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(UsbDevice::Name_);
  message.set_method_name("IsochronousTransferIn");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class UsbDevice_IsochronousTransferOut_ProxyToResponder {
 public:
  static UsbDevice::IsochronousTransferOutCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<UsbDevice_IsochronousTransferOut_ProxyToResponder> proxy(
        new UsbDevice_IsochronousTransferOut_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&UsbDevice_IsochronousTransferOut_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~UsbDevice_IsochronousTransferOut_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  UsbDevice_IsochronousTransferOut_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "UsbDevice::IsochronousTransferOutCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      WTF::Vector<UsbIsochronousPacketPtr> in_packets);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(UsbDevice_IsochronousTransferOut_ProxyToResponder);
};

bool UsbDevice_IsochronousTransferOut_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::UsbDevice::IsochronousTransferOutCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::UsbDevice_IsochronousTransferOut_ResponseParams_Data* params =
      reinterpret_cast<
          internal::UsbDevice_IsochronousTransferOut_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  WTF::Vector<UsbIsochronousPacketPtr> p_packets{};
  UsbDevice_IsochronousTransferOut_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadPackets(&p_packets))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        UsbDevice::Name_, 13, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_packets));
  return true;
}

void UsbDevice_IsochronousTransferOut_ProxyToResponder::Run(
    WTF::Vector<UsbIsochronousPacketPtr> in_packets) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kUsbDevice_IsochronousTransferOut_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::UsbDevice_IsochronousTransferOut_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->packets)::BaseType::BufferWriter
      packets_writer;
  const mojo::internal::ContainerValidateParams packets_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::device::mojom::UsbIsochronousPacketDataView>>(
      in_packets, buffer, &packets_writer, &packets_validate_params,
      &serialization_context);
  params->packets.Set(
      packets_writer.is_null() ? nullptr : packets_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->packets.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null packets in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::UsbDevice::IsochronousTransferOutCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(UsbDevice::Name_);
  message.set_method_name("IsochronousTransferOut");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool UsbDeviceStubDispatch::Accept(
    UsbDevice* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kUsbDevice_Open_Name: {
      break;
    }
    case internal::kUsbDevice_Close_Name: {
      break;
    }
    case internal::kUsbDevice_SetConfiguration_Name: {
      break;
    }
    case internal::kUsbDevice_ClaimInterface_Name: {
      break;
    }
    case internal::kUsbDevice_ReleaseInterface_Name: {
      break;
    }
    case internal::kUsbDevice_SetInterfaceAlternateSetting_Name: {
      break;
    }
    case internal::kUsbDevice_Reset_Name: {
      break;
    }
    case internal::kUsbDevice_ClearHalt_Name: {
      break;
    }
    case internal::kUsbDevice_ControlTransferIn_Name: {
      break;
    }
    case internal::kUsbDevice_ControlTransferOut_Name: {
      break;
    }
    case internal::kUsbDevice_GenericTransferIn_Name: {
      break;
    }
    case internal::kUsbDevice_GenericTransferOut_Name: {
      break;
    }
    case internal::kUsbDevice_IsochronousTransferIn_Name: {
      break;
    }
    case internal::kUsbDevice_IsochronousTransferOut_Name: {
      break;
    }
  }
  return false;
}

// static
bool UsbDeviceStubDispatch::AcceptWithResponder(
    UsbDevice* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kUsbDevice_Open_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::UsbDevice::Open",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::UsbDevice_Open_Params_Data* params =
          reinterpret_cast<
              internal::UsbDevice_Open_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      UsbDevice_Open_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            UsbDevice::Name_, 0, false);
        return false;
      }
      UsbDevice::OpenCallback callback =
          UsbDevice_Open_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Open(std::move(callback));
      return true;
    }
    case internal::kUsbDevice_Close_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::UsbDevice::Close",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::UsbDevice_Close_Params_Data* params =
          reinterpret_cast<
              internal::UsbDevice_Close_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      UsbDevice_Close_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            UsbDevice::Name_, 1, false);
        return false;
      }
      UsbDevice::CloseCallback callback =
          UsbDevice_Close_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Close(std::move(callback));
      return true;
    }
    case internal::kUsbDevice_SetConfiguration_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::UsbDevice::SetConfiguration",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::UsbDevice_SetConfiguration_Params_Data* params =
          reinterpret_cast<
              internal::UsbDevice_SetConfiguration_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint8_t p_value{};
      UsbDevice_SetConfiguration_ParamsDataView input_data_view(params, &serialization_context);
      
      p_value = input_data_view.value();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            UsbDevice::Name_, 2, false);
        return false;
      }
      UsbDevice::SetConfigurationCallback callback =
          UsbDevice_SetConfiguration_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SetConfiguration(
std::move(p_value), std::move(callback));
      return true;
    }
    case internal::kUsbDevice_ClaimInterface_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::UsbDevice::ClaimInterface",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::UsbDevice_ClaimInterface_Params_Data* params =
          reinterpret_cast<
              internal::UsbDevice_ClaimInterface_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint8_t p_interface_number{};
      UsbDevice_ClaimInterface_ParamsDataView input_data_view(params, &serialization_context);
      
      p_interface_number = input_data_view.interface_number();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            UsbDevice::Name_, 3, false);
        return false;
      }
      UsbDevice::ClaimInterfaceCallback callback =
          UsbDevice_ClaimInterface_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->ClaimInterface(
std::move(p_interface_number), std::move(callback));
      return true;
    }
    case internal::kUsbDevice_ReleaseInterface_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::UsbDevice::ReleaseInterface",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::UsbDevice_ReleaseInterface_Params_Data* params =
          reinterpret_cast<
              internal::UsbDevice_ReleaseInterface_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint8_t p_interface_number{};
      UsbDevice_ReleaseInterface_ParamsDataView input_data_view(params, &serialization_context);
      
      p_interface_number = input_data_view.interface_number();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            UsbDevice::Name_, 4, false);
        return false;
      }
      UsbDevice::ReleaseInterfaceCallback callback =
          UsbDevice_ReleaseInterface_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->ReleaseInterface(
std::move(p_interface_number), std::move(callback));
      return true;
    }
    case internal::kUsbDevice_SetInterfaceAlternateSetting_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::UsbDevice::SetInterfaceAlternateSetting",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::UsbDevice_SetInterfaceAlternateSetting_Params_Data* params =
          reinterpret_cast<
              internal::UsbDevice_SetInterfaceAlternateSetting_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint8_t p_interface_number{};
      uint8_t p_alternate_setting{};
      UsbDevice_SetInterfaceAlternateSetting_ParamsDataView input_data_view(params, &serialization_context);
      
      p_interface_number = input_data_view.interface_number();
      p_alternate_setting = input_data_view.alternate_setting();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            UsbDevice::Name_, 5, false);
        return false;
      }
      UsbDevice::SetInterfaceAlternateSettingCallback callback =
          UsbDevice_SetInterfaceAlternateSetting_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SetInterfaceAlternateSetting(
std::move(p_interface_number), 
std::move(p_alternate_setting), std::move(callback));
      return true;
    }
    case internal::kUsbDevice_Reset_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::UsbDevice::Reset",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::UsbDevice_Reset_Params_Data* params =
          reinterpret_cast<
              internal::UsbDevice_Reset_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      UsbDevice_Reset_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            UsbDevice::Name_, 6, false);
        return false;
      }
      UsbDevice::ResetCallback callback =
          UsbDevice_Reset_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Reset(std::move(callback));
      return true;
    }
    case internal::kUsbDevice_ClearHalt_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::UsbDevice::ClearHalt",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::UsbDevice_ClearHalt_Params_Data* params =
          reinterpret_cast<
              internal::UsbDevice_ClearHalt_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint8_t p_endpoint{};
      UsbDevice_ClearHalt_ParamsDataView input_data_view(params, &serialization_context);
      
      p_endpoint = input_data_view.endpoint();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            UsbDevice::Name_, 7, false);
        return false;
      }
      UsbDevice::ClearHaltCallback callback =
          UsbDevice_ClearHalt_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->ClearHalt(
std::move(p_endpoint), std::move(callback));
      return true;
    }
    case internal::kUsbDevice_ControlTransferIn_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::UsbDevice::ControlTransferIn",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::UsbDevice_ControlTransferIn_Params_Data* params =
          reinterpret_cast<
              internal::UsbDevice_ControlTransferIn_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      UsbControlTransferParamsPtr p_params{};
      uint32_t p_length{};
      uint32_t p_timeout{};
      UsbDevice_ControlTransferIn_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadParams(&p_params))
        success = false;
      p_length = input_data_view.length();
      p_timeout = input_data_view.timeout();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            UsbDevice::Name_, 8, false);
        return false;
      }
      UsbDevice::ControlTransferInCallback callback =
          UsbDevice_ControlTransferIn_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->ControlTransferIn(
std::move(p_params), 
std::move(p_length), 
std::move(p_timeout), std::move(callback));
      return true;
    }
    case internal::kUsbDevice_ControlTransferOut_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::UsbDevice::ControlTransferOut",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::UsbDevice_ControlTransferOut_Params_Data* params =
          reinterpret_cast<
              internal::UsbDevice_ControlTransferOut_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      UsbControlTransferParamsPtr p_params{};
      WTF::Vector<uint8_t> p_data{};
      uint32_t p_timeout{};
      UsbDevice_ControlTransferOut_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadParams(&p_params))
        success = false;
      if (!input_data_view.ReadData(&p_data))
        success = false;
      p_timeout = input_data_view.timeout();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            UsbDevice::Name_, 9, false);
        return false;
      }
      UsbDevice::ControlTransferOutCallback callback =
          UsbDevice_ControlTransferOut_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->ControlTransferOut(
std::move(p_params), 
std::move(p_data), 
std::move(p_timeout), std::move(callback));
      return true;
    }
    case internal::kUsbDevice_GenericTransferIn_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::UsbDevice::GenericTransferIn",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::UsbDevice_GenericTransferIn_Params_Data* params =
          reinterpret_cast<
              internal::UsbDevice_GenericTransferIn_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint8_t p_endpoint_number{};
      uint32_t p_length{};
      uint32_t p_timeout{};
      UsbDevice_GenericTransferIn_ParamsDataView input_data_view(params, &serialization_context);
      
      p_endpoint_number = input_data_view.endpoint_number();
      p_length = input_data_view.length();
      p_timeout = input_data_view.timeout();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            UsbDevice::Name_, 10, false);
        return false;
      }
      UsbDevice::GenericTransferInCallback callback =
          UsbDevice_GenericTransferIn_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GenericTransferIn(
std::move(p_endpoint_number), 
std::move(p_length), 
std::move(p_timeout), std::move(callback));
      return true;
    }
    case internal::kUsbDevice_GenericTransferOut_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::UsbDevice::GenericTransferOut",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::UsbDevice_GenericTransferOut_Params_Data* params =
          reinterpret_cast<
              internal::UsbDevice_GenericTransferOut_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint8_t p_endpoint_number{};
      WTF::Vector<uint8_t> p_data{};
      uint32_t p_timeout{};
      UsbDevice_GenericTransferOut_ParamsDataView input_data_view(params, &serialization_context);
      
      p_endpoint_number = input_data_view.endpoint_number();
      if (!input_data_view.ReadData(&p_data))
        success = false;
      p_timeout = input_data_view.timeout();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            UsbDevice::Name_, 11, false);
        return false;
      }
      UsbDevice::GenericTransferOutCallback callback =
          UsbDevice_GenericTransferOut_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GenericTransferOut(
std::move(p_endpoint_number), 
std::move(p_data), 
std::move(p_timeout), std::move(callback));
      return true;
    }
    case internal::kUsbDevice_IsochronousTransferIn_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::UsbDevice::IsochronousTransferIn",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::UsbDevice_IsochronousTransferIn_Params_Data* params =
          reinterpret_cast<
              internal::UsbDevice_IsochronousTransferIn_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint8_t p_endpoint_number{};
      WTF::Vector<uint32_t> p_packet_lengths{};
      uint32_t p_timeout{};
      UsbDevice_IsochronousTransferIn_ParamsDataView input_data_view(params, &serialization_context);
      
      p_endpoint_number = input_data_view.endpoint_number();
      if (!input_data_view.ReadPacketLengths(&p_packet_lengths))
        success = false;
      p_timeout = input_data_view.timeout();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            UsbDevice::Name_, 12, false);
        return false;
      }
      UsbDevice::IsochronousTransferInCallback callback =
          UsbDevice_IsochronousTransferIn_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->IsochronousTransferIn(
std::move(p_endpoint_number), 
std::move(p_packet_lengths), 
std::move(p_timeout), std::move(callback));
      return true;
    }
    case internal::kUsbDevice_IsochronousTransferOut_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::UsbDevice::IsochronousTransferOut",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::UsbDevice_IsochronousTransferOut_Params_Data* params =
          reinterpret_cast<
              internal::UsbDevice_IsochronousTransferOut_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint8_t p_endpoint_number{};
      WTF::Vector<uint8_t> p_data{};
      WTF::Vector<uint32_t> p_packet_lengths{};
      uint32_t p_timeout{};
      UsbDevice_IsochronousTransferOut_ParamsDataView input_data_view(params, &serialization_context);
      
      p_endpoint_number = input_data_view.endpoint_number();
      if (!input_data_view.ReadData(&p_data))
        success = false;
      if (!input_data_view.ReadPacketLengths(&p_packet_lengths))
        success = false;
      p_timeout = input_data_view.timeout();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            UsbDevice::Name_, 13, false);
        return false;
      }
      UsbDevice::IsochronousTransferOutCallback callback =
          UsbDevice_IsochronousTransferOut_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->IsochronousTransferOut(
std::move(p_endpoint_number), 
std::move(p_data), 
std::move(p_packet_lengths), 
std::move(p_timeout), std::move(callback));
      return true;
    }
  }
  return false;
}

bool UsbDeviceRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "UsbDevice RequestValidator");

  switch (message->header()->name) {
    case internal::kUsbDevice_Open_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::UsbDevice_Open_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kUsbDevice_Close_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::UsbDevice_Close_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kUsbDevice_SetConfiguration_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::UsbDevice_SetConfiguration_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kUsbDevice_ClaimInterface_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::UsbDevice_ClaimInterface_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kUsbDevice_ReleaseInterface_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::UsbDevice_ReleaseInterface_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kUsbDevice_SetInterfaceAlternateSetting_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::UsbDevice_SetInterfaceAlternateSetting_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kUsbDevice_Reset_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::UsbDevice_Reset_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kUsbDevice_ClearHalt_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::UsbDevice_ClearHalt_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kUsbDevice_ControlTransferIn_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::UsbDevice_ControlTransferIn_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kUsbDevice_ControlTransferOut_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::UsbDevice_ControlTransferOut_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kUsbDevice_GenericTransferIn_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::UsbDevice_GenericTransferIn_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kUsbDevice_GenericTransferOut_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::UsbDevice_GenericTransferOut_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kUsbDevice_IsochronousTransferIn_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::UsbDevice_IsochronousTransferIn_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kUsbDevice_IsochronousTransferOut_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::UsbDevice_IsochronousTransferOut_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      &validation_context,
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}

bool UsbDeviceResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "UsbDevice ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kUsbDevice_Open_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::UsbDevice_Open_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kUsbDevice_Close_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::UsbDevice_Close_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kUsbDevice_SetConfiguration_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::UsbDevice_SetConfiguration_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kUsbDevice_ClaimInterface_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::UsbDevice_ClaimInterface_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kUsbDevice_ReleaseInterface_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::UsbDevice_ReleaseInterface_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kUsbDevice_SetInterfaceAlternateSetting_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::UsbDevice_SetInterfaceAlternateSetting_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kUsbDevice_Reset_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::UsbDevice_Reset_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kUsbDevice_ClearHalt_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::UsbDevice_ClearHalt_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kUsbDevice_ControlTransferIn_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::UsbDevice_ControlTransferIn_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kUsbDevice_ControlTransferOut_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::UsbDevice_ControlTransferOut_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kUsbDevice_GenericTransferIn_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::UsbDevice_GenericTransferIn_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kUsbDevice_GenericTransferOut_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::UsbDevice_GenericTransferOut_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kUsbDevice_IsochronousTransferIn_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::UsbDevice_IsochronousTransferIn_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kUsbDevice_IsochronousTransferOut_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::UsbDevice_IsochronousTransferOut_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      &validation_context,
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}
const char UsbDeviceClient::Name_[] = "device.mojom.UsbDeviceClient";

UsbDeviceClientProxy::UsbDeviceClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void UsbDeviceClientProxy::OnDeviceOpened(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::UsbDeviceClient::OnDeviceOpened");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kUsbDeviceClient_OnDeviceOpened_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::UsbDeviceClient_OnDeviceOpened_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(UsbDeviceClient::Name_);
  message.set_method_name("OnDeviceOpened");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void UsbDeviceClientProxy::OnDeviceClosed(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::UsbDeviceClient::OnDeviceClosed");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kUsbDeviceClient_OnDeviceClosed_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::UsbDeviceClient_OnDeviceClosed_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(UsbDeviceClient::Name_);
  message.set_method_name("OnDeviceClosed");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool UsbDeviceClientStubDispatch::Accept(
    UsbDeviceClient* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kUsbDeviceClient_OnDeviceOpened_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::UsbDeviceClient::OnDeviceOpened",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::UsbDeviceClient_OnDeviceOpened_Params_Data* params =
          reinterpret_cast<internal::UsbDeviceClient_OnDeviceOpened_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      UsbDeviceClient_OnDeviceOpened_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            UsbDeviceClient::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnDeviceOpened();
      return true;
    }
    case internal::kUsbDeviceClient_OnDeviceClosed_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::UsbDeviceClient::OnDeviceClosed",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::UsbDeviceClient_OnDeviceClosed_Params_Data* params =
          reinterpret_cast<internal::UsbDeviceClient_OnDeviceClosed_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      UsbDeviceClient_OnDeviceClosed_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            UsbDeviceClient::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnDeviceClosed();
      return true;
    }
  }
  return false;
}

// static
bool UsbDeviceClientStubDispatch::AcceptWithResponder(
    UsbDeviceClient* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kUsbDeviceClient_OnDeviceOpened_Name: {
      break;
    }
    case internal::kUsbDeviceClient_OnDeviceClosed_Name: {
      break;
    }
  }
  return false;
}

bool UsbDeviceClientRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "UsbDeviceClient RequestValidator");

  switch (message->header()->name) {
    case internal::kUsbDeviceClient_OnDeviceOpened_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::UsbDeviceClient_OnDeviceOpened_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kUsbDeviceClient_OnDeviceClosed_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::UsbDeviceClient_OnDeviceClosed_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      &validation_context,
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}

}  // namespace blink
}  // namespace mojom
}  // namespace device

namespace mojo {


// static
bool StructTraits<::device::mojom::blink::UsbEndpointInfo::DataView, ::device::mojom::blink::UsbEndpointInfoPtr>::Read(
    ::device::mojom::blink::UsbEndpointInfo::DataView input,
    ::device::mojom::blink::UsbEndpointInfoPtr* output) {
  bool success = true;
  ::device::mojom::blink::UsbEndpointInfoPtr result(::device::mojom::blink::UsbEndpointInfo::New());
  
      result->endpoint_number = input.endpoint_number();
      if (!input.ReadDirection(&result->direction))
        success = false;
      if (!input.ReadType(&result->type))
        success = false;
      result->packet_size = input.packet_size();
      if (!input.ReadSynchronizationType(&result->synchronization_type))
        success = false;
      if (!input.ReadUsageType(&result->usage_type))
        success = false;
      result->polling_interval = input.polling_interval();
      if (!input.ReadExtraData(&result->extra_data))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::device::mojom::blink::UsbAlternateInterfaceInfo::DataView, ::device::mojom::blink::UsbAlternateInterfaceInfoPtr>::Read(
    ::device::mojom::blink::UsbAlternateInterfaceInfo::DataView input,
    ::device::mojom::blink::UsbAlternateInterfaceInfoPtr* output) {
  bool success = true;
  ::device::mojom::blink::UsbAlternateInterfaceInfoPtr result(::device::mojom::blink::UsbAlternateInterfaceInfo::New());
  
      result->alternate_setting = input.alternate_setting();
      result->class_code = input.class_code();
      result->subclass_code = input.subclass_code();
      result->protocol_code = input.protocol_code();
      if (!input.ReadInterfaceName(&result->interface_name))
        success = false;
      if (!input.ReadEndpoints(&result->endpoints))
        success = false;
      if (!input.ReadExtraData(&result->extra_data))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::device::mojom::blink::UsbInterfaceInfo::DataView, ::device::mojom::blink::UsbInterfaceInfoPtr>::Read(
    ::device::mojom::blink::UsbInterfaceInfo::DataView input,
    ::device::mojom::blink::UsbInterfaceInfoPtr* output) {
  bool success = true;
  ::device::mojom::blink::UsbInterfaceInfoPtr result(::device::mojom::blink::UsbInterfaceInfo::New());
  
      result->interface_number = input.interface_number();
      if (!input.ReadAlternates(&result->alternates))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::device::mojom::blink::UsbConfigurationInfo::DataView, ::device::mojom::blink::UsbConfigurationInfoPtr>::Read(
    ::device::mojom::blink::UsbConfigurationInfo::DataView input,
    ::device::mojom::blink::UsbConfigurationInfoPtr* output) {
  bool success = true;
  ::device::mojom::blink::UsbConfigurationInfoPtr result(::device::mojom::blink::UsbConfigurationInfo::New());
  
      result->configuration_value = input.configuration_value();
      if (!input.ReadConfigurationName(&result->configuration_name))
        success = false;
      result->self_powered = input.self_powered();
      result->remote_wakeup = input.remote_wakeup();
      result->maximum_power = input.maximum_power();
      if (!input.ReadInterfaces(&result->interfaces))
        success = false;
      if (!input.ReadExtraData(&result->extra_data))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::device::mojom::blink::UsbDeviceInfo::DataView, ::device::mojom::blink::UsbDeviceInfoPtr>::Read(
    ::device::mojom::blink::UsbDeviceInfo::DataView input,
    ::device::mojom::blink::UsbDeviceInfoPtr* output) {
  bool success = true;
  ::device::mojom::blink::UsbDeviceInfoPtr result(::device::mojom::blink::UsbDeviceInfo::New());
  
      if (!input.ReadGuid(&result->guid))
        success = false;
      result->usb_version_major = input.usb_version_major();
      result->usb_version_minor = input.usb_version_minor();
      result->usb_version_subminor = input.usb_version_subminor();
      result->class_code = input.class_code();
      result->subclass_code = input.subclass_code();
      result->protocol_code = input.protocol_code();
      result->bus_number = input.bus_number();
      result->port_number = input.port_number();
      result->vendor_id = input.vendor_id();
      result->product_id = input.product_id();
      result->device_version_major = input.device_version_major();
      result->device_version_minor = input.device_version_minor();
      result->device_version_subminor = input.device_version_subminor();
      if (!input.ReadManufacturerName(&result->manufacturer_name))
        success = false;
      if (!input.ReadProductName(&result->product_name))
        success = false;
      if (!input.ReadSerialNumber(&result->serial_number))
        success = false;
      if (!input.ReadWebusbLandingPage(&result->webusb_landing_page))
        success = false;
      result->active_configuration = input.active_configuration();
      if (!input.ReadConfigurations(&result->configurations))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::device::mojom::blink::UsbControlTransferParams::DataView, ::device::mojom::blink::UsbControlTransferParamsPtr>::Read(
    ::device::mojom::blink::UsbControlTransferParams::DataView input,
    ::device::mojom::blink::UsbControlTransferParamsPtr* output) {
  bool success = true;
  ::device::mojom::blink::UsbControlTransferParamsPtr result(::device::mojom::blink::UsbControlTransferParams::New());
  
      if (!input.ReadType(&result->type))
        success = false;
      if (!input.ReadRecipient(&result->recipient))
        success = false;
      result->request = input.request();
      result->value = input.value();
      result->index = input.index();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::device::mojom::blink::UsbIsochronousPacket::DataView, ::device::mojom::blink::UsbIsochronousPacketPtr>::Read(
    ::device::mojom::blink::UsbIsochronousPacket::DataView input,
    ::device::mojom::blink::UsbIsochronousPacketPtr* output) {
  bool success = true;
  ::device::mojom::blink::UsbIsochronousPacketPtr result(::device::mojom::blink::UsbIsochronousPacket::New());
  
      result->length = input.length();
      result->transferred_length = input.transferred_length();
      if (!input.ReadStatus(&result->status))
        success = false;
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif