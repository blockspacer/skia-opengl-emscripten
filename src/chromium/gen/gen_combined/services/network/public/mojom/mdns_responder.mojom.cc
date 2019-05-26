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

#include "services/network/public/mojom/mdns_responder.mojom.h"

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

#include "services/network/public/mojom/mdns_responder.mojom-params-data.h"
#include "services/network/public/mojom/mdns_responder.mojom-shared-message-ids.h"

#include "services/network/public/mojom/mdns_responder.mojom-import-headers.h"


#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_MDNS_RESPONDER_MOJOM_JUMBO_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_MDNS_RESPONDER_MOJOM_JUMBO_H_
#include "services/network/public/cpp/ip_address_mojom_traits.h"
#endif
namespace network {
namespace mojom {
const char MdnsResponder::Name_[] = "network.mojom.MdnsResponder";

class MdnsResponder_CreateNameForAddress_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  MdnsResponder_CreateNameForAddress_ForwardToCallback(
      MdnsResponder::CreateNameForAddressCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  MdnsResponder::CreateNameForAddressCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(MdnsResponder_CreateNameForAddress_ForwardToCallback);
};

class MdnsResponder_RemoveNameForAddress_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  MdnsResponder_RemoveNameForAddress_ForwardToCallback(
      MdnsResponder::RemoveNameForAddressCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  MdnsResponder::RemoveNameForAddressCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(MdnsResponder_RemoveNameForAddress_ForwardToCallback);
};

MdnsResponderProxy::MdnsResponderProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void MdnsResponderProxy::CreateNameForAddress(
    const net::IPAddress& in_address, CreateNameForAddressCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::MdnsResponder::CreateNameForAddress");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMdnsResponder_CreateNameForAddress_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::MdnsResponder_CreateNameForAddress_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->address)::BaseType::BufferWriter
      address_writer;
  mojo::internal::Serialize<::network::mojom::IPAddressDataView>(
      in_address, buffer, &address_writer, &serialization_context);
  params->address.Set(
      address_writer.is_null() ? nullptr : address_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->address.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null address in MdnsResponder.CreateNameForAddress request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(MdnsResponder::Name_);
  message.set_method_name("CreateNameForAddress");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new MdnsResponder_CreateNameForAddress_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void MdnsResponderProxy::RemoveNameForAddress(
    const net::IPAddress& in_address, RemoveNameForAddressCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::MdnsResponder::RemoveNameForAddress");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMdnsResponder_RemoveNameForAddress_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::MdnsResponder_RemoveNameForAddress_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->address)::BaseType::BufferWriter
      address_writer;
  mojo::internal::Serialize<::network::mojom::IPAddressDataView>(
      in_address, buffer, &address_writer, &serialization_context);
  params->address.Set(
      address_writer.is_null() ? nullptr : address_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->address.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null address in MdnsResponder.RemoveNameForAddress request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(MdnsResponder::Name_);
  message.set_method_name("RemoveNameForAddress");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new MdnsResponder_RemoveNameForAddress_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class MdnsResponder_CreateNameForAddress_ProxyToResponder {
 public:
  static MdnsResponder::CreateNameForAddressCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<MdnsResponder_CreateNameForAddress_ProxyToResponder> proxy(
        new MdnsResponder_CreateNameForAddress_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&MdnsResponder_CreateNameForAddress_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~MdnsResponder_CreateNameForAddress_ProxyToResponder() {
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
  MdnsResponder_CreateNameForAddress_ProxyToResponder(
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
        << "MdnsResponder::CreateNameForAddressCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      const std::string& in_name, bool in_announcement_scheduled);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(MdnsResponder_CreateNameForAddress_ProxyToResponder);
};

bool MdnsResponder_CreateNameForAddress_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::MdnsResponder::CreateNameForAddressCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::MdnsResponder_CreateNameForAddress_ResponseParams_Data* params =
      reinterpret_cast<
          internal::MdnsResponder_CreateNameForAddress_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  std::string p_name{};
  bool p_announcement_scheduled{};
  MdnsResponder_CreateNameForAddress_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadName(&p_name))
    success = false;
  p_announcement_scheduled = input_data_view.announcement_scheduled();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        MdnsResponder::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_name), 
std::move(p_announcement_scheduled));
  return true;
}

void MdnsResponder_CreateNameForAddress_ProxyToResponder::Run(
    const std::string& in_name, bool in_announcement_scheduled) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMdnsResponder_CreateNameForAddress_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::MdnsResponder_CreateNameForAddress_ResponseParams_Data::BufferWriter
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
      "null name in ");
  params->announcement_scheduled = in_announcement_scheduled;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::MdnsResponder::CreateNameForAddressCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(MdnsResponder::Name_);
  message.set_method_name("CreateNameForAddress");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class MdnsResponder_RemoveNameForAddress_ProxyToResponder {
 public:
  static MdnsResponder::RemoveNameForAddressCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<MdnsResponder_RemoveNameForAddress_ProxyToResponder> proxy(
        new MdnsResponder_RemoveNameForAddress_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&MdnsResponder_RemoveNameForAddress_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~MdnsResponder_RemoveNameForAddress_ProxyToResponder() {
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
  MdnsResponder_RemoveNameForAddress_ProxyToResponder(
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
        << "MdnsResponder::RemoveNameForAddressCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      bool in_removed, bool in_goodbye_scheduled);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(MdnsResponder_RemoveNameForAddress_ProxyToResponder);
};

bool MdnsResponder_RemoveNameForAddress_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::MdnsResponder::RemoveNameForAddressCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::MdnsResponder_RemoveNameForAddress_ResponseParams_Data* params =
      reinterpret_cast<
          internal::MdnsResponder_RemoveNameForAddress_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_removed{};
  bool p_goodbye_scheduled{};
  MdnsResponder_RemoveNameForAddress_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_removed = input_data_view.removed();
  p_goodbye_scheduled = input_data_view.goodbye_scheduled();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        MdnsResponder::Name_, 1, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_removed), 
std::move(p_goodbye_scheduled));
  return true;
}

void MdnsResponder_RemoveNameForAddress_ProxyToResponder::Run(
    bool in_removed, bool in_goodbye_scheduled) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMdnsResponder_RemoveNameForAddress_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::MdnsResponder_RemoveNameForAddress_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->removed = in_removed;
  params->goodbye_scheduled = in_goodbye_scheduled;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::MdnsResponder::RemoveNameForAddressCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(MdnsResponder::Name_);
  message.set_method_name("RemoveNameForAddress");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool MdnsResponderStubDispatch::Accept(
    MdnsResponder* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kMdnsResponder_CreateNameForAddress_Name: {
      break;
    }
    case internal::kMdnsResponder_RemoveNameForAddress_Name: {
      break;
    }
  }
  return false;
}

// static
bool MdnsResponderStubDispatch::AcceptWithResponder(
    MdnsResponder* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kMdnsResponder_CreateNameForAddress_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::MdnsResponder::CreateNameForAddress",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::MdnsResponder_CreateNameForAddress_Params_Data* params =
          reinterpret_cast<
              internal::MdnsResponder_CreateNameForAddress_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      net::IPAddress p_address{};
      MdnsResponder_CreateNameForAddress_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadAddress(&p_address))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            MdnsResponder::Name_, 0, false);
        return false;
      }
      MdnsResponder::CreateNameForAddressCallback callback =
          MdnsResponder_CreateNameForAddress_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->CreateNameForAddress(
std::move(p_address), std::move(callback));
      return true;
    }
    case internal::kMdnsResponder_RemoveNameForAddress_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::MdnsResponder::RemoveNameForAddress",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::MdnsResponder_RemoveNameForAddress_Params_Data* params =
          reinterpret_cast<
              internal::MdnsResponder_RemoveNameForAddress_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      net::IPAddress p_address{};
      MdnsResponder_RemoveNameForAddress_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadAddress(&p_address))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            MdnsResponder::Name_, 1, false);
        return false;
      }
      MdnsResponder::RemoveNameForAddressCallback callback =
          MdnsResponder_RemoveNameForAddress_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->RemoveNameForAddress(
std::move(p_address), std::move(callback));
      return true;
    }
  }
  return false;
}

bool MdnsResponderRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "MdnsResponder RequestValidator");

  switch (message->header()->name) {
    case internal::kMdnsResponder_CreateNameForAddress_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MdnsResponder_CreateNameForAddress_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kMdnsResponder_RemoveNameForAddress_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MdnsResponder_RemoveNameForAddress_Params_Data>(
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

bool MdnsResponderResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "MdnsResponder ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kMdnsResponder_CreateNameForAddress_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::MdnsResponder_CreateNameForAddress_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kMdnsResponder_RemoveNameForAddress_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::MdnsResponder_RemoveNameForAddress_ResponseParams_Data>(
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
}  // namespace network

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif