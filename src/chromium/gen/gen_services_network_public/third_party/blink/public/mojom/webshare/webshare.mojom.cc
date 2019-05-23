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

#include "third_party/blink/public/mojom/webshare/webshare.mojom.h"

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

#include "third_party/blink/public/mojom/webshare/webshare.mojom-params-data.h"
#include "third_party/blink/public/mojom/webshare/webshare.mojom-shared-message-ids.h"

#include "third_party/blink/public/mojom/webshare/webshare.mojom-import-headers.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_WEBSHARE_WEBSHARE_MOJOM_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_WEBSHARE_WEBSHARE_MOJOM_JUMBO_H_
#include "url/mojom/url_gurl_mojom_traits.h"
#endif
namespace blink {
namespace mojom {
SharedFile::SharedFile()
    : name(),
      blob() {}

SharedFile::SharedFile(
    const std::string& name_in,
    ::blink::mojom::SerializedBlobPtr blob_in)
    : name(std::move(name_in)),
      blob(std::move(blob_in)) {}

SharedFile::~SharedFile() = default;

bool SharedFile::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char ShareService::Name_[] = "blink.mojom.ShareService";

class ShareService_Share_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ShareService_Share_ForwardToCallback(
      ShareService::ShareCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ShareService::ShareCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(ShareService_Share_ForwardToCallback);
};

ShareServiceProxy::ShareServiceProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void ShareServiceProxy::Share(
    const std::string& in_title, const std::string& in_text, const GURL& in_url, std::vector<SharedFilePtr> in_files, ShareCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ShareService::Share");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kShareService_Share_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ShareService_Share_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->title)::BaseType::BufferWriter
      title_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_title, buffer, &title_writer, &serialization_context);
  params->title.Set(
      title_writer.is_null() ? nullptr : title_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->title.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null title in ShareService.Share request");
  typename decltype(params->text)::BaseType::BufferWriter
      text_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_text, buffer, &text_writer, &serialization_context);
  params->text.Set(
      text_writer.is_null() ? nullptr : text_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->text.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null text in ShareService.Share request");
  typename decltype(params->url)::BaseType::BufferWriter
      url_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_url, buffer, &url_writer, &serialization_context);
  params->url.Set(
      url_writer.is_null() ? nullptr : url_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null url in ShareService.Share request");
  typename decltype(params->files)::BaseType::BufferWriter
      files_writer;
  const mojo::internal::ContainerValidateParams files_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::blink::mojom::SharedFileDataView>>(
      in_files, buffer, &files_writer, &files_validate_params,
      &serialization_context);
  params->files.Set(
      files_writer.is_null() ? nullptr : files_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->files.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null files in ShareService.Share request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ShareService::Name_);
  message.set_method_name("Share");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ShareService_Share_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class ShareService_Share_ProxyToResponder {
 public:
  static ShareService::ShareCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<ShareService_Share_ProxyToResponder> proxy(
        new ShareService_Share_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&ShareService_Share_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~ShareService_Share_ProxyToResponder() {
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
  ShareService_Share_ProxyToResponder(
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
        << "ShareService::ShareCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      ShareError in_error);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(ShareService_Share_ProxyToResponder);
};

bool ShareService_Share_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::ShareService::ShareCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::ShareService_Share_ResponseParams_Data* params =
      reinterpret_cast<
          internal::ShareService_Share_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ShareError p_error{};
  ShareService_Share_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadError(&p_error))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        ShareService::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_error));
  return true;
}

void ShareService_Share_ProxyToResponder::Run(
    ShareError in_error) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kShareService_Share_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ShareService_Share_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::ShareError>(
      in_error, &params->error);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::ShareService::ShareCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ShareService::Name_);
  message.set_method_name("Share");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool ShareServiceStubDispatch::Accept(
    ShareService* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kShareService_Share_Name: {
      break;
    }
  }
  return false;
}

// static
bool ShareServiceStubDispatch::AcceptWithResponder(
    ShareService* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kShareService_Share_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ShareService::Share",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::ShareService_Share_Params_Data* params =
          reinterpret_cast<
              internal::ShareService_Share_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_title{};
      std::string p_text{};
      GURL p_url{};
      std::vector<SharedFilePtr> p_files{};
      ShareService_Share_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadTitle(&p_title))
        success = false;
      if (!input_data_view.ReadText(&p_text))
        success = false;
      if (!input_data_view.ReadUrl(&p_url))
        success = false;
      if (!input_data_view.ReadFiles(&p_files))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ShareService::Name_, 0, false);
        return false;
      }
      ShareService::ShareCallback callback =
          ShareService_Share_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Share(
std::move(p_title), 
std::move(p_text), 
std::move(p_url), 
std::move(p_files), std::move(callback));
      return true;
    }
  }
  return false;
}

bool ShareServiceRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ShareService RequestValidator");

  switch (message->header()->name) {
    case internal::kShareService_Share_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ShareService_Share_Params_Data>(
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

bool ShareServiceResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ShareService ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kShareService_Share_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ShareService_Share_ResponseParams_Data>(
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


// static
bool StructTraits<::blink::mojom::SharedFile::DataView, ::blink::mojom::SharedFilePtr>::Read(
    ::blink::mojom::SharedFile::DataView input,
    ::blink::mojom::SharedFilePtr* output) {
  bool success = true;
  ::blink::mojom::SharedFilePtr result(::blink::mojom::SharedFile::New());
  
      if (!input.ReadName(&result->name))
        success = false;
      if (!input.ReadBlob(&result->blob))
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