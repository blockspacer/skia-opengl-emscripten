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

#include "components/discardable_memory/public/interfaces/discardable_shared_memory_manager.mojom.h"

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

#include "components/discardable_memory/public/interfaces/discardable_shared_memory_manager.mojom-params-data.h"
#include "components/discardable_memory/public/interfaces/discardable_shared_memory_manager.mojom-shared-message-ids.h"

#include "components/discardable_memory/public/interfaces/discardable_shared_memory_manager.mojom-import-headers.h"


#ifndef COMPONENTS_DISCARDABLE_MEMORY_PUBLIC_INTERFACES_DISCARDABLE_SHARED_MEMORY_MANAGER_MOJOM_JUMBO_H_
#define COMPONENTS_DISCARDABLE_MEMORY_PUBLIC_INTERFACES_DISCARDABLE_SHARED_MEMORY_MANAGER_MOJOM_JUMBO_H_
#include "mojo/public/cpp/base/shared_memory_mojom_traits.h"
#endif
namespace discardable_memory {
namespace mojom {
const char DiscardableSharedMemoryManager::Name_[] = "discardable_memory.mojom.DiscardableSharedMemoryManager";

class DiscardableSharedMemoryManager_AllocateLockedDiscardableSharedMemory_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  DiscardableSharedMemoryManager_AllocateLockedDiscardableSharedMemory_ForwardToCallback(
      DiscardableSharedMemoryManager::AllocateLockedDiscardableSharedMemoryCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  DiscardableSharedMemoryManager::AllocateLockedDiscardableSharedMemoryCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(DiscardableSharedMemoryManager_AllocateLockedDiscardableSharedMemory_ForwardToCallback);
};

DiscardableSharedMemoryManagerProxy::DiscardableSharedMemoryManagerProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void DiscardableSharedMemoryManagerProxy::AllocateLockedDiscardableSharedMemory(
    uint32_t in_size, int32_t in_id, AllocateLockedDiscardableSharedMemoryCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::DiscardableSharedMemoryManager::AllocateLockedDiscardableSharedMemory");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDiscardableSharedMemoryManager_AllocateLockedDiscardableSharedMemory_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::discardable_memory::mojom::internal::DiscardableSharedMemoryManager_AllocateLockedDiscardableSharedMemory_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->size = in_size;
  params->id = in_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(DiscardableSharedMemoryManager::Name_);
  message.set_method_name("AllocateLockedDiscardableSharedMemory");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new DiscardableSharedMemoryManager_AllocateLockedDiscardableSharedMemory_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void DiscardableSharedMemoryManagerProxy::DeletedDiscardableSharedMemory(
    int32_t in_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::DiscardableSharedMemoryManager::DeletedDiscardableSharedMemory");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDiscardableSharedMemoryManager_DeletedDiscardableSharedMemory_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::discardable_memory::mojom::internal::DiscardableSharedMemoryManager_DeletedDiscardableSharedMemory_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->id = in_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(DiscardableSharedMemoryManager::Name_);
  message.set_method_name("DeletedDiscardableSharedMemory");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class DiscardableSharedMemoryManager_AllocateLockedDiscardableSharedMemory_ProxyToResponder {
 public:
  static DiscardableSharedMemoryManager::AllocateLockedDiscardableSharedMemoryCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<DiscardableSharedMemoryManager_AllocateLockedDiscardableSharedMemory_ProxyToResponder> proxy(
        new DiscardableSharedMemoryManager_AllocateLockedDiscardableSharedMemory_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&DiscardableSharedMemoryManager_AllocateLockedDiscardableSharedMemory_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~DiscardableSharedMemoryManager_AllocateLockedDiscardableSharedMemory_ProxyToResponder() {
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
  DiscardableSharedMemoryManager_AllocateLockedDiscardableSharedMemory_ProxyToResponder(
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
        << "DiscardableSharedMemoryManager::AllocateLockedDiscardableSharedMemoryCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      base::UnsafeSharedMemoryRegion in_region);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(DiscardableSharedMemoryManager_AllocateLockedDiscardableSharedMemory_ProxyToResponder);
};

bool DiscardableSharedMemoryManager_AllocateLockedDiscardableSharedMemory_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::DiscardableSharedMemoryManager::AllocateLockedDiscardableSharedMemoryCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::DiscardableSharedMemoryManager_AllocateLockedDiscardableSharedMemory_ResponseParams_Data* params =
      reinterpret_cast<
          internal::DiscardableSharedMemoryManager_AllocateLockedDiscardableSharedMemory_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  base::UnsafeSharedMemoryRegion p_region{};
  DiscardableSharedMemoryManager_AllocateLockedDiscardableSharedMemory_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadRegion(&p_region))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        DiscardableSharedMemoryManager::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_region));
  return true;
}

void DiscardableSharedMemoryManager_AllocateLockedDiscardableSharedMemory_ProxyToResponder::Run(
    base::UnsafeSharedMemoryRegion in_region) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDiscardableSharedMemoryManager_AllocateLockedDiscardableSharedMemory_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::discardable_memory::mojom::internal::DiscardableSharedMemoryManager_AllocateLockedDiscardableSharedMemory_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->region)::BaseType::BufferWriter
      region_writer;
  mojo::internal::Serialize<::mojo_base::mojom::UnsafeSharedMemoryRegionDataView>(
      in_region, buffer, &region_writer, &serialization_context);
  params->region.Set(
      region_writer.is_null() ? nullptr : region_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->region.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null region in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::DiscardableSharedMemoryManager::AllocateLockedDiscardableSharedMemoryCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(DiscardableSharedMemoryManager::Name_);
  message.set_method_name("AllocateLockedDiscardableSharedMemory");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool DiscardableSharedMemoryManagerStubDispatch::Accept(
    DiscardableSharedMemoryManager* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kDiscardableSharedMemoryManager_AllocateLockedDiscardableSharedMemory_Name: {
      break;
    }
    case internal::kDiscardableSharedMemoryManager_DeletedDiscardableSharedMemory_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::DiscardableSharedMemoryManager::DeletedDiscardableSharedMemory",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::DiscardableSharedMemoryManager_DeletedDiscardableSharedMemory_Params_Data* params =
          reinterpret_cast<internal::DiscardableSharedMemoryManager_DeletedDiscardableSharedMemory_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_id{};
      DiscardableSharedMemoryManager_DeletedDiscardableSharedMemory_ParamsDataView input_data_view(params, &serialization_context);
      
      p_id = input_data_view.id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            DiscardableSharedMemoryManager::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->DeletedDiscardableSharedMemory(
std::move(p_id));
      return true;
    }
  }
  return false;
}

// static
bool DiscardableSharedMemoryManagerStubDispatch::AcceptWithResponder(
    DiscardableSharedMemoryManager* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kDiscardableSharedMemoryManager_AllocateLockedDiscardableSharedMemory_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::DiscardableSharedMemoryManager::AllocateLockedDiscardableSharedMemory",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::DiscardableSharedMemoryManager_AllocateLockedDiscardableSharedMemory_Params_Data* params =
          reinterpret_cast<
              internal::DiscardableSharedMemoryManager_AllocateLockedDiscardableSharedMemory_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint32_t p_size{};
      int32_t p_id{};
      DiscardableSharedMemoryManager_AllocateLockedDiscardableSharedMemory_ParamsDataView input_data_view(params, &serialization_context);
      
      p_size = input_data_view.size();
      p_id = input_data_view.id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            DiscardableSharedMemoryManager::Name_, 0, false);
        return false;
      }
      DiscardableSharedMemoryManager::AllocateLockedDiscardableSharedMemoryCallback callback =
          DiscardableSharedMemoryManager_AllocateLockedDiscardableSharedMemory_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->AllocateLockedDiscardableSharedMemory(
std::move(p_size), 
std::move(p_id), std::move(callback));
      return true;
    }
    case internal::kDiscardableSharedMemoryManager_DeletedDiscardableSharedMemory_Name: {
      break;
    }
  }
  return false;
}

bool DiscardableSharedMemoryManagerRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "DiscardableSharedMemoryManager RequestValidator");

  switch (message->header()->name) {
    case internal::kDiscardableSharedMemoryManager_AllocateLockedDiscardableSharedMemory_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::DiscardableSharedMemoryManager_AllocateLockedDiscardableSharedMemory_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDiscardableSharedMemoryManager_DeletedDiscardableSharedMemory_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::DiscardableSharedMemoryManager_DeletedDiscardableSharedMemory_Params_Data>(
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

bool DiscardableSharedMemoryManagerResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "DiscardableSharedMemoryManager ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kDiscardableSharedMemoryManager_AllocateLockedDiscardableSharedMemory_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::DiscardableSharedMemoryManager_AllocateLockedDiscardableSharedMemory_ResponseParams_Data>(
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
}  // namespace discardable_memory

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif