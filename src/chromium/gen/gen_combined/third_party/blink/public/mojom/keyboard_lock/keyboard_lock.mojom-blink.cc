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

#include "third_party/blink/public/mojom/keyboard_lock/keyboard_lock.mojom-blink.h"

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

#include "third_party/blink/public/mojom/keyboard_lock/keyboard_lock.mojom-params-data.h"
#include "third_party/blink/public/mojom/keyboard_lock/keyboard_lock.mojom-shared-message-ids.h"

#include "third_party/blink/public/mojom/keyboard_lock/keyboard_lock.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_KEYBOARD_LOCK_KEYBOARD_LOCK_MOJOM_BLINK_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_KEYBOARD_LOCK_KEYBOARD_LOCK_MOJOM_BLINK_JUMBO_H_
#endif
namespace blink {
namespace mojom {
namespace blink {
GetKeyboardLayoutMapResult::GetKeyboardLayoutMapResult()
    : status(),
      layout_map() {}

GetKeyboardLayoutMapResult::GetKeyboardLayoutMapResult(
    GetKeyboardLayoutMapStatus status_in,
    const WTF::HashMap<WTF::String, WTF::String>& layout_map_in)
    : status(std::move(status_in)),
      layout_map(std::move(layout_map_in)) {}

GetKeyboardLayoutMapResult::~GetKeyboardLayoutMapResult() = default;

bool GetKeyboardLayoutMapResult::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char KeyboardLockService::Name_[] = "blink.mojom.KeyboardLockService";

class KeyboardLockService_RequestKeyboardLock_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  KeyboardLockService_RequestKeyboardLock_ForwardToCallback(
      KeyboardLockService::RequestKeyboardLockCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  KeyboardLockService::RequestKeyboardLockCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(KeyboardLockService_RequestKeyboardLock_ForwardToCallback);
};

class KeyboardLockService_GetKeyboardLayoutMap_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  KeyboardLockService_GetKeyboardLayoutMap_ForwardToCallback(
      KeyboardLockService::GetKeyboardLayoutMapCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  KeyboardLockService::GetKeyboardLayoutMapCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(KeyboardLockService_GetKeyboardLayoutMap_ForwardToCallback);
};

KeyboardLockServiceProxy::KeyboardLockServiceProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void KeyboardLockServiceProxy::RequestKeyboardLock(
    const WTF::Vector<WTF::String>& in_key_codes, RequestKeyboardLockCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::KeyboardLockService::RequestKeyboardLock");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kKeyboardLockService_RequestKeyboardLock_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::KeyboardLockService_RequestKeyboardLock_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->key_codes)::BaseType::BufferWriter
      key_codes_writer;
  const mojo::internal::ContainerValidateParams key_codes_validate_params(
      0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
  mojo::internal::Serialize<mojo::ArrayDataView<mojo::StringDataView>>(
      in_key_codes, buffer, &key_codes_writer, &key_codes_validate_params,
      &serialization_context);
  params->key_codes.Set(
      key_codes_writer.is_null() ? nullptr : key_codes_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->key_codes.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null key_codes in KeyboardLockService.RequestKeyboardLock request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(KeyboardLockService::Name_);
  message.set_method_name("RequestKeyboardLock");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new KeyboardLockService_RequestKeyboardLock_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void KeyboardLockServiceProxy::CancelKeyboardLock(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::KeyboardLockService::CancelKeyboardLock");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kKeyboardLockService_CancelKeyboardLock_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::KeyboardLockService_CancelKeyboardLock_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(KeyboardLockService::Name_);
  message.set_method_name("CancelKeyboardLock");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void KeyboardLockServiceProxy::GetKeyboardLayoutMap(
    GetKeyboardLayoutMapCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::KeyboardLockService::GetKeyboardLayoutMap");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kKeyboardLockService_GetKeyboardLayoutMap_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::KeyboardLockService_GetKeyboardLayoutMap_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(KeyboardLockService::Name_);
  message.set_method_name("GetKeyboardLayoutMap");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new KeyboardLockService_GetKeyboardLayoutMap_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class KeyboardLockService_RequestKeyboardLock_ProxyToResponder {
 public:
  static KeyboardLockService::RequestKeyboardLockCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<KeyboardLockService_RequestKeyboardLock_ProxyToResponder> proxy(
        new KeyboardLockService_RequestKeyboardLock_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&KeyboardLockService_RequestKeyboardLock_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~KeyboardLockService_RequestKeyboardLock_ProxyToResponder() {
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
  KeyboardLockService_RequestKeyboardLock_ProxyToResponder(
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
        << "KeyboardLockService::RequestKeyboardLockCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      KeyboardLockRequestResult in_result);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(KeyboardLockService_RequestKeyboardLock_ProxyToResponder);
};

bool KeyboardLockService_RequestKeyboardLock_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::KeyboardLockService::RequestKeyboardLockCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::KeyboardLockService_RequestKeyboardLock_ResponseParams_Data* params =
      reinterpret_cast<
          internal::KeyboardLockService_RequestKeyboardLock_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  KeyboardLockRequestResult p_result{};
  KeyboardLockService_RequestKeyboardLock_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadResult(&p_result))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        KeyboardLockService::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result));
  return true;
}

void KeyboardLockService_RequestKeyboardLock_ProxyToResponder::Run(
    KeyboardLockRequestResult in_result) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kKeyboardLockService_RequestKeyboardLock_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::KeyboardLockService_RequestKeyboardLock_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::KeyboardLockRequestResult>(
      in_result, &params->result);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::KeyboardLockService::RequestKeyboardLockCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(KeyboardLockService::Name_);
  message.set_method_name("RequestKeyboardLock");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class KeyboardLockService_GetKeyboardLayoutMap_ProxyToResponder {
 public:
  static KeyboardLockService::GetKeyboardLayoutMapCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<KeyboardLockService_GetKeyboardLayoutMap_ProxyToResponder> proxy(
        new KeyboardLockService_GetKeyboardLayoutMap_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&KeyboardLockService_GetKeyboardLayoutMap_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~KeyboardLockService_GetKeyboardLayoutMap_ProxyToResponder() {
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
  KeyboardLockService_GetKeyboardLayoutMap_ProxyToResponder(
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
        << "KeyboardLockService::GetKeyboardLayoutMapCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      GetKeyboardLayoutMapResultPtr in_result);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(KeyboardLockService_GetKeyboardLayoutMap_ProxyToResponder);
};

bool KeyboardLockService_GetKeyboardLayoutMap_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::KeyboardLockService::GetKeyboardLayoutMapCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::KeyboardLockService_GetKeyboardLayoutMap_ResponseParams_Data* params =
      reinterpret_cast<
          internal::KeyboardLockService_GetKeyboardLayoutMap_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  GetKeyboardLayoutMapResultPtr p_result{};
  KeyboardLockService_GetKeyboardLayoutMap_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadResult(&p_result))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        KeyboardLockService::Name_, 2, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result));
  return true;
}

void KeyboardLockService_GetKeyboardLayoutMap_ProxyToResponder::Run(
    GetKeyboardLayoutMapResultPtr in_result) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kKeyboardLockService_GetKeyboardLayoutMap_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::KeyboardLockService_GetKeyboardLayoutMap_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->result)::BaseType::BufferWriter
      result_writer;
  mojo::internal::Serialize<::blink::mojom::GetKeyboardLayoutMapResultDataView>(
      in_result, buffer, &result_writer, &serialization_context);
  params->result.Set(
      result_writer.is_null() ? nullptr : result_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->result.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null result in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::KeyboardLockService::GetKeyboardLayoutMapCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(KeyboardLockService::Name_);
  message.set_method_name("GetKeyboardLayoutMap");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool KeyboardLockServiceStubDispatch::Accept(
    KeyboardLockService* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kKeyboardLockService_RequestKeyboardLock_Name: {
      break;
    }
    case internal::kKeyboardLockService_CancelKeyboardLock_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::KeyboardLockService::CancelKeyboardLock",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::KeyboardLockService_CancelKeyboardLock_Params_Data* params =
          reinterpret_cast<internal::KeyboardLockService_CancelKeyboardLock_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      KeyboardLockService_CancelKeyboardLock_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            KeyboardLockService::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->CancelKeyboardLock();
      return true;
    }
    case internal::kKeyboardLockService_GetKeyboardLayoutMap_Name: {
      break;
    }
  }
  return false;
}

// static
bool KeyboardLockServiceStubDispatch::AcceptWithResponder(
    KeyboardLockService* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kKeyboardLockService_RequestKeyboardLock_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::KeyboardLockService::RequestKeyboardLock",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::KeyboardLockService_RequestKeyboardLock_Params_Data* params =
          reinterpret_cast<
              internal::KeyboardLockService_RequestKeyboardLock_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WTF::Vector<WTF::String> p_key_codes{};
      KeyboardLockService_RequestKeyboardLock_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadKeyCodes(&p_key_codes))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            KeyboardLockService::Name_, 0, false);
        return false;
      }
      KeyboardLockService::RequestKeyboardLockCallback callback =
          KeyboardLockService_RequestKeyboardLock_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->RequestKeyboardLock(
std::move(p_key_codes), std::move(callback));
      return true;
    }
    case internal::kKeyboardLockService_CancelKeyboardLock_Name: {
      break;
    }
    case internal::kKeyboardLockService_GetKeyboardLayoutMap_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::KeyboardLockService::GetKeyboardLayoutMap",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::KeyboardLockService_GetKeyboardLayoutMap_Params_Data* params =
          reinterpret_cast<
              internal::KeyboardLockService_GetKeyboardLayoutMap_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      KeyboardLockService_GetKeyboardLayoutMap_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            KeyboardLockService::Name_, 2, false);
        return false;
      }
      KeyboardLockService::GetKeyboardLayoutMapCallback callback =
          KeyboardLockService_GetKeyboardLayoutMap_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GetKeyboardLayoutMap(std::move(callback));
      return true;
    }
  }
  return false;
}

bool KeyboardLockServiceRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "KeyboardLockService RequestValidator");

  switch (message->header()->name) {
    case internal::kKeyboardLockService_RequestKeyboardLock_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::KeyboardLockService_RequestKeyboardLock_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kKeyboardLockService_CancelKeyboardLock_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::KeyboardLockService_CancelKeyboardLock_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kKeyboardLockService_GetKeyboardLayoutMap_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::KeyboardLockService_GetKeyboardLayoutMap_Params_Data>(
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

bool KeyboardLockServiceResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "KeyboardLockService ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kKeyboardLockService_RequestKeyboardLock_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::KeyboardLockService_RequestKeyboardLock_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kKeyboardLockService_GetKeyboardLayoutMap_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::KeyboardLockService_GetKeyboardLayoutMap_ResponseParams_Data>(
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
bool StructTraits<::blink::mojom::blink::GetKeyboardLayoutMapResult::DataView, ::blink::mojom::blink::GetKeyboardLayoutMapResultPtr>::Read(
    ::blink::mojom::blink::GetKeyboardLayoutMapResult::DataView input,
    ::blink::mojom::blink::GetKeyboardLayoutMapResultPtr* output) {
  bool success = true;
  ::blink::mojom::blink::GetKeyboardLayoutMapResultPtr result(::blink::mojom::blink::GetKeyboardLayoutMapResult::New());
  
      if (!input.ReadStatus(&result->status))
        success = false;
      if (!input.ReadLayoutMap(&result->layout_map))
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