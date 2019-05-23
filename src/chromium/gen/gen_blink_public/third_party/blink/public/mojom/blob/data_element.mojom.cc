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

#include "third_party/blink/public/mojom/blob/data_element.mojom.h"

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

#include "third_party/blink/public/mojom/blob/data_element.mojom-params-data.h"
#include "third_party/blink/public/mojom/blob/data_element.mojom-shared-message-ids.h"

#include "third_party/blink/public/mojom/blob/data_element.mojom-import-headers.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLOB_DATA_ELEMENT_MOJOM_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLOB_DATA_ELEMENT_MOJOM_JUMBO_H_
#include "mojo/public/cpp/base/file_mojom_traits.h"
#include "mojo/public/cpp/base/file_path_mojom_traits.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "url/mojom/url_gurl_mojom_traits.h"
#endif
namespace blink {
namespace mojom {
constexpr uint64_t DataElementBytes::kMaximumEmbeddedDataSize;
DataElementBytes::DataElementBytes()
    : length(),
      embedded_data(),
      data() {}

DataElementBytes::DataElementBytes(
    uint64_t length_in,
    const base::Optional<std::vector<uint8_t>>& embedded_data_in,
    BytesProviderPtrInfo data_in)
    : length(std::move(length_in)),
      embedded_data(std::move(embedded_data_in)),
      data(std::move(data_in)) {}

DataElementBytes::~DataElementBytes() = default;

bool DataElementBytes::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
DataElementFile::DataElementFile()
    : path(),
      offset(),
      length(),
      expected_modification_time() {}

DataElementFile::DataElementFile(
    const base::FilePath& path_in,
    uint64_t offset_in,
    uint64_t length_in,
    base::Optional<base::Time> expected_modification_time_in)
    : path(std::move(path_in)),
      offset(std::move(offset_in)),
      length(std::move(length_in)),
      expected_modification_time(std::move(expected_modification_time_in)) {}

DataElementFile::~DataElementFile() = default;

bool DataElementFile::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
DataElementFilesystemURL::DataElementFilesystemURL()
    : url(),
      offset(),
      length(),
      expected_modification_time() {}

DataElementFilesystemURL::DataElementFilesystemURL(
    const GURL& url_in,
    uint64_t offset_in,
    uint64_t length_in,
    base::Optional<base::Time> expected_modification_time_in)
    : url(std::move(url_in)),
      offset(std::move(offset_in)),
      length(std::move(length_in)),
      expected_modification_time(std::move(expected_modification_time_in)) {}

DataElementFilesystemURL::~DataElementFilesystemURL() = default;

bool DataElementFilesystemURL::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
DataElementBlob::DataElementBlob()
    : blob(),
      offset(),
      length() {}

DataElementBlob::DataElementBlob(
    ::blink::mojom::BlobPtrInfo blob_in,
    uint64_t offset_in,
    uint64_t length_in)
    : blob(std::move(blob_in)),
      offset(std::move(offset_in)),
      length(std::move(length_in)) {}

DataElementBlob::~DataElementBlob() = default;

bool DataElementBlob::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
DataElement::DataElement() : tag_(Tag::BYTES) {
  data_.bytes = new DataElementBytesPtr;
}

DataElement::~DataElement() {
  DestroyActive();
}


void DataElement::set_bytes(
    DataElementBytesPtr bytes) {
  if (tag_ == Tag::BYTES) {
    *(data_.bytes) = std::move(bytes);
  } else {
    DestroyActive();
    tag_ = Tag::BYTES;
    data_.bytes = new DataElementBytesPtr(
        std::move(bytes));
  }
}
void DataElement::set_file(
    DataElementFilePtr file) {
  if (tag_ == Tag::FILE) {
    *(data_.file) = std::move(file);
  } else {
    DestroyActive();
    tag_ = Tag::FILE;
    data_.file = new DataElementFilePtr(
        std::move(file));
  }
}
void DataElement::set_file_filesystem(
    DataElementFilesystemURLPtr file_filesystem) {
  if (tag_ == Tag::FILE_FILESYSTEM) {
    *(data_.file_filesystem) = std::move(file_filesystem);
  } else {
    DestroyActive();
    tag_ = Tag::FILE_FILESYSTEM;
    data_.file_filesystem = new DataElementFilesystemURLPtr(
        std::move(file_filesystem));
  }
}
void DataElement::set_blob(
    DataElementBlobPtr blob) {
  if (tag_ == Tag::BLOB) {
    *(data_.blob) = std::move(blob);
  } else {
    DestroyActive();
    tag_ = Tag::BLOB;
    data_.blob = new DataElementBlobPtr(
        std::move(blob));
  }
}

void DataElement::DestroyActive() {
  switch (tag_) {

    case Tag::BYTES:

      delete data_.bytes;
      break;
    case Tag::FILE:

      delete data_.file;
      break;
    case Tag::FILE_FILESYSTEM:

      delete data_.file_filesystem;
      break;
    case Tag::BLOB:

      delete data_.blob;
      break;
  }
}

bool DataElement::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context, false);
}
const char BytesProvider::Name_[] = "blink.mojom.BytesProvider";

class BytesProvider_RequestAsReply_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  BytesProvider_RequestAsReply_ForwardToCallback(
      BytesProvider::RequestAsReplyCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  BytesProvider::RequestAsReplyCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(BytesProvider_RequestAsReply_ForwardToCallback);
};

class BytesProvider_RequestAsFile_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  BytesProvider_RequestAsFile_ForwardToCallback(
      BytesProvider::RequestAsFileCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  BytesProvider::RequestAsFileCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(BytesProvider_RequestAsFile_ForwardToCallback);
};

BytesProviderProxy::BytesProviderProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void BytesProviderProxy::RequestAsReply(
    RequestAsReplyCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::BytesProvider::RequestAsReply");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kBytesProvider_RequestAsReply_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::BytesProvider_RequestAsReply_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(BytesProvider::Name_);
  message.set_method_name("RequestAsReply");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new BytesProvider_RequestAsReply_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void BytesProviderProxy::RequestAsStream(
    mojo::ScopedDataPipeProducerHandle in_pipe) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::BytesProvider::RequestAsStream");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kBytesProvider_RequestAsStream_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::BytesProvider_RequestAsStream_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<mojo::ScopedDataPipeProducerHandle>(
      in_pipe, &params->pipe, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->pipe),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid pipe in BytesProvider.RequestAsStream request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(BytesProvider::Name_);
  message.set_method_name("RequestAsStream");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void BytesProviderProxy::RequestAsFile(
    uint64_t in_source_offset, uint64_t in_source_size, base::File in_file, uint64_t in_file_offset, RequestAsFileCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::BytesProvider::RequestAsFile");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kBytesProvider_RequestAsFile_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::BytesProvider_RequestAsFile_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->source_offset = in_source_offset;
  params->source_size = in_source_size;
  typename decltype(params->file)::BaseType::BufferWriter
      file_writer;
  mojo::internal::Serialize<::mojo_base::mojom::FileDataView>(
      in_file, buffer, &file_writer, &serialization_context);
  params->file.Set(
      file_writer.is_null() ? nullptr : file_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->file.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null file in BytesProvider.RequestAsFile request");
  params->file_offset = in_file_offset;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(BytesProvider::Name_);
  message.set_method_name("RequestAsFile");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new BytesProvider_RequestAsFile_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class BytesProvider_RequestAsReply_ProxyToResponder {
 public:
  static BytesProvider::RequestAsReplyCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<BytesProvider_RequestAsReply_ProxyToResponder> proxy(
        new BytesProvider_RequestAsReply_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&BytesProvider_RequestAsReply_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~BytesProvider_RequestAsReply_ProxyToResponder() {
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
  BytesProvider_RequestAsReply_ProxyToResponder(
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
        << "BytesProvider::RequestAsReplyCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      const std::vector<uint8_t>& in_data);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(BytesProvider_RequestAsReply_ProxyToResponder);
};

bool BytesProvider_RequestAsReply_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::BytesProvider::RequestAsReplyCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::BytesProvider_RequestAsReply_ResponseParams_Data* params =
      reinterpret_cast<
          internal::BytesProvider_RequestAsReply_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  std::vector<uint8_t> p_data{};
  BytesProvider_RequestAsReply_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadData(&p_data))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        BytesProvider::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_data));
  return true;
}

void BytesProvider_RequestAsReply_ProxyToResponder::Run(
    const std::vector<uint8_t>& in_data) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kBytesProvider_RequestAsReply_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::BytesProvider_RequestAsReply_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->data)::BaseType::BufferWriter
      data_writer;
  const mojo::internal::ContainerValidateParams data_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      in_data, buffer, &data_writer, &data_validate_params,
      &serialization_context);
  params->data.Set(
      data_writer.is_null() ? nullptr : data_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->data.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null data in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::BytesProvider::RequestAsReplyCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(BytesProvider::Name_);
  message.set_method_name("RequestAsReply");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class BytesProvider_RequestAsFile_ProxyToResponder {
 public:
  static BytesProvider::RequestAsFileCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<BytesProvider_RequestAsFile_ProxyToResponder> proxy(
        new BytesProvider_RequestAsFile_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&BytesProvider_RequestAsFile_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~BytesProvider_RequestAsFile_ProxyToResponder() {
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
  BytesProvider_RequestAsFile_ProxyToResponder(
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
        << "BytesProvider::RequestAsFileCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      base::Optional<base::Time> in_time_file_modified);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(BytesProvider_RequestAsFile_ProxyToResponder);
};

bool BytesProvider_RequestAsFile_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::BytesProvider::RequestAsFileCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::BytesProvider_RequestAsFile_ResponseParams_Data* params =
      reinterpret_cast<
          internal::BytesProvider_RequestAsFile_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  base::Optional<base::Time> p_time_file_modified{};
  BytesProvider_RequestAsFile_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadTimeFileModified(&p_time_file_modified))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        BytesProvider::Name_, 2, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_time_file_modified));
  return true;
}

void BytesProvider_RequestAsFile_ProxyToResponder::Run(
    base::Optional<base::Time> in_time_file_modified) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kBytesProvider_RequestAsFile_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::BytesProvider_RequestAsFile_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->time_file_modified)::BaseType::BufferWriter
      time_file_modified_writer;
  mojo::internal::Serialize<::mojo_base::mojom::TimeDataView>(
      in_time_file_modified, buffer, &time_file_modified_writer, &serialization_context);
  params->time_file_modified.Set(
      time_file_modified_writer.is_null() ? nullptr : time_file_modified_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::BytesProvider::RequestAsFileCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(BytesProvider::Name_);
  message.set_method_name("RequestAsFile");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool BytesProviderStubDispatch::Accept(
    BytesProvider* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kBytesProvider_RequestAsReply_Name: {
      break;
    }
    case internal::kBytesProvider_RequestAsStream_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::BytesProvider::RequestAsStream",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::BytesProvider_RequestAsStream_Params_Data* params =
          reinterpret_cast<internal::BytesProvider_RequestAsStream_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      mojo::ScopedDataPipeProducerHandle p_pipe{};
      BytesProvider_RequestAsStream_ParamsDataView input_data_view(params, &serialization_context);
      
      p_pipe = input_data_view.TakePipe();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            BytesProvider::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->RequestAsStream(
std::move(p_pipe));
      return true;
    }
    case internal::kBytesProvider_RequestAsFile_Name: {
      break;
    }
  }
  return false;
}

// static
bool BytesProviderStubDispatch::AcceptWithResponder(
    BytesProvider* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kBytesProvider_RequestAsReply_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::BytesProvider::RequestAsReply",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::BytesProvider_RequestAsReply_Params_Data* params =
          reinterpret_cast<
              internal::BytesProvider_RequestAsReply_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      BytesProvider_RequestAsReply_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            BytesProvider::Name_, 0, false);
        return false;
      }
      BytesProvider::RequestAsReplyCallback callback =
          BytesProvider_RequestAsReply_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->RequestAsReply(std::move(callback));
      return true;
    }
    case internal::kBytesProvider_RequestAsStream_Name: {
      break;
    }
    case internal::kBytesProvider_RequestAsFile_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::BytesProvider::RequestAsFile",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::BytesProvider_RequestAsFile_Params_Data* params =
          reinterpret_cast<
              internal::BytesProvider_RequestAsFile_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint64_t p_source_offset{};
      uint64_t p_source_size{};
      base::File p_file{};
      uint64_t p_file_offset{};
      BytesProvider_RequestAsFile_ParamsDataView input_data_view(params, &serialization_context);
      
      p_source_offset = input_data_view.source_offset();
      p_source_size = input_data_view.source_size();
      if (!input_data_view.ReadFile(&p_file))
        success = false;
      p_file_offset = input_data_view.file_offset();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            BytesProvider::Name_, 2, false);
        return false;
      }
      BytesProvider::RequestAsFileCallback callback =
          BytesProvider_RequestAsFile_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->RequestAsFile(
std::move(p_source_offset), 
std::move(p_source_size), 
std::move(p_file), 
std::move(p_file_offset), std::move(callback));
      return true;
    }
  }
  return false;
}

bool BytesProviderRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "BytesProvider RequestValidator");

  switch (message->header()->name) {
    case internal::kBytesProvider_RequestAsReply_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::BytesProvider_RequestAsReply_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kBytesProvider_RequestAsStream_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::BytesProvider_RequestAsStream_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kBytesProvider_RequestAsFile_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::BytesProvider_RequestAsFile_Params_Data>(
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

bool BytesProviderResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "BytesProvider ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kBytesProvider_RequestAsReply_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::BytesProvider_RequestAsReply_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kBytesProvider_RequestAsFile_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::BytesProvider_RequestAsFile_ResponseParams_Data>(
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
bool StructTraits<::blink::mojom::DataElementBytes::DataView, ::blink::mojom::DataElementBytesPtr>::Read(
    ::blink::mojom::DataElementBytes::DataView input,
    ::blink::mojom::DataElementBytesPtr* output) {
  bool success = true;
  ::blink::mojom::DataElementBytesPtr result(::blink::mojom::DataElementBytes::New());
  
      result->length = input.length();
      if (!input.ReadEmbeddedData(&result->embedded_data))
        success = false;
      result->data =
          input.TakeData<decltype(result->data)>();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::blink::mojom::DataElementFile::DataView, ::blink::mojom::DataElementFilePtr>::Read(
    ::blink::mojom::DataElementFile::DataView input,
    ::blink::mojom::DataElementFilePtr* output) {
  bool success = true;
  ::blink::mojom::DataElementFilePtr result(::blink::mojom::DataElementFile::New());
  
      if (!input.ReadPath(&result->path))
        success = false;
      result->offset = input.offset();
      result->length = input.length();
      if (!input.ReadExpectedModificationTime(&result->expected_modification_time))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::blink::mojom::DataElementFilesystemURL::DataView, ::blink::mojom::DataElementFilesystemURLPtr>::Read(
    ::blink::mojom::DataElementFilesystemURL::DataView input,
    ::blink::mojom::DataElementFilesystemURLPtr* output) {
  bool success = true;
  ::blink::mojom::DataElementFilesystemURLPtr result(::blink::mojom::DataElementFilesystemURL::New());
  
      if (!input.ReadUrl(&result->url))
        success = false;
      result->offset = input.offset();
      result->length = input.length();
      if (!input.ReadExpectedModificationTime(&result->expected_modification_time))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::blink::mojom::DataElementBlob::DataView, ::blink::mojom::DataElementBlobPtr>::Read(
    ::blink::mojom::DataElementBlob::DataView input,
    ::blink::mojom::DataElementBlobPtr* output) {
  bool success = true;
  ::blink::mojom::DataElementBlobPtr result(::blink::mojom::DataElementBlob::New());
  
      result->blob =
          input.TakeBlob<decltype(result->blob)>();
      result->offset = input.offset();
      result->length = input.length();
  *output = std::move(result);
  return success;
}

// static
bool UnionTraits<::blink::mojom::DataElement::DataView, ::blink::mojom::DataElementPtr>::Read(
    ::blink::mojom::DataElement::DataView input,
    ::blink::mojom::DataElementPtr* output) {
  using UnionType = ::blink::mojom::DataElement;
  using Tag = UnionType::Tag;

  switch (input.tag()) {
    case Tag::BYTES: {
      ::blink::mojom::DataElementBytesPtr result_bytes;
      if (!input.ReadBytes(&result_bytes))
        return false;

      *output = UnionType::NewBytes(
          std::move(result_bytes));
      break;
    }
    case Tag::FILE: {
      ::blink::mojom::DataElementFilePtr result_file;
      if (!input.ReadFile(&result_file))
        return false;

      *output = UnionType::NewFile(
          std::move(result_file));
      break;
    }
    case Tag::FILE_FILESYSTEM: {
      ::blink::mojom::DataElementFilesystemURLPtr result_file_filesystem;
      if (!input.ReadFileFilesystem(&result_file_filesystem))
        return false;

      *output = UnionType::NewFileFilesystem(
          std::move(result_file_filesystem));
      break;
    }
    case Tag::BLOB: {
      ::blink::mojom::DataElementBlobPtr result_blob;
      if (!input.ReadBlob(&result_blob))
        return false;

      *output = UnionType::NewBlob(
          std::move(result_blob));
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