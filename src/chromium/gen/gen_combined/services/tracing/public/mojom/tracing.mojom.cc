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

#include "services/tracing/public/mojom/tracing.mojom.h"

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

#include "services/tracing/public/mojom/tracing.mojom-params-data.h"
#include "services/tracing/public/mojom/tracing.mojom-shared-message-ids.h"

#include "services/tracing/public/mojom/tracing.mojom-import-headers.h"


#ifndef SERVICES_TRACING_PUBLIC_MOJOM_TRACING_MOJOM_JUMBO_H_
#define SERVICES_TRACING_PUBLIC_MOJOM_TRACING_MOJOM_JUMBO_H_
#include "mojo/public/cpp/base/process_id_mojom_traits.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "mojo/public/cpp/base/values_mojom_traits.h"
#endif
namespace tracing {
namespace mojom {
const char AgentRegistry::Name_[] = "tracing.mojom.AgentRegistry";

AgentRegistryProxy::AgentRegistryProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void AgentRegistryProxy::RegisterAgent(
    AgentPtr in_agent, const std::string& in_label, TraceDataType in_type, base::ProcessId in_pid) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::AgentRegistry::RegisterAgent");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAgentRegistry_RegisterAgent_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::tracing::mojom::internal::AgentRegistry_RegisterAgent_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::tracing::mojom::AgentPtrDataView>(
      in_agent, &params->agent, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->agent),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid agent in AgentRegistry.RegisterAgent request");
  typename decltype(params->label)::BaseType::BufferWriter
      label_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_label, buffer, &label_writer, &serialization_context);
  params->label.Set(
      label_writer.is_null() ? nullptr : label_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->label.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null label in AgentRegistry.RegisterAgent request");
  mojo::internal::Serialize<::tracing::mojom::TraceDataType>(
      in_type, &params->type);
  typename decltype(params->pid)::BaseType::BufferWriter
      pid_writer;
  mojo::internal::Serialize<::mojo_base::mojom::ProcessIdDataView>(
      in_pid, buffer, &pid_writer, &serialization_context);
  params->pid.Set(
      pid_writer.is_null() ? nullptr : pid_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->pid.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null pid in AgentRegistry.RegisterAgent request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(AgentRegistry::Name_);
  message.set_method_name("RegisterAgent");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool AgentRegistryStubDispatch::Accept(
    AgentRegistry* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kAgentRegistry_RegisterAgent_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::AgentRegistry::RegisterAgent",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::AgentRegistry_RegisterAgent_Params_Data* params =
          reinterpret_cast<internal::AgentRegistry_RegisterAgent_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      AgentPtr p_agent{};
      std::string p_label{};
      TraceDataType p_type{};
      base::ProcessId p_pid{};
      AgentRegistry_RegisterAgent_ParamsDataView input_data_view(params, &serialization_context);
      
      p_agent =
          input_data_view.TakeAgent<decltype(p_agent)>();
      if (!input_data_view.ReadLabel(&p_label))
        success = false;
      if (!input_data_view.ReadType(&p_type))
        success = false;
      if (!input_data_view.ReadPid(&p_pid))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            AgentRegistry::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->RegisterAgent(
std::move(p_agent), 
std::move(p_label), 
std::move(p_type), 
std::move(p_pid));
      return true;
    }
  }
  return false;
}

// static
bool AgentRegistryStubDispatch::AcceptWithResponder(
    AgentRegistry* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kAgentRegistry_RegisterAgent_Name: {
      break;
    }
  }
  return false;
}

bool AgentRegistryRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "AgentRegistry RequestValidator");

  switch (message->header()->name) {
    case internal::kAgentRegistry_RegisterAgent_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AgentRegistry_RegisterAgent_Params_Data>(
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

const char Agent::Name_[] = "tracing.mojom.Agent";

class Agent_StartTracing_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Agent_StartTracing_ForwardToCallback(
      Agent::StartTracingCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Agent::StartTracingCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(Agent_StartTracing_ForwardToCallback);
};

class Agent_RequestBufferStatus_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Agent_RequestBufferStatus_ForwardToCallback(
      Agent::RequestBufferStatusCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Agent::RequestBufferStatusCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(Agent_RequestBufferStatus_ForwardToCallback);
};

AgentProxy::AgentProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void AgentProxy::StartTracing(
    const std::string& in_config, base::TimeTicks in_coordinator_time, StartTracingCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::Agent::StartTracing");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAgent_StartTracing_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::tracing::mojom::internal::Agent_StartTracing_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->config)::BaseType::BufferWriter
      config_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_config, buffer, &config_writer, &serialization_context);
  params->config.Set(
      config_writer.is_null() ? nullptr : config_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->config.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null config in Agent.StartTracing request");
  typename decltype(params->coordinator_time)::BaseType::BufferWriter
      coordinator_time_writer;
  mojo::internal::Serialize<::mojo_base::mojom::TimeTicksDataView>(
      in_coordinator_time, buffer, &coordinator_time_writer, &serialization_context);
  params->coordinator_time.Set(
      coordinator_time_writer.is_null() ? nullptr : coordinator_time_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->coordinator_time.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null coordinator_time in Agent.StartTracing request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Agent::Name_);
  message.set_method_name("StartTracing");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new Agent_StartTracing_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void AgentProxy::StopAndFlush(
    RecorderPtr in_recorder) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::Agent::StopAndFlush");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAgent_StopAndFlush_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::tracing::mojom::internal::Agent_StopAndFlush_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::tracing::mojom::RecorderPtrDataView>(
      in_recorder, &params->recorder, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->recorder),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid recorder in Agent.StopAndFlush request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Agent::Name_);
  message.set_method_name("StopAndFlush");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void AgentProxy::RequestBufferStatus(
    RequestBufferStatusCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::Agent::RequestBufferStatus");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAgent_RequestBufferStatus_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::tracing::mojom::internal::Agent_RequestBufferStatus_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Agent::Name_);
  message.set_method_name("RequestBufferStatus");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new Agent_RequestBufferStatus_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class Agent_StartTracing_ProxyToResponder {
 public:
  static Agent::StartTracingCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<Agent_StartTracing_ProxyToResponder> proxy(
        new Agent_StartTracing_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&Agent_StartTracing_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~Agent_StartTracing_ProxyToResponder() {
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
  Agent_StartTracing_ProxyToResponder(
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
        << "Agent::StartTracingCallback was destroyed without "
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

  DISALLOW_COPY_AND_ASSIGN(Agent_StartTracing_ProxyToResponder);
};

bool Agent_StartTracing_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::Agent::StartTracingCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::Agent_StartTracing_ResponseParams_Data* params =
      reinterpret_cast<
          internal::Agent_StartTracing_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_success{};
  Agent_StartTracing_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_success = input_data_view.success();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        Agent::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_success));
  return true;
}

void Agent_StartTracing_ProxyToResponder::Run(
    bool in_success) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAgent_StartTracing_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::tracing::mojom::internal::Agent_StartTracing_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->success = in_success;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::Agent::StartTracingCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Agent::Name_);
  message.set_method_name("StartTracing");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class Agent_RequestBufferStatus_ProxyToResponder {
 public:
  static Agent::RequestBufferStatusCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<Agent_RequestBufferStatus_ProxyToResponder> proxy(
        new Agent_RequestBufferStatus_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&Agent_RequestBufferStatus_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~Agent_RequestBufferStatus_ProxyToResponder() {
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
  Agent_RequestBufferStatus_ProxyToResponder(
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
        << "Agent::RequestBufferStatusCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      uint32_t in_capacity, uint32_t in_count);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(Agent_RequestBufferStatus_ProxyToResponder);
};

bool Agent_RequestBufferStatus_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::Agent::RequestBufferStatusCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::Agent_RequestBufferStatus_ResponseParams_Data* params =
      reinterpret_cast<
          internal::Agent_RequestBufferStatus_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  uint32_t p_capacity{};
  uint32_t p_count{};
  Agent_RequestBufferStatus_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_capacity = input_data_view.capacity();
  p_count = input_data_view.count();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        Agent::Name_, 2, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_capacity), 
std::move(p_count));
  return true;
}

void Agent_RequestBufferStatus_ProxyToResponder::Run(
    uint32_t in_capacity, uint32_t in_count) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAgent_RequestBufferStatus_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::tracing::mojom::internal::Agent_RequestBufferStatus_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->capacity = in_capacity;
  params->count = in_count;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::Agent::RequestBufferStatusCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Agent::Name_);
  message.set_method_name("RequestBufferStatus");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool AgentStubDispatch::Accept(
    Agent* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kAgent_StartTracing_Name: {
      break;
    }
    case internal::kAgent_StopAndFlush_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::Agent::StopAndFlush",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::Agent_StopAndFlush_Params_Data* params =
          reinterpret_cast<internal::Agent_StopAndFlush_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      RecorderPtr p_recorder{};
      Agent_StopAndFlush_ParamsDataView input_data_view(params, &serialization_context);
      
      p_recorder =
          input_data_view.TakeRecorder<decltype(p_recorder)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            Agent::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->StopAndFlush(
std::move(p_recorder));
      return true;
    }
    case internal::kAgent_RequestBufferStatus_Name: {
      break;
    }
  }
  return false;
}

// static
bool AgentStubDispatch::AcceptWithResponder(
    Agent* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kAgent_StartTracing_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::Agent::StartTracing",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::Agent_StartTracing_Params_Data* params =
          reinterpret_cast<
              internal::Agent_StartTracing_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_config{};
      base::TimeTicks p_coordinator_time{};
      Agent_StartTracing_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadConfig(&p_config))
        success = false;
      if (!input_data_view.ReadCoordinatorTime(&p_coordinator_time))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            Agent::Name_, 0, false);
        return false;
      }
      Agent::StartTracingCallback callback =
          Agent_StartTracing_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->StartTracing(
std::move(p_config), 
std::move(p_coordinator_time), std::move(callback));
      return true;
    }
    case internal::kAgent_StopAndFlush_Name: {
      break;
    }
    case internal::kAgent_RequestBufferStatus_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::Agent::RequestBufferStatus",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::Agent_RequestBufferStatus_Params_Data* params =
          reinterpret_cast<
              internal::Agent_RequestBufferStatus_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      Agent_RequestBufferStatus_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            Agent::Name_, 2, false);
        return false;
      }
      Agent::RequestBufferStatusCallback callback =
          Agent_RequestBufferStatus_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->RequestBufferStatus(std::move(callback));
      return true;
    }
  }
  return false;
}

bool AgentRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "Agent RequestValidator");

  switch (message->header()->name) {
    case internal::kAgent_StartTracing_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Agent_StartTracing_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kAgent_StopAndFlush_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Agent_StopAndFlush_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kAgent_RequestBufferStatus_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Agent_RequestBufferStatus_Params_Data>(
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

bool AgentResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "Agent ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kAgent_StartTracing_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Agent_StartTracing_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kAgent_RequestBufferStatus_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Agent_RequestBufferStatus_ResponseParams_Data>(
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
const char Recorder::Name_[] = "tracing.mojom.Recorder";

RecorderProxy::RecorderProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void RecorderProxy::AddChunk(
    const std::string& in_chunk) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::Recorder::AddChunk");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kRecorder_AddChunk_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::tracing::mojom::internal::Recorder_AddChunk_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->chunk)::BaseType::BufferWriter
      chunk_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_chunk, buffer, &chunk_writer, &serialization_context);
  params->chunk.Set(
      chunk_writer.is_null() ? nullptr : chunk_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->chunk.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null chunk in Recorder.AddChunk request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Recorder::Name_);
  message.set_method_name("AddChunk");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void RecorderProxy::AddMetadata(
    base::Value in_metadata) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::Recorder::AddMetadata");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kRecorder_AddMetadata_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::tracing::mojom::internal::Recorder_AddMetadata_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->metadata)::BaseType::BufferWriter
      metadata_writer;
  mojo::internal::Serialize<::mojo_base::mojom::DictionaryValueDataView>(
      in_metadata, buffer, &metadata_writer, &serialization_context);
  params->metadata.Set(
      metadata_writer.is_null() ? nullptr : metadata_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->metadata.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null metadata in Recorder.AddMetadata request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Recorder::Name_);
  message.set_method_name("AddMetadata");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool RecorderStubDispatch::Accept(
    Recorder* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kRecorder_AddChunk_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::Recorder::AddChunk",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::Recorder_AddChunk_Params_Data* params =
          reinterpret_cast<internal::Recorder_AddChunk_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_chunk{};
      Recorder_AddChunk_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadChunk(&p_chunk))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            Recorder::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->AddChunk(
std::move(p_chunk));
      return true;
    }
    case internal::kRecorder_AddMetadata_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::Recorder::AddMetadata",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::Recorder_AddMetadata_Params_Data* params =
          reinterpret_cast<internal::Recorder_AddMetadata_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      base::Value p_metadata{};
      Recorder_AddMetadata_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadMetadata(&p_metadata))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            Recorder::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->AddMetadata(
std::move(p_metadata));
      return true;
    }
  }
  return false;
}

// static
bool RecorderStubDispatch::AcceptWithResponder(
    Recorder* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kRecorder_AddChunk_Name: {
      break;
    }
    case internal::kRecorder_AddMetadata_Name: {
      break;
    }
  }
  return false;
}

bool RecorderRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "Recorder RequestValidator");

  switch (message->header()->name) {
    case internal::kRecorder_AddChunk_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Recorder_AddChunk_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kRecorder_AddMetadata_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Recorder_AddMetadata_Params_Data>(
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

const char Coordinator::Name_[] = "tracing.mojom.Coordinator";

class Coordinator_StartTracing_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Coordinator_StartTracing_ForwardToCallback(
      Coordinator::StartTracingCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Coordinator::StartTracingCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(Coordinator_StartTracing_ForwardToCallback);
};

class Coordinator_StopAndFlush_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Coordinator_StopAndFlush_ForwardToCallback(
      Coordinator::StopAndFlushCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Coordinator::StopAndFlushCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(Coordinator_StopAndFlush_ForwardToCallback);
};

class Coordinator_StopAndFlushAgent_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Coordinator_StopAndFlushAgent_ForwardToCallback(
      Coordinator::StopAndFlushAgentCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Coordinator::StopAndFlushAgentCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(Coordinator_StopAndFlushAgent_ForwardToCallback);
};

class Coordinator_IsTracing_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Coordinator_IsTracing_ForwardToCallback(
      Coordinator::IsTracingCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Coordinator::IsTracingCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(Coordinator_IsTracing_ForwardToCallback);
};

class Coordinator_RequestBufferUsage_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Coordinator_RequestBufferUsage_ForwardToCallback(
      Coordinator::RequestBufferUsageCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Coordinator::RequestBufferUsageCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(Coordinator_RequestBufferUsage_ForwardToCallback);
};

CoordinatorProxy::CoordinatorProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void CoordinatorProxy::StartTracing(
    const std::string& in_config, StartTracingCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::Coordinator::StartTracing");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCoordinator_StartTracing_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::tracing::mojom::internal::Coordinator_StartTracing_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->config)::BaseType::BufferWriter
      config_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_config, buffer, &config_writer, &serialization_context);
  params->config.Set(
      config_writer.is_null() ? nullptr : config_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->config.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null config in Coordinator.StartTracing request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Coordinator::Name_);
  message.set_method_name("StartTracing");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new Coordinator_StartTracing_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void CoordinatorProxy::StopAndFlush(
    mojo::ScopedDataPipeProducerHandle in_stream, StopAndFlushCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::Coordinator::StopAndFlush");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCoordinator_StopAndFlush_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::tracing::mojom::internal::Coordinator_StopAndFlush_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<mojo::ScopedDataPipeProducerHandle>(
      in_stream, &params->stream, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->stream),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid stream in Coordinator.StopAndFlush request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Coordinator::Name_);
  message.set_method_name("StopAndFlush");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new Coordinator_StopAndFlush_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void CoordinatorProxy::StopAndFlushAgent(
    mojo::ScopedDataPipeProducerHandle in_stream, const std::string& in_agent_label, StopAndFlushAgentCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::Coordinator::StopAndFlushAgent");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCoordinator_StopAndFlushAgent_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::tracing::mojom::internal::Coordinator_StopAndFlushAgent_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<mojo::ScopedDataPipeProducerHandle>(
      in_stream, &params->stream, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->stream),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid stream in Coordinator.StopAndFlushAgent request");
  typename decltype(params->agent_label)::BaseType::BufferWriter
      agent_label_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_agent_label, buffer, &agent_label_writer, &serialization_context);
  params->agent_label.Set(
      agent_label_writer.is_null() ? nullptr : agent_label_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->agent_label.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null agent_label in Coordinator.StopAndFlushAgent request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Coordinator::Name_);
  message.set_method_name("StopAndFlushAgent");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new Coordinator_StopAndFlushAgent_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void CoordinatorProxy::IsTracing(
    IsTracingCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::Coordinator::IsTracing");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCoordinator_IsTracing_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::tracing::mojom::internal::Coordinator_IsTracing_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Coordinator::Name_);
  message.set_method_name("IsTracing");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new Coordinator_IsTracing_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void CoordinatorProxy::RequestBufferUsage(
    RequestBufferUsageCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::Coordinator::RequestBufferUsage");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCoordinator_RequestBufferUsage_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::tracing::mojom::internal::Coordinator_RequestBufferUsage_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Coordinator::Name_);
  message.set_method_name("RequestBufferUsage");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new Coordinator_RequestBufferUsage_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class Coordinator_StartTracing_ProxyToResponder {
 public:
  static Coordinator::StartTracingCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<Coordinator_StartTracing_ProxyToResponder> proxy(
        new Coordinator_StartTracing_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&Coordinator_StartTracing_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~Coordinator_StartTracing_ProxyToResponder() {
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
  Coordinator_StartTracing_ProxyToResponder(
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
        << "Coordinator::StartTracingCallback was destroyed without "
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

  DISALLOW_COPY_AND_ASSIGN(Coordinator_StartTracing_ProxyToResponder);
};

bool Coordinator_StartTracing_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::Coordinator::StartTracingCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::Coordinator_StartTracing_ResponseParams_Data* params =
      reinterpret_cast<
          internal::Coordinator_StartTracing_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_success{};
  Coordinator_StartTracing_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_success = input_data_view.success();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        Coordinator::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_success));
  return true;
}

void Coordinator_StartTracing_ProxyToResponder::Run(
    bool in_success) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCoordinator_StartTracing_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::tracing::mojom::internal::Coordinator_StartTracing_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->success = in_success;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::Coordinator::StartTracingCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Coordinator::Name_);
  message.set_method_name("StartTracing");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class Coordinator_StopAndFlush_ProxyToResponder {
 public:
  static Coordinator::StopAndFlushCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<Coordinator_StopAndFlush_ProxyToResponder> proxy(
        new Coordinator_StopAndFlush_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&Coordinator_StopAndFlush_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~Coordinator_StopAndFlush_ProxyToResponder() {
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
  Coordinator_StopAndFlush_ProxyToResponder(
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
        << "Coordinator::StopAndFlushCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      base::Value in_metadata);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(Coordinator_StopAndFlush_ProxyToResponder);
};

bool Coordinator_StopAndFlush_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::Coordinator::StopAndFlushCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::Coordinator_StopAndFlush_ResponseParams_Data* params =
      reinterpret_cast<
          internal::Coordinator_StopAndFlush_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  base::Value p_metadata{};
  Coordinator_StopAndFlush_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadMetadata(&p_metadata))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        Coordinator::Name_, 1, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_metadata));
  return true;
}

void Coordinator_StopAndFlush_ProxyToResponder::Run(
    base::Value in_metadata) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCoordinator_StopAndFlush_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::tracing::mojom::internal::Coordinator_StopAndFlush_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->metadata)::BaseType::BufferWriter
      metadata_writer;
  mojo::internal::Serialize<::mojo_base::mojom::DictionaryValueDataView>(
      in_metadata, buffer, &metadata_writer, &serialization_context);
  params->metadata.Set(
      metadata_writer.is_null() ? nullptr : metadata_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->metadata.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null metadata in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::Coordinator::StopAndFlushCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Coordinator::Name_);
  message.set_method_name("StopAndFlush");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class Coordinator_StopAndFlushAgent_ProxyToResponder {
 public:
  static Coordinator::StopAndFlushAgentCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<Coordinator_StopAndFlushAgent_ProxyToResponder> proxy(
        new Coordinator_StopAndFlushAgent_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&Coordinator_StopAndFlushAgent_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~Coordinator_StopAndFlushAgent_ProxyToResponder() {
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
  Coordinator_StopAndFlushAgent_ProxyToResponder(
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
        << "Coordinator::StopAndFlushAgentCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      base::Value in_metadata);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(Coordinator_StopAndFlushAgent_ProxyToResponder);
};

bool Coordinator_StopAndFlushAgent_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::Coordinator::StopAndFlushAgentCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::Coordinator_StopAndFlushAgent_ResponseParams_Data* params =
      reinterpret_cast<
          internal::Coordinator_StopAndFlushAgent_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  base::Value p_metadata{};
  Coordinator_StopAndFlushAgent_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadMetadata(&p_metadata))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        Coordinator::Name_, 2, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_metadata));
  return true;
}

void Coordinator_StopAndFlushAgent_ProxyToResponder::Run(
    base::Value in_metadata) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCoordinator_StopAndFlushAgent_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::tracing::mojom::internal::Coordinator_StopAndFlushAgent_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->metadata)::BaseType::BufferWriter
      metadata_writer;
  mojo::internal::Serialize<::mojo_base::mojom::DictionaryValueDataView>(
      in_metadata, buffer, &metadata_writer, &serialization_context);
  params->metadata.Set(
      metadata_writer.is_null() ? nullptr : metadata_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->metadata.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null metadata in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::Coordinator::StopAndFlushAgentCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Coordinator::Name_);
  message.set_method_name("StopAndFlushAgent");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class Coordinator_IsTracing_ProxyToResponder {
 public:
  static Coordinator::IsTracingCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<Coordinator_IsTracing_ProxyToResponder> proxy(
        new Coordinator_IsTracing_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&Coordinator_IsTracing_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~Coordinator_IsTracing_ProxyToResponder() {
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
  Coordinator_IsTracing_ProxyToResponder(
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
        << "Coordinator::IsTracingCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      bool in_is_tracing);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(Coordinator_IsTracing_ProxyToResponder);
};

bool Coordinator_IsTracing_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::Coordinator::IsTracingCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::Coordinator_IsTracing_ResponseParams_Data* params =
      reinterpret_cast<
          internal::Coordinator_IsTracing_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_is_tracing{};
  Coordinator_IsTracing_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_is_tracing = input_data_view.is_tracing();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        Coordinator::Name_, 3, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_is_tracing));
  return true;
}

void Coordinator_IsTracing_ProxyToResponder::Run(
    bool in_is_tracing) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCoordinator_IsTracing_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::tracing::mojom::internal::Coordinator_IsTracing_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->is_tracing = in_is_tracing;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::Coordinator::IsTracingCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Coordinator::Name_);
  message.set_method_name("IsTracing");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class Coordinator_RequestBufferUsage_ProxyToResponder {
 public:
  static Coordinator::RequestBufferUsageCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<Coordinator_RequestBufferUsage_ProxyToResponder> proxy(
        new Coordinator_RequestBufferUsage_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&Coordinator_RequestBufferUsage_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~Coordinator_RequestBufferUsage_ProxyToResponder() {
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
  Coordinator_RequestBufferUsage_ProxyToResponder(
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
        << "Coordinator::RequestBufferUsageCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      bool in_success, float in_percent_full, uint32_t in_approximate_count);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(Coordinator_RequestBufferUsage_ProxyToResponder);
};

bool Coordinator_RequestBufferUsage_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::Coordinator::RequestBufferUsageCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::Coordinator_RequestBufferUsage_ResponseParams_Data* params =
      reinterpret_cast<
          internal::Coordinator_RequestBufferUsage_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_success{};
  float p_percent_full{};
  uint32_t p_approximate_count{};
  Coordinator_RequestBufferUsage_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_success = input_data_view.success();
  p_percent_full = input_data_view.percent_full();
  p_approximate_count = input_data_view.approximate_count();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        Coordinator::Name_, 4, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_success), 
std::move(p_percent_full), 
std::move(p_approximate_count));
  return true;
}

void Coordinator_RequestBufferUsage_ProxyToResponder::Run(
    bool in_success, float in_percent_full, uint32_t in_approximate_count) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCoordinator_RequestBufferUsage_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::tracing::mojom::internal::Coordinator_RequestBufferUsage_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->success = in_success;
  params->percent_full = in_percent_full;
  params->approximate_count = in_approximate_count;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::Coordinator::RequestBufferUsageCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Coordinator::Name_);
  message.set_method_name("RequestBufferUsage");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool CoordinatorStubDispatch::Accept(
    Coordinator* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kCoordinator_StartTracing_Name: {
      break;
    }
    case internal::kCoordinator_StopAndFlush_Name: {
      break;
    }
    case internal::kCoordinator_StopAndFlushAgent_Name: {
      break;
    }
    case internal::kCoordinator_IsTracing_Name: {
      break;
    }
    case internal::kCoordinator_RequestBufferUsage_Name: {
      break;
    }
  }
  return false;
}

// static
bool CoordinatorStubDispatch::AcceptWithResponder(
    Coordinator* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kCoordinator_StartTracing_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::Coordinator::StartTracing",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::Coordinator_StartTracing_Params_Data* params =
          reinterpret_cast<
              internal::Coordinator_StartTracing_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_config{};
      Coordinator_StartTracing_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadConfig(&p_config))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            Coordinator::Name_, 0, false);
        return false;
      }
      Coordinator::StartTracingCallback callback =
          Coordinator_StartTracing_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->StartTracing(
std::move(p_config), std::move(callback));
      return true;
    }
    case internal::kCoordinator_StopAndFlush_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::Coordinator::StopAndFlush",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::Coordinator_StopAndFlush_Params_Data* params =
          reinterpret_cast<
              internal::Coordinator_StopAndFlush_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      mojo::ScopedDataPipeProducerHandle p_stream{};
      Coordinator_StopAndFlush_ParamsDataView input_data_view(params, &serialization_context);
      
      p_stream = input_data_view.TakeStream();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            Coordinator::Name_, 1, false);
        return false;
      }
      Coordinator::StopAndFlushCallback callback =
          Coordinator_StopAndFlush_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->StopAndFlush(
std::move(p_stream), std::move(callback));
      return true;
    }
    case internal::kCoordinator_StopAndFlushAgent_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::Coordinator::StopAndFlushAgent",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::Coordinator_StopAndFlushAgent_Params_Data* params =
          reinterpret_cast<
              internal::Coordinator_StopAndFlushAgent_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      mojo::ScopedDataPipeProducerHandle p_stream{};
      std::string p_agent_label{};
      Coordinator_StopAndFlushAgent_ParamsDataView input_data_view(params, &serialization_context);
      
      p_stream = input_data_view.TakeStream();
      if (!input_data_view.ReadAgentLabel(&p_agent_label))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            Coordinator::Name_, 2, false);
        return false;
      }
      Coordinator::StopAndFlushAgentCallback callback =
          Coordinator_StopAndFlushAgent_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->StopAndFlushAgent(
std::move(p_stream), 
std::move(p_agent_label), std::move(callback));
      return true;
    }
    case internal::kCoordinator_IsTracing_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::Coordinator::IsTracing",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::Coordinator_IsTracing_Params_Data* params =
          reinterpret_cast<
              internal::Coordinator_IsTracing_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      Coordinator_IsTracing_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            Coordinator::Name_, 3, false);
        return false;
      }
      Coordinator::IsTracingCallback callback =
          Coordinator_IsTracing_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->IsTracing(std::move(callback));
      return true;
    }
    case internal::kCoordinator_RequestBufferUsage_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::Coordinator::RequestBufferUsage",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::Coordinator_RequestBufferUsage_Params_Data* params =
          reinterpret_cast<
              internal::Coordinator_RequestBufferUsage_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      Coordinator_RequestBufferUsage_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            Coordinator::Name_, 4, false);
        return false;
      }
      Coordinator::RequestBufferUsageCallback callback =
          Coordinator_RequestBufferUsage_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->RequestBufferUsage(std::move(callback));
      return true;
    }
  }
  return false;
}

bool CoordinatorRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "Coordinator RequestValidator");

  switch (message->header()->name) {
    case internal::kCoordinator_StartTracing_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Coordinator_StartTracing_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kCoordinator_StopAndFlush_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Coordinator_StopAndFlush_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kCoordinator_StopAndFlushAgent_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Coordinator_StopAndFlushAgent_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kCoordinator_IsTracing_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Coordinator_IsTracing_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kCoordinator_RequestBufferUsage_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Coordinator_RequestBufferUsage_Params_Data>(
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

bool CoordinatorResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "Coordinator ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kCoordinator_StartTracing_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Coordinator_StartTracing_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kCoordinator_StopAndFlush_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Coordinator_StopAndFlush_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kCoordinator_StopAndFlushAgent_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Coordinator_StopAndFlushAgent_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kCoordinator_IsTracing_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Coordinator_IsTracing_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kCoordinator_RequestBufferUsage_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Coordinator_RequestBufferUsage_ResponseParams_Data>(
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
}  // namespace tracing

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif