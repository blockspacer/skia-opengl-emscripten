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

#include "services/device/public/mojom/bluetooth_system.mojom.h"

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

#include "services/device/public/mojom/bluetooth_system.mojom-params-data.h"
#include "services/device/public/mojom/bluetooth_system.mojom-shared-message-ids.h"

#include "services/device/public/mojom/bluetooth_system.mojom-import-headers.h"


#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_BLUETOOTH_SYSTEM_MOJOM_JUMBO_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_BLUETOOTH_SYSTEM_MOJOM_JUMBO_H_
#include "services/device/public/cpp/bluetooth/bluetooth_system_mojom_traits.h"
#endif
namespace device {
namespace mojom {
BluetoothAddress::BluetoothAddress()
    : address() {}

BluetoothAddress::BluetoothAddress(
    const std::vector<uint8_t>& address_in)
    : address(std::move(address_in)) {}

BluetoothAddress::~BluetoothAddress() = default;

bool BluetoothAddress::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
BluetoothDeviceInfo::BluetoothDeviceInfo()
    : address(),
      name(),
      connection_state(),
      is_paired(),
      device_type() {}

BluetoothDeviceInfo::BluetoothDeviceInfo(
    const std::array<uint8_t, 6>& address_in,
    const base::Optional<std::string>& name_in,
    BluetoothDeviceInfo::ConnectionState connection_state_in,
    bool is_paired_in,
    BluetoothDeviceInfo::DeviceType device_type_in)
    : address(std::move(address_in)),
      name(std::move(name_in)),
      connection_state(std::move(connection_state_in)),
      is_paired(std::move(is_paired_in)),
      device_type(std::move(device_type_in)) {}

BluetoothDeviceInfo::~BluetoothDeviceInfo() = default;

bool BluetoothDeviceInfo::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char BluetoothSystemFactory::Name_[] = "device.mojom.BluetoothSystemFactory";

BluetoothSystemFactoryProxy::BluetoothSystemFactoryProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void BluetoothSystemFactoryProxy::Create(
    BluetoothSystemRequest in_system, BluetoothSystemClientPtr in_system_client) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::BluetoothSystemFactory::Create");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kBluetoothSystemFactory_Create_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::BluetoothSystemFactory_Create_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::device::mojom::BluetoothSystemRequestDataView>(
      in_system, &params->system, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->system),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid system in BluetoothSystemFactory.Create request");
  mojo::internal::Serialize<::device::mojom::BluetoothSystemClientPtrDataView>(
      in_system_client, &params->system_client, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->system_client),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid system_client in BluetoothSystemFactory.Create request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(BluetoothSystemFactory::Name_);
  message.set_method_name("Create");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool BluetoothSystemFactoryStubDispatch::Accept(
    BluetoothSystemFactory* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kBluetoothSystemFactory_Create_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::BluetoothSystemFactory::Create",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::BluetoothSystemFactory_Create_Params_Data* params =
          reinterpret_cast<internal::BluetoothSystemFactory_Create_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      BluetoothSystemRequest p_system{};
      BluetoothSystemClientPtr p_system_client{};
      BluetoothSystemFactory_Create_ParamsDataView input_data_view(params, &serialization_context);
      
      p_system =
          input_data_view.TakeSystem<decltype(p_system)>();
      p_system_client =
          input_data_view.TakeSystemClient<decltype(p_system_client)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            BluetoothSystemFactory::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Create(
std::move(p_system), 
std::move(p_system_client));
      return true;
    }
  }
  return false;
}

// static
bool BluetoothSystemFactoryStubDispatch::AcceptWithResponder(
    BluetoothSystemFactory* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kBluetoothSystemFactory_Create_Name: {
      break;
    }
  }
  return false;
}

bool BluetoothSystemFactoryRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "BluetoothSystemFactory RequestValidator");

  switch (message->header()->name) {
    case internal::kBluetoothSystemFactory_Create_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::BluetoothSystemFactory_Create_Params_Data>(
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

const char BluetoothSystem::Name_[] = "device.mojom.BluetoothSystem";

class BluetoothSystem_GetState_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  BluetoothSystem_GetState_ForwardToCallback(
      BluetoothSystem::GetStateCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  BluetoothSystem::GetStateCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(BluetoothSystem_GetState_ForwardToCallback);
};

class BluetoothSystem_SetPowered_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  BluetoothSystem_SetPowered_ForwardToCallback(
      BluetoothSystem::SetPoweredCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  BluetoothSystem::SetPoweredCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(BluetoothSystem_SetPowered_ForwardToCallback);
};

class BluetoothSystem_GetScanState_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  BluetoothSystem_GetScanState_ForwardToCallback(
      BluetoothSystem::GetScanStateCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  BluetoothSystem::GetScanStateCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(BluetoothSystem_GetScanState_ForwardToCallback);
};

class BluetoothSystem_StartScan_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  BluetoothSystem_StartScan_ForwardToCallback(
      BluetoothSystem::StartScanCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  BluetoothSystem::StartScanCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(BluetoothSystem_StartScan_ForwardToCallback);
};

class BluetoothSystem_StopScan_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  BluetoothSystem_StopScan_ForwardToCallback(
      BluetoothSystem::StopScanCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  BluetoothSystem::StopScanCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(BluetoothSystem_StopScan_ForwardToCallback);
};

class BluetoothSystem_GetAvailableDevices_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  BluetoothSystem_GetAvailableDevices_ForwardToCallback(
      BluetoothSystem::GetAvailableDevicesCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  BluetoothSystem::GetAvailableDevicesCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(BluetoothSystem_GetAvailableDevices_ForwardToCallback);
};

BluetoothSystemProxy::BluetoothSystemProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void BluetoothSystemProxy::GetState(
    GetStateCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::BluetoothSystem::GetState");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kBluetoothSystem_GetState_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::BluetoothSystem_GetState_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(BluetoothSystem::Name_);
  message.set_method_name("GetState");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new BluetoothSystem_GetState_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void BluetoothSystemProxy::SetPowered(
    bool in_powered, SetPoweredCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::BluetoothSystem::SetPowered");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kBluetoothSystem_SetPowered_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::BluetoothSystem_SetPowered_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->powered = in_powered;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(BluetoothSystem::Name_);
  message.set_method_name("SetPowered");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new BluetoothSystem_SetPowered_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void BluetoothSystemProxy::GetScanState(
    GetScanStateCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::BluetoothSystem::GetScanState");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kBluetoothSystem_GetScanState_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::BluetoothSystem_GetScanState_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(BluetoothSystem::Name_);
  message.set_method_name("GetScanState");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new BluetoothSystem_GetScanState_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void BluetoothSystemProxy::StartScan(
    StartScanCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::BluetoothSystem::StartScan");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kBluetoothSystem_StartScan_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::BluetoothSystem_StartScan_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(BluetoothSystem::Name_);
  message.set_method_name("StartScan");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new BluetoothSystem_StartScan_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void BluetoothSystemProxy::StopScan(
    StopScanCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::BluetoothSystem::StopScan");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kBluetoothSystem_StopScan_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::BluetoothSystem_StopScan_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(BluetoothSystem::Name_);
  message.set_method_name("StopScan");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new BluetoothSystem_StopScan_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void BluetoothSystemProxy::GetAvailableDevices(
    GetAvailableDevicesCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::BluetoothSystem::GetAvailableDevices");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kBluetoothSystem_GetAvailableDevices_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::BluetoothSystem_GetAvailableDevices_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(BluetoothSystem::Name_);
  message.set_method_name("GetAvailableDevices");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new BluetoothSystem_GetAvailableDevices_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class BluetoothSystem_GetState_ProxyToResponder {
 public:
  static BluetoothSystem::GetStateCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<BluetoothSystem_GetState_ProxyToResponder> proxy(
        new BluetoothSystem_GetState_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&BluetoothSystem_GetState_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~BluetoothSystem_GetState_ProxyToResponder() {
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
  BluetoothSystem_GetState_ProxyToResponder(
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
        << "BluetoothSystem::GetStateCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      BluetoothSystem::State in_state);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(BluetoothSystem_GetState_ProxyToResponder);
};

bool BluetoothSystem_GetState_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::BluetoothSystem::GetStateCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::BluetoothSystem_GetState_ResponseParams_Data* params =
      reinterpret_cast<
          internal::BluetoothSystem_GetState_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  BluetoothSystem::State p_state{};
  BluetoothSystem_GetState_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadState(&p_state))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        BluetoothSystem::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_state));
  return true;
}

void BluetoothSystem_GetState_ProxyToResponder::Run(
    BluetoothSystem::State in_state) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kBluetoothSystem_GetState_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::BluetoothSystem_GetState_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::device::mojom::BluetoothSystem_State>(
      in_state, &params->state);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::BluetoothSystem::GetStateCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(BluetoothSystem::Name_);
  message.set_method_name("GetState");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class BluetoothSystem_SetPowered_ProxyToResponder {
 public:
  static BluetoothSystem::SetPoweredCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<BluetoothSystem_SetPowered_ProxyToResponder> proxy(
        new BluetoothSystem_SetPowered_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&BluetoothSystem_SetPowered_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~BluetoothSystem_SetPowered_ProxyToResponder() {
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
  BluetoothSystem_SetPowered_ProxyToResponder(
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
        << "BluetoothSystem::SetPoweredCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      BluetoothSystem::SetPoweredResult in_result);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(BluetoothSystem_SetPowered_ProxyToResponder);
};

bool BluetoothSystem_SetPowered_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::BluetoothSystem::SetPoweredCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::BluetoothSystem_SetPowered_ResponseParams_Data* params =
      reinterpret_cast<
          internal::BluetoothSystem_SetPowered_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  BluetoothSystem::SetPoweredResult p_result{};
  BluetoothSystem_SetPowered_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadResult(&p_result))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        BluetoothSystem::Name_, 1, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result));
  return true;
}

void BluetoothSystem_SetPowered_ProxyToResponder::Run(
    BluetoothSystem::SetPoweredResult in_result) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kBluetoothSystem_SetPowered_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::BluetoothSystem_SetPowered_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::device::mojom::BluetoothSystem_SetPoweredResult>(
      in_result, &params->result);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::BluetoothSystem::SetPoweredCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(BluetoothSystem::Name_);
  message.set_method_name("SetPowered");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class BluetoothSystem_GetScanState_ProxyToResponder {
 public:
  static BluetoothSystem::GetScanStateCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<BluetoothSystem_GetScanState_ProxyToResponder> proxy(
        new BluetoothSystem_GetScanState_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&BluetoothSystem_GetScanState_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~BluetoothSystem_GetScanState_ProxyToResponder() {
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
  BluetoothSystem_GetScanState_ProxyToResponder(
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
        << "BluetoothSystem::GetScanStateCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      BluetoothSystem::ScanState in_scan_state);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(BluetoothSystem_GetScanState_ProxyToResponder);
};

bool BluetoothSystem_GetScanState_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::BluetoothSystem::GetScanStateCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::BluetoothSystem_GetScanState_ResponseParams_Data* params =
      reinterpret_cast<
          internal::BluetoothSystem_GetScanState_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  BluetoothSystem::ScanState p_scan_state{};
  BluetoothSystem_GetScanState_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadScanState(&p_scan_state))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        BluetoothSystem::Name_, 2, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_scan_state));
  return true;
}

void BluetoothSystem_GetScanState_ProxyToResponder::Run(
    BluetoothSystem::ScanState in_scan_state) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kBluetoothSystem_GetScanState_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::BluetoothSystem_GetScanState_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::device::mojom::BluetoothSystem_ScanState>(
      in_scan_state, &params->scan_state);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::BluetoothSystem::GetScanStateCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(BluetoothSystem::Name_);
  message.set_method_name("GetScanState");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class BluetoothSystem_StartScan_ProxyToResponder {
 public:
  static BluetoothSystem::StartScanCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<BluetoothSystem_StartScan_ProxyToResponder> proxy(
        new BluetoothSystem_StartScan_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&BluetoothSystem_StartScan_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~BluetoothSystem_StartScan_ProxyToResponder() {
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
  BluetoothSystem_StartScan_ProxyToResponder(
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
        << "BluetoothSystem::StartScanCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      BluetoothSystem::StartScanResult in_result);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(BluetoothSystem_StartScan_ProxyToResponder);
};

bool BluetoothSystem_StartScan_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::BluetoothSystem::StartScanCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::BluetoothSystem_StartScan_ResponseParams_Data* params =
      reinterpret_cast<
          internal::BluetoothSystem_StartScan_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  BluetoothSystem::StartScanResult p_result{};
  BluetoothSystem_StartScan_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadResult(&p_result))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        BluetoothSystem::Name_, 3, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result));
  return true;
}

void BluetoothSystem_StartScan_ProxyToResponder::Run(
    BluetoothSystem::StartScanResult in_result) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kBluetoothSystem_StartScan_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::BluetoothSystem_StartScan_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::device::mojom::BluetoothSystem_StartScanResult>(
      in_result, &params->result);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::BluetoothSystem::StartScanCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(BluetoothSystem::Name_);
  message.set_method_name("StartScan");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class BluetoothSystem_StopScan_ProxyToResponder {
 public:
  static BluetoothSystem::StopScanCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<BluetoothSystem_StopScan_ProxyToResponder> proxy(
        new BluetoothSystem_StopScan_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&BluetoothSystem_StopScan_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~BluetoothSystem_StopScan_ProxyToResponder() {
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
  BluetoothSystem_StopScan_ProxyToResponder(
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
        << "BluetoothSystem::StopScanCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      BluetoothSystem::StopScanResult in_result);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(BluetoothSystem_StopScan_ProxyToResponder);
};

bool BluetoothSystem_StopScan_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::BluetoothSystem::StopScanCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::BluetoothSystem_StopScan_ResponseParams_Data* params =
      reinterpret_cast<
          internal::BluetoothSystem_StopScan_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  BluetoothSystem::StopScanResult p_result{};
  BluetoothSystem_StopScan_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadResult(&p_result))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        BluetoothSystem::Name_, 4, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result));
  return true;
}

void BluetoothSystem_StopScan_ProxyToResponder::Run(
    BluetoothSystem::StopScanResult in_result) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kBluetoothSystem_StopScan_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::BluetoothSystem_StopScan_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::device::mojom::BluetoothSystem_StopScanResult>(
      in_result, &params->result);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::BluetoothSystem::StopScanCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(BluetoothSystem::Name_);
  message.set_method_name("StopScan");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class BluetoothSystem_GetAvailableDevices_ProxyToResponder {
 public:
  static BluetoothSystem::GetAvailableDevicesCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<BluetoothSystem_GetAvailableDevices_ProxyToResponder> proxy(
        new BluetoothSystem_GetAvailableDevices_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&BluetoothSystem_GetAvailableDevices_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~BluetoothSystem_GetAvailableDevices_ProxyToResponder() {
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
  BluetoothSystem_GetAvailableDevices_ProxyToResponder(
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
        << "BluetoothSystem::GetAvailableDevicesCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      std::vector<BluetoothDeviceInfoPtr> in_devices);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(BluetoothSystem_GetAvailableDevices_ProxyToResponder);
};

bool BluetoothSystem_GetAvailableDevices_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::BluetoothSystem::GetAvailableDevicesCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::BluetoothSystem_GetAvailableDevices_ResponseParams_Data* params =
      reinterpret_cast<
          internal::BluetoothSystem_GetAvailableDevices_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  std::vector<BluetoothDeviceInfoPtr> p_devices{};
  BluetoothSystem_GetAvailableDevices_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadDevices(&p_devices))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        BluetoothSystem::Name_, 5, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_devices));
  return true;
}

void BluetoothSystem_GetAvailableDevices_ProxyToResponder::Run(
    std::vector<BluetoothDeviceInfoPtr> in_devices) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kBluetoothSystem_GetAvailableDevices_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::BluetoothSystem_GetAvailableDevices_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->devices)::BaseType::BufferWriter
      devices_writer;
  const mojo::internal::ContainerValidateParams devices_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::device::mojom::BluetoothDeviceInfoDataView>>(
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
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::BluetoothSystem::GetAvailableDevicesCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(BluetoothSystem::Name_);
  message.set_method_name("GetAvailableDevices");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool BluetoothSystemStubDispatch::Accept(
    BluetoothSystem* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kBluetoothSystem_GetState_Name: {
      break;
    }
    case internal::kBluetoothSystem_SetPowered_Name: {
      break;
    }
    case internal::kBluetoothSystem_GetScanState_Name: {
      break;
    }
    case internal::kBluetoothSystem_StartScan_Name: {
      break;
    }
    case internal::kBluetoothSystem_StopScan_Name: {
      break;
    }
    case internal::kBluetoothSystem_GetAvailableDevices_Name: {
      break;
    }
  }
  return false;
}

// static
bool BluetoothSystemStubDispatch::AcceptWithResponder(
    BluetoothSystem* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kBluetoothSystem_GetState_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::BluetoothSystem::GetState",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::BluetoothSystem_GetState_Params_Data* params =
          reinterpret_cast<
              internal::BluetoothSystem_GetState_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      BluetoothSystem_GetState_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            BluetoothSystem::Name_, 0, false);
        return false;
      }
      BluetoothSystem::GetStateCallback callback =
          BluetoothSystem_GetState_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GetState(std::move(callback));
      return true;
    }
    case internal::kBluetoothSystem_SetPowered_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::BluetoothSystem::SetPowered",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::BluetoothSystem_SetPowered_Params_Data* params =
          reinterpret_cast<
              internal::BluetoothSystem_SetPowered_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      bool p_powered{};
      BluetoothSystem_SetPowered_ParamsDataView input_data_view(params, &serialization_context);
      
      p_powered = input_data_view.powered();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            BluetoothSystem::Name_, 1, false);
        return false;
      }
      BluetoothSystem::SetPoweredCallback callback =
          BluetoothSystem_SetPowered_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SetPowered(
std::move(p_powered), std::move(callback));
      return true;
    }
    case internal::kBluetoothSystem_GetScanState_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::BluetoothSystem::GetScanState",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::BluetoothSystem_GetScanState_Params_Data* params =
          reinterpret_cast<
              internal::BluetoothSystem_GetScanState_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      BluetoothSystem_GetScanState_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            BluetoothSystem::Name_, 2, false);
        return false;
      }
      BluetoothSystem::GetScanStateCallback callback =
          BluetoothSystem_GetScanState_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GetScanState(std::move(callback));
      return true;
    }
    case internal::kBluetoothSystem_StartScan_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::BluetoothSystem::StartScan",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::BluetoothSystem_StartScan_Params_Data* params =
          reinterpret_cast<
              internal::BluetoothSystem_StartScan_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      BluetoothSystem_StartScan_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            BluetoothSystem::Name_, 3, false);
        return false;
      }
      BluetoothSystem::StartScanCallback callback =
          BluetoothSystem_StartScan_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->StartScan(std::move(callback));
      return true;
    }
    case internal::kBluetoothSystem_StopScan_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::BluetoothSystem::StopScan",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::BluetoothSystem_StopScan_Params_Data* params =
          reinterpret_cast<
              internal::BluetoothSystem_StopScan_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      BluetoothSystem_StopScan_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            BluetoothSystem::Name_, 4, false);
        return false;
      }
      BluetoothSystem::StopScanCallback callback =
          BluetoothSystem_StopScan_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->StopScan(std::move(callback));
      return true;
    }
    case internal::kBluetoothSystem_GetAvailableDevices_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::BluetoothSystem::GetAvailableDevices",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::BluetoothSystem_GetAvailableDevices_Params_Data* params =
          reinterpret_cast<
              internal::BluetoothSystem_GetAvailableDevices_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      BluetoothSystem_GetAvailableDevices_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            BluetoothSystem::Name_, 5, false);
        return false;
      }
      BluetoothSystem::GetAvailableDevicesCallback callback =
          BluetoothSystem_GetAvailableDevices_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GetAvailableDevices(std::move(callback));
      return true;
    }
  }
  return false;
}

bool BluetoothSystemRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "BluetoothSystem RequestValidator");

  switch (message->header()->name) {
    case internal::kBluetoothSystem_GetState_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::BluetoothSystem_GetState_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kBluetoothSystem_SetPowered_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::BluetoothSystem_SetPowered_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kBluetoothSystem_GetScanState_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::BluetoothSystem_GetScanState_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kBluetoothSystem_StartScan_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::BluetoothSystem_StartScan_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kBluetoothSystem_StopScan_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::BluetoothSystem_StopScan_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kBluetoothSystem_GetAvailableDevices_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::BluetoothSystem_GetAvailableDevices_Params_Data>(
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

bool BluetoothSystemResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "BluetoothSystem ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kBluetoothSystem_GetState_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::BluetoothSystem_GetState_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kBluetoothSystem_SetPowered_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::BluetoothSystem_SetPowered_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kBluetoothSystem_GetScanState_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::BluetoothSystem_GetScanState_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kBluetoothSystem_StartScan_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::BluetoothSystem_StartScan_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kBluetoothSystem_StopScan_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::BluetoothSystem_StopScan_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kBluetoothSystem_GetAvailableDevices_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::BluetoothSystem_GetAvailableDevices_ResponseParams_Data>(
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
const char BluetoothSystemClient::Name_[] = "device.mojom.BluetoothSystemClient";

BluetoothSystemClientProxy::BluetoothSystemClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void BluetoothSystemClientProxy::OnStateChanged(
    BluetoothSystem::State in_new_state) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::BluetoothSystemClient::OnStateChanged");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kBluetoothSystemClient_OnStateChanged_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::BluetoothSystemClient_OnStateChanged_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::device::mojom::BluetoothSystem_State>(
      in_new_state, &params->new_state);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(BluetoothSystemClient::Name_);
  message.set_method_name("OnStateChanged");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void BluetoothSystemClientProxy::OnScanStateChanged(
    BluetoothSystem::ScanState in_new_state) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::BluetoothSystemClient::OnScanStateChanged");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kBluetoothSystemClient_OnScanStateChanged_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::BluetoothSystemClient_OnScanStateChanged_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::device::mojom::BluetoothSystem_ScanState>(
      in_new_state, &params->new_state);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(BluetoothSystemClient::Name_);
  message.set_method_name("OnScanStateChanged");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool BluetoothSystemClientStubDispatch::Accept(
    BluetoothSystemClient* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kBluetoothSystemClient_OnStateChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::BluetoothSystemClient::OnStateChanged",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::BluetoothSystemClient_OnStateChanged_Params_Data* params =
          reinterpret_cast<internal::BluetoothSystemClient_OnStateChanged_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      BluetoothSystem::State p_new_state{};
      BluetoothSystemClient_OnStateChanged_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadNewState(&p_new_state))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            BluetoothSystemClient::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnStateChanged(
std::move(p_new_state));
      return true;
    }
    case internal::kBluetoothSystemClient_OnScanStateChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::BluetoothSystemClient::OnScanStateChanged",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::BluetoothSystemClient_OnScanStateChanged_Params_Data* params =
          reinterpret_cast<internal::BluetoothSystemClient_OnScanStateChanged_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      BluetoothSystem::ScanState p_new_state{};
      BluetoothSystemClient_OnScanStateChanged_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadNewState(&p_new_state))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            BluetoothSystemClient::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnScanStateChanged(
std::move(p_new_state));
      return true;
    }
  }
  return false;
}

// static
bool BluetoothSystemClientStubDispatch::AcceptWithResponder(
    BluetoothSystemClient* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kBluetoothSystemClient_OnStateChanged_Name: {
      break;
    }
    case internal::kBluetoothSystemClient_OnScanStateChanged_Name: {
      break;
    }
  }
  return false;
}

bool BluetoothSystemClientRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "BluetoothSystemClient RequestValidator");

  switch (message->header()->name) {
    case internal::kBluetoothSystemClient_OnStateChanged_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::BluetoothSystemClient_OnStateChanged_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kBluetoothSystemClient_OnScanStateChanged_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::BluetoothSystemClient_OnScanStateChanged_Params_Data>(
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


// static
bool StructTraits<::device::mojom::BluetoothAddress::DataView, ::device::mojom::BluetoothAddressPtr>::Read(
    ::device::mojom::BluetoothAddress::DataView input,
    ::device::mojom::BluetoothAddressPtr* output) {
  bool success = true;
  ::device::mojom::BluetoothAddressPtr result(::device::mojom::BluetoothAddress::New());
  
      if (!input.ReadAddress(&result->address))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::device::mojom::BluetoothDeviceInfo::DataView, ::device::mojom::BluetoothDeviceInfoPtr>::Read(
    ::device::mojom::BluetoothDeviceInfo::DataView input,
    ::device::mojom::BluetoothDeviceInfoPtr* output) {
  bool success = true;
  ::device::mojom::BluetoothDeviceInfoPtr result(::device::mojom::BluetoothDeviceInfo::New());
  
      if (!input.ReadAddress(&result->address))
        success = false;
      if (!input.ReadName(&result->name))
        success = false;
      if (!input.ReadConnectionState(&result->connection_state))
        success = false;
      result->is_paired = input.is_paired();
      if (!input.ReadDeviceType(&result->device_type))
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