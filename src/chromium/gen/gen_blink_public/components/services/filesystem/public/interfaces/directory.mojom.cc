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

#include "components/services/filesystem/public/interfaces/directory.mojom.h"

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

#include "components/services/filesystem/public/interfaces/directory.mojom-params-data.h"
#include "components/services/filesystem/public/interfaces/directory.mojom-shared-message-ids.h"

#include "components/services/filesystem/public/interfaces/directory.mojom-import-headers.h"


#ifndef COMPONENTS_SERVICES_FILESYSTEM_PUBLIC_INTERFACES_DIRECTORY_MOJOM_JUMBO_H_
#define COMPONENTS_SERVICES_FILESYSTEM_PUBLIC_INTERFACES_DIRECTORY_MOJOM_JUMBO_H_
#include "mojo/public/cpp/base/file_error_mojom_traits.h"
#include "mojo/public/cpp/base/file_mojom_traits.h"
#include "mojo/public/cpp/base/file_path_mojom_traits.h"
#endif
namespace filesystem {
namespace mojom {
FileOpenDetails::FileOpenDetails()
    : path(),
      open_flags() {}

FileOpenDetails::FileOpenDetails(
    const std::string& path_in,
    uint32_t open_flags_in)
    : path(std::move(path_in)),
      open_flags(std::move(open_flags_in)) {}

FileOpenDetails::~FileOpenDetails() = default;
size_t FileOpenDetails::Hash(size_t seed) const {
  seed = mojo::internal::Hash(seed, this->path);
  seed = mojo::internal::Hash(seed, this->open_flags);
  return seed;
}

bool FileOpenDetails::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
FileOpenResult::FileOpenResult()
    : path(),
      error(),
      file_handle() {}

FileOpenResult::FileOpenResult(
    const std::string& path_in,
    ::base::File::Error error_in,
    base::File file_handle_in)
    : path(std::move(path_in)),
      error(std::move(error_in)),
      file_handle(std::move(file_handle_in)) {}

FileOpenResult::~FileOpenResult() = default;

bool FileOpenResult::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char Directory::Name_[] = "filesystem.mojom.Directory";
bool Directory::Read(::base::File::Error* out_error, base::Optional<std::vector<::filesystem::mojom::DirectoryEntryPtr>>* out_directory_contents) {
  NOTREACHED();
  return false;
}
bool Directory::OpenFile(const std::string& path, ::filesystem::mojom::FileRequest file, uint32_t open_flags, ::base::File::Error* out_error) {
  NOTREACHED();
  return false;
}
bool Directory::OpenFileHandle(const std::string& path, uint32_t open_flags, ::base::File::Error* out_error, base::File* out_file_handle) {
  NOTREACHED();
  return false;
}
bool Directory::OpenFileHandles(std::vector<FileOpenDetailsPtr> files, std::vector<FileOpenResultPtr>* out_results) {
  NOTREACHED();
  return false;
}
bool Directory::OpenDirectory(const std::string& path, DirectoryRequest directory, uint32_t open_flags, ::base::File::Error* out_error) {
  NOTREACHED();
  return false;
}
bool Directory::Rename(const std::string& path, const std::string& new_path, ::base::File::Error* out_error) {
  NOTREACHED();
  return false;
}
bool Directory::Replace(const std::string& path, const std::string& new_path, ::base::File::Error* out_error) {
  NOTREACHED();
  return false;
}
bool Directory::Delete(const std::string& path, uint32_t delete_flags, ::base::File::Error* out_error) {
  NOTREACHED();
  return false;
}
bool Directory::Exists(const std::string& path, ::base::File::Error* out_error, bool* out_exists) {
  NOTREACHED();
  return false;
}
bool Directory::IsWritable(const std::string& path, ::base::File::Error* out_error, bool* out_is_writable) {
  NOTREACHED();
  return false;
}
bool Directory::Flush(::base::File::Error* out_error) {
  NOTREACHED();
  return false;
}
bool Directory::StatFile(const std::string& path, ::base::File::Error* out_error, ::filesystem::mojom::FileInformationPtr* out_file_information) {
  NOTREACHED();
  return false;
}
bool Directory::ReadEntireFile(const std::string& path, ::base::File::Error* out_error, std::vector<uint8_t>* out_data) {
  NOTREACHED();
  return false;
}
bool Directory::WriteFile(const std::string& path, const std::vector<uint8_t>& data, ::base::File::Error* out_error) {
  NOTREACHED();
  return false;
}
class Directory_Read_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  Directory_Read_HandleSyncResponse(
      bool* result, ::base::File::Error* out_error, base::Optional<std::vector<::filesystem::mojom::DirectoryEntryPtr>>* out_directory_contents)
      : result_(result), out_error_(out_error), out_directory_contents_(out_directory_contents) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;
  ::base::File::Error* out_error_;
  base::Optional<std::vector<::filesystem::mojom::DirectoryEntryPtr>>* out_directory_contents_;DISALLOW_COPY_AND_ASSIGN(Directory_Read_HandleSyncResponse);
};

class Directory_Read_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Directory_Read_ForwardToCallback(
      Directory::ReadCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Directory::ReadCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(Directory_Read_ForwardToCallback);
};
class Directory_OpenFile_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  Directory_OpenFile_HandleSyncResponse(
      bool* result, ::base::File::Error* out_error)
      : result_(result), out_error_(out_error) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;
  ::base::File::Error* out_error_;DISALLOW_COPY_AND_ASSIGN(Directory_OpenFile_HandleSyncResponse);
};

class Directory_OpenFile_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Directory_OpenFile_ForwardToCallback(
      Directory::OpenFileCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Directory::OpenFileCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(Directory_OpenFile_ForwardToCallback);
};
class Directory_OpenFileHandle_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  Directory_OpenFileHandle_HandleSyncResponse(
      bool* result, ::base::File::Error* out_error, base::File* out_file_handle)
      : result_(result), out_error_(out_error), out_file_handle_(out_file_handle) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;
  ::base::File::Error* out_error_;
  base::File* out_file_handle_;DISALLOW_COPY_AND_ASSIGN(Directory_OpenFileHandle_HandleSyncResponse);
};

class Directory_OpenFileHandle_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Directory_OpenFileHandle_ForwardToCallback(
      Directory::OpenFileHandleCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Directory::OpenFileHandleCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(Directory_OpenFileHandle_ForwardToCallback);
};
class Directory_OpenFileHandles_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  Directory_OpenFileHandles_HandleSyncResponse(
      bool* result, std::vector<FileOpenResultPtr>* out_results)
      : result_(result), out_results_(out_results) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;
  std::vector<FileOpenResultPtr>* out_results_;DISALLOW_COPY_AND_ASSIGN(Directory_OpenFileHandles_HandleSyncResponse);
};

class Directory_OpenFileHandles_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Directory_OpenFileHandles_ForwardToCallback(
      Directory::OpenFileHandlesCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Directory::OpenFileHandlesCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(Directory_OpenFileHandles_ForwardToCallback);
};
class Directory_OpenDirectory_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  Directory_OpenDirectory_HandleSyncResponse(
      bool* result, ::base::File::Error* out_error)
      : result_(result), out_error_(out_error) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;
  ::base::File::Error* out_error_;DISALLOW_COPY_AND_ASSIGN(Directory_OpenDirectory_HandleSyncResponse);
};

class Directory_OpenDirectory_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Directory_OpenDirectory_ForwardToCallback(
      Directory::OpenDirectoryCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Directory::OpenDirectoryCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(Directory_OpenDirectory_ForwardToCallback);
};
class Directory_Rename_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  Directory_Rename_HandleSyncResponse(
      bool* result, ::base::File::Error* out_error)
      : result_(result), out_error_(out_error) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;
  ::base::File::Error* out_error_;DISALLOW_COPY_AND_ASSIGN(Directory_Rename_HandleSyncResponse);
};

class Directory_Rename_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Directory_Rename_ForwardToCallback(
      Directory::RenameCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Directory::RenameCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(Directory_Rename_ForwardToCallback);
};
class Directory_Replace_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  Directory_Replace_HandleSyncResponse(
      bool* result, ::base::File::Error* out_error)
      : result_(result), out_error_(out_error) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;
  ::base::File::Error* out_error_;DISALLOW_COPY_AND_ASSIGN(Directory_Replace_HandleSyncResponse);
};

class Directory_Replace_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Directory_Replace_ForwardToCallback(
      Directory::ReplaceCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Directory::ReplaceCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(Directory_Replace_ForwardToCallback);
};
class Directory_Delete_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  Directory_Delete_HandleSyncResponse(
      bool* result, ::base::File::Error* out_error)
      : result_(result), out_error_(out_error) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;
  ::base::File::Error* out_error_;DISALLOW_COPY_AND_ASSIGN(Directory_Delete_HandleSyncResponse);
};

class Directory_Delete_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Directory_Delete_ForwardToCallback(
      Directory::DeleteCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Directory::DeleteCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(Directory_Delete_ForwardToCallback);
};
class Directory_Exists_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  Directory_Exists_HandleSyncResponse(
      bool* result, ::base::File::Error* out_error, bool* out_exists)
      : result_(result), out_error_(out_error), out_exists_(out_exists) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;
  ::base::File::Error* out_error_;
  bool* out_exists_;DISALLOW_COPY_AND_ASSIGN(Directory_Exists_HandleSyncResponse);
};

class Directory_Exists_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Directory_Exists_ForwardToCallback(
      Directory::ExistsCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Directory::ExistsCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(Directory_Exists_ForwardToCallback);
};
class Directory_IsWritable_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  Directory_IsWritable_HandleSyncResponse(
      bool* result, ::base::File::Error* out_error, bool* out_is_writable)
      : result_(result), out_error_(out_error), out_is_writable_(out_is_writable) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;
  ::base::File::Error* out_error_;
  bool* out_is_writable_;DISALLOW_COPY_AND_ASSIGN(Directory_IsWritable_HandleSyncResponse);
};

class Directory_IsWritable_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Directory_IsWritable_ForwardToCallback(
      Directory::IsWritableCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Directory::IsWritableCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(Directory_IsWritable_ForwardToCallback);
};
class Directory_Flush_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  Directory_Flush_HandleSyncResponse(
      bool* result, ::base::File::Error* out_error)
      : result_(result), out_error_(out_error) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;
  ::base::File::Error* out_error_;DISALLOW_COPY_AND_ASSIGN(Directory_Flush_HandleSyncResponse);
};

class Directory_Flush_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Directory_Flush_ForwardToCallback(
      Directory::FlushCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Directory::FlushCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(Directory_Flush_ForwardToCallback);
};
class Directory_StatFile_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  Directory_StatFile_HandleSyncResponse(
      bool* result, ::base::File::Error* out_error, ::filesystem::mojom::FileInformationPtr* out_file_information)
      : result_(result), out_error_(out_error), out_file_information_(out_file_information) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;
  ::base::File::Error* out_error_;
  ::filesystem::mojom::FileInformationPtr* out_file_information_;DISALLOW_COPY_AND_ASSIGN(Directory_StatFile_HandleSyncResponse);
};

class Directory_StatFile_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Directory_StatFile_ForwardToCallback(
      Directory::StatFileCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Directory::StatFileCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(Directory_StatFile_ForwardToCallback);
};
class Directory_ReadEntireFile_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  Directory_ReadEntireFile_HandleSyncResponse(
      bool* result, ::base::File::Error* out_error, std::vector<uint8_t>* out_data)
      : result_(result), out_error_(out_error), out_data_(out_data) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;
  ::base::File::Error* out_error_;
  std::vector<uint8_t>* out_data_;DISALLOW_COPY_AND_ASSIGN(Directory_ReadEntireFile_HandleSyncResponse);
};

class Directory_ReadEntireFile_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Directory_ReadEntireFile_ForwardToCallback(
      Directory::ReadEntireFileCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Directory::ReadEntireFileCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(Directory_ReadEntireFile_ForwardToCallback);
};
class Directory_WriteFile_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  Directory_WriteFile_HandleSyncResponse(
      bool* result, ::base::File::Error* out_error)
      : result_(result), out_error_(out_error) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;
  ::base::File::Error* out_error_;DISALLOW_COPY_AND_ASSIGN(Directory_WriteFile_HandleSyncResponse);
};

class Directory_WriteFile_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Directory_WriteFile_ForwardToCallback(
      Directory::WriteFileCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Directory::WriteFileCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(Directory_WriteFile_ForwardToCallback);
};

DirectoryProxy::DirectoryProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}
bool DirectoryProxy::Read(
    ::base::File::Error* out_param_error, base::Optional<std::vector<::filesystem::mojom::DirectoryEntryPtr>>* out_param_directory_contents) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::Directory::Read");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDirectory_Read_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::filesystem::mojom::internal::Directory_Read_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Directory::Name_);
  message.set_method_name("Read");
#endif

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new Directory_Read_HandleSyncResponse(
          &result, out_param_error, out_param_directory_contents));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void DirectoryProxy::Read(
    ReadCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::Directory::Read");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDirectory_Read_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::filesystem::mojom::internal::Directory_Read_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Directory::Name_);
  message.set_method_name("Read");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new Directory_Read_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
bool DirectoryProxy::OpenFile(
    const std::string& param_path, ::filesystem::mojom::FileRequest param_file, uint32_t param_open_flags, ::base::File::Error* out_param_error) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::Directory::OpenFile");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDirectory_OpenFile_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::filesystem::mojom::internal::Directory_OpenFile_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->path)::BaseType::BufferWriter
      path_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      param_path, buffer, &path_writer, &serialization_context);
  params->path.Set(
      path_writer.is_null() ? nullptr : path_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->path.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null path in Directory.OpenFile request");
  mojo::internal::Serialize<::filesystem::mojom::FileRequestDataView>(
      param_file, &params->file, &serialization_context);
  params->open_flags = param_open_flags;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Directory::Name_);
  message.set_method_name("OpenFile");
#endif

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new Directory_OpenFile_HandleSyncResponse(
          &result, out_param_error));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void DirectoryProxy::OpenFile(
    const std::string& in_path, ::filesystem::mojom::FileRequest in_file, uint32_t in_open_flags, OpenFileCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::Directory::OpenFile");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDirectory_OpenFile_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::filesystem::mojom::internal::Directory_OpenFile_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->path)::BaseType::BufferWriter
      path_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_path, buffer, &path_writer, &serialization_context);
  params->path.Set(
      path_writer.is_null() ? nullptr : path_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->path.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null path in Directory.OpenFile request");
  mojo::internal::Serialize<::filesystem::mojom::FileRequestDataView>(
      in_file, &params->file, &serialization_context);
  params->open_flags = in_open_flags;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Directory::Name_);
  message.set_method_name("OpenFile");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new Directory_OpenFile_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
bool DirectoryProxy::OpenFileHandle(
    const std::string& param_path, uint32_t param_open_flags, ::base::File::Error* out_param_error, base::File* out_param_file_handle) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::Directory::OpenFileHandle");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDirectory_OpenFileHandle_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::filesystem::mojom::internal::Directory_OpenFileHandle_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->path)::BaseType::BufferWriter
      path_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      param_path, buffer, &path_writer, &serialization_context);
  params->path.Set(
      path_writer.is_null() ? nullptr : path_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->path.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null path in Directory.OpenFileHandle request");
  params->open_flags = param_open_flags;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Directory::Name_);
  message.set_method_name("OpenFileHandle");
#endif

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new Directory_OpenFileHandle_HandleSyncResponse(
          &result, out_param_error, out_param_file_handle));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void DirectoryProxy::OpenFileHandle(
    const std::string& in_path, uint32_t in_open_flags, OpenFileHandleCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::Directory::OpenFileHandle");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDirectory_OpenFileHandle_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::filesystem::mojom::internal::Directory_OpenFileHandle_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->path)::BaseType::BufferWriter
      path_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_path, buffer, &path_writer, &serialization_context);
  params->path.Set(
      path_writer.is_null() ? nullptr : path_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->path.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null path in Directory.OpenFileHandle request");
  params->open_flags = in_open_flags;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Directory::Name_);
  message.set_method_name("OpenFileHandle");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new Directory_OpenFileHandle_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
bool DirectoryProxy::OpenFileHandles(
    std::vector<FileOpenDetailsPtr> param_files, std::vector<FileOpenResultPtr>* out_param_results) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::Directory::OpenFileHandles");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDirectory_OpenFileHandles_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::filesystem::mojom::internal::Directory_OpenFileHandles_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->files)::BaseType::BufferWriter
      files_writer;
  const mojo::internal::ContainerValidateParams files_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::filesystem::mojom::FileOpenDetailsDataView>>(
      param_files, buffer, &files_writer, &files_validate_params,
      &serialization_context);
  params->files.Set(
      files_writer.is_null() ? nullptr : files_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->files.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null files in Directory.OpenFileHandles request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Directory::Name_);
  message.set_method_name("OpenFileHandles");
#endif

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new Directory_OpenFileHandles_HandleSyncResponse(
          &result, out_param_results));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void DirectoryProxy::OpenFileHandles(
    std::vector<FileOpenDetailsPtr> in_files, OpenFileHandlesCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::Directory::OpenFileHandles");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDirectory_OpenFileHandles_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::filesystem::mojom::internal::Directory_OpenFileHandles_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->files)::BaseType::BufferWriter
      files_writer;
  const mojo::internal::ContainerValidateParams files_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::filesystem::mojom::FileOpenDetailsDataView>>(
      in_files, buffer, &files_writer, &files_validate_params,
      &serialization_context);
  params->files.Set(
      files_writer.is_null() ? nullptr : files_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->files.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null files in Directory.OpenFileHandles request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Directory::Name_);
  message.set_method_name("OpenFileHandles");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new Directory_OpenFileHandles_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
bool DirectoryProxy::OpenDirectory(
    const std::string& param_path, DirectoryRequest param_directory, uint32_t param_open_flags, ::base::File::Error* out_param_error) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::Directory::OpenDirectory");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDirectory_OpenDirectory_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::filesystem::mojom::internal::Directory_OpenDirectory_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->path)::BaseType::BufferWriter
      path_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      param_path, buffer, &path_writer, &serialization_context);
  params->path.Set(
      path_writer.is_null() ? nullptr : path_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->path.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null path in Directory.OpenDirectory request");
  mojo::internal::Serialize<::filesystem::mojom::DirectoryRequestDataView>(
      param_directory, &params->directory, &serialization_context);
  params->open_flags = param_open_flags;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Directory::Name_);
  message.set_method_name("OpenDirectory");
#endif

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new Directory_OpenDirectory_HandleSyncResponse(
          &result, out_param_error));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void DirectoryProxy::OpenDirectory(
    const std::string& in_path, DirectoryRequest in_directory, uint32_t in_open_flags, OpenDirectoryCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::Directory::OpenDirectory");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDirectory_OpenDirectory_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::filesystem::mojom::internal::Directory_OpenDirectory_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->path)::BaseType::BufferWriter
      path_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_path, buffer, &path_writer, &serialization_context);
  params->path.Set(
      path_writer.is_null() ? nullptr : path_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->path.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null path in Directory.OpenDirectory request");
  mojo::internal::Serialize<::filesystem::mojom::DirectoryRequestDataView>(
      in_directory, &params->directory, &serialization_context);
  params->open_flags = in_open_flags;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Directory::Name_);
  message.set_method_name("OpenDirectory");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new Directory_OpenDirectory_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
bool DirectoryProxy::Rename(
    const std::string& param_path, const std::string& param_new_path, ::base::File::Error* out_param_error) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::Directory::Rename");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDirectory_Rename_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::filesystem::mojom::internal::Directory_Rename_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->path)::BaseType::BufferWriter
      path_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      param_path, buffer, &path_writer, &serialization_context);
  params->path.Set(
      path_writer.is_null() ? nullptr : path_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->path.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null path in Directory.Rename request");
  typename decltype(params->new_path)::BaseType::BufferWriter
      new_path_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      param_new_path, buffer, &new_path_writer, &serialization_context);
  params->new_path.Set(
      new_path_writer.is_null() ? nullptr : new_path_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->new_path.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null new_path in Directory.Rename request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Directory::Name_);
  message.set_method_name("Rename");
#endif

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new Directory_Rename_HandleSyncResponse(
          &result, out_param_error));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void DirectoryProxy::Rename(
    const std::string& in_path, const std::string& in_new_path, RenameCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::Directory::Rename");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDirectory_Rename_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::filesystem::mojom::internal::Directory_Rename_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->path)::BaseType::BufferWriter
      path_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_path, buffer, &path_writer, &serialization_context);
  params->path.Set(
      path_writer.is_null() ? nullptr : path_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->path.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null path in Directory.Rename request");
  typename decltype(params->new_path)::BaseType::BufferWriter
      new_path_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_new_path, buffer, &new_path_writer, &serialization_context);
  params->new_path.Set(
      new_path_writer.is_null() ? nullptr : new_path_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->new_path.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null new_path in Directory.Rename request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Directory::Name_);
  message.set_method_name("Rename");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new Directory_Rename_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
bool DirectoryProxy::Replace(
    const std::string& param_path, const std::string& param_new_path, ::base::File::Error* out_param_error) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::Directory::Replace");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDirectory_Replace_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::filesystem::mojom::internal::Directory_Replace_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->path)::BaseType::BufferWriter
      path_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      param_path, buffer, &path_writer, &serialization_context);
  params->path.Set(
      path_writer.is_null() ? nullptr : path_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->path.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null path in Directory.Replace request");
  typename decltype(params->new_path)::BaseType::BufferWriter
      new_path_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      param_new_path, buffer, &new_path_writer, &serialization_context);
  params->new_path.Set(
      new_path_writer.is_null() ? nullptr : new_path_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->new_path.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null new_path in Directory.Replace request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Directory::Name_);
  message.set_method_name("Replace");
#endif

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new Directory_Replace_HandleSyncResponse(
          &result, out_param_error));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void DirectoryProxy::Replace(
    const std::string& in_path, const std::string& in_new_path, ReplaceCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::Directory::Replace");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDirectory_Replace_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::filesystem::mojom::internal::Directory_Replace_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->path)::BaseType::BufferWriter
      path_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_path, buffer, &path_writer, &serialization_context);
  params->path.Set(
      path_writer.is_null() ? nullptr : path_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->path.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null path in Directory.Replace request");
  typename decltype(params->new_path)::BaseType::BufferWriter
      new_path_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_new_path, buffer, &new_path_writer, &serialization_context);
  params->new_path.Set(
      new_path_writer.is_null() ? nullptr : new_path_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->new_path.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null new_path in Directory.Replace request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Directory::Name_);
  message.set_method_name("Replace");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new Directory_Replace_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
bool DirectoryProxy::Delete(
    const std::string& param_path, uint32_t param_delete_flags, ::base::File::Error* out_param_error) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::Directory::Delete");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDirectory_Delete_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::filesystem::mojom::internal::Directory_Delete_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->path)::BaseType::BufferWriter
      path_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      param_path, buffer, &path_writer, &serialization_context);
  params->path.Set(
      path_writer.is_null() ? nullptr : path_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->path.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null path in Directory.Delete request");
  params->delete_flags = param_delete_flags;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Directory::Name_);
  message.set_method_name("Delete");
#endif

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new Directory_Delete_HandleSyncResponse(
          &result, out_param_error));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void DirectoryProxy::Delete(
    const std::string& in_path, uint32_t in_delete_flags, DeleteCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::Directory::Delete");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDirectory_Delete_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::filesystem::mojom::internal::Directory_Delete_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->path)::BaseType::BufferWriter
      path_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_path, buffer, &path_writer, &serialization_context);
  params->path.Set(
      path_writer.is_null() ? nullptr : path_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->path.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null path in Directory.Delete request");
  params->delete_flags = in_delete_flags;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Directory::Name_);
  message.set_method_name("Delete");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new Directory_Delete_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
bool DirectoryProxy::Exists(
    const std::string& param_path, ::base::File::Error* out_param_error, bool* out_param_exists) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::Directory::Exists");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDirectory_Exists_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::filesystem::mojom::internal::Directory_Exists_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->path)::BaseType::BufferWriter
      path_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      param_path, buffer, &path_writer, &serialization_context);
  params->path.Set(
      path_writer.is_null() ? nullptr : path_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->path.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null path in Directory.Exists request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Directory::Name_);
  message.set_method_name("Exists");
#endif

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new Directory_Exists_HandleSyncResponse(
          &result, out_param_error, out_param_exists));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void DirectoryProxy::Exists(
    const std::string& in_path, ExistsCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::Directory::Exists");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDirectory_Exists_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::filesystem::mojom::internal::Directory_Exists_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->path)::BaseType::BufferWriter
      path_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_path, buffer, &path_writer, &serialization_context);
  params->path.Set(
      path_writer.is_null() ? nullptr : path_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->path.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null path in Directory.Exists request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Directory::Name_);
  message.set_method_name("Exists");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new Directory_Exists_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
bool DirectoryProxy::IsWritable(
    const std::string& param_path, ::base::File::Error* out_param_error, bool* out_param_is_writable) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::Directory::IsWritable");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDirectory_IsWritable_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::filesystem::mojom::internal::Directory_IsWritable_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->path)::BaseType::BufferWriter
      path_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      param_path, buffer, &path_writer, &serialization_context);
  params->path.Set(
      path_writer.is_null() ? nullptr : path_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->path.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null path in Directory.IsWritable request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Directory::Name_);
  message.set_method_name("IsWritable");
#endif

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new Directory_IsWritable_HandleSyncResponse(
          &result, out_param_error, out_param_is_writable));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void DirectoryProxy::IsWritable(
    const std::string& in_path, IsWritableCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::Directory::IsWritable");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDirectory_IsWritable_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::filesystem::mojom::internal::Directory_IsWritable_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->path)::BaseType::BufferWriter
      path_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_path, buffer, &path_writer, &serialization_context);
  params->path.Set(
      path_writer.is_null() ? nullptr : path_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->path.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null path in Directory.IsWritable request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Directory::Name_);
  message.set_method_name("IsWritable");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new Directory_IsWritable_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
bool DirectoryProxy::Flush(
    ::base::File::Error* out_param_error) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::Directory::Flush");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDirectory_Flush_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::filesystem::mojom::internal::Directory_Flush_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Directory::Name_);
  message.set_method_name("Flush");
#endif

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new Directory_Flush_HandleSyncResponse(
          &result, out_param_error));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void DirectoryProxy::Flush(
    FlushCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::Directory::Flush");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDirectory_Flush_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::filesystem::mojom::internal::Directory_Flush_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Directory::Name_);
  message.set_method_name("Flush");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new Directory_Flush_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
bool DirectoryProxy::StatFile(
    const std::string& param_path, ::base::File::Error* out_param_error, ::filesystem::mojom::FileInformationPtr* out_param_file_information) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::Directory::StatFile");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDirectory_StatFile_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::filesystem::mojom::internal::Directory_StatFile_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->path)::BaseType::BufferWriter
      path_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      param_path, buffer, &path_writer, &serialization_context);
  params->path.Set(
      path_writer.is_null() ? nullptr : path_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->path.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null path in Directory.StatFile request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Directory::Name_);
  message.set_method_name("StatFile");
#endif

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new Directory_StatFile_HandleSyncResponse(
          &result, out_param_error, out_param_file_information));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void DirectoryProxy::StatFile(
    const std::string& in_path, StatFileCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::Directory::StatFile");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDirectory_StatFile_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::filesystem::mojom::internal::Directory_StatFile_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->path)::BaseType::BufferWriter
      path_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_path, buffer, &path_writer, &serialization_context);
  params->path.Set(
      path_writer.is_null() ? nullptr : path_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->path.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null path in Directory.StatFile request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Directory::Name_);
  message.set_method_name("StatFile");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new Directory_StatFile_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void DirectoryProxy::Clone(
    DirectoryRequest in_directory) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::Directory::Clone");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDirectory_Clone_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::filesystem::mojom::internal::Directory_Clone_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::filesystem::mojom::DirectoryRequestDataView>(
      in_directory, &params->directory, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->directory),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid directory in Directory.Clone request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Directory::Name_);
  message.set_method_name("Clone");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
bool DirectoryProxy::ReadEntireFile(
    const std::string& param_path, ::base::File::Error* out_param_error, std::vector<uint8_t>* out_param_data) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::Directory::ReadEntireFile");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDirectory_ReadEntireFile_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::filesystem::mojom::internal::Directory_ReadEntireFile_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->path)::BaseType::BufferWriter
      path_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      param_path, buffer, &path_writer, &serialization_context);
  params->path.Set(
      path_writer.is_null() ? nullptr : path_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->path.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null path in Directory.ReadEntireFile request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Directory::Name_);
  message.set_method_name("ReadEntireFile");
#endif

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new Directory_ReadEntireFile_HandleSyncResponse(
          &result, out_param_error, out_param_data));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void DirectoryProxy::ReadEntireFile(
    const std::string& in_path, ReadEntireFileCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::Directory::ReadEntireFile");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDirectory_ReadEntireFile_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::filesystem::mojom::internal::Directory_ReadEntireFile_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->path)::BaseType::BufferWriter
      path_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_path, buffer, &path_writer, &serialization_context);
  params->path.Set(
      path_writer.is_null() ? nullptr : path_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->path.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null path in Directory.ReadEntireFile request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Directory::Name_);
  message.set_method_name("ReadEntireFile");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new Directory_ReadEntireFile_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
bool DirectoryProxy::WriteFile(
    const std::string& param_path, const std::vector<uint8_t>& param_data, ::base::File::Error* out_param_error) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::Directory::WriteFile");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDirectory_WriteFile_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::filesystem::mojom::internal::Directory_WriteFile_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->path)::BaseType::BufferWriter
      path_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      param_path, buffer, &path_writer, &serialization_context);
  params->path.Set(
      path_writer.is_null() ? nullptr : path_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->path.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null path in Directory.WriteFile request");
  typename decltype(params->data)::BaseType::BufferWriter
      data_writer;
  const mojo::internal::ContainerValidateParams data_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      param_data, buffer, &data_writer, &data_validate_params,
      &serialization_context);
  params->data.Set(
      data_writer.is_null() ? nullptr : data_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->data.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null data in Directory.WriteFile request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Directory::Name_);
  message.set_method_name("WriteFile");
#endif

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new Directory_WriteFile_HandleSyncResponse(
          &result, out_param_error));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void DirectoryProxy::WriteFile(
    const std::string& in_path, const std::vector<uint8_t>& in_data, WriteFileCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::Directory::WriteFile");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDirectory_WriteFile_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::filesystem::mojom::internal::Directory_WriteFile_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->path)::BaseType::BufferWriter
      path_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_path, buffer, &path_writer, &serialization_context);
  params->path.Set(
      path_writer.is_null() ? nullptr : path_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->path.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null path in Directory.WriteFile request");
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
      "null data in Directory.WriteFile request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Directory::Name_);
  message.set_method_name("WriteFile");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new Directory_WriteFile_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class Directory_Read_ProxyToResponder {
 public:
  static Directory::ReadCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<Directory_Read_ProxyToResponder> proxy(
        new Directory_Read_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&Directory_Read_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~Directory_Read_ProxyToResponder() {
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
  Directory_Read_ProxyToResponder(
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
        << "Directory::ReadCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      ::base::File::Error in_error, base::Optional<std::vector<::filesystem::mojom::DirectoryEntryPtr>> in_directory_contents);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(Directory_Read_ProxyToResponder);
};

bool Directory_Read_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::Directory::ReadCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::Directory_Read_ResponseParams_Data* params =
      reinterpret_cast<
          internal::Directory_Read_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::base::File::Error p_error{};
  base::Optional<std::vector<::filesystem::mojom::DirectoryEntryPtr>> p_directory_contents{};
  Directory_Read_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadError(&p_error))
    success = false;
  if (!input_data_view.ReadDirectoryContents(&p_directory_contents))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        Directory::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_error), 
std::move(p_directory_contents));
  return true;
}

void Directory_Read_ProxyToResponder::Run(
    ::base::File::Error in_error, base::Optional<std::vector<::filesystem::mojom::DirectoryEntryPtr>> in_directory_contents) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDirectory_Read_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::filesystem::mojom::internal::Directory_Read_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::mojo_base::mojom::FileError>(
      in_error, &params->error);
  typename decltype(params->directory_contents)::BaseType::BufferWriter
      directory_contents_writer;
  const mojo::internal::ContainerValidateParams directory_contents_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::filesystem::mojom::DirectoryEntryDataView>>(
      in_directory_contents, buffer, &directory_contents_writer, &directory_contents_validate_params,
      &serialization_context);
  params->directory_contents.Set(
      directory_contents_writer.is_null() ? nullptr : directory_contents_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::Directory::ReadCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Directory::Name_);
  message.set_method_name("Read");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool Directory_Read_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::Directory_Read_ResponseParams_Data* params =
      reinterpret_cast<internal::Directory_Read_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::base::File::Error p_error{};
  base::Optional<std::vector<::filesystem::mojom::DirectoryEntryPtr>> p_directory_contents{};
  Directory_Read_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadError(&p_error))
    success = false;
  if (!input_data_view.ReadDirectoryContents(&p_directory_contents))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        Directory::Name_, 0, true);
    return false;
  }
  *out_error_ = std::move(p_error);
  *out_directory_contents_ = std::move(p_directory_contents);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}
class Directory_OpenFile_ProxyToResponder {
 public:
  static Directory::OpenFileCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<Directory_OpenFile_ProxyToResponder> proxy(
        new Directory_OpenFile_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&Directory_OpenFile_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~Directory_OpenFile_ProxyToResponder() {
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
  Directory_OpenFile_ProxyToResponder(
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
        << "Directory::OpenFileCallback was destroyed without "
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

  DISALLOW_COPY_AND_ASSIGN(Directory_OpenFile_ProxyToResponder);
};

bool Directory_OpenFile_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::Directory::OpenFileCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::Directory_OpenFile_ResponseParams_Data* params =
      reinterpret_cast<
          internal::Directory_OpenFile_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::base::File::Error p_error{};
  Directory_OpenFile_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadError(&p_error))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        Directory::Name_, 1, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_error));
  return true;
}

void Directory_OpenFile_ProxyToResponder::Run(
    ::base::File::Error in_error) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDirectory_OpenFile_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::filesystem::mojom::internal::Directory_OpenFile_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::mojo_base::mojom::FileError>(
      in_error, &params->error);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::Directory::OpenFileCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Directory::Name_);
  message.set_method_name("OpenFile");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool Directory_OpenFile_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::Directory_OpenFile_ResponseParams_Data* params =
      reinterpret_cast<internal::Directory_OpenFile_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::base::File::Error p_error{};
  Directory_OpenFile_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadError(&p_error))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        Directory::Name_, 1, true);
    return false;
  }
  *out_error_ = std::move(p_error);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}
class Directory_OpenFileHandle_ProxyToResponder {
 public:
  static Directory::OpenFileHandleCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<Directory_OpenFileHandle_ProxyToResponder> proxy(
        new Directory_OpenFileHandle_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&Directory_OpenFileHandle_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~Directory_OpenFileHandle_ProxyToResponder() {
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
  Directory_OpenFileHandle_ProxyToResponder(
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
        << "Directory::OpenFileHandleCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      ::base::File::Error in_error, base::File in_file_handle);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(Directory_OpenFileHandle_ProxyToResponder);
};

bool Directory_OpenFileHandle_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::Directory::OpenFileHandleCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::Directory_OpenFileHandle_ResponseParams_Data* params =
      reinterpret_cast<
          internal::Directory_OpenFileHandle_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::base::File::Error p_error{};
  base::File p_file_handle{};
  Directory_OpenFileHandle_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadError(&p_error))
    success = false;
  if (!input_data_view.ReadFileHandle(&p_file_handle))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        Directory::Name_, 2, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_error), 
std::move(p_file_handle));
  return true;
}

void Directory_OpenFileHandle_ProxyToResponder::Run(
    ::base::File::Error in_error, base::File in_file_handle) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDirectory_OpenFileHandle_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::filesystem::mojom::internal::Directory_OpenFileHandle_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::mojo_base::mojom::FileError>(
      in_error, &params->error);
  typename decltype(params->file_handle)::BaseType::BufferWriter
      file_handle_writer;
  mojo::internal::Serialize<::mojo_base::mojom::FileDataView>(
      in_file_handle, buffer, &file_handle_writer, &serialization_context);
  params->file_handle.Set(
      file_handle_writer.is_null() ? nullptr : file_handle_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::Directory::OpenFileHandleCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Directory::Name_);
  message.set_method_name("OpenFileHandle");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool Directory_OpenFileHandle_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::Directory_OpenFileHandle_ResponseParams_Data* params =
      reinterpret_cast<internal::Directory_OpenFileHandle_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::base::File::Error p_error{};
  base::File p_file_handle{};
  Directory_OpenFileHandle_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadError(&p_error))
    success = false;
  if (!input_data_view.ReadFileHandle(&p_file_handle))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        Directory::Name_, 2, true);
    return false;
  }
  *out_error_ = std::move(p_error);
  *out_file_handle_ = std::move(p_file_handle);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}
class Directory_OpenFileHandles_ProxyToResponder {
 public:
  static Directory::OpenFileHandlesCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<Directory_OpenFileHandles_ProxyToResponder> proxy(
        new Directory_OpenFileHandles_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&Directory_OpenFileHandles_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~Directory_OpenFileHandles_ProxyToResponder() {
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
  Directory_OpenFileHandles_ProxyToResponder(
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
        << "Directory::OpenFileHandlesCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      std::vector<FileOpenResultPtr> in_results);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(Directory_OpenFileHandles_ProxyToResponder);
};

bool Directory_OpenFileHandles_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::Directory::OpenFileHandlesCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::Directory_OpenFileHandles_ResponseParams_Data* params =
      reinterpret_cast<
          internal::Directory_OpenFileHandles_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  std::vector<FileOpenResultPtr> p_results{};
  Directory_OpenFileHandles_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadResults(&p_results))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        Directory::Name_, 3, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_results));
  return true;
}

void Directory_OpenFileHandles_ProxyToResponder::Run(
    std::vector<FileOpenResultPtr> in_results) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDirectory_OpenFileHandles_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::filesystem::mojom::internal::Directory_OpenFileHandles_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->results)::BaseType::BufferWriter
      results_writer;
  const mojo::internal::ContainerValidateParams results_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::filesystem::mojom::FileOpenResultDataView>>(
      in_results, buffer, &results_writer, &results_validate_params,
      &serialization_context);
  params->results.Set(
      results_writer.is_null() ? nullptr : results_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->results.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null results in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::Directory::OpenFileHandlesCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Directory::Name_);
  message.set_method_name("OpenFileHandles");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool Directory_OpenFileHandles_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::Directory_OpenFileHandles_ResponseParams_Data* params =
      reinterpret_cast<internal::Directory_OpenFileHandles_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  std::vector<FileOpenResultPtr> p_results{};
  Directory_OpenFileHandles_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadResults(&p_results))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        Directory::Name_, 3, true);
    return false;
  }
  *out_results_ = std::move(p_results);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}
class Directory_OpenDirectory_ProxyToResponder {
 public:
  static Directory::OpenDirectoryCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<Directory_OpenDirectory_ProxyToResponder> proxy(
        new Directory_OpenDirectory_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&Directory_OpenDirectory_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~Directory_OpenDirectory_ProxyToResponder() {
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
  Directory_OpenDirectory_ProxyToResponder(
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
        << "Directory::OpenDirectoryCallback was destroyed without "
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

  DISALLOW_COPY_AND_ASSIGN(Directory_OpenDirectory_ProxyToResponder);
};

bool Directory_OpenDirectory_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::Directory::OpenDirectoryCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::Directory_OpenDirectory_ResponseParams_Data* params =
      reinterpret_cast<
          internal::Directory_OpenDirectory_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::base::File::Error p_error{};
  Directory_OpenDirectory_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadError(&p_error))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        Directory::Name_, 4, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_error));
  return true;
}

void Directory_OpenDirectory_ProxyToResponder::Run(
    ::base::File::Error in_error) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDirectory_OpenDirectory_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::filesystem::mojom::internal::Directory_OpenDirectory_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::mojo_base::mojom::FileError>(
      in_error, &params->error);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::Directory::OpenDirectoryCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Directory::Name_);
  message.set_method_name("OpenDirectory");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool Directory_OpenDirectory_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::Directory_OpenDirectory_ResponseParams_Data* params =
      reinterpret_cast<internal::Directory_OpenDirectory_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::base::File::Error p_error{};
  Directory_OpenDirectory_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadError(&p_error))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        Directory::Name_, 4, true);
    return false;
  }
  *out_error_ = std::move(p_error);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}
class Directory_Rename_ProxyToResponder {
 public:
  static Directory::RenameCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<Directory_Rename_ProxyToResponder> proxy(
        new Directory_Rename_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&Directory_Rename_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~Directory_Rename_ProxyToResponder() {
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
  Directory_Rename_ProxyToResponder(
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
        << "Directory::RenameCallback was destroyed without "
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

  DISALLOW_COPY_AND_ASSIGN(Directory_Rename_ProxyToResponder);
};

bool Directory_Rename_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::Directory::RenameCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::Directory_Rename_ResponseParams_Data* params =
      reinterpret_cast<
          internal::Directory_Rename_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::base::File::Error p_error{};
  Directory_Rename_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadError(&p_error))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        Directory::Name_, 5, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_error));
  return true;
}

void Directory_Rename_ProxyToResponder::Run(
    ::base::File::Error in_error) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDirectory_Rename_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::filesystem::mojom::internal::Directory_Rename_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::mojo_base::mojom::FileError>(
      in_error, &params->error);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::Directory::RenameCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Directory::Name_);
  message.set_method_name("Rename");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool Directory_Rename_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::Directory_Rename_ResponseParams_Data* params =
      reinterpret_cast<internal::Directory_Rename_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::base::File::Error p_error{};
  Directory_Rename_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadError(&p_error))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        Directory::Name_, 5, true);
    return false;
  }
  *out_error_ = std::move(p_error);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}
class Directory_Replace_ProxyToResponder {
 public:
  static Directory::ReplaceCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<Directory_Replace_ProxyToResponder> proxy(
        new Directory_Replace_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&Directory_Replace_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~Directory_Replace_ProxyToResponder() {
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
  Directory_Replace_ProxyToResponder(
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
        << "Directory::ReplaceCallback was destroyed without "
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

  DISALLOW_COPY_AND_ASSIGN(Directory_Replace_ProxyToResponder);
};

bool Directory_Replace_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::Directory::ReplaceCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::Directory_Replace_ResponseParams_Data* params =
      reinterpret_cast<
          internal::Directory_Replace_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::base::File::Error p_error{};
  Directory_Replace_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadError(&p_error))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        Directory::Name_, 6, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_error));
  return true;
}

void Directory_Replace_ProxyToResponder::Run(
    ::base::File::Error in_error) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDirectory_Replace_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::filesystem::mojom::internal::Directory_Replace_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::mojo_base::mojom::FileError>(
      in_error, &params->error);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::Directory::ReplaceCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Directory::Name_);
  message.set_method_name("Replace");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool Directory_Replace_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::Directory_Replace_ResponseParams_Data* params =
      reinterpret_cast<internal::Directory_Replace_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::base::File::Error p_error{};
  Directory_Replace_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadError(&p_error))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        Directory::Name_, 6, true);
    return false;
  }
  *out_error_ = std::move(p_error);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}
class Directory_Delete_ProxyToResponder {
 public:
  static Directory::DeleteCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<Directory_Delete_ProxyToResponder> proxy(
        new Directory_Delete_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&Directory_Delete_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~Directory_Delete_ProxyToResponder() {
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
  Directory_Delete_ProxyToResponder(
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
        << "Directory::DeleteCallback was destroyed without "
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

  DISALLOW_COPY_AND_ASSIGN(Directory_Delete_ProxyToResponder);
};

bool Directory_Delete_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::Directory::DeleteCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::Directory_Delete_ResponseParams_Data* params =
      reinterpret_cast<
          internal::Directory_Delete_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::base::File::Error p_error{};
  Directory_Delete_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadError(&p_error))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        Directory::Name_, 7, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_error));
  return true;
}

void Directory_Delete_ProxyToResponder::Run(
    ::base::File::Error in_error) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDirectory_Delete_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::filesystem::mojom::internal::Directory_Delete_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::mojo_base::mojom::FileError>(
      in_error, &params->error);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::Directory::DeleteCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Directory::Name_);
  message.set_method_name("Delete");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool Directory_Delete_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::Directory_Delete_ResponseParams_Data* params =
      reinterpret_cast<internal::Directory_Delete_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::base::File::Error p_error{};
  Directory_Delete_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadError(&p_error))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        Directory::Name_, 7, true);
    return false;
  }
  *out_error_ = std::move(p_error);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}
class Directory_Exists_ProxyToResponder {
 public:
  static Directory::ExistsCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<Directory_Exists_ProxyToResponder> proxy(
        new Directory_Exists_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&Directory_Exists_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~Directory_Exists_ProxyToResponder() {
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
  Directory_Exists_ProxyToResponder(
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
        << "Directory::ExistsCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      ::base::File::Error in_error, bool in_exists);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(Directory_Exists_ProxyToResponder);
};

bool Directory_Exists_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::Directory::ExistsCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::Directory_Exists_ResponseParams_Data* params =
      reinterpret_cast<
          internal::Directory_Exists_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::base::File::Error p_error{};
  bool p_exists{};
  Directory_Exists_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadError(&p_error))
    success = false;
  p_exists = input_data_view.exists();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        Directory::Name_, 8, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_error), 
std::move(p_exists));
  return true;
}

void Directory_Exists_ProxyToResponder::Run(
    ::base::File::Error in_error, bool in_exists) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDirectory_Exists_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::filesystem::mojom::internal::Directory_Exists_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::mojo_base::mojom::FileError>(
      in_error, &params->error);
  params->exists = in_exists;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::Directory::ExistsCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Directory::Name_);
  message.set_method_name("Exists");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool Directory_Exists_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::Directory_Exists_ResponseParams_Data* params =
      reinterpret_cast<internal::Directory_Exists_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::base::File::Error p_error{};
  bool p_exists{};
  Directory_Exists_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadError(&p_error))
    success = false;
  p_exists = input_data_view.exists();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        Directory::Name_, 8, true);
    return false;
  }
  *out_error_ = std::move(p_error);
  *out_exists_ = std::move(p_exists);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}
class Directory_IsWritable_ProxyToResponder {
 public:
  static Directory::IsWritableCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<Directory_IsWritable_ProxyToResponder> proxy(
        new Directory_IsWritable_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&Directory_IsWritable_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~Directory_IsWritable_ProxyToResponder() {
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
  Directory_IsWritable_ProxyToResponder(
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
        << "Directory::IsWritableCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      ::base::File::Error in_error, bool in_is_writable);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(Directory_IsWritable_ProxyToResponder);
};

bool Directory_IsWritable_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::Directory::IsWritableCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::Directory_IsWritable_ResponseParams_Data* params =
      reinterpret_cast<
          internal::Directory_IsWritable_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::base::File::Error p_error{};
  bool p_is_writable{};
  Directory_IsWritable_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadError(&p_error))
    success = false;
  p_is_writable = input_data_view.is_writable();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        Directory::Name_, 9, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_error), 
std::move(p_is_writable));
  return true;
}

void Directory_IsWritable_ProxyToResponder::Run(
    ::base::File::Error in_error, bool in_is_writable) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDirectory_IsWritable_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::filesystem::mojom::internal::Directory_IsWritable_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::mojo_base::mojom::FileError>(
      in_error, &params->error);
  params->is_writable = in_is_writable;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::Directory::IsWritableCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Directory::Name_);
  message.set_method_name("IsWritable");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool Directory_IsWritable_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::Directory_IsWritable_ResponseParams_Data* params =
      reinterpret_cast<internal::Directory_IsWritable_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::base::File::Error p_error{};
  bool p_is_writable{};
  Directory_IsWritable_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadError(&p_error))
    success = false;
  p_is_writable = input_data_view.is_writable();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        Directory::Name_, 9, true);
    return false;
  }
  *out_error_ = std::move(p_error);
  *out_is_writable_ = std::move(p_is_writable);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}
class Directory_Flush_ProxyToResponder {
 public:
  static Directory::FlushCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<Directory_Flush_ProxyToResponder> proxy(
        new Directory_Flush_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&Directory_Flush_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~Directory_Flush_ProxyToResponder() {
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
  Directory_Flush_ProxyToResponder(
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
        << "Directory::FlushCallback was destroyed without "
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

  DISALLOW_COPY_AND_ASSIGN(Directory_Flush_ProxyToResponder);
};

bool Directory_Flush_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::Directory::FlushCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::Directory_Flush_ResponseParams_Data* params =
      reinterpret_cast<
          internal::Directory_Flush_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::base::File::Error p_error{};
  Directory_Flush_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadError(&p_error))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        Directory::Name_, 10, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_error));
  return true;
}

void Directory_Flush_ProxyToResponder::Run(
    ::base::File::Error in_error) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDirectory_Flush_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::filesystem::mojom::internal::Directory_Flush_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::mojo_base::mojom::FileError>(
      in_error, &params->error);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::Directory::FlushCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Directory::Name_);
  message.set_method_name("Flush");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool Directory_Flush_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::Directory_Flush_ResponseParams_Data* params =
      reinterpret_cast<internal::Directory_Flush_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::base::File::Error p_error{};
  Directory_Flush_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadError(&p_error))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        Directory::Name_, 10, true);
    return false;
  }
  *out_error_ = std::move(p_error);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}
class Directory_StatFile_ProxyToResponder {
 public:
  static Directory::StatFileCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<Directory_StatFile_ProxyToResponder> proxy(
        new Directory_StatFile_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&Directory_StatFile_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~Directory_StatFile_ProxyToResponder() {
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
  Directory_StatFile_ProxyToResponder(
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
        << "Directory::StatFileCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      ::base::File::Error in_error, ::filesystem::mojom::FileInformationPtr in_file_information);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(Directory_StatFile_ProxyToResponder);
};

bool Directory_StatFile_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::Directory::StatFileCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::Directory_StatFile_ResponseParams_Data* params =
      reinterpret_cast<
          internal::Directory_StatFile_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::base::File::Error p_error{};
  ::filesystem::mojom::FileInformationPtr p_file_information{};
  Directory_StatFile_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadError(&p_error))
    success = false;
  if (!input_data_view.ReadFileInformation(&p_file_information))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        Directory::Name_, 11, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_error), 
std::move(p_file_information));
  return true;
}

void Directory_StatFile_ProxyToResponder::Run(
    ::base::File::Error in_error, ::filesystem::mojom::FileInformationPtr in_file_information) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDirectory_StatFile_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::filesystem::mojom::internal::Directory_StatFile_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::mojo_base::mojom::FileError>(
      in_error, &params->error);
  typename decltype(params->file_information)::BaseType::BufferWriter
      file_information_writer;
  mojo::internal::Serialize<::filesystem::mojom::FileInformationDataView>(
      in_file_information, buffer, &file_information_writer, &serialization_context);
  params->file_information.Set(
      file_information_writer.is_null() ? nullptr : file_information_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::Directory::StatFileCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Directory::Name_);
  message.set_method_name("StatFile");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool Directory_StatFile_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::Directory_StatFile_ResponseParams_Data* params =
      reinterpret_cast<internal::Directory_StatFile_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::base::File::Error p_error{};
  ::filesystem::mojom::FileInformationPtr p_file_information{};
  Directory_StatFile_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadError(&p_error))
    success = false;
  if (!input_data_view.ReadFileInformation(&p_file_information))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        Directory::Name_, 11, true);
    return false;
  }
  *out_error_ = std::move(p_error);
  *out_file_information_ = std::move(p_file_information);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}
class Directory_ReadEntireFile_ProxyToResponder {
 public:
  static Directory::ReadEntireFileCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<Directory_ReadEntireFile_ProxyToResponder> proxy(
        new Directory_ReadEntireFile_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&Directory_ReadEntireFile_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~Directory_ReadEntireFile_ProxyToResponder() {
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
  Directory_ReadEntireFile_ProxyToResponder(
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
        << "Directory::ReadEntireFileCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      ::base::File::Error in_error, const std::vector<uint8_t>& in_data);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(Directory_ReadEntireFile_ProxyToResponder);
};

bool Directory_ReadEntireFile_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::Directory::ReadEntireFileCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::Directory_ReadEntireFile_ResponseParams_Data* params =
      reinterpret_cast<
          internal::Directory_ReadEntireFile_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::base::File::Error p_error{};
  std::vector<uint8_t> p_data{};
  Directory_ReadEntireFile_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadError(&p_error))
    success = false;
  if (!input_data_view.ReadData(&p_data))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        Directory::Name_, 13, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_error), 
std::move(p_data));
  return true;
}

void Directory_ReadEntireFile_ProxyToResponder::Run(
    ::base::File::Error in_error, const std::vector<uint8_t>& in_data) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDirectory_ReadEntireFile_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::filesystem::mojom::internal::Directory_ReadEntireFile_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::mojo_base::mojom::FileError>(
      in_error, &params->error);
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
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::Directory::ReadEntireFileCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Directory::Name_);
  message.set_method_name("ReadEntireFile");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool Directory_ReadEntireFile_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::Directory_ReadEntireFile_ResponseParams_Data* params =
      reinterpret_cast<internal::Directory_ReadEntireFile_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::base::File::Error p_error{};
  std::vector<uint8_t> p_data{};
  Directory_ReadEntireFile_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadError(&p_error))
    success = false;
  if (!input_data_view.ReadData(&p_data))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        Directory::Name_, 13, true);
    return false;
  }
  *out_error_ = std::move(p_error);
  *out_data_ = std::move(p_data);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}
class Directory_WriteFile_ProxyToResponder {
 public:
  static Directory::WriteFileCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<Directory_WriteFile_ProxyToResponder> proxy(
        new Directory_WriteFile_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&Directory_WriteFile_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~Directory_WriteFile_ProxyToResponder() {
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
  Directory_WriteFile_ProxyToResponder(
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
        << "Directory::WriteFileCallback was destroyed without "
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

  DISALLOW_COPY_AND_ASSIGN(Directory_WriteFile_ProxyToResponder);
};

bool Directory_WriteFile_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::Directory::WriteFileCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::Directory_WriteFile_ResponseParams_Data* params =
      reinterpret_cast<
          internal::Directory_WriteFile_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::base::File::Error p_error{};
  Directory_WriteFile_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadError(&p_error))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        Directory::Name_, 14, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_error));
  return true;
}

void Directory_WriteFile_ProxyToResponder::Run(
    ::base::File::Error in_error) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDirectory_WriteFile_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::filesystem::mojom::internal::Directory_WriteFile_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::mojo_base::mojom::FileError>(
      in_error, &params->error);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::Directory::WriteFileCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Directory::Name_);
  message.set_method_name("WriteFile");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool Directory_WriteFile_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::Directory_WriteFile_ResponseParams_Data* params =
      reinterpret_cast<internal::Directory_WriteFile_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::base::File::Error p_error{};
  Directory_WriteFile_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadError(&p_error))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        Directory::Name_, 14, true);
    return false;
  }
  *out_error_ = std::move(p_error);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}

// static
bool DirectoryStubDispatch::Accept(
    Directory* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kDirectory_Read_Name: {
      break;
    }
    case internal::kDirectory_OpenFile_Name: {
      break;
    }
    case internal::kDirectory_OpenFileHandle_Name: {
      break;
    }
    case internal::kDirectory_OpenFileHandles_Name: {
      break;
    }
    case internal::kDirectory_OpenDirectory_Name: {
      break;
    }
    case internal::kDirectory_Rename_Name: {
      break;
    }
    case internal::kDirectory_Replace_Name: {
      break;
    }
    case internal::kDirectory_Delete_Name: {
      break;
    }
    case internal::kDirectory_Exists_Name: {
      break;
    }
    case internal::kDirectory_IsWritable_Name: {
      break;
    }
    case internal::kDirectory_Flush_Name: {
      break;
    }
    case internal::kDirectory_StatFile_Name: {
      break;
    }
    case internal::kDirectory_Clone_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::Directory::Clone",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::Directory_Clone_Params_Data* params =
          reinterpret_cast<internal::Directory_Clone_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      DirectoryRequest p_directory{};
      Directory_Clone_ParamsDataView input_data_view(params, &serialization_context);
      
      p_directory =
          input_data_view.TakeDirectory<decltype(p_directory)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            Directory::Name_, 12, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Clone(
std::move(p_directory));
      return true;
    }
    case internal::kDirectory_ReadEntireFile_Name: {
      break;
    }
    case internal::kDirectory_WriteFile_Name: {
      break;
    }
  }
  return false;
}

// static
bool DirectoryStubDispatch::AcceptWithResponder(
    Directory* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kDirectory_Read_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::Directory::Read",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::Directory_Read_Params_Data* params =
          reinterpret_cast<
              internal::Directory_Read_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      Directory_Read_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            Directory::Name_, 0, false);
        return false;
      }
      Directory::ReadCallback callback =
          Directory_Read_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Read(std::move(callback));
      return true;
    }
    case internal::kDirectory_OpenFile_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::Directory::OpenFile",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::Directory_OpenFile_Params_Data* params =
          reinterpret_cast<
              internal::Directory_OpenFile_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_path{};
      ::filesystem::mojom::FileRequest p_file{};
      uint32_t p_open_flags{};
      Directory_OpenFile_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadPath(&p_path))
        success = false;
      p_file =
          input_data_view.TakeFile<decltype(p_file)>();
      p_open_flags = input_data_view.open_flags();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            Directory::Name_, 1, false);
        return false;
      }
      Directory::OpenFileCallback callback =
          Directory_OpenFile_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OpenFile(
std::move(p_path), 
std::move(p_file), 
std::move(p_open_flags), std::move(callback));
      return true;
    }
    case internal::kDirectory_OpenFileHandle_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::Directory::OpenFileHandle",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::Directory_OpenFileHandle_Params_Data* params =
          reinterpret_cast<
              internal::Directory_OpenFileHandle_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_path{};
      uint32_t p_open_flags{};
      Directory_OpenFileHandle_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadPath(&p_path))
        success = false;
      p_open_flags = input_data_view.open_flags();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            Directory::Name_, 2, false);
        return false;
      }
      Directory::OpenFileHandleCallback callback =
          Directory_OpenFileHandle_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OpenFileHandle(
std::move(p_path), 
std::move(p_open_flags), std::move(callback));
      return true;
    }
    case internal::kDirectory_OpenFileHandles_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::Directory::OpenFileHandles",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::Directory_OpenFileHandles_Params_Data* params =
          reinterpret_cast<
              internal::Directory_OpenFileHandles_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::vector<FileOpenDetailsPtr> p_files{};
      Directory_OpenFileHandles_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadFiles(&p_files))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            Directory::Name_, 3, false);
        return false;
      }
      Directory::OpenFileHandlesCallback callback =
          Directory_OpenFileHandles_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OpenFileHandles(
std::move(p_files), std::move(callback));
      return true;
    }
    case internal::kDirectory_OpenDirectory_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::Directory::OpenDirectory",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::Directory_OpenDirectory_Params_Data* params =
          reinterpret_cast<
              internal::Directory_OpenDirectory_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_path{};
      DirectoryRequest p_directory{};
      uint32_t p_open_flags{};
      Directory_OpenDirectory_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadPath(&p_path))
        success = false;
      p_directory =
          input_data_view.TakeDirectory<decltype(p_directory)>();
      p_open_flags = input_data_view.open_flags();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            Directory::Name_, 4, false);
        return false;
      }
      Directory::OpenDirectoryCallback callback =
          Directory_OpenDirectory_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OpenDirectory(
std::move(p_path), 
std::move(p_directory), 
std::move(p_open_flags), std::move(callback));
      return true;
    }
    case internal::kDirectory_Rename_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::Directory::Rename",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::Directory_Rename_Params_Data* params =
          reinterpret_cast<
              internal::Directory_Rename_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_path{};
      std::string p_new_path{};
      Directory_Rename_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadPath(&p_path))
        success = false;
      if (!input_data_view.ReadNewPath(&p_new_path))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            Directory::Name_, 5, false);
        return false;
      }
      Directory::RenameCallback callback =
          Directory_Rename_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Rename(
std::move(p_path), 
std::move(p_new_path), std::move(callback));
      return true;
    }
    case internal::kDirectory_Replace_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::Directory::Replace",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::Directory_Replace_Params_Data* params =
          reinterpret_cast<
              internal::Directory_Replace_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_path{};
      std::string p_new_path{};
      Directory_Replace_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadPath(&p_path))
        success = false;
      if (!input_data_view.ReadNewPath(&p_new_path))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            Directory::Name_, 6, false);
        return false;
      }
      Directory::ReplaceCallback callback =
          Directory_Replace_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Replace(
std::move(p_path), 
std::move(p_new_path), std::move(callback));
      return true;
    }
    case internal::kDirectory_Delete_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::Directory::Delete",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::Directory_Delete_Params_Data* params =
          reinterpret_cast<
              internal::Directory_Delete_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_path{};
      uint32_t p_delete_flags{};
      Directory_Delete_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadPath(&p_path))
        success = false;
      p_delete_flags = input_data_view.delete_flags();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            Directory::Name_, 7, false);
        return false;
      }
      Directory::DeleteCallback callback =
          Directory_Delete_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Delete(
std::move(p_path), 
std::move(p_delete_flags), std::move(callback));
      return true;
    }
    case internal::kDirectory_Exists_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::Directory::Exists",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::Directory_Exists_Params_Data* params =
          reinterpret_cast<
              internal::Directory_Exists_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_path{};
      Directory_Exists_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadPath(&p_path))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            Directory::Name_, 8, false);
        return false;
      }
      Directory::ExistsCallback callback =
          Directory_Exists_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Exists(
std::move(p_path), std::move(callback));
      return true;
    }
    case internal::kDirectory_IsWritable_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::Directory::IsWritable",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::Directory_IsWritable_Params_Data* params =
          reinterpret_cast<
              internal::Directory_IsWritable_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_path{};
      Directory_IsWritable_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadPath(&p_path))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            Directory::Name_, 9, false);
        return false;
      }
      Directory::IsWritableCallback callback =
          Directory_IsWritable_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->IsWritable(
std::move(p_path), std::move(callback));
      return true;
    }
    case internal::kDirectory_Flush_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::Directory::Flush",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::Directory_Flush_Params_Data* params =
          reinterpret_cast<
              internal::Directory_Flush_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      Directory_Flush_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            Directory::Name_, 10, false);
        return false;
      }
      Directory::FlushCallback callback =
          Directory_Flush_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Flush(std::move(callback));
      return true;
    }
    case internal::kDirectory_StatFile_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::Directory::StatFile",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::Directory_StatFile_Params_Data* params =
          reinterpret_cast<
              internal::Directory_StatFile_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_path{};
      Directory_StatFile_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadPath(&p_path))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            Directory::Name_, 11, false);
        return false;
      }
      Directory::StatFileCallback callback =
          Directory_StatFile_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->StatFile(
std::move(p_path), std::move(callback));
      return true;
    }
    case internal::kDirectory_Clone_Name: {
      break;
    }
    case internal::kDirectory_ReadEntireFile_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::Directory::ReadEntireFile",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::Directory_ReadEntireFile_Params_Data* params =
          reinterpret_cast<
              internal::Directory_ReadEntireFile_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_path{};
      Directory_ReadEntireFile_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadPath(&p_path))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            Directory::Name_, 13, false);
        return false;
      }
      Directory::ReadEntireFileCallback callback =
          Directory_ReadEntireFile_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->ReadEntireFile(
std::move(p_path), std::move(callback));
      return true;
    }
    case internal::kDirectory_WriteFile_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::Directory::WriteFile",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::Directory_WriteFile_Params_Data* params =
          reinterpret_cast<
              internal::Directory_WriteFile_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_path{};
      std::vector<uint8_t> p_data{};
      Directory_WriteFile_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadPath(&p_path))
        success = false;
      if (!input_data_view.ReadData(&p_data))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            Directory::Name_, 14, false);
        return false;
      }
      Directory::WriteFileCallback callback =
          Directory_WriteFile_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->WriteFile(
std::move(p_path), 
std::move(p_data), std::move(callback));
      return true;
    }
  }
  return false;
}

bool DirectoryRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "Directory RequestValidator");

  switch (message->header()->name) {
    case internal::kDirectory_Read_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Directory_Read_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDirectory_OpenFile_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Directory_OpenFile_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDirectory_OpenFileHandle_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Directory_OpenFileHandle_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDirectory_OpenFileHandles_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Directory_OpenFileHandles_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDirectory_OpenDirectory_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Directory_OpenDirectory_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDirectory_Rename_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Directory_Rename_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDirectory_Replace_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Directory_Replace_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDirectory_Delete_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Directory_Delete_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDirectory_Exists_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Directory_Exists_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDirectory_IsWritable_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Directory_IsWritable_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDirectory_Flush_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Directory_Flush_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDirectory_StatFile_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Directory_StatFile_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDirectory_Clone_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Directory_Clone_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDirectory_ReadEntireFile_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Directory_ReadEntireFile_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDirectory_WriteFile_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Directory_WriteFile_Params_Data>(
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

bool DirectoryResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "Directory ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kDirectory_Read_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Directory_Read_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDirectory_OpenFile_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Directory_OpenFile_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDirectory_OpenFileHandle_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Directory_OpenFileHandle_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDirectory_OpenFileHandles_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Directory_OpenFileHandles_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDirectory_OpenDirectory_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Directory_OpenDirectory_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDirectory_Rename_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Directory_Rename_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDirectory_Replace_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Directory_Replace_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDirectory_Delete_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Directory_Delete_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDirectory_Exists_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Directory_Exists_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDirectory_IsWritable_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Directory_IsWritable_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDirectory_Flush_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Directory_Flush_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDirectory_StatFile_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Directory_StatFile_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDirectory_ReadEntireFile_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Directory_ReadEntireFile_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDirectory_WriteFile_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Directory_WriteFile_ResponseParams_Data>(
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
}  // namespace filesystem

namespace mojo {


// static
bool StructTraits<::filesystem::mojom::FileOpenDetails::DataView, ::filesystem::mojom::FileOpenDetailsPtr>::Read(
    ::filesystem::mojom::FileOpenDetails::DataView input,
    ::filesystem::mojom::FileOpenDetailsPtr* output) {
  bool success = true;
  ::filesystem::mojom::FileOpenDetailsPtr result(::filesystem::mojom::FileOpenDetails::New());
  
      if (!input.ReadPath(&result->path))
        success = false;
      result->open_flags = input.open_flags();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::filesystem::mojom::FileOpenResult::DataView, ::filesystem::mojom::FileOpenResultPtr>::Read(
    ::filesystem::mojom::FileOpenResult::DataView input,
    ::filesystem::mojom::FileOpenResultPtr* output) {
  bool success = true;
  ::filesystem::mojom::FileOpenResultPtr result(::filesystem::mojom::FileOpenResult::New());
  
      if (!input.ReadPath(&result->path))
        success = false;
      if (!input.ReadError(&result->error))
        success = false;
      if (!input.ReadFileHandle(&result->file_handle))
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