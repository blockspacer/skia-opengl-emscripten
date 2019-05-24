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

#include "services/device/public/mojom/hid.mojom-blink.h"

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

#include "services/device/public/mojom/hid.mojom-params-data.h"
#include "services/device/public/mojom/hid.mojom-shared-message-ids.h"

#include "services/device/public/mojom/hid.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_HID_MOJOM_BLINK_JUMBO_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_HID_MOJOM_BLINK_JUMBO_H_
#endif
namespace device {
namespace mojom {
namespace blink {
HidUsageAndPage::HidUsageAndPage()
    : usage(),
      usage_page() {}

HidUsageAndPage::HidUsageAndPage(
    uint16_t usage_in,
    uint16_t usage_page_in)
    : usage(std::move(usage_in)),
      usage_page(std::move(usage_page_in)) {}

HidUsageAndPage::~HidUsageAndPage() = default;
size_t HidUsageAndPage::Hash(size_t seed) const {
  seed = mojo::internal::WTFHash(seed, this->usage);
  seed = mojo::internal::WTFHash(seed, this->usage_page);
  return seed;
}

bool HidUsageAndPage::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
HidReportItem::HidReportItem()
    : is_range(),
      is_constant(),
      is_variable(),
      is_relative(),
      wrap(),
      is_non_linear(),
      no_preferred_state(),
      has_null_position(),
      is_volatile(),
      is_buffered_bytes(),
      usages(),
      usage_minimum(),
      usage_maximum(),
      designator_minimum(),
      designator_maximum(),
      string_minimum(),
      string_maximum(),
      logical_minimum(),
      logical_maximum(),
      physical_minimum(),
      physical_maximum(),
      unit_exponent(),
      unit(),
      report_size(),
      report_count() {}

HidReportItem::HidReportItem(
    bool is_range_in,
    bool is_constant_in,
    bool is_variable_in,
    bool is_relative_in,
    bool wrap_in,
    bool is_non_linear_in,
    bool no_preferred_state_in,
    bool has_null_position_in,
    bool is_volatile_in,
    bool is_buffered_bytes_in,
    WTF::Vector<HidUsageAndPagePtr> usages_in,
    HidUsageAndPagePtr usage_minimum_in,
    HidUsageAndPagePtr usage_maximum_in,
    uint32_t designator_minimum_in,
    uint32_t designator_maximum_in,
    uint32_t string_minimum_in,
    uint32_t string_maximum_in,
    int32_t logical_minimum_in,
    int32_t logical_maximum_in,
    int32_t physical_minimum_in,
    int32_t physical_maximum_in,
    uint32_t unit_exponent_in,
    uint32_t unit_in,
    uint32_t report_size_in,
    uint32_t report_count_in)
    : is_range(std::move(is_range_in)),
      is_constant(std::move(is_constant_in)),
      is_variable(std::move(is_variable_in)),
      is_relative(std::move(is_relative_in)),
      wrap(std::move(wrap_in)),
      is_non_linear(std::move(is_non_linear_in)),
      no_preferred_state(std::move(no_preferred_state_in)),
      has_null_position(std::move(has_null_position_in)),
      is_volatile(std::move(is_volatile_in)),
      is_buffered_bytes(std::move(is_buffered_bytes_in)),
      usages(std::move(usages_in)),
      usage_minimum(std::move(usage_minimum_in)),
      usage_maximum(std::move(usage_maximum_in)),
      designator_minimum(std::move(designator_minimum_in)),
      designator_maximum(std::move(designator_maximum_in)),
      string_minimum(std::move(string_minimum_in)),
      string_maximum(std::move(string_maximum_in)),
      logical_minimum(std::move(logical_minimum_in)),
      logical_maximum(std::move(logical_maximum_in)),
      physical_minimum(std::move(physical_minimum_in)),
      physical_maximum(std::move(physical_maximum_in)),
      unit_exponent(std::move(unit_exponent_in)),
      unit(std::move(unit_in)),
      report_size(std::move(report_size_in)),
      report_count(std::move(report_count_in)) {}

HidReportItem::~HidReportItem() = default;

bool HidReportItem::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
HidReportDescription::HidReportDescription()
    : report_id(),
      items() {}

HidReportDescription::HidReportDescription(
    uint8_t report_id_in,
    WTF::Vector<HidReportItemPtr> items_in)
    : report_id(std::move(report_id_in)),
      items(std::move(items_in)) {}

HidReportDescription::~HidReportDescription() = default;

bool HidReportDescription::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
HidCollectionInfo::HidCollectionInfo()
    : usage(),
      report_ids(),
      collection_type(),
      input_reports(),
      output_reports(),
      feature_reports(),
      children() {}

HidCollectionInfo::HidCollectionInfo(
    HidUsageAndPagePtr usage_in,
    const WTF::Vector<uint8_t>& report_ids_in,
    uint32_t collection_type_in,
    WTF::Vector<HidReportDescriptionPtr> input_reports_in,
    WTF::Vector<HidReportDescriptionPtr> output_reports_in,
    WTF::Vector<HidReportDescriptionPtr> feature_reports_in,
    WTF::Vector<HidCollectionInfoPtr> children_in)
    : usage(std::move(usage_in)),
      report_ids(std::move(report_ids_in)),
      collection_type(std::move(collection_type_in)),
      input_reports(std::move(input_reports_in)),
      output_reports(std::move(output_reports_in)),
      feature_reports(std::move(feature_reports_in)),
      children(std::move(children_in)) {}

HidCollectionInfo::~HidCollectionInfo() = default;

bool HidCollectionInfo::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
HidDeviceInfo::HidDeviceInfo()
    : guid(),
      vendor_id(),
      product_id(),
      product_name(),
      serial_number(),
      bus_type(),
      report_descriptor(),
      collections(),
      has_report_id(),
      max_input_report_size(),
      max_output_report_size(),
      max_feature_report_size(),
      device_node() {}

HidDeviceInfo::HidDeviceInfo(
    const WTF::String& guid_in,
    uint16_t vendor_id_in,
    uint16_t product_id_in,
    const WTF::String& product_name_in,
    const WTF::String& serial_number_in,
    HidBusType bus_type_in,
    const WTF::Vector<uint8_t>& report_descriptor_in,
    WTF::Vector<HidCollectionInfoPtr> collections_in,
    bool has_report_id_in,
    uint64_t max_input_report_size_in,
    uint64_t max_output_report_size_in,
    uint64_t max_feature_report_size_in,
    const WTF::String& device_node_in)
    : guid(std::move(guid_in)),
      vendor_id(std::move(vendor_id_in)),
      product_id(std::move(product_id_in)),
      product_name(std::move(product_name_in)),
      serial_number(std::move(serial_number_in)),
      bus_type(std::move(bus_type_in)),
      report_descriptor(std::move(report_descriptor_in)),
      collections(std::move(collections_in)),
      has_report_id(std::move(has_report_id_in)),
      max_input_report_size(std::move(max_input_report_size_in)),
      max_output_report_size(std::move(max_output_report_size_in)),
      max_feature_report_size(std::move(max_feature_report_size_in)),
      device_node(std::move(device_node_in)) {}

HidDeviceInfo::~HidDeviceInfo() = default;

bool HidDeviceInfo::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char HidManagerClient::Name_[] = "device.mojom.HidManagerClient";

HidManagerClientProxy::HidManagerClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void HidManagerClientProxy::DeviceAdded(
    HidDeviceInfoPtr in_device_info) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::HidManagerClient::DeviceAdded");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kHidManagerClient_DeviceAdded_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::HidManagerClient_DeviceAdded_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->device_info)::BaseType::BufferWriter
      device_info_writer;
  mojo::internal::Serialize<::device::mojom::HidDeviceInfoDataView>(
      in_device_info, buffer, &device_info_writer, &serialization_context);
  params->device_info.Set(
      device_info_writer.is_null() ? nullptr : device_info_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->device_info.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null device_info in HidManagerClient.DeviceAdded request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(HidManagerClient::Name_);
  message.set_method_name("DeviceAdded");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void HidManagerClientProxy::DeviceRemoved(
    HidDeviceInfoPtr in_device_info) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::HidManagerClient::DeviceRemoved");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kHidManagerClient_DeviceRemoved_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::HidManagerClient_DeviceRemoved_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->device_info)::BaseType::BufferWriter
      device_info_writer;
  mojo::internal::Serialize<::device::mojom::HidDeviceInfoDataView>(
      in_device_info, buffer, &device_info_writer, &serialization_context);
  params->device_info.Set(
      device_info_writer.is_null() ? nullptr : device_info_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->device_info.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null device_info in HidManagerClient.DeviceRemoved request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(HidManagerClient::Name_);
  message.set_method_name("DeviceRemoved");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool HidManagerClientStubDispatch::Accept(
    HidManagerClient* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kHidManagerClient_DeviceAdded_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::HidManagerClient::DeviceAdded",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::HidManagerClient_DeviceAdded_Params_Data* params =
          reinterpret_cast<internal::HidManagerClient_DeviceAdded_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      HidDeviceInfoPtr p_device_info{};
      HidManagerClient_DeviceAdded_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadDeviceInfo(&p_device_info))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            HidManagerClient::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->DeviceAdded(
std::move(p_device_info));
      return true;
    }
    case internal::kHidManagerClient_DeviceRemoved_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::HidManagerClient::DeviceRemoved",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::HidManagerClient_DeviceRemoved_Params_Data* params =
          reinterpret_cast<internal::HidManagerClient_DeviceRemoved_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      HidDeviceInfoPtr p_device_info{};
      HidManagerClient_DeviceRemoved_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadDeviceInfo(&p_device_info))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            HidManagerClient::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->DeviceRemoved(
std::move(p_device_info));
      return true;
    }
  }
  return false;
}

// static
bool HidManagerClientStubDispatch::AcceptWithResponder(
    HidManagerClient* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kHidManagerClient_DeviceAdded_Name: {
      break;
    }
    case internal::kHidManagerClient_DeviceRemoved_Name: {
      break;
    }
  }
  return false;
}

bool HidManagerClientRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "HidManagerClient RequestValidator");

  switch (message->header()->name) {
    case internal::kHidManagerClient_DeviceAdded_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::HidManagerClient_DeviceAdded_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kHidManagerClient_DeviceRemoved_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::HidManagerClient_DeviceRemoved_Params_Data>(
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

const char HidManager::Name_[] = "device.mojom.HidManager";

class HidManager_GetDevicesAndSetClient_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  HidManager_GetDevicesAndSetClient_ForwardToCallback(
      HidManager::GetDevicesAndSetClientCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  HidManager::GetDevicesAndSetClientCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(HidManager_GetDevicesAndSetClient_ForwardToCallback);
};

class HidManager_GetDevices_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  HidManager_GetDevices_ForwardToCallback(
      HidManager::GetDevicesCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  HidManager::GetDevicesCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(HidManager_GetDevices_ForwardToCallback);
};

class HidManager_Connect_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  HidManager_Connect_ForwardToCallback(
      HidManager::ConnectCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  HidManager::ConnectCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(HidManager_Connect_ForwardToCallback);
};

HidManagerProxy::HidManagerProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void HidManagerProxy::GetDevicesAndSetClient(
    HidManagerClientAssociatedPtrInfo in_client, GetDevicesAndSetClientCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::HidManager::GetDevicesAndSetClient");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kHidManager_GetDevicesAndSetClient_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::HidManager_GetDevicesAndSetClient_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::device::mojom::HidManagerClientAssociatedPtrInfoDataView>(
      in_client, &params->client, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->client),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_INTERFACE_ID,
      "invalid client in HidManager.GetDevicesAndSetClient request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(HidManager::Name_);
  message.set_method_name("GetDevicesAndSetClient");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new HidManager_GetDevicesAndSetClient_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void HidManagerProxy::GetDevices(
    GetDevicesCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::HidManager::GetDevices");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kHidManager_GetDevices_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::HidManager_GetDevices_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(HidManager::Name_);
  message.set_method_name("GetDevices");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new HidManager_GetDevices_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void HidManagerProxy::Connect(
    const WTF::String& in_device_guid, HidConnectionClientPtr in_connection_client, ConnectCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::HidManager::Connect");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kHidManager_Connect_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::HidManager_Connect_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->device_guid)::BaseType::BufferWriter
      device_guid_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_device_guid, buffer, &device_guid_writer, &serialization_context);
  params->device_guid.Set(
      device_guid_writer.is_null() ? nullptr : device_guid_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->device_guid.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null device_guid in HidManager.Connect request");
  mojo::internal::Serialize<::device::mojom::HidConnectionClientPtrDataView>(
      in_connection_client, &params->connection_client, &serialization_context);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(HidManager::Name_);
  message.set_method_name("Connect");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new HidManager_Connect_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class HidManager_GetDevicesAndSetClient_ProxyToResponder {
 public:
  static HidManager::GetDevicesAndSetClientCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<HidManager_GetDevicesAndSetClient_ProxyToResponder> proxy(
        new HidManager_GetDevicesAndSetClient_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&HidManager_GetDevicesAndSetClient_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~HidManager_GetDevicesAndSetClient_ProxyToResponder() {
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
  HidManager_GetDevicesAndSetClient_ProxyToResponder(
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
        << "HidManager::GetDevicesAndSetClientCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      WTF::Vector<HidDeviceInfoPtr> in_devices);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(HidManager_GetDevicesAndSetClient_ProxyToResponder);
};

bool HidManager_GetDevicesAndSetClient_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::HidManager::GetDevicesAndSetClientCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::HidManager_GetDevicesAndSetClient_ResponseParams_Data* params =
      reinterpret_cast<
          internal::HidManager_GetDevicesAndSetClient_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  WTF::Vector<HidDeviceInfoPtr> p_devices{};
  HidManager_GetDevicesAndSetClient_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadDevices(&p_devices))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        HidManager::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_devices));
  return true;
}

void HidManager_GetDevicesAndSetClient_ProxyToResponder::Run(
    WTF::Vector<HidDeviceInfoPtr> in_devices) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kHidManager_GetDevicesAndSetClient_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::HidManager_GetDevicesAndSetClient_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->devices)::BaseType::BufferWriter
      devices_writer;
  const mojo::internal::ContainerValidateParams devices_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::device::mojom::HidDeviceInfoDataView>>(
      in_devices, buffer, &devices_writer, &devices_validate_params,
      &serialization_context);
  params->devices.Set(
      devices_writer.is_null() ? nullptr : devices_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->devices.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null devices in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::HidManager::GetDevicesAndSetClientCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(HidManager::Name_);
  message.set_method_name("GetDevicesAndSetClient");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class HidManager_GetDevices_ProxyToResponder {
 public:
  static HidManager::GetDevicesCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<HidManager_GetDevices_ProxyToResponder> proxy(
        new HidManager_GetDevices_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&HidManager_GetDevices_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~HidManager_GetDevices_ProxyToResponder() {
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
  HidManager_GetDevices_ProxyToResponder(
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
        << "HidManager::GetDevicesCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      WTF::Vector<HidDeviceInfoPtr> in_devices);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(HidManager_GetDevices_ProxyToResponder);
};

bool HidManager_GetDevices_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::HidManager::GetDevicesCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::HidManager_GetDevices_ResponseParams_Data* params =
      reinterpret_cast<
          internal::HidManager_GetDevices_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  WTF::Vector<HidDeviceInfoPtr> p_devices{};
  HidManager_GetDevices_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadDevices(&p_devices))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        HidManager::Name_, 1, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_devices));
  return true;
}

void HidManager_GetDevices_ProxyToResponder::Run(
    WTF::Vector<HidDeviceInfoPtr> in_devices) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kHidManager_GetDevices_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::HidManager_GetDevices_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->devices)::BaseType::BufferWriter
      devices_writer;
  const mojo::internal::ContainerValidateParams devices_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::device::mojom::HidDeviceInfoDataView>>(
      in_devices, buffer, &devices_writer, &devices_validate_params,
      &serialization_context);
  params->devices.Set(
      devices_writer.is_null() ? nullptr : devices_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->devices.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null devices in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::HidManager::GetDevicesCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(HidManager::Name_);
  message.set_method_name("GetDevices");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class HidManager_Connect_ProxyToResponder {
 public:
  static HidManager::ConnectCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<HidManager_Connect_ProxyToResponder> proxy(
        new HidManager_Connect_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&HidManager_Connect_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~HidManager_Connect_ProxyToResponder() {
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
  HidManager_Connect_ProxyToResponder(
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
        << "HidManager::ConnectCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      HidConnectionPtr in_connection);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(HidManager_Connect_ProxyToResponder);
};

bool HidManager_Connect_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::HidManager::ConnectCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::HidManager_Connect_ResponseParams_Data* params =
      reinterpret_cast<
          internal::HidManager_Connect_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  HidConnectionPtr p_connection{};
  HidManager_Connect_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_connection =
      input_data_view.TakeConnection<decltype(p_connection)>();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        HidManager::Name_, 2, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_connection));
  return true;
}

void HidManager_Connect_ProxyToResponder::Run(
    HidConnectionPtr in_connection) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kHidManager_Connect_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::HidManager_Connect_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::device::mojom::HidConnectionPtrDataView>(
      in_connection, &params->connection, &serialization_context);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::HidManager::ConnectCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(HidManager::Name_);
  message.set_method_name("Connect");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool HidManagerStubDispatch::Accept(
    HidManager* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kHidManager_GetDevicesAndSetClient_Name: {
      break;
    }
    case internal::kHidManager_GetDevices_Name: {
      break;
    }
    case internal::kHidManager_Connect_Name: {
      break;
    }
  }
  return false;
}

// static
bool HidManagerStubDispatch::AcceptWithResponder(
    HidManager* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kHidManager_GetDevicesAndSetClient_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::HidManager::GetDevicesAndSetClient",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::HidManager_GetDevicesAndSetClient_Params_Data* params =
          reinterpret_cast<
              internal::HidManager_GetDevicesAndSetClient_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      HidManagerClientAssociatedPtrInfo p_client{};
      HidManager_GetDevicesAndSetClient_ParamsDataView input_data_view(params, &serialization_context);
      
      p_client =
          input_data_view.TakeClient<decltype(p_client)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            HidManager::Name_, 0, false);
        return false;
      }
      HidManager::GetDevicesAndSetClientCallback callback =
          HidManager_GetDevicesAndSetClient_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GetDevicesAndSetClient(
std::move(p_client), std::move(callback));
      return true;
    }
    case internal::kHidManager_GetDevices_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::HidManager::GetDevices",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::HidManager_GetDevices_Params_Data* params =
          reinterpret_cast<
              internal::HidManager_GetDevices_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      HidManager_GetDevices_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            HidManager::Name_, 1, false);
        return false;
      }
      HidManager::GetDevicesCallback callback =
          HidManager_GetDevices_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GetDevices(std::move(callback));
      return true;
    }
    case internal::kHidManager_Connect_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::HidManager::Connect",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::HidManager_Connect_Params_Data* params =
          reinterpret_cast<
              internal::HidManager_Connect_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WTF::String p_device_guid{};
      HidConnectionClientPtr p_connection_client{};
      HidManager_Connect_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadDeviceGuid(&p_device_guid))
        success = false;
      p_connection_client =
          input_data_view.TakeConnectionClient<decltype(p_connection_client)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            HidManager::Name_, 2, false);
        return false;
      }
      HidManager::ConnectCallback callback =
          HidManager_Connect_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Connect(
std::move(p_device_guid), 
std::move(p_connection_client), std::move(callback));
      return true;
    }
  }
  return false;
}

bool HidManagerRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "HidManager RequestValidator");

  switch (message->header()->name) {
    case internal::kHidManager_GetDevicesAndSetClient_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::HidManager_GetDevicesAndSetClient_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kHidManager_GetDevices_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::HidManager_GetDevices_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kHidManager_Connect_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::HidManager_Connect_Params_Data>(
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

bool HidManagerResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "HidManager ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kHidManager_GetDevicesAndSetClient_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::HidManager_GetDevicesAndSetClient_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kHidManager_GetDevices_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::HidManager_GetDevices_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kHidManager_Connect_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::HidManager_Connect_ResponseParams_Data>(
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
const char HidConnection::Name_[] = "device.mojom.HidConnection";

class HidConnection_Read_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  HidConnection_Read_ForwardToCallback(
      HidConnection::ReadCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  HidConnection::ReadCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(HidConnection_Read_ForwardToCallback);
};

class HidConnection_Write_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  HidConnection_Write_ForwardToCallback(
      HidConnection::WriteCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  HidConnection::WriteCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(HidConnection_Write_ForwardToCallback);
};

class HidConnection_GetFeatureReport_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  HidConnection_GetFeatureReport_ForwardToCallback(
      HidConnection::GetFeatureReportCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  HidConnection::GetFeatureReportCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(HidConnection_GetFeatureReport_ForwardToCallback);
};

class HidConnection_SendFeatureReport_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  HidConnection_SendFeatureReport_ForwardToCallback(
      HidConnection::SendFeatureReportCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  HidConnection::SendFeatureReportCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(HidConnection_SendFeatureReport_ForwardToCallback);
};

HidConnectionProxy::HidConnectionProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void HidConnectionProxy::Read(
    ReadCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::HidConnection::Read");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kHidConnection_Read_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::HidConnection_Read_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(HidConnection::Name_);
  message.set_method_name("Read");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new HidConnection_Read_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void HidConnectionProxy::Write(
    uint8_t in_report_id, const WTF::Vector<uint8_t>& in_buffer, WriteCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::HidConnection::Write");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kHidConnection_Write_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::HidConnection_Write_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->report_id = in_report_id;
  typename decltype(params->buffer)::BaseType::BufferWriter
      buffer_writer;
  const mojo::internal::ContainerValidateParams buffer_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      in_buffer, buffer, &buffer_writer, &buffer_validate_params,
      &serialization_context);
  params->buffer.Set(
      buffer_writer.is_null() ? nullptr : buffer_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->buffer.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null buffer in HidConnection.Write request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(HidConnection::Name_);
  message.set_method_name("Write");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new HidConnection_Write_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void HidConnectionProxy::GetFeatureReport(
    uint8_t in_report_id, GetFeatureReportCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::HidConnection::GetFeatureReport");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kHidConnection_GetFeatureReport_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::HidConnection_GetFeatureReport_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->report_id = in_report_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(HidConnection::Name_);
  message.set_method_name("GetFeatureReport");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new HidConnection_GetFeatureReport_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void HidConnectionProxy::SendFeatureReport(
    uint8_t in_report_id, const WTF::Vector<uint8_t>& in_buffer, SendFeatureReportCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::HidConnection::SendFeatureReport");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kHidConnection_SendFeatureReport_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::HidConnection_SendFeatureReport_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->report_id = in_report_id;
  typename decltype(params->buffer)::BaseType::BufferWriter
      buffer_writer;
  const mojo::internal::ContainerValidateParams buffer_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      in_buffer, buffer, &buffer_writer, &buffer_validate_params,
      &serialization_context);
  params->buffer.Set(
      buffer_writer.is_null() ? nullptr : buffer_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->buffer.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null buffer in HidConnection.SendFeatureReport request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(HidConnection::Name_);
  message.set_method_name("SendFeatureReport");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new HidConnection_SendFeatureReport_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class HidConnection_Read_ProxyToResponder {
 public:
  static HidConnection::ReadCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<HidConnection_Read_ProxyToResponder> proxy(
        new HidConnection_Read_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&HidConnection_Read_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~HidConnection_Read_ProxyToResponder() {
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
  HidConnection_Read_ProxyToResponder(
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
        << "HidConnection::ReadCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      bool in_success, uint8_t in_report_id, const base::Optional<WTF::Vector<uint8_t>>& in_buffer);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(HidConnection_Read_ProxyToResponder);
};

bool HidConnection_Read_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::HidConnection::ReadCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::HidConnection_Read_ResponseParams_Data* params =
      reinterpret_cast<
          internal::HidConnection_Read_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_success{};
  uint8_t p_report_id{};
  base::Optional<WTF::Vector<uint8_t>> p_buffer{};
  HidConnection_Read_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_success = input_data_view.success();
  p_report_id = input_data_view.report_id();
  if (!input_data_view.ReadBuffer(&p_buffer))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        HidConnection::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_success), 
std::move(p_report_id), 
std::move(p_buffer));
  return true;
}

void HidConnection_Read_ProxyToResponder::Run(
    bool in_success, uint8_t in_report_id, const base::Optional<WTF::Vector<uint8_t>>& in_buffer) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kHidConnection_Read_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::HidConnection_Read_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->success = in_success;
  params->report_id = in_report_id;
  typename decltype(params->buffer)::BaseType::BufferWriter
      buffer_writer;
  const mojo::internal::ContainerValidateParams buffer_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      in_buffer, buffer, &buffer_writer, &buffer_validate_params,
      &serialization_context);
  params->buffer.Set(
      buffer_writer.is_null() ? nullptr : buffer_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::HidConnection::ReadCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(HidConnection::Name_);
  message.set_method_name("Read");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class HidConnection_Write_ProxyToResponder {
 public:
  static HidConnection::WriteCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<HidConnection_Write_ProxyToResponder> proxy(
        new HidConnection_Write_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&HidConnection_Write_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~HidConnection_Write_ProxyToResponder() {
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
  HidConnection_Write_ProxyToResponder(
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
        << "HidConnection::WriteCallback was destroyed without "
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

  DISALLOW_COPY_AND_ASSIGN(HidConnection_Write_ProxyToResponder);
};

bool HidConnection_Write_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::HidConnection::WriteCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::HidConnection_Write_ResponseParams_Data* params =
      reinterpret_cast<
          internal::HidConnection_Write_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_success{};
  HidConnection_Write_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_success = input_data_view.success();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        HidConnection::Name_, 1, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_success));
  return true;
}

void HidConnection_Write_ProxyToResponder::Run(
    bool in_success) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kHidConnection_Write_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::HidConnection_Write_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->success = in_success;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::HidConnection::WriteCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(HidConnection::Name_);
  message.set_method_name("Write");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class HidConnection_GetFeatureReport_ProxyToResponder {
 public:
  static HidConnection::GetFeatureReportCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<HidConnection_GetFeatureReport_ProxyToResponder> proxy(
        new HidConnection_GetFeatureReport_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&HidConnection_GetFeatureReport_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~HidConnection_GetFeatureReport_ProxyToResponder() {
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
  HidConnection_GetFeatureReport_ProxyToResponder(
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
        << "HidConnection::GetFeatureReportCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      bool in_success, const base::Optional<WTF::Vector<uint8_t>>& in_buffer);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(HidConnection_GetFeatureReport_ProxyToResponder);
};

bool HidConnection_GetFeatureReport_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::HidConnection::GetFeatureReportCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::HidConnection_GetFeatureReport_ResponseParams_Data* params =
      reinterpret_cast<
          internal::HidConnection_GetFeatureReport_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_success{};
  base::Optional<WTF::Vector<uint8_t>> p_buffer{};
  HidConnection_GetFeatureReport_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_success = input_data_view.success();
  if (!input_data_view.ReadBuffer(&p_buffer))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        HidConnection::Name_, 2, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_success), 
std::move(p_buffer));
  return true;
}

void HidConnection_GetFeatureReport_ProxyToResponder::Run(
    bool in_success, const base::Optional<WTF::Vector<uint8_t>>& in_buffer) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kHidConnection_GetFeatureReport_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::HidConnection_GetFeatureReport_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->success = in_success;
  typename decltype(params->buffer)::BaseType::BufferWriter
      buffer_writer;
  const mojo::internal::ContainerValidateParams buffer_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      in_buffer, buffer, &buffer_writer, &buffer_validate_params,
      &serialization_context);
  params->buffer.Set(
      buffer_writer.is_null() ? nullptr : buffer_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::HidConnection::GetFeatureReportCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(HidConnection::Name_);
  message.set_method_name("GetFeatureReport");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class HidConnection_SendFeatureReport_ProxyToResponder {
 public:
  static HidConnection::SendFeatureReportCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<HidConnection_SendFeatureReport_ProxyToResponder> proxy(
        new HidConnection_SendFeatureReport_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&HidConnection_SendFeatureReport_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~HidConnection_SendFeatureReport_ProxyToResponder() {
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
  HidConnection_SendFeatureReport_ProxyToResponder(
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
        << "HidConnection::SendFeatureReportCallback was destroyed without "
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

  DISALLOW_COPY_AND_ASSIGN(HidConnection_SendFeatureReport_ProxyToResponder);
};

bool HidConnection_SendFeatureReport_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::HidConnection::SendFeatureReportCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::HidConnection_SendFeatureReport_ResponseParams_Data* params =
      reinterpret_cast<
          internal::HidConnection_SendFeatureReport_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_success{};
  HidConnection_SendFeatureReport_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_success = input_data_view.success();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        HidConnection::Name_, 3, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_success));
  return true;
}

void HidConnection_SendFeatureReport_ProxyToResponder::Run(
    bool in_success) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kHidConnection_SendFeatureReport_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::HidConnection_SendFeatureReport_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->success = in_success;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::HidConnection::SendFeatureReportCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(HidConnection::Name_);
  message.set_method_name("SendFeatureReport");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool HidConnectionStubDispatch::Accept(
    HidConnection* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kHidConnection_Read_Name: {
      break;
    }
    case internal::kHidConnection_Write_Name: {
      break;
    }
    case internal::kHidConnection_GetFeatureReport_Name: {
      break;
    }
    case internal::kHidConnection_SendFeatureReport_Name: {
      break;
    }
  }
  return false;
}

// static
bool HidConnectionStubDispatch::AcceptWithResponder(
    HidConnection* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kHidConnection_Read_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::HidConnection::Read",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::HidConnection_Read_Params_Data* params =
          reinterpret_cast<
              internal::HidConnection_Read_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      HidConnection_Read_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            HidConnection::Name_, 0, false);
        return false;
      }
      HidConnection::ReadCallback callback =
          HidConnection_Read_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Read(std::move(callback));
      return true;
    }
    case internal::kHidConnection_Write_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::HidConnection::Write",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::HidConnection_Write_Params_Data* params =
          reinterpret_cast<
              internal::HidConnection_Write_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint8_t p_report_id{};
      WTF::Vector<uint8_t> p_buffer{};
      HidConnection_Write_ParamsDataView input_data_view(params, &serialization_context);
      
      p_report_id = input_data_view.report_id();
      if (!input_data_view.ReadBuffer(&p_buffer))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            HidConnection::Name_, 1, false);
        return false;
      }
      HidConnection::WriteCallback callback =
          HidConnection_Write_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Write(
std::move(p_report_id), 
std::move(p_buffer), std::move(callback));
      return true;
    }
    case internal::kHidConnection_GetFeatureReport_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::HidConnection::GetFeatureReport",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::HidConnection_GetFeatureReport_Params_Data* params =
          reinterpret_cast<
              internal::HidConnection_GetFeatureReport_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint8_t p_report_id{};
      HidConnection_GetFeatureReport_ParamsDataView input_data_view(params, &serialization_context);
      
      p_report_id = input_data_view.report_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            HidConnection::Name_, 2, false);
        return false;
      }
      HidConnection::GetFeatureReportCallback callback =
          HidConnection_GetFeatureReport_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GetFeatureReport(
std::move(p_report_id), std::move(callback));
      return true;
    }
    case internal::kHidConnection_SendFeatureReport_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::HidConnection::SendFeatureReport",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::HidConnection_SendFeatureReport_Params_Data* params =
          reinterpret_cast<
              internal::HidConnection_SendFeatureReport_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint8_t p_report_id{};
      WTF::Vector<uint8_t> p_buffer{};
      HidConnection_SendFeatureReport_ParamsDataView input_data_view(params, &serialization_context);
      
      p_report_id = input_data_view.report_id();
      if (!input_data_view.ReadBuffer(&p_buffer))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            HidConnection::Name_, 3, false);
        return false;
      }
      HidConnection::SendFeatureReportCallback callback =
          HidConnection_SendFeatureReport_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SendFeatureReport(
std::move(p_report_id), 
std::move(p_buffer), std::move(callback));
      return true;
    }
  }
  return false;
}

bool HidConnectionRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "HidConnection RequestValidator");

  switch (message->header()->name) {
    case internal::kHidConnection_Read_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::HidConnection_Read_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kHidConnection_Write_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::HidConnection_Write_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kHidConnection_GetFeatureReport_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::HidConnection_GetFeatureReport_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kHidConnection_SendFeatureReport_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::HidConnection_SendFeatureReport_Params_Data>(
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

bool HidConnectionResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "HidConnection ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kHidConnection_Read_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::HidConnection_Read_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kHidConnection_Write_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::HidConnection_Write_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kHidConnection_GetFeatureReport_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::HidConnection_GetFeatureReport_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kHidConnection_SendFeatureReport_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::HidConnection_SendFeatureReport_ResponseParams_Data>(
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
const char HidConnectionClient::Name_[] = "device.mojom.HidConnectionClient";

HidConnectionClientProxy::HidConnectionClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void HidConnectionClientProxy::OnInputReport(
    uint8_t in_report_id, const WTF::Vector<uint8_t>& in_buffer) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::HidConnectionClient::OnInputReport");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kHidConnectionClient_OnInputReport_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::HidConnectionClient_OnInputReport_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->report_id = in_report_id;
  typename decltype(params->buffer)::BaseType::BufferWriter
      buffer_writer;
  const mojo::internal::ContainerValidateParams buffer_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      in_buffer, buffer, &buffer_writer, &buffer_validate_params,
      &serialization_context);
  params->buffer.Set(
      buffer_writer.is_null() ? nullptr : buffer_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->buffer.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null buffer in HidConnectionClient.OnInputReport request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(HidConnectionClient::Name_);
  message.set_method_name("OnInputReport");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool HidConnectionClientStubDispatch::Accept(
    HidConnectionClient* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kHidConnectionClient_OnInputReport_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::HidConnectionClient::OnInputReport",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::HidConnectionClient_OnInputReport_Params_Data* params =
          reinterpret_cast<internal::HidConnectionClient_OnInputReport_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint8_t p_report_id{};
      WTF::Vector<uint8_t> p_buffer{};
      HidConnectionClient_OnInputReport_ParamsDataView input_data_view(params, &serialization_context);
      
      p_report_id = input_data_view.report_id();
      if (!input_data_view.ReadBuffer(&p_buffer))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            HidConnectionClient::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnInputReport(
std::move(p_report_id), 
std::move(p_buffer));
      return true;
    }
  }
  return false;
}

// static
bool HidConnectionClientStubDispatch::AcceptWithResponder(
    HidConnectionClient* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kHidConnectionClient_OnInputReport_Name: {
      break;
    }
  }
  return false;
}

bool HidConnectionClientRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "HidConnectionClient RequestValidator");

  switch (message->header()->name) {
    case internal::kHidConnectionClient_OnInputReport_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::HidConnectionClient_OnInputReport_Params_Data>(
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
bool StructTraits<::device::mojom::blink::HidUsageAndPage::DataView, ::device::mojom::blink::HidUsageAndPagePtr>::Read(
    ::device::mojom::blink::HidUsageAndPage::DataView input,
    ::device::mojom::blink::HidUsageAndPagePtr* output) {
  bool success = true;
  ::device::mojom::blink::HidUsageAndPagePtr result(::device::mojom::blink::HidUsageAndPage::New());
  
      result->usage = input.usage();
      result->usage_page = input.usage_page();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::device::mojom::blink::HidReportItem::DataView, ::device::mojom::blink::HidReportItemPtr>::Read(
    ::device::mojom::blink::HidReportItem::DataView input,
    ::device::mojom::blink::HidReportItemPtr* output) {
  bool success = true;
  ::device::mojom::blink::HidReportItemPtr result(::device::mojom::blink::HidReportItem::New());
  
      result->is_range = input.is_range();
      result->is_constant = input.is_constant();
      result->is_variable = input.is_variable();
      result->is_relative = input.is_relative();
      result->wrap = input.wrap();
      result->is_non_linear = input.is_non_linear();
      result->no_preferred_state = input.no_preferred_state();
      result->has_null_position = input.has_null_position();
      result->is_volatile = input.is_volatile();
      result->is_buffered_bytes = input.is_buffered_bytes();
      if (!input.ReadUsages(&result->usages))
        success = false;
      if (!input.ReadUsageMinimum(&result->usage_minimum))
        success = false;
      if (!input.ReadUsageMaximum(&result->usage_maximum))
        success = false;
      result->designator_minimum = input.designator_minimum();
      result->designator_maximum = input.designator_maximum();
      result->string_minimum = input.string_minimum();
      result->string_maximum = input.string_maximum();
      result->logical_minimum = input.logical_minimum();
      result->logical_maximum = input.logical_maximum();
      result->physical_minimum = input.physical_minimum();
      result->physical_maximum = input.physical_maximum();
      result->unit_exponent = input.unit_exponent();
      result->unit = input.unit();
      result->report_size = input.report_size();
      result->report_count = input.report_count();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::device::mojom::blink::HidReportDescription::DataView, ::device::mojom::blink::HidReportDescriptionPtr>::Read(
    ::device::mojom::blink::HidReportDescription::DataView input,
    ::device::mojom::blink::HidReportDescriptionPtr* output) {
  bool success = true;
  ::device::mojom::blink::HidReportDescriptionPtr result(::device::mojom::blink::HidReportDescription::New());
  
      result->report_id = input.report_id();
      if (!input.ReadItems(&result->items))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::device::mojom::blink::HidCollectionInfo::DataView, ::device::mojom::blink::HidCollectionInfoPtr>::Read(
    ::device::mojom::blink::HidCollectionInfo::DataView input,
    ::device::mojom::blink::HidCollectionInfoPtr* output) {
  bool success = true;
  ::device::mojom::blink::HidCollectionInfoPtr result(::device::mojom::blink::HidCollectionInfo::New());
  
      if (!input.ReadUsage(&result->usage))
        success = false;
      if (!input.ReadReportIds(&result->report_ids))
        success = false;
      result->collection_type = input.collection_type();
      if (!input.ReadInputReports(&result->input_reports))
        success = false;
      if (!input.ReadOutputReports(&result->output_reports))
        success = false;
      if (!input.ReadFeatureReports(&result->feature_reports))
        success = false;
      if (!input.ReadChildren(&result->children))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::device::mojom::blink::HidDeviceInfo::DataView, ::device::mojom::blink::HidDeviceInfoPtr>::Read(
    ::device::mojom::blink::HidDeviceInfo::DataView input,
    ::device::mojom::blink::HidDeviceInfoPtr* output) {
  bool success = true;
  ::device::mojom::blink::HidDeviceInfoPtr result(::device::mojom::blink::HidDeviceInfo::New());
  
      if (!input.ReadGuid(&result->guid))
        success = false;
      result->vendor_id = input.vendor_id();
      result->product_id = input.product_id();
      if (!input.ReadProductName(&result->product_name))
        success = false;
      if (!input.ReadSerialNumber(&result->serial_number))
        success = false;
      if (!input.ReadBusType(&result->bus_type))
        success = false;
      if (!input.ReadReportDescriptor(&result->report_descriptor))
        success = false;
      if (!input.ReadCollections(&result->collections))
        success = false;
      result->has_report_id = input.has_report_id();
      result->max_input_report_size = input.max_input_report_size();
      result->max_output_report_size = input.max_output_report_size();
      result->max_feature_report_size = input.max_feature_report_size();
      if (!input.ReadDeviceNode(&result->device_node))
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