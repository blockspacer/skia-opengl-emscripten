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

#include "third_party/blink/public/mojom/serial/serial.mojom-blink.h"

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

#include "third_party/blink/public/mojom/serial/serial.mojom-params-data.h"
#include "third_party/blink/public/mojom/serial/serial.mojom-shared-message-ids.h"

#include "third_party/blink/public/mojom/serial/serial.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERIAL_SERIAL_MOJOM_BLINK_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERIAL_SERIAL_MOJOM_BLINK_JUMBO_H_
#include "mojo/public/cpp/base/unguessable_token_mojom_traits.h"
#endif
namespace blink {
namespace mojom {
namespace blink {
SerialPortInfo::SerialPortInfo()
    : token(),
      vendor_id(),
      has_vendor_id(),
      product_id(),
      has_product_id() {}

SerialPortInfo::SerialPortInfo(
    const base::UnguessableToken& token_in,
    uint32_t vendor_id_in,
    bool has_vendor_id_in,
    uint16_t product_id_in,
    bool has_product_id_in)
    : token(std::move(token_in)),
      vendor_id(std::move(vendor_id_in)),
      has_vendor_id(std::move(has_vendor_id_in)),
      product_id(std::move(product_id_in)),
      has_product_id(std::move(has_product_id_in)) {}

SerialPortInfo::~SerialPortInfo() = default;

bool SerialPortInfo::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
SerialPortFilter::SerialPortFilter()
    : vendor_id(),
      has_vendor_id(),
      product_id(),
      has_product_id() {}

SerialPortFilter::SerialPortFilter(
    uint32_t vendor_id_in,
    bool has_vendor_id_in,
    uint16_t product_id_in,
    bool has_product_id_in)
    : vendor_id(std::move(vendor_id_in)),
      has_vendor_id(std::move(has_vendor_id_in)),
      product_id(std::move(product_id_in)),
      has_product_id(std::move(has_product_id_in)) {}

SerialPortFilter::~SerialPortFilter() = default;
size_t SerialPortFilter::Hash(size_t seed) const {
  seed = mojo::internal::WTFHash(seed, this->vendor_id);
  seed = mojo::internal::WTFHash(seed, this->has_vendor_id);
  seed = mojo::internal::WTFHash(seed, this->product_id);
  seed = mojo::internal::WTFHash(seed, this->has_product_id);
  return seed;
}

bool SerialPortFilter::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char SerialService::Name_[] = "blink.mojom.SerialService";

class SerialService_GetPorts_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  SerialService_GetPorts_ForwardToCallback(
      SerialService::GetPortsCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  SerialService::GetPortsCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(SerialService_GetPorts_ForwardToCallback);
};

class SerialService_RequestPort_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  SerialService_RequestPort_ForwardToCallback(
      SerialService::RequestPortCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  SerialService::RequestPortCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(SerialService_RequestPort_ForwardToCallback);
};

SerialServiceProxy::SerialServiceProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void SerialServiceProxy::GetPorts(
    GetPortsCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::SerialService::GetPorts");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSerialService_GetPorts_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::SerialService_GetPorts_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(SerialService::Name_);
  message.set_method_name("GetPorts");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new SerialService_GetPorts_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void SerialServiceProxy::RequestPort(
    WTF::Vector<SerialPortFilterPtr> in_filters, RequestPortCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::SerialService::RequestPort");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSerialService_RequestPort_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::SerialService_RequestPort_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->filters)::BaseType::BufferWriter
      filters_writer;
  const mojo::internal::ContainerValidateParams filters_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::blink::mojom::SerialPortFilterDataView>>(
      in_filters, buffer, &filters_writer, &filters_validate_params,
      &serialization_context);
  params->filters.Set(
      filters_writer.is_null() ? nullptr : filters_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->filters.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null filters in SerialService.RequestPort request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(SerialService::Name_);
  message.set_method_name("RequestPort");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new SerialService_RequestPort_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void SerialServiceProxy::GetPort(
    const base::UnguessableToken& in_token, ::device::mojom::blink::SerialPortRequest in_port_request) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::SerialService::GetPort");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSerialService_GetPort_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::SerialService_GetPort_Params_Data::BufferWriter
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
      "null token in SerialService.GetPort request");
  mojo::internal::Serialize<::device::mojom::SerialPortRequestDataView>(
      in_port_request, &params->port_request, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->port_request),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid port_request in SerialService.GetPort request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(SerialService::Name_);
  message.set_method_name("GetPort");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class SerialService_GetPorts_ProxyToResponder {
 public:
  static SerialService::GetPortsCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<SerialService_GetPorts_ProxyToResponder> proxy(
        new SerialService_GetPorts_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&SerialService_GetPorts_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~SerialService_GetPorts_ProxyToResponder() {
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
  SerialService_GetPorts_ProxyToResponder(
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
        << "SerialService::GetPortsCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      WTF::Vector<SerialPortInfoPtr> in_ports);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(SerialService_GetPorts_ProxyToResponder);
};

bool SerialService_GetPorts_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::SerialService::GetPortsCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::SerialService_GetPorts_ResponseParams_Data* params =
      reinterpret_cast<
          internal::SerialService_GetPorts_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  WTF::Vector<SerialPortInfoPtr> p_ports{};
  SerialService_GetPorts_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadPorts(&p_ports))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        SerialService::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_ports));
  return true;
}

void SerialService_GetPorts_ProxyToResponder::Run(
    WTF::Vector<SerialPortInfoPtr> in_ports) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSerialService_GetPorts_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::SerialService_GetPorts_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->ports)::BaseType::BufferWriter
      ports_writer;
  const mojo::internal::ContainerValidateParams ports_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::blink::mojom::SerialPortInfoDataView>>(
      in_ports, buffer, &ports_writer, &ports_validate_params,
      &serialization_context);
  params->ports.Set(
      ports_writer.is_null() ? nullptr : ports_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->ports.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null ports in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::SerialService::GetPortsCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(SerialService::Name_);
  message.set_method_name("GetPorts");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class SerialService_RequestPort_ProxyToResponder {
 public:
  static SerialService::RequestPortCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<SerialService_RequestPort_ProxyToResponder> proxy(
        new SerialService_RequestPort_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&SerialService_RequestPort_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~SerialService_RequestPort_ProxyToResponder() {
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
  SerialService_RequestPort_ProxyToResponder(
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
        << "SerialService::RequestPortCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      SerialPortInfoPtr in_port);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(SerialService_RequestPort_ProxyToResponder);
};

bool SerialService_RequestPort_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::SerialService::RequestPortCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::SerialService_RequestPort_ResponseParams_Data* params =
      reinterpret_cast<
          internal::SerialService_RequestPort_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  SerialPortInfoPtr p_port{};
  SerialService_RequestPort_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadPort(&p_port))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        SerialService::Name_, 1, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_port));
  return true;
}

void SerialService_RequestPort_ProxyToResponder::Run(
    SerialPortInfoPtr in_port) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSerialService_RequestPort_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::SerialService_RequestPort_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->port)::BaseType::BufferWriter
      port_writer;
  mojo::internal::Serialize<::blink::mojom::SerialPortInfoDataView>(
      in_port, buffer, &port_writer, &serialization_context);
  params->port.Set(
      port_writer.is_null() ? nullptr : port_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::SerialService::RequestPortCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(SerialService::Name_);
  message.set_method_name("RequestPort");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool SerialServiceStubDispatch::Accept(
    SerialService* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kSerialService_GetPorts_Name: {
      break;
    }
    case internal::kSerialService_RequestPort_Name: {
      break;
    }
    case internal::kSerialService_GetPort_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::SerialService::GetPort",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::SerialService_GetPort_Params_Data* params =
          reinterpret_cast<internal::SerialService_GetPort_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      base::UnguessableToken p_token{};
      ::device::mojom::blink::SerialPortRequest p_port_request{};
      SerialService_GetPort_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadToken(&p_token))
        success = false;
      p_port_request =
          input_data_view.TakePortRequest<decltype(p_port_request)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            SerialService::Name_, 2, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GetPort(
std::move(p_token), 
std::move(p_port_request));
      return true;
    }
  }
  return false;
}

// static
bool SerialServiceStubDispatch::AcceptWithResponder(
    SerialService* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kSerialService_GetPorts_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::SerialService::GetPorts",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::SerialService_GetPorts_Params_Data* params =
          reinterpret_cast<
              internal::SerialService_GetPorts_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      SerialService_GetPorts_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            SerialService::Name_, 0, false);
        return false;
      }
      SerialService::GetPortsCallback callback =
          SerialService_GetPorts_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GetPorts(std::move(callback));
      return true;
    }
    case internal::kSerialService_RequestPort_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::SerialService::RequestPort",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::SerialService_RequestPort_Params_Data* params =
          reinterpret_cast<
              internal::SerialService_RequestPort_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WTF::Vector<SerialPortFilterPtr> p_filters{};
      SerialService_RequestPort_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadFilters(&p_filters))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            SerialService::Name_, 1, false);
        return false;
      }
      SerialService::RequestPortCallback callback =
          SerialService_RequestPort_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->RequestPort(
std::move(p_filters), std::move(callback));
      return true;
    }
    case internal::kSerialService_GetPort_Name: {
      break;
    }
  }
  return false;
}

bool SerialServiceRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "SerialService RequestValidator");

  switch (message->header()->name) {
    case internal::kSerialService_GetPorts_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::SerialService_GetPorts_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kSerialService_RequestPort_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::SerialService_RequestPort_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kSerialService_GetPort_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::SerialService_GetPort_Params_Data>(
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

bool SerialServiceResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "SerialService ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kSerialService_GetPorts_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::SerialService_GetPorts_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kSerialService_RequestPort_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::SerialService_RequestPort_ResponseParams_Data>(
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
}  // namespace blink

namespace mojo {


// static
bool StructTraits<::blink::mojom::blink::SerialPortInfo::DataView, ::blink::mojom::blink::SerialPortInfoPtr>::Read(
    ::blink::mojom::blink::SerialPortInfo::DataView input,
    ::blink::mojom::blink::SerialPortInfoPtr* output) {
  bool success = true;
  ::blink::mojom::blink::SerialPortInfoPtr result(::blink::mojom::blink::SerialPortInfo::New());
  
      if (!input.ReadToken(&result->token))
        success = false;
      result->vendor_id = input.vendor_id();
      result->has_vendor_id = input.has_vendor_id();
      result->product_id = input.product_id();
      result->has_product_id = input.has_product_id();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::blink::mojom::blink::SerialPortFilter::DataView, ::blink::mojom::blink::SerialPortFilterPtr>::Read(
    ::blink::mojom::blink::SerialPortFilter::DataView input,
    ::blink::mojom::blink::SerialPortFilterPtr* output) {
  bool success = true;
  ::blink::mojom::blink::SerialPortFilterPtr result(::blink::mojom::blink::SerialPortFilter::New());
  
      result->vendor_id = input.vendor_id();
      result->has_vendor_id = input.has_vendor_id();
      result->product_id = input.product_id();
      result->has_product_id = input.has_product_id();
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif