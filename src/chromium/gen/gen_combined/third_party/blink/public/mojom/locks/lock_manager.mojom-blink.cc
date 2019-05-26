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

#include "third_party/blink/public/mojom/locks/lock_manager.mojom-blink.h"

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

#include "third_party/blink/public/mojom/locks/lock_manager.mojom-params-data.h"
#include "third_party/blink/public/mojom/locks/lock_manager.mojom-shared-message-ids.h"

#include "third_party/blink/public/mojom/locks/lock_manager.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_LOCKS_LOCK_MANAGER_MOJOM_BLINK_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_LOCKS_LOCK_MANAGER_MOJOM_BLINK_JUMBO_H_
#endif
namespace blink {
namespace mojom {
namespace blink {
LockInfo::LockInfo()
    : name(),
      mode(),
      client_id() {}

LockInfo::LockInfo(
    const WTF::String& name_in,
    LockMode mode_in,
    const WTF::String& client_id_in)
    : name(std::move(name_in)),
      mode(std::move(mode_in)),
      client_id(std::move(client_id_in)) {}

LockInfo::~LockInfo() = default;
size_t LockInfo::Hash(size_t seed) const {
  seed = mojo::internal::WTFHash(seed, this->name);
  seed = mojo::internal::WTFHash(seed, this->mode);
  seed = mojo::internal::WTFHash(seed, this->client_id);
  return seed;
}

bool LockInfo::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char LockHandle::Name_[] = "blink.mojom.LockHandle";

LockHandleProxy::LockHandleProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

// static
bool LockHandleStubDispatch::Accept(
    LockHandle* impl,
    mojo::Message* message) {
  return false;
}

// static
bool LockHandleStubDispatch::AcceptWithResponder(
    LockHandle* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  return false;
}

bool LockHandleRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "LockHandle RequestValidator");

  switch (message->header()->name) {
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      &validation_context,
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}

const char LockRequest::Name_[] = "blink.mojom.LockRequest";

LockRequestProxy::LockRequestProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void LockRequestProxy::Granted(
    LockHandleAssociatedPtrInfo in_lock_handle) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::LockRequest::Granted");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kLockRequest_Granted_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::LockRequest_Granted_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::LockHandleAssociatedPtrInfoDataView>(
      in_lock_handle, &params->lock_handle, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->lock_handle),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_INTERFACE_ID,
      "invalid lock_handle in LockRequest.Granted request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(LockRequest::Name_);
  message.set_method_name("Granted");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void LockRequestProxy::Failed(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::LockRequest::Failed");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kLockRequest_Failed_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::LockRequest_Failed_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(LockRequest::Name_);
  message.set_method_name("Failed");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void LockRequestProxy::Abort(
    const WTF::String& in_reason) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::LockRequest::Abort");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kLockRequest_Abort_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::LockRequest_Abort_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->reason)::BaseType::BufferWriter
      reason_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_reason, buffer, &reason_writer, &serialization_context);
  params->reason.Set(
      reason_writer.is_null() ? nullptr : reason_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->reason.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null reason in LockRequest.Abort request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(LockRequest::Name_);
  message.set_method_name("Abort");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool LockRequestStubDispatch::Accept(
    LockRequest* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kLockRequest_Granted_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::LockRequest::Granted",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::LockRequest_Granted_Params_Data* params =
          reinterpret_cast<internal::LockRequest_Granted_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      LockHandleAssociatedPtrInfo p_lock_handle{};
      LockRequest_Granted_ParamsDataView input_data_view(params, &serialization_context);
      
      p_lock_handle =
          input_data_view.TakeLockHandle<decltype(p_lock_handle)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            LockRequest::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Granted(
std::move(p_lock_handle));
      return true;
    }
    case internal::kLockRequest_Failed_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::LockRequest::Failed",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::LockRequest_Failed_Params_Data* params =
          reinterpret_cast<internal::LockRequest_Failed_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      LockRequest_Failed_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            LockRequest::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Failed();
      return true;
    }
    case internal::kLockRequest_Abort_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::LockRequest::Abort",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::LockRequest_Abort_Params_Data* params =
          reinterpret_cast<internal::LockRequest_Abort_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WTF::String p_reason{};
      LockRequest_Abort_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadReason(&p_reason))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            LockRequest::Name_, 2, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Abort(
std::move(p_reason));
      return true;
    }
  }
  return false;
}

// static
bool LockRequestStubDispatch::AcceptWithResponder(
    LockRequest* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kLockRequest_Granted_Name: {
      break;
    }
    case internal::kLockRequest_Failed_Name: {
      break;
    }
    case internal::kLockRequest_Abort_Name: {
      break;
    }
  }
  return false;
}

bool LockRequestRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "LockRequest RequestValidator");

  switch (message->header()->name) {
    case internal::kLockRequest_Granted_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::LockRequest_Granted_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kLockRequest_Failed_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::LockRequest_Failed_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kLockRequest_Abort_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::LockRequest_Abort_Params_Data>(
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

const char LockManager::Name_[] = "blink.mojom.LockManager";

class LockManager_QueryState_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  LockManager_QueryState_ForwardToCallback(
      LockManager::QueryStateCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  LockManager::QueryStateCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(LockManager_QueryState_ForwardToCallback);
};

LockManagerProxy::LockManagerProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void LockManagerProxy::RequestLock(
    const WTF::String& in_name, LockMode in_mode, LockManager::WaitMode in_wait, LockRequestAssociatedPtrInfo in_request) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::LockManager::RequestLock");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kLockManager_RequestLock_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::LockManager_RequestLock_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->name)::BaseType::BufferWriter
      name_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_name, buffer, &name_writer, &serialization_context);
  params->name.Set(
      name_writer.is_null() ? nullptr : name_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->name.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null name in LockManager.RequestLock request");
  mojo::internal::Serialize<::blink::mojom::LockMode>(
      in_mode, &params->mode);
  mojo::internal::Serialize<::blink::mojom::LockManager_WaitMode>(
      in_wait, &params->wait);
  mojo::internal::Serialize<::blink::mojom::LockRequestAssociatedPtrInfoDataView>(
      in_request, &params->request, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->request),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_INTERFACE_ID,
      "invalid request in LockManager.RequestLock request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(LockManager::Name_);
  message.set_method_name("RequestLock");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void LockManagerProxy::QueryState(
    QueryStateCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::LockManager::QueryState");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kLockManager_QueryState_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::LockManager_QueryState_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(LockManager::Name_);
  message.set_method_name("QueryState");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new LockManager_QueryState_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class LockManager_QueryState_ProxyToResponder {
 public:
  static LockManager::QueryStateCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<LockManager_QueryState_ProxyToResponder> proxy(
        new LockManager_QueryState_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&LockManager_QueryState_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~LockManager_QueryState_ProxyToResponder() {
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
  LockManager_QueryState_ProxyToResponder(
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
        << "LockManager::QueryStateCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      WTF::Vector<LockInfoPtr> in_requested, WTF::Vector<LockInfoPtr> in_held);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(LockManager_QueryState_ProxyToResponder);
};

bool LockManager_QueryState_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::LockManager::QueryStateCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::LockManager_QueryState_ResponseParams_Data* params =
      reinterpret_cast<
          internal::LockManager_QueryState_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  WTF::Vector<LockInfoPtr> p_requested{};
  WTF::Vector<LockInfoPtr> p_held{};
  LockManager_QueryState_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadRequested(&p_requested))
    success = false;
  if (!input_data_view.ReadHeld(&p_held))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        LockManager::Name_, 1, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_requested), 
std::move(p_held));
  return true;
}

void LockManager_QueryState_ProxyToResponder::Run(
    WTF::Vector<LockInfoPtr> in_requested, WTF::Vector<LockInfoPtr> in_held) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kLockManager_QueryState_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::LockManager_QueryState_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->requested)::BaseType::BufferWriter
      requested_writer;
  const mojo::internal::ContainerValidateParams requested_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::blink::mojom::LockInfoDataView>>(
      in_requested, buffer, &requested_writer, &requested_validate_params,
      &serialization_context);
  params->requested.Set(
      requested_writer.is_null() ? nullptr : requested_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->requested.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null requested in ");
  typename decltype(params->held)::BaseType::BufferWriter
      held_writer;
  const mojo::internal::ContainerValidateParams held_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::blink::mojom::LockInfoDataView>>(
      in_held, buffer, &held_writer, &held_validate_params,
      &serialization_context);
  params->held.Set(
      held_writer.is_null() ? nullptr : held_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->held.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null held in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::LockManager::QueryStateCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(LockManager::Name_);
  message.set_method_name("QueryState");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool LockManagerStubDispatch::Accept(
    LockManager* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kLockManager_RequestLock_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::LockManager::RequestLock",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::LockManager_RequestLock_Params_Data* params =
          reinterpret_cast<internal::LockManager_RequestLock_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WTF::String p_name{};
      LockMode p_mode{};
      LockManager::WaitMode p_wait{};
      LockRequestAssociatedPtrInfo p_request{};
      LockManager_RequestLock_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadName(&p_name))
        success = false;
      if (!input_data_view.ReadMode(&p_mode))
        success = false;
      if (!input_data_view.ReadWait(&p_wait))
        success = false;
      p_request =
          input_data_view.TakeRequest<decltype(p_request)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            LockManager::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->RequestLock(
std::move(p_name), 
std::move(p_mode), 
std::move(p_wait), 
std::move(p_request));
      return true;
    }
    case internal::kLockManager_QueryState_Name: {
      break;
    }
  }
  return false;
}

// static
bool LockManagerStubDispatch::AcceptWithResponder(
    LockManager* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kLockManager_RequestLock_Name: {
      break;
    }
    case internal::kLockManager_QueryState_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::LockManager::QueryState",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::LockManager_QueryState_Params_Data* params =
          reinterpret_cast<
              internal::LockManager_QueryState_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      LockManager_QueryState_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            LockManager::Name_, 1, false);
        return false;
      }
      LockManager::QueryStateCallback callback =
          LockManager_QueryState_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->QueryState(std::move(callback));
      return true;
    }
  }
  return false;
}

bool LockManagerRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "LockManager RequestValidator");

  switch (message->header()->name) {
    case internal::kLockManager_RequestLock_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::LockManager_RequestLock_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kLockManager_QueryState_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::LockManager_QueryState_Params_Data>(
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

bool LockManagerResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "LockManager ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kLockManager_QueryState_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::LockManager_QueryState_ResponseParams_Data>(
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
bool StructTraits<::blink::mojom::blink::LockInfo::DataView, ::blink::mojom::blink::LockInfoPtr>::Read(
    ::blink::mojom::blink::LockInfo::DataView input,
    ::blink::mojom::blink::LockInfoPtr* output) {
  bool success = true;
  ::blink::mojom::blink::LockInfoPtr result(::blink::mojom::blink::LockInfo::New());
  
      if (!input.ReadName(&result->name))
        success = false;
      if (!input.ReadMode(&result->mode))
        success = false;
      if (!input.ReadClientId(&result->client_id))
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