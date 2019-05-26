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

#include "device/usb/public/mojom/device_manager_client.mojom.h"

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

#include "device/usb/public/mojom/device_manager_client.mojom-params-data.h"
#include "device/usb/public/mojom/device_manager_client.mojom-shared-message-ids.h"

#include "device/usb/public/mojom/device_manager_client.mojom-import-headers.h"


#ifndef DEVICE_USB_PUBLIC_MOJOM_DEVICE_MANAGER_CLIENT_MOJOM_JUMBO_H_
#define DEVICE_USB_PUBLIC_MOJOM_DEVICE_MANAGER_CLIENT_MOJOM_JUMBO_H_
#include "mojo/public/cpp/base/string16_mojom_traits.h"
#include "url/mojom/url_gurl_mojom_traits.h"
#endif
namespace device {
namespace mojom {
const char UsbDeviceManagerClient::Name_[] = "device.mojom.UsbDeviceManagerClient";

UsbDeviceManagerClientProxy::UsbDeviceManagerClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void UsbDeviceManagerClientProxy::OnDeviceAdded(
    ::device::mojom::UsbDeviceInfoPtr in_device_info) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::UsbDeviceManagerClient::OnDeviceAdded");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kUsbDeviceManagerClient_OnDeviceAdded_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::UsbDeviceManagerClient_OnDeviceAdded_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->device_info)::BaseType::BufferWriter
      device_info_writer;
  mojo::internal::Serialize<::device::mojom::UsbDeviceInfoDataView>(
      in_device_info, buffer, &device_info_writer, &serialization_context);
  params->device_info.Set(
      device_info_writer.is_null() ? nullptr : device_info_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->device_info.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null device_info in UsbDeviceManagerClient.OnDeviceAdded request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(UsbDeviceManagerClient::Name_);
  message.set_method_name("OnDeviceAdded");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void UsbDeviceManagerClientProxy::OnDeviceRemoved(
    ::device::mojom::UsbDeviceInfoPtr in_device_info) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::UsbDeviceManagerClient::OnDeviceRemoved");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kUsbDeviceManagerClient_OnDeviceRemoved_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::UsbDeviceManagerClient_OnDeviceRemoved_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->device_info)::BaseType::BufferWriter
      device_info_writer;
  mojo::internal::Serialize<::device::mojom::UsbDeviceInfoDataView>(
      in_device_info, buffer, &device_info_writer, &serialization_context);
  params->device_info.Set(
      device_info_writer.is_null() ? nullptr : device_info_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->device_info.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null device_info in UsbDeviceManagerClient.OnDeviceRemoved request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(UsbDeviceManagerClient::Name_);
  message.set_method_name("OnDeviceRemoved");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool UsbDeviceManagerClientStubDispatch::Accept(
    UsbDeviceManagerClient* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kUsbDeviceManagerClient_OnDeviceAdded_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::UsbDeviceManagerClient::OnDeviceAdded",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::UsbDeviceManagerClient_OnDeviceAdded_Params_Data* params =
          reinterpret_cast<internal::UsbDeviceManagerClient_OnDeviceAdded_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::device::mojom::UsbDeviceInfoPtr p_device_info{};
      UsbDeviceManagerClient_OnDeviceAdded_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadDeviceInfo(&p_device_info))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            UsbDeviceManagerClient::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnDeviceAdded(
std::move(p_device_info));
      return true;
    }
    case internal::kUsbDeviceManagerClient_OnDeviceRemoved_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::UsbDeviceManagerClient::OnDeviceRemoved",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::UsbDeviceManagerClient_OnDeviceRemoved_Params_Data* params =
          reinterpret_cast<internal::UsbDeviceManagerClient_OnDeviceRemoved_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::device::mojom::UsbDeviceInfoPtr p_device_info{};
      UsbDeviceManagerClient_OnDeviceRemoved_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadDeviceInfo(&p_device_info))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            UsbDeviceManagerClient::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnDeviceRemoved(
std::move(p_device_info));
      return true;
    }
  }
  return false;
}

// static
bool UsbDeviceManagerClientStubDispatch::AcceptWithResponder(
    UsbDeviceManagerClient* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kUsbDeviceManagerClient_OnDeviceAdded_Name: {
      break;
    }
    case internal::kUsbDeviceManagerClient_OnDeviceRemoved_Name: {
      break;
    }
  }
  return false;
}

bool UsbDeviceManagerClientRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "UsbDeviceManagerClient RequestValidator");

  switch (message->header()->name) {
    case internal::kUsbDeviceManagerClient_OnDeviceAdded_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::UsbDeviceManagerClient_OnDeviceAdded_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kUsbDeviceManagerClient_OnDeviceRemoved_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::UsbDeviceManagerClient_OnDeviceRemoved_Params_Data>(
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

}  // namespace mojom
}  // namespace device

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif