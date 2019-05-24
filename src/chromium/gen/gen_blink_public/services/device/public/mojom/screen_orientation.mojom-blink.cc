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

#include "services/device/public/mojom/screen_orientation.mojom-blink.h"

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

#include "services/device/public/mojom/screen_orientation.mojom-params-data.h"
#include "services/device/public/mojom/screen_orientation.mojom-shared-message-ids.h"

#include "services/device/public/mojom/screen_orientation.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_SCREEN_ORIENTATION_MOJOM_BLINK_JUMBO_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_SCREEN_ORIENTATION_MOJOM_BLINK_JUMBO_H_
#include "third_party/blink/public/common/screen_orientation/web_screen_orientation_mojom_traits.h"
#endif
namespace device {
namespace mojom {
namespace blink {
const char ScreenOrientation::Name_[] = "device.mojom.ScreenOrientation";

class ScreenOrientation_LockOrientation_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ScreenOrientation_LockOrientation_ForwardToCallback(
      ScreenOrientation::LockOrientationCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ScreenOrientation::LockOrientationCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(ScreenOrientation_LockOrientation_ForwardToCallback);
};

ScreenOrientationProxy::ScreenOrientationProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void ScreenOrientationProxy::LockOrientation(
    ::blink::WebScreenOrientationLockType in_orientation, LockOrientationCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ScreenOrientation::LockOrientation");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kScreenOrientation_LockOrientation_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::ScreenOrientation_LockOrientation_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::device::mojom::ScreenOrientationLockType>(
      in_orientation, &params->orientation);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ScreenOrientation::Name_);
  message.set_method_name("LockOrientation");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ScreenOrientation_LockOrientation_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void ScreenOrientationProxy::UnlockOrientation(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ScreenOrientation::UnlockOrientation");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kScreenOrientation_UnlockOrientation_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::ScreenOrientation_UnlockOrientation_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ScreenOrientation::Name_);
  message.set_method_name("UnlockOrientation");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class ScreenOrientation_LockOrientation_ProxyToResponder {
 public:
  static ScreenOrientation::LockOrientationCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<ScreenOrientation_LockOrientation_ProxyToResponder> proxy(
        new ScreenOrientation_LockOrientation_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&ScreenOrientation_LockOrientation_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~ScreenOrientation_LockOrientation_ProxyToResponder() {
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
  ScreenOrientation_LockOrientation_ProxyToResponder(
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
        << "ScreenOrientation::LockOrientationCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      ::device::mojom::blink::ScreenOrientationLockResult in_result);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(ScreenOrientation_LockOrientation_ProxyToResponder);
};

bool ScreenOrientation_LockOrientation_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::ScreenOrientation::LockOrientationCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::ScreenOrientation_LockOrientation_ResponseParams_Data* params =
      reinterpret_cast<
          internal::ScreenOrientation_LockOrientation_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::device::mojom::blink::ScreenOrientationLockResult p_result{};
  ScreenOrientation_LockOrientation_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadResult(&p_result))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        ScreenOrientation::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result));
  return true;
}

void ScreenOrientation_LockOrientation_ProxyToResponder::Run(
    ::device::mojom::blink::ScreenOrientationLockResult in_result) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kScreenOrientation_LockOrientation_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::ScreenOrientation_LockOrientation_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::device::mojom::ScreenOrientationLockResult>(
      in_result, &params->result);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::ScreenOrientation::LockOrientationCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ScreenOrientation::Name_);
  message.set_method_name("LockOrientation");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool ScreenOrientationStubDispatch::Accept(
    ScreenOrientation* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kScreenOrientation_LockOrientation_Name: {
      break;
    }
    case internal::kScreenOrientation_UnlockOrientation_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ScreenOrientation::UnlockOrientation",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ScreenOrientation_UnlockOrientation_Params_Data* params =
          reinterpret_cast<internal::ScreenOrientation_UnlockOrientation_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ScreenOrientation_UnlockOrientation_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ScreenOrientation::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->UnlockOrientation();
      return true;
    }
  }
  return false;
}

// static
bool ScreenOrientationStubDispatch::AcceptWithResponder(
    ScreenOrientation* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kScreenOrientation_LockOrientation_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ScreenOrientation::LockOrientation",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::ScreenOrientation_LockOrientation_Params_Data* params =
          reinterpret_cast<
              internal::ScreenOrientation_LockOrientation_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::blink::WebScreenOrientationLockType p_orientation{};
      ScreenOrientation_LockOrientation_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadOrientation(&p_orientation))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ScreenOrientation::Name_, 0, false);
        return false;
      }
      ScreenOrientation::LockOrientationCallback callback =
          ScreenOrientation_LockOrientation_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->LockOrientation(
std::move(p_orientation), std::move(callback));
      return true;
    }
    case internal::kScreenOrientation_UnlockOrientation_Name: {
      break;
    }
  }
  return false;
}

bool ScreenOrientationRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ScreenOrientation RequestValidator");

  switch (message->header()->name) {
    case internal::kScreenOrientation_LockOrientation_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ScreenOrientation_LockOrientation_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kScreenOrientation_UnlockOrientation_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ScreenOrientation_UnlockOrientation_Params_Data>(
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

bool ScreenOrientationResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ScreenOrientation ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kScreenOrientation_LockOrientation_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ScreenOrientation_LockOrientation_ResponseParams_Data>(
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
const char ScreenOrientationListener::Name_[] = "device.mojom.ScreenOrientationListener";

class ScreenOrientationListener_IsAutoRotateEnabledByUser_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ScreenOrientationListener_IsAutoRotateEnabledByUser_ForwardToCallback(
      ScreenOrientationListener::IsAutoRotateEnabledByUserCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ScreenOrientationListener::IsAutoRotateEnabledByUserCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(ScreenOrientationListener_IsAutoRotateEnabledByUser_ForwardToCallback);
};

ScreenOrientationListenerProxy::ScreenOrientationListenerProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void ScreenOrientationListenerProxy::IsAutoRotateEnabledByUser(
    IsAutoRotateEnabledByUserCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ScreenOrientationListener::IsAutoRotateEnabledByUser");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kScreenOrientationListener_IsAutoRotateEnabledByUser_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::ScreenOrientationListener_IsAutoRotateEnabledByUser_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ScreenOrientationListener::Name_);
  message.set_method_name("IsAutoRotateEnabledByUser");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ScreenOrientationListener_IsAutoRotateEnabledByUser_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class ScreenOrientationListener_IsAutoRotateEnabledByUser_ProxyToResponder {
 public:
  static ScreenOrientationListener::IsAutoRotateEnabledByUserCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<ScreenOrientationListener_IsAutoRotateEnabledByUser_ProxyToResponder> proxy(
        new ScreenOrientationListener_IsAutoRotateEnabledByUser_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&ScreenOrientationListener_IsAutoRotateEnabledByUser_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~ScreenOrientationListener_IsAutoRotateEnabledByUser_ProxyToResponder() {
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
  ScreenOrientationListener_IsAutoRotateEnabledByUser_ProxyToResponder(
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
        << "ScreenOrientationListener::IsAutoRotateEnabledByUserCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      bool in_enabled);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(ScreenOrientationListener_IsAutoRotateEnabledByUser_ProxyToResponder);
};

bool ScreenOrientationListener_IsAutoRotateEnabledByUser_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::ScreenOrientationListener::IsAutoRotateEnabledByUserCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::ScreenOrientationListener_IsAutoRotateEnabledByUser_ResponseParams_Data* params =
      reinterpret_cast<
          internal::ScreenOrientationListener_IsAutoRotateEnabledByUser_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_enabled{};
  ScreenOrientationListener_IsAutoRotateEnabledByUser_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_enabled = input_data_view.enabled();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        ScreenOrientationListener::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_enabled));
  return true;
}

void ScreenOrientationListener_IsAutoRotateEnabledByUser_ProxyToResponder::Run(
    bool in_enabled) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kScreenOrientationListener_IsAutoRotateEnabledByUser_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::ScreenOrientationListener_IsAutoRotateEnabledByUser_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->enabled = in_enabled;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::ScreenOrientationListener::IsAutoRotateEnabledByUserCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ScreenOrientationListener::Name_);
  message.set_method_name("IsAutoRotateEnabledByUser");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool ScreenOrientationListenerStubDispatch::Accept(
    ScreenOrientationListener* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kScreenOrientationListener_IsAutoRotateEnabledByUser_Name: {
      break;
    }
  }
  return false;
}

// static
bool ScreenOrientationListenerStubDispatch::AcceptWithResponder(
    ScreenOrientationListener* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kScreenOrientationListener_IsAutoRotateEnabledByUser_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ScreenOrientationListener::IsAutoRotateEnabledByUser",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::ScreenOrientationListener_IsAutoRotateEnabledByUser_Params_Data* params =
          reinterpret_cast<
              internal::ScreenOrientationListener_IsAutoRotateEnabledByUser_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ScreenOrientationListener_IsAutoRotateEnabledByUser_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ScreenOrientationListener::Name_, 0, false);
        return false;
      }
      ScreenOrientationListener::IsAutoRotateEnabledByUserCallback callback =
          ScreenOrientationListener_IsAutoRotateEnabledByUser_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->IsAutoRotateEnabledByUser(std::move(callback));
      return true;
    }
  }
  return false;
}

bool ScreenOrientationListenerRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ScreenOrientationListener RequestValidator");

  switch (message->header()->name) {
    case internal::kScreenOrientationListener_IsAutoRotateEnabledByUser_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ScreenOrientationListener_IsAutoRotateEnabledByUser_Params_Data>(
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

bool ScreenOrientationListenerResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ScreenOrientationListener ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kScreenOrientationListener_IsAutoRotateEnabledByUser_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ScreenOrientationListener_IsAutoRotateEnabledByUser_ResponseParams_Data>(
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
}  // namespace device

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif