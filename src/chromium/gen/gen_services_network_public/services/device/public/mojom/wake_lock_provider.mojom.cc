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

#include "services/device/public/mojom/wake_lock_provider.mojom.h"

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

#include "services/device/public/mojom/wake_lock_provider.mojom-params-data.h"
#include "services/device/public/mojom/wake_lock_provider.mojom-shared-message-ids.h"

#include "services/device/public/mojom/wake_lock_provider.mojom-import-headers.h"


#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_WAKE_LOCK_PROVIDER_MOJOM_JUMBO_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_WAKE_LOCK_PROVIDER_MOJOM_JUMBO_H_
#endif
namespace device {
namespace mojom {
const char WakeLockProvider::Name_[] = "device.mojom.WakeLockProvider";

class WakeLockProvider_GetActiveWakeLocksForTests_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  WakeLockProvider_GetActiveWakeLocksForTests_ForwardToCallback(
      WakeLockProvider::GetActiveWakeLocksForTestsCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  WakeLockProvider::GetActiveWakeLocksForTestsCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(WakeLockProvider_GetActiveWakeLocksForTests_ForwardToCallback);
};

WakeLockProviderProxy::WakeLockProviderProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void WakeLockProviderProxy::GetWakeLockContextForID(
    int32_t in_context_id, ::device::mojom::WakeLockContextRequest in_context) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WakeLockProvider::GetWakeLockContextForID");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWakeLockProvider_GetWakeLockContextForID_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::WakeLockProvider_GetWakeLockContextForID_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->context_id = in_context_id;
  mojo::internal::Serialize<::device::mojom::WakeLockContextRequestDataView>(
      in_context, &params->context, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->context),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid context in WakeLockProvider.GetWakeLockContextForID request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WakeLockProvider::Name_);
  message.set_method_name("GetWakeLockContextForID");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WakeLockProviderProxy::GetWakeLockWithoutContext(
    ::device::mojom::WakeLockType in_type, ::device::mojom::WakeLockReason in_reason, const std::string& in_description, ::device::mojom::WakeLockRequest in_wake_lock) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WakeLockProvider::GetWakeLockWithoutContext");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWakeLockProvider_GetWakeLockWithoutContext_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::WakeLockProvider_GetWakeLockWithoutContext_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::device::mojom::WakeLockType>(
      in_type, &params->type);
  mojo::internal::Serialize<::device::mojom::WakeLockReason>(
      in_reason, &params->reason);
  typename decltype(params->description)::BaseType::BufferWriter
      description_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_description, buffer, &description_writer, &serialization_context);
  params->description.Set(
      description_writer.is_null() ? nullptr : description_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->description.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null description in WakeLockProvider.GetWakeLockWithoutContext request");
  mojo::internal::Serialize<::device::mojom::WakeLockRequestDataView>(
      in_wake_lock, &params->wake_lock, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->wake_lock),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid wake_lock in WakeLockProvider.GetWakeLockWithoutContext request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WakeLockProvider::Name_);
  message.set_method_name("GetWakeLockWithoutContext");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WakeLockProviderProxy::NotifyOnWakeLockDeactivation(
    ::device::mojom::WakeLockType in_type, WakeLockObserverPtr in_observer) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WakeLockProvider::NotifyOnWakeLockDeactivation");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWakeLockProvider_NotifyOnWakeLockDeactivation_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::WakeLockProvider_NotifyOnWakeLockDeactivation_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::device::mojom::WakeLockType>(
      in_type, &params->type);
  mojo::internal::Serialize<::device::mojom::WakeLockObserverPtrDataView>(
      in_observer, &params->observer, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->observer),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid observer in WakeLockProvider.NotifyOnWakeLockDeactivation request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WakeLockProvider::Name_);
  message.set_method_name("NotifyOnWakeLockDeactivation");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WakeLockProviderProxy::GetActiveWakeLocksForTests(
    ::device::mojom::WakeLockType in_type, GetActiveWakeLocksForTestsCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WakeLockProvider::GetActiveWakeLocksForTests");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWakeLockProvider_GetActiveWakeLocksForTests_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::WakeLockProvider_GetActiveWakeLocksForTests_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::device::mojom::WakeLockType>(
      in_type, &params->type);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WakeLockProvider::Name_);
  message.set_method_name("GetActiveWakeLocksForTests");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new WakeLockProvider_GetActiveWakeLocksForTests_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class WakeLockProvider_GetActiveWakeLocksForTests_ProxyToResponder {
 public:
  static WakeLockProvider::GetActiveWakeLocksForTestsCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<WakeLockProvider_GetActiveWakeLocksForTests_ProxyToResponder> proxy(
        new WakeLockProvider_GetActiveWakeLocksForTests_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&WakeLockProvider_GetActiveWakeLocksForTests_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~WakeLockProvider_GetActiveWakeLocksForTests_ProxyToResponder() {
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
  WakeLockProvider_GetActiveWakeLocksForTests_ProxyToResponder(
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
        << "WakeLockProvider::GetActiveWakeLocksForTestsCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      int32_t in_count);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(WakeLockProvider_GetActiveWakeLocksForTests_ProxyToResponder);
};

bool WakeLockProvider_GetActiveWakeLocksForTests_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::WakeLockProvider::GetActiveWakeLocksForTestsCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::WakeLockProvider_GetActiveWakeLocksForTests_ResponseParams_Data* params =
      reinterpret_cast<
          internal::WakeLockProvider_GetActiveWakeLocksForTests_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  int32_t p_count{};
  WakeLockProvider_GetActiveWakeLocksForTests_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_count = input_data_view.count();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        WakeLockProvider::Name_, 3, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_count));
  return true;
}

void WakeLockProvider_GetActiveWakeLocksForTests_ProxyToResponder::Run(
    int32_t in_count) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWakeLockProvider_GetActiveWakeLocksForTests_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::WakeLockProvider_GetActiveWakeLocksForTests_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->count = in_count;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::WakeLockProvider::GetActiveWakeLocksForTestsCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WakeLockProvider::Name_);
  message.set_method_name("GetActiveWakeLocksForTests");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool WakeLockProviderStubDispatch::Accept(
    WakeLockProvider* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kWakeLockProvider_GetWakeLockContextForID_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::WakeLockProvider::GetWakeLockContextForID",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WakeLockProvider_GetWakeLockContextForID_Params_Data* params =
          reinterpret_cast<internal::WakeLockProvider_GetWakeLockContextForID_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_context_id{};
      ::device::mojom::WakeLockContextRequest p_context{};
      WakeLockProvider_GetWakeLockContextForID_ParamsDataView input_data_view(params, &serialization_context);
      
      p_context_id = input_data_view.context_id();
      p_context =
          input_data_view.TakeContext<decltype(p_context)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WakeLockProvider::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GetWakeLockContextForID(
std::move(p_context_id), 
std::move(p_context));
      return true;
    }
    case internal::kWakeLockProvider_GetWakeLockWithoutContext_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::WakeLockProvider::GetWakeLockWithoutContext",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WakeLockProvider_GetWakeLockWithoutContext_Params_Data* params =
          reinterpret_cast<internal::WakeLockProvider_GetWakeLockWithoutContext_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::device::mojom::WakeLockType p_type{};
      ::device::mojom::WakeLockReason p_reason{};
      std::string p_description{};
      ::device::mojom::WakeLockRequest p_wake_lock{};
      WakeLockProvider_GetWakeLockWithoutContext_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadType(&p_type))
        success = false;
      if (!input_data_view.ReadReason(&p_reason))
        success = false;
      if (!input_data_view.ReadDescription(&p_description))
        success = false;
      p_wake_lock =
          input_data_view.TakeWakeLock<decltype(p_wake_lock)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WakeLockProvider::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GetWakeLockWithoutContext(
std::move(p_type), 
std::move(p_reason), 
std::move(p_description), 
std::move(p_wake_lock));
      return true;
    }
    case internal::kWakeLockProvider_NotifyOnWakeLockDeactivation_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::WakeLockProvider::NotifyOnWakeLockDeactivation",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WakeLockProvider_NotifyOnWakeLockDeactivation_Params_Data* params =
          reinterpret_cast<internal::WakeLockProvider_NotifyOnWakeLockDeactivation_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::device::mojom::WakeLockType p_type{};
      WakeLockObserverPtr p_observer{};
      WakeLockProvider_NotifyOnWakeLockDeactivation_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadType(&p_type))
        success = false;
      p_observer =
          input_data_view.TakeObserver<decltype(p_observer)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WakeLockProvider::Name_, 2, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->NotifyOnWakeLockDeactivation(
std::move(p_type), 
std::move(p_observer));
      return true;
    }
    case internal::kWakeLockProvider_GetActiveWakeLocksForTests_Name: {
      break;
    }
  }
  return false;
}

// static
bool WakeLockProviderStubDispatch::AcceptWithResponder(
    WakeLockProvider* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kWakeLockProvider_GetWakeLockContextForID_Name: {
      break;
    }
    case internal::kWakeLockProvider_GetWakeLockWithoutContext_Name: {
      break;
    }
    case internal::kWakeLockProvider_NotifyOnWakeLockDeactivation_Name: {
      break;
    }
    case internal::kWakeLockProvider_GetActiveWakeLocksForTests_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::WakeLockProvider::GetActiveWakeLocksForTests",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::WakeLockProvider_GetActiveWakeLocksForTests_Params_Data* params =
          reinterpret_cast<
              internal::WakeLockProvider_GetActiveWakeLocksForTests_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::device::mojom::WakeLockType p_type{};
      WakeLockProvider_GetActiveWakeLocksForTests_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadType(&p_type))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WakeLockProvider::Name_, 3, false);
        return false;
      }
      WakeLockProvider::GetActiveWakeLocksForTestsCallback callback =
          WakeLockProvider_GetActiveWakeLocksForTests_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GetActiveWakeLocksForTests(
std::move(p_type), std::move(callback));
      return true;
    }
  }
  return false;
}

bool WakeLockProviderRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "WakeLockProvider RequestValidator");

  switch (message->header()->name) {
    case internal::kWakeLockProvider_GetWakeLockContextForID_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WakeLockProvider_GetWakeLockContextForID_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWakeLockProvider_GetWakeLockWithoutContext_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WakeLockProvider_GetWakeLockWithoutContext_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWakeLockProvider_NotifyOnWakeLockDeactivation_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WakeLockProvider_NotifyOnWakeLockDeactivation_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWakeLockProvider_GetActiveWakeLocksForTests_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WakeLockProvider_GetActiveWakeLocksForTests_Params_Data>(
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

bool WakeLockProviderResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "WakeLockProvider ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kWakeLockProvider_GetActiveWakeLocksForTests_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::WakeLockProvider_GetActiveWakeLocksForTests_ResponseParams_Data>(
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
const char WakeLockObserver::Name_[] = "device.mojom.WakeLockObserver";

WakeLockObserverProxy::WakeLockObserverProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void WakeLockObserverProxy::OnWakeLockDeactivated(
    ::device::mojom::WakeLockType in_type) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WakeLockObserver::OnWakeLockDeactivated");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWakeLockObserver_OnWakeLockDeactivated_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::WakeLockObserver_OnWakeLockDeactivated_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::device::mojom::WakeLockType>(
      in_type, &params->type);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WakeLockObserver::Name_);
  message.set_method_name("OnWakeLockDeactivated");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool WakeLockObserverStubDispatch::Accept(
    WakeLockObserver* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kWakeLockObserver_OnWakeLockDeactivated_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::WakeLockObserver::OnWakeLockDeactivated",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WakeLockObserver_OnWakeLockDeactivated_Params_Data* params =
          reinterpret_cast<internal::WakeLockObserver_OnWakeLockDeactivated_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::device::mojom::WakeLockType p_type{};
      WakeLockObserver_OnWakeLockDeactivated_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadType(&p_type))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WakeLockObserver::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnWakeLockDeactivated(
std::move(p_type));
      return true;
    }
  }
  return false;
}

// static
bool WakeLockObserverStubDispatch::AcceptWithResponder(
    WakeLockObserver* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kWakeLockObserver_OnWakeLockDeactivated_Name: {
      break;
    }
  }
  return false;
}

bool WakeLockObserverRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "WakeLockObserver RequestValidator");

  switch (message->header()->name) {
    case internal::kWakeLockObserver_OnWakeLockDeactivated_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WakeLockObserver_OnWakeLockDeactivated_Params_Data>(
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
}  // namespace device

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif