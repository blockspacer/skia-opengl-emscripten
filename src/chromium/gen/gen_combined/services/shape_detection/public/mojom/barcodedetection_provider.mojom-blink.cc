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

#include "services/shape_detection/public/mojom/barcodedetection_provider.mojom-blink.h"

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

#include "services/shape_detection/public/mojom/barcodedetection_provider.mojom-params-data.h"
#include "services/shape_detection/public/mojom/barcodedetection_provider.mojom-shared-message-ids.h"

#include "services/shape_detection/public/mojom/barcodedetection_provider.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef SERVICES_SHAPE_DETECTION_PUBLIC_MOJOM_BARCODEDETECTION_PROVIDER_MOJOM_BLINK_JUMBO_H_
#define SERVICES_SHAPE_DETECTION_PUBLIC_MOJOM_BARCODEDETECTION_PROVIDER_MOJOM_BLINK_JUMBO_H_
#endif
namespace shape_detection {
namespace mojom {
namespace blink {
BarcodeDetectorOptions::BarcodeDetectorOptions()
    : formats() {}

BarcodeDetectorOptions::BarcodeDetectorOptions(
    const WTF::Vector<::shape_detection::mojom::blink::BarcodeFormat>& formats_in)
    : formats(std::move(formats_in)) {}

BarcodeDetectorOptions::~BarcodeDetectorOptions() = default;

bool BarcodeDetectorOptions::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char BarcodeDetectionProvider::Name_[] = "shape_detection.mojom.BarcodeDetectionProvider";

class BarcodeDetectionProvider_EnumerateSupportedFormats_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  BarcodeDetectionProvider_EnumerateSupportedFormats_ForwardToCallback(
      BarcodeDetectionProvider::EnumerateSupportedFormatsCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  BarcodeDetectionProvider::EnumerateSupportedFormatsCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(BarcodeDetectionProvider_EnumerateSupportedFormats_ForwardToCallback);
};

BarcodeDetectionProviderProxy::BarcodeDetectionProviderProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void BarcodeDetectionProviderProxy::CreateBarcodeDetection(
    ::shape_detection::mojom::blink::BarcodeDetectionRequest in_request, BarcodeDetectorOptionsPtr in_options) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::BarcodeDetectionProvider::CreateBarcodeDetection");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kBarcodeDetectionProvider_CreateBarcodeDetection_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::shape_detection::mojom::internal::BarcodeDetectionProvider_CreateBarcodeDetection_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::shape_detection::mojom::BarcodeDetectionRequestDataView>(
      in_request, &params->request, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->request),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid request in BarcodeDetectionProvider.CreateBarcodeDetection request");
  typename decltype(params->options)::BaseType::BufferWriter
      options_writer;
  mojo::internal::Serialize<::shape_detection::mojom::BarcodeDetectorOptionsDataView>(
      in_options, buffer, &options_writer, &serialization_context);
  params->options.Set(
      options_writer.is_null() ? nullptr : options_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->options.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null options in BarcodeDetectionProvider.CreateBarcodeDetection request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(BarcodeDetectionProvider::Name_);
  message.set_method_name("CreateBarcodeDetection");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void BarcodeDetectionProviderProxy::EnumerateSupportedFormats(
    EnumerateSupportedFormatsCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::BarcodeDetectionProvider::EnumerateSupportedFormats");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kBarcodeDetectionProvider_EnumerateSupportedFormats_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::shape_detection::mojom::internal::BarcodeDetectionProvider_EnumerateSupportedFormats_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(BarcodeDetectionProvider::Name_);
  message.set_method_name("EnumerateSupportedFormats");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new BarcodeDetectionProvider_EnumerateSupportedFormats_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class BarcodeDetectionProvider_EnumerateSupportedFormats_ProxyToResponder {
 public:
  static BarcodeDetectionProvider::EnumerateSupportedFormatsCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<BarcodeDetectionProvider_EnumerateSupportedFormats_ProxyToResponder> proxy(
        new BarcodeDetectionProvider_EnumerateSupportedFormats_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&BarcodeDetectionProvider_EnumerateSupportedFormats_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~BarcodeDetectionProvider_EnumerateSupportedFormats_ProxyToResponder() {
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
  BarcodeDetectionProvider_EnumerateSupportedFormats_ProxyToResponder(
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
        << "BarcodeDetectionProvider::EnumerateSupportedFormatsCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      const WTF::Vector<::shape_detection::mojom::blink::BarcodeFormat>& in_supported_formats);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(BarcodeDetectionProvider_EnumerateSupportedFormats_ProxyToResponder);
};

bool BarcodeDetectionProvider_EnumerateSupportedFormats_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::BarcodeDetectionProvider::EnumerateSupportedFormatsCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::BarcodeDetectionProvider_EnumerateSupportedFormats_ResponseParams_Data* params =
      reinterpret_cast<
          internal::BarcodeDetectionProvider_EnumerateSupportedFormats_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  WTF::Vector<::shape_detection::mojom::blink::BarcodeFormat> p_supported_formats{};
  BarcodeDetectionProvider_EnumerateSupportedFormats_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadSupportedFormats(&p_supported_formats))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        BarcodeDetectionProvider::Name_, 1, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_supported_formats));
  return true;
}

void BarcodeDetectionProvider_EnumerateSupportedFormats_ProxyToResponder::Run(
    const WTF::Vector<::shape_detection::mojom::blink::BarcodeFormat>& in_supported_formats) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kBarcodeDetectionProvider_EnumerateSupportedFormats_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::shape_detection::mojom::internal::BarcodeDetectionProvider_EnumerateSupportedFormats_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->supported_formats)::BaseType::BufferWriter
      supported_formats_writer;
  const mojo::internal::ContainerValidateParams supported_formats_validate_params(
      0, ::shape_detection::mojom::internal::BarcodeFormat_Data::Validate);
  mojo::internal::Serialize<mojo::ArrayDataView<::shape_detection::mojom::BarcodeFormat>>(
      in_supported_formats, buffer, &supported_formats_writer, &supported_formats_validate_params,
      &serialization_context);
  params->supported_formats.Set(
      supported_formats_writer.is_null() ? nullptr : supported_formats_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->supported_formats.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null supported_formats in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::BarcodeDetectionProvider::EnumerateSupportedFormatsCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(BarcodeDetectionProvider::Name_);
  message.set_method_name("EnumerateSupportedFormats");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool BarcodeDetectionProviderStubDispatch::Accept(
    BarcodeDetectionProvider* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kBarcodeDetectionProvider_CreateBarcodeDetection_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::BarcodeDetectionProvider::CreateBarcodeDetection",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::BarcodeDetectionProvider_CreateBarcodeDetection_Params_Data* params =
          reinterpret_cast<internal::BarcodeDetectionProvider_CreateBarcodeDetection_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::shape_detection::mojom::blink::BarcodeDetectionRequest p_request{};
      BarcodeDetectorOptionsPtr p_options{};
      BarcodeDetectionProvider_CreateBarcodeDetection_ParamsDataView input_data_view(params, &serialization_context);
      
      p_request =
          input_data_view.TakeRequest<decltype(p_request)>();
      if (!input_data_view.ReadOptions(&p_options))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            BarcodeDetectionProvider::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->CreateBarcodeDetection(
std::move(p_request), 
std::move(p_options));
      return true;
    }
    case internal::kBarcodeDetectionProvider_EnumerateSupportedFormats_Name: {
      break;
    }
  }
  return false;
}

// static
bool BarcodeDetectionProviderStubDispatch::AcceptWithResponder(
    BarcodeDetectionProvider* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kBarcodeDetectionProvider_CreateBarcodeDetection_Name: {
      break;
    }
    case internal::kBarcodeDetectionProvider_EnumerateSupportedFormats_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::BarcodeDetectionProvider::EnumerateSupportedFormats",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::BarcodeDetectionProvider_EnumerateSupportedFormats_Params_Data* params =
          reinterpret_cast<
              internal::BarcodeDetectionProvider_EnumerateSupportedFormats_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      BarcodeDetectionProvider_EnumerateSupportedFormats_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            BarcodeDetectionProvider::Name_, 1, false);
        return false;
      }
      BarcodeDetectionProvider::EnumerateSupportedFormatsCallback callback =
          BarcodeDetectionProvider_EnumerateSupportedFormats_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->EnumerateSupportedFormats(std::move(callback));
      return true;
    }
  }
  return false;
}

bool BarcodeDetectionProviderRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "BarcodeDetectionProvider RequestValidator");

  switch (message->header()->name) {
    case internal::kBarcodeDetectionProvider_CreateBarcodeDetection_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::BarcodeDetectionProvider_CreateBarcodeDetection_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kBarcodeDetectionProvider_EnumerateSupportedFormats_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::BarcodeDetectionProvider_EnumerateSupportedFormats_Params_Data>(
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

bool BarcodeDetectionProviderResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "BarcodeDetectionProvider ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kBarcodeDetectionProvider_EnumerateSupportedFormats_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::BarcodeDetectionProvider_EnumerateSupportedFormats_ResponseParams_Data>(
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
}  // namespace shape_detection

namespace mojo {


// static
bool StructTraits<::shape_detection::mojom::blink::BarcodeDetectorOptions::DataView, ::shape_detection::mojom::blink::BarcodeDetectorOptionsPtr>::Read(
    ::shape_detection::mojom::blink::BarcodeDetectorOptions::DataView input,
    ::shape_detection::mojom::blink::BarcodeDetectorOptionsPtr* output) {
  bool success = true;
  ::shape_detection::mojom::blink::BarcodeDetectorOptionsPtr result(::shape_detection::mojom::blink::BarcodeDetectorOptions::New());
  
      if (!input.ReadFormats(&result->formats))
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