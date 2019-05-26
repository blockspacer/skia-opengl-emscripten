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

#include "third_party/blink/public/mojom/notifications/notification_service.mojom.h"

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

#include "third_party/blink/public/mojom/notifications/notification_service.mojom-params-data.h"
#include "third_party/blink/public/mojom/notifications/notification_service.mojom-shared-message-ids.h"

#include "third_party/blink/public/mojom/notifications/notification_service.mojom-import-headers.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_NOTIFICATIONS_NOTIFICATION_SERVICE_MOJOM_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_NOTIFICATIONS_NOTIFICATION_SERVICE_MOJOM_JUMBO_H_
#include "mojo/public/cpp/base/big_buffer_mojom_traits.h"
#include "mojo/public/cpp/base/string16_mojom_traits.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "skia/public/interfaces/bitmap_skbitmap_struct_traits.h"
#include "skia/public/interfaces/image_info_struct_traits.h"
#include "third_party/blink/public/common/notifications/notification_struct_traits.h"
#include "url/mojom/url_gurl_mojom_traits.h"
#endif
namespace blink {
namespace mojom {
const char NonPersistentNotificationListener::Name_[] = "blink.mojom.NonPersistentNotificationListener";

class NonPersistentNotificationListener_OnClick_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  NonPersistentNotificationListener_OnClick_ForwardToCallback(
      NonPersistentNotificationListener::OnClickCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  NonPersistentNotificationListener::OnClickCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(NonPersistentNotificationListener_OnClick_ForwardToCallback);
};

class NonPersistentNotificationListener_OnClose_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  NonPersistentNotificationListener_OnClose_ForwardToCallback(
      NonPersistentNotificationListener::OnCloseCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  NonPersistentNotificationListener::OnCloseCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(NonPersistentNotificationListener_OnClose_ForwardToCallback);
};

NonPersistentNotificationListenerProxy::NonPersistentNotificationListenerProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void NonPersistentNotificationListenerProxy::OnShow(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NonPersistentNotificationListener::OnShow");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNonPersistentNotificationListener_OnShow_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::NonPersistentNotificationListener_OnShow_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NonPersistentNotificationListener::Name_);
  message.set_method_name("OnShow");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void NonPersistentNotificationListenerProxy::OnClick(
    OnClickCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NonPersistentNotificationListener::OnClick");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNonPersistentNotificationListener_OnClick_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::NonPersistentNotificationListener_OnClick_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NonPersistentNotificationListener::Name_);
  message.set_method_name("OnClick");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NonPersistentNotificationListener_OnClick_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void NonPersistentNotificationListenerProxy::OnClose(
    OnCloseCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NonPersistentNotificationListener::OnClose");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNonPersistentNotificationListener_OnClose_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::NonPersistentNotificationListener_OnClose_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NonPersistentNotificationListener::Name_);
  message.set_method_name("OnClose");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NonPersistentNotificationListener_OnClose_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class NonPersistentNotificationListener_OnClick_ProxyToResponder {
 public:
  static NonPersistentNotificationListener::OnClickCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<NonPersistentNotificationListener_OnClick_ProxyToResponder> proxy(
        new NonPersistentNotificationListener_OnClick_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&NonPersistentNotificationListener_OnClick_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~NonPersistentNotificationListener_OnClick_ProxyToResponder() {
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
  NonPersistentNotificationListener_OnClick_ProxyToResponder(
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
        << "NonPersistentNotificationListener::OnClickCallback was destroyed without "
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

  DISALLOW_COPY_AND_ASSIGN(NonPersistentNotificationListener_OnClick_ProxyToResponder);
};

bool NonPersistentNotificationListener_OnClick_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::NonPersistentNotificationListener::OnClickCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::NonPersistentNotificationListener_OnClick_ResponseParams_Data* params =
      reinterpret_cast<
          internal::NonPersistentNotificationListener_OnClick_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  NonPersistentNotificationListener_OnClick_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        NonPersistentNotificationListener::Name_, 1, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run();
  return true;
}

void NonPersistentNotificationListener_OnClick_ProxyToResponder::Run(
    ) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNonPersistentNotificationListener_OnClick_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::NonPersistentNotificationListener_OnClick_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::NonPersistentNotificationListener::OnClickCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NonPersistentNotificationListener::Name_);
  message.set_method_name("OnClick");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class NonPersistentNotificationListener_OnClose_ProxyToResponder {
 public:
  static NonPersistentNotificationListener::OnCloseCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<NonPersistentNotificationListener_OnClose_ProxyToResponder> proxy(
        new NonPersistentNotificationListener_OnClose_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&NonPersistentNotificationListener_OnClose_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~NonPersistentNotificationListener_OnClose_ProxyToResponder() {
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
  NonPersistentNotificationListener_OnClose_ProxyToResponder(
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
        << "NonPersistentNotificationListener::OnCloseCallback was destroyed without "
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

  DISALLOW_COPY_AND_ASSIGN(NonPersistentNotificationListener_OnClose_ProxyToResponder);
};

bool NonPersistentNotificationListener_OnClose_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::NonPersistentNotificationListener::OnCloseCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::NonPersistentNotificationListener_OnClose_ResponseParams_Data* params =
      reinterpret_cast<
          internal::NonPersistentNotificationListener_OnClose_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  NonPersistentNotificationListener_OnClose_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        NonPersistentNotificationListener::Name_, 2, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run();
  return true;
}

void NonPersistentNotificationListener_OnClose_ProxyToResponder::Run(
    ) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNonPersistentNotificationListener_OnClose_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::NonPersistentNotificationListener_OnClose_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::NonPersistentNotificationListener::OnCloseCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NonPersistentNotificationListener::Name_);
  message.set_method_name("OnClose");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool NonPersistentNotificationListenerStubDispatch::Accept(
    NonPersistentNotificationListener* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kNonPersistentNotificationListener_OnShow_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NonPersistentNotificationListener::OnShow",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::NonPersistentNotificationListener_OnShow_Params_Data* params =
          reinterpret_cast<internal::NonPersistentNotificationListener_OnShow_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      NonPersistentNotificationListener_OnShow_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NonPersistentNotificationListener::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnShow();
      return true;
    }
    case internal::kNonPersistentNotificationListener_OnClick_Name: {
      break;
    }
    case internal::kNonPersistentNotificationListener_OnClose_Name: {
      break;
    }
  }
  return false;
}

// static
bool NonPersistentNotificationListenerStubDispatch::AcceptWithResponder(
    NonPersistentNotificationListener* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kNonPersistentNotificationListener_OnShow_Name: {
      break;
    }
    case internal::kNonPersistentNotificationListener_OnClick_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NonPersistentNotificationListener::OnClick",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::NonPersistentNotificationListener_OnClick_Params_Data* params =
          reinterpret_cast<
              internal::NonPersistentNotificationListener_OnClick_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      NonPersistentNotificationListener_OnClick_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NonPersistentNotificationListener::Name_, 1, false);
        return false;
      }
      NonPersistentNotificationListener::OnClickCallback callback =
          NonPersistentNotificationListener_OnClick_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnClick(std::move(callback));
      return true;
    }
    case internal::kNonPersistentNotificationListener_OnClose_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NonPersistentNotificationListener::OnClose",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::NonPersistentNotificationListener_OnClose_Params_Data* params =
          reinterpret_cast<
              internal::NonPersistentNotificationListener_OnClose_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      NonPersistentNotificationListener_OnClose_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NonPersistentNotificationListener::Name_, 2, false);
        return false;
      }
      NonPersistentNotificationListener::OnCloseCallback callback =
          NonPersistentNotificationListener_OnClose_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnClose(std::move(callback));
      return true;
    }
  }
  return false;
}

bool NonPersistentNotificationListenerRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "NonPersistentNotificationListener RequestValidator");

  switch (message->header()->name) {
    case internal::kNonPersistentNotificationListener_OnShow_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NonPersistentNotificationListener_OnShow_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNonPersistentNotificationListener_OnClick_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NonPersistentNotificationListener_OnClick_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNonPersistentNotificationListener_OnClose_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NonPersistentNotificationListener_OnClose_Params_Data>(
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

bool NonPersistentNotificationListenerResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "NonPersistentNotificationListener ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kNonPersistentNotificationListener_OnClick_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::NonPersistentNotificationListener_OnClick_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNonPersistentNotificationListener_OnClose_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::NonPersistentNotificationListener_OnClose_ResponseParams_Data>(
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
const char NotificationService::Name_[] = "blink.mojom.NotificationService";
bool NotificationService::GetPermissionStatus(::blink::mojom::PermissionStatus* out_status) {
  NOTREACHED();
  return false;
}
class NotificationService_GetPermissionStatus_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  NotificationService_GetPermissionStatus_HandleSyncResponse(
      bool* result, ::blink::mojom::PermissionStatus* out_status)
      : result_(result), out_status_(out_status) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;
  ::blink::mojom::PermissionStatus* out_status_;DISALLOW_COPY_AND_ASSIGN(NotificationService_GetPermissionStatus_HandleSyncResponse);
};

class NotificationService_GetPermissionStatus_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  NotificationService_GetPermissionStatus_ForwardToCallback(
      NotificationService::GetPermissionStatusCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  NotificationService::GetPermissionStatusCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(NotificationService_GetPermissionStatus_ForwardToCallback);
};

class NotificationService_DisplayPersistentNotification_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  NotificationService_DisplayPersistentNotification_ForwardToCallback(
      NotificationService::DisplayPersistentNotificationCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  NotificationService::DisplayPersistentNotificationCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(NotificationService_DisplayPersistentNotification_ForwardToCallback);
};

class NotificationService_GetNotifications_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  NotificationService_GetNotifications_ForwardToCallback(
      NotificationService::GetNotificationsCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  NotificationService::GetNotificationsCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(NotificationService_GetNotifications_ForwardToCallback);
};

NotificationServiceProxy::NotificationServiceProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}
bool NotificationServiceProxy::GetPermissionStatus(
    ::blink::mojom::PermissionStatus* out_param_status) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NotificationService::GetPermissionStatus");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNotificationService_GetPermissionStatus_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::NotificationService_GetPermissionStatus_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NotificationService::Name_);
  message.set_method_name("GetPermissionStatus");
#endif

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NotificationService_GetPermissionStatus_HandleSyncResponse(
          &result, out_param_status));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void NotificationServiceProxy::GetPermissionStatus(
    GetPermissionStatusCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NotificationService::GetPermissionStatus");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNotificationService_GetPermissionStatus_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::NotificationService_GetPermissionStatus_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NotificationService::Name_);
  message.set_method_name("GetPermissionStatus");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NotificationService_GetPermissionStatus_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void NotificationServiceProxy::DisplayNonPersistentNotification(
    const std::string& in_token, const blink::PlatformNotificationData& in_notification_data, const blink::NotificationResources& in_notification_resources, NonPersistentNotificationListenerPtr in_event_listener) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NotificationService::DisplayNonPersistentNotification");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNotificationService_DisplayNonPersistentNotification_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::NotificationService_DisplayNonPersistentNotification_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->token)::BaseType::BufferWriter
      token_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_token, buffer, &token_writer, &serialization_context);
  params->token.Set(
      token_writer.is_null() ? nullptr : token_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->token.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null token in NotificationService.DisplayNonPersistentNotification request");
  typename decltype(params->notification_data)::BaseType::BufferWriter
      notification_data_writer;
  mojo::internal::Serialize<::blink::mojom::NotificationDataDataView>(
      in_notification_data, buffer, &notification_data_writer, &serialization_context);
  params->notification_data.Set(
      notification_data_writer.is_null() ? nullptr : notification_data_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->notification_data.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null notification_data in NotificationService.DisplayNonPersistentNotification request");
  typename decltype(params->notification_resources)::BaseType::BufferWriter
      notification_resources_writer;
  mojo::internal::Serialize<::blink::mojom::NotificationResourcesDataView>(
      in_notification_resources, buffer, &notification_resources_writer, &serialization_context);
  params->notification_resources.Set(
      notification_resources_writer.is_null() ? nullptr : notification_resources_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->notification_resources.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null notification_resources in NotificationService.DisplayNonPersistentNotification request");
  mojo::internal::Serialize<::blink::mojom::NonPersistentNotificationListenerPtrDataView>(
      in_event_listener, &params->event_listener, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->event_listener),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid event_listener in NotificationService.DisplayNonPersistentNotification request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NotificationService::Name_);
  message.set_method_name("DisplayNonPersistentNotification");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void NotificationServiceProxy::CloseNonPersistentNotification(
    const std::string& in_token) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NotificationService::CloseNonPersistentNotification");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNotificationService_CloseNonPersistentNotification_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::NotificationService_CloseNonPersistentNotification_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->token)::BaseType::BufferWriter
      token_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_token, buffer, &token_writer, &serialization_context);
  params->token.Set(
      token_writer.is_null() ? nullptr : token_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->token.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null token in NotificationService.CloseNonPersistentNotification request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NotificationService::Name_);
  message.set_method_name("CloseNonPersistentNotification");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void NotificationServiceProxy::DisplayPersistentNotification(
    int64_t in_service_worker_registration_id, const blink::PlatformNotificationData& in_notification_data, const blink::NotificationResources& in_notification_resources, DisplayPersistentNotificationCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NotificationService::DisplayPersistentNotification");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNotificationService_DisplayPersistentNotification_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::NotificationService_DisplayPersistentNotification_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->service_worker_registration_id = in_service_worker_registration_id;
  typename decltype(params->notification_data)::BaseType::BufferWriter
      notification_data_writer;
  mojo::internal::Serialize<::blink::mojom::NotificationDataDataView>(
      in_notification_data, buffer, &notification_data_writer, &serialization_context);
  params->notification_data.Set(
      notification_data_writer.is_null() ? nullptr : notification_data_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->notification_data.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null notification_data in NotificationService.DisplayPersistentNotification request");
  typename decltype(params->notification_resources)::BaseType::BufferWriter
      notification_resources_writer;
  mojo::internal::Serialize<::blink::mojom::NotificationResourcesDataView>(
      in_notification_resources, buffer, &notification_resources_writer, &serialization_context);
  params->notification_resources.Set(
      notification_resources_writer.is_null() ? nullptr : notification_resources_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->notification_resources.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null notification_resources in NotificationService.DisplayPersistentNotification request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NotificationService::Name_);
  message.set_method_name("DisplayPersistentNotification");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NotificationService_DisplayPersistentNotification_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void NotificationServiceProxy::ClosePersistentNotification(
    const std::string& in_notification_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NotificationService::ClosePersistentNotification");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNotificationService_ClosePersistentNotification_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::NotificationService_ClosePersistentNotification_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->notification_id)::BaseType::BufferWriter
      notification_id_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_notification_id, buffer, &notification_id_writer, &serialization_context);
  params->notification_id.Set(
      notification_id_writer.is_null() ? nullptr : notification_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->notification_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null notification_id in NotificationService.ClosePersistentNotification request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NotificationService::Name_);
  message.set_method_name("ClosePersistentNotification");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void NotificationServiceProxy::GetNotifications(
    int64_t in_service_worker_registration_id, const std::string& in_filter_tag, bool in_include_triggered, GetNotificationsCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NotificationService::GetNotifications");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNotificationService_GetNotifications_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::NotificationService_GetNotifications_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->service_worker_registration_id = in_service_worker_registration_id;
  typename decltype(params->filter_tag)::BaseType::BufferWriter
      filter_tag_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_filter_tag, buffer, &filter_tag_writer, &serialization_context);
  params->filter_tag.Set(
      filter_tag_writer.is_null() ? nullptr : filter_tag_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->filter_tag.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null filter_tag in NotificationService.GetNotifications request");
  params->include_triggered = in_include_triggered;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NotificationService::Name_);
  message.set_method_name("GetNotifications");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NotificationService_GetNotifications_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class NotificationService_GetPermissionStatus_ProxyToResponder {
 public:
  static NotificationService::GetPermissionStatusCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<NotificationService_GetPermissionStatus_ProxyToResponder> proxy(
        new NotificationService_GetPermissionStatus_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&NotificationService_GetPermissionStatus_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~NotificationService_GetPermissionStatus_ProxyToResponder() {
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
  NotificationService_GetPermissionStatus_ProxyToResponder(
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
        << "NotificationService::GetPermissionStatusCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      ::blink::mojom::PermissionStatus in_status);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(NotificationService_GetPermissionStatus_ProxyToResponder);
};

bool NotificationService_GetPermissionStatus_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::NotificationService::GetPermissionStatusCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::NotificationService_GetPermissionStatus_ResponseParams_Data* params =
      reinterpret_cast<
          internal::NotificationService_GetPermissionStatus_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::blink::mojom::PermissionStatus p_status{};
  NotificationService_GetPermissionStatus_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadStatus(&p_status))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        NotificationService::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_status));
  return true;
}

void NotificationService_GetPermissionStatus_ProxyToResponder::Run(
    ::blink::mojom::PermissionStatus in_status) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNotificationService_GetPermissionStatus_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::NotificationService_GetPermissionStatus_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::PermissionStatus>(
      in_status, &params->status);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::NotificationService::GetPermissionStatusCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NotificationService::Name_);
  message.set_method_name("GetPermissionStatus");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool NotificationService_GetPermissionStatus_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::NotificationService_GetPermissionStatus_ResponseParams_Data* params =
      reinterpret_cast<internal::NotificationService_GetPermissionStatus_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::blink::mojom::PermissionStatus p_status{};
  NotificationService_GetPermissionStatus_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadStatus(&p_status))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        NotificationService::Name_, 0, true);
    return false;
  }
  *out_status_ = std::move(p_status);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}
class NotificationService_DisplayPersistentNotification_ProxyToResponder {
 public:
  static NotificationService::DisplayPersistentNotificationCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<NotificationService_DisplayPersistentNotification_ProxyToResponder> proxy(
        new NotificationService_DisplayPersistentNotification_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&NotificationService_DisplayPersistentNotification_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~NotificationService_DisplayPersistentNotification_ProxyToResponder() {
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
  NotificationService_DisplayPersistentNotification_ProxyToResponder(
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
        << "NotificationService::DisplayPersistentNotificationCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      PersistentNotificationError in_error);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(NotificationService_DisplayPersistentNotification_ProxyToResponder);
};

bool NotificationService_DisplayPersistentNotification_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::NotificationService::DisplayPersistentNotificationCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::NotificationService_DisplayPersistentNotification_ResponseParams_Data* params =
      reinterpret_cast<
          internal::NotificationService_DisplayPersistentNotification_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  PersistentNotificationError p_error{};
  NotificationService_DisplayPersistentNotification_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadError(&p_error))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        NotificationService::Name_, 3, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_error));
  return true;
}

void NotificationService_DisplayPersistentNotification_ProxyToResponder::Run(
    PersistentNotificationError in_error) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNotificationService_DisplayPersistentNotification_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::NotificationService_DisplayPersistentNotification_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::PersistentNotificationError>(
      in_error, &params->error);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::NotificationService::DisplayPersistentNotificationCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NotificationService::Name_);
  message.set_method_name("DisplayPersistentNotification");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class NotificationService_GetNotifications_ProxyToResponder {
 public:
  static NotificationService::GetNotificationsCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<NotificationService_GetNotifications_ProxyToResponder> proxy(
        new NotificationService_GetNotifications_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&NotificationService_GetNotifications_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~NotificationService_GetNotifications_ProxyToResponder() {
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
  NotificationService_GetNotifications_ProxyToResponder(
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
        << "NotificationService::GetNotificationsCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      const std::vector<std::string>& in_notification_ids, const std::vector<blink::PlatformNotificationData>& in_notification_datas);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(NotificationService_GetNotifications_ProxyToResponder);
};

bool NotificationService_GetNotifications_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::NotificationService::GetNotificationsCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::NotificationService_GetNotifications_ResponseParams_Data* params =
      reinterpret_cast<
          internal::NotificationService_GetNotifications_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  std::vector<std::string> p_notification_ids{};
  std::vector<blink::PlatformNotificationData> p_notification_datas{};
  NotificationService_GetNotifications_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadNotificationIds(&p_notification_ids))
    success = false;
  if (!input_data_view.ReadNotificationDatas(&p_notification_datas))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        NotificationService::Name_, 5, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_notification_ids), 
std::move(p_notification_datas));
  return true;
}

void NotificationService_GetNotifications_ProxyToResponder::Run(
    const std::vector<std::string>& in_notification_ids, const std::vector<blink::PlatformNotificationData>& in_notification_datas) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNotificationService_GetNotifications_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::NotificationService_GetNotifications_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->notification_ids)::BaseType::BufferWriter
      notification_ids_writer;
  const mojo::internal::ContainerValidateParams notification_ids_validate_params(
      0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
  mojo::internal::Serialize<mojo::ArrayDataView<mojo::StringDataView>>(
      in_notification_ids, buffer, &notification_ids_writer, &notification_ids_validate_params,
      &serialization_context);
  params->notification_ids.Set(
      notification_ids_writer.is_null() ? nullptr : notification_ids_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->notification_ids.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null notification_ids in ");
  typename decltype(params->notification_datas)::BaseType::BufferWriter
      notification_datas_writer;
  const mojo::internal::ContainerValidateParams notification_datas_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::blink::mojom::NotificationDataDataView>>(
      in_notification_datas, buffer, &notification_datas_writer, &notification_datas_validate_params,
      &serialization_context);
  params->notification_datas.Set(
      notification_datas_writer.is_null() ? nullptr : notification_datas_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->notification_datas.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null notification_datas in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::NotificationService::GetNotificationsCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NotificationService::Name_);
  message.set_method_name("GetNotifications");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool NotificationServiceStubDispatch::Accept(
    NotificationService* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kNotificationService_GetPermissionStatus_Name: {
      break;
    }
    case internal::kNotificationService_DisplayNonPersistentNotification_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NotificationService::DisplayNonPersistentNotification",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::NotificationService_DisplayNonPersistentNotification_Params_Data* params =
          reinterpret_cast<internal::NotificationService_DisplayNonPersistentNotification_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_token{};
      blink::PlatformNotificationData p_notification_data{};
      blink::NotificationResources p_notification_resources{};
      NonPersistentNotificationListenerPtr p_event_listener{};
      NotificationService_DisplayNonPersistentNotification_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadToken(&p_token))
        success = false;
      if (!input_data_view.ReadNotificationData(&p_notification_data))
        success = false;
      if (!input_data_view.ReadNotificationResources(&p_notification_resources))
        success = false;
      p_event_listener =
          input_data_view.TakeEventListener<decltype(p_event_listener)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NotificationService::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->DisplayNonPersistentNotification(
std::move(p_token), 
std::move(p_notification_data), 
std::move(p_notification_resources), 
std::move(p_event_listener));
      return true;
    }
    case internal::kNotificationService_CloseNonPersistentNotification_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NotificationService::CloseNonPersistentNotification",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::NotificationService_CloseNonPersistentNotification_Params_Data* params =
          reinterpret_cast<internal::NotificationService_CloseNonPersistentNotification_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_token{};
      NotificationService_CloseNonPersistentNotification_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadToken(&p_token))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NotificationService::Name_, 2, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->CloseNonPersistentNotification(
std::move(p_token));
      return true;
    }
    case internal::kNotificationService_DisplayPersistentNotification_Name: {
      break;
    }
    case internal::kNotificationService_ClosePersistentNotification_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NotificationService::ClosePersistentNotification",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::NotificationService_ClosePersistentNotification_Params_Data* params =
          reinterpret_cast<internal::NotificationService_ClosePersistentNotification_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_notification_id{};
      NotificationService_ClosePersistentNotification_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadNotificationId(&p_notification_id))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NotificationService::Name_, 4, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->ClosePersistentNotification(
std::move(p_notification_id));
      return true;
    }
    case internal::kNotificationService_GetNotifications_Name: {
      break;
    }
  }
  return false;
}

// static
bool NotificationServiceStubDispatch::AcceptWithResponder(
    NotificationService* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kNotificationService_GetPermissionStatus_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NotificationService::GetPermissionStatus",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::NotificationService_GetPermissionStatus_Params_Data* params =
          reinterpret_cast<
              internal::NotificationService_GetPermissionStatus_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      NotificationService_GetPermissionStatus_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NotificationService::Name_, 0, false);
        return false;
      }
      NotificationService::GetPermissionStatusCallback callback =
          NotificationService_GetPermissionStatus_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GetPermissionStatus(std::move(callback));
      return true;
    }
    case internal::kNotificationService_DisplayNonPersistentNotification_Name: {
      break;
    }
    case internal::kNotificationService_CloseNonPersistentNotification_Name: {
      break;
    }
    case internal::kNotificationService_DisplayPersistentNotification_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NotificationService::DisplayPersistentNotification",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::NotificationService_DisplayPersistentNotification_Params_Data* params =
          reinterpret_cast<
              internal::NotificationService_DisplayPersistentNotification_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int64_t p_service_worker_registration_id{};
      blink::PlatformNotificationData p_notification_data{};
      blink::NotificationResources p_notification_resources{};
      NotificationService_DisplayPersistentNotification_ParamsDataView input_data_view(params, &serialization_context);
      
      p_service_worker_registration_id = input_data_view.service_worker_registration_id();
      if (!input_data_view.ReadNotificationData(&p_notification_data))
        success = false;
      if (!input_data_view.ReadNotificationResources(&p_notification_resources))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NotificationService::Name_, 3, false);
        return false;
      }
      NotificationService::DisplayPersistentNotificationCallback callback =
          NotificationService_DisplayPersistentNotification_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->DisplayPersistentNotification(
std::move(p_service_worker_registration_id), 
std::move(p_notification_data), 
std::move(p_notification_resources), std::move(callback));
      return true;
    }
    case internal::kNotificationService_ClosePersistentNotification_Name: {
      break;
    }
    case internal::kNotificationService_GetNotifications_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NotificationService::GetNotifications",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::NotificationService_GetNotifications_Params_Data* params =
          reinterpret_cast<
              internal::NotificationService_GetNotifications_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int64_t p_service_worker_registration_id{};
      std::string p_filter_tag{};
      bool p_include_triggered{};
      NotificationService_GetNotifications_ParamsDataView input_data_view(params, &serialization_context);
      
      p_service_worker_registration_id = input_data_view.service_worker_registration_id();
      if (!input_data_view.ReadFilterTag(&p_filter_tag))
        success = false;
      p_include_triggered = input_data_view.include_triggered();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NotificationService::Name_, 5, false);
        return false;
      }
      NotificationService::GetNotificationsCallback callback =
          NotificationService_GetNotifications_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GetNotifications(
std::move(p_service_worker_registration_id), 
std::move(p_filter_tag), 
std::move(p_include_triggered), std::move(callback));
      return true;
    }
  }
  return false;
}

bool NotificationServiceRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "NotificationService RequestValidator");

  switch (message->header()->name) {
    case internal::kNotificationService_GetPermissionStatus_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NotificationService_GetPermissionStatus_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNotificationService_DisplayNonPersistentNotification_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NotificationService_DisplayNonPersistentNotification_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNotificationService_CloseNonPersistentNotification_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NotificationService_CloseNonPersistentNotification_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNotificationService_DisplayPersistentNotification_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NotificationService_DisplayPersistentNotification_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNotificationService_ClosePersistentNotification_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NotificationService_ClosePersistentNotification_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNotificationService_GetNotifications_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NotificationService_GetNotifications_Params_Data>(
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

bool NotificationServiceResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "NotificationService ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kNotificationService_GetPermissionStatus_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::NotificationService_GetPermissionStatus_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNotificationService_DisplayPersistentNotification_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::NotificationService_DisplayPersistentNotification_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNotificationService_GetNotifications_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::NotificationService_GetNotifications_ResponseParams_Data>(
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
}  // namespace blink

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif