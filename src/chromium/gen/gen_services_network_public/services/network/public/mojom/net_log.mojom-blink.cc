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

#include "services/network/public/mojom/net_log.mojom-blink.h"

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

#include "services/network/public/mojom/net_log.mojom-params-data.h"
#include "services/network/public/mojom/net_log.mojom-shared-message-ids.h"

#include "services/network/public/mojom/net_log.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_NET_LOG_MOJOM_BLINK_JUMBO_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_NET_LOG_MOJOM_BLINK_JUMBO_H_
#include "mojo/public/cpp/base/file_mojom_traits.h"
#endif
namespace network {
namespace mojom {
namespace blink {
const char NetLogExporter::Name_[] = "network.mojom.NetLogExporter";
constexpr uint64_t NetLogExporter::kUnlimitedFileSize;

class NetLogExporter_Start_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  NetLogExporter_Start_ForwardToCallback(
      NetLogExporter::StartCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  NetLogExporter::StartCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(NetLogExporter_Start_ForwardToCallback);
};

class NetLogExporter_Stop_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  NetLogExporter_Stop_ForwardToCallback(
      NetLogExporter::StopCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  NetLogExporter::StopCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(NetLogExporter_Stop_ForwardToCallback);
};

NetLogExporterProxy::NetLogExporterProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void NetLogExporterProxy::Start(
    base::File in_destination, ::mojo_base::mojom::blink::DictionaryValuePtr in_extra_constants, NetLogCaptureMode in_capture_mode, uint64_t in_max_file_size, StartCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NetLogExporter::Start");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetLogExporter_Start_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetLogExporter_Start_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->destination)::BaseType::BufferWriter
      destination_writer;
  mojo::internal::Serialize<::mojo_base::mojom::FileDataView>(
      in_destination, buffer, &destination_writer, &serialization_context);
  params->destination.Set(
      destination_writer.is_null() ? nullptr : destination_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->destination.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null destination in NetLogExporter.Start request");
  typename decltype(params->extra_constants)::BaseType::BufferWriter
      extra_constants_writer;
  mojo::internal::Serialize<::mojo_base::mojom::DictionaryValueDataView>(
      in_extra_constants, buffer, &extra_constants_writer, &serialization_context);
  params->extra_constants.Set(
      extra_constants_writer.is_null() ? nullptr : extra_constants_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->extra_constants.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null extra_constants in NetLogExporter.Start request");
  mojo::internal::Serialize<::network::mojom::NetLogCaptureMode>(
      in_capture_mode, &params->capture_mode);
  params->max_file_size = in_max_file_size;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetLogExporter::Name_);
  message.set_method_name("Start");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NetLogExporter_Start_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void NetLogExporterProxy::Stop(
    ::mojo_base::mojom::blink::DictionaryValuePtr in_polled_values, StopCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NetLogExporter::Stop");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetLogExporter_Stop_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetLogExporter_Stop_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->polled_values)::BaseType::BufferWriter
      polled_values_writer;
  mojo::internal::Serialize<::mojo_base::mojom::DictionaryValueDataView>(
      in_polled_values, buffer, &polled_values_writer, &serialization_context);
  params->polled_values.Set(
      polled_values_writer.is_null() ? nullptr : polled_values_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->polled_values.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null polled_values in NetLogExporter.Stop request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetLogExporter::Name_);
  message.set_method_name("Stop");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NetLogExporter_Stop_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class NetLogExporter_Start_ProxyToResponder {
 public:
  static NetLogExporter::StartCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<NetLogExporter_Start_ProxyToResponder> proxy(
        new NetLogExporter_Start_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&NetLogExporter_Start_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~NetLogExporter_Start_ProxyToResponder() {
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
  NetLogExporter_Start_ProxyToResponder(
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
        << "NetLogExporter::StartCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      int32_t in_net_error);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(NetLogExporter_Start_ProxyToResponder);
};

bool NetLogExporter_Start_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::NetLogExporter::StartCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::NetLogExporter_Start_ResponseParams_Data* params =
      reinterpret_cast<
          internal::NetLogExporter_Start_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  int32_t p_net_error{};
  NetLogExporter_Start_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_net_error = input_data_view.net_error();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        NetLogExporter::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_net_error));
  return true;
}

void NetLogExporter_Start_ProxyToResponder::Run(
    int32_t in_net_error) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetLogExporter_Start_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetLogExporter_Start_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->net_error = in_net_error;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::NetLogExporter::StartCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetLogExporter::Name_);
  message.set_method_name("Start");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class NetLogExporter_Stop_ProxyToResponder {
 public:
  static NetLogExporter::StopCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<NetLogExporter_Stop_ProxyToResponder> proxy(
        new NetLogExporter_Stop_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&NetLogExporter_Stop_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~NetLogExporter_Stop_ProxyToResponder() {
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
  NetLogExporter_Stop_ProxyToResponder(
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
        << "NetLogExporter::StopCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      int32_t in_net_error);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(NetLogExporter_Stop_ProxyToResponder);
};

bool NetLogExporter_Stop_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::NetLogExporter::StopCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::NetLogExporter_Stop_ResponseParams_Data* params =
      reinterpret_cast<
          internal::NetLogExporter_Stop_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  int32_t p_net_error{};
  NetLogExporter_Stop_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_net_error = input_data_view.net_error();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        NetLogExporter::Name_, 1, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_net_error));
  return true;
}

void NetLogExporter_Stop_ProxyToResponder::Run(
    int32_t in_net_error) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetLogExporter_Stop_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetLogExporter_Stop_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->net_error = in_net_error;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::NetLogExporter::StopCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetLogExporter::Name_);
  message.set_method_name("Stop");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool NetLogExporterStubDispatch::Accept(
    NetLogExporter* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kNetLogExporter_Start_Name: {
      break;
    }
    case internal::kNetLogExporter_Stop_Name: {
      break;
    }
  }
  return false;
}

// static
bool NetLogExporterStubDispatch::AcceptWithResponder(
    NetLogExporter* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kNetLogExporter_Start_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NetLogExporter::Start",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::NetLogExporter_Start_Params_Data* params =
          reinterpret_cast<
              internal::NetLogExporter_Start_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      base::File p_destination{};
      ::mojo_base::mojom::blink::DictionaryValuePtr p_extra_constants{};
      NetLogCaptureMode p_capture_mode{};
      uint64_t p_max_file_size{};
      NetLogExporter_Start_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadDestination(&p_destination))
        success = false;
      if (!input_data_view.ReadExtraConstants(&p_extra_constants))
        success = false;
      if (!input_data_view.ReadCaptureMode(&p_capture_mode))
        success = false;
      p_max_file_size = input_data_view.max_file_size();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NetLogExporter::Name_, 0, false);
        return false;
      }
      NetLogExporter::StartCallback callback =
          NetLogExporter_Start_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Start(
std::move(p_destination), 
std::move(p_extra_constants), 
std::move(p_capture_mode), 
std::move(p_max_file_size), std::move(callback));
      return true;
    }
    case internal::kNetLogExporter_Stop_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NetLogExporter::Stop",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::NetLogExporter_Stop_Params_Data* params =
          reinterpret_cast<
              internal::NetLogExporter_Stop_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::mojo_base::mojom::blink::DictionaryValuePtr p_polled_values{};
      NetLogExporter_Stop_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadPolledValues(&p_polled_values))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NetLogExporter::Name_, 1, false);
        return false;
      }
      NetLogExporter::StopCallback callback =
          NetLogExporter_Stop_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Stop(
std::move(p_polled_values), std::move(callback));
      return true;
    }
  }
  return false;
}

bool NetLogExporterRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "NetLogExporter RequestValidator");

  switch (message->header()->name) {
    case internal::kNetLogExporter_Start_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetLogExporter_Start_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetLogExporter_Stop_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetLogExporter_Stop_Params_Data>(
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

bool NetLogExporterResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "NetLogExporter ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kNetLogExporter_Start_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetLogExporter_Start_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetLogExporter_Stop_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetLogExporter_Stop_ResponseParams_Data>(
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
}  // namespace network

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif