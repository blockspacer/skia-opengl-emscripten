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

#include "media/mojo/interfaces/output_protection.mojom-blink.h"

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

#include "media/mojo/interfaces/output_protection.mojom-params-data.h"
#include "media/mojo/interfaces/output_protection.mojom-shared-message-ids.h"

#include "media/mojo/interfaces/output_protection.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef MEDIA_MOJO_INTERFACES_OUTPUT_PROTECTION_MOJOM_BLINK_JUMBO_H_
#define MEDIA_MOJO_INTERFACES_OUTPUT_PROTECTION_MOJOM_BLINK_JUMBO_H_
#endif
namespace media {
namespace mojom {
namespace blink {
const char OutputProtection::Name_[] = "media.mojom.OutputProtection";

class OutputProtection_QueryStatus_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  OutputProtection_QueryStatus_ForwardToCallback(
      OutputProtection::QueryStatusCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  OutputProtection::QueryStatusCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(OutputProtection_QueryStatus_ForwardToCallback);
};

class OutputProtection_EnableProtection_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  OutputProtection_EnableProtection_ForwardToCallback(
      OutputProtection::EnableProtectionCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  OutputProtection::EnableProtectionCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(OutputProtection_EnableProtection_ForwardToCallback);
};

OutputProtectionProxy::OutputProtectionProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void OutputProtectionProxy::QueryStatus(
    QueryStatusCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::OutputProtection::QueryStatus");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kOutputProtection_QueryStatus_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::OutputProtection_QueryStatus_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(OutputProtection::Name_);
  message.set_method_name("QueryStatus");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new OutputProtection_QueryStatus_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void OutputProtectionProxy::EnableProtection(
    uint32_t in_desired_protection_mask, EnableProtectionCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::OutputProtection::EnableProtection");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kOutputProtection_EnableProtection_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::OutputProtection_EnableProtection_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->desired_protection_mask = in_desired_protection_mask;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(OutputProtection::Name_);
  message.set_method_name("EnableProtection");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new OutputProtection_EnableProtection_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class OutputProtection_QueryStatus_ProxyToResponder {
 public:
  static OutputProtection::QueryStatusCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<OutputProtection_QueryStatus_ProxyToResponder> proxy(
        new OutputProtection_QueryStatus_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&OutputProtection_QueryStatus_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~OutputProtection_QueryStatus_ProxyToResponder() {
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
  OutputProtection_QueryStatus_ProxyToResponder(
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
        << "OutputProtection::QueryStatusCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      bool in_success, uint32_t in_link_mask, uint32_t in_protection_mask);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(OutputProtection_QueryStatus_ProxyToResponder);
};

bool OutputProtection_QueryStatus_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::OutputProtection::QueryStatusCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::OutputProtection_QueryStatus_ResponseParams_Data* params =
      reinterpret_cast<
          internal::OutputProtection_QueryStatus_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_success{};
  uint32_t p_link_mask{};
  uint32_t p_protection_mask{};
  OutputProtection_QueryStatus_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_success = input_data_view.success();
  p_link_mask = input_data_view.link_mask();
  p_protection_mask = input_data_view.protection_mask();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        OutputProtection::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_success), 
std::move(p_link_mask), 
std::move(p_protection_mask));
  return true;
}

void OutputProtection_QueryStatus_ProxyToResponder::Run(
    bool in_success, uint32_t in_link_mask, uint32_t in_protection_mask) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kOutputProtection_QueryStatus_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::OutputProtection_QueryStatus_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->success = in_success;
  params->link_mask = in_link_mask;
  params->protection_mask = in_protection_mask;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::OutputProtection::QueryStatusCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(OutputProtection::Name_);
  message.set_method_name("QueryStatus");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class OutputProtection_EnableProtection_ProxyToResponder {
 public:
  static OutputProtection::EnableProtectionCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<OutputProtection_EnableProtection_ProxyToResponder> proxy(
        new OutputProtection_EnableProtection_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&OutputProtection_EnableProtection_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~OutputProtection_EnableProtection_ProxyToResponder() {
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
  OutputProtection_EnableProtection_ProxyToResponder(
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
        << "OutputProtection::EnableProtectionCallback was destroyed without "
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

  DISALLOW_COPY_AND_ASSIGN(OutputProtection_EnableProtection_ProxyToResponder);
};

bool OutputProtection_EnableProtection_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::OutputProtection::EnableProtectionCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::OutputProtection_EnableProtection_ResponseParams_Data* params =
      reinterpret_cast<
          internal::OutputProtection_EnableProtection_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_success{};
  OutputProtection_EnableProtection_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_success = input_data_view.success();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        OutputProtection::Name_, 1, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_success));
  return true;
}

void OutputProtection_EnableProtection_ProxyToResponder::Run(
    bool in_success) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kOutputProtection_EnableProtection_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::OutputProtection_EnableProtection_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->success = in_success;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::OutputProtection::EnableProtectionCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(OutputProtection::Name_);
  message.set_method_name("EnableProtection");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool OutputProtectionStubDispatch::Accept(
    OutputProtection* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kOutputProtection_QueryStatus_Name: {
      break;
    }
    case internal::kOutputProtection_EnableProtection_Name: {
      break;
    }
  }
  return false;
}

// static
bool OutputProtectionStubDispatch::AcceptWithResponder(
    OutputProtection* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kOutputProtection_QueryStatus_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::OutputProtection::QueryStatus",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::OutputProtection_QueryStatus_Params_Data* params =
          reinterpret_cast<
              internal::OutputProtection_QueryStatus_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      OutputProtection_QueryStatus_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            OutputProtection::Name_, 0, false);
        return false;
      }
      OutputProtection::QueryStatusCallback callback =
          OutputProtection_QueryStatus_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->QueryStatus(std::move(callback));
      return true;
    }
    case internal::kOutputProtection_EnableProtection_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::OutputProtection::EnableProtection",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::OutputProtection_EnableProtection_Params_Data* params =
          reinterpret_cast<
              internal::OutputProtection_EnableProtection_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint32_t p_desired_protection_mask{};
      OutputProtection_EnableProtection_ParamsDataView input_data_view(params, &serialization_context);
      
      p_desired_protection_mask = input_data_view.desired_protection_mask();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            OutputProtection::Name_, 1, false);
        return false;
      }
      OutputProtection::EnableProtectionCallback callback =
          OutputProtection_EnableProtection_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->EnableProtection(
std::move(p_desired_protection_mask), std::move(callback));
      return true;
    }
  }
  return false;
}

bool OutputProtectionRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "OutputProtection RequestValidator");

  switch (message->header()->name) {
    case internal::kOutputProtection_QueryStatus_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::OutputProtection_QueryStatus_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kOutputProtection_EnableProtection_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::OutputProtection_EnableProtection_Params_Data>(
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

bool OutputProtectionResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "OutputProtection ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kOutputProtection_QueryStatus_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::OutputProtection_QueryStatus_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kOutputProtection_EnableProtection_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::OutputProtection_EnableProtection_ResponseParams_Data>(
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
}  // namespace media

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif