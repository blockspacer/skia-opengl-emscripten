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

#include "services/ws/public/mojom/event_injector.mojom.h"

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

#include "services/ws/public/mojom/event_injector.mojom-params-data.h"
#include "services/ws/public/mojom/event_injector.mojom-shared-message-ids.h"

#include "services/ws/public/mojom/event_injector.mojom-import-headers.h"


#ifndef SERVICES_WS_PUBLIC_MOJOM_EVENT_INJECTOR_MOJOM_JUMBO_H_
#define SERVICES_WS_PUBLIC_MOJOM_EVENT_INJECTOR_MOJOM_JUMBO_H_
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "ui/events/mojo/event_struct_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
#include "ui/latency/mojo/latency_info_struct_traits.h"
#endif
namespace ws {
namespace mojom {
const char EventInjector::Name_[] = "ws.mojom.EventInjector";

class EventInjector_InjectEvent_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  EventInjector_InjectEvent_ForwardToCallback(
      EventInjector::InjectEventCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  EventInjector::InjectEventCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(EventInjector_InjectEvent_ForwardToCallback);
};

EventInjectorProxy::EventInjectorProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void EventInjectorProxy::InjectEvent(
    int64_t in_display_id, std::unique_ptr<ui::Event> in_event, InjectEventCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::EventInjector::InjectEvent");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kEventInjector_InjectEvent_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::EventInjector_InjectEvent_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->display_id = in_display_id;
  typename decltype(params->event)::BaseType::BufferWriter
      event_writer;
  mojo::internal::Serialize<::ui::mojom::EventDataView>(
      in_event, buffer, &event_writer, &serialization_context);
  params->event.Set(
      event_writer.is_null() ? nullptr : event_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->event.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null event in EventInjector.InjectEvent request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(EventInjector::Name_);
  message.set_method_name("InjectEvent");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new EventInjector_InjectEvent_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void EventInjectorProxy::InjectEventNoAck(
    int64_t in_display_id, std::unique_ptr<ui::Event> in_event) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::EventInjector::InjectEventNoAck");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kEventInjector_InjectEventNoAck_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::EventInjector_InjectEventNoAck_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->display_id = in_display_id;
  typename decltype(params->event)::BaseType::BufferWriter
      event_writer;
  mojo::internal::Serialize<::ui::mojom::EventDataView>(
      in_event, buffer, &event_writer, &serialization_context);
  params->event.Set(
      event_writer.is_null() ? nullptr : event_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->event.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null event in EventInjector.InjectEventNoAck request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(EventInjector::Name_);
  message.set_method_name("InjectEventNoAck");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void EventInjectorProxy::InjectEventNoAckNoRewriters(
    int64_t in_display_id, std::unique_ptr<ui::Event> in_event) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::EventInjector::InjectEventNoAckNoRewriters");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kEventInjector_InjectEventNoAckNoRewriters_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::EventInjector_InjectEventNoAckNoRewriters_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->display_id = in_display_id;
  typename decltype(params->event)::BaseType::BufferWriter
      event_writer;
  mojo::internal::Serialize<::ui::mojom::EventDataView>(
      in_event, buffer, &event_writer, &serialization_context);
  params->event.Set(
      event_writer.is_null() ? nullptr : event_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->event.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null event in EventInjector.InjectEventNoAckNoRewriters request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(EventInjector::Name_);
  message.set_method_name("InjectEventNoAckNoRewriters");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class EventInjector_InjectEvent_ProxyToResponder {
 public:
  static EventInjector::InjectEventCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<EventInjector_InjectEvent_ProxyToResponder> proxy(
        new EventInjector_InjectEvent_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&EventInjector_InjectEvent_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~EventInjector_InjectEvent_ProxyToResponder() {
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
  EventInjector_InjectEvent_ProxyToResponder(
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
        << "EventInjector::InjectEventCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      bool in_result);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(EventInjector_InjectEvent_ProxyToResponder);
};

bool EventInjector_InjectEvent_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::EventInjector::InjectEventCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::EventInjector_InjectEvent_ResponseParams_Data* params =
      reinterpret_cast<
          internal::EventInjector_InjectEvent_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_result{};
  EventInjector_InjectEvent_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_result = input_data_view.result();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        EventInjector::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result));
  return true;
}

void EventInjector_InjectEvent_ProxyToResponder::Run(
    bool in_result) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kEventInjector_InjectEvent_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::EventInjector_InjectEvent_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->result = in_result;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::EventInjector::InjectEventCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(EventInjector::Name_);
  message.set_method_name("InjectEvent");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool EventInjectorStubDispatch::Accept(
    EventInjector* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kEventInjector_InjectEvent_Name: {
      break;
    }
    case internal::kEventInjector_InjectEventNoAck_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::EventInjector::InjectEventNoAck",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::EventInjector_InjectEventNoAck_Params_Data* params =
          reinterpret_cast<internal::EventInjector_InjectEventNoAck_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int64_t p_display_id{};
      std::unique_ptr<ui::Event> p_event{};
      EventInjector_InjectEventNoAck_ParamsDataView input_data_view(params, &serialization_context);
      
      p_display_id = input_data_view.display_id();
      if (!input_data_view.ReadEvent(&p_event))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            EventInjector::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->InjectEventNoAck(
std::move(p_display_id), 
std::move(p_event));
      return true;
    }
    case internal::kEventInjector_InjectEventNoAckNoRewriters_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::EventInjector::InjectEventNoAckNoRewriters",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::EventInjector_InjectEventNoAckNoRewriters_Params_Data* params =
          reinterpret_cast<internal::EventInjector_InjectEventNoAckNoRewriters_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int64_t p_display_id{};
      std::unique_ptr<ui::Event> p_event{};
      EventInjector_InjectEventNoAckNoRewriters_ParamsDataView input_data_view(params, &serialization_context);
      
      p_display_id = input_data_view.display_id();
      if (!input_data_view.ReadEvent(&p_event))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            EventInjector::Name_, 2, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->InjectEventNoAckNoRewriters(
std::move(p_display_id), 
std::move(p_event));
      return true;
    }
  }
  return false;
}

// static
bool EventInjectorStubDispatch::AcceptWithResponder(
    EventInjector* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kEventInjector_InjectEvent_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::EventInjector::InjectEvent",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::EventInjector_InjectEvent_Params_Data* params =
          reinterpret_cast<
              internal::EventInjector_InjectEvent_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int64_t p_display_id{};
      std::unique_ptr<ui::Event> p_event{};
      EventInjector_InjectEvent_ParamsDataView input_data_view(params, &serialization_context);
      
      p_display_id = input_data_view.display_id();
      if (!input_data_view.ReadEvent(&p_event))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            EventInjector::Name_, 0, false);
        return false;
      }
      EventInjector::InjectEventCallback callback =
          EventInjector_InjectEvent_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->InjectEvent(
std::move(p_display_id), 
std::move(p_event), std::move(callback));
      return true;
    }
    case internal::kEventInjector_InjectEventNoAck_Name: {
      break;
    }
    case internal::kEventInjector_InjectEventNoAckNoRewriters_Name: {
      break;
    }
  }
  return false;
}

bool EventInjectorRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "EventInjector RequestValidator");

  switch (message->header()->name) {
    case internal::kEventInjector_InjectEvent_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::EventInjector_InjectEvent_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kEventInjector_InjectEventNoAck_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::EventInjector_InjectEventNoAck_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kEventInjector_InjectEventNoAckNoRewriters_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::EventInjector_InjectEventNoAckNoRewriters_Params_Data>(
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

bool EventInjectorResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "EventInjector ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kEventInjector_InjectEvent_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::EventInjector_InjectEvent_ResponseParams_Data>(
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
}  // namespace ws

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif