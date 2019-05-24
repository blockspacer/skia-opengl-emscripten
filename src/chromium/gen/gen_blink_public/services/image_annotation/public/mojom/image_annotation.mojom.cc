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

#include "services/image_annotation/public/mojom/image_annotation.mojom.h"

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

#include "services/image_annotation/public/mojom/image_annotation.mojom-params-data.h"
#include "services/image_annotation/public/mojom/image_annotation.mojom-shared-message-ids.h"

#include "services/image_annotation/public/mojom/image_annotation.mojom-import-headers.h"


#ifndef SERVICES_IMAGE_ANNOTATION_PUBLIC_MOJOM_IMAGE_ANNOTATION_MOJOM_JUMBO_H_
#define SERVICES_IMAGE_ANNOTATION_PUBLIC_MOJOM_IMAGE_ANNOTATION_MOJOM_JUMBO_H_
#endif
namespace image_annotation {
namespace mojom {
Annotation::Annotation()
    : type(),
      score(),
      text() {}

Annotation::Annotation(
    AnnotationType type_in,
    double score_in,
    const std::string& text_in)
    : type(std::move(type_in)),
      score(std::move(score_in)),
      text(std::move(text_in)) {}

Annotation::~Annotation() = default;
size_t Annotation::Hash(size_t seed) const {
  seed = mojo::internal::Hash(seed, this->type);
  seed = mojo::internal::Hash(seed, this->score);
  seed = mojo::internal::Hash(seed, this->text);
  return seed;
}

bool Annotation::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
AnnotateImageResult::AnnotateImageResult() : tag_(Tag::ERROR_CODE) {
  data_.error_code = AnnotateImageError();
}

AnnotateImageResult::~AnnotateImageResult() {
  DestroyActive();
}


void AnnotateImageResult::set_error_code(
    AnnotateImageError error_code) {
  if (tag_ != Tag::ERROR_CODE) {
    DestroyActive();
    tag_ = Tag::ERROR_CODE;
  }
  data_.error_code = error_code;
}
void AnnotateImageResult::set_annotations(
    std::vector<AnnotationPtr> annotations) {
  if (tag_ == Tag::ANNOTATIONS) {
    *(data_.annotations) = std::move(annotations);
  } else {
    DestroyActive();
    tag_ = Tag::ANNOTATIONS;
    data_.annotations = new std::vector<AnnotationPtr>(
        std::move(annotations));
  }
}

void AnnotateImageResult::DestroyActive() {
  switch (tag_) {

    case Tag::ERROR_CODE:

      break;
    case Tag::ANNOTATIONS:

      delete data_.annotations;
      break;
  }
}

bool AnnotateImageResult::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context, false);
}
const char ImageProcessor::Name_[] = "image_annotation.mojom.ImageProcessor";

class ImageProcessor_GetJpgImageData_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ImageProcessor_GetJpgImageData_ForwardToCallback(
      ImageProcessor::GetJpgImageDataCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ImageProcessor::GetJpgImageDataCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(ImageProcessor_GetJpgImageData_ForwardToCallback);
};

ImageProcessorProxy::ImageProcessorProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void ImageProcessorProxy::GetJpgImageData(
    GetJpgImageDataCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ImageProcessor::GetJpgImageData");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kImageProcessor_GetJpgImageData_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::image_annotation::mojom::internal::ImageProcessor_GetJpgImageData_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ImageProcessor::Name_);
  message.set_method_name("GetJpgImageData");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ImageProcessor_GetJpgImageData_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class ImageProcessor_GetJpgImageData_ProxyToResponder {
 public:
  static ImageProcessor::GetJpgImageDataCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<ImageProcessor_GetJpgImageData_ProxyToResponder> proxy(
        new ImageProcessor_GetJpgImageData_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&ImageProcessor_GetJpgImageData_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~ImageProcessor_GetJpgImageData_ProxyToResponder() {
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
  ImageProcessor_GetJpgImageData_ProxyToResponder(
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
        << "ImageProcessor::GetJpgImageDataCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      const std::vector<uint8_t>& in_bytes, int32_t in_width, int32_t in_height);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(ImageProcessor_GetJpgImageData_ProxyToResponder);
};

bool ImageProcessor_GetJpgImageData_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::ImageProcessor::GetJpgImageDataCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::ImageProcessor_GetJpgImageData_ResponseParams_Data* params =
      reinterpret_cast<
          internal::ImageProcessor_GetJpgImageData_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  std::vector<uint8_t> p_bytes{};
  int32_t p_width{};
  int32_t p_height{};
  ImageProcessor_GetJpgImageData_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadBytes(&p_bytes))
    success = false;
  p_width = input_data_view.width();
  p_height = input_data_view.height();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        ImageProcessor::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_bytes), 
std::move(p_width), 
std::move(p_height));
  return true;
}

void ImageProcessor_GetJpgImageData_ProxyToResponder::Run(
    const std::vector<uint8_t>& in_bytes, int32_t in_width, int32_t in_height) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kImageProcessor_GetJpgImageData_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::image_annotation::mojom::internal::ImageProcessor_GetJpgImageData_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->bytes)::BaseType::BufferWriter
      bytes_writer;
  const mojo::internal::ContainerValidateParams bytes_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      in_bytes, buffer, &bytes_writer, &bytes_validate_params,
      &serialization_context);
  params->bytes.Set(
      bytes_writer.is_null() ? nullptr : bytes_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->bytes.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null bytes in ");
  params->width = in_width;
  params->height = in_height;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::ImageProcessor::GetJpgImageDataCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ImageProcessor::Name_);
  message.set_method_name("GetJpgImageData");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool ImageProcessorStubDispatch::Accept(
    ImageProcessor* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kImageProcessor_GetJpgImageData_Name: {
      break;
    }
  }
  return false;
}

// static
bool ImageProcessorStubDispatch::AcceptWithResponder(
    ImageProcessor* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kImageProcessor_GetJpgImageData_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ImageProcessor::GetJpgImageData",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::ImageProcessor_GetJpgImageData_Params_Data* params =
          reinterpret_cast<
              internal::ImageProcessor_GetJpgImageData_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ImageProcessor_GetJpgImageData_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ImageProcessor::Name_, 0, false);
        return false;
      }
      ImageProcessor::GetJpgImageDataCallback callback =
          ImageProcessor_GetJpgImageData_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GetJpgImageData(std::move(callback));
      return true;
    }
  }
  return false;
}

bool ImageProcessorRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ImageProcessor RequestValidator");

  switch (message->header()->name) {
    case internal::kImageProcessor_GetJpgImageData_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ImageProcessor_GetJpgImageData_Params_Data>(
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

bool ImageProcessorResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ImageProcessor ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kImageProcessor_GetJpgImageData_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ImageProcessor_GetJpgImageData_ResponseParams_Data>(
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
const char Annotator::Name_[] = "image_annotation.mojom.Annotator";

class Annotator_AnnotateImage_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Annotator_AnnotateImage_ForwardToCallback(
      Annotator::AnnotateImageCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Annotator::AnnotateImageCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(Annotator_AnnotateImage_ForwardToCallback);
};

AnnotatorProxy::AnnotatorProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void AnnotatorProxy::AnnotateImage(
    const std::string& in_source_id, const std::string& in_description_language_tag, ImageProcessorPtr in_image_processor, AnnotateImageCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::Annotator::AnnotateImage");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAnnotator_AnnotateImage_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::image_annotation::mojom::internal::Annotator_AnnotateImage_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->source_id)::BaseType::BufferWriter
      source_id_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_source_id, buffer, &source_id_writer, &serialization_context);
  params->source_id.Set(
      source_id_writer.is_null() ? nullptr : source_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->source_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null source_id in Annotator.AnnotateImage request");
  typename decltype(params->description_language_tag)::BaseType::BufferWriter
      description_language_tag_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_description_language_tag, buffer, &description_language_tag_writer, &serialization_context);
  params->description_language_tag.Set(
      description_language_tag_writer.is_null() ? nullptr : description_language_tag_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->description_language_tag.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null description_language_tag in Annotator.AnnotateImage request");
  mojo::internal::Serialize<::image_annotation::mojom::ImageProcessorPtrDataView>(
      in_image_processor, &params->image_processor, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->image_processor),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid image_processor in Annotator.AnnotateImage request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Annotator::Name_);
  message.set_method_name("AnnotateImage");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new Annotator_AnnotateImage_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class Annotator_AnnotateImage_ProxyToResponder {
 public:
  static Annotator::AnnotateImageCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<Annotator_AnnotateImage_ProxyToResponder> proxy(
        new Annotator_AnnotateImage_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&Annotator_AnnotateImage_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~Annotator_AnnotateImage_ProxyToResponder() {
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
  Annotator_AnnotateImage_ProxyToResponder(
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
        << "Annotator::AnnotateImageCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      AnnotateImageResultPtr in_result);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(Annotator_AnnotateImage_ProxyToResponder);
};

bool Annotator_AnnotateImage_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::Annotator::AnnotateImageCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::Annotator_AnnotateImage_ResponseParams_Data* params =
      reinterpret_cast<
          internal::Annotator_AnnotateImage_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  AnnotateImageResultPtr p_result{};
  Annotator_AnnotateImage_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadResult(&p_result))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        Annotator::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result));
  return true;
}

void Annotator_AnnotateImage_ProxyToResponder::Run(
    AnnotateImageResultPtr in_result) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAnnotator_AnnotateImage_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::image_annotation::mojom::internal::Annotator_AnnotateImage_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->result)::BufferWriter result_writer;
  result_writer.AllocateInline(buffer, &params->result);
  mojo::internal::Serialize<::image_annotation::mojom::AnnotateImageResultDataView>(
      in_result, buffer, &result_writer, true, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->result.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null result in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::Annotator::AnnotateImageCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Annotator::Name_);
  message.set_method_name("AnnotateImage");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool AnnotatorStubDispatch::Accept(
    Annotator* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kAnnotator_AnnotateImage_Name: {
      break;
    }
  }
  return false;
}

// static
bool AnnotatorStubDispatch::AcceptWithResponder(
    Annotator* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kAnnotator_AnnotateImage_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::Annotator::AnnotateImage",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::Annotator_AnnotateImage_Params_Data* params =
          reinterpret_cast<
              internal::Annotator_AnnotateImage_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_source_id{};
      std::string p_description_language_tag{};
      ImageProcessorPtr p_image_processor{};
      Annotator_AnnotateImage_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadSourceId(&p_source_id))
        success = false;
      if (!input_data_view.ReadDescriptionLanguageTag(&p_description_language_tag))
        success = false;
      p_image_processor =
          input_data_view.TakeImageProcessor<decltype(p_image_processor)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            Annotator::Name_, 0, false);
        return false;
      }
      Annotator::AnnotateImageCallback callback =
          Annotator_AnnotateImage_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->AnnotateImage(
std::move(p_source_id), 
std::move(p_description_language_tag), 
std::move(p_image_processor), std::move(callback));
      return true;
    }
  }
  return false;
}

bool AnnotatorRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "Annotator RequestValidator");

  switch (message->header()->name) {
    case internal::kAnnotator_AnnotateImage_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Annotator_AnnotateImage_Params_Data>(
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

bool AnnotatorResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "Annotator ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kAnnotator_AnnotateImage_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Annotator_AnnotateImage_ResponseParams_Data>(
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
}  // namespace image_annotation

namespace mojo {


// static
bool StructTraits<::image_annotation::mojom::Annotation::DataView, ::image_annotation::mojom::AnnotationPtr>::Read(
    ::image_annotation::mojom::Annotation::DataView input,
    ::image_annotation::mojom::AnnotationPtr* output) {
  bool success = true;
  ::image_annotation::mojom::AnnotationPtr result(::image_annotation::mojom::Annotation::New());
  
      if (!input.ReadType(&result->type))
        success = false;
      result->score = input.score();
      if (!input.ReadText(&result->text))
        success = false;
  *output = std::move(result);
  return success;
}

// static
bool UnionTraits<::image_annotation::mojom::AnnotateImageResult::DataView, ::image_annotation::mojom::AnnotateImageResultPtr>::Read(
    ::image_annotation::mojom::AnnotateImageResult::DataView input,
    ::image_annotation::mojom::AnnotateImageResultPtr* output) {
  using UnionType = ::image_annotation::mojom::AnnotateImageResult;
  using Tag = UnionType::Tag;

  switch (input.tag()) {
    case Tag::ERROR_CODE: {
      ::image_annotation::mojom::AnnotateImageError result_error_code;
      if (!input.ReadErrorCode(&result_error_code))
        return false;

      *output = UnionType::NewErrorCode(result_error_code);
      break;
    }
    case Tag::ANNOTATIONS: {
      std::vector<::image_annotation::mojom::AnnotationPtr> result_annotations;
      if (!input.ReadAnnotations(&result_annotations))
        return false;

      *output = UnionType::NewAnnotations(
          std::move(result_annotations));
      break;
    }
    default:
      return false;
  }
  return true;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif