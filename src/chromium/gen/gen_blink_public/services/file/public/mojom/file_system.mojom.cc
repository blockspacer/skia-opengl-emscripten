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

#include "services/file/public/mojom/file_system.mojom.h"

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

#include "services/file/public/mojom/file_system.mojom-params-data.h"
#include "services/file/public/mojom/file_system.mojom-shared-message-ids.h"

#include "services/file/public/mojom/file_system.mojom-import-headers.h"


#ifndef SERVICES_FILE_PUBLIC_MOJOM_FILE_SYSTEM_MOJOM_JUMBO_H_
#define SERVICES_FILE_PUBLIC_MOJOM_FILE_SYSTEM_MOJOM_JUMBO_H_
#include "mojo/public/cpp/base/file_error_mojom_traits.h"
#endif
namespace file {
namespace mojom {
const char FileSystem::Name_[] = "file.mojom.FileSystem";

class FileSystem_GetDirectory_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  FileSystem_GetDirectory_ForwardToCallback(
      FileSystem::GetDirectoryCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  FileSystem::GetDirectoryCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(FileSystem_GetDirectory_ForwardToCallback);
};

class FileSystem_GetSubDirectory_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  FileSystem_GetSubDirectory_ForwardToCallback(
      FileSystem::GetSubDirectoryCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  FileSystem::GetSubDirectoryCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(FileSystem_GetSubDirectory_ForwardToCallback);
};

FileSystemProxy::FileSystemProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void FileSystemProxy::GetDirectory(
    ::filesystem::mojom::DirectoryRequest in_dir, GetDirectoryCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::FileSystem::GetDirectory");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFileSystem_GetDirectory_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::file::mojom::internal::FileSystem_GetDirectory_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::filesystem::mojom::DirectoryRequestDataView>(
      in_dir, &params->dir, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->dir),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid dir in FileSystem.GetDirectory request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(FileSystem::Name_);
  message.set_method_name("GetDirectory");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new FileSystem_GetDirectory_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void FileSystemProxy::GetSubDirectory(
    const std::string& in_dir_path, ::filesystem::mojom::DirectoryRequest in_dir, GetSubDirectoryCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::FileSystem::GetSubDirectory");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFileSystem_GetSubDirectory_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::file::mojom::internal::FileSystem_GetSubDirectory_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->dir_path)::BaseType::BufferWriter
      dir_path_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_dir_path, buffer, &dir_path_writer, &serialization_context);
  params->dir_path.Set(
      dir_path_writer.is_null() ? nullptr : dir_path_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->dir_path.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null dir_path in FileSystem.GetSubDirectory request");
  mojo::internal::Serialize<::filesystem::mojom::DirectoryRequestDataView>(
      in_dir, &params->dir, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->dir),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid dir in FileSystem.GetSubDirectory request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(FileSystem::Name_);
  message.set_method_name("GetSubDirectory");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new FileSystem_GetSubDirectory_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class FileSystem_GetDirectory_ProxyToResponder {
 public:
  static FileSystem::GetDirectoryCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<FileSystem_GetDirectory_ProxyToResponder> proxy(
        new FileSystem_GetDirectory_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&FileSystem_GetDirectory_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~FileSystem_GetDirectory_ProxyToResponder() {
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
  FileSystem_GetDirectory_ProxyToResponder(
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
        << "FileSystem::GetDirectoryCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      );

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(FileSystem_GetDirectory_ProxyToResponder);
};

bool FileSystem_GetDirectory_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::FileSystem::GetDirectoryCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::FileSystem_GetDirectory_ResponseParams_Data* params =
      reinterpret_cast<
          internal::FileSystem_GetDirectory_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  FileSystem_GetDirectory_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        FileSystem::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run();
  return true;
}

void FileSystem_GetDirectory_ProxyToResponder::Run(
    ) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFileSystem_GetDirectory_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::file::mojom::internal::FileSystem_GetDirectory_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::FileSystem::GetDirectoryCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(FileSystem::Name_);
  message.set_method_name("GetDirectory");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class FileSystem_GetSubDirectory_ProxyToResponder {
 public:
  static FileSystem::GetSubDirectoryCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<FileSystem_GetSubDirectory_ProxyToResponder> proxy(
        new FileSystem_GetSubDirectory_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&FileSystem_GetSubDirectory_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~FileSystem_GetSubDirectory_ProxyToResponder() {
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
  FileSystem_GetSubDirectory_ProxyToResponder(
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
        << "FileSystem::GetSubDirectoryCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      ::base::File::Error in_err);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(FileSystem_GetSubDirectory_ProxyToResponder);
};

bool FileSystem_GetSubDirectory_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::FileSystem::GetSubDirectoryCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::FileSystem_GetSubDirectory_ResponseParams_Data* params =
      reinterpret_cast<
          internal::FileSystem_GetSubDirectory_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::base::File::Error p_err{};
  FileSystem_GetSubDirectory_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadErr(&p_err))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        FileSystem::Name_, 1, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_err));
  return true;
}

void FileSystem_GetSubDirectory_ProxyToResponder::Run(
    ::base::File::Error in_err) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFileSystem_GetSubDirectory_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::file::mojom::internal::FileSystem_GetSubDirectory_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::mojo_base::mojom::FileError>(
      in_err, &params->err);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::FileSystem::GetSubDirectoryCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(FileSystem::Name_);
  message.set_method_name("GetSubDirectory");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool FileSystemStubDispatch::Accept(
    FileSystem* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kFileSystem_GetDirectory_Name: {
      break;
    }
    case internal::kFileSystem_GetSubDirectory_Name: {
      break;
    }
  }
  return false;
}

// static
bool FileSystemStubDispatch::AcceptWithResponder(
    FileSystem* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kFileSystem_GetDirectory_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::FileSystem::GetDirectory",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::FileSystem_GetDirectory_Params_Data* params =
          reinterpret_cast<
              internal::FileSystem_GetDirectory_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::filesystem::mojom::DirectoryRequest p_dir{};
      FileSystem_GetDirectory_ParamsDataView input_data_view(params, &serialization_context);
      
      p_dir =
          input_data_view.TakeDir<decltype(p_dir)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            FileSystem::Name_, 0, false);
        return false;
      }
      FileSystem::GetDirectoryCallback callback =
          FileSystem_GetDirectory_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GetDirectory(
std::move(p_dir), std::move(callback));
      return true;
    }
    case internal::kFileSystem_GetSubDirectory_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::FileSystem::GetSubDirectory",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::FileSystem_GetSubDirectory_Params_Data* params =
          reinterpret_cast<
              internal::FileSystem_GetSubDirectory_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_dir_path{};
      ::filesystem::mojom::DirectoryRequest p_dir{};
      FileSystem_GetSubDirectory_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadDirPath(&p_dir_path))
        success = false;
      p_dir =
          input_data_view.TakeDir<decltype(p_dir)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            FileSystem::Name_, 1, false);
        return false;
      }
      FileSystem::GetSubDirectoryCallback callback =
          FileSystem_GetSubDirectory_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GetSubDirectory(
std::move(p_dir_path), 
std::move(p_dir), std::move(callback));
      return true;
    }
  }
  return false;
}

bool FileSystemRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "FileSystem RequestValidator");

  switch (message->header()->name) {
    case internal::kFileSystem_GetDirectory_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FileSystem_GetDirectory_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFileSystem_GetSubDirectory_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FileSystem_GetSubDirectory_Params_Data>(
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

bool FileSystemResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "FileSystem ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kFileSystem_GetDirectory_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::FileSystem_GetDirectory_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFileSystem_GetSubDirectory_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::FileSystem_GetSubDirectory_ResponseParams_Data>(
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
}  // namespace file

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif