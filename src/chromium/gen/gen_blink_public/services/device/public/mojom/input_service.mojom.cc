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

#include "services/device/public/mojom/input_service.mojom.h"

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

#include "services/device/public/mojom/input_service.mojom-params-data.h"
#include "services/device/public/mojom/input_service.mojom-shared-message-ids.h"

#include "services/device/public/mojom/input_service.mojom-import-headers.h"


#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_INPUT_SERVICE_MOJOM_JUMBO_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_INPUT_SERVICE_MOJOM_JUMBO_H_
#endif
namespace device {
namespace mojom {
InputDeviceInfo::InputDeviceInfo()
    : id(),
      name(),
      subsystem(),
      type(),
      is_accelerometer(),
      is_joystick(),
      is_key(),
      is_keyboard(),
      is_mouse(),
      is_tablet(),
      is_touchpad(),
      is_touchscreen() {}

InputDeviceInfo::InputDeviceInfo(
    const std::string& id_in,
    const std::string& name_in,
    InputDeviceSubsystem subsystem_in,
    InputDeviceType type_in,
    bool is_accelerometer_in,
    bool is_joystick_in,
    bool is_key_in,
    bool is_keyboard_in,
    bool is_mouse_in,
    bool is_tablet_in,
    bool is_touchpad_in,
    bool is_touchscreen_in)
    : id(std::move(id_in)),
      name(std::move(name_in)),
      subsystem(std::move(subsystem_in)),
      type(std::move(type_in)),
      is_accelerometer(std::move(is_accelerometer_in)),
      is_joystick(std::move(is_joystick_in)),
      is_key(std::move(is_key_in)),
      is_keyboard(std::move(is_keyboard_in)),
      is_mouse(std::move(is_mouse_in)),
      is_tablet(std::move(is_tablet_in)),
      is_touchpad(std::move(is_touchpad_in)),
      is_touchscreen(std::move(is_touchscreen_in)) {}

InputDeviceInfo::~InputDeviceInfo() = default;
size_t InputDeviceInfo::Hash(size_t seed) const {
  seed = mojo::internal::Hash(seed, this->id);
  seed = mojo::internal::Hash(seed, this->name);
  seed = mojo::internal::Hash(seed, this->subsystem);
  seed = mojo::internal::Hash(seed, this->type);
  seed = mojo::internal::Hash(seed, this->is_accelerometer);
  seed = mojo::internal::Hash(seed, this->is_joystick);
  seed = mojo::internal::Hash(seed, this->is_key);
  seed = mojo::internal::Hash(seed, this->is_keyboard);
  seed = mojo::internal::Hash(seed, this->is_mouse);
  seed = mojo::internal::Hash(seed, this->is_tablet);
  seed = mojo::internal::Hash(seed, this->is_touchpad);
  seed = mojo::internal::Hash(seed, this->is_touchscreen);
  return seed;
}

bool InputDeviceInfo::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char InputDeviceManagerClient::Name_[] = "device.mojom.InputDeviceManagerClient";

InputDeviceManagerClientProxy::InputDeviceManagerClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void InputDeviceManagerClientProxy::InputDeviceAdded(
    InputDeviceInfoPtr in_device_info) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::InputDeviceManagerClient::InputDeviceAdded");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kInputDeviceManagerClient_InputDeviceAdded_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::InputDeviceManagerClient_InputDeviceAdded_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->device_info)::BaseType::BufferWriter
      device_info_writer;
  mojo::internal::Serialize<::device::mojom::InputDeviceInfoDataView>(
      in_device_info, buffer, &device_info_writer, &serialization_context);
  params->device_info.Set(
      device_info_writer.is_null() ? nullptr : device_info_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->device_info.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null device_info in InputDeviceManagerClient.InputDeviceAdded request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(InputDeviceManagerClient::Name_);
  message.set_method_name("InputDeviceAdded");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void InputDeviceManagerClientProxy::InputDeviceRemoved(
    const std::string& in_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::InputDeviceManagerClient::InputDeviceRemoved");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kInputDeviceManagerClient_InputDeviceRemoved_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::InputDeviceManagerClient_InputDeviceRemoved_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->id)::BaseType::BufferWriter
      id_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_id, buffer, &id_writer, &serialization_context);
  params->id.Set(
      id_writer.is_null() ? nullptr : id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null id in InputDeviceManagerClient.InputDeviceRemoved request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(InputDeviceManagerClient::Name_);
  message.set_method_name("InputDeviceRemoved");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool InputDeviceManagerClientStubDispatch::Accept(
    InputDeviceManagerClient* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kInputDeviceManagerClient_InputDeviceAdded_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::InputDeviceManagerClient::InputDeviceAdded",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::InputDeviceManagerClient_InputDeviceAdded_Params_Data* params =
          reinterpret_cast<internal::InputDeviceManagerClient_InputDeviceAdded_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      InputDeviceInfoPtr p_device_info{};
      InputDeviceManagerClient_InputDeviceAdded_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadDeviceInfo(&p_device_info))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            InputDeviceManagerClient::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->InputDeviceAdded(
std::move(p_device_info));
      return true;
    }
    case internal::kInputDeviceManagerClient_InputDeviceRemoved_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::InputDeviceManagerClient::InputDeviceRemoved",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::InputDeviceManagerClient_InputDeviceRemoved_Params_Data* params =
          reinterpret_cast<internal::InputDeviceManagerClient_InputDeviceRemoved_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_id{};
      InputDeviceManagerClient_InputDeviceRemoved_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadId(&p_id))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            InputDeviceManagerClient::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->InputDeviceRemoved(
std::move(p_id));
      return true;
    }
  }
  return false;
}

// static
bool InputDeviceManagerClientStubDispatch::AcceptWithResponder(
    InputDeviceManagerClient* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kInputDeviceManagerClient_InputDeviceAdded_Name: {
      break;
    }
    case internal::kInputDeviceManagerClient_InputDeviceRemoved_Name: {
      break;
    }
  }
  return false;
}

bool InputDeviceManagerClientRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "InputDeviceManagerClient RequestValidator");

  switch (message->header()->name) {
    case internal::kInputDeviceManagerClient_InputDeviceAdded_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::InputDeviceManagerClient_InputDeviceAdded_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kInputDeviceManagerClient_InputDeviceRemoved_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::InputDeviceManagerClient_InputDeviceRemoved_Params_Data>(
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

const char InputDeviceManager::Name_[] = "device.mojom.InputDeviceManager";

class InputDeviceManager_GetDevicesAndSetClient_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  InputDeviceManager_GetDevicesAndSetClient_ForwardToCallback(
      InputDeviceManager::GetDevicesAndSetClientCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  InputDeviceManager::GetDevicesAndSetClientCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(InputDeviceManager_GetDevicesAndSetClient_ForwardToCallback);
};

class InputDeviceManager_GetDevices_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  InputDeviceManager_GetDevices_ForwardToCallback(
      InputDeviceManager::GetDevicesCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  InputDeviceManager::GetDevicesCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(InputDeviceManager_GetDevices_ForwardToCallback);
};

InputDeviceManagerProxy::InputDeviceManagerProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void InputDeviceManagerProxy::GetDevicesAndSetClient(
    InputDeviceManagerClientAssociatedPtrInfo in_client, GetDevicesAndSetClientCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::InputDeviceManager::GetDevicesAndSetClient");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kInputDeviceManager_GetDevicesAndSetClient_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::InputDeviceManager_GetDevicesAndSetClient_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::device::mojom::InputDeviceManagerClientAssociatedPtrInfoDataView>(
      in_client, &params->client, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->client),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_INTERFACE_ID,
      "invalid client in InputDeviceManager.GetDevicesAndSetClient request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(InputDeviceManager::Name_);
  message.set_method_name("GetDevicesAndSetClient");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new InputDeviceManager_GetDevicesAndSetClient_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void InputDeviceManagerProxy::GetDevices(
    GetDevicesCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::InputDeviceManager::GetDevices");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kInputDeviceManager_GetDevices_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::InputDeviceManager_GetDevices_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(InputDeviceManager::Name_);
  message.set_method_name("GetDevices");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new InputDeviceManager_GetDevices_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class InputDeviceManager_GetDevicesAndSetClient_ProxyToResponder {
 public:
  static InputDeviceManager::GetDevicesAndSetClientCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<InputDeviceManager_GetDevicesAndSetClient_ProxyToResponder> proxy(
        new InputDeviceManager_GetDevicesAndSetClient_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&InputDeviceManager_GetDevicesAndSetClient_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~InputDeviceManager_GetDevicesAndSetClient_ProxyToResponder() {
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
  InputDeviceManager_GetDevicesAndSetClient_ProxyToResponder(
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
        << "InputDeviceManager::GetDevicesAndSetClientCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      std::vector<InputDeviceInfoPtr> in_devices);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(InputDeviceManager_GetDevicesAndSetClient_ProxyToResponder);
};

bool InputDeviceManager_GetDevicesAndSetClient_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::InputDeviceManager::GetDevicesAndSetClientCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::InputDeviceManager_GetDevicesAndSetClient_ResponseParams_Data* params =
      reinterpret_cast<
          internal::InputDeviceManager_GetDevicesAndSetClient_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  std::vector<InputDeviceInfoPtr> p_devices{};
  InputDeviceManager_GetDevicesAndSetClient_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadDevices(&p_devices))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        InputDeviceManager::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_devices));
  return true;
}

void InputDeviceManager_GetDevicesAndSetClient_ProxyToResponder::Run(
    std::vector<InputDeviceInfoPtr> in_devices) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kInputDeviceManager_GetDevicesAndSetClient_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::InputDeviceManager_GetDevicesAndSetClient_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->devices)::BaseType::BufferWriter
      devices_writer;
  const mojo::internal::ContainerValidateParams devices_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::device::mojom::InputDeviceInfoDataView>>(
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
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::InputDeviceManager::GetDevicesAndSetClientCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(InputDeviceManager::Name_);
  message.set_method_name("GetDevicesAndSetClient");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class InputDeviceManager_GetDevices_ProxyToResponder {
 public:
  static InputDeviceManager::GetDevicesCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<InputDeviceManager_GetDevices_ProxyToResponder> proxy(
        new InputDeviceManager_GetDevices_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&InputDeviceManager_GetDevices_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~InputDeviceManager_GetDevices_ProxyToResponder() {
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
  InputDeviceManager_GetDevices_ProxyToResponder(
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
        << "InputDeviceManager::GetDevicesCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      std::vector<InputDeviceInfoPtr> in_devices);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(InputDeviceManager_GetDevices_ProxyToResponder);
};

bool InputDeviceManager_GetDevices_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::InputDeviceManager::GetDevicesCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::InputDeviceManager_GetDevices_ResponseParams_Data* params =
      reinterpret_cast<
          internal::InputDeviceManager_GetDevices_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  std::vector<InputDeviceInfoPtr> p_devices{};
  InputDeviceManager_GetDevices_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadDevices(&p_devices))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        InputDeviceManager::Name_, 1, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_devices));
  return true;
}

void InputDeviceManager_GetDevices_ProxyToResponder::Run(
    std::vector<InputDeviceInfoPtr> in_devices) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kInputDeviceManager_GetDevices_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::InputDeviceManager_GetDevices_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->devices)::BaseType::BufferWriter
      devices_writer;
  const mojo::internal::ContainerValidateParams devices_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::device::mojom::InputDeviceInfoDataView>>(
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
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::InputDeviceManager::GetDevicesCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(InputDeviceManager::Name_);
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
bool InputDeviceManagerStubDispatch::Accept(
    InputDeviceManager* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kInputDeviceManager_GetDevicesAndSetClient_Name: {
      break;
    }
    case internal::kInputDeviceManager_GetDevices_Name: {
      break;
    }
  }
  return false;
}

// static
bool InputDeviceManagerStubDispatch::AcceptWithResponder(
    InputDeviceManager* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kInputDeviceManager_GetDevicesAndSetClient_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::InputDeviceManager::GetDevicesAndSetClient",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::InputDeviceManager_GetDevicesAndSetClient_Params_Data* params =
          reinterpret_cast<
              internal::InputDeviceManager_GetDevicesAndSetClient_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      InputDeviceManagerClientAssociatedPtrInfo p_client{};
      InputDeviceManager_GetDevicesAndSetClient_ParamsDataView input_data_view(params, &serialization_context);
      
      p_client =
          input_data_view.TakeClient<decltype(p_client)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            InputDeviceManager::Name_, 0, false);
        return false;
      }
      InputDeviceManager::GetDevicesAndSetClientCallback callback =
          InputDeviceManager_GetDevicesAndSetClient_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GetDevicesAndSetClient(
std::move(p_client), std::move(callback));
      return true;
    }
    case internal::kInputDeviceManager_GetDevices_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::InputDeviceManager::GetDevices",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::InputDeviceManager_GetDevices_Params_Data* params =
          reinterpret_cast<
              internal::InputDeviceManager_GetDevices_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      InputDeviceManager_GetDevices_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            InputDeviceManager::Name_, 1, false);
        return false;
      }
      InputDeviceManager::GetDevicesCallback callback =
          InputDeviceManager_GetDevices_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GetDevices(std::move(callback));
      return true;
    }
  }
  return false;
}

bool InputDeviceManagerRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "InputDeviceManager RequestValidator");

  switch (message->header()->name) {
    case internal::kInputDeviceManager_GetDevicesAndSetClient_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::InputDeviceManager_GetDevicesAndSetClient_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kInputDeviceManager_GetDevices_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::InputDeviceManager_GetDevices_Params_Data>(
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

bool InputDeviceManagerResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "InputDeviceManager ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kInputDeviceManager_GetDevicesAndSetClient_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::InputDeviceManager_GetDevicesAndSetClient_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kInputDeviceManager_GetDevices_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::InputDeviceManager_GetDevices_ResponseParams_Data>(
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
bool StructTraits<::device::mojom::InputDeviceInfo::DataView, ::device::mojom::InputDeviceInfoPtr>::Read(
    ::device::mojom::InputDeviceInfo::DataView input,
    ::device::mojom::InputDeviceInfoPtr* output) {
  bool success = true;
  ::device::mojom::InputDeviceInfoPtr result(::device::mojom::InputDeviceInfo::New());
  
      if (!input.ReadId(&result->id))
        success = false;
      if (!input.ReadName(&result->name))
        success = false;
      if (!input.ReadSubsystem(&result->subsystem))
        success = false;
      if (!input.ReadType(&result->type))
        success = false;
      result->is_accelerometer = input.is_accelerometer();
      result->is_joystick = input.is_joystick();
      result->is_key = input.is_key();
      result->is_keyboard = input.is_keyboard();
      result->is_mouse = input.is_mouse();
      result->is_tablet = input.is_tablet();
      result->is_touchpad = input.is_touchpad();
      result->is_touchscreen = input.is_touchscreen();
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif