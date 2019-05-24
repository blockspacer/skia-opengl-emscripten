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

#include "components/services/filesystem/public/interfaces/file_system.mojom-blink.h"

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

#include "components/services/filesystem/public/interfaces/file_system.mojom-params-data.h"
#include "components/services/filesystem/public/interfaces/file_system.mojom-shared-message-ids.h"

#include "components/services/filesystem/public/interfaces/file_system.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef COMPONENTS_SERVICES_FILESYSTEM_PUBLIC_INTERFACES_FILE_SYSTEM_MOJOM_BLINK_JUMBO_H_
#define COMPONENTS_SERVICES_FILESYSTEM_PUBLIC_INTERFACES_FILE_SYSTEM_MOJOM_BLINK_JUMBO_H_
#include "mojo/public/cpp/base/file_error_mojom_traits.h"
#endif
namespace filesystem {
namespace mojom {
namespace blink {
const char FileSystem::Name_[] = "filesystem.mojom.FileSystem";
bool FileSystem::OpenTempDirectory(::filesystem::mojom::blink::DirectoryRequest directory, ::base::File::Error* out_error) {
  NOTREACHED();
  return false;
}
bool FileSystem::OpenPersistentFileSystem(::filesystem::mojom::blink::DirectoryRequest directory, ::base::File::Error* out_error) {
  NOTREACHED();
  return false;
}
class FileSystem_OpenTempDirectory_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  FileSystem_OpenTempDirectory_HandleSyncResponse(
      bool* result, ::base::File::Error* out_error)
      : result_(result), out_error_(out_error) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;
  ::base::File::Error* out_error_;DISALLOW_COPY_AND_ASSIGN(FileSystem_OpenTempDirectory_HandleSyncResponse);
};

class FileSystem_OpenTempDirectory_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  FileSystem_OpenTempDirectory_ForwardToCallback(
      FileSystem::OpenTempDirectoryCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  FileSystem::OpenTempDirectoryCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(FileSystem_OpenTempDirectory_ForwardToCallback);
};
class FileSystem_OpenPersistentFileSystem_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  FileSystem_OpenPersistentFileSystem_HandleSyncResponse(
      bool* result, ::base::File::Error* out_error)
      : result_(result), out_error_(out_error) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;
  ::base::File::Error* out_error_;DISALLOW_COPY_AND_ASSIGN(FileSystem_OpenPersistentFileSystem_HandleSyncResponse);
};

class FileSystem_OpenPersistentFileSystem_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  FileSystem_OpenPersistentFileSystem_ForwardToCallback(
      FileSystem::OpenPersistentFileSystemCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  FileSystem::OpenPersistentFileSystemCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(FileSystem_OpenPersistentFileSystem_ForwardToCallback);
};

FileSystemProxy::FileSystemProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}
bool FileSystemProxy::OpenTempDirectory(
    ::filesystem::mojom::blink::DirectoryRequest param_directory, ::base::File::Error* out_param_error) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::FileSystem::OpenTempDirectory");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFileSystem_OpenTempDirectory_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::filesystem::mojom::internal::FileSystem_OpenTempDirectory_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::filesystem::mojom::DirectoryRequestDataView>(
      param_directory, &params->directory, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->directory),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid directory in FileSystem.OpenTempDirectory request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(FileSystem::Name_);
  message.set_method_name("OpenTempDirectory");
#endif

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new FileSystem_OpenTempDirectory_HandleSyncResponse(
          &result, out_param_error));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void FileSystemProxy::OpenTempDirectory(
    ::filesystem::mojom::blink::DirectoryRequest in_directory, OpenTempDirectoryCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::FileSystem::OpenTempDirectory");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFileSystem_OpenTempDirectory_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::filesystem::mojom::internal::FileSystem_OpenTempDirectory_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::filesystem::mojom::DirectoryRequestDataView>(
      in_directory, &params->directory, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->directory),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid directory in FileSystem.OpenTempDirectory request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(FileSystem::Name_);
  message.set_method_name("OpenTempDirectory");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new FileSystem_OpenTempDirectory_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
bool FileSystemProxy::OpenPersistentFileSystem(
    ::filesystem::mojom::blink::DirectoryRequest param_directory, ::base::File::Error* out_param_error) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::FileSystem::OpenPersistentFileSystem");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFileSystem_OpenPersistentFileSystem_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::filesystem::mojom::internal::FileSystem_OpenPersistentFileSystem_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::filesystem::mojom::DirectoryRequestDataView>(
      param_directory, &params->directory, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->directory),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid directory in FileSystem.OpenPersistentFileSystem request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(FileSystem::Name_);
  message.set_method_name("OpenPersistentFileSystem");
#endif

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new FileSystem_OpenPersistentFileSystem_HandleSyncResponse(
          &result, out_param_error));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void FileSystemProxy::OpenPersistentFileSystem(
    ::filesystem::mojom::blink::DirectoryRequest in_directory, OpenPersistentFileSystemCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::FileSystem::OpenPersistentFileSystem");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFileSystem_OpenPersistentFileSystem_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::filesystem::mojom::internal::FileSystem_OpenPersistentFileSystem_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::filesystem::mojom::DirectoryRequestDataView>(
      in_directory, &params->directory, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->directory),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid directory in FileSystem.OpenPersistentFileSystem request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(FileSystem::Name_);
  message.set_method_name("OpenPersistentFileSystem");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new FileSystem_OpenPersistentFileSystem_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class FileSystem_OpenTempDirectory_ProxyToResponder {
 public:
  static FileSystem::OpenTempDirectoryCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<FileSystem_OpenTempDirectory_ProxyToResponder> proxy(
        new FileSystem_OpenTempDirectory_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&FileSystem_OpenTempDirectory_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~FileSystem_OpenTempDirectory_ProxyToResponder() {
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
  FileSystem_OpenTempDirectory_ProxyToResponder(
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
        << "FileSystem::OpenTempDirectoryCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      ::base::File::Error in_error);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(FileSystem_OpenTempDirectory_ProxyToResponder);
};

bool FileSystem_OpenTempDirectory_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::FileSystem::OpenTempDirectoryCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::FileSystem_OpenTempDirectory_ResponseParams_Data* params =
      reinterpret_cast<
          internal::FileSystem_OpenTempDirectory_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::base::File::Error p_error{};
  FileSystem_OpenTempDirectory_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadError(&p_error))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        FileSystem::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_error));
  return true;
}

void FileSystem_OpenTempDirectory_ProxyToResponder::Run(
    ::base::File::Error in_error) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFileSystem_OpenTempDirectory_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::filesystem::mojom::internal::FileSystem_OpenTempDirectory_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::mojo_base::mojom::FileError>(
      in_error, &params->error);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::FileSystem::OpenTempDirectoryCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(FileSystem::Name_);
  message.set_method_name("OpenTempDirectory");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool FileSystem_OpenTempDirectory_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::FileSystem_OpenTempDirectory_ResponseParams_Data* params =
      reinterpret_cast<internal::FileSystem_OpenTempDirectory_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::base::File::Error p_error{};
  FileSystem_OpenTempDirectory_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadError(&p_error))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        FileSystem::Name_, 0, true);
    return false;
  }
  *out_error_ = std::move(p_error);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}
class FileSystem_OpenPersistentFileSystem_ProxyToResponder {
 public:
  static FileSystem::OpenPersistentFileSystemCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<FileSystem_OpenPersistentFileSystem_ProxyToResponder> proxy(
        new FileSystem_OpenPersistentFileSystem_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&FileSystem_OpenPersistentFileSystem_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~FileSystem_OpenPersistentFileSystem_ProxyToResponder() {
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
  FileSystem_OpenPersistentFileSystem_ProxyToResponder(
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
        << "FileSystem::OpenPersistentFileSystemCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      ::base::File::Error in_error);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(FileSystem_OpenPersistentFileSystem_ProxyToResponder);
};

bool FileSystem_OpenPersistentFileSystem_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::FileSystem::OpenPersistentFileSystemCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::FileSystem_OpenPersistentFileSystem_ResponseParams_Data* params =
      reinterpret_cast<
          internal::FileSystem_OpenPersistentFileSystem_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::base::File::Error p_error{};
  FileSystem_OpenPersistentFileSystem_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadError(&p_error))
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
std::move(p_error));
  return true;
}

void FileSystem_OpenPersistentFileSystem_ProxyToResponder::Run(
    ::base::File::Error in_error) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFileSystem_OpenPersistentFileSystem_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::filesystem::mojom::internal::FileSystem_OpenPersistentFileSystem_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::mojo_base::mojom::FileError>(
      in_error, &params->error);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::FileSystem::OpenPersistentFileSystemCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(FileSystem::Name_);
  message.set_method_name("OpenPersistentFileSystem");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool FileSystem_OpenPersistentFileSystem_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::FileSystem_OpenPersistentFileSystem_ResponseParams_Data* params =
      reinterpret_cast<internal::FileSystem_OpenPersistentFileSystem_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::base::File::Error p_error{};
  FileSystem_OpenPersistentFileSystem_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadError(&p_error))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        FileSystem::Name_, 1, true);
    return false;
  }
  *out_error_ = std::move(p_error);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}

// static
bool FileSystemStubDispatch::Accept(
    FileSystem* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kFileSystem_OpenTempDirectory_Name: {
      break;
    }
    case internal::kFileSystem_OpenPersistentFileSystem_Name: {
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
    case internal::kFileSystem_OpenTempDirectory_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::FileSystem::OpenTempDirectory",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::FileSystem_OpenTempDirectory_Params_Data* params =
          reinterpret_cast<
              internal::FileSystem_OpenTempDirectory_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::filesystem::mojom::blink::DirectoryRequest p_directory{};
      FileSystem_OpenTempDirectory_ParamsDataView input_data_view(params, &serialization_context);
      
      p_directory =
          input_data_view.TakeDirectory<decltype(p_directory)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            FileSystem::Name_, 0, false);
        return false;
      }
      FileSystem::OpenTempDirectoryCallback callback =
          FileSystem_OpenTempDirectory_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OpenTempDirectory(
std::move(p_directory), std::move(callback));
      return true;
    }
    case internal::kFileSystem_OpenPersistentFileSystem_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::FileSystem::OpenPersistentFileSystem",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::FileSystem_OpenPersistentFileSystem_Params_Data* params =
          reinterpret_cast<
              internal::FileSystem_OpenPersistentFileSystem_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::filesystem::mojom::blink::DirectoryRequest p_directory{};
      FileSystem_OpenPersistentFileSystem_ParamsDataView input_data_view(params, &serialization_context);
      
      p_directory =
          input_data_view.TakeDirectory<decltype(p_directory)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            FileSystem::Name_, 1, false);
        return false;
      }
      FileSystem::OpenPersistentFileSystemCallback callback =
          FileSystem_OpenPersistentFileSystem_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OpenPersistentFileSystem(
std::move(p_directory), std::move(callback));
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
    case internal::kFileSystem_OpenTempDirectory_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FileSystem_OpenTempDirectory_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFileSystem_OpenPersistentFileSystem_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FileSystem_OpenPersistentFileSystem_Params_Data>(
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
    case internal::kFileSystem_OpenTempDirectory_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::FileSystem_OpenTempDirectory_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFileSystem_OpenPersistentFileSystem_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::FileSystem_OpenPersistentFileSystem_ResponseParams_Data>(
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
}  // namespace filesystem

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif