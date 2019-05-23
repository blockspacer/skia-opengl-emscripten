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

#include "media/mojo/interfaces/provision_fetcher.mojom.h"

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

#include "media/mojo/interfaces/provision_fetcher.mojom-params-data.h"
#include "media/mojo/interfaces/provision_fetcher.mojom-shared-message-ids.h"

#include "media/mojo/interfaces/provision_fetcher.mojom-import-headers.h"


#ifndef MEDIA_MOJO_INTERFACES_PROVISION_FETCHER_MOJOM_JUMBO_H_
#define MEDIA_MOJO_INTERFACES_PROVISION_FETCHER_MOJOM_JUMBO_H_
#endif
namespace media {
namespace mojom {
const char ProvisionFetcher::Name_[] = "media.mojom.ProvisionFetcher";

class ProvisionFetcher_Retrieve_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ProvisionFetcher_Retrieve_ForwardToCallback(
      ProvisionFetcher::RetrieveCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ProvisionFetcher::RetrieveCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(ProvisionFetcher_Retrieve_ForwardToCallback);
};

ProvisionFetcherProxy::ProvisionFetcherProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void ProvisionFetcherProxy::Retrieve(
    const std::string& in_default_url, const std::string& in_request_data, RetrieveCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ProvisionFetcher::Retrieve");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kProvisionFetcher_Retrieve_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::ProvisionFetcher_Retrieve_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->default_url)::BaseType::BufferWriter
      default_url_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_default_url, buffer, &default_url_writer, &serialization_context);
  params->default_url.Set(
      default_url_writer.is_null() ? nullptr : default_url_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->default_url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null default_url in ProvisionFetcher.Retrieve request");
  typename decltype(params->request_data)::BaseType::BufferWriter
      request_data_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_request_data, buffer, &request_data_writer, &serialization_context);
  params->request_data.Set(
      request_data_writer.is_null() ? nullptr : request_data_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->request_data.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null request_data in ProvisionFetcher.Retrieve request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ProvisionFetcher::Name_);
  message.set_method_name("Retrieve");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ProvisionFetcher_Retrieve_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class ProvisionFetcher_Retrieve_ProxyToResponder {
 public:
  static ProvisionFetcher::RetrieveCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<ProvisionFetcher_Retrieve_ProxyToResponder> proxy(
        new ProvisionFetcher_Retrieve_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&ProvisionFetcher_Retrieve_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~ProvisionFetcher_Retrieve_ProxyToResponder() {
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
  ProvisionFetcher_Retrieve_ProxyToResponder(
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
        << "ProvisionFetcher::RetrieveCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      bool in_result, const std::string& in_response);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(ProvisionFetcher_Retrieve_ProxyToResponder);
};

bool ProvisionFetcher_Retrieve_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::ProvisionFetcher::RetrieveCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::ProvisionFetcher_Retrieve_ResponseParams_Data* params =
      reinterpret_cast<
          internal::ProvisionFetcher_Retrieve_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_result{};
  std::string p_response{};
  ProvisionFetcher_Retrieve_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_result = input_data_view.result();
  if (!input_data_view.ReadResponse(&p_response))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        ProvisionFetcher::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result), 
std::move(p_response));
  return true;
}

void ProvisionFetcher_Retrieve_ProxyToResponder::Run(
    bool in_result, const std::string& in_response) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kProvisionFetcher_Retrieve_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::ProvisionFetcher_Retrieve_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->result = in_result;
  typename decltype(params->response)::BaseType::BufferWriter
      response_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_response, buffer, &response_writer, &serialization_context);
  params->response.Set(
      response_writer.is_null() ? nullptr : response_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->response.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null response in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::ProvisionFetcher::RetrieveCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ProvisionFetcher::Name_);
  message.set_method_name("Retrieve");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool ProvisionFetcherStubDispatch::Accept(
    ProvisionFetcher* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kProvisionFetcher_Retrieve_Name: {
      break;
    }
  }
  return false;
}

// static
bool ProvisionFetcherStubDispatch::AcceptWithResponder(
    ProvisionFetcher* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kProvisionFetcher_Retrieve_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ProvisionFetcher::Retrieve",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::ProvisionFetcher_Retrieve_Params_Data* params =
          reinterpret_cast<
              internal::ProvisionFetcher_Retrieve_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_default_url{};
      std::string p_request_data{};
      ProvisionFetcher_Retrieve_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadDefaultUrl(&p_default_url))
        success = false;
      if (!input_data_view.ReadRequestData(&p_request_data))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ProvisionFetcher::Name_, 0, false);
        return false;
      }
      ProvisionFetcher::RetrieveCallback callback =
          ProvisionFetcher_Retrieve_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Retrieve(
std::move(p_default_url), 
std::move(p_request_data), std::move(callback));
      return true;
    }
  }
  return false;
}

bool ProvisionFetcherRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ProvisionFetcher RequestValidator");

  switch (message->header()->name) {
    case internal::kProvisionFetcher_Retrieve_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ProvisionFetcher_Retrieve_Params_Data>(
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

bool ProvisionFetcherResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ProvisionFetcher ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kProvisionFetcher_Retrieve_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ProvisionFetcher_Retrieve_ResponseParams_Data>(
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
}  // namespace media

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif