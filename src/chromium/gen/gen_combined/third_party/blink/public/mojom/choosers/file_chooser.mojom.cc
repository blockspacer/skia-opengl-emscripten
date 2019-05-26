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

#include "third_party/blink/public/mojom/choosers/file_chooser.mojom.h"

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

#include "third_party/blink/public/mojom/choosers/file_chooser.mojom-params-data.h"
#include "third_party/blink/public/mojom/choosers/file_chooser.mojom-shared-message-ids.h"

#include "third_party/blink/public/mojom/choosers/file_chooser.mojom-import-headers.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_CHOOSERS_FILE_CHOOSER_MOJOM_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_CHOOSERS_FILE_CHOOSER_MOJOM_JUMBO_H_
#include "mojo/public/cpp/base/file_path_mojom_traits.h"
#include "mojo/public/cpp/base/string16_mojom_traits.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "url/mojom/url_gurl_mojom_traits.h"
#endif
namespace blink {
namespace mojom {
FileChooserParams::FileChooserParams()
    : mode(FileChooserParams_Mode::kOpen),
      title(),
      default_file_name(),
      selected_files(),
      accept_types(),
      need_local_path(true),
      use_media_capture(false),
      requestor() {}

FileChooserParams::FileChooserParams(
    FileChooserParams::Mode mode_in,
    const base::string16& title_in,
    const base::FilePath& default_file_name_in,
    const std::vector<base::FilePath>& selected_files_in,
    const std::vector<base::string16>& accept_types_in,
    bool need_local_path_in,
    bool use_media_capture_in,
    const GURL& requestor_in)
    : mode(std::move(mode_in)),
      title(std::move(title_in)),
      default_file_name(std::move(default_file_name_in)),
      selected_files(std::move(selected_files_in)),
      accept_types(std::move(accept_types_in)),
      need_local_path(std::move(need_local_path_in)),
      use_media_capture(std::move(use_media_capture_in)),
      requestor(std::move(requestor_in)) {}

FileChooserParams::~FileChooserParams() = default;

bool FileChooserParams::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
NativeFileInfo::NativeFileInfo()
    : file_path(),
      display_name() {}

NativeFileInfo::NativeFileInfo(
    const base::FilePath& file_path_in,
    const base::string16& display_name_in)
    : file_path(std::move(file_path_in)),
      display_name(std::move(display_name_in)) {}

NativeFileInfo::~NativeFileInfo() = default;

bool NativeFileInfo::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
FileSystemFileInfo::FileSystemFileInfo()
    : url(),
      modification_time(),
      length(0) {}

FileSystemFileInfo::FileSystemFileInfo(
    const GURL& url_in,
    base::Time modification_time_in,
    int64_t length_in)
    : url(std::move(url_in)),
      modification_time(std::move(modification_time_in)),
      length(std::move(length_in)) {}

FileSystemFileInfo::~FileSystemFileInfo() = default;

bool FileSystemFileInfo::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
FileChooserResult::FileChooserResult()
    : files(),
      base_directory() {}

FileChooserResult::FileChooserResult(
    std::vector<FileChooserFileInfoPtr> files_in,
    const base::FilePath& base_directory_in)
    : files(std::move(files_in)),
      base_directory(std::move(base_directory_in)) {}

FileChooserResult::~FileChooserResult() = default;

bool FileChooserResult::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
FileChooserFileInfo::FileChooserFileInfo() : tag_(Tag::NATIVE_FILE) {
  data_.native_file = new NativeFileInfoPtr;
}

FileChooserFileInfo::~FileChooserFileInfo() {
  DestroyActive();
}


void FileChooserFileInfo::set_native_file(
    NativeFileInfoPtr native_file) {
  if (tag_ == Tag::NATIVE_FILE) {
    *(data_.native_file) = std::move(native_file);
  } else {
    DestroyActive();
    tag_ = Tag::NATIVE_FILE;
    data_.native_file = new NativeFileInfoPtr(
        std::move(native_file));
  }
}
void FileChooserFileInfo::set_file_system(
    FileSystemFileInfoPtr file_system) {
  if (tag_ == Tag::FILE_SYSTEM) {
    *(data_.file_system) = std::move(file_system);
  } else {
    DestroyActive();
    tag_ = Tag::FILE_SYSTEM;
    data_.file_system = new FileSystemFileInfoPtr(
        std::move(file_system));
  }
}

void FileChooserFileInfo::DestroyActive() {
  switch (tag_) {

    case Tag::NATIVE_FILE:

      delete data_.native_file;
      break;
    case Tag::FILE_SYSTEM:

      delete data_.file_system;
      break;
  }
}

bool FileChooserFileInfo::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context, false);
}
const char FileChooser::Name_[] = "blink.mojom.FileChooser";

class FileChooser_OpenFileChooser_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  FileChooser_OpenFileChooser_ForwardToCallback(
      FileChooser::OpenFileChooserCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  FileChooser::OpenFileChooserCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(FileChooser_OpenFileChooser_ForwardToCallback);
};

class FileChooser_EnumerateChosenDirectory_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  FileChooser_EnumerateChosenDirectory_ForwardToCallback(
      FileChooser::EnumerateChosenDirectoryCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  FileChooser::EnumerateChosenDirectoryCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(FileChooser_EnumerateChosenDirectory_ForwardToCallback);
};

FileChooserProxy::FileChooserProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void FileChooserProxy::OpenFileChooser(
    FileChooserParamsPtr in_params, OpenFileChooserCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::FileChooser::OpenFileChooser");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFileChooser_OpenFileChooser_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::FileChooser_OpenFileChooser_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->params)::BaseType::BufferWriter
      params_writer;
  mojo::internal::Serialize<::blink::mojom::FileChooserParamsDataView>(
      in_params, buffer, &params_writer, &serialization_context);
  params->params.Set(
      params_writer.is_null() ? nullptr : params_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->params.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null params in FileChooser.OpenFileChooser request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(FileChooser::Name_);
  message.set_method_name("OpenFileChooser");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new FileChooser_OpenFileChooser_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void FileChooserProxy::EnumerateChosenDirectory(
    const base::FilePath& in_directory_path, EnumerateChosenDirectoryCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::FileChooser::EnumerateChosenDirectory");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFileChooser_EnumerateChosenDirectory_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::FileChooser_EnumerateChosenDirectory_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->directory_path)::BaseType::BufferWriter
      directory_path_writer;
  mojo::internal::Serialize<::mojo_base::mojom::FilePathDataView>(
      in_directory_path, buffer, &directory_path_writer, &serialization_context);
  params->directory_path.Set(
      directory_path_writer.is_null() ? nullptr : directory_path_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->directory_path.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null directory_path in FileChooser.EnumerateChosenDirectory request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(FileChooser::Name_);
  message.set_method_name("EnumerateChosenDirectory");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new FileChooser_EnumerateChosenDirectory_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class FileChooser_OpenFileChooser_ProxyToResponder {
 public:
  static FileChooser::OpenFileChooserCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<FileChooser_OpenFileChooser_ProxyToResponder> proxy(
        new FileChooser_OpenFileChooser_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&FileChooser_OpenFileChooser_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~FileChooser_OpenFileChooser_ProxyToResponder() {
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
  FileChooser_OpenFileChooser_ProxyToResponder(
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
        << "FileChooser::OpenFileChooserCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      FileChooserResultPtr in_result);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(FileChooser_OpenFileChooser_ProxyToResponder);
};

bool FileChooser_OpenFileChooser_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::FileChooser::OpenFileChooserCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::FileChooser_OpenFileChooser_ResponseParams_Data* params =
      reinterpret_cast<
          internal::FileChooser_OpenFileChooser_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  FileChooserResultPtr p_result{};
  FileChooser_OpenFileChooser_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadResult(&p_result))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        FileChooser::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result));
  return true;
}

void FileChooser_OpenFileChooser_ProxyToResponder::Run(
    FileChooserResultPtr in_result) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFileChooser_OpenFileChooser_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::FileChooser_OpenFileChooser_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->result)::BaseType::BufferWriter
      result_writer;
  mojo::internal::Serialize<::blink::mojom::FileChooserResultDataView>(
      in_result, buffer, &result_writer, &serialization_context);
  params->result.Set(
      result_writer.is_null() ? nullptr : result_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::FileChooser::OpenFileChooserCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(FileChooser::Name_);
  message.set_method_name("OpenFileChooser");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class FileChooser_EnumerateChosenDirectory_ProxyToResponder {
 public:
  static FileChooser::EnumerateChosenDirectoryCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<FileChooser_EnumerateChosenDirectory_ProxyToResponder> proxy(
        new FileChooser_EnumerateChosenDirectory_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&FileChooser_EnumerateChosenDirectory_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~FileChooser_EnumerateChosenDirectory_ProxyToResponder() {
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
  FileChooser_EnumerateChosenDirectory_ProxyToResponder(
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
        << "FileChooser::EnumerateChosenDirectoryCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      FileChooserResultPtr in_result);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(FileChooser_EnumerateChosenDirectory_ProxyToResponder);
};

bool FileChooser_EnumerateChosenDirectory_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::FileChooser::EnumerateChosenDirectoryCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::FileChooser_EnumerateChosenDirectory_ResponseParams_Data* params =
      reinterpret_cast<
          internal::FileChooser_EnumerateChosenDirectory_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  FileChooserResultPtr p_result{};
  FileChooser_EnumerateChosenDirectory_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadResult(&p_result))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        FileChooser::Name_, 1, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result));
  return true;
}

void FileChooser_EnumerateChosenDirectory_ProxyToResponder::Run(
    FileChooserResultPtr in_result) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFileChooser_EnumerateChosenDirectory_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::FileChooser_EnumerateChosenDirectory_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->result)::BaseType::BufferWriter
      result_writer;
  mojo::internal::Serialize<::blink::mojom::FileChooserResultDataView>(
      in_result, buffer, &result_writer, &serialization_context);
  params->result.Set(
      result_writer.is_null() ? nullptr : result_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::FileChooser::EnumerateChosenDirectoryCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(FileChooser::Name_);
  message.set_method_name("EnumerateChosenDirectory");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool FileChooserStubDispatch::Accept(
    FileChooser* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kFileChooser_OpenFileChooser_Name: {
      break;
    }
    case internal::kFileChooser_EnumerateChosenDirectory_Name: {
      break;
    }
  }
  return false;
}

// static
bool FileChooserStubDispatch::AcceptWithResponder(
    FileChooser* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kFileChooser_OpenFileChooser_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::FileChooser::OpenFileChooser",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::FileChooser_OpenFileChooser_Params_Data* params =
          reinterpret_cast<
              internal::FileChooser_OpenFileChooser_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      FileChooserParamsPtr p_params{};
      FileChooser_OpenFileChooser_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadParams(&p_params))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            FileChooser::Name_, 0, false);
        return false;
      }
      FileChooser::OpenFileChooserCallback callback =
          FileChooser_OpenFileChooser_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OpenFileChooser(
std::move(p_params), std::move(callback));
      return true;
    }
    case internal::kFileChooser_EnumerateChosenDirectory_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::FileChooser::EnumerateChosenDirectory",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::FileChooser_EnumerateChosenDirectory_Params_Data* params =
          reinterpret_cast<
              internal::FileChooser_EnumerateChosenDirectory_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      base::FilePath p_directory_path{};
      FileChooser_EnumerateChosenDirectory_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadDirectoryPath(&p_directory_path))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            FileChooser::Name_, 1, false);
        return false;
      }
      FileChooser::EnumerateChosenDirectoryCallback callback =
          FileChooser_EnumerateChosenDirectory_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->EnumerateChosenDirectory(
std::move(p_directory_path), std::move(callback));
      return true;
    }
  }
  return false;
}

bool FileChooserRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "FileChooser RequestValidator");

  switch (message->header()->name) {
    case internal::kFileChooser_OpenFileChooser_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FileChooser_OpenFileChooser_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFileChooser_EnumerateChosenDirectory_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FileChooser_EnumerateChosenDirectory_Params_Data>(
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

bool FileChooserResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "FileChooser ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kFileChooser_OpenFileChooser_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::FileChooser_OpenFileChooser_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFileChooser_EnumerateChosenDirectory_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::FileChooser_EnumerateChosenDirectory_ResponseParams_Data>(
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
bool StructTraits<::blink::mojom::FileChooserParams::DataView, ::blink::mojom::FileChooserParamsPtr>::Read(
    ::blink::mojom::FileChooserParams::DataView input,
    ::blink::mojom::FileChooserParamsPtr* output) {
  bool success = true;
  ::blink::mojom::FileChooserParamsPtr result(::blink::mojom::FileChooserParams::New());
  
      if (!input.ReadMode(&result->mode))
        success = false;
      if (!input.ReadTitle(&result->title))
        success = false;
      if (!input.ReadDefaultFileName(&result->default_file_name))
        success = false;
      if (!input.ReadSelectedFiles(&result->selected_files))
        success = false;
      if (!input.ReadAcceptTypes(&result->accept_types))
        success = false;
      result->need_local_path = input.need_local_path();
      result->use_media_capture = input.use_media_capture();
      if (!input.ReadRequestor(&result->requestor))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::blink::mojom::NativeFileInfo::DataView, ::blink::mojom::NativeFileInfoPtr>::Read(
    ::blink::mojom::NativeFileInfo::DataView input,
    ::blink::mojom::NativeFileInfoPtr* output) {
  bool success = true;
  ::blink::mojom::NativeFileInfoPtr result(::blink::mojom::NativeFileInfo::New());
  
      if (!input.ReadFilePath(&result->file_path))
        success = false;
      if (!input.ReadDisplayName(&result->display_name))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::blink::mojom::FileSystemFileInfo::DataView, ::blink::mojom::FileSystemFileInfoPtr>::Read(
    ::blink::mojom::FileSystemFileInfo::DataView input,
    ::blink::mojom::FileSystemFileInfoPtr* output) {
  bool success = true;
  ::blink::mojom::FileSystemFileInfoPtr result(::blink::mojom::FileSystemFileInfo::New());
  
      if (!input.ReadUrl(&result->url))
        success = false;
      if (!input.ReadModificationTime(&result->modification_time))
        success = false;
      result->length = input.length();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::blink::mojom::FileChooserResult::DataView, ::blink::mojom::FileChooserResultPtr>::Read(
    ::blink::mojom::FileChooserResult::DataView input,
    ::blink::mojom::FileChooserResultPtr* output) {
  bool success = true;
  ::blink::mojom::FileChooserResultPtr result(::blink::mojom::FileChooserResult::New());
  
      if (!input.ReadFiles(&result->files))
        success = false;
      if (!input.ReadBaseDirectory(&result->base_directory))
        success = false;
  *output = std::move(result);
  return success;
}

// static
bool UnionTraits<::blink::mojom::FileChooserFileInfo::DataView, ::blink::mojom::FileChooserFileInfoPtr>::Read(
    ::blink::mojom::FileChooserFileInfo::DataView input,
    ::blink::mojom::FileChooserFileInfoPtr* output) {
  using UnionType = ::blink::mojom::FileChooserFileInfo;
  using Tag = UnionType::Tag;

  switch (input.tag()) {
    case Tag::NATIVE_FILE: {
      ::blink::mojom::NativeFileInfoPtr result_native_file;
      if (!input.ReadNativeFile(&result_native_file))
        return false;

      *output = UnionType::NewNativeFile(
          std::move(result_native_file));
      break;
    }
    case Tag::FILE_SYSTEM: {
      ::blink::mojom::FileSystemFileInfoPtr result_file_system;
      if (!input.ReadFileSystem(&result_file_system))
        return false;

      *output = UnionType::NewFileSystem(
          std::move(result_file_system));
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