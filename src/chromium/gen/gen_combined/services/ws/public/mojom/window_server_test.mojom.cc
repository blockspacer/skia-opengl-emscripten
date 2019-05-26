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

#include "services/ws/public/mojom/window_server_test.mojom.h"

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

#include "services/ws/public/mojom/window_server_test.mojom-params-data.h"
#include "services/ws/public/mojom/window_server_test.mojom-shared-message-ids.h"

#include "services/ws/public/mojom/window_server_test.mojom-import-headers.h"


#ifndef SERVICES_WS_PUBLIC_MOJOM_WINDOW_SERVER_TEST_MOJOM_JUMBO_H_
#define SERVICES_WS_PUBLIC_MOJOM_WINDOW_SERVER_TEST_MOJOM_JUMBO_H_
#endif
namespace ws {
namespace mojom {
const char WindowServerTest::Name_[] = "ws.mojom.WindowServerTest";

class WindowServerTest_EnsureClientHasDrawnWindow_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  WindowServerTest_EnsureClientHasDrawnWindow_ForwardToCallback(
      WindowServerTest::EnsureClientHasDrawnWindowCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  WindowServerTest::EnsureClientHasDrawnWindowCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(WindowServerTest_EnsureClientHasDrawnWindow_ForwardToCallback);
};

WindowServerTestProxy::WindowServerTestProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void WindowServerTestProxy::EnsureClientHasDrawnWindow(
    const std::string& in_client_name, EnsureClientHasDrawnWindowCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WindowServerTest::EnsureClientHasDrawnWindow");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowServerTest_EnsureClientHasDrawnWindow_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::WindowServerTest_EnsureClientHasDrawnWindow_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->client_name)::BaseType::BufferWriter
      client_name_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_client_name, buffer, &client_name_writer, &serialization_context);
  params->client_name.Set(
      client_name_writer.is_null() ? nullptr : client_name_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->client_name.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null client_name in WindowServerTest.EnsureClientHasDrawnWindow request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WindowServerTest::Name_);
  message.set_method_name("EnsureClientHasDrawnWindow");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new WindowServerTest_EnsureClientHasDrawnWindow_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class WindowServerTest_EnsureClientHasDrawnWindow_ProxyToResponder {
 public:
  static WindowServerTest::EnsureClientHasDrawnWindowCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<WindowServerTest_EnsureClientHasDrawnWindow_ProxyToResponder> proxy(
        new WindowServerTest_EnsureClientHasDrawnWindow_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&WindowServerTest_EnsureClientHasDrawnWindow_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~WindowServerTest_EnsureClientHasDrawnWindow_ProxyToResponder() {
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
  WindowServerTest_EnsureClientHasDrawnWindow_ProxyToResponder(
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
        << "WindowServerTest::EnsureClientHasDrawnWindowCallback was destroyed without "
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

  DISALLOW_COPY_AND_ASSIGN(WindowServerTest_EnsureClientHasDrawnWindow_ProxyToResponder);
};

bool WindowServerTest_EnsureClientHasDrawnWindow_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::WindowServerTest::EnsureClientHasDrawnWindowCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::WindowServerTest_EnsureClientHasDrawnWindow_ResponseParams_Data* params =
      reinterpret_cast<
          internal::WindowServerTest_EnsureClientHasDrawnWindow_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_success{};
  WindowServerTest_EnsureClientHasDrawnWindow_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_success = input_data_view.success();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        WindowServerTest::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_success));
  return true;
}

void WindowServerTest_EnsureClientHasDrawnWindow_ProxyToResponder::Run(
    bool in_success) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowServerTest_EnsureClientHasDrawnWindow_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::WindowServerTest_EnsureClientHasDrawnWindow_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->success = in_success;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::WindowServerTest::EnsureClientHasDrawnWindowCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WindowServerTest::Name_);
  message.set_method_name("EnsureClientHasDrawnWindow");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool WindowServerTestStubDispatch::Accept(
    WindowServerTest* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kWindowServerTest_EnsureClientHasDrawnWindow_Name: {
      break;
    }
  }
  return false;
}

// static
bool WindowServerTestStubDispatch::AcceptWithResponder(
    WindowServerTest* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kWindowServerTest_EnsureClientHasDrawnWindow_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::WindowServerTest::EnsureClientHasDrawnWindow",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::WindowServerTest_EnsureClientHasDrawnWindow_Params_Data* params =
          reinterpret_cast<
              internal::WindowServerTest_EnsureClientHasDrawnWindow_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_client_name{};
      WindowServerTest_EnsureClientHasDrawnWindow_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadClientName(&p_client_name))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WindowServerTest::Name_, 0, false);
        return false;
      }
      WindowServerTest::EnsureClientHasDrawnWindowCallback callback =
          WindowServerTest_EnsureClientHasDrawnWindow_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->EnsureClientHasDrawnWindow(
std::move(p_client_name), std::move(callback));
      return true;
    }
  }
  return false;
}

bool WindowServerTestRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "WindowServerTest RequestValidator");

  switch (message->header()->name) {
    case internal::kWindowServerTest_EnsureClientHasDrawnWindow_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowServerTest_EnsureClientHasDrawnWindow_Params_Data>(
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

bool WindowServerTestResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "WindowServerTest ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kWindowServerTest_EnsureClientHasDrawnWindow_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowServerTest_EnsureClientHasDrawnWindow_ResponseParams_Data>(
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