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

#include "media/mojo/interfaces/remoting.mojom.h"

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

#include "media/mojo/interfaces/remoting.mojom-params-data.h"
#include "media/mojo/interfaces/remoting.mojom-shared-message-ids.h"

#include "media/mojo/interfaces/remoting.mojom-import-headers.h"


#ifndef MEDIA_MOJO_INTERFACES_REMOTING_MOJOM_JUMBO_H_
#define MEDIA_MOJO_INTERFACES_REMOTING_MOJOM_JUMBO_H_
#endif
namespace media {
namespace mojom {
const char RemoterFactory::Name_[] = "media.mojom.RemoterFactory";

RemoterFactoryProxy::RemoterFactoryProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void RemoterFactoryProxy::Create(
    RemotingSourcePtr in_source, RemoterRequest in_remoter) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::RemoterFactory::Create");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kRemoterFactory_Create_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::RemoterFactory_Create_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::media::mojom::RemotingSourcePtrDataView>(
      in_source, &params->source, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->source),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid source in RemoterFactory.Create request");
  mojo::internal::Serialize<::media::mojom::RemoterRequestDataView>(
      in_remoter, &params->remoter, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->remoter),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid remoter in RemoterFactory.Create request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(RemoterFactory::Name_);
  message.set_method_name("Create");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool RemoterFactoryStubDispatch::Accept(
    RemoterFactory* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kRemoterFactory_Create_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::RemoterFactory::Create",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::RemoterFactory_Create_Params_Data* params =
          reinterpret_cast<internal::RemoterFactory_Create_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      RemotingSourcePtr p_source{};
      RemoterRequest p_remoter{};
      RemoterFactory_Create_ParamsDataView input_data_view(params, &serialization_context);
      
      p_source =
          input_data_view.TakeSource<decltype(p_source)>();
      p_remoter =
          input_data_view.TakeRemoter<decltype(p_remoter)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            RemoterFactory::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Create(
std::move(p_source), 
std::move(p_remoter));
      return true;
    }
  }
  return false;
}

// static
bool RemoterFactoryStubDispatch::AcceptWithResponder(
    RemoterFactory* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kRemoterFactory_Create_Name: {
      break;
    }
  }
  return false;
}

bool RemoterFactoryRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "RemoterFactory RequestValidator");

  switch (message->header()->name) {
    case internal::kRemoterFactory_Create_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::RemoterFactory_Create_Params_Data>(
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

const char RemotingDataStreamSender::Name_[] = "media.mojom.RemotingDataStreamSender";

RemotingDataStreamSenderProxy::RemotingDataStreamSenderProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void RemotingDataStreamSenderProxy::SendFrame(
    uint32_t in_frame_size) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::RemotingDataStreamSender::SendFrame");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kRemotingDataStreamSender_SendFrame_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::RemotingDataStreamSender_SendFrame_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->frame_size = in_frame_size;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(RemotingDataStreamSender::Name_);
  message.set_method_name("SendFrame");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void RemotingDataStreamSenderProxy::CancelInFlightData(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::RemotingDataStreamSender::CancelInFlightData");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kRemotingDataStreamSender_CancelInFlightData_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::RemotingDataStreamSender_CancelInFlightData_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(RemotingDataStreamSender::Name_);
  message.set_method_name("CancelInFlightData");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool RemotingDataStreamSenderStubDispatch::Accept(
    RemotingDataStreamSender* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kRemotingDataStreamSender_SendFrame_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::RemotingDataStreamSender::SendFrame",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::RemotingDataStreamSender_SendFrame_Params_Data* params =
          reinterpret_cast<internal::RemotingDataStreamSender_SendFrame_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint32_t p_frame_size{};
      RemotingDataStreamSender_SendFrame_ParamsDataView input_data_view(params, &serialization_context);
      
      p_frame_size = input_data_view.frame_size();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            RemotingDataStreamSender::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SendFrame(
std::move(p_frame_size));
      return true;
    }
    case internal::kRemotingDataStreamSender_CancelInFlightData_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::RemotingDataStreamSender::CancelInFlightData",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::RemotingDataStreamSender_CancelInFlightData_Params_Data* params =
          reinterpret_cast<internal::RemotingDataStreamSender_CancelInFlightData_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      RemotingDataStreamSender_CancelInFlightData_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            RemotingDataStreamSender::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->CancelInFlightData();
      return true;
    }
  }
  return false;
}

// static
bool RemotingDataStreamSenderStubDispatch::AcceptWithResponder(
    RemotingDataStreamSender* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kRemotingDataStreamSender_SendFrame_Name: {
      break;
    }
    case internal::kRemotingDataStreamSender_CancelInFlightData_Name: {
      break;
    }
  }
  return false;
}

bool RemotingDataStreamSenderRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "RemotingDataStreamSender RequestValidator");

  switch (message->header()->name) {
    case internal::kRemotingDataStreamSender_SendFrame_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::RemotingDataStreamSender_SendFrame_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kRemotingDataStreamSender_CancelInFlightData_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::RemotingDataStreamSender_CancelInFlightData_Params_Data>(
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

const char Remoter::Name_[] = "media.mojom.Remoter";

class Remoter_EstimateTransmissionCapacity_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Remoter_EstimateTransmissionCapacity_ForwardToCallback(
      Remoter::EstimateTransmissionCapacityCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Remoter::EstimateTransmissionCapacityCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(Remoter_EstimateTransmissionCapacity_ForwardToCallback);
};

RemoterProxy::RemoterProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void RemoterProxy::Start(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::Remoter::Start");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kRemoter_Start_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::Remoter_Start_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Remoter::Name_);
  message.set_method_name("Start");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void RemoterProxy::StartDataStreams(
    mojo::ScopedDataPipeConsumerHandle in_audio_pipe, mojo::ScopedDataPipeConsumerHandle in_video_pipe, RemotingDataStreamSenderRequest in_audio_sender, RemotingDataStreamSenderRequest in_video_sender) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::Remoter::StartDataStreams");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kRemoter_StartDataStreams_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::Remoter_StartDataStreams_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<mojo::ScopedDataPipeConsumerHandle>(
      in_audio_pipe, &params->audio_pipe, &serialization_context);
  mojo::internal::Serialize<mojo::ScopedDataPipeConsumerHandle>(
      in_video_pipe, &params->video_pipe, &serialization_context);
  mojo::internal::Serialize<::media::mojom::RemotingDataStreamSenderRequestDataView>(
      in_audio_sender, &params->audio_sender, &serialization_context);
  mojo::internal::Serialize<::media::mojom::RemotingDataStreamSenderRequestDataView>(
      in_video_sender, &params->video_sender, &serialization_context);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Remoter::Name_);
  message.set_method_name("StartDataStreams");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void RemoterProxy::Stop(
    ::media::mojom::RemotingStopReason in_reason) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::Remoter::Stop");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kRemoter_Stop_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::Remoter_Stop_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::media::mojom::RemotingStopReason>(
      in_reason, &params->reason);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Remoter::Name_);
  message.set_method_name("Stop");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void RemoterProxy::SendMessageToSink(
    const std::vector<uint8_t>& in_message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::Remoter::SendMessageToSink");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kRemoter_SendMessageToSink_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::Remoter_SendMessageToSink_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->message)::BaseType::BufferWriter
      message_writer;
  const mojo::internal::ContainerValidateParams message_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      in_message, buffer, &message_writer, &message_validate_params,
      &serialization_context);
  params->message.Set(
      message_writer.is_null() ? nullptr : message_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->message.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null message in Remoter.SendMessageToSink request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Remoter::Name_);
  message.set_method_name("SendMessageToSink");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void RemoterProxy::EstimateTransmissionCapacity(
    EstimateTransmissionCapacityCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::Remoter::EstimateTransmissionCapacity");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kRemoter_EstimateTransmissionCapacity_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::Remoter_EstimateTransmissionCapacity_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Remoter::Name_);
  message.set_method_name("EstimateTransmissionCapacity");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new Remoter_EstimateTransmissionCapacity_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class Remoter_EstimateTransmissionCapacity_ProxyToResponder {
 public:
  static Remoter::EstimateTransmissionCapacityCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<Remoter_EstimateTransmissionCapacity_ProxyToResponder> proxy(
        new Remoter_EstimateTransmissionCapacity_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&Remoter_EstimateTransmissionCapacity_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~Remoter_EstimateTransmissionCapacity_ProxyToResponder() {
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
  Remoter_EstimateTransmissionCapacity_ProxyToResponder(
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
        << "Remoter::EstimateTransmissionCapacityCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      double in_rate);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(Remoter_EstimateTransmissionCapacity_ProxyToResponder);
};

bool Remoter_EstimateTransmissionCapacity_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::Remoter::EstimateTransmissionCapacityCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::Remoter_EstimateTransmissionCapacity_ResponseParams_Data* params =
      reinterpret_cast<
          internal::Remoter_EstimateTransmissionCapacity_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  double p_rate{};
  Remoter_EstimateTransmissionCapacity_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_rate = input_data_view.rate();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        Remoter::Name_, 4, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_rate));
  return true;
}

void Remoter_EstimateTransmissionCapacity_ProxyToResponder::Run(
    double in_rate) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kRemoter_EstimateTransmissionCapacity_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::Remoter_EstimateTransmissionCapacity_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->rate = in_rate;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::Remoter::EstimateTransmissionCapacityCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Remoter::Name_);
  message.set_method_name("EstimateTransmissionCapacity");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool RemoterStubDispatch::Accept(
    Remoter* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kRemoter_Start_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::Remoter::Start",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::Remoter_Start_Params_Data* params =
          reinterpret_cast<internal::Remoter_Start_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      Remoter_Start_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            Remoter::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Start();
      return true;
    }
    case internal::kRemoter_StartDataStreams_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::Remoter::StartDataStreams",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::Remoter_StartDataStreams_Params_Data* params =
          reinterpret_cast<internal::Remoter_StartDataStreams_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      mojo::ScopedDataPipeConsumerHandle p_audio_pipe{};
      mojo::ScopedDataPipeConsumerHandle p_video_pipe{};
      RemotingDataStreamSenderRequest p_audio_sender{};
      RemotingDataStreamSenderRequest p_video_sender{};
      Remoter_StartDataStreams_ParamsDataView input_data_view(params, &serialization_context);
      
      p_audio_pipe = input_data_view.TakeAudioPipe();
      p_video_pipe = input_data_view.TakeVideoPipe();
      p_audio_sender =
          input_data_view.TakeAudioSender<decltype(p_audio_sender)>();
      p_video_sender =
          input_data_view.TakeVideoSender<decltype(p_video_sender)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            Remoter::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->StartDataStreams(
std::move(p_audio_pipe), 
std::move(p_video_pipe), 
std::move(p_audio_sender), 
std::move(p_video_sender));
      return true;
    }
    case internal::kRemoter_Stop_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::Remoter::Stop",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::Remoter_Stop_Params_Data* params =
          reinterpret_cast<internal::Remoter_Stop_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::media::mojom::RemotingStopReason p_reason{};
      Remoter_Stop_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadReason(&p_reason))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            Remoter::Name_, 2, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Stop(
std::move(p_reason));
      return true;
    }
    case internal::kRemoter_SendMessageToSink_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::Remoter::SendMessageToSink",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::Remoter_SendMessageToSink_Params_Data* params =
          reinterpret_cast<internal::Remoter_SendMessageToSink_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::vector<uint8_t> p_message{};
      Remoter_SendMessageToSink_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadMessage(&p_message))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            Remoter::Name_, 3, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SendMessageToSink(
std::move(p_message));
      return true;
    }
    case internal::kRemoter_EstimateTransmissionCapacity_Name: {
      break;
    }
  }
  return false;
}

// static
bool RemoterStubDispatch::AcceptWithResponder(
    Remoter* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kRemoter_Start_Name: {
      break;
    }
    case internal::kRemoter_StartDataStreams_Name: {
      break;
    }
    case internal::kRemoter_Stop_Name: {
      break;
    }
    case internal::kRemoter_SendMessageToSink_Name: {
      break;
    }
    case internal::kRemoter_EstimateTransmissionCapacity_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::Remoter::EstimateTransmissionCapacity",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::Remoter_EstimateTransmissionCapacity_Params_Data* params =
          reinterpret_cast<
              internal::Remoter_EstimateTransmissionCapacity_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      Remoter_EstimateTransmissionCapacity_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            Remoter::Name_, 4, false);
        return false;
      }
      Remoter::EstimateTransmissionCapacityCallback callback =
          Remoter_EstimateTransmissionCapacity_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->EstimateTransmissionCapacity(std::move(callback));
      return true;
    }
  }
  return false;
}

bool RemoterRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "Remoter RequestValidator");

  switch (message->header()->name) {
    case internal::kRemoter_Start_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Remoter_Start_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kRemoter_StartDataStreams_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Remoter_StartDataStreams_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kRemoter_Stop_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Remoter_Stop_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kRemoter_SendMessageToSink_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Remoter_SendMessageToSink_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kRemoter_EstimateTransmissionCapacity_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Remoter_EstimateTransmissionCapacity_Params_Data>(
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

bool RemoterResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "Remoter ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kRemoter_EstimateTransmissionCapacity_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Remoter_EstimateTransmissionCapacity_ResponseParams_Data>(
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
const char RemotingSource::Name_[] = "media.mojom.RemotingSource";

RemotingSourceProxy::RemotingSourceProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void RemotingSourceProxy::OnSinkAvailable(
    ::media::mojom::RemotingSinkMetadataPtr in_metadata) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::RemotingSource::OnSinkAvailable");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kRemotingSource_OnSinkAvailable_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::RemotingSource_OnSinkAvailable_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->metadata)::BaseType::BufferWriter
      metadata_writer;
  mojo::internal::Serialize<::media::mojom::RemotingSinkMetadataDataView>(
      in_metadata, buffer, &metadata_writer, &serialization_context);
  params->metadata.Set(
      metadata_writer.is_null() ? nullptr : metadata_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->metadata.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null metadata in RemotingSource.OnSinkAvailable request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(RemotingSource::Name_);
  message.set_method_name("OnSinkAvailable");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void RemotingSourceProxy::OnSinkGone(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::RemotingSource::OnSinkGone");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kRemotingSource_OnSinkGone_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::RemotingSource_OnSinkGone_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(RemotingSource::Name_);
  message.set_method_name("OnSinkGone");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void RemotingSourceProxy::OnStarted(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::RemotingSource::OnStarted");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kRemotingSource_OnStarted_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::RemotingSource_OnStarted_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(RemotingSource::Name_);
  message.set_method_name("OnStarted");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void RemotingSourceProxy::OnStartFailed(
    ::media::mojom::RemotingStartFailReason in_reason) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::RemotingSource::OnStartFailed");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kRemotingSource_OnStartFailed_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::RemotingSource_OnStartFailed_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::media::mojom::RemotingStartFailReason>(
      in_reason, &params->reason);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(RemotingSource::Name_);
  message.set_method_name("OnStartFailed");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void RemotingSourceProxy::OnMessageFromSink(
    const std::vector<uint8_t>& in_message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::RemotingSource::OnMessageFromSink");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kRemotingSource_OnMessageFromSink_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::RemotingSource_OnMessageFromSink_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->message)::BaseType::BufferWriter
      message_writer;
  const mojo::internal::ContainerValidateParams message_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      in_message, buffer, &message_writer, &message_validate_params,
      &serialization_context);
  params->message.Set(
      message_writer.is_null() ? nullptr : message_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->message.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null message in RemotingSource.OnMessageFromSink request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(RemotingSource::Name_);
  message.set_method_name("OnMessageFromSink");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void RemotingSourceProxy::OnStopped(
    ::media::mojom::RemotingStopReason in_reason) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::RemotingSource::OnStopped");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kRemotingSource_OnStopped_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::RemotingSource_OnStopped_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::media::mojom::RemotingStopReason>(
      in_reason, &params->reason);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(RemotingSource::Name_);
  message.set_method_name("OnStopped");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool RemotingSourceStubDispatch::Accept(
    RemotingSource* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kRemotingSource_OnSinkAvailable_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::RemotingSource::OnSinkAvailable",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::RemotingSource_OnSinkAvailable_Params_Data* params =
          reinterpret_cast<internal::RemotingSource_OnSinkAvailable_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::media::mojom::RemotingSinkMetadataPtr p_metadata{};
      RemotingSource_OnSinkAvailable_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadMetadata(&p_metadata))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            RemotingSource::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnSinkAvailable(
std::move(p_metadata));
      return true;
    }
    case internal::kRemotingSource_OnSinkGone_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::RemotingSource::OnSinkGone",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::RemotingSource_OnSinkGone_Params_Data* params =
          reinterpret_cast<internal::RemotingSource_OnSinkGone_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      RemotingSource_OnSinkGone_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            RemotingSource::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnSinkGone();
      return true;
    }
    case internal::kRemotingSource_OnStarted_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::RemotingSource::OnStarted",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::RemotingSource_OnStarted_Params_Data* params =
          reinterpret_cast<internal::RemotingSource_OnStarted_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      RemotingSource_OnStarted_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            RemotingSource::Name_, 2, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnStarted();
      return true;
    }
    case internal::kRemotingSource_OnStartFailed_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::RemotingSource::OnStartFailed",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::RemotingSource_OnStartFailed_Params_Data* params =
          reinterpret_cast<internal::RemotingSource_OnStartFailed_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::media::mojom::RemotingStartFailReason p_reason{};
      RemotingSource_OnStartFailed_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadReason(&p_reason))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            RemotingSource::Name_, 3, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnStartFailed(
std::move(p_reason));
      return true;
    }
    case internal::kRemotingSource_OnMessageFromSink_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::RemotingSource::OnMessageFromSink",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::RemotingSource_OnMessageFromSink_Params_Data* params =
          reinterpret_cast<internal::RemotingSource_OnMessageFromSink_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::vector<uint8_t> p_message{};
      RemotingSource_OnMessageFromSink_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadMessage(&p_message))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            RemotingSource::Name_, 4, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnMessageFromSink(
std::move(p_message));
      return true;
    }
    case internal::kRemotingSource_OnStopped_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::RemotingSource::OnStopped",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::RemotingSource_OnStopped_Params_Data* params =
          reinterpret_cast<internal::RemotingSource_OnStopped_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::media::mojom::RemotingStopReason p_reason{};
      RemotingSource_OnStopped_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadReason(&p_reason))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            RemotingSource::Name_, 5, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnStopped(
std::move(p_reason));
      return true;
    }
  }
  return false;
}

// static
bool RemotingSourceStubDispatch::AcceptWithResponder(
    RemotingSource* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kRemotingSource_OnSinkAvailable_Name: {
      break;
    }
    case internal::kRemotingSource_OnSinkGone_Name: {
      break;
    }
    case internal::kRemotingSource_OnStarted_Name: {
      break;
    }
    case internal::kRemotingSource_OnStartFailed_Name: {
      break;
    }
    case internal::kRemotingSource_OnMessageFromSink_Name: {
      break;
    }
    case internal::kRemotingSource_OnStopped_Name: {
      break;
    }
  }
  return false;
}

bool RemotingSourceRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "RemotingSource RequestValidator");

  switch (message->header()->name) {
    case internal::kRemotingSource_OnSinkAvailable_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::RemotingSource_OnSinkAvailable_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kRemotingSource_OnSinkGone_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::RemotingSource_OnSinkGone_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kRemotingSource_OnStarted_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::RemotingSource_OnStarted_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kRemotingSource_OnStartFailed_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::RemotingSource_OnStartFailed_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kRemotingSource_OnMessageFromSink_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::RemotingSource_OnMessageFromSink_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kRemotingSource_OnStopped_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::RemotingSource_OnStopped_Params_Data>(
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
}  // namespace media

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif