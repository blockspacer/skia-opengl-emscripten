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

#include "third_party/blink/public/mojom/devtools/devtools_agent.mojom-blink.h"

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

#include "third_party/blink/public/mojom/devtools/devtools_agent.mojom-params-data.h"
#include "third_party/blink/public/mojom/devtools/devtools_agent.mojom-shared-message-ids.h"

#include "third_party/blink/public/mojom/devtools/devtools_agent.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_DEVTOOLS_DEVTOOLS_AGENT_MOJOM_BLINK_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_DEVTOOLS_DEVTOOLS_AGENT_MOJOM_BLINK_JUMBO_H_
#include "mojo/public/cpp/base/big_buffer_mojom_traits.h"
#include "mojo/public/cpp/base/unguessable_token_mojom_traits.h"
#include "third_party/blink/renderer/platform/mojo/geometry_struct_traits.h"
#include "third_party/blink/renderer/platform/mojo/kurl_struct_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
#endif
namespace blink {
namespace mojom {
namespace blink {
DevToolsMessage::DevToolsMessage()
    : data() {}

DevToolsMessage::DevToolsMessage(
    mojo_base::BigBuffer data_in)
    : data(std::move(data_in)) {}

DevToolsMessage::~DevToolsMessage() = default;

bool DevToolsMessage::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
DevToolsSessionState::DevToolsSessionState()
    : entries() {}

DevToolsSessionState::DevToolsSessionState(
    const WTF::HashMap<WTF::String, base::Optional<WTF::Vector<uint8_t>>>& entries_in)
    : entries(std::move(entries_in)) {}

DevToolsSessionState::~DevToolsSessionState() = default;

bool DevToolsSessionState::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char DevToolsAgent::Name_[] = "blink.mojom.DevToolsAgent";

class DevToolsAgent_ReportChildWorkers_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  DevToolsAgent_ReportChildWorkers_ForwardToCallback(
      DevToolsAgent::ReportChildWorkersCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  DevToolsAgent::ReportChildWorkersCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(DevToolsAgent_ReportChildWorkers_ForwardToCallback);
};

DevToolsAgentProxy::DevToolsAgentProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void DevToolsAgentProxy::AttachDevToolsSession(
    DevToolsSessionHostAssociatedPtrInfo in_host, DevToolsSessionAssociatedRequest in_session, DevToolsSessionRequest in_io_session, DevToolsSessionStatePtr in_reattach_session_state) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::DevToolsAgent::AttachDevToolsSession");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDevToolsAgent_AttachDevToolsSession_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::DevToolsAgent_AttachDevToolsSession_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::DevToolsSessionHostAssociatedPtrInfoDataView>(
      in_host, &params->host, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->host),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_INTERFACE_ID,
      "invalid host in DevToolsAgent.AttachDevToolsSession request");
  mojo::internal::Serialize<::blink::mojom::DevToolsSessionAssociatedRequestDataView>(
      in_session, &params->session, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->session),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_INTERFACE_ID,
      "invalid session in DevToolsAgent.AttachDevToolsSession request");
  mojo::internal::Serialize<::blink::mojom::DevToolsSessionRequestDataView>(
      in_io_session, &params->io_session, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->io_session),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid io_session in DevToolsAgent.AttachDevToolsSession request");
  typename decltype(params->reattach_session_state)::BaseType::BufferWriter
      reattach_session_state_writer;
  mojo::internal::Serialize<::blink::mojom::DevToolsSessionStateDataView>(
      in_reattach_session_state, buffer, &reattach_session_state_writer, &serialization_context);
  params->reattach_session_state.Set(
      reattach_session_state_writer.is_null() ? nullptr : reattach_session_state_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(DevToolsAgent::Name_);
  message.set_method_name("AttachDevToolsSession");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void DevToolsAgentProxy::InspectElement(
    const ::blink::WebPoint& in_point) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::DevToolsAgent::InspectElement");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDevToolsAgent_InspectElement_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::DevToolsAgent_InspectElement_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->point)::BaseType::BufferWriter
      point_writer;
  mojo::internal::Serialize<::gfx::mojom::PointDataView>(
      in_point, buffer, &point_writer, &serialization_context);
  params->point.Set(
      point_writer.is_null() ? nullptr : point_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->point.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null point in DevToolsAgent.InspectElement request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(DevToolsAgent::Name_);
  message.set_method_name("InspectElement");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void DevToolsAgentProxy::ReportChildWorkers(
    bool in_report, bool in_wait_for_debugger, ReportChildWorkersCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::DevToolsAgent::ReportChildWorkers");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDevToolsAgent_ReportChildWorkers_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::DevToolsAgent_ReportChildWorkers_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->report = in_report;
  params->wait_for_debugger = in_wait_for_debugger;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(DevToolsAgent::Name_);
  message.set_method_name("ReportChildWorkers");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new DevToolsAgent_ReportChildWorkers_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class DevToolsAgent_ReportChildWorkers_ProxyToResponder {
 public:
  static DevToolsAgent::ReportChildWorkersCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<DevToolsAgent_ReportChildWorkers_ProxyToResponder> proxy(
        new DevToolsAgent_ReportChildWorkers_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&DevToolsAgent_ReportChildWorkers_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~DevToolsAgent_ReportChildWorkers_ProxyToResponder() {
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
  DevToolsAgent_ReportChildWorkers_ProxyToResponder(
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
        << "DevToolsAgent::ReportChildWorkersCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      );

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(DevToolsAgent_ReportChildWorkers_ProxyToResponder);
};

bool DevToolsAgent_ReportChildWorkers_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::DevToolsAgent::ReportChildWorkersCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::DevToolsAgent_ReportChildWorkers_ResponseParams_Data* params =
      reinterpret_cast<
          internal::DevToolsAgent_ReportChildWorkers_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  DevToolsAgent_ReportChildWorkers_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        DevToolsAgent::Name_, 2, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run();
  return true;
}

void DevToolsAgent_ReportChildWorkers_ProxyToResponder::Run(
    ) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDevToolsAgent_ReportChildWorkers_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::DevToolsAgent_ReportChildWorkers_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::DevToolsAgent::ReportChildWorkersCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(DevToolsAgent::Name_);
  message.set_method_name("ReportChildWorkers");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool DevToolsAgentStubDispatch::Accept(
    DevToolsAgent* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kDevToolsAgent_AttachDevToolsSession_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::DevToolsAgent::AttachDevToolsSession",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::DevToolsAgent_AttachDevToolsSession_Params_Data* params =
          reinterpret_cast<internal::DevToolsAgent_AttachDevToolsSession_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      DevToolsSessionHostAssociatedPtrInfo p_host{};
      DevToolsSessionAssociatedRequest p_session{};
      DevToolsSessionRequest p_io_session{};
      DevToolsSessionStatePtr p_reattach_session_state{};
      DevToolsAgent_AttachDevToolsSession_ParamsDataView input_data_view(params, &serialization_context);
      
      p_host =
          input_data_view.TakeHost<decltype(p_host)>();
      p_session =
          input_data_view.TakeSession<decltype(p_session)>();
      p_io_session =
          input_data_view.TakeIoSession<decltype(p_io_session)>();
      if (!input_data_view.ReadReattachSessionState(&p_reattach_session_state))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            DevToolsAgent::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->AttachDevToolsSession(
std::move(p_host), 
std::move(p_session), 
std::move(p_io_session), 
std::move(p_reattach_session_state));
      return true;
    }
    case internal::kDevToolsAgent_InspectElement_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::DevToolsAgent::InspectElement",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::DevToolsAgent_InspectElement_Params_Data* params =
          reinterpret_cast<internal::DevToolsAgent_InspectElement_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::blink::WebPoint p_point{};
      DevToolsAgent_InspectElement_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadPoint(&p_point))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            DevToolsAgent::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->InspectElement(
std::move(p_point));
      return true;
    }
    case internal::kDevToolsAgent_ReportChildWorkers_Name: {
      break;
    }
  }
  return false;
}

// static
bool DevToolsAgentStubDispatch::AcceptWithResponder(
    DevToolsAgent* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kDevToolsAgent_AttachDevToolsSession_Name: {
      break;
    }
    case internal::kDevToolsAgent_InspectElement_Name: {
      break;
    }
    case internal::kDevToolsAgent_ReportChildWorkers_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::DevToolsAgent::ReportChildWorkers",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::DevToolsAgent_ReportChildWorkers_Params_Data* params =
          reinterpret_cast<
              internal::DevToolsAgent_ReportChildWorkers_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      bool p_report{};
      bool p_wait_for_debugger{};
      DevToolsAgent_ReportChildWorkers_ParamsDataView input_data_view(params, &serialization_context);
      
      p_report = input_data_view.report();
      p_wait_for_debugger = input_data_view.wait_for_debugger();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            DevToolsAgent::Name_, 2, false);
        return false;
      }
      DevToolsAgent::ReportChildWorkersCallback callback =
          DevToolsAgent_ReportChildWorkers_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->ReportChildWorkers(
std::move(p_report), 
std::move(p_wait_for_debugger), std::move(callback));
      return true;
    }
  }
  return false;
}

bool DevToolsAgentRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "DevToolsAgent RequestValidator");

  switch (message->header()->name) {
    case internal::kDevToolsAgent_AttachDevToolsSession_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::DevToolsAgent_AttachDevToolsSession_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDevToolsAgent_InspectElement_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::DevToolsAgent_InspectElement_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDevToolsAgent_ReportChildWorkers_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::DevToolsAgent_ReportChildWorkers_Params_Data>(
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

bool DevToolsAgentResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "DevToolsAgent ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kDevToolsAgent_ReportChildWorkers_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::DevToolsAgent_ReportChildWorkers_ResponseParams_Data>(
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
const char DevToolsAgentHost::Name_[] = "blink.mojom.DevToolsAgentHost";

DevToolsAgentHostProxy::DevToolsAgentHostProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void DevToolsAgentHostProxy::ChildWorkerCreated(
    DevToolsAgentPtr in_worker_devtools_agent, DevToolsAgentHostRequest in_worker_devtools_agent_host, const ::blink::KURL& in_url, const WTF::String& in_name, const base::UnguessableToken& in_devtools_worker_token, bool in_waiting_for_debugger) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::DevToolsAgentHost::ChildWorkerCreated");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDevToolsAgentHost_ChildWorkerCreated_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::DevToolsAgentHost_ChildWorkerCreated_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::DevToolsAgentPtrDataView>(
      in_worker_devtools_agent, &params->worker_devtools_agent, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->worker_devtools_agent),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid worker_devtools_agent in DevToolsAgentHost.ChildWorkerCreated request");
  mojo::internal::Serialize<::blink::mojom::DevToolsAgentHostRequestDataView>(
      in_worker_devtools_agent_host, &params->worker_devtools_agent_host, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->worker_devtools_agent_host),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid worker_devtools_agent_host in DevToolsAgentHost.ChildWorkerCreated request");
  typename decltype(params->url)::BaseType::BufferWriter
      url_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_url, buffer, &url_writer, &serialization_context);
  params->url.Set(
      url_writer.is_null() ? nullptr : url_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null url in DevToolsAgentHost.ChildWorkerCreated request");
  typename decltype(params->name)::BaseType::BufferWriter
      name_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_name, buffer, &name_writer, &serialization_context);
  params->name.Set(
      name_writer.is_null() ? nullptr : name_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->name.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null name in DevToolsAgentHost.ChildWorkerCreated request");
  typename decltype(params->devtools_worker_token)::BaseType::BufferWriter
      devtools_worker_token_writer;
  mojo::internal::Serialize<::mojo_base::mojom::UnguessableTokenDataView>(
      in_devtools_worker_token, buffer, &devtools_worker_token_writer, &serialization_context);
  params->devtools_worker_token.Set(
      devtools_worker_token_writer.is_null() ? nullptr : devtools_worker_token_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->devtools_worker_token.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null devtools_worker_token in DevToolsAgentHost.ChildWorkerCreated request");
  params->waiting_for_debugger = in_waiting_for_debugger;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(DevToolsAgentHost::Name_);
  message.set_method_name("ChildWorkerCreated");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool DevToolsAgentHostStubDispatch::Accept(
    DevToolsAgentHost* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kDevToolsAgentHost_ChildWorkerCreated_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::DevToolsAgentHost::ChildWorkerCreated",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::DevToolsAgentHost_ChildWorkerCreated_Params_Data* params =
          reinterpret_cast<internal::DevToolsAgentHost_ChildWorkerCreated_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      DevToolsAgentPtr p_worker_devtools_agent{};
      DevToolsAgentHostRequest p_worker_devtools_agent_host{};
      ::blink::KURL p_url{};
      WTF::String p_name{};
      base::UnguessableToken p_devtools_worker_token{};
      bool p_waiting_for_debugger{};
      DevToolsAgentHost_ChildWorkerCreated_ParamsDataView input_data_view(params, &serialization_context);
      
      p_worker_devtools_agent =
          input_data_view.TakeWorkerDevtoolsAgent<decltype(p_worker_devtools_agent)>();
      p_worker_devtools_agent_host =
          input_data_view.TakeWorkerDevtoolsAgentHost<decltype(p_worker_devtools_agent_host)>();
      if (!input_data_view.ReadUrl(&p_url))
        success = false;
      if (!input_data_view.ReadName(&p_name))
        success = false;
      if (!input_data_view.ReadDevtoolsWorkerToken(&p_devtools_worker_token))
        success = false;
      p_waiting_for_debugger = input_data_view.waiting_for_debugger();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            DevToolsAgentHost::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->ChildWorkerCreated(
std::move(p_worker_devtools_agent), 
std::move(p_worker_devtools_agent_host), 
std::move(p_url), 
std::move(p_name), 
std::move(p_devtools_worker_token), 
std::move(p_waiting_for_debugger));
      return true;
    }
  }
  return false;
}

// static
bool DevToolsAgentHostStubDispatch::AcceptWithResponder(
    DevToolsAgentHost* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kDevToolsAgentHost_ChildWorkerCreated_Name: {
      break;
    }
  }
  return false;
}

bool DevToolsAgentHostRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "DevToolsAgentHost RequestValidator");

  switch (message->header()->name) {
    case internal::kDevToolsAgentHost_ChildWorkerCreated_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::DevToolsAgentHost_ChildWorkerCreated_Params_Data>(
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

const char DevToolsSession::Name_[] = "blink.mojom.DevToolsSession";

DevToolsSessionProxy::DevToolsSessionProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void DevToolsSessionProxy::DispatchProtocolCommand(
    int32_t in_call_id, const WTF::String& in_method, DevToolsMessagePtr in_message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::DevToolsSession::DispatchProtocolCommand");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDevToolsSession_DispatchProtocolCommand_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::DevToolsSession_DispatchProtocolCommand_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->call_id = in_call_id;
  typename decltype(params->method)::BaseType::BufferWriter
      method_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_method, buffer, &method_writer, &serialization_context);
  params->method.Set(
      method_writer.is_null() ? nullptr : method_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->method.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null method in DevToolsSession.DispatchProtocolCommand request");
  typename decltype(params->message)::BaseType::BufferWriter
      message_writer;
  mojo::internal::Serialize<::blink::mojom::DevToolsMessageDataView>(
      in_message, buffer, &message_writer, &serialization_context);
  params->message.Set(
      message_writer.is_null() ? nullptr : message_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->message.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null message in DevToolsSession.DispatchProtocolCommand request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(DevToolsSession::Name_);
  message.set_method_name("DispatchProtocolCommand");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool DevToolsSessionStubDispatch::Accept(
    DevToolsSession* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kDevToolsSession_DispatchProtocolCommand_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::DevToolsSession::DispatchProtocolCommand",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::DevToolsSession_DispatchProtocolCommand_Params_Data* params =
          reinterpret_cast<internal::DevToolsSession_DispatchProtocolCommand_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_call_id{};
      WTF::String p_method{};
      DevToolsMessagePtr p_message{};
      DevToolsSession_DispatchProtocolCommand_ParamsDataView input_data_view(params, &serialization_context);
      
      p_call_id = input_data_view.call_id();
      if (!input_data_view.ReadMethod(&p_method))
        success = false;
      if (!input_data_view.ReadMessage(&p_message))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            DevToolsSession::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->DispatchProtocolCommand(
std::move(p_call_id), 
std::move(p_method), 
std::move(p_message));
      return true;
    }
  }
  return false;
}

// static
bool DevToolsSessionStubDispatch::AcceptWithResponder(
    DevToolsSession* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kDevToolsSession_DispatchProtocolCommand_Name: {
      break;
    }
  }
  return false;
}

bool DevToolsSessionRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "DevToolsSession RequestValidator");

  switch (message->header()->name) {
    case internal::kDevToolsSession_DispatchProtocolCommand_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::DevToolsSession_DispatchProtocolCommand_Params_Data>(
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

const char DevToolsSessionHost::Name_[] = "blink.mojom.DevToolsSessionHost";

DevToolsSessionHostProxy::DevToolsSessionHostProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void DevToolsSessionHostProxy::DispatchProtocolResponse(
    DevToolsMessagePtr in_message, int32_t in_call_id, DevToolsSessionStatePtr in_updates) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::DevToolsSessionHost::DispatchProtocolResponse");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDevToolsSessionHost_DispatchProtocolResponse_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::DevToolsSessionHost_DispatchProtocolResponse_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->message)::BaseType::BufferWriter
      message_writer;
  mojo::internal::Serialize<::blink::mojom::DevToolsMessageDataView>(
      in_message, buffer, &message_writer, &serialization_context);
  params->message.Set(
      message_writer.is_null() ? nullptr : message_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->message.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null message in DevToolsSessionHost.DispatchProtocolResponse request");
  params->call_id = in_call_id;
  typename decltype(params->updates)::BaseType::BufferWriter
      updates_writer;
  mojo::internal::Serialize<::blink::mojom::DevToolsSessionStateDataView>(
      in_updates, buffer, &updates_writer, &serialization_context);
  params->updates.Set(
      updates_writer.is_null() ? nullptr : updates_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(DevToolsSessionHost::Name_);
  message.set_method_name("DispatchProtocolResponse");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void DevToolsSessionHostProxy::DispatchProtocolNotification(
    DevToolsMessagePtr in_message, DevToolsSessionStatePtr in_updates) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::DevToolsSessionHost::DispatchProtocolNotification");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDevToolsSessionHost_DispatchProtocolNotification_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::DevToolsSessionHost_DispatchProtocolNotification_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->message)::BaseType::BufferWriter
      message_writer;
  mojo::internal::Serialize<::blink::mojom::DevToolsMessageDataView>(
      in_message, buffer, &message_writer, &serialization_context);
  params->message.Set(
      message_writer.is_null() ? nullptr : message_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->message.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null message in DevToolsSessionHost.DispatchProtocolNotification request");
  typename decltype(params->updates)::BaseType::BufferWriter
      updates_writer;
  mojo::internal::Serialize<::blink::mojom::DevToolsSessionStateDataView>(
      in_updates, buffer, &updates_writer, &serialization_context);
  params->updates.Set(
      updates_writer.is_null() ? nullptr : updates_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(DevToolsSessionHost::Name_);
  message.set_method_name("DispatchProtocolNotification");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool DevToolsSessionHostStubDispatch::Accept(
    DevToolsSessionHost* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kDevToolsSessionHost_DispatchProtocolResponse_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::DevToolsSessionHost::DispatchProtocolResponse",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::DevToolsSessionHost_DispatchProtocolResponse_Params_Data* params =
          reinterpret_cast<internal::DevToolsSessionHost_DispatchProtocolResponse_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      DevToolsMessagePtr p_message{};
      int32_t p_call_id{};
      DevToolsSessionStatePtr p_updates{};
      DevToolsSessionHost_DispatchProtocolResponse_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadMessage(&p_message))
        success = false;
      p_call_id = input_data_view.call_id();
      if (!input_data_view.ReadUpdates(&p_updates))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            DevToolsSessionHost::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->DispatchProtocolResponse(
std::move(p_message), 
std::move(p_call_id), 
std::move(p_updates));
      return true;
    }
    case internal::kDevToolsSessionHost_DispatchProtocolNotification_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::DevToolsSessionHost::DispatchProtocolNotification",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::DevToolsSessionHost_DispatchProtocolNotification_Params_Data* params =
          reinterpret_cast<internal::DevToolsSessionHost_DispatchProtocolNotification_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      DevToolsMessagePtr p_message{};
      DevToolsSessionStatePtr p_updates{};
      DevToolsSessionHost_DispatchProtocolNotification_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadMessage(&p_message))
        success = false;
      if (!input_data_view.ReadUpdates(&p_updates))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            DevToolsSessionHost::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->DispatchProtocolNotification(
std::move(p_message), 
std::move(p_updates));
      return true;
    }
  }
  return false;
}

// static
bool DevToolsSessionHostStubDispatch::AcceptWithResponder(
    DevToolsSessionHost* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kDevToolsSessionHost_DispatchProtocolResponse_Name: {
      break;
    }
    case internal::kDevToolsSessionHost_DispatchProtocolNotification_Name: {
      break;
    }
  }
  return false;
}

bool DevToolsSessionHostRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "DevToolsSessionHost RequestValidator");

  switch (message->header()->name) {
    case internal::kDevToolsSessionHost_DispatchProtocolResponse_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::DevToolsSessionHost_DispatchProtocolResponse_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDevToolsSessionHost_DispatchProtocolNotification_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::DevToolsSessionHost_DispatchProtocolNotification_Params_Data>(
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
bool StructTraits<::blink::mojom::blink::DevToolsMessage::DataView, ::blink::mojom::blink::DevToolsMessagePtr>::Read(
    ::blink::mojom::blink::DevToolsMessage::DataView input,
    ::blink::mojom::blink::DevToolsMessagePtr* output) {
  bool success = true;
  ::blink::mojom::blink::DevToolsMessagePtr result(::blink::mojom::blink::DevToolsMessage::New());
  
      if (!input.ReadData(&result->data))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::blink::mojom::blink::DevToolsSessionState::DataView, ::blink::mojom::blink::DevToolsSessionStatePtr>::Read(
    ::blink::mojom::blink::DevToolsSessionState::DataView input,
    ::blink::mojom::blink::DevToolsSessionStatePtr* output) {
  bool success = true;
  ::blink::mojom::blink::DevToolsSessionStatePtr result(::blink::mojom::blink::DevToolsSessionState::New());
  
      if (!input.ReadEntries(&result->entries))
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