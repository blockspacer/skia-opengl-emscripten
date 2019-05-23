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

#include "device/usb/public/mojom/device_manager.mojom.h"

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

#include "device/usb/public/mojom/device_manager.mojom-params-data.h"
#include "device/usb/public/mojom/device_manager.mojom-shared-message-ids.h"

#include "device/usb/public/mojom/device_manager.mojom-import-headers.h"


#ifndef DEVICE_USB_PUBLIC_MOJOM_DEVICE_MANAGER_MOJOM_JUMBO_H_
#define DEVICE_USB_PUBLIC_MOJOM_DEVICE_MANAGER_MOJOM_JUMBO_H_
#include "mojo/public/cpp/base/string16_mojom_traits.h"
#include "url/mojom/url_gurl_mojom_traits.h"
#endif
namespace device {
namespace mojom {
const char UsbDeviceManager::Name_[] = "device.mojom.UsbDeviceManager";

class UsbDeviceManager_EnumerateDevicesAndSetClient_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  UsbDeviceManager_EnumerateDevicesAndSetClient_ForwardToCallback(
      UsbDeviceManager::EnumerateDevicesAndSetClientCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  UsbDeviceManager::EnumerateDevicesAndSetClientCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(UsbDeviceManager_EnumerateDevicesAndSetClient_ForwardToCallback);
};

class UsbDeviceManager_GetDevices_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  UsbDeviceManager_GetDevices_ForwardToCallback(
      UsbDeviceManager::GetDevicesCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  UsbDeviceManager::GetDevicesCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(UsbDeviceManager_GetDevices_ForwardToCallback);
};

UsbDeviceManagerProxy::UsbDeviceManagerProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void UsbDeviceManagerProxy::EnumerateDevicesAndSetClient(
    ::device::mojom::UsbDeviceManagerClientAssociatedPtrInfo in_client, EnumerateDevicesAndSetClientCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::UsbDeviceManager::EnumerateDevicesAndSetClient");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kUsbDeviceManager_EnumerateDevicesAndSetClient_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::UsbDeviceManager_EnumerateDevicesAndSetClient_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::device::mojom::UsbDeviceManagerClientAssociatedPtrInfoDataView>(
      in_client, &params->client, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->client),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_INTERFACE_ID,
      "invalid client in UsbDeviceManager.EnumerateDevicesAndSetClient request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(UsbDeviceManager::Name_);
  message.set_method_name("EnumerateDevicesAndSetClient");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new UsbDeviceManager_EnumerateDevicesAndSetClient_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void UsbDeviceManagerProxy::GetDevices(
    ::device::mojom::UsbEnumerationOptionsPtr in_options, GetDevicesCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::UsbDeviceManager::GetDevices");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kUsbDeviceManager_GetDevices_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::UsbDeviceManager_GetDevices_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->options)::BaseType::BufferWriter
      options_writer;
  mojo::internal::Serialize<::device::mojom::UsbEnumerationOptionsDataView>(
      in_options, buffer, &options_writer, &serialization_context);
  params->options.Set(
      options_writer.is_null() ? nullptr : options_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(UsbDeviceManager::Name_);
  message.set_method_name("GetDevices");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new UsbDeviceManager_GetDevices_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void UsbDeviceManagerProxy::GetDevice(
    const std::string& in_guid, ::device::mojom::UsbDeviceRequest in_device_request, ::device::mojom::UsbDeviceClientPtr in_device_client) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::UsbDeviceManager::GetDevice");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kUsbDeviceManager_GetDevice_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::UsbDeviceManager_GetDevice_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->guid)::BaseType::BufferWriter
      guid_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_guid, buffer, &guid_writer, &serialization_context);
  params->guid.Set(
      guid_writer.is_null() ? nullptr : guid_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->guid.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null guid in UsbDeviceManager.GetDevice request");
  mojo::internal::Serialize<::device::mojom::UsbDeviceRequestDataView>(
      in_device_request, &params->device_request, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->device_request),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid device_request in UsbDeviceManager.GetDevice request");
  mojo::internal::Serialize<::device::mojom::UsbDeviceClientPtrDataView>(
      in_device_client, &params->device_client, &serialization_context);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(UsbDeviceManager::Name_);
  message.set_method_name("GetDevice");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void UsbDeviceManagerProxy::SetClient(
    ::device::mojom::UsbDeviceManagerClientAssociatedPtrInfo in_client) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::UsbDeviceManager::SetClient");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kUsbDeviceManager_SetClient_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::UsbDeviceManager_SetClient_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::device::mojom::UsbDeviceManagerClientAssociatedPtrInfoDataView>(
      in_client, &params->client, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->client),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_INTERFACE_ID,
      "invalid client in UsbDeviceManager.SetClient request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(UsbDeviceManager::Name_);
  message.set_method_name("SetClient");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class UsbDeviceManager_EnumerateDevicesAndSetClient_ProxyToResponder {
 public:
  static UsbDeviceManager::EnumerateDevicesAndSetClientCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<UsbDeviceManager_EnumerateDevicesAndSetClient_ProxyToResponder> proxy(
        new UsbDeviceManager_EnumerateDevicesAndSetClient_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&UsbDeviceManager_EnumerateDevicesAndSetClient_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~UsbDeviceManager_EnumerateDevicesAndSetClient_ProxyToResponder() {
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
  UsbDeviceManager_EnumerateDevicesAndSetClient_ProxyToResponder(
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
        << "UsbDeviceManager::EnumerateDevicesAndSetClientCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      std::vector<::device::mojom::UsbDeviceInfoPtr> in_results);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(UsbDeviceManager_EnumerateDevicesAndSetClient_ProxyToResponder);
};

bool UsbDeviceManager_EnumerateDevicesAndSetClient_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::UsbDeviceManager::EnumerateDevicesAndSetClientCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::UsbDeviceManager_EnumerateDevicesAndSetClient_ResponseParams_Data* params =
      reinterpret_cast<
          internal::UsbDeviceManager_EnumerateDevicesAndSetClient_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  std::vector<::device::mojom::UsbDeviceInfoPtr> p_results{};
  UsbDeviceManager_EnumerateDevicesAndSetClient_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadResults(&p_results))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        UsbDeviceManager::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_results));
  return true;
}

void UsbDeviceManager_EnumerateDevicesAndSetClient_ProxyToResponder::Run(
    std::vector<::device::mojom::UsbDeviceInfoPtr> in_results) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kUsbDeviceManager_EnumerateDevicesAndSetClient_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::UsbDeviceManager_EnumerateDevicesAndSetClient_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->results)::BaseType::BufferWriter
      results_writer;
  const mojo::internal::ContainerValidateParams results_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::device::mojom::UsbDeviceInfoDataView>>(
      in_results, buffer, &results_writer, &results_validate_params,
      &serialization_context);
  params->results.Set(
      results_writer.is_null() ? nullptr : results_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->results.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null results in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::UsbDeviceManager::EnumerateDevicesAndSetClientCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(UsbDeviceManager::Name_);
  message.set_method_name("EnumerateDevicesAndSetClient");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class UsbDeviceManager_GetDevices_ProxyToResponder {
 public:
  static UsbDeviceManager::GetDevicesCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<UsbDeviceManager_GetDevices_ProxyToResponder> proxy(
        new UsbDeviceManager_GetDevices_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&UsbDeviceManager_GetDevices_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~UsbDeviceManager_GetDevices_ProxyToResponder() {
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
  UsbDeviceManager_GetDevices_ProxyToResponder(
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
        << "UsbDeviceManager::GetDevicesCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      std::vector<::device::mojom::UsbDeviceInfoPtr> in_results);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(UsbDeviceManager_GetDevices_ProxyToResponder);
};

bool UsbDeviceManager_GetDevices_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::UsbDeviceManager::GetDevicesCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::UsbDeviceManager_GetDevices_ResponseParams_Data* params =
      reinterpret_cast<
          internal::UsbDeviceManager_GetDevices_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  std::vector<::device::mojom::UsbDeviceInfoPtr> p_results{};
  UsbDeviceManager_GetDevices_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadResults(&p_results))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        UsbDeviceManager::Name_, 1, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_results));
  return true;
}

void UsbDeviceManager_GetDevices_ProxyToResponder::Run(
    std::vector<::device::mojom::UsbDeviceInfoPtr> in_results) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kUsbDeviceManager_GetDevices_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::UsbDeviceManager_GetDevices_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->results)::BaseType::BufferWriter
      results_writer;
  const mojo::internal::ContainerValidateParams results_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::device::mojom::UsbDeviceInfoDataView>>(
      in_results, buffer, &results_writer, &results_validate_params,
      &serialization_context);
  params->results.Set(
      results_writer.is_null() ? nullptr : results_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->results.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null results in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::UsbDeviceManager::GetDevicesCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(UsbDeviceManager::Name_);
  message.set_method_name("GetDevices");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool UsbDeviceManagerStubDispatch::Accept(
    UsbDeviceManager* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kUsbDeviceManager_EnumerateDevicesAndSetClient_Name: {
      break;
    }
    case internal::kUsbDeviceManager_GetDevices_Name: {
      break;
    }
    case internal::kUsbDeviceManager_GetDevice_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::UsbDeviceManager::GetDevice",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::UsbDeviceManager_GetDevice_Params_Data* params =
          reinterpret_cast<internal::UsbDeviceManager_GetDevice_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_guid{};
      ::device::mojom::UsbDeviceRequest p_device_request{};
      ::device::mojom::UsbDeviceClientPtr p_device_client{};
      UsbDeviceManager_GetDevice_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadGuid(&p_guid))
        success = false;
      p_device_request =
          input_data_view.TakeDeviceRequest<decltype(p_device_request)>();
      p_device_client =
          input_data_view.TakeDeviceClient<decltype(p_device_client)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            UsbDeviceManager::Name_, 2, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GetDevice(
std::move(p_guid), 
std::move(p_device_request), 
std::move(p_device_client));
      return true;
    }
    case internal::kUsbDeviceManager_SetClient_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::UsbDeviceManager::SetClient",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::UsbDeviceManager_SetClient_Params_Data* params =
          reinterpret_cast<internal::UsbDeviceManager_SetClient_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::device::mojom::UsbDeviceManagerClientAssociatedPtrInfo p_client{};
      UsbDeviceManager_SetClient_ParamsDataView input_data_view(params, &serialization_context);
      
      p_client =
          input_data_view.TakeClient<decltype(p_client)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            UsbDeviceManager::Name_, 3, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SetClient(
std::move(p_client));
      return true;
    }
  }
  return false;
}

// static
bool UsbDeviceManagerStubDispatch::AcceptWithResponder(
    UsbDeviceManager* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kUsbDeviceManager_EnumerateDevicesAndSetClient_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::UsbDeviceManager::EnumerateDevicesAndSetClient",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::UsbDeviceManager_EnumerateDevicesAndSetClient_Params_Data* params =
          reinterpret_cast<
              internal::UsbDeviceManager_EnumerateDevicesAndSetClient_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::device::mojom::UsbDeviceManagerClientAssociatedPtrInfo p_client{};
      UsbDeviceManager_EnumerateDevicesAndSetClient_ParamsDataView input_data_view(params, &serialization_context);
      
      p_client =
          input_data_view.TakeClient<decltype(p_client)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            UsbDeviceManager::Name_, 0, false);
        return false;
      }
      UsbDeviceManager::EnumerateDevicesAndSetClientCallback callback =
          UsbDeviceManager_EnumerateDevicesAndSetClient_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->EnumerateDevicesAndSetClient(
std::move(p_client), std::move(callback));
      return true;
    }
    case internal::kUsbDeviceManager_GetDevices_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::UsbDeviceManager::GetDevices",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::UsbDeviceManager_GetDevices_Params_Data* params =
          reinterpret_cast<
              internal::UsbDeviceManager_GetDevices_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::device::mojom::UsbEnumerationOptionsPtr p_options{};
      UsbDeviceManager_GetDevices_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadOptions(&p_options))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            UsbDeviceManager::Name_, 1, false);
        return false;
      }
      UsbDeviceManager::GetDevicesCallback callback =
          UsbDeviceManager_GetDevices_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GetDevices(
std::move(p_options), std::move(callback));
      return true;
    }
    case internal::kUsbDeviceManager_GetDevice_Name: {
      break;
    }
    case internal::kUsbDeviceManager_SetClient_Name: {
      break;
    }
  }
  return false;
}

bool UsbDeviceManagerRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "UsbDeviceManager RequestValidator");

  switch (message->header()->name) {
    case internal::kUsbDeviceManager_EnumerateDevicesAndSetClient_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::UsbDeviceManager_EnumerateDevicesAndSetClient_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kUsbDeviceManager_GetDevices_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::UsbDeviceManager_GetDevices_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kUsbDeviceManager_GetDevice_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::UsbDeviceManager_GetDevice_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kUsbDeviceManager_SetClient_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::UsbDeviceManager_SetClient_Params_Data>(
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

bool UsbDeviceManagerResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "UsbDeviceManager ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kUsbDeviceManager_EnumerateDevicesAndSetClient_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::UsbDeviceManager_EnumerateDevicesAndSetClient_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kUsbDeviceManager_GetDevices_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::UsbDeviceManager_GetDevices_ResponseParams_Data>(
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