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

#include "services/device/public/mojom/serial.mojom.h"

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

#include "services/device/public/mojom/serial.mojom-params-data.h"
#include "services/device/public/mojom/serial.mojom-shared-message-ids.h"

#include "services/device/public/mojom/serial.mojom-import-headers.h"


#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_SERIAL_MOJOM_JUMBO_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_SERIAL_MOJOM_JUMBO_H_
#include "mojo/public/cpp/base/file_path_mojom_traits.h"
#include "mojo/public/cpp/base/unguessable_token_mojom_traits.h"
#endif
namespace device {
namespace mojom {
SerialPortInfo::SerialPortInfo()
    : token(),
      path(),
      vendor_id(),
      has_vendor_id(false),
      product_id(),
      has_product_id(false),
      display_name() {}

SerialPortInfo::SerialPortInfo(
    const base::UnguessableToken& token_in,
    const base::FilePath& path_in,
    uint16_t vendor_id_in,
    bool has_vendor_id_in,
    uint16_t product_id_in,
    bool has_product_id_in,
    const base::Optional<std::string>& display_name_in)
    : token(std::move(token_in)),
      path(std::move(path_in)),
      vendor_id(std::move(vendor_id_in)),
      has_vendor_id(std::move(has_vendor_id_in)),
      product_id(std::move(product_id_in)),
      has_product_id(std::move(has_product_id_in)),
      display_name(std::move(display_name_in)) {}

SerialPortInfo::~SerialPortInfo() = default;

bool SerialPortInfo::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
SerialConnectionOptions::SerialConnectionOptions()
    : bitrate(0U),
      data_bits(SerialDataBits::NONE),
      parity_bit(SerialParityBit::NONE),
      stop_bits(SerialStopBits::NONE),
      cts_flow_control(),
      has_cts_flow_control(false) {}

SerialConnectionOptions::SerialConnectionOptions(
    uint32_t bitrate_in,
    SerialDataBits data_bits_in,
    SerialParityBit parity_bit_in,
    SerialStopBits stop_bits_in,
    bool cts_flow_control_in,
    bool has_cts_flow_control_in)
    : bitrate(std::move(bitrate_in)),
      data_bits(std::move(data_bits_in)),
      parity_bit(std::move(parity_bit_in)),
      stop_bits(std::move(stop_bits_in)),
      cts_flow_control(std::move(cts_flow_control_in)),
      has_cts_flow_control(std::move(has_cts_flow_control_in)) {}

SerialConnectionOptions::~SerialConnectionOptions() = default;
size_t SerialConnectionOptions::Hash(size_t seed) const {
  seed = mojo::internal::Hash(seed, this->bitrate);
  seed = mojo::internal::Hash(seed, this->data_bits);
  seed = mojo::internal::Hash(seed, this->parity_bit);
  seed = mojo::internal::Hash(seed, this->stop_bits);
  seed = mojo::internal::Hash(seed, this->cts_flow_control);
  seed = mojo::internal::Hash(seed, this->has_cts_flow_control);
  return seed;
}

bool SerialConnectionOptions::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
SerialConnectionInfo::SerialConnectionInfo()
    : bitrate(0U),
      data_bits(SerialDataBits::NONE),
      parity_bit(SerialParityBit::NONE),
      stop_bits(SerialStopBits::NONE),
      cts_flow_control() {}

SerialConnectionInfo::SerialConnectionInfo(
    uint32_t bitrate_in,
    SerialDataBits data_bits_in,
    SerialParityBit parity_bit_in,
    SerialStopBits stop_bits_in,
    bool cts_flow_control_in)
    : bitrate(std::move(bitrate_in)),
      data_bits(std::move(data_bits_in)),
      parity_bit(std::move(parity_bit_in)),
      stop_bits(std::move(stop_bits_in)),
      cts_flow_control(std::move(cts_flow_control_in)) {}

SerialConnectionInfo::~SerialConnectionInfo() = default;
size_t SerialConnectionInfo::Hash(size_t seed) const {
  seed = mojo::internal::Hash(seed, this->bitrate);
  seed = mojo::internal::Hash(seed, this->data_bits);
  seed = mojo::internal::Hash(seed, this->parity_bit);
  seed = mojo::internal::Hash(seed, this->stop_bits);
  seed = mojo::internal::Hash(seed, this->cts_flow_control);
  return seed;
}

bool SerialConnectionInfo::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
SerialHostControlSignals::SerialHostControlSignals()
    : dtr(),
      has_dtr(false),
      rts(),
      has_rts(false) {}

SerialHostControlSignals::SerialHostControlSignals(
    bool dtr_in,
    bool has_dtr_in,
    bool rts_in,
    bool has_rts_in)
    : dtr(std::move(dtr_in)),
      has_dtr(std::move(has_dtr_in)),
      rts(std::move(rts_in)),
      has_rts(std::move(has_rts_in)) {}

SerialHostControlSignals::~SerialHostControlSignals() = default;
size_t SerialHostControlSignals::Hash(size_t seed) const {
  seed = mojo::internal::Hash(seed, this->dtr);
  seed = mojo::internal::Hash(seed, this->has_dtr);
  seed = mojo::internal::Hash(seed, this->rts);
  seed = mojo::internal::Hash(seed, this->has_rts);
  return seed;
}

bool SerialHostControlSignals::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
SerialPortControlSignals::SerialPortControlSignals()
    : dcd(),
      cts(),
      ri(),
      dsr() {}

SerialPortControlSignals::SerialPortControlSignals(
    bool dcd_in,
    bool cts_in,
    bool ri_in,
    bool dsr_in)
    : dcd(std::move(dcd_in)),
      cts(std::move(cts_in)),
      ri(std::move(ri_in)),
      dsr(std::move(dsr_in)) {}

SerialPortControlSignals::~SerialPortControlSignals() = default;
size_t SerialPortControlSignals::Hash(size_t seed) const {
  seed = mojo::internal::Hash(seed, this->dcd);
  seed = mojo::internal::Hash(seed, this->cts);
  seed = mojo::internal::Hash(seed, this->ri);
  seed = mojo::internal::Hash(seed, this->dsr);
  return seed;
}

bool SerialPortControlSignals::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char SerialPortManager::Name_[] = "device.mojom.SerialPortManager";

class SerialPortManager_GetDevices_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  SerialPortManager_GetDevices_ForwardToCallback(
      SerialPortManager::GetDevicesCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  SerialPortManager::GetDevicesCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(SerialPortManager_GetDevices_ForwardToCallback);
};

SerialPortManagerProxy::SerialPortManagerProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void SerialPortManagerProxy::GetDevices(
    GetDevicesCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::SerialPortManager::GetDevices");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSerialPortManager_GetDevices_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::SerialPortManager_GetDevices_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(SerialPortManager::Name_);
  message.set_method_name("GetDevices");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new SerialPortManager_GetDevices_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void SerialPortManagerProxy::GetPort(
    const base::UnguessableToken& in_token, SerialPortRequest in_port_request, SerialPortConnectionWatcherPtr in_watcher) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::SerialPortManager::GetPort");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSerialPortManager_GetPort_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::SerialPortManager_GetPort_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->token)::BaseType::BufferWriter
      token_writer;
  mojo::internal::Serialize<::mojo_base::mojom::UnguessableTokenDataView>(
      in_token, buffer, &token_writer, &serialization_context);
  params->token.Set(
      token_writer.is_null() ? nullptr : token_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->token.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null token in SerialPortManager.GetPort request");
  mojo::internal::Serialize<::device::mojom::SerialPortRequestDataView>(
      in_port_request, &params->port_request, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->port_request),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid port_request in SerialPortManager.GetPort request");
  mojo::internal::Serialize<::device::mojom::SerialPortConnectionWatcherPtrDataView>(
      in_watcher, &params->watcher, &serialization_context);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(SerialPortManager::Name_);
  message.set_method_name("GetPort");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class SerialPortManager_GetDevices_ProxyToResponder {
 public:
  static SerialPortManager::GetDevicesCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<SerialPortManager_GetDevices_ProxyToResponder> proxy(
        new SerialPortManager_GetDevices_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&SerialPortManager_GetDevices_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~SerialPortManager_GetDevices_ProxyToResponder() {
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
  SerialPortManager_GetDevices_ProxyToResponder(
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
        << "SerialPortManager::GetDevicesCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      std::vector<SerialPortInfoPtr> in_devices);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(SerialPortManager_GetDevices_ProxyToResponder);
};

bool SerialPortManager_GetDevices_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::SerialPortManager::GetDevicesCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::SerialPortManager_GetDevices_ResponseParams_Data* params =
      reinterpret_cast<
          internal::SerialPortManager_GetDevices_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  std::vector<SerialPortInfoPtr> p_devices{};
  SerialPortManager_GetDevices_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadDevices(&p_devices))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        SerialPortManager::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_devices));
  return true;
}

void SerialPortManager_GetDevices_ProxyToResponder::Run(
    std::vector<SerialPortInfoPtr> in_devices) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSerialPortManager_GetDevices_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::SerialPortManager_GetDevices_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->devices)::BaseType::BufferWriter
      devices_writer;
  const mojo::internal::ContainerValidateParams devices_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::device::mojom::SerialPortInfoDataView>>(
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
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::SerialPortManager::GetDevicesCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(SerialPortManager::Name_);
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
bool SerialPortManagerStubDispatch::Accept(
    SerialPortManager* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kSerialPortManager_GetDevices_Name: {
      break;
    }
    case internal::kSerialPortManager_GetPort_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::SerialPortManager::GetPort",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::SerialPortManager_GetPort_Params_Data* params =
          reinterpret_cast<internal::SerialPortManager_GetPort_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      base::UnguessableToken p_token{};
      SerialPortRequest p_port_request{};
      SerialPortConnectionWatcherPtr p_watcher{};
      SerialPortManager_GetPort_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadToken(&p_token))
        success = false;
      p_port_request =
          input_data_view.TakePortRequest<decltype(p_port_request)>();
      p_watcher =
          input_data_view.TakeWatcher<decltype(p_watcher)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            SerialPortManager::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GetPort(
std::move(p_token), 
std::move(p_port_request), 
std::move(p_watcher));
      return true;
    }
  }
  return false;
}

// static
bool SerialPortManagerStubDispatch::AcceptWithResponder(
    SerialPortManager* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kSerialPortManager_GetDevices_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::SerialPortManager::GetDevices",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::SerialPortManager_GetDevices_Params_Data* params =
          reinterpret_cast<
              internal::SerialPortManager_GetDevices_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      SerialPortManager_GetDevices_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            SerialPortManager::Name_, 0, false);
        return false;
      }
      SerialPortManager::GetDevicesCallback callback =
          SerialPortManager_GetDevices_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GetDevices(std::move(callback));
      return true;
    }
    case internal::kSerialPortManager_GetPort_Name: {
      break;
    }
  }
  return false;
}

bool SerialPortManagerRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "SerialPortManager RequestValidator");

  switch (message->header()->name) {
    case internal::kSerialPortManager_GetDevices_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::SerialPortManager_GetDevices_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kSerialPortManager_GetPort_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::SerialPortManager_GetPort_Params_Data>(
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

bool SerialPortManagerResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "SerialPortManager ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kSerialPortManager_GetDevices_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::SerialPortManager_GetDevices_ResponseParams_Data>(
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
const char SerialPort::Name_[] = "device.mojom.SerialPort";

class SerialPort_Open_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  SerialPort_Open_ForwardToCallback(
      SerialPort::OpenCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  SerialPort::OpenCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(SerialPort_Open_ForwardToCallback);
};

class SerialPort_Flush_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  SerialPort_Flush_ForwardToCallback(
      SerialPort::FlushCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  SerialPort::FlushCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(SerialPort_Flush_ForwardToCallback);
};

class SerialPort_GetControlSignals_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  SerialPort_GetControlSignals_ForwardToCallback(
      SerialPort::GetControlSignalsCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  SerialPort::GetControlSignalsCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(SerialPort_GetControlSignals_ForwardToCallback);
};

class SerialPort_SetControlSignals_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  SerialPort_SetControlSignals_ForwardToCallback(
      SerialPort::SetControlSignalsCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  SerialPort::SetControlSignalsCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(SerialPort_SetControlSignals_ForwardToCallback);
};

class SerialPort_ConfigurePort_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  SerialPort_ConfigurePort_ForwardToCallback(
      SerialPort::ConfigurePortCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  SerialPort::ConfigurePortCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(SerialPort_ConfigurePort_ForwardToCallback);
};

class SerialPort_GetPortInfo_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  SerialPort_GetPortInfo_ForwardToCallback(
      SerialPort::GetPortInfoCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  SerialPort::GetPortInfoCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(SerialPort_GetPortInfo_ForwardToCallback);
};

class SerialPort_SetBreak_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  SerialPort_SetBreak_ForwardToCallback(
      SerialPort::SetBreakCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  SerialPort::SetBreakCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(SerialPort_SetBreak_ForwardToCallback);
};

class SerialPort_ClearBreak_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  SerialPort_ClearBreak_ForwardToCallback(
      SerialPort::ClearBreakCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  SerialPort::ClearBreakCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(SerialPort_ClearBreak_ForwardToCallback);
};

SerialPortProxy::SerialPortProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void SerialPortProxy::Open(
    SerialConnectionOptionsPtr in_options, mojo::ScopedDataPipeConsumerHandle in_in_stream, mojo::ScopedDataPipeProducerHandle in_out_stream, SerialPortClientAssociatedPtrInfo in_client, OpenCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::SerialPort::Open");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSerialPort_Open_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::SerialPort_Open_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->options)::BaseType::BufferWriter
      options_writer;
  mojo::internal::Serialize<::device::mojom::SerialConnectionOptionsDataView>(
      in_options, buffer, &options_writer, &serialization_context);
  params->options.Set(
      options_writer.is_null() ? nullptr : options_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->options.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null options in SerialPort.Open request");
  mojo::internal::Serialize<mojo::ScopedDataPipeConsumerHandle>(
      in_in_stream, &params->in_stream, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->in_stream),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid in_stream in SerialPort.Open request");
  mojo::internal::Serialize<mojo::ScopedDataPipeProducerHandle>(
      in_out_stream, &params->out_stream, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->out_stream),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid out_stream in SerialPort.Open request");
  mojo::internal::Serialize<::device::mojom::SerialPortClientAssociatedPtrInfoDataView>(
      in_client, &params->client, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->client),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_INTERFACE_ID,
      "invalid client in SerialPort.Open request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(SerialPort::Name_);
  message.set_method_name("Open");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new SerialPort_Open_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void SerialPortProxy::ClearSendError(
    mojo::ScopedDataPipeConsumerHandle in_consumer) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::SerialPort::ClearSendError");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSerialPort_ClearSendError_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::SerialPort_ClearSendError_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<mojo::ScopedDataPipeConsumerHandle>(
      in_consumer, &params->consumer, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->consumer),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid consumer in SerialPort.ClearSendError request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(SerialPort::Name_);
  message.set_method_name("ClearSendError");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void SerialPortProxy::ClearReadError(
    mojo::ScopedDataPipeProducerHandle in_producer) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::SerialPort::ClearReadError");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSerialPort_ClearReadError_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::SerialPort_ClearReadError_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<mojo::ScopedDataPipeProducerHandle>(
      in_producer, &params->producer, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->producer),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid producer in SerialPort.ClearReadError request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(SerialPort::Name_);
  message.set_method_name("ClearReadError");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void SerialPortProxy::Flush(
    FlushCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::SerialPort::Flush");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSerialPort_Flush_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::SerialPort_Flush_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(SerialPort::Name_);
  message.set_method_name("Flush");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new SerialPort_Flush_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void SerialPortProxy::GetControlSignals(
    GetControlSignalsCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::SerialPort::GetControlSignals");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSerialPort_GetControlSignals_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::SerialPort_GetControlSignals_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(SerialPort::Name_);
  message.set_method_name("GetControlSignals");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new SerialPort_GetControlSignals_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void SerialPortProxy::SetControlSignals(
    SerialHostControlSignalsPtr in_signals, SetControlSignalsCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::SerialPort::SetControlSignals");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSerialPort_SetControlSignals_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::SerialPort_SetControlSignals_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->signals)::BaseType::BufferWriter
      signals_writer;
  mojo::internal::Serialize<::device::mojom::SerialHostControlSignalsDataView>(
      in_signals, buffer, &signals_writer, &serialization_context);
  params->signals.Set(
      signals_writer.is_null() ? nullptr : signals_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->signals.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null signals in SerialPort.SetControlSignals request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(SerialPort::Name_);
  message.set_method_name("SetControlSignals");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new SerialPort_SetControlSignals_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void SerialPortProxy::ConfigurePort(
    SerialConnectionOptionsPtr in_options, ConfigurePortCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::SerialPort::ConfigurePort");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSerialPort_ConfigurePort_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::SerialPort_ConfigurePort_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->options)::BaseType::BufferWriter
      options_writer;
  mojo::internal::Serialize<::device::mojom::SerialConnectionOptionsDataView>(
      in_options, buffer, &options_writer, &serialization_context);
  params->options.Set(
      options_writer.is_null() ? nullptr : options_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->options.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null options in SerialPort.ConfigurePort request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(SerialPort::Name_);
  message.set_method_name("ConfigurePort");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new SerialPort_ConfigurePort_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void SerialPortProxy::GetPortInfo(
    GetPortInfoCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::SerialPort::GetPortInfo");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSerialPort_GetPortInfo_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::SerialPort_GetPortInfo_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(SerialPort::Name_);
  message.set_method_name("GetPortInfo");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new SerialPort_GetPortInfo_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void SerialPortProxy::SetBreak(
    SetBreakCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::SerialPort::SetBreak");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSerialPort_SetBreak_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::SerialPort_SetBreak_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(SerialPort::Name_);
  message.set_method_name("SetBreak");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new SerialPort_SetBreak_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void SerialPortProxy::ClearBreak(
    ClearBreakCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::SerialPort::ClearBreak");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSerialPort_ClearBreak_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::SerialPort_ClearBreak_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(SerialPort::Name_);
  message.set_method_name("ClearBreak");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new SerialPort_ClearBreak_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class SerialPort_Open_ProxyToResponder {
 public:
  static SerialPort::OpenCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<SerialPort_Open_ProxyToResponder> proxy(
        new SerialPort_Open_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&SerialPort_Open_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~SerialPort_Open_ProxyToResponder() {
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
  SerialPort_Open_ProxyToResponder(
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
        << "SerialPort::OpenCallback was destroyed without "
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

  DISALLOW_COPY_AND_ASSIGN(SerialPort_Open_ProxyToResponder);
};

bool SerialPort_Open_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::SerialPort::OpenCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::SerialPort_Open_ResponseParams_Data* params =
      reinterpret_cast<
          internal::SerialPort_Open_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_success{};
  SerialPort_Open_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_success = input_data_view.success();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        SerialPort::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_success));
  return true;
}

void SerialPort_Open_ProxyToResponder::Run(
    bool in_success) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSerialPort_Open_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::SerialPort_Open_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->success = in_success;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::SerialPort::OpenCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(SerialPort::Name_);
  message.set_method_name("Open");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class SerialPort_Flush_ProxyToResponder {
 public:
  static SerialPort::FlushCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<SerialPort_Flush_ProxyToResponder> proxy(
        new SerialPort_Flush_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&SerialPort_Flush_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~SerialPort_Flush_ProxyToResponder() {
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
  SerialPort_Flush_ProxyToResponder(
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
        << "SerialPort::FlushCallback was destroyed without "
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

  DISALLOW_COPY_AND_ASSIGN(SerialPort_Flush_ProxyToResponder);
};

bool SerialPort_Flush_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::SerialPort::FlushCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::SerialPort_Flush_ResponseParams_Data* params =
      reinterpret_cast<
          internal::SerialPort_Flush_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_success{};
  SerialPort_Flush_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_success = input_data_view.success();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        SerialPort::Name_, 3, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_success));
  return true;
}

void SerialPort_Flush_ProxyToResponder::Run(
    bool in_success) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSerialPort_Flush_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::SerialPort_Flush_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->success = in_success;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::SerialPort::FlushCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(SerialPort::Name_);
  message.set_method_name("Flush");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class SerialPort_GetControlSignals_ProxyToResponder {
 public:
  static SerialPort::GetControlSignalsCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<SerialPort_GetControlSignals_ProxyToResponder> proxy(
        new SerialPort_GetControlSignals_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&SerialPort_GetControlSignals_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~SerialPort_GetControlSignals_ProxyToResponder() {
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
  SerialPort_GetControlSignals_ProxyToResponder(
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
        << "SerialPort::GetControlSignalsCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      SerialPortControlSignalsPtr in_signals);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(SerialPort_GetControlSignals_ProxyToResponder);
};

bool SerialPort_GetControlSignals_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::SerialPort::GetControlSignalsCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::SerialPort_GetControlSignals_ResponseParams_Data* params =
      reinterpret_cast<
          internal::SerialPort_GetControlSignals_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  SerialPortControlSignalsPtr p_signals{};
  SerialPort_GetControlSignals_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadSignals(&p_signals))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        SerialPort::Name_, 4, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_signals));
  return true;
}

void SerialPort_GetControlSignals_ProxyToResponder::Run(
    SerialPortControlSignalsPtr in_signals) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSerialPort_GetControlSignals_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::SerialPort_GetControlSignals_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->signals)::BaseType::BufferWriter
      signals_writer;
  mojo::internal::Serialize<::device::mojom::SerialPortControlSignalsDataView>(
      in_signals, buffer, &signals_writer, &serialization_context);
  params->signals.Set(
      signals_writer.is_null() ? nullptr : signals_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->signals.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null signals in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::SerialPort::GetControlSignalsCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(SerialPort::Name_);
  message.set_method_name("GetControlSignals");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class SerialPort_SetControlSignals_ProxyToResponder {
 public:
  static SerialPort::SetControlSignalsCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<SerialPort_SetControlSignals_ProxyToResponder> proxy(
        new SerialPort_SetControlSignals_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&SerialPort_SetControlSignals_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~SerialPort_SetControlSignals_ProxyToResponder() {
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
  SerialPort_SetControlSignals_ProxyToResponder(
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
        << "SerialPort::SetControlSignalsCallback was destroyed without "
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

  DISALLOW_COPY_AND_ASSIGN(SerialPort_SetControlSignals_ProxyToResponder);
};

bool SerialPort_SetControlSignals_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::SerialPort::SetControlSignalsCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::SerialPort_SetControlSignals_ResponseParams_Data* params =
      reinterpret_cast<
          internal::SerialPort_SetControlSignals_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_success{};
  SerialPort_SetControlSignals_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_success = input_data_view.success();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        SerialPort::Name_, 5, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_success));
  return true;
}

void SerialPort_SetControlSignals_ProxyToResponder::Run(
    bool in_success) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSerialPort_SetControlSignals_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::SerialPort_SetControlSignals_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->success = in_success;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::SerialPort::SetControlSignalsCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(SerialPort::Name_);
  message.set_method_name("SetControlSignals");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class SerialPort_ConfigurePort_ProxyToResponder {
 public:
  static SerialPort::ConfigurePortCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<SerialPort_ConfigurePort_ProxyToResponder> proxy(
        new SerialPort_ConfigurePort_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&SerialPort_ConfigurePort_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~SerialPort_ConfigurePort_ProxyToResponder() {
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
  SerialPort_ConfigurePort_ProxyToResponder(
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
        << "SerialPort::ConfigurePortCallback was destroyed without "
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

  DISALLOW_COPY_AND_ASSIGN(SerialPort_ConfigurePort_ProxyToResponder);
};

bool SerialPort_ConfigurePort_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::SerialPort::ConfigurePortCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::SerialPort_ConfigurePort_ResponseParams_Data* params =
      reinterpret_cast<
          internal::SerialPort_ConfigurePort_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_success{};
  SerialPort_ConfigurePort_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_success = input_data_view.success();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        SerialPort::Name_, 6, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_success));
  return true;
}

void SerialPort_ConfigurePort_ProxyToResponder::Run(
    bool in_success) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSerialPort_ConfigurePort_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::SerialPort_ConfigurePort_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->success = in_success;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::SerialPort::ConfigurePortCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(SerialPort::Name_);
  message.set_method_name("ConfigurePort");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class SerialPort_GetPortInfo_ProxyToResponder {
 public:
  static SerialPort::GetPortInfoCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<SerialPort_GetPortInfo_ProxyToResponder> proxy(
        new SerialPort_GetPortInfo_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&SerialPort_GetPortInfo_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~SerialPort_GetPortInfo_ProxyToResponder() {
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
  SerialPort_GetPortInfo_ProxyToResponder(
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
        << "SerialPort::GetPortInfoCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      SerialConnectionInfoPtr in_info);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(SerialPort_GetPortInfo_ProxyToResponder);
};

bool SerialPort_GetPortInfo_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::SerialPort::GetPortInfoCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::SerialPort_GetPortInfo_ResponseParams_Data* params =
      reinterpret_cast<
          internal::SerialPort_GetPortInfo_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  SerialConnectionInfoPtr p_info{};
  SerialPort_GetPortInfo_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadInfo(&p_info))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        SerialPort::Name_, 7, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_info));
  return true;
}

void SerialPort_GetPortInfo_ProxyToResponder::Run(
    SerialConnectionInfoPtr in_info) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSerialPort_GetPortInfo_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::SerialPort_GetPortInfo_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->info)::BaseType::BufferWriter
      info_writer;
  mojo::internal::Serialize<::device::mojom::SerialConnectionInfoDataView>(
      in_info, buffer, &info_writer, &serialization_context);
  params->info.Set(
      info_writer.is_null() ? nullptr : info_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->info.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null info in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::SerialPort::GetPortInfoCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(SerialPort::Name_);
  message.set_method_name("GetPortInfo");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class SerialPort_SetBreak_ProxyToResponder {
 public:
  static SerialPort::SetBreakCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<SerialPort_SetBreak_ProxyToResponder> proxy(
        new SerialPort_SetBreak_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&SerialPort_SetBreak_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~SerialPort_SetBreak_ProxyToResponder() {
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
  SerialPort_SetBreak_ProxyToResponder(
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
        << "SerialPort::SetBreakCallback was destroyed without "
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

  DISALLOW_COPY_AND_ASSIGN(SerialPort_SetBreak_ProxyToResponder);
};

bool SerialPort_SetBreak_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::SerialPort::SetBreakCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::SerialPort_SetBreak_ResponseParams_Data* params =
      reinterpret_cast<
          internal::SerialPort_SetBreak_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_success{};
  SerialPort_SetBreak_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_success = input_data_view.success();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        SerialPort::Name_, 8, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_success));
  return true;
}

void SerialPort_SetBreak_ProxyToResponder::Run(
    bool in_success) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSerialPort_SetBreak_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::SerialPort_SetBreak_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->success = in_success;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::SerialPort::SetBreakCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(SerialPort::Name_);
  message.set_method_name("SetBreak");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class SerialPort_ClearBreak_ProxyToResponder {
 public:
  static SerialPort::ClearBreakCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<SerialPort_ClearBreak_ProxyToResponder> proxy(
        new SerialPort_ClearBreak_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&SerialPort_ClearBreak_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~SerialPort_ClearBreak_ProxyToResponder() {
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
  SerialPort_ClearBreak_ProxyToResponder(
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
        << "SerialPort::ClearBreakCallback was destroyed without "
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

  DISALLOW_COPY_AND_ASSIGN(SerialPort_ClearBreak_ProxyToResponder);
};

bool SerialPort_ClearBreak_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::SerialPort::ClearBreakCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::SerialPort_ClearBreak_ResponseParams_Data* params =
      reinterpret_cast<
          internal::SerialPort_ClearBreak_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_success{};
  SerialPort_ClearBreak_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_success = input_data_view.success();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        SerialPort::Name_, 9, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_success));
  return true;
}

void SerialPort_ClearBreak_ProxyToResponder::Run(
    bool in_success) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSerialPort_ClearBreak_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::SerialPort_ClearBreak_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->success = in_success;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::SerialPort::ClearBreakCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(SerialPort::Name_);
  message.set_method_name("ClearBreak");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool SerialPortStubDispatch::Accept(
    SerialPort* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kSerialPort_Open_Name: {
      break;
    }
    case internal::kSerialPort_ClearSendError_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::SerialPort::ClearSendError",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::SerialPort_ClearSendError_Params_Data* params =
          reinterpret_cast<internal::SerialPort_ClearSendError_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      mojo::ScopedDataPipeConsumerHandle p_consumer{};
      SerialPort_ClearSendError_ParamsDataView input_data_view(params, &serialization_context);
      
      p_consumer = input_data_view.TakeConsumer();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            SerialPort::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->ClearSendError(
std::move(p_consumer));
      return true;
    }
    case internal::kSerialPort_ClearReadError_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::SerialPort::ClearReadError",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::SerialPort_ClearReadError_Params_Data* params =
          reinterpret_cast<internal::SerialPort_ClearReadError_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      mojo::ScopedDataPipeProducerHandle p_producer{};
      SerialPort_ClearReadError_ParamsDataView input_data_view(params, &serialization_context);
      
      p_producer = input_data_view.TakeProducer();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            SerialPort::Name_, 2, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->ClearReadError(
std::move(p_producer));
      return true;
    }
    case internal::kSerialPort_Flush_Name: {
      break;
    }
    case internal::kSerialPort_GetControlSignals_Name: {
      break;
    }
    case internal::kSerialPort_SetControlSignals_Name: {
      break;
    }
    case internal::kSerialPort_ConfigurePort_Name: {
      break;
    }
    case internal::kSerialPort_GetPortInfo_Name: {
      break;
    }
    case internal::kSerialPort_SetBreak_Name: {
      break;
    }
    case internal::kSerialPort_ClearBreak_Name: {
      break;
    }
  }
  return false;
}

// static
bool SerialPortStubDispatch::AcceptWithResponder(
    SerialPort* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kSerialPort_Open_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::SerialPort::Open",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::SerialPort_Open_Params_Data* params =
          reinterpret_cast<
              internal::SerialPort_Open_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      SerialConnectionOptionsPtr p_options{};
      mojo::ScopedDataPipeConsumerHandle p_in_stream{};
      mojo::ScopedDataPipeProducerHandle p_out_stream{};
      SerialPortClientAssociatedPtrInfo p_client{};
      SerialPort_Open_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadOptions(&p_options))
        success = false;
      p_in_stream = input_data_view.TakeInStream();
      p_out_stream = input_data_view.TakeOutStream();
      p_client =
          input_data_view.TakeClient<decltype(p_client)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            SerialPort::Name_, 0, false);
        return false;
      }
      SerialPort::OpenCallback callback =
          SerialPort_Open_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Open(
std::move(p_options), 
std::move(p_in_stream), 
std::move(p_out_stream), 
std::move(p_client), std::move(callback));
      return true;
    }
    case internal::kSerialPort_ClearSendError_Name: {
      break;
    }
    case internal::kSerialPort_ClearReadError_Name: {
      break;
    }
    case internal::kSerialPort_Flush_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::SerialPort::Flush",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::SerialPort_Flush_Params_Data* params =
          reinterpret_cast<
              internal::SerialPort_Flush_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      SerialPort_Flush_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            SerialPort::Name_, 3, false);
        return false;
      }
      SerialPort::FlushCallback callback =
          SerialPort_Flush_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Flush(std::move(callback));
      return true;
    }
    case internal::kSerialPort_GetControlSignals_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::SerialPort::GetControlSignals",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::SerialPort_GetControlSignals_Params_Data* params =
          reinterpret_cast<
              internal::SerialPort_GetControlSignals_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      SerialPort_GetControlSignals_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            SerialPort::Name_, 4, false);
        return false;
      }
      SerialPort::GetControlSignalsCallback callback =
          SerialPort_GetControlSignals_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GetControlSignals(std::move(callback));
      return true;
    }
    case internal::kSerialPort_SetControlSignals_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::SerialPort::SetControlSignals",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::SerialPort_SetControlSignals_Params_Data* params =
          reinterpret_cast<
              internal::SerialPort_SetControlSignals_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      SerialHostControlSignalsPtr p_signals{};
      SerialPort_SetControlSignals_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadSignals(&p_signals))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            SerialPort::Name_, 5, false);
        return false;
      }
      SerialPort::SetControlSignalsCallback callback =
          SerialPort_SetControlSignals_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SetControlSignals(
std::move(p_signals), std::move(callback));
      return true;
    }
    case internal::kSerialPort_ConfigurePort_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::SerialPort::ConfigurePort",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::SerialPort_ConfigurePort_Params_Data* params =
          reinterpret_cast<
              internal::SerialPort_ConfigurePort_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      SerialConnectionOptionsPtr p_options{};
      SerialPort_ConfigurePort_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadOptions(&p_options))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            SerialPort::Name_, 6, false);
        return false;
      }
      SerialPort::ConfigurePortCallback callback =
          SerialPort_ConfigurePort_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->ConfigurePort(
std::move(p_options), std::move(callback));
      return true;
    }
    case internal::kSerialPort_GetPortInfo_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::SerialPort::GetPortInfo",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::SerialPort_GetPortInfo_Params_Data* params =
          reinterpret_cast<
              internal::SerialPort_GetPortInfo_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      SerialPort_GetPortInfo_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            SerialPort::Name_, 7, false);
        return false;
      }
      SerialPort::GetPortInfoCallback callback =
          SerialPort_GetPortInfo_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GetPortInfo(std::move(callback));
      return true;
    }
    case internal::kSerialPort_SetBreak_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::SerialPort::SetBreak",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::SerialPort_SetBreak_Params_Data* params =
          reinterpret_cast<
              internal::SerialPort_SetBreak_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      SerialPort_SetBreak_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            SerialPort::Name_, 8, false);
        return false;
      }
      SerialPort::SetBreakCallback callback =
          SerialPort_SetBreak_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SetBreak(std::move(callback));
      return true;
    }
    case internal::kSerialPort_ClearBreak_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::SerialPort::ClearBreak",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::SerialPort_ClearBreak_Params_Data* params =
          reinterpret_cast<
              internal::SerialPort_ClearBreak_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      SerialPort_ClearBreak_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            SerialPort::Name_, 9, false);
        return false;
      }
      SerialPort::ClearBreakCallback callback =
          SerialPort_ClearBreak_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->ClearBreak(std::move(callback));
      return true;
    }
  }
  return false;
}

bool SerialPortRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "SerialPort RequestValidator");

  switch (message->header()->name) {
    case internal::kSerialPort_Open_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::SerialPort_Open_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kSerialPort_ClearSendError_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::SerialPort_ClearSendError_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kSerialPort_ClearReadError_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::SerialPort_ClearReadError_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kSerialPort_Flush_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::SerialPort_Flush_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kSerialPort_GetControlSignals_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::SerialPort_GetControlSignals_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kSerialPort_SetControlSignals_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::SerialPort_SetControlSignals_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kSerialPort_ConfigurePort_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::SerialPort_ConfigurePort_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kSerialPort_GetPortInfo_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::SerialPort_GetPortInfo_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kSerialPort_SetBreak_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::SerialPort_SetBreak_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kSerialPort_ClearBreak_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::SerialPort_ClearBreak_Params_Data>(
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

bool SerialPortResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "SerialPort ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kSerialPort_Open_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::SerialPort_Open_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kSerialPort_Flush_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::SerialPort_Flush_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kSerialPort_GetControlSignals_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::SerialPort_GetControlSignals_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kSerialPort_SetControlSignals_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::SerialPort_SetControlSignals_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kSerialPort_ConfigurePort_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::SerialPort_ConfigurePort_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kSerialPort_GetPortInfo_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::SerialPort_GetPortInfo_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kSerialPort_SetBreak_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::SerialPort_SetBreak_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kSerialPort_ClearBreak_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::SerialPort_ClearBreak_ResponseParams_Data>(
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
const char SerialPortClient::Name_[] = "device.mojom.SerialPortClient";

SerialPortClientProxy::SerialPortClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void SerialPortClientProxy::OnReadError(
    SerialReceiveError in_error) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::SerialPortClient::OnReadError");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSerialPortClient_OnReadError_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::SerialPortClient_OnReadError_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::device::mojom::SerialReceiveError>(
      in_error, &params->error);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(SerialPortClient::Name_);
  message.set_method_name("OnReadError");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void SerialPortClientProxy::OnSendError(
    SerialSendError in_error) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::SerialPortClient::OnSendError");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSerialPortClient_OnSendError_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::SerialPortClient_OnSendError_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::device::mojom::SerialSendError>(
      in_error, &params->error);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(SerialPortClient::Name_);
  message.set_method_name("OnSendError");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool SerialPortClientStubDispatch::Accept(
    SerialPortClient* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kSerialPortClient_OnReadError_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::SerialPortClient::OnReadError",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::SerialPortClient_OnReadError_Params_Data* params =
          reinterpret_cast<internal::SerialPortClient_OnReadError_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      SerialReceiveError p_error{};
      SerialPortClient_OnReadError_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadError(&p_error))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            SerialPortClient::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnReadError(
std::move(p_error));
      return true;
    }
    case internal::kSerialPortClient_OnSendError_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::SerialPortClient::OnSendError",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::SerialPortClient_OnSendError_Params_Data* params =
          reinterpret_cast<internal::SerialPortClient_OnSendError_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      SerialSendError p_error{};
      SerialPortClient_OnSendError_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadError(&p_error))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            SerialPortClient::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnSendError(
std::move(p_error));
      return true;
    }
  }
  return false;
}

// static
bool SerialPortClientStubDispatch::AcceptWithResponder(
    SerialPortClient* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kSerialPortClient_OnReadError_Name: {
      break;
    }
    case internal::kSerialPortClient_OnSendError_Name: {
      break;
    }
  }
  return false;
}

bool SerialPortClientRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "SerialPortClient RequestValidator");

  switch (message->header()->name) {
    case internal::kSerialPortClient_OnReadError_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::SerialPortClient_OnReadError_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kSerialPortClient_OnSendError_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::SerialPortClient_OnSendError_Params_Data>(
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

const char SerialPortConnectionWatcher::Name_[] = "device.mojom.SerialPortConnectionWatcher";

SerialPortConnectionWatcherProxy::SerialPortConnectionWatcherProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

// static
bool SerialPortConnectionWatcherStubDispatch::Accept(
    SerialPortConnectionWatcher* impl,
    mojo::Message* message) {
  return false;
}

// static
bool SerialPortConnectionWatcherStubDispatch::AcceptWithResponder(
    SerialPortConnectionWatcher* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  return false;
}

bool SerialPortConnectionWatcherRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "SerialPortConnectionWatcher RequestValidator");

  switch (message->header()->name) {
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
bool StructTraits<::device::mojom::SerialPortInfo::DataView, ::device::mojom::SerialPortInfoPtr>::Read(
    ::device::mojom::SerialPortInfo::DataView input,
    ::device::mojom::SerialPortInfoPtr* output) {
  bool success = true;
  ::device::mojom::SerialPortInfoPtr result(::device::mojom::SerialPortInfo::New());
  
      if (!input.ReadToken(&result->token))
        success = false;
      if (!input.ReadPath(&result->path))
        success = false;
      result->vendor_id = input.vendor_id();
      result->has_vendor_id = input.has_vendor_id();
      result->product_id = input.product_id();
      result->has_product_id = input.has_product_id();
      if (!input.ReadDisplayName(&result->display_name))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::device::mojom::SerialConnectionOptions::DataView, ::device::mojom::SerialConnectionOptionsPtr>::Read(
    ::device::mojom::SerialConnectionOptions::DataView input,
    ::device::mojom::SerialConnectionOptionsPtr* output) {
  bool success = true;
  ::device::mojom::SerialConnectionOptionsPtr result(::device::mojom::SerialConnectionOptions::New());
  
      result->bitrate = input.bitrate();
      if (!input.ReadDataBits(&result->data_bits))
        success = false;
      if (!input.ReadParityBit(&result->parity_bit))
        success = false;
      if (!input.ReadStopBits(&result->stop_bits))
        success = false;
      result->cts_flow_control = input.cts_flow_control();
      result->has_cts_flow_control = input.has_cts_flow_control();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::device::mojom::SerialConnectionInfo::DataView, ::device::mojom::SerialConnectionInfoPtr>::Read(
    ::device::mojom::SerialConnectionInfo::DataView input,
    ::device::mojom::SerialConnectionInfoPtr* output) {
  bool success = true;
  ::device::mojom::SerialConnectionInfoPtr result(::device::mojom::SerialConnectionInfo::New());
  
      result->bitrate = input.bitrate();
      if (!input.ReadDataBits(&result->data_bits))
        success = false;
      if (!input.ReadParityBit(&result->parity_bit))
        success = false;
      if (!input.ReadStopBits(&result->stop_bits))
        success = false;
      result->cts_flow_control = input.cts_flow_control();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::device::mojom::SerialHostControlSignals::DataView, ::device::mojom::SerialHostControlSignalsPtr>::Read(
    ::device::mojom::SerialHostControlSignals::DataView input,
    ::device::mojom::SerialHostControlSignalsPtr* output) {
  bool success = true;
  ::device::mojom::SerialHostControlSignalsPtr result(::device::mojom::SerialHostControlSignals::New());
  
      result->dtr = input.dtr();
      result->has_dtr = input.has_dtr();
      result->rts = input.rts();
      result->has_rts = input.has_rts();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::device::mojom::SerialPortControlSignals::DataView, ::device::mojom::SerialPortControlSignalsPtr>::Read(
    ::device::mojom::SerialPortControlSignals::DataView input,
    ::device::mojom::SerialPortControlSignalsPtr* output) {
  bool success = true;
  ::device::mojom::SerialPortControlSignalsPtr result(::device::mojom::SerialPortControlSignals::New());
  
      result->dcd = input.dcd();
      result->cts = input.cts();
      result->ri = input.ri();
      result->dsr = input.dsr();
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif