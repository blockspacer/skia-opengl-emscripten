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

#include "third_party/blink/public/mojom/filesystem/file_system.mojom.h"

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

#include "third_party/blink/public/mojom/filesystem/file_system.mojom-params-data.h"
#include "third_party/blink/public/mojom/filesystem/file_system.mojom-shared-message-ids.h"

#include "third_party/blink/public/mojom/filesystem/file_system.mojom-import-headers.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_FILESYSTEM_FILE_SYSTEM_MOJOM_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_FILESYSTEM_FILE_SYSTEM_MOJOM_JUMBO_H_
#include "mojo/public/cpp/base/file_error_mojom_traits.h"
#include "mojo/public/cpp/base/file_info_mojom_traits.h"
#include "mojo/public/cpp/base/file_path_mojom_traits.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "mojo/public/cpp/base/unguessable_token_mojom_traits.h"
#include "url/mojom/origin_mojom_traits.h"
#include "url/mojom/url_gurl_mojom_traits.h"
#endif
namespace blink {
namespace mojom {
FileSystemInfo::FileSystemInfo()
    : name(),
      root_url(),
      mount_type(FileSystemType::kTemporary) {}

FileSystemInfo::FileSystemInfo(
    const std::string& name_in,
    const GURL& root_url_in,
    FileSystemType mount_type_in)
    : name(std::move(name_in)),
      root_url(std::move(root_url_in)),
      mount_type(std::move(mount_type_in)) {}

FileSystemInfo::~FileSystemInfo() = default;

bool FileSystemInfo::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char FileSystemCancellableOperation::Name_[] = "blink.mojom.FileSystemCancellableOperation";

class FileSystemCancellableOperation_Cancel_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  FileSystemCancellableOperation_Cancel_ForwardToCallback(
      FileSystemCancellableOperation::CancelCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  FileSystemCancellableOperation::CancelCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(FileSystemCancellableOperation_Cancel_ForwardToCallback);
};

FileSystemCancellableOperationProxy::FileSystemCancellableOperationProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void FileSystemCancellableOperationProxy::Cancel(
    CancelCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::FileSystemCancellableOperation::Cancel");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFileSystemCancellableOperation_Cancel_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::FileSystemCancellableOperation_Cancel_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(FileSystemCancellableOperation::Name_);
  message.set_method_name("Cancel");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new FileSystemCancellableOperation_Cancel_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class FileSystemCancellableOperation_Cancel_ProxyToResponder {
 public:
  static FileSystemCancellableOperation::CancelCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<FileSystemCancellableOperation_Cancel_ProxyToResponder> proxy(
        new FileSystemCancellableOperation_Cancel_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&FileSystemCancellableOperation_Cancel_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~FileSystemCancellableOperation_Cancel_ProxyToResponder() {
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
  FileSystemCancellableOperation_Cancel_ProxyToResponder(
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
        << "FileSystemCancellableOperation::CancelCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      ::base::File::Error in_error_code);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(FileSystemCancellableOperation_Cancel_ProxyToResponder);
};

bool FileSystemCancellableOperation_Cancel_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::FileSystemCancellableOperation::CancelCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::FileSystemCancellableOperation_Cancel_ResponseParams_Data* params =
      reinterpret_cast<
          internal::FileSystemCancellableOperation_Cancel_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::base::File::Error p_error_code{};
  FileSystemCancellableOperation_Cancel_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadErrorCode(&p_error_code))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        FileSystemCancellableOperation::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_error_code));
  return true;
}

void FileSystemCancellableOperation_Cancel_ProxyToResponder::Run(
    ::base::File::Error in_error_code) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFileSystemCancellableOperation_Cancel_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::FileSystemCancellableOperation_Cancel_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::mojo_base::mojom::FileError>(
      in_error_code, &params->error_code);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::FileSystemCancellableOperation::CancelCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(FileSystemCancellableOperation::Name_);
  message.set_method_name("Cancel");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool FileSystemCancellableOperationStubDispatch::Accept(
    FileSystemCancellableOperation* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kFileSystemCancellableOperation_Cancel_Name: {
      break;
    }
  }
  return false;
}

// static
bool FileSystemCancellableOperationStubDispatch::AcceptWithResponder(
    FileSystemCancellableOperation* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kFileSystemCancellableOperation_Cancel_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::FileSystemCancellableOperation::Cancel",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::FileSystemCancellableOperation_Cancel_Params_Data* params =
          reinterpret_cast<
              internal::FileSystemCancellableOperation_Cancel_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      FileSystemCancellableOperation_Cancel_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            FileSystemCancellableOperation::Name_, 0, false);
        return false;
      }
      FileSystemCancellableOperation::CancelCallback callback =
          FileSystemCancellableOperation_Cancel_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Cancel(std::move(callback));
      return true;
    }
  }
  return false;
}

bool FileSystemCancellableOperationRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "FileSystemCancellableOperation RequestValidator");

  switch (message->header()->name) {
    case internal::kFileSystemCancellableOperation_Cancel_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FileSystemCancellableOperation_Cancel_Params_Data>(
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

bool FileSystemCancellableOperationResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "FileSystemCancellableOperation ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kFileSystemCancellableOperation_Cancel_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::FileSystemCancellableOperation_Cancel_ResponseParams_Data>(
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
const char FileSystemOperationListener::Name_[] = "blink.mojom.FileSystemOperationListener";

FileSystemOperationListenerProxy::FileSystemOperationListenerProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void FileSystemOperationListenerProxy::ResultsRetrieved(
    std::vector<::filesystem::mojom::DirectoryEntryPtr> in_entries, bool in_has_more) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::FileSystemOperationListener::ResultsRetrieved");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFileSystemOperationListener_ResultsRetrieved_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::FileSystemOperationListener_ResultsRetrieved_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->entries)::BaseType::BufferWriter
      entries_writer;
  const mojo::internal::ContainerValidateParams entries_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::filesystem::mojom::DirectoryEntryDataView>>(
      in_entries, buffer, &entries_writer, &entries_validate_params,
      &serialization_context);
  params->entries.Set(
      entries_writer.is_null() ? nullptr : entries_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->entries.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null entries in FileSystemOperationListener.ResultsRetrieved request");
  params->has_more = in_has_more;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(FileSystemOperationListener::Name_);
  message.set_method_name("ResultsRetrieved");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void FileSystemOperationListenerProxy::DidWrite(
    int64_t in_byte_count, bool in_complete) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::FileSystemOperationListener::DidWrite");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFileSystemOperationListener_DidWrite_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::FileSystemOperationListener_DidWrite_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->byte_count = in_byte_count;
  params->complete = in_complete;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(FileSystemOperationListener::Name_);
  message.set_method_name("DidWrite");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void FileSystemOperationListenerProxy::ErrorOccurred(
    ::base::File::Error in_error_code) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::FileSystemOperationListener::ErrorOccurred");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFileSystemOperationListener_ErrorOccurred_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::FileSystemOperationListener_ErrorOccurred_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::mojo_base::mojom::FileError>(
      in_error_code, &params->error_code);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(FileSystemOperationListener::Name_);
  message.set_method_name("ErrorOccurred");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool FileSystemOperationListenerStubDispatch::Accept(
    FileSystemOperationListener* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kFileSystemOperationListener_ResultsRetrieved_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::FileSystemOperationListener::ResultsRetrieved",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::FileSystemOperationListener_ResultsRetrieved_Params_Data* params =
          reinterpret_cast<internal::FileSystemOperationListener_ResultsRetrieved_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::vector<::filesystem::mojom::DirectoryEntryPtr> p_entries{};
      bool p_has_more{};
      FileSystemOperationListener_ResultsRetrieved_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadEntries(&p_entries))
        success = false;
      p_has_more = input_data_view.has_more();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            FileSystemOperationListener::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->ResultsRetrieved(
std::move(p_entries), 
std::move(p_has_more));
      return true;
    }
    case internal::kFileSystemOperationListener_DidWrite_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::FileSystemOperationListener::DidWrite",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::FileSystemOperationListener_DidWrite_Params_Data* params =
          reinterpret_cast<internal::FileSystemOperationListener_DidWrite_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int64_t p_byte_count{};
      bool p_complete{};
      FileSystemOperationListener_DidWrite_ParamsDataView input_data_view(params, &serialization_context);
      
      p_byte_count = input_data_view.byte_count();
      p_complete = input_data_view.complete();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            FileSystemOperationListener::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->DidWrite(
std::move(p_byte_count), 
std::move(p_complete));
      return true;
    }
    case internal::kFileSystemOperationListener_ErrorOccurred_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::FileSystemOperationListener::ErrorOccurred",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::FileSystemOperationListener_ErrorOccurred_Params_Data* params =
          reinterpret_cast<internal::FileSystemOperationListener_ErrorOccurred_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::base::File::Error p_error_code{};
      FileSystemOperationListener_ErrorOccurred_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadErrorCode(&p_error_code))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            FileSystemOperationListener::Name_, 2, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->ErrorOccurred(
std::move(p_error_code));
      return true;
    }
  }
  return false;
}

// static
bool FileSystemOperationListenerStubDispatch::AcceptWithResponder(
    FileSystemOperationListener* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kFileSystemOperationListener_ResultsRetrieved_Name: {
      break;
    }
    case internal::kFileSystemOperationListener_DidWrite_Name: {
      break;
    }
    case internal::kFileSystemOperationListener_ErrorOccurred_Name: {
      break;
    }
  }
  return false;
}

bool FileSystemOperationListenerRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "FileSystemOperationListener RequestValidator");

  switch (message->header()->name) {
    case internal::kFileSystemOperationListener_ResultsRetrieved_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FileSystemOperationListener_ResultsRetrieved_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFileSystemOperationListener_DidWrite_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FileSystemOperationListener_DidWrite_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFileSystemOperationListener_ErrorOccurred_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FileSystemOperationListener_ErrorOccurred_Params_Data>(
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

const char ReceivedSnapshotListener::Name_[] = "blink.mojom.ReceivedSnapshotListener";

ReceivedSnapshotListenerProxy::ReceivedSnapshotListenerProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void ReceivedSnapshotListenerProxy::DidReceiveSnapshotFile(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ReceivedSnapshotListener::DidReceiveSnapshotFile");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kReceivedSnapshotListener_DidReceiveSnapshotFile_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ReceivedSnapshotListener_DidReceiveSnapshotFile_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ReceivedSnapshotListener::Name_);
  message.set_method_name("DidReceiveSnapshotFile");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool ReceivedSnapshotListenerStubDispatch::Accept(
    ReceivedSnapshotListener* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kReceivedSnapshotListener_DidReceiveSnapshotFile_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ReceivedSnapshotListener::DidReceiveSnapshotFile",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ReceivedSnapshotListener_DidReceiveSnapshotFile_Params_Data* params =
          reinterpret_cast<internal::ReceivedSnapshotListener_DidReceiveSnapshotFile_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ReceivedSnapshotListener_DidReceiveSnapshotFile_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ReceivedSnapshotListener::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->DidReceiveSnapshotFile();
      return true;
    }
  }
  return false;
}

// static
bool ReceivedSnapshotListenerStubDispatch::AcceptWithResponder(
    ReceivedSnapshotListener* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kReceivedSnapshotListener_DidReceiveSnapshotFile_Name: {
      break;
    }
  }
  return false;
}

bool ReceivedSnapshotListenerRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ReceivedSnapshotListener RequestValidator");

  switch (message->header()->name) {
    case internal::kReceivedSnapshotListener_DidReceiveSnapshotFile_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ReceivedSnapshotListener_DidReceiveSnapshotFile_Params_Data>(
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

const char FileSystemManager::Name_[] = "blink.mojom.FileSystemManager";
bool FileSystemManager::Open(const url::Origin& origin, FileSystemType file_system_type, std::string* out_name, GURL* out_root_url, ::base::File::Error* out_error_code) {
  NOTREACHED();
  return false;
}
bool FileSystemManager::ResolveURL(const GURL& filesystem_url, FileSystemInfoPtr* out_info, base::FilePath* out_file_path, bool* out_is_directory, ::base::File::Error* out_error_code) {
  NOTREACHED();
  return false;
}
bool FileSystemManager::Move(const GURL& src_path, const GURL& dest_path, ::base::File::Error* out_error_code) {
  NOTREACHED();
  return false;
}
bool FileSystemManager::Copy(const GURL& src_path, const GURL& dest_path, ::base::File::Error* out_error_code) {
  NOTREACHED();
  return false;
}
bool FileSystemManager::Remove(const GURL& path, bool recursive, ::base::File::Error* out_error_code) {
  NOTREACHED();
  return false;
}
bool FileSystemManager::ReadMetadata(const GURL& path, base::File::Info* out_file_info, ::base::File::Error* out_error_code) {
  NOTREACHED();
  return false;
}
bool FileSystemManager::Create(const GURL& path, bool exclusive, bool is_directory, bool recursive, ::base::File::Error* out_error_code) {
  NOTREACHED();
  return false;
}
bool FileSystemManager::Exists(const GURL& path, bool is_directory, ::base::File::Error* out_error_code) {
  NOTREACHED();
  return false;
}
bool FileSystemManager::ReadDirectorySync(const GURL& path, std::vector<::filesystem::mojom::DirectoryEntryPtr>* out_entries, ::base::File::Error* out_error_code) {
  NOTREACHED();
  return false;
}
bool FileSystemManager::WriteSync(const GURL& file_path, const std::string& blob_uuid, int64_t position, int64_t* out_byte_count, ::base::File::Error* out_error_code) {
  NOTREACHED();
  return false;
}
bool FileSystemManager::TruncateSync(const GURL& file_path, int64_t length, ::base::File::Error* out_error_code) {
  NOTREACHED();
  return false;
}
bool FileSystemManager::CreateSnapshotFile(const GURL& file_path, base::File::Info* out_file_info, base::FilePath* out_platform_path, ::base::File::Error* out_error_code, ReceivedSnapshotListenerPtr* out_snapshot_listener) {
  NOTREACHED();
  return false;
}
bool FileSystemManager::GetPlatformPath(const GURL& file_path, base::FilePath* out_platform_path) {
  NOTREACHED();
  return false;
}
class FileSystemManager_Open_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  FileSystemManager_Open_HandleSyncResponse(
      bool* result, std::string* out_name, GURL* out_root_url, ::base::File::Error* out_error_code)
      : result_(result), out_name_(out_name), out_root_url_(out_root_url), out_error_code_(out_error_code) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;
  std::string* out_name_;
  GURL* out_root_url_;
  ::base::File::Error* out_error_code_;DISALLOW_COPY_AND_ASSIGN(FileSystemManager_Open_HandleSyncResponse);
};

class FileSystemManager_Open_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  FileSystemManager_Open_ForwardToCallback(
      FileSystemManager::OpenCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  FileSystemManager::OpenCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(FileSystemManager_Open_ForwardToCallback);
};
class FileSystemManager_ResolveURL_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  FileSystemManager_ResolveURL_HandleSyncResponse(
      bool* result, FileSystemInfoPtr* out_info, base::FilePath* out_file_path, bool* out_is_directory, ::base::File::Error* out_error_code)
      : result_(result), out_info_(out_info), out_file_path_(out_file_path), out_is_directory_(out_is_directory), out_error_code_(out_error_code) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;
  FileSystemInfoPtr* out_info_;
  base::FilePath* out_file_path_;
  bool* out_is_directory_;
  ::base::File::Error* out_error_code_;DISALLOW_COPY_AND_ASSIGN(FileSystemManager_ResolveURL_HandleSyncResponse);
};

class FileSystemManager_ResolveURL_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  FileSystemManager_ResolveURL_ForwardToCallback(
      FileSystemManager::ResolveURLCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  FileSystemManager::ResolveURLCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(FileSystemManager_ResolveURL_ForwardToCallback);
};
class FileSystemManager_Move_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  FileSystemManager_Move_HandleSyncResponse(
      bool* result, ::base::File::Error* out_error_code)
      : result_(result), out_error_code_(out_error_code) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;
  ::base::File::Error* out_error_code_;DISALLOW_COPY_AND_ASSIGN(FileSystemManager_Move_HandleSyncResponse);
};

class FileSystemManager_Move_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  FileSystemManager_Move_ForwardToCallback(
      FileSystemManager::MoveCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  FileSystemManager::MoveCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(FileSystemManager_Move_ForwardToCallback);
};
class FileSystemManager_Copy_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  FileSystemManager_Copy_HandleSyncResponse(
      bool* result, ::base::File::Error* out_error_code)
      : result_(result), out_error_code_(out_error_code) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;
  ::base::File::Error* out_error_code_;DISALLOW_COPY_AND_ASSIGN(FileSystemManager_Copy_HandleSyncResponse);
};

class FileSystemManager_Copy_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  FileSystemManager_Copy_ForwardToCallback(
      FileSystemManager::CopyCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  FileSystemManager::CopyCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(FileSystemManager_Copy_ForwardToCallback);
};
class FileSystemManager_Remove_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  FileSystemManager_Remove_HandleSyncResponse(
      bool* result, ::base::File::Error* out_error_code)
      : result_(result), out_error_code_(out_error_code) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;
  ::base::File::Error* out_error_code_;DISALLOW_COPY_AND_ASSIGN(FileSystemManager_Remove_HandleSyncResponse);
};

class FileSystemManager_Remove_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  FileSystemManager_Remove_ForwardToCallback(
      FileSystemManager::RemoveCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  FileSystemManager::RemoveCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(FileSystemManager_Remove_ForwardToCallback);
};
class FileSystemManager_ReadMetadata_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  FileSystemManager_ReadMetadata_HandleSyncResponse(
      bool* result, base::File::Info* out_file_info, ::base::File::Error* out_error_code)
      : result_(result), out_file_info_(out_file_info), out_error_code_(out_error_code) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;
  base::File::Info* out_file_info_;
  ::base::File::Error* out_error_code_;DISALLOW_COPY_AND_ASSIGN(FileSystemManager_ReadMetadata_HandleSyncResponse);
};

class FileSystemManager_ReadMetadata_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  FileSystemManager_ReadMetadata_ForwardToCallback(
      FileSystemManager::ReadMetadataCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  FileSystemManager::ReadMetadataCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(FileSystemManager_ReadMetadata_ForwardToCallback);
};
class FileSystemManager_Create_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  FileSystemManager_Create_HandleSyncResponse(
      bool* result, ::base::File::Error* out_error_code)
      : result_(result), out_error_code_(out_error_code) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;
  ::base::File::Error* out_error_code_;DISALLOW_COPY_AND_ASSIGN(FileSystemManager_Create_HandleSyncResponse);
};

class FileSystemManager_Create_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  FileSystemManager_Create_ForwardToCallback(
      FileSystemManager::CreateCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  FileSystemManager::CreateCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(FileSystemManager_Create_ForwardToCallback);
};
class FileSystemManager_Exists_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  FileSystemManager_Exists_HandleSyncResponse(
      bool* result, ::base::File::Error* out_error_code)
      : result_(result), out_error_code_(out_error_code) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;
  ::base::File::Error* out_error_code_;DISALLOW_COPY_AND_ASSIGN(FileSystemManager_Exists_HandleSyncResponse);
};

class FileSystemManager_Exists_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  FileSystemManager_Exists_ForwardToCallback(
      FileSystemManager::ExistsCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  FileSystemManager::ExistsCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(FileSystemManager_Exists_ForwardToCallback);
};
class FileSystemManager_ReadDirectorySync_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  FileSystemManager_ReadDirectorySync_HandleSyncResponse(
      bool* result, std::vector<::filesystem::mojom::DirectoryEntryPtr>* out_entries, ::base::File::Error* out_error_code)
      : result_(result), out_entries_(out_entries), out_error_code_(out_error_code) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;
  std::vector<::filesystem::mojom::DirectoryEntryPtr>* out_entries_;
  ::base::File::Error* out_error_code_;DISALLOW_COPY_AND_ASSIGN(FileSystemManager_ReadDirectorySync_HandleSyncResponse);
};

class FileSystemManager_ReadDirectorySync_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  FileSystemManager_ReadDirectorySync_ForwardToCallback(
      FileSystemManager::ReadDirectorySyncCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  FileSystemManager::ReadDirectorySyncCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(FileSystemManager_ReadDirectorySync_ForwardToCallback);
};
class FileSystemManager_WriteSync_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  FileSystemManager_WriteSync_HandleSyncResponse(
      bool* result, int64_t* out_byte_count, ::base::File::Error* out_error_code)
      : result_(result), out_byte_count_(out_byte_count), out_error_code_(out_error_code) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;
  int64_t* out_byte_count_;
  ::base::File::Error* out_error_code_;DISALLOW_COPY_AND_ASSIGN(FileSystemManager_WriteSync_HandleSyncResponse);
};

class FileSystemManager_WriteSync_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  FileSystemManager_WriteSync_ForwardToCallback(
      FileSystemManager::WriteSyncCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  FileSystemManager::WriteSyncCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(FileSystemManager_WriteSync_ForwardToCallback);
};

class FileSystemManager_Truncate_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  FileSystemManager_Truncate_ForwardToCallback(
      FileSystemManager::TruncateCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  FileSystemManager::TruncateCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(FileSystemManager_Truncate_ForwardToCallback);
};
class FileSystemManager_TruncateSync_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  FileSystemManager_TruncateSync_HandleSyncResponse(
      bool* result, ::base::File::Error* out_error_code)
      : result_(result), out_error_code_(out_error_code) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;
  ::base::File::Error* out_error_code_;DISALLOW_COPY_AND_ASSIGN(FileSystemManager_TruncateSync_HandleSyncResponse);
};

class FileSystemManager_TruncateSync_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  FileSystemManager_TruncateSync_ForwardToCallback(
      FileSystemManager::TruncateSyncCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  FileSystemManager::TruncateSyncCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(FileSystemManager_TruncateSync_ForwardToCallback);
};

class FileSystemManager_TouchFile_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  FileSystemManager_TouchFile_ForwardToCallback(
      FileSystemManager::TouchFileCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  FileSystemManager::TouchFileCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(FileSystemManager_TouchFile_ForwardToCallback);
};
class FileSystemManager_CreateSnapshotFile_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  FileSystemManager_CreateSnapshotFile_HandleSyncResponse(
      bool* result, base::File::Info* out_file_info, base::FilePath* out_platform_path, ::base::File::Error* out_error_code, ReceivedSnapshotListenerPtr* out_snapshot_listener)
      : result_(result), out_file_info_(out_file_info), out_platform_path_(out_platform_path), out_error_code_(out_error_code), out_snapshot_listener_(out_snapshot_listener) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;
  base::File::Info* out_file_info_;
  base::FilePath* out_platform_path_;
  ::base::File::Error* out_error_code_;
  ReceivedSnapshotListenerPtr* out_snapshot_listener_;DISALLOW_COPY_AND_ASSIGN(FileSystemManager_CreateSnapshotFile_HandleSyncResponse);
};

class FileSystemManager_CreateSnapshotFile_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  FileSystemManager_CreateSnapshotFile_ForwardToCallback(
      FileSystemManager::CreateSnapshotFileCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  FileSystemManager::CreateSnapshotFileCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(FileSystemManager_CreateSnapshotFile_ForwardToCallback);
};
class FileSystemManager_GetPlatformPath_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  FileSystemManager_GetPlatformPath_HandleSyncResponse(
      bool* result, base::FilePath* out_platform_path)
      : result_(result), out_platform_path_(out_platform_path) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;
  base::FilePath* out_platform_path_;DISALLOW_COPY_AND_ASSIGN(FileSystemManager_GetPlatformPath_HandleSyncResponse);
};

class FileSystemManager_GetPlatformPath_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  FileSystemManager_GetPlatformPath_ForwardToCallback(
      FileSystemManager::GetPlatformPathCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  FileSystemManager::GetPlatformPathCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(FileSystemManager_GetPlatformPath_ForwardToCallback);
};

FileSystemManagerProxy::FileSystemManagerProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}
bool FileSystemManagerProxy::Open(
    const url::Origin& param_origin, FileSystemType param_file_system_type, std::string* out_param_name, GURL* out_param_root_url, ::base::File::Error* out_param_error_code) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::FileSystemManager::Open");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFileSystemManager_Open_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::FileSystemManager_Open_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->origin)::BaseType::BufferWriter
      origin_writer;
  mojo::internal::Serialize<::url::mojom::OriginDataView>(
      param_origin, buffer, &origin_writer, &serialization_context);
  params->origin.Set(
      origin_writer.is_null() ? nullptr : origin_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->origin.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null origin in FileSystemManager.Open request");
  mojo::internal::Serialize<::blink::mojom::FileSystemType>(
      param_file_system_type, &params->file_system_type);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(FileSystemManager::Name_);
  message.set_method_name("Open");
#endif

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new FileSystemManager_Open_HandleSyncResponse(
          &result, out_param_name, out_param_root_url, out_param_error_code));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void FileSystemManagerProxy::Open(
    const url::Origin& in_origin, FileSystemType in_file_system_type, OpenCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::FileSystemManager::Open");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFileSystemManager_Open_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::FileSystemManager_Open_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->origin)::BaseType::BufferWriter
      origin_writer;
  mojo::internal::Serialize<::url::mojom::OriginDataView>(
      in_origin, buffer, &origin_writer, &serialization_context);
  params->origin.Set(
      origin_writer.is_null() ? nullptr : origin_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->origin.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null origin in FileSystemManager.Open request");
  mojo::internal::Serialize<::blink::mojom::FileSystemType>(
      in_file_system_type, &params->file_system_type);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(FileSystemManager::Name_);
  message.set_method_name("Open");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new FileSystemManager_Open_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
bool FileSystemManagerProxy::ResolveURL(
    const GURL& param_filesystem_url, FileSystemInfoPtr* out_param_info, base::FilePath* out_param_file_path, bool* out_param_is_directory, ::base::File::Error* out_param_error_code) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::FileSystemManager::ResolveURL");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFileSystemManager_ResolveURL_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::FileSystemManager_ResolveURL_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->filesystem_url)::BaseType::BufferWriter
      filesystem_url_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      param_filesystem_url, buffer, &filesystem_url_writer, &serialization_context);
  params->filesystem_url.Set(
      filesystem_url_writer.is_null() ? nullptr : filesystem_url_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->filesystem_url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null filesystem_url in FileSystemManager.ResolveURL request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(FileSystemManager::Name_);
  message.set_method_name("ResolveURL");
#endif

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new FileSystemManager_ResolveURL_HandleSyncResponse(
          &result, out_param_info, out_param_file_path, out_param_is_directory, out_param_error_code));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void FileSystemManagerProxy::ResolveURL(
    const GURL& in_filesystem_url, ResolveURLCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::FileSystemManager::ResolveURL");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFileSystemManager_ResolveURL_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::FileSystemManager_ResolveURL_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->filesystem_url)::BaseType::BufferWriter
      filesystem_url_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_filesystem_url, buffer, &filesystem_url_writer, &serialization_context);
  params->filesystem_url.Set(
      filesystem_url_writer.is_null() ? nullptr : filesystem_url_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->filesystem_url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null filesystem_url in FileSystemManager.ResolveURL request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(FileSystemManager::Name_);
  message.set_method_name("ResolveURL");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new FileSystemManager_ResolveURL_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
bool FileSystemManagerProxy::Move(
    const GURL& param_src_path, const GURL& param_dest_path, ::base::File::Error* out_param_error_code) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::FileSystemManager::Move");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFileSystemManager_Move_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::FileSystemManager_Move_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->src_path)::BaseType::BufferWriter
      src_path_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      param_src_path, buffer, &src_path_writer, &serialization_context);
  params->src_path.Set(
      src_path_writer.is_null() ? nullptr : src_path_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->src_path.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null src_path in FileSystemManager.Move request");
  typename decltype(params->dest_path)::BaseType::BufferWriter
      dest_path_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      param_dest_path, buffer, &dest_path_writer, &serialization_context);
  params->dest_path.Set(
      dest_path_writer.is_null() ? nullptr : dest_path_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->dest_path.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null dest_path in FileSystemManager.Move request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(FileSystemManager::Name_);
  message.set_method_name("Move");
#endif

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new FileSystemManager_Move_HandleSyncResponse(
          &result, out_param_error_code));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void FileSystemManagerProxy::Move(
    const GURL& in_src_path, const GURL& in_dest_path, MoveCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::FileSystemManager::Move");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFileSystemManager_Move_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::FileSystemManager_Move_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->src_path)::BaseType::BufferWriter
      src_path_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_src_path, buffer, &src_path_writer, &serialization_context);
  params->src_path.Set(
      src_path_writer.is_null() ? nullptr : src_path_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->src_path.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null src_path in FileSystemManager.Move request");
  typename decltype(params->dest_path)::BaseType::BufferWriter
      dest_path_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_dest_path, buffer, &dest_path_writer, &serialization_context);
  params->dest_path.Set(
      dest_path_writer.is_null() ? nullptr : dest_path_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->dest_path.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null dest_path in FileSystemManager.Move request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(FileSystemManager::Name_);
  message.set_method_name("Move");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new FileSystemManager_Move_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
bool FileSystemManagerProxy::Copy(
    const GURL& param_src_path, const GURL& param_dest_path, ::base::File::Error* out_param_error_code) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::FileSystemManager::Copy");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFileSystemManager_Copy_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::FileSystemManager_Copy_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->src_path)::BaseType::BufferWriter
      src_path_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      param_src_path, buffer, &src_path_writer, &serialization_context);
  params->src_path.Set(
      src_path_writer.is_null() ? nullptr : src_path_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->src_path.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null src_path in FileSystemManager.Copy request");
  typename decltype(params->dest_path)::BaseType::BufferWriter
      dest_path_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      param_dest_path, buffer, &dest_path_writer, &serialization_context);
  params->dest_path.Set(
      dest_path_writer.is_null() ? nullptr : dest_path_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->dest_path.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null dest_path in FileSystemManager.Copy request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(FileSystemManager::Name_);
  message.set_method_name("Copy");
#endif

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new FileSystemManager_Copy_HandleSyncResponse(
          &result, out_param_error_code));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void FileSystemManagerProxy::Copy(
    const GURL& in_src_path, const GURL& in_dest_path, CopyCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::FileSystemManager::Copy");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFileSystemManager_Copy_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::FileSystemManager_Copy_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->src_path)::BaseType::BufferWriter
      src_path_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_src_path, buffer, &src_path_writer, &serialization_context);
  params->src_path.Set(
      src_path_writer.is_null() ? nullptr : src_path_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->src_path.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null src_path in FileSystemManager.Copy request");
  typename decltype(params->dest_path)::BaseType::BufferWriter
      dest_path_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_dest_path, buffer, &dest_path_writer, &serialization_context);
  params->dest_path.Set(
      dest_path_writer.is_null() ? nullptr : dest_path_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->dest_path.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null dest_path in FileSystemManager.Copy request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(FileSystemManager::Name_);
  message.set_method_name("Copy");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new FileSystemManager_Copy_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
bool FileSystemManagerProxy::Remove(
    const GURL& param_path, bool param_recursive, ::base::File::Error* out_param_error_code) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::FileSystemManager::Remove");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFileSystemManager_Remove_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::FileSystemManager_Remove_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->path)::BaseType::BufferWriter
      path_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      param_path, buffer, &path_writer, &serialization_context);
  params->path.Set(
      path_writer.is_null() ? nullptr : path_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->path.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null path in FileSystemManager.Remove request");
  params->recursive = param_recursive;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(FileSystemManager::Name_);
  message.set_method_name("Remove");
#endif

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new FileSystemManager_Remove_HandleSyncResponse(
          &result, out_param_error_code));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void FileSystemManagerProxy::Remove(
    const GURL& in_path, bool in_recursive, RemoveCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::FileSystemManager::Remove");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFileSystemManager_Remove_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::FileSystemManager_Remove_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->path)::BaseType::BufferWriter
      path_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_path, buffer, &path_writer, &serialization_context);
  params->path.Set(
      path_writer.is_null() ? nullptr : path_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->path.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null path in FileSystemManager.Remove request");
  params->recursive = in_recursive;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(FileSystemManager::Name_);
  message.set_method_name("Remove");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new FileSystemManager_Remove_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
bool FileSystemManagerProxy::ReadMetadata(
    const GURL& param_path, base::File::Info* out_param_file_info, ::base::File::Error* out_param_error_code) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::FileSystemManager::ReadMetadata");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFileSystemManager_ReadMetadata_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::FileSystemManager_ReadMetadata_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->path)::BaseType::BufferWriter
      path_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      param_path, buffer, &path_writer, &serialization_context);
  params->path.Set(
      path_writer.is_null() ? nullptr : path_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->path.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null path in FileSystemManager.ReadMetadata request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(FileSystemManager::Name_);
  message.set_method_name("ReadMetadata");
#endif

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new FileSystemManager_ReadMetadata_HandleSyncResponse(
          &result, out_param_file_info, out_param_error_code));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void FileSystemManagerProxy::ReadMetadata(
    const GURL& in_path, ReadMetadataCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::FileSystemManager::ReadMetadata");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFileSystemManager_ReadMetadata_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::FileSystemManager_ReadMetadata_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->path)::BaseType::BufferWriter
      path_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_path, buffer, &path_writer, &serialization_context);
  params->path.Set(
      path_writer.is_null() ? nullptr : path_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->path.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null path in FileSystemManager.ReadMetadata request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(FileSystemManager::Name_);
  message.set_method_name("ReadMetadata");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new FileSystemManager_ReadMetadata_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
bool FileSystemManagerProxy::Create(
    const GURL& param_path, bool param_exclusive, bool param_is_directory, bool param_recursive, ::base::File::Error* out_param_error_code) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::FileSystemManager::Create");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFileSystemManager_Create_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::FileSystemManager_Create_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->path)::BaseType::BufferWriter
      path_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      param_path, buffer, &path_writer, &serialization_context);
  params->path.Set(
      path_writer.is_null() ? nullptr : path_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->path.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null path in FileSystemManager.Create request");
  params->exclusive = param_exclusive;
  params->is_directory = param_is_directory;
  params->recursive = param_recursive;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(FileSystemManager::Name_);
  message.set_method_name("Create");
#endif

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new FileSystemManager_Create_HandleSyncResponse(
          &result, out_param_error_code));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void FileSystemManagerProxy::Create(
    const GURL& in_path, bool in_exclusive, bool in_is_directory, bool in_recursive, CreateCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::FileSystemManager::Create");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFileSystemManager_Create_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::FileSystemManager_Create_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->path)::BaseType::BufferWriter
      path_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_path, buffer, &path_writer, &serialization_context);
  params->path.Set(
      path_writer.is_null() ? nullptr : path_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->path.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null path in FileSystemManager.Create request");
  params->exclusive = in_exclusive;
  params->is_directory = in_is_directory;
  params->recursive = in_recursive;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(FileSystemManager::Name_);
  message.set_method_name("Create");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new FileSystemManager_Create_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
bool FileSystemManagerProxy::Exists(
    const GURL& param_path, bool param_is_directory, ::base::File::Error* out_param_error_code) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::FileSystemManager::Exists");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFileSystemManager_Exists_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::FileSystemManager_Exists_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->path)::BaseType::BufferWriter
      path_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      param_path, buffer, &path_writer, &serialization_context);
  params->path.Set(
      path_writer.is_null() ? nullptr : path_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->path.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null path in FileSystemManager.Exists request");
  params->is_directory = param_is_directory;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(FileSystemManager::Name_);
  message.set_method_name("Exists");
#endif

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new FileSystemManager_Exists_HandleSyncResponse(
          &result, out_param_error_code));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void FileSystemManagerProxy::Exists(
    const GURL& in_path, bool in_is_directory, ExistsCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::FileSystemManager::Exists");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFileSystemManager_Exists_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::FileSystemManager_Exists_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->path)::BaseType::BufferWriter
      path_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_path, buffer, &path_writer, &serialization_context);
  params->path.Set(
      path_writer.is_null() ? nullptr : path_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->path.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null path in FileSystemManager.Exists request");
  params->is_directory = in_is_directory;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(FileSystemManager::Name_);
  message.set_method_name("Exists");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new FileSystemManager_Exists_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void FileSystemManagerProxy::ReadDirectory(
    const GURL& in_path, FileSystemOperationListenerPtr in_listener) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::FileSystemManager::ReadDirectory");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFileSystemManager_ReadDirectory_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::FileSystemManager_ReadDirectory_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->path)::BaseType::BufferWriter
      path_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_path, buffer, &path_writer, &serialization_context);
  params->path.Set(
      path_writer.is_null() ? nullptr : path_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->path.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null path in FileSystemManager.ReadDirectory request");
  mojo::internal::Serialize<::blink::mojom::FileSystemOperationListenerPtrDataView>(
      in_listener, &params->listener, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->listener),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid listener in FileSystemManager.ReadDirectory request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(FileSystemManager::Name_);
  message.set_method_name("ReadDirectory");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
bool FileSystemManagerProxy::ReadDirectorySync(
    const GURL& param_path, std::vector<::filesystem::mojom::DirectoryEntryPtr>* out_param_entries, ::base::File::Error* out_param_error_code) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::FileSystemManager::ReadDirectorySync");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFileSystemManager_ReadDirectorySync_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::FileSystemManager_ReadDirectorySync_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->path)::BaseType::BufferWriter
      path_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      param_path, buffer, &path_writer, &serialization_context);
  params->path.Set(
      path_writer.is_null() ? nullptr : path_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->path.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null path in FileSystemManager.ReadDirectorySync request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(FileSystemManager::Name_);
  message.set_method_name("ReadDirectorySync");
#endif

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new FileSystemManager_ReadDirectorySync_HandleSyncResponse(
          &result, out_param_entries, out_param_error_code));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void FileSystemManagerProxy::ReadDirectorySync(
    const GURL& in_path, ReadDirectorySyncCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::FileSystemManager::ReadDirectorySync");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFileSystemManager_ReadDirectorySync_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::FileSystemManager_ReadDirectorySync_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->path)::BaseType::BufferWriter
      path_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_path, buffer, &path_writer, &serialization_context);
  params->path.Set(
      path_writer.is_null() ? nullptr : path_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->path.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null path in FileSystemManager.ReadDirectorySync request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(FileSystemManager::Name_);
  message.set_method_name("ReadDirectorySync");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new FileSystemManager_ReadDirectorySync_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void FileSystemManagerProxy::Write(
    const GURL& in_file_path, const std::string& in_blob_uuid, int64_t in_position, FileSystemCancellableOperationRequest in_op_request, FileSystemOperationListenerPtr in_listener) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::FileSystemManager::Write");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFileSystemManager_Write_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::FileSystemManager_Write_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->file_path)::BaseType::BufferWriter
      file_path_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_file_path, buffer, &file_path_writer, &serialization_context);
  params->file_path.Set(
      file_path_writer.is_null() ? nullptr : file_path_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->file_path.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null file_path in FileSystemManager.Write request");
  typename decltype(params->blob_uuid)::BaseType::BufferWriter
      blob_uuid_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_blob_uuid, buffer, &blob_uuid_writer, &serialization_context);
  params->blob_uuid.Set(
      blob_uuid_writer.is_null() ? nullptr : blob_uuid_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->blob_uuid.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null blob_uuid in FileSystemManager.Write request");
  params->position = in_position;
  mojo::internal::Serialize<::blink::mojom::FileSystemCancellableOperationRequestDataView>(
      in_op_request, &params->op_request, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->op_request),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid op_request in FileSystemManager.Write request");
  mojo::internal::Serialize<::blink::mojom::FileSystemOperationListenerPtrDataView>(
      in_listener, &params->listener, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->listener),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid listener in FileSystemManager.Write request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(FileSystemManager::Name_);
  message.set_method_name("Write");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
bool FileSystemManagerProxy::WriteSync(
    const GURL& param_file_path, const std::string& param_blob_uuid, int64_t param_position, int64_t* out_param_byte_count, ::base::File::Error* out_param_error_code) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::FileSystemManager::WriteSync");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFileSystemManager_WriteSync_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::FileSystemManager_WriteSync_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->file_path)::BaseType::BufferWriter
      file_path_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      param_file_path, buffer, &file_path_writer, &serialization_context);
  params->file_path.Set(
      file_path_writer.is_null() ? nullptr : file_path_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->file_path.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null file_path in FileSystemManager.WriteSync request");
  typename decltype(params->blob_uuid)::BaseType::BufferWriter
      blob_uuid_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      param_blob_uuid, buffer, &blob_uuid_writer, &serialization_context);
  params->blob_uuid.Set(
      blob_uuid_writer.is_null() ? nullptr : blob_uuid_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->blob_uuid.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null blob_uuid in FileSystemManager.WriteSync request");
  params->position = param_position;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(FileSystemManager::Name_);
  message.set_method_name("WriteSync");
#endif

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new FileSystemManager_WriteSync_HandleSyncResponse(
          &result, out_param_byte_count, out_param_error_code));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void FileSystemManagerProxy::WriteSync(
    const GURL& in_file_path, const std::string& in_blob_uuid, int64_t in_position, WriteSyncCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::FileSystemManager::WriteSync");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFileSystemManager_WriteSync_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::FileSystemManager_WriteSync_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->file_path)::BaseType::BufferWriter
      file_path_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_file_path, buffer, &file_path_writer, &serialization_context);
  params->file_path.Set(
      file_path_writer.is_null() ? nullptr : file_path_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->file_path.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null file_path in FileSystemManager.WriteSync request");
  typename decltype(params->blob_uuid)::BaseType::BufferWriter
      blob_uuid_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_blob_uuid, buffer, &blob_uuid_writer, &serialization_context);
  params->blob_uuid.Set(
      blob_uuid_writer.is_null() ? nullptr : blob_uuid_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->blob_uuid.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null blob_uuid in FileSystemManager.WriteSync request");
  params->position = in_position;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(FileSystemManager::Name_);
  message.set_method_name("WriteSync");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new FileSystemManager_WriteSync_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void FileSystemManagerProxy::Truncate(
    const GURL& in_file_path, int64_t in_length, FileSystemCancellableOperationRequest in_op_request, TruncateCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::FileSystemManager::Truncate");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFileSystemManager_Truncate_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::FileSystemManager_Truncate_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->file_path)::BaseType::BufferWriter
      file_path_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_file_path, buffer, &file_path_writer, &serialization_context);
  params->file_path.Set(
      file_path_writer.is_null() ? nullptr : file_path_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->file_path.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null file_path in FileSystemManager.Truncate request");
  params->length = in_length;
  mojo::internal::Serialize<::blink::mojom::FileSystemCancellableOperationRequestDataView>(
      in_op_request, &params->op_request, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->op_request),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid op_request in FileSystemManager.Truncate request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(FileSystemManager::Name_);
  message.set_method_name("Truncate");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new FileSystemManager_Truncate_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
bool FileSystemManagerProxy::TruncateSync(
    const GURL& param_file_path, int64_t param_length, ::base::File::Error* out_param_error_code) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::FileSystemManager::TruncateSync");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFileSystemManager_TruncateSync_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::FileSystemManager_TruncateSync_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->file_path)::BaseType::BufferWriter
      file_path_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      param_file_path, buffer, &file_path_writer, &serialization_context);
  params->file_path.Set(
      file_path_writer.is_null() ? nullptr : file_path_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->file_path.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null file_path in FileSystemManager.TruncateSync request");
  params->length = param_length;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(FileSystemManager::Name_);
  message.set_method_name("TruncateSync");
#endif

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new FileSystemManager_TruncateSync_HandleSyncResponse(
          &result, out_param_error_code));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void FileSystemManagerProxy::TruncateSync(
    const GURL& in_file_path, int64_t in_length, TruncateSyncCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::FileSystemManager::TruncateSync");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFileSystemManager_TruncateSync_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::FileSystemManager_TruncateSync_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->file_path)::BaseType::BufferWriter
      file_path_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_file_path, buffer, &file_path_writer, &serialization_context);
  params->file_path.Set(
      file_path_writer.is_null() ? nullptr : file_path_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->file_path.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null file_path in FileSystemManager.TruncateSync request");
  params->length = in_length;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(FileSystemManager::Name_);
  message.set_method_name("TruncateSync");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new FileSystemManager_TruncateSync_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void FileSystemManagerProxy::TouchFile(
    const GURL& in_path, base::Time in_last_access_time, base::Time in_last_modified_time, TouchFileCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::FileSystemManager::TouchFile");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFileSystemManager_TouchFile_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::FileSystemManager_TouchFile_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->path)::BaseType::BufferWriter
      path_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_path, buffer, &path_writer, &serialization_context);
  params->path.Set(
      path_writer.is_null() ? nullptr : path_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->path.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null path in FileSystemManager.TouchFile request");
  typename decltype(params->last_access_time)::BaseType::BufferWriter
      last_access_time_writer;
  mojo::internal::Serialize<::mojo_base::mojom::TimeDataView>(
      in_last_access_time, buffer, &last_access_time_writer, &serialization_context);
  params->last_access_time.Set(
      last_access_time_writer.is_null() ? nullptr : last_access_time_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->last_access_time.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null last_access_time in FileSystemManager.TouchFile request");
  typename decltype(params->last_modified_time)::BaseType::BufferWriter
      last_modified_time_writer;
  mojo::internal::Serialize<::mojo_base::mojom::TimeDataView>(
      in_last_modified_time, buffer, &last_modified_time_writer, &serialization_context);
  params->last_modified_time.Set(
      last_modified_time_writer.is_null() ? nullptr : last_modified_time_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->last_modified_time.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null last_modified_time in FileSystemManager.TouchFile request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(FileSystemManager::Name_);
  message.set_method_name("TouchFile");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new FileSystemManager_TouchFile_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
bool FileSystemManagerProxy::CreateSnapshotFile(
    const GURL& param_file_path, base::File::Info* out_param_file_info, base::FilePath* out_param_platform_path, ::base::File::Error* out_param_error_code, ReceivedSnapshotListenerPtr* out_param_snapshot_listener) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::FileSystemManager::CreateSnapshotFile");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFileSystemManager_CreateSnapshotFile_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::FileSystemManager_CreateSnapshotFile_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->file_path)::BaseType::BufferWriter
      file_path_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      param_file_path, buffer, &file_path_writer, &serialization_context);
  params->file_path.Set(
      file_path_writer.is_null() ? nullptr : file_path_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->file_path.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null file_path in FileSystemManager.CreateSnapshotFile request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(FileSystemManager::Name_);
  message.set_method_name("CreateSnapshotFile");
#endif

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new FileSystemManager_CreateSnapshotFile_HandleSyncResponse(
          &result, out_param_file_info, out_param_platform_path, out_param_error_code, out_param_snapshot_listener));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void FileSystemManagerProxy::CreateSnapshotFile(
    const GURL& in_file_path, CreateSnapshotFileCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::FileSystemManager::CreateSnapshotFile");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFileSystemManager_CreateSnapshotFile_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::FileSystemManager_CreateSnapshotFile_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->file_path)::BaseType::BufferWriter
      file_path_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_file_path, buffer, &file_path_writer, &serialization_context);
  params->file_path.Set(
      file_path_writer.is_null() ? nullptr : file_path_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->file_path.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null file_path in FileSystemManager.CreateSnapshotFile request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(FileSystemManager::Name_);
  message.set_method_name("CreateSnapshotFile");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new FileSystemManager_CreateSnapshotFile_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
bool FileSystemManagerProxy::GetPlatformPath(
    const GURL& param_file_path, base::FilePath* out_param_platform_path) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::FileSystemManager::GetPlatformPath");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFileSystemManager_GetPlatformPath_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::FileSystemManager_GetPlatformPath_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->file_path)::BaseType::BufferWriter
      file_path_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      param_file_path, buffer, &file_path_writer, &serialization_context);
  params->file_path.Set(
      file_path_writer.is_null() ? nullptr : file_path_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->file_path.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null file_path in FileSystemManager.GetPlatformPath request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(FileSystemManager::Name_);
  message.set_method_name("GetPlatformPath");
#endif

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new FileSystemManager_GetPlatformPath_HandleSyncResponse(
          &result, out_param_platform_path));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void FileSystemManagerProxy::GetPlatformPath(
    const GURL& in_file_path, GetPlatformPathCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::FileSystemManager::GetPlatformPath");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFileSystemManager_GetPlatformPath_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::FileSystemManager_GetPlatformPath_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->file_path)::BaseType::BufferWriter
      file_path_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_file_path, buffer, &file_path_writer, &serialization_context);
  params->file_path.Set(
      file_path_writer.is_null() ? nullptr : file_path_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->file_path.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null file_path in FileSystemManager.GetPlatformPath request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(FileSystemManager::Name_);
  message.set_method_name("GetPlatformPath");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new FileSystemManager_GetPlatformPath_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class FileSystemManager_Open_ProxyToResponder {
 public:
  static FileSystemManager::OpenCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<FileSystemManager_Open_ProxyToResponder> proxy(
        new FileSystemManager_Open_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&FileSystemManager_Open_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~FileSystemManager_Open_ProxyToResponder() {
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
  FileSystemManager_Open_ProxyToResponder(
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
        << "FileSystemManager::OpenCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      const std::string& in_name, const GURL& in_root_url, ::base::File::Error in_error_code);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(FileSystemManager_Open_ProxyToResponder);
};

bool FileSystemManager_Open_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::FileSystemManager::OpenCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::FileSystemManager_Open_ResponseParams_Data* params =
      reinterpret_cast<
          internal::FileSystemManager_Open_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  std::string p_name{};
  GURL p_root_url{};
  ::base::File::Error p_error_code{};
  FileSystemManager_Open_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadName(&p_name))
    success = false;
  if (!input_data_view.ReadRootUrl(&p_root_url))
    success = false;
  if (!input_data_view.ReadErrorCode(&p_error_code))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        FileSystemManager::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_name), 
std::move(p_root_url), 
std::move(p_error_code));
  return true;
}

void FileSystemManager_Open_ProxyToResponder::Run(
    const std::string& in_name, const GURL& in_root_url, ::base::File::Error in_error_code) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFileSystemManager_Open_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::FileSystemManager_Open_ResponseParams_Data::BufferWriter
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
  typename decltype(params->root_url)::BaseType::BufferWriter
      root_url_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_root_url, buffer, &root_url_writer, &serialization_context);
  params->root_url.Set(
      root_url_writer.is_null() ? nullptr : root_url_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->root_url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null root_url in ");
  mojo::internal::Serialize<::mojo_base::mojom::FileError>(
      in_error_code, &params->error_code);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::FileSystemManager::OpenCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(FileSystemManager::Name_);
  message.set_method_name("Open");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool FileSystemManager_Open_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::FileSystemManager_Open_ResponseParams_Data* params =
      reinterpret_cast<internal::FileSystemManager_Open_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  std::string p_name{};
  GURL p_root_url{};
  ::base::File::Error p_error_code{};
  FileSystemManager_Open_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadName(&p_name))
    success = false;
  if (!input_data_view.ReadRootUrl(&p_root_url))
    success = false;
  if (!input_data_view.ReadErrorCode(&p_error_code))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        FileSystemManager::Name_, 0, true);
    return false;
  }
  *out_name_ = std::move(p_name);
  *out_root_url_ = std::move(p_root_url);
  *out_error_code_ = std::move(p_error_code);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}
class FileSystemManager_ResolveURL_ProxyToResponder {
 public:
  static FileSystemManager::ResolveURLCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<FileSystemManager_ResolveURL_ProxyToResponder> proxy(
        new FileSystemManager_ResolveURL_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&FileSystemManager_ResolveURL_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~FileSystemManager_ResolveURL_ProxyToResponder() {
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
  FileSystemManager_ResolveURL_ProxyToResponder(
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
        << "FileSystemManager::ResolveURLCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      FileSystemInfoPtr in_info, const base::FilePath& in_file_path, bool in_is_directory, ::base::File::Error in_error_code);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(FileSystemManager_ResolveURL_ProxyToResponder);
};

bool FileSystemManager_ResolveURL_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::FileSystemManager::ResolveURLCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::FileSystemManager_ResolveURL_ResponseParams_Data* params =
      reinterpret_cast<
          internal::FileSystemManager_ResolveURL_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  FileSystemInfoPtr p_info{};
  base::FilePath p_file_path{};
  bool p_is_directory{};
  ::base::File::Error p_error_code{};
  FileSystemManager_ResolveURL_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadInfo(&p_info))
    success = false;
  if (!input_data_view.ReadFilePath(&p_file_path))
    success = false;
  p_is_directory = input_data_view.is_directory();
  if (!input_data_view.ReadErrorCode(&p_error_code))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        FileSystemManager::Name_, 1, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_info), 
std::move(p_file_path), 
std::move(p_is_directory), 
std::move(p_error_code));
  return true;
}

void FileSystemManager_ResolveURL_ProxyToResponder::Run(
    FileSystemInfoPtr in_info, const base::FilePath& in_file_path, bool in_is_directory, ::base::File::Error in_error_code) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFileSystemManager_ResolveURL_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::FileSystemManager_ResolveURL_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->info)::BaseType::BufferWriter
      info_writer;
  mojo::internal::Serialize<::blink::mojom::FileSystemInfoDataView>(
      in_info, buffer, &info_writer, &serialization_context);
  params->info.Set(
      info_writer.is_null() ? nullptr : info_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->info.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null info in ");
  typename decltype(params->file_path)::BaseType::BufferWriter
      file_path_writer;
  mojo::internal::Serialize<::mojo_base::mojom::FilePathDataView>(
      in_file_path, buffer, &file_path_writer, &serialization_context);
  params->file_path.Set(
      file_path_writer.is_null() ? nullptr : file_path_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->file_path.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null file_path in ");
  params->is_directory = in_is_directory;
  mojo::internal::Serialize<::mojo_base::mojom::FileError>(
      in_error_code, &params->error_code);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::FileSystemManager::ResolveURLCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(FileSystemManager::Name_);
  message.set_method_name("ResolveURL");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool FileSystemManager_ResolveURL_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::FileSystemManager_ResolveURL_ResponseParams_Data* params =
      reinterpret_cast<internal::FileSystemManager_ResolveURL_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  FileSystemInfoPtr p_info{};
  base::FilePath p_file_path{};
  bool p_is_directory{};
  ::base::File::Error p_error_code{};
  FileSystemManager_ResolveURL_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadInfo(&p_info))
    success = false;
  if (!input_data_view.ReadFilePath(&p_file_path))
    success = false;
  p_is_directory = input_data_view.is_directory();
  if (!input_data_view.ReadErrorCode(&p_error_code))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        FileSystemManager::Name_, 1, true);
    return false;
  }
  *out_info_ = std::move(p_info);
  *out_file_path_ = std::move(p_file_path);
  *out_is_directory_ = std::move(p_is_directory);
  *out_error_code_ = std::move(p_error_code);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}
class FileSystemManager_Move_ProxyToResponder {
 public:
  static FileSystemManager::MoveCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<FileSystemManager_Move_ProxyToResponder> proxy(
        new FileSystemManager_Move_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&FileSystemManager_Move_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~FileSystemManager_Move_ProxyToResponder() {
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
  FileSystemManager_Move_ProxyToResponder(
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
        << "FileSystemManager::MoveCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      ::base::File::Error in_error_code);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(FileSystemManager_Move_ProxyToResponder);
};

bool FileSystemManager_Move_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::FileSystemManager::MoveCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::FileSystemManager_Move_ResponseParams_Data* params =
      reinterpret_cast<
          internal::FileSystemManager_Move_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::base::File::Error p_error_code{};
  FileSystemManager_Move_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadErrorCode(&p_error_code))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        FileSystemManager::Name_, 2, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_error_code));
  return true;
}

void FileSystemManager_Move_ProxyToResponder::Run(
    ::base::File::Error in_error_code) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFileSystemManager_Move_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::FileSystemManager_Move_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::mojo_base::mojom::FileError>(
      in_error_code, &params->error_code);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::FileSystemManager::MoveCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(FileSystemManager::Name_);
  message.set_method_name("Move");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool FileSystemManager_Move_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::FileSystemManager_Move_ResponseParams_Data* params =
      reinterpret_cast<internal::FileSystemManager_Move_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::base::File::Error p_error_code{};
  FileSystemManager_Move_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadErrorCode(&p_error_code))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        FileSystemManager::Name_, 2, true);
    return false;
  }
  *out_error_code_ = std::move(p_error_code);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}
class FileSystemManager_Copy_ProxyToResponder {
 public:
  static FileSystemManager::CopyCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<FileSystemManager_Copy_ProxyToResponder> proxy(
        new FileSystemManager_Copy_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&FileSystemManager_Copy_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~FileSystemManager_Copy_ProxyToResponder() {
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
  FileSystemManager_Copy_ProxyToResponder(
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
        << "FileSystemManager::CopyCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      ::base::File::Error in_error_code);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(FileSystemManager_Copy_ProxyToResponder);
};

bool FileSystemManager_Copy_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::FileSystemManager::CopyCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::FileSystemManager_Copy_ResponseParams_Data* params =
      reinterpret_cast<
          internal::FileSystemManager_Copy_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::base::File::Error p_error_code{};
  FileSystemManager_Copy_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadErrorCode(&p_error_code))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        FileSystemManager::Name_, 3, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_error_code));
  return true;
}

void FileSystemManager_Copy_ProxyToResponder::Run(
    ::base::File::Error in_error_code) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFileSystemManager_Copy_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::FileSystemManager_Copy_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::mojo_base::mojom::FileError>(
      in_error_code, &params->error_code);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::FileSystemManager::CopyCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(FileSystemManager::Name_);
  message.set_method_name("Copy");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool FileSystemManager_Copy_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::FileSystemManager_Copy_ResponseParams_Data* params =
      reinterpret_cast<internal::FileSystemManager_Copy_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::base::File::Error p_error_code{};
  FileSystemManager_Copy_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadErrorCode(&p_error_code))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        FileSystemManager::Name_, 3, true);
    return false;
  }
  *out_error_code_ = std::move(p_error_code);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}
class FileSystemManager_Remove_ProxyToResponder {
 public:
  static FileSystemManager::RemoveCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<FileSystemManager_Remove_ProxyToResponder> proxy(
        new FileSystemManager_Remove_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&FileSystemManager_Remove_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~FileSystemManager_Remove_ProxyToResponder() {
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
  FileSystemManager_Remove_ProxyToResponder(
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
        << "FileSystemManager::RemoveCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      ::base::File::Error in_error_code);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(FileSystemManager_Remove_ProxyToResponder);
};

bool FileSystemManager_Remove_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::FileSystemManager::RemoveCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::FileSystemManager_Remove_ResponseParams_Data* params =
      reinterpret_cast<
          internal::FileSystemManager_Remove_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::base::File::Error p_error_code{};
  FileSystemManager_Remove_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadErrorCode(&p_error_code))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        FileSystemManager::Name_, 4, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_error_code));
  return true;
}

void FileSystemManager_Remove_ProxyToResponder::Run(
    ::base::File::Error in_error_code) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFileSystemManager_Remove_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::FileSystemManager_Remove_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::mojo_base::mojom::FileError>(
      in_error_code, &params->error_code);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::FileSystemManager::RemoveCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(FileSystemManager::Name_);
  message.set_method_name("Remove");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool FileSystemManager_Remove_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::FileSystemManager_Remove_ResponseParams_Data* params =
      reinterpret_cast<internal::FileSystemManager_Remove_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::base::File::Error p_error_code{};
  FileSystemManager_Remove_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadErrorCode(&p_error_code))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        FileSystemManager::Name_, 4, true);
    return false;
  }
  *out_error_code_ = std::move(p_error_code);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}
class FileSystemManager_ReadMetadata_ProxyToResponder {
 public:
  static FileSystemManager::ReadMetadataCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<FileSystemManager_ReadMetadata_ProxyToResponder> proxy(
        new FileSystemManager_ReadMetadata_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&FileSystemManager_ReadMetadata_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~FileSystemManager_ReadMetadata_ProxyToResponder() {
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
  FileSystemManager_ReadMetadata_ProxyToResponder(
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
        << "FileSystemManager::ReadMetadataCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      const base::File::Info& in_file_info, ::base::File::Error in_error_code);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(FileSystemManager_ReadMetadata_ProxyToResponder);
};

bool FileSystemManager_ReadMetadata_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::FileSystemManager::ReadMetadataCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::FileSystemManager_ReadMetadata_ResponseParams_Data* params =
      reinterpret_cast<
          internal::FileSystemManager_ReadMetadata_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  base::File::Info p_file_info{};
  ::base::File::Error p_error_code{};
  FileSystemManager_ReadMetadata_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadFileInfo(&p_file_info))
    success = false;
  if (!input_data_view.ReadErrorCode(&p_error_code))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        FileSystemManager::Name_, 5, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_file_info), 
std::move(p_error_code));
  return true;
}

void FileSystemManager_ReadMetadata_ProxyToResponder::Run(
    const base::File::Info& in_file_info, ::base::File::Error in_error_code) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFileSystemManager_ReadMetadata_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::FileSystemManager_ReadMetadata_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->file_info)::BaseType::BufferWriter
      file_info_writer;
  mojo::internal::Serialize<::mojo_base::mojom::FileInfoDataView>(
      in_file_info, buffer, &file_info_writer, &serialization_context);
  params->file_info.Set(
      file_info_writer.is_null() ? nullptr : file_info_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->file_info.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null file_info in ");
  mojo::internal::Serialize<::mojo_base::mojom::FileError>(
      in_error_code, &params->error_code);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::FileSystemManager::ReadMetadataCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(FileSystemManager::Name_);
  message.set_method_name("ReadMetadata");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool FileSystemManager_ReadMetadata_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::FileSystemManager_ReadMetadata_ResponseParams_Data* params =
      reinterpret_cast<internal::FileSystemManager_ReadMetadata_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  base::File::Info p_file_info{};
  ::base::File::Error p_error_code{};
  FileSystemManager_ReadMetadata_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadFileInfo(&p_file_info))
    success = false;
  if (!input_data_view.ReadErrorCode(&p_error_code))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        FileSystemManager::Name_, 5, true);
    return false;
  }
  *out_file_info_ = std::move(p_file_info);
  *out_error_code_ = std::move(p_error_code);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}
class FileSystemManager_Create_ProxyToResponder {
 public:
  static FileSystemManager::CreateCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<FileSystemManager_Create_ProxyToResponder> proxy(
        new FileSystemManager_Create_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&FileSystemManager_Create_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~FileSystemManager_Create_ProxyToResponder() {
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
  FileSystemManager_Create_ProxyToResponder(
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
        << "FileSystemManager::CreateCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      ::base::File::Error in_error_code);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(FileSystemManager_Create_ProxyToResponder);
};

bool FileSystemManager_Create_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::FileSystemManager::CreateCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::FileSystemManager_Create_ResponseParams_Data* params =
      reinterpret_cast<
          internal::FileSystemManager_Create_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::base::File::Error p_error_code{};
  FileSystemManager_Create_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadErrorCode(&p_error_code))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        FileSystemManager::Name_, 6, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_error_code));
  return true;
}

void FileSystemManager_Create_ProxyToResponder::Run(
    ::base::File::Error in_error_code) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFileSystemManager_Create_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::FileSystemManager_Create_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::mojo_base::mojom::FileError>(
      in_error_code, &params->error_code);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::FileSystemManager::CreateCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(FileSystemManager::Name_);
  message.set_method_name("Create");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool FileSystemManager_Create_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::FileSystemManager_Create_ResponseParams_Data* params =
      reinterpret_cast<internal::FileSystemManager_Create_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::base::File::Error p_error_code{};
  FileSystemManager_Create_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadErrorCode(&p_error_code))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        FileSystemManager::Name_, 6, true);
    return false;
  }
  *out_error_code_ = std::move(p_error_code);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}
class FileSystemManager_Exists_ProxyToResponder {
 public:
  static FileSystemManager::ExistsCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<FileSystemManager_Exists_ProxyToResponder> proxy(
        new FileSystemManager_Exists_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&FileSystemManager_Exists_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~FileSystemManager_Exists_ProxyToResponder() {
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
  FileSystemManager_Exists_ProxyToResponder(
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
        << "FileSystemManager::ExistsCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      ::base::File::Error in_error_code);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(FileSystemManager_Exists_ProxyToResponder);
};

bool FileSystemManager_Exists_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::FileSystemManager::ExistsCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::FileSystemManager_Exists_ResponseParams_Data* params =
      reinterpret_cast<
          internal::FileSystemManager_Exists_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::base::File::Error p_error_code{};
  FileSystemManager_Exists_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadErrorCode(&p_error_code))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        FileSystemManager::Name_, 7, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_error_code));
  return true;
}

void FileSystemManager_Exists_ProxyToResponder::Run(
    ::base::File::Error in_error_code) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFileSystemManager_Exists_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::FileSystemManager_Exists_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::mojo_base::mojom::FileError>(
      in_error_code, &params->error_code);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::FileSystemManager::ExistsCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(FileSystemManager::Name_);
  message.set_method_name("Exists");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool FileSystemManager_Exists_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::FileSystemManager_Exists_ResponseParams_Data* params =
      reinterpret_cast<internal::FileSystemManager_Exists_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::base::File::Error p_error_code{};
  FileSystemManager_Exists_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadErrorCode(&p_error_code))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        FileSystemManager::Name_, 7, true);
    return false;
  }
  *out_error_code_ = std::move(p_error_code);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}
class FileSystemManager_ReadDirectorySync_ProxyToResponder {
 public:
  static FileSystemManager::ReadDirectorySyncCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<FileSystemManager_ReadDirectorySync_ProxyToResponder> proxy(
        new FileSystemManager_ReadDirectorySync_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&FileSystemManager_ReadDirectorySync_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~FileSystemManager_ReadDirectorySync_ProxyToResponder() {
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
  FileSystemManager_ReadDirectorySync_ProxyToResponder(
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
        << "FileSystemManager::ReadDirectorySyncCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      std::vector<::filesystem::mojom::DirectoryEntryPtr> in_entries, ::base::File::Error in_error_code);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(FileSystemManager_ReadDirectorySync_ProxyToResponder);
};

bool FileSystemManager_ReadDirectorySync_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::FileSystemManager::ReadDirectorySyncCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::FileSystemManager_ReadDirectorySync_ResponseParams_Data* params =
      reinterpret_cast<
          internal::FileSystemManager_ReadDirectorySync_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  std::vector<::filesystem::mojom::DirectoryEntryPtr> p_entries{};
  ::base::File::Error p_error_code{};
  FileSystemManager_ReadDirectorySync_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadEntries(&p_entries))
    success = false;
  if (!input_data_view.ReadErrorCode(&p_error_code))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        FileSystemManager::Name_, 9, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_entries), 
std::move(p_error_code));
  return true;
}

void FileSystemManager_ReadDirectorySync_ProxyToResponder::Run(
    std::vector<::filesystem::mojom::DirectoryEntryPtr> in_entries, ::base::File::Error in_error_code) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFileSystemManager_ReadDirectorySync_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::FileSystemManager_ReadDirectorySync_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->entries)::BaseType::BufferWriter
      entries_writer;
  const mojo::internal::ContainerValidateParams entries_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::filesystem::mojom::DirectoryEntryDataView>>(
      in_entries, buffer, &entries_writer, &entries_validate_params,
      &serialization_context);
  params->entries.Set(
      entries_writer.is_null() ? nullptr : entries_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->entries.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null entries in ");
  mojo::internal::Serialize<::mojo_base::mojom::FileError>(
      in_error_code, &params->error_code);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::FileSystemManager::ReadDirectorySyncCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(FileSystemManager::Name_);
  message.set_method_name("ReadDirectorySync");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool FileSystemManager_ReadDirectorySync_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::FileSystemManager_ReadDirectorySync_ResponseParams_Data* params =
      reinterpret_cast<internal::FileSystemManager_ReadDirectorySync_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  std::vector<::filesystem::mojom::DirectoryEntryPtr> p_entries{};
  ::base::File::Error p_error_code{};
  FileSystemManager_ReadDirectorySync_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadEntries(&p_entries))
    success = false;
  if (!input_data_view.ReadErrorCode(&p_error_code))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        FileSystemManager::Name_, 9, true);
    return false;
  }
  *out_entries_ = std::move(p_entries);
  *out_error_code_ = std::move(p_error_code);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}
class FileSystemManager_WriteSync_ProxyToResponder {
 public:
  static FileSystemManager::WriteSyncCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<FileSystemManager_WriteSync_ProxyToResponder> proxy(
        new FileSystemManager_WriteSync_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&FileSystemManager_WriteSync_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~FileSystemManager_WriteSync_ProxyToResponder() {
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
  FileSystemManager_WriteSync_ProxyToResponder(
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
        << "FileSystemManager::WriteSyncCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      int64_t in_byte_count, ::base::File::Error in_error_code);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(FileSystemManager_WriteSync_ProxyToResponder);
};

bool FileSystemManager_WriteSync_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::FileSystemManager::WriteSyncCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::FileSystemManager_WriteSync_ResponseParams_Data* params =
      reinterpret_cast<
          internal::FileSystemManager_WriteSync_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  int64_t p_byte_count{};
  ::base::File::Error p_error_code{};
  FileSystemManager_WriteSync_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_byte_count = input_data_view.byte_count();
  if (!input_data_view.ReadErrorCode(&p_error_code))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        FileSystemManager::Name_, 11, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_byte_count), 
std::move(p_error_code));
  return true;
}

void FileSystemManager_WriteSync_ProxyToResponder::Run(
    int64_t in_byte_count, ::base::File::Error in_error_code) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFileSystemManager_WriteSync_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::FileSystemManager_WriteSync_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->byte_count = in_byte_count;
  mojo::internal::Serialize<::mojo_base::mojom::FileError>(
      in_error_code, &params->error_code);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::FileSystemManager::WriteSyncCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(FileSystemManager::Name_);
  message.set_method_name("WriteSync");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool FileSystemManager_WriteSync_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::FileSystemManager_WriteSync_ResponseParams_Data* params =
      reinterpret_cast<internal::FileSystemManager_WriteSync_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  int64_t p_byte_count{};
  ::base::File::Error p_error_code{};
  FileSystemManager_WriteSync_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_byte_count = input_data_view.byte_count();
  if (!input_data_view.ReadErrorCode(&p_error_code))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        FileSystemManager::Name_, 11, true);
    return false;
  }
  *out_byte_count_ = std::move(p_byte_count);
  *out_error_code_ = std::move(p_error_code);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}
class FileSystemManager_Truncate_ProxyToResponder {
 public:
  static FileSystemManager::TruncateCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<FileSystemManager_Truncate_ProxyToResponder> proxy(
        new FileSystemManager_Truncate_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&FileSystemManager_Truncate_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~FileSystemManager_Truncate_ProxyToResponder() {
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
  FileSystemManager_Truncate_ProxyToResponder(
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
        << "FileSystemManager::TruncateCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      ::base::File::Error in_error_code);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(FileSystemManager_Truncate_ProxyToResponder);
};

bool FileSystemManager_Truncate_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::FileSystemManager::TruncateCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::FileSystemManager_Truncate_ResponseParams_Data* params =
      reinterpret_cast<
          internal::FileSystemManager_Truncate_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::base::File::Error p_error_code{};
  FileSystemManager_Truncate_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadErrorCode(&p_error_code))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        FileSystemManager::Name_, 12, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_error_code));
  return true;
}

void FileSystemManager_Truncate_ProxyToResponder::Run(
    ::base::File::Error in_error_code) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFileSystemManager_Truncate_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::FileSystemManager_Truncate_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::mojo_base::mojom::FileError>(
      in_error_code, &params->error_code);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::FileSystemManager::TruncateCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(FileSystemManager::Name_);
  message.set_method_name("Truncate");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class FileSystemManager_TruncateSync_ProxyToResponder {
 public:
  static FileSystemManager::TruncateSyncCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<FileSystemManager_TruncateSync_ProxyToResponder> proxy(
        new FileSystemManager_TruncateSync_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&FileSystemManager_TruncateSync_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~FileSystemManager_TruncateSync_ProxyToResponder() {
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
  FileSystemManager_TruncateSync_ProxyToResponder(
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
        << "FileSystemManager::TruncateSyncCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      ::base::File::Error in_error_code);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(FileSystemManager_TruncateSync_ProxyToResponder);
};

bool FileSystemManager_TruncateSync_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::FileSystemManager::TruncateSyncCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::FileSystemManager_TruncateSync_ResponseParams_Data* params =
      reinterpret_cast<
          internal::FileSystemManager_TruncateSync_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::base::File::Error p_error_code{};
  FileSystemManager_TruncateSync_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadErrorCode(&p_error_code))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        FileSystemManager::Name_, 13, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_error_code));
  return true;
}

void FileSystemManager_TruncateSync_ProxyToResponder::Run(
    ::base::File::Error in_error_code) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFileSystemManager_TruncateSync_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::FileSystemManager_TruncateSync_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::mojo_base::mojom::FileError>(
      in_error_code, &params->error_code);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::FileSystemManager::TruncateSyncCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(FileSystemManager::Name_);
  message.set_method_name("TruncateSync");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool FileSystemManager_TruncateSync_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::FileSystemManager_TruncateSync_ResponseParams_Data* params =
      reinterpret_cast<internal::FileSystemManager_TruncateSync_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::base::File::Error p_error_code{};
  FileSystemManager_TruncateSync_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadErrorCode(&p_error_code))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        FileSystemManager::Name_, 13, true);
    return false;
  }
  *out_error_code_ = std::move(p_error_code);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}
class FileSystemManager_TouchFile_ProxyToResponder {
 public:
  static FileSystemManager::TouchFileCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<FileSystemManager_TouchFile_ProxyToResponder> proxy(
        new FileSystemManager_TouchFile_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&FileSystemManager_TouchFile_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~FileSystemManager_TouchFile_ProxyToResponder() {
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
  FileSystemManager_TouchFile_ProxyToResponder(
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
        << "FileSystemManager::TouchFileCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      ::base::File::Error in_error_code);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(FileSystemManager_TouchFile_ProxyToResponder);
};

bool FileSystemManager_TouchFile_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::FileSystemManager::TouchFileCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::FileSystemManager_TouchFile_ResponseParams_Data* params =
      reinterpret_cast<
          internal::FileSystemManager_TouchFile_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::base::File::Error p_error_code{};
  FileSystemManager_TouchFile_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadErrorCode(&p_error_code))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        FileSystemManager::Name_, 14, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_error_code));
  return true;
}

void FileSystemManager_TouchFile_ProxyToResponder::Run(
    ::base::File::Error in_error_code) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFileSystemManager_TouchFile_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::FileSystemManager_TouchFile_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::mojo_base::mojom::FileError>(
      in_error_code, &params->error_code);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::FileSystemManager::TouchFileCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(FileSystemManager::Name_);
  message.set_method_name("TouchFile");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class FileSystemManager_CreateSnapshotFile_ProxyToResponder {
 public:
  static FileSystemManager::CreateSnapshotFileCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<FileSystemManager_CreateSnapshotFile_ProxyToResponder> proxy(
        new FileSystemManager_CreateSnapshotFile_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&FileSystemManager_CreateSnapshotFile_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~FileSystemManager_CreateSnapshotFile_ProxyToResponder() {
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
  FileSystemManager_CreateSnapshotFile_ProxyToResponder(
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
        << "FileSystemManager::CreateSnapshotFileCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      const base::File::Info& in_file_info, const base::FilePath& in_platform_path, ::base::File::Error in_error_code, ReceivedSnapshotListenerPtr in_snapshot_listener);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(FileSystemManager_CreateSnapshotFile_ProxyToResponder);
};

bool FileSystemManager_CreateSnapshotFile_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::FileSystemManager::CreateSnapshotFileCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::FileSystemManager_CreateSnapshotFile_ResponseParams_Data* params =
      reinterpret_cast<
          internal::FileSystemManager_CreateSnapshotFile_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  base::File::Info p_file_info{};
  base::FilePath p_platform_path{};
  ::base::File::Error p_error_code{};
  ReceivedSnapshotListenerPtr p_snapshot_listener{};
  FileSystemManager_CreateSnapshotFile_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadFileInfo(&p_file_info))
    success = false;
  if (!input_data_view.ReadPlatformPath(&p_platform_path))
    success = false;
  if (!input_data_view.ReadErrorCode(&p_error_code))
    success = false;
  p_snapshot_listener =
      input_data_view.TakeSnapshotListener<decltype(p_snapshot_listener)>();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        FileSystemManager::Name_, 15, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_file_info), 
std::move(p_platform_path), 
std::move(p_error_code), 
std::move(p_snapshot_listener));
  return true;
}

void FileSystemManager_CreateSnapshotFile_ProxyToResponder::Run(
    const base::File::Info& in_file_info, const base::FilePath& in_platform_path, ::base::File::Error in_error_code, ReceivedSnapshotListenerPtr in_snapshot_listener) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFileSystemManager_CreateSnapshotFile_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::FileSystemManager_CreateSnapshotFile_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->file_info)::BaseType::BufferWriter
      file_info_writer;
  mojo::internal::Serialize<::mojo_base::mojom::FileInfoDataView>(
      in_file_info, buffer, &file_info_writer, &serialization_context);
  params->file_info.Set(
      file_info_writer.is_null() ? nullptr : file_info_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->file_info.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null file_info in ");
  typename decltype(params->platform_path)::BaseType::BufferWriter
      platform_path_writer;
  mojo::internal::Serialize<::mojo_base::mojom::FilePathDataView>(
      in_platform_path, buffer, &platform_path_writer, &serialization_context);
  params->platform_path.Set(
      platform_path_writer.is_null() ? nullptr : platform_path_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->platform_path.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null platform_path in ");
  mojo::internal::Serialize<::mojo_base::mojom::FileError>(
      in_error_code, &params->error_code);
  mojo::internal::Serialize<::blink::mojom::ReceivedSnapshotListenerPtrDataView>(
      in_snapshot_listener, &params->snapshot_listener, &serialization_context);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::FileSystemManager::CreateSnapshotFileCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(FileSystemManager::Name_);
  message.set_method_name("CreateSnapshotFile");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool FileSystemManager_CreateSnapshotFile_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::FileSystemManager_CreateSnapshotFile_ResponseParams_Data* params =
      reinterpret_cast<internal::FileSystemManager_CreateSnapshotFile_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  base::File::Info p_file_info{};
  base::FilePath p_platform_path{};
  ::base::File::Error p_error_code{};
  ReceivedSnapshotListenerPtr p_snapshot_listener{};
  FileSystemManager_CreateSnapshotFile_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadFileInfo(&p_file_info))
    success = false;
  if (!input_data_view.ReadPlatformPath(&p_platform_path))
    success = false;
  if (!input_data_view.ReadErrorCode(&p_error_code))
    success = false;
  p_snapshot_listener =
      input_data_view.TakeSnapshotListener<decltype(p_snapshot_listener)>();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        FileSystemManager::Name_, 15, true);
    return false;
  }
  *out_file_info_ = std::move(p_file_info);
  *out_platform_path_ = std::move(p_platform_path);
  *out_error_code_ = std::move(p_error_code);
  *out_snapshot_listener_ = std::move(p_snapshot_listener);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}
class FileSystemManager_GetPlatformPath_ProxyToResponder {
 public:
  static FileSystemManager::GetPlatformPathCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<FileSystemManager_GetPlatformPath_ProxyToResponder> proxy(
        new FileSystemManager_GetPlatformPath_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&FileSystemManager_GetPlatformPath_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~FileSystemManager_GetPlatformPath_ProxyToResponder() {
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
  FileSystemManager_GetPlatformPath_ProxyToResponder(
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
        << "FileSystemManager::GetPlatformPathCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      const base::FilePath& in_platform_path);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(FileSystemManager_GetPlatformPath_ProxyToResponder);
};

bool FileSystemManager_GetPlatformPath_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::FileSystemManager::GetPlatformPathCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::FileSystemManager_GetPlatformPath_ResponseParams_Data* params =
      reinterpret_cast<
          internal::FileSystemManager_GetPlatformPath_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  base::FilePath p_platform_path{};
  FileSystemManager_GetPlatformPath_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadPlatformPath(&p_platform_path))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        FileSystemManager::Name_, 16, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_platform_path));
  return true;
}

void FileSystemManager_GetPlatformPath_ProxyToResponder::Run(
    const base::FilePath& in_platform_path) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFileSystemManager_GetPlatformPath_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::FileSystemManager_GetPlatformPath_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->platform_path)::BaseType::BufferWriter
      platform_path_writer;
  mojo::internal::Serialize<::mojo_base::mojom::FilePathDataView>(
      in_platform_path, buffer, &platform_path_writer, &serialization_context);
  params->platform_path.Set(
      platform_path_writer.is_null() ? nullptr : platform_path_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->platform_path.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null platform_path in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::FileSystemManager::GetPlatformPathCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(FileSystemManager::Name_);
  message.set_method_name("GetPlatformPath");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool FileSystemManager_GetPlatformPath_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::FileSystemManager_GetPlatformPath_ResponseParams_Data* params =
      reinterpret_cast<internal::FileSystemManager_GetPlatformPath_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  base::FilePath p_platform_path{};
  FileSystemManager_GetPlatformPath_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadPlatformPath(&p_platform_path))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        FileSystemManager::Name_, 16, true);
    return false;
  }
  *out_platform_path_ = std::move(p_platform_path);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}

// static
bool FileSystemManagerStubDispatch::Accept(
    FileSystemManager* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kFileSystemManager_Open_Name: {
      break;
    }
    case internal::kFileSystemManager_ResolveURL_Name: {
      break;
    }
    case internal::kFileSystemManager_Move_Name: {
      break;
    }
    case internal::kFileSystemManager_Copy_Name: {
      break;
    }
    case internal::kFileSystemManager_Remove_Name: {
      break;
    }
    case internal::kFileSystemManager_ReadMetadata_Name: {
      break;
    }
    case internal::kFileSystemManager_Create_Name: {
      break;
    }
    case internal::kFileSystemManager_Exists_Name: {
      break;
    }
    case internal::kFileSystemManager_ReadDirectory_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::FileSystemManager::ReadDirectory",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::FileSystemManager_ReadDirectory_Params_Data* params =
          reinterpret_cast<internal::FileSystemManager_ReadDirectory_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      GURL p_path{};
      FileSystemOperationListenerPtr p_listener{};
      FileSystemManager_ReadDirectory_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadPath(&p_path))
        success = false;
      p_listener =
          input_data_view.TakeListener<decltype(p_listener)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            FileSystemManager::Name_, 8, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->ReadDirectory(
std::move(p_path), 
std::move(p_listener));
      return true;
    }
    case internal::kFileSystemManager_ReadDirectorySync_Name: {
      break;
    }
    case internal::kFileSystemManager_Write_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::FileSystemManager::Write",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::FileSystemManager_Write_Params_Data* params =
          reinterpret_cast<internal::FileSystemManager_Write_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      GURL p_file_path{};
      std::string p_blob_uuid{};
      int64_t p_position{};
      FileSystemCancellableOperationRequest p_op_request{};
      FileSystemOperationListenerPtr p_listener{};
      FileSystemManager_Write_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadFilePath(&p_file_path))
        success = false;
      if (!input_data_view.ReadBlobUuid(&p_blob_uuid))
        success = false;
      p_position = input_data_view.position();
      p_op_request =
          input_data_view.TakeOpRequest<decltype(p_op_request)>();
      p_listener =
          input_data_view.TakeListener<decltype(p_listener)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            FileSystemManager::Name_, 10, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Write(
std::move(p_file_path), 
std::move(p_blob_uuid), 
std::move(p_position), 
std::move(p_op_request), 
std::move(p_listener));
      return true;
    }
    case internal::kFileSystemManager_WriteSync_Name: {
      break;
    }
    case internal::kFileSystemManager_Truncate_Name: {
      break;
    }
    case internal::kFileSystemManager_TruncateSync_Name: {
      break;
    }
    case internal::kFileSystemManager_TouchFile_Name: {
      break;
    }
    case internal::kFileSystemManager_CreateSnapshotFile_Name: {
      break;
    }
    case internal::kFileSystemManager_GetPlatformPath_Name: {
      break;
    }
  }
  return false;
}

// static
bool FileSystemManagerStubDispatch::AcceptWithResponder(
    FileSystemManager* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kFileSystemManager_Open_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::FileSystemManager::Open",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::FileSystemManager_Open_Params_Data* params =
          reinterpret_cast<
              internal::FileSystemManager_Open_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      url::Origin p_origin{};
      FileSystemType p_file_system_type{};
      FileSystemManager_Open_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadOrigin(&p_origin))
        success = false;
      if (!input_data_view.ReadFileSystemType(&p_file_system_type))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            FileSystemManager::Name_, 0, false);
        return false;
      }
      FileSystemManager::OpenCallback callback =
          FileSystemManager_Open_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Open(
std::move(p_origin), 
std::move(p_file_system_type), std::move(callback));
      return true;
    }
    case internal::kFileSystemManager_ResolveURL_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::FileSystemManager::ResolveURL",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::FileSystemManager_ResolveURL_Params_Data* params =
          reinterpret_cast<
              internal::FileSystemManager_ResolveURL_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      GURL p_filesystem_url{};
      FileSystemManager_ResolveURL_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadFilesystemUrl(&p_filesystem_url))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            FileSystemManager::Name_, 1, false);
        return false;
      }
      FileSystemManager::ResolveURLCallback callback =
          FileSystemManager_ResolveURL_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->ResolveURL(
std::move(p_filesystem_url), std::move(callback));
      return true;
    }
    case internal::kFileSystemManager_Move_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::FileSystemManager::Move",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::FileSystemManager_Move_Params_Data* params =
          reinterpret_cast<
              internal::FileSystemManager_Move_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      GURL p_src_path{};
      GURL p_dest_path{};
      FileSystemManager_Move_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadSrcPath(&p_src_path))
        success = false;
      if (!input_data_view.ReadDestPath(&p_dest_path))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            FileSystemManager::Name_, 2, false);
        return false;
      }
      FileSystemManager::MoveCallback callback =
          FileSystemManager_Move_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Move(
std::move(p_src_path), 
std::move(p_dest_path), std::move(callback));
      return true;
    }
    case internal::kFileSystemManager_Copy_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::FileSystemManager::Copy",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::FileSystemManager_Copy_Params_Data* params =
          reinterpret_cast<
              internal::FileSystemManager_Copy_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      GURL p_src_path{};
      GURL p_dest_path{};
      FileSystemManager_Copy_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadSrcPath(&p_src_path))
        success = false;
      if (!input_data_view.ReadDestPath(&p_dest_path))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            FileSystemManager::Name_, 3, false);
        return false;
      }
      FileSystemManager::CopyCallback callback =
          FileSystemManager_Copy_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Copy(
std::move(p_src_path), 
std::move(p_dest_path), std::move(callback));
      return true;
    }
    case internal::kFileSystemManager_Remove_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::FileSystemManager::Remove",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::FileSystemManager_Remove_Params_Data* params =
          reinterpret_cast<
              internal::FileSystemManager_Remove_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      GURL p_path{};
      bool p_recursive{};
      FileSystemManager_Remove_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadPath(&p_path))
        success = false;
      p_recursive = input_data_view.recursive();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            FileSystemManager::Name_, 4, false);
        return false;
      }
      FileSystemManager::RemoveCallback callback =
          FileSystemManager_Remove_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Remove(
std::move(p_path), 
std::move(p_recursive), std::move(callback));
      return true;
    }
    case internal::kFileSystemManager_ReadMetadata_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::FileSystemManager::ReadMetadata",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::FileSystemManager_ReadMetadata_Params_Data* params =
          reinterpret_cast<
              internal::FileSystemManager_ReadMetadata_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      GURL p_path{};
      FileSystemManager_ReadMetadata_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadPath(&p_path))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            FileSystemManager::Name_, 5, false);
        return false;
      }
      FileSystemManager::ReadMetadataCallback callback =
          FileSystemManager_ReadMetadata_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->ReadMetadata(
std::move(p_path), std::move(callback));
      return true;
    }
    case internal::kFileSystemManager_Create_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::FileSystemManager::Create",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::FileSystemManager_Create_Params_Data* params =
          reinterpret_cast<
              internal::FileSystemManager_Create_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      GURL p_path{};
      bool p_exclusive{};
      bool p_is_directory{};
      bool p_recursive{};
      FileSystemManager_Create_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadPath(&p_path))
        success = false;
      p_exclusive = input_data_view.exclusive();
      p_is_directory = input_data_view.is_directory();
      p_recursive = input_data_view.recursive();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            FileSystemManager::Name_, 6, false);
        return false;
      }
      FileSystemManager::CreateCallback callback =
          FileSystemManager_Create_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Create(
std::move(p_path), 
std::move(p_exclusive), 
std::move(p_is_directory), 
std::move(p_recursive), std::move(callback));
      return true;
    }
    case internal::kFileSystemManager_Exists_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::FileSystemManager::Exists",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::FileSystemManager_Exists_Params_Data* params =
          reinterpret_cast<
              internal::FileSystemManager_Exists_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      GURL p_path{};
      bool p_is_directory{};
      FileSystemManager_Exists_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadPath(&p_path))
        success = false;
      p_is_directory = input_data_view.is_directory();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            FileSystemManager::Name_, 7, false);
        return false;
      }
      FileSystemManager::ExistsCallback callback =
          FileSystemManager_Exists_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Exists(
std::move(p_path), 
std::move(p_is_directory), std::move(callback));
      return true;
    }
    case internal::kFileSystemManager_ReadDirectory_Name: {
      break;
    }
    case internal::kFileSystemManager_ReadDirectorySync_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::FileSystemManager::ReadDirectorySync",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::FileSystemManager_ReadDirectorySync_Params_Data* params =
          reinterpret_cast<
              internal::FileSystemManager_ReadDirectorySync_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      GURL p_path{};
      FileSystemManager_ReadDirectorySync_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadPath(&p_path))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            FileSystemManager::Name_, 9, false);
        return false;
      }
      FileSystemManager::ReadDirectorySyncCallback callback =
          FileSystemManager_ReadDirectorySync_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->ReadDirectorySync(
std::move(p_path), std::move(callback));
      return true;
    }
    case internal::kFileSystemManager_Write_Name: {
      break;
    }
    case internal::kFileSystemManager_WriteSync_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::FileSystemManager::WriteSync",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::FileSystemManager_WriteSync_Params_Data* params =
          reinterpret_cast<
              internal::FileSystemManager_WriteSync_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      GURL p_file_path{};
      std::string p_blob_uuid{};
      int64_t p_position{};
      FileSystemManager_WriteSync_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadFilePath(&p_file_path))
        success = false;
      if (!input_data_view.ReadBlobUuid(&p_blob_uuid))
        success = false;
      p_position = input_data_view.position();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            FileSystemManager::Name_, 11, false);
        return false;
      }
      FileSystemManager::WriteSyncCallback callback =
          FileSystemManager_WriteSync_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->WriteSync(
std::move(p_file_path), 
std::move(p_blob_uuid), 
std::move(p_position), std::move(callback));
      return true;
    }
    case internal::kFileSystemManager_Truncate_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::FileSystemManager::Truncate",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::FileSystemManager_Truncate_Params_Data* params =
          reinterpret_cast<
              internal::FileSystemManager_Truncate_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      GURL p_file_path{};
      int64_t p_length{};
      FileSystemCancellableOperationRequest p_op_request{};
      FileSystemManager_Truncate_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadFilePath(&p_file_path))
        success = false;
      p_length = input_data_view.length();
      p_op_request =
          input_data_view.TakeOpRequest<decltype(p_op_request)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            FileSystemManager::Name_, 12, false);
        return false;
      }
      FileSystemManager::TruncateCallback callback =
          FileSystemManager_Truncate_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Truncate(
std::move(p_file_path), 
std::move(p_length), 
std::move(p_op_request), std::move(callback));
      return true;
    }
    case internal::kFileSystemManager_TruncateSync_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::FileSystemManager::TruncateSync",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::FileSystemManager_TruncateSync_Params_Data* params =
          reinterpret_cast<
              internal::FileSystemManager_TruncateSync_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      GURL p_file_path{};
      int64_t p_length{};
      FileSystemManager_TruncateSync_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadFilePath(&p_file_path))
        success = false;
      p_length = input_data_view.length();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            FileSystemManager::Name_, 13, false);
        return false;
      }
      FileSystemManager::TruncateSyncCallback callback =
          FileSystemManager_TruncateSync_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->TruncateSync(
std::move(p_file_path), 
std::move(p_length), std::move(callback));
      return true;
    }
    case internal::kFileSystemManager_TouchFile_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::FileSystemManager::TouchFile",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::FileSystemManager_TouchFile_Params_Data* params =
          reinterpret_cast<
              internal::FileSystemManager_TouchFile_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      GURL p_path{};
      base::Time p_last_access_time{};
      base::Time p_last_modified_time{};
      FileSystemManager_TouchFile_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadPath(&p_path))
        success = false;
      if (!input_data_view.ReadLastAccessTime(&p_last_access_time))
        success = false;
      if (!input_data_view.ReadLastModifiedTime(&p_last_modified_time))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            FileSystemManager::Name_, 14, false);
        return false;
      }
      FileSystemManager::TouchFileCallback callback =
          FileSystemManager_TouchFile_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->TouchFile(
std::move(p_path), 
std::move(p_last_access_time), 
std::move(p_last_modified_time), std::move(callback));
      return true;
    }
    case internal::kFileSystemManager_CreateSnapshotFile_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::FileSystemManager::CreateSnapshotFile",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::FileSystemManager_CreateSnapshotFile_Params_Data* params =
          reinterpret_cast<
              internal::FileSystemManager_CreateSnapshotFile_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      GURL p_file_path{};
      FileSystemManager_CreateSnapshotFile_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadFilePath(&p_file_path))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            FileSystemManager::Name_, 15, false);
        return false;
      }
      FileSystemManager::CreateSnapshotFileCallback callback =
          FileSystemManager_CreateSnapshotFile_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->CreateSnapshotFile(
std::move(p_file_path), std::move(callback));
      return true;
    }
    case internal::kFileSystemManager_GetPlatformPath_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::FileSystemManager::GetPlatformPath",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::FileSystemManager_GetPlatformPath_Params_Data* params =
          reinterpret_cast<
              internal::FileSystemManager_GetPlatformPath_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      GURL p_file_path{};
      FileSystemManager_GetPlatformPath_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadFilePath(&p_file_path))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            FileSystemManager::Name_, 16, false);
        return false;
      }
      FileSystemManager::GetPlatformPathCallback callback =
          FileSystemManager_GetPlatformPath_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GetPlatformPath(
std::move(p_file_path), std::move(callback));
      return true;
    }
  }
  return false;
}

bool FileSystemManagerRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "FileSystemManager RequestValidator");

  switch (message->header()->name) {
    case internal::kFileSystemManager_Open_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FileSystemManager_Open_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFileSystemManager_ResolveURL_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FileSystemManager_ResolveURL_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFileSystemManager_Move_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FileSystemManager_Move_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFileSystemManager_Copy_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FileSystemManager_Copy_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFileSystemManager_Remove_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FileSystemManager_Remove_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFileSystemManager_ReadMetadata_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FileSystemManager_ReadMetadata_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFileSystemManager_Create_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FileSystemManager_Create_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFileSystemManager_Exists_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FileSystemManager_Exists_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFileSystemManager_ReadDirectory_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FileSystemManager_ReadDirectory_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFileSystemManager_ReadDirectorySync_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FileSystemManager_ReadDirectorySync_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFileSystemManager_Write_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FileSystemManager_Write_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFileSystemManager_WriteSync_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FileSystemManager_WriteSync_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFileSystemManager_Truncate_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FileSystemManager_Truncate_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFileSystemManager_TruncateSync_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FileSystemManager_TruncateSync_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFileSystemManager_TouchFile_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FileSystemManager_TouchFile_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFileSystemManager_CreateSnapshotFile_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FileSystemManager_CreateSnapshotFile_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFileSystemManager_GetPlatformPath_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FileSystemManager_GetPlatformPath_Params_Data>(
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

bool FileSystemManagerResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "FileSystemManager ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kFileSystemManager_Open_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::FileSystemManager_Open_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFileSystemManager_ResolveURL_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::FileSystemManager_ResolveURL_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFileSystemManager_Move_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::FileSystemManager_Move_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFileSystemManager_Copy_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::FileSystemManager_Copy_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFileSystemManager_Remove_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::FileSystemManager_Remove_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFileSystemManager_ReadMetadata_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::FileSystemManager_ReadMetadata_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFileSystemManager_Create_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::FileSystemManager_Create_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFileSystemManager_Exists_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::FileSystemManager_Exists_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFileSystemManager_ReadDirectorySync_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::FileSystemManager_ReadDirectorySync_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFileSystemManager_WriteSync_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::FileSystemManager_WriteSync_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFileSystemManager_Truncate_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::FileSystemManager_Truncate_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFileSystemManager_TruncateSync_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::FileSystemManager_TruncateSync_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFileSystemManager_TouchFile_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::FileSystemManager_TouchFile_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFileSystemManager_CreateSnapshotFile_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::FileSystemManager_CreateSnapshotFile_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFileSystemManager_GetPlatformPath_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::FileSystemManager_GetPlatformPath_ResponseParams_Data>(
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
bool StructTraits<::blink::mojom::FileSystemInfo::DataView, ::blink::mojom::FileSystemInfoPtr>::Read(
    ::blink::mojom::FileSystemInfo::DataView input,
    ::blink::mojom::FileSystemInfoPtr* output) {
  bool success = true;
  ::blink::mojom::FileSystemInfoPtr result(::blink::mojom::FileSystemInfo::New());
  
      if (!input.ReadName(&result->name))
        success = false;
      if (!input.ReadRootUrl(&result->root_url))
        success = false;
      if (!input.ReadMountType(&result->mount_type))
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