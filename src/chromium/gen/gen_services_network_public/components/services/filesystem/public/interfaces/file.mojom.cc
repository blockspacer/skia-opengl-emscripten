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

#include "components/services/filesystem/public/interfaces/file.mojom.h"

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

#include "components/services/filesystem/public/interfaces/file.mojom-params-data.h"
#include "components/services/filesystem/public/interfaces/file.mojom-shared-message-ids.h"

#include "components/services/filesystem/public/interfaces/file.mojom-import-headers.h"


#ifndef COMPONENTS_SERVICES_FILESYSTEM_PUBLIC_INTERFACES_FILE_MOJOM_JUMBO_H_
#define COMPONENTS_SERVICES_FILESYSTEM_PUBLIC_INTERFACES_FILE_MOJOM_JUMBO_H_
#include "mojo/public/cpp/base/file_error_mojom_traits.h"
#include "mojo/public/cpp/base/file_mojom_traits.h"
#endif
namespace filesystem {
namespace mojom {
const char File::Name_[] = "filesystem.mojom.File";
bool File::Close(::base::File::Error* out_err) {
  NOTREACHED();
  return false;
}
bool File::Read(uint32_t num_bytes_to_read, int64_t offset, ::filesystem::mojom::Whence whence, ::base::File::Error* out_error, base::Optional<std::vector<uint8_t>>* out_bytes_read) {
  NOTREACHED();
  return false;
}
bool File::Write(const std::vector<uint8_t>& bytes_to_write, int64_t offset, ::filesystem::mojom::Whence whence, ::base::File::Error* out_error, uint32_t* out_num_bytes_written) {
  NOTREACHED();
  return false;
}
bool File::Tell(::base::File::Error* out_error, int64_t* out_position) {
  NOTREACHED();
  return false;
}
bool File::Seek(int64_t offset, ::filesystem::mojom::Whence whence, ::base::File::Error* out_error, int64_t* out_position) {
  NOTREACHED();
  return false;
}
bool File::Stat(::base::File::Error* out_error, ::filesystem::mojom::FileInformationPtr* out_file_information) {
  NOTREACHED();
  return false;
}
bool File::Truncate(int64_t size, ::base::File::Error* out_error) {
  NOTREACHED();
  return false;
}
bool File::Touch(::filesystem::mojom::TimespecOrNowPtr atime, ::filesystem::mojom::TimespecOrNowPtr mtime, ::base::File::Error* out_error) {
  NOTREACHED();
  return false;
}
bool File::Dup(FileRequest file, ::base::File::Error* out_error) {
  NOTREACHED();
  return false;
}
bool File::Flush(::base::File::Error* out_error) {
  NOTREACHED();
  return false;
}
bool File::Lock(::base::File::Error* out_error) {
  NOTREACHED();
  return false;
}
bool File::Unlock(::base::File::Error* out_error) {
  NOTREACHED();
  return false;
}
bool File::AsHandle(::base::File::Error* out_error, base::File* out_file_handle) {
  NOTREACHED();
  return false;
}
class File_Close_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  File_Close_HandleSyncResponse(
      bool* result, ::base::File::Error* out_err)
      : result_(result), out_err_(out_err) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;
  ::base::File::Error* out_err_;DISALLOW_COPY_AND_ASSIGN(File_Close_HandleSyncResponse);
};

class File_Close_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  File_Close_ForwardToCallback(
      File::CloseCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  File::CloseCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(File_Close_ForwardToCallback);
};
class File_Read_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  File_Read_HandleSyncResponse(
      bool* result, ::base::File::Error* out_error, base::Optional<std::vector<uint8_t>>* out_bytes_read)
      : result_(result), out_error_(out_error), out_bytes_read_(out_bytes_read) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;
  ::base::File::Error* out_error_;
  base::Optional<std::vector<uint8_t>>* out_bytes_read_;DISALLOW_COPY_AND_ASSIGN(File_Read_HandleSyncResponse);
};

class File_Read_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  File_Read_ForwardToCallback(
      File::ReadCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  File::ReadCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(File_Read_ForwardToCallback);
};
class File_Write_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  File_Write_HandleSyncResponse(
      bool* result, ::base::File::Error* out_error, uint32_t* out_num_bytes_written)
      : result_(result), out_error_(out_error), out_num_bytes_written_(out_num_bytes_written) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;
  ::base::File::Error* out_error_;
  uint32_t* out_num_bytes_written_;DISALLOW_COPY_AND_ASSIGN(File_Write_HandleSyncResponse);
};

class File_Write_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  File_Write_ForwardToCallback(
      File::WriteCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  File::WriteCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(File_Write_ForwardToCallback);
};
class File_Tell_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  File_Tell_HandleSyncResponse(
      bool* result, ::base::File::Error* out_error, int64_t* out_position)
      : result_(result), out_error_(out_error), out_position_(out_position) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;
  ::base::File::Error* out_error_;
  int64_t* out_position_;DISALLOW_COPY_AND_ASSIGN(File_Tell_HandleSyncResponse);
};

class File_Tell_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  File_Tell_ForwardToCallback(
      File::TellCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  File::TellCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(File_Tell_ForwardToCallback);
};
class File_Seek_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  File_Seek_HandleSyncResponse(
      bool* result, ::base::File::Error* out_error, int64_t* out_position)
      : result_(result), out_error_(out_error), out_position_(out_position) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;
  ::base::File::Error* out_error_;
  int64_t* out_position_;DISALLOW_COPY_AND_ASSIGN(File_Seek_HandleSyncResponse);
};

class File_Seek_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  File_Seek_ForwardToCallback(
      File::SeekCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  File::SeekCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(File_Seek_ForwardToCallback);
};
class File_Stat_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  File_Stat_HandleSyncResponse(
      bool* result, ::base::File::Error* out_error, ::filesystem::mojom::FileInformationPtr* out_file_information)
      : result_(result), out_error_(out_error), out_file_information_(out_file_information) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;
  ::base::File::Error* out_error_;
  ::filesystem::mojom::FileInformationPtr* out_file_information_;DISALLOW_COPY_AND_ASSIGN(File_Stat_HandleSyncResponse);
};

class File_Stat_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  File_Stat_ForwardToCallback(
      File::StatCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  File::StatCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(File_Stat_ForwardToCallback);
};
class File_Truncate_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  File_Truncate_HandleSyncResponse(
      bool* result, ::base::File::Error* out_error)
      : result_(result), out_error_(out_error) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;
  ::base::File::Error* out_error_;DISALLOW_COPY_AND_ASSIGN(File_Truncate_HandleSyncResponse);
};

class File_Truncate_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  File_Truncate_ForwardToCallback(
      File::TruncateCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  File::TruncateCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(File_Truncate_ForwardToCallback);
};
class File_Touch_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  File_Touch_HandleSyncResponse(
      bool* result, ::base::File::Error* out_error)
      : result_(result), out_error_(out_error) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;
  ::base::File::Error* out_error_;DISALLOW_COPY_AND_ASSIGN(File_Touch_HandleSyncResponse);
};

class File_Touch_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  File_Touch_ForwardToCallback(
      File::TouchCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  File::TouchCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(File_Touch_ForwardToCallback);
};
class File_Dup_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  File_Dup_HandleSyncResponse(
      bool* result, ::base::File::Error* out_error)
      : result_(result), out_error_(out_error) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;
  ::base::File::Error* out_error_;DISALLOW_COPY_AND_ASSIGN(File_Dup_HandleSyncResponse);
};

class File_Dup_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  File_Dup_ForwardToCallback(
      File::DupCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  File::DupCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(File_Dup_ForwardToCallback);
};
class File_Flush_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  File_Flush_HandleSyncResponse(
      bool* result, ::base::File::Error* out_error)
      : result_(result), out_error_(out_error) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;
  ::base::File::Error* out_error_;DISALLOW_COPY_AND_ASSIGN(File_Flush_HandleSyncResponse);
};

class File_Flush_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  File_Flush_ForwardToCallback(
      File::FlushCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  File::FlushCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(File_Flush_ForwardToCallback);
};
class File_Lock_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  File_Lock_HandleSyncResponse(
      bool* result, ::base::File::Error* out_error)
      : result_(result), out_error_(out_error) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;
  ::base::File::Error* out_error_;DISALLOW_COPY_AND_ASSIGN(File_Lock_HandleSyncResponse);
};

class File_Lock_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  File_Lock_ForwardToCallback(
      File::LockCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  File::LockCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(File_Lock_ForwardToCallback);
};
class File_Unlock_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  File_Unlock_HandleSyncResponse(
      bool* result, ::base::File::Error* out_error)
      : result_(result), out_error_(out_error) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;
  ::base::File::Error* out_error_;DISALLOW_COPY_AND_ASSIGN(File_Unlock_HandleSyncResponse);
};

class File_Unlock_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  File_Unlock_ForwardToCallback(
      File::UnlockCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  File::UnlockCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(File_Unlock_ForwardToCallback);
};
class File_AsHandle_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  File_AsHandle_HandleSyncResponse(
      bool* result, ::base::File::Error* out_error, base::File* out_file_handle)
      : result_(result), out_error_(out_error), out_file_handle_(out_file_handle) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;
  ::base::File::Error* out_error_;
  base::File* out_file_handle_;DISALLOW_COPY_AND_ASSIGN(File_AsHandle_HandleSyncResponse);
};

class File_AsHandle_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  File_AsHandle_ForwardToCallback(
      File::AsHandleCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  File::AsHandleCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(File_AsHandle_ForwardToCallback);
};

FileProxy::FileProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}
bool FileProxy::Close(
    ::base::File::Error* out_param_err) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::File::Close");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFile_Close_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::filesystem::mojom::internal::File_Close_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(File::Name_);
  message.set_method_name("Close");
#endif

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new File_Close_HandleSyncResponse(
          &result, out_param_err));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void FileProxy::Close(
    CloseCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::File::Close");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFile_Close_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::filesystem::mojom::internal::File_Close_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(File::Name_);
  message.set_method_name("Close");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new File_Close_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
bool FileProxy::Read(
    uint32_t param_num_bytes_to_read, int64_t param_offset, ::filesystem::mojom::Whence param_whence, ::base::File::Error* out_param_error, base::Optional<std::vector<uint8_t>>* out_param_bytes_read) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::File::Read");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFile_Read_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::filesystem::mojom::internal::File_Read_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->num_bytes_to_read = param_num_bytes_to_read;
  params->offset = param_offset;
  mojo::internal::Serialize<::filesystem::mojom::Whence>(
      param_whence, &params->whence);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(File::Name_);
  message.set_method_name("Read");
#endif

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new File_Read_HandleSyncResponse(
          &result, out_param_error, out_param_bytes_read));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void FileProxy::Read(
    uint32_t in_num_bytes_to_read, int64_t in_offset, ::filesystem::mojom::Whence in_whence, ReadCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::File::Read");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFile_Read_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::filesystem::mojom::internal::File_Read_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->num_bytes_to_read = in_num_bytes_to_read;
  params->offset = in_offset;
  mojo::internal::Serialize<::filesystem::mojom::Whence>(
      in_whence, &params->whence);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(File::Name_);
  message.set_method_name("Read");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new File_Read_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
bool FileProxy::Write(
    const std::vector<uint8_t>& param_bytes_to_write, int64_t param_offset, ::filesystem::mojom::Whence param_whence, ::base::File::Error* out_param_error, uint32_t* out_param_num_bytes_written) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::File::Write");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFile_Write_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::filesystem::mojom::internal::File_Write_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->bytes_to_write)::BaseType::BufferWriter
      bytes_to_write_writer;
  const mojo::internal::ContainerValidateParams bytes_to_write_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      param_bytes_to_write, buffer, &bytes_to_write_writer, &bytes_to_write_validate_params,
      &serialization_context);
  params->bytes_to_write.Set(
      bytes_to_write_writer.is_null() ? nullptr : bytes_to_write_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->bytes_to_write.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null bytes_to_write in File.Write request");
  params->offset = param_offset;
  mojo::internal::Serialize<::filesystem::mojom::Whence>(
      param_whence, &params->whence);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(File::Name_);
  message.set_method_name("Write");
#endif

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new File_Write_HandleSyncResponse(
          &result, out_param_error, out_param_num_bytes_written));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void FileProxy::Write(
    const std::vector<uint8_t>& in_bytes_to_write, int64_t in_offset, ::filesystem::mojom::Whence in_whence, WriteCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::File::Write");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFile_Write_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::filesystem::mojom::internal::File_Write_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->bytes_to_write)::BaseType::BufferWriter
      bytes_to_write_writer;
  const mojo::internal::ContainerValidateParams bytes_to_write_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      in_bytes_to_write, buffer, &bytes_to_write_writer, &bytes_to_write_validate_params,
      &serialization_context);
  params->bytes_to_write.Set(
      bytes_to_write_writer.is_null() ? nullptr : bytes_to_write_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->bytes_to_write.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null bytes_to_write in File.Write request");
  params->offset = in_offset;
  mojo::internal::Serialize<::filesystem::mojom::Whence>(
      in_whence, &params->whence);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(File::Name_);
  message.set_method_name("Write");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new File_Write_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
bool FileProxy::Tell(
    ::base::File::Error* out_param_error, int64_t* out_param_position) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::File::Tell");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFile_Tell_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::filesystem::mojom::internal::File_Tell_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(File::Name_);
  message.set_method_name("Tell");
#endif

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new File_Tell_HandleSyncResponse(
          &result, out_param_error, out_param_position));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void FileProxy::Tell(
    TellCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::File::Tell");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFile_Tell_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::filesystem::mojom::internal::File_Tell_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(File::Name_);
  message.set_method_name("Tell");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new File_Tell_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
bool FileProxy::Seek(
    int64_t param_offset, ::filesystem::mojom::Whence param_whence, ::base::File::Error* out_param_error, int64_t* out_param_position) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::File::Seek");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFile_Seek_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::filesystem::mojom::internal::File_Seek_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->offset = param_offset;
  mojo::internal::Serialize<::filesystem::mojom::Whence>(
      param_whence, &params->whence);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(File::Name_);
  message.set_method_name("Seek");
#endif

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new File_Seek_HandleSyncResponse(
          &result, out_param_error, out_param_position));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void FileProxy::Seek(
    int64_t in_offset, ::filesystem::mojom::Whence in_whence, SeekCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::File::Seek");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFile_Seek_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::filesystem::mojom::internal::File_Seek_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->offset = in_offset;
  mojo::internal::Serialize<::filesystem::mojom::Whence>(
      in_whence, &params->whence);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(File::Name_);
  message.set_method_name("Seek");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new File_Seek_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
bool FileProxy::Stat(
    ::base::File::Error* out_param_error, ::filesystem::mojom::FileInformationPtr* out_param_file_information) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::File::Stat");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFile_Stat_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::filesystem::mojom::internal::File_Stat_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(File::Name_);
  message.set_method_name("Stat");
#endif

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new File_Stat_HandleSyncResponse(
          &result, out_param_error, out_param_file_information));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void FileProxy::Stat(
    StatCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::File::Stat");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFile_Stat_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::filesystem::mojom::internal::File_Stat_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(File::Name_);
  message.set_method_name("Stat");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new File_Stat_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
bool FileProxy::Truncate(
    int64_t param_size, ::base::File::Error* out_param_error) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::File::Truncate");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFile_Truncate_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::filesystem::mojom::internal::File_Truncate_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->size = param_size;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(File::Name_);
  message.set_method_name("Truncate");
#endif

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new File_Truncate_HandleSyncResponse(
          &result, out_param_error));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void FileProxy::Truncate(
    int64_t in_size, TruncateCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::File::Truncate");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFile_Truncate_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::filesystem::mojom::internal::File_Truncate_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->size = in_size;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(File::Name_);
  message.set_method_name("Truncate");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new File_Truncate_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
bool FileProxy::Touch(
    ::filesystem::mojom::TimespecOrNowPtr param_atime, ::filesystem::mojom::TimespecOrNowPtr param_mtime, ::base::File::Error* out_param_error) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::File::Touch");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFile_Touch_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::filesystem::mojom::internal::File_Touch_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->atime)::BaseType::BufferWriter
      atime_writer;
  mojo::internal::Serialize<::filesystem::mojom::TimespecOrNowDataView>(
      param_atime, buffer, &atime_writer, &serialization_context);
  params->atime.Set(
      atime_writer.is_null() ? nullptr : atime_writer.data());
  typename decltype(params->mtime)::BaseType::BufferWriter
      mtime_writer;
  mojo::internal::Serialize<::filesystem::mojom::TimespecOrNowDataView>(
      param_mtime, buffer, &mtime_writer, &serialization_context);
  params->mtime.Set(
      mtime_writer.is_null() ? nullptr : mtime_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(File::Name_);
  message.set_method_name("Touch");
#endif

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new File_Touch_HandleSyncResponse(
          &result, out_param_error));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void FileProxy::Touch(
    ::filesystem::mojom::TimespecOrNowPtr in_atime, ::filesystem::mojom::TimespecOrNowPtr in_mtime, TouchCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::File::Touch");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFile_Touch_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::filesystem::mojom::internal::File_Touch_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->atime)::BaseType::BufferWriter
      atime_writer;
  mojo::internal::Serialize<::filesystem::mojom::TimespecOrNowDataView>(
      in_atime, buffer, &atime_writer, &serialization_context);
  params->atime.Set(
      atime_writer.is_null() ? nullptr : atime_writer.data());
  typename decltype(params->mtime)::BaseType::BufferWriter
      mtime_writer;
  mojo::internal::Serialize<::filesystem::mojom::TimespecOrNowDataView>(
      in_mtime, buffer, &mtime_writer, &serialization_context);
  params->mtime.Set(
      mtime_writer.is_null() ? nullptr : mtime_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(File::Name_);
  message.set_method_name("Touch");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new File_Touch_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
bool FileProxy::Dup(
    FileRequest param_file, ::base::File::Error* out_param_error) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::File::Dup");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFile_Dup_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::filesystem::mojom::internal::File_Dup_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::filesystem::mojom::FileRequestDataView>(
      param_file, &params->file, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->file),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid file in File.Dup request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(File::Name_);
  message.set_method_name("Dup");
#endif

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new File_Dup_HandleSyncResponse(
          &result, out_param_error));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void FileProxy::Dup(
    FileRequest in_file, DupCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::File::Dup");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFile_Dup_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::filesystem::mojom::internal::File_Dup_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::filesystem::mojom::FileRequestDataView>(
      in_file, &params->file, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->file),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid file in File.Dup request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(File::Name_);
  message.set_method_name("Dup");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new File_Dup_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
bool FileProxy::Flush(
    ::base::File::Error* out_param_error) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::File::Flush");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFile_Flush_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::filesystem::mojom::internal::File_Flush_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(File::Name_);
  message.set_method_name("Flush");
#endif

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new File_Flush_HandleSyncResponse(
          &result, out_param_error));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void FileProxy::Flush(
    FlushCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::File::Flush");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFile_Flush_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::filesystem::mojom::internal::File_Flush_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(File::Name_);
  message.set_method_name("Flush");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new File_Flush_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
bool FileProxy::Lock(
    ::base::File::Error* out_param_error) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::File::Lock");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFile_Lock_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::filesystem::mojom::internal::File_Lock_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(File::Name_);
  message.set_method_name("Lock");
#endif

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new File_Lock_HandleSyncResponse(
          &result, out_param_error));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void FileProxy::Lock(
    LockCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::File::Lock");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFile_Lock_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::filesystem::mojom::internal::File_Lock_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(File::Name_);
  message.set_method_name("Lock");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new File_Lock_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
bool FileProxy::Unlock(
    ::base::File::Error* out_param_error) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::File::Unlock");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFile_Unlock_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::filesystem::mojom::internal::File_Unlock_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(File::Name_);
  message.set_method_name("Unlock");
#endif

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new File_Unlock_HandleSyncResponse(
          &result, out_param_error));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void FileProxy::Unlock(
    UnlockCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::File::Unlock");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFile_Unlock_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::filesystem::mojom::internal::File_Unlock_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(File::Name_);
  message.set_method_name("Unlock");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new File_Unlock_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
bool FileProxy::AsHandle(
    ::base::File::Error* out_param_error, base::File* out_param_file_handle) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::File::AsHandle");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFile_AsHandle_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::filesystem::mojom::internal::File_AsHandle_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(File::Name_);
  message.set_method_name("AsHandle");
#endif

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new File_AsHandle_HandleSyncResponse(
          &result, out_param_error, out_param_file_handle));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void FileProxy::AsHandle(
    AsHandleCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::File::AsHandle");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFile_AsHandle_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::filesystem::mojom::internal::File_AsHandle_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(File::Name_);
  message.set_method_name("AsHandle");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new File_AsHandle_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class File_Close_ProxyToResponder {
 public:
  static File::CloseCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<File_Close_ProxyToResponder> proxy(
        new File_Close_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&File_Close_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~File_Close_ProxyToResponder() {
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
  File_Close_ProxyToResponder(
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
        << "File::CloseCallback was destroyed without "
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

  DISALLOW_COPY_AND_ASSIGN(File_Close_ProxyToResponder);
};

bool File_Close_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::File::CloseCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::File_Close_ResponseParams_Data* params =
      reinterpret_cast<
          internal::File_Close_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::base::File::Error p_err{};
  File_Close_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadErr(&p_err))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        File::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_err));
  return true;
}

void File_Close_ProxyToResponder::Run(
    ::base::File::Error in_err) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFile_Close_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::filesystem::mojom::internal::File_Close_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::mojo_base::mojom::FileError>(
      in_err, &params->err);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::File::CloseCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(File::Name_);
  message.set_method_name("Close");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool File_Close_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::File_Close_ResponseParams_Data* params =
      reinterpret_cast<internal::File_Close_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::base::File::Error p_err{};
  File_Close_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadErr(&p_err))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        File::Name_, 0, true);
    return false;
  }
  *out_err_ = std::move(p_err);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}
class File_Read_ProxyToResponder {
 public:
  static File::ReadCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<File_Read_ProxyToResponder> proxy(
        new File_Read_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&File_Read_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~File_Read_ProxyToResponder() {
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
  File_Read_ProxyToResponder(
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
        << "File::ReadCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      ::base::File::Error in_error, const base::Optional<std::vector<uint8_t>>& in_bytes_read);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(File_Read_ProxyToResponder);
};

bool File_Read_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::File::ReadCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::File_Read_ResponseParams_Data* params =
      reinterpret_cast<
          internal::File_Read_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::base::File::Error p_error{};
  base::Optional<std::vector<uint8_t>> p_bytes_read{};
  File_Read_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadError(&p_error))
    success = false;
  if (!input_data_view.ReadBytesRead(&p_bytes_read))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        File::Name_, 1, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_error), 
std::move(p_bytes_read));
  return true;
}

void File_Read_ProxyToResponder::Run(
    ::base::File::Error in_error, const base::Optional<std::vector<uint8_t>>& in_bytes_read) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFile_Read_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::filesystem::mojom::internal::File_Read_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::mojo_base::mojom::FileError>(
      in_error, &params->error);
  typename decltype(params->bytes_read)::BaseType::BufferWriter
      bytes_read_writer;
  const mojo::internal::ContainerValidateParams bytes_read_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      in_bytes_read, buffer, &bytes_read_writer, &bytes_read_validate_params,
      &serialization_context);
  params->bytes_read.Set(
      bytes_read_writer.is_null() ? nullptr : bytes_read_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::File::ReadCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(File::Name_);
  message.set_method_name("Read");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool File_Read_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::File_Read_ResponseParams_Data* params =
      reinterpret_cast<internal::File_Read_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::base::File::Error p_error{};
  base::Optional<std::vector<uint8_t>> p_bytes_read{};
  File_Read_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadError(&p_error))
    success = false;
  if (!input_data_view.ReadBytesRead(&p_bytes_read))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        File::Name_, 1, true);
    return false;
  }
  *out_error_ = std::move(p_error);
  *out_bytes_read_ = std::move(p_bytes_read);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}
class File_Write_ProxyToResponder {
 public:
  static File::WriteCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<File_Write_ProxyToResponder> proxy(
        new File_Write_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&File_Write_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~File_Write_ProxyToResponder() {
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
  File_Write_ProxyToResponder(
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
        << "File::WriteCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      ::base::File::Error in_error, uint32_t in_num_bytes_written);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(File_Write_ProxyToResponder);
};

bool File_Write_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::File::WriteCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::File_Write_ResponseParams_Data* params =
      reinterpret_cast<
          internal::File_Write_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::base::File::Error p_error{};
  uint32_t p_num_bytes_written{};
  File_Write_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadError(&p_error))
    success = false;
  p_num_bytes_written = input_data_view.num_bytes_written();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        File::Name_, 2, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_error), 
std::move(p_num_bytes_written));
  return true;
}

void File_Write_ProxyToResponder::Run(
    ::base::File::Error in_error, uint32_t in_num_bytes_written) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFile_Write_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::filesystem::mojom::internal::File_Write_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::mojo_base::mojom::FileError>(
      in_error, &params->error);
  params->num_bytes_written = in_num_bytes_written;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::File::WriteCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(File::Name_);
  message.set_method_name("Write");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool File_Write_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::File_Write_ResponseParams_Data* params =
      reinterpret_cast<internal::File_Write_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::base::File::Error p_error{};
  uint32_t p_num_bytes_written{};
  File_Write_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadError(&p_error))
    success = false;
  p_num_bytes_written = input_data_view.num_bytes_written();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        File::Name_, 2, true);
    return false;
  }
  *out_error_ = std::move(p_error);
  *out_num_bytes_written_ = std::move(p_num_bytes_written);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}
class File_Tell_ProxyToResponder {
 public:
  static File::TellCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<File_Tell_ProxyToResponder> proxy(
        new File_Tell_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&File_Tell_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~File_Tell_ProxyToResponder() {
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
  File_Tell_ProxyToResponder(
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
        << "File::TellCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      ::base::File::Error in_error, int64_t in_position);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(File_Tell_ProxyToResponder);
};

bool File_Tell_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::File::TellCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::File_Tell_ResponseParams_Data* params =
      reinterpret_cast<
          internal::File_Tell_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::base::File::Error p_error{};
  int64_t p_position{};
  File_Tell_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadError(&p_error))
    success = false;
  p_position = input_data_view.position();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        File::Name_, 3, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_error), 
std::move(p_position));
  return true;
}

void File_Tell_ProxyToResponder::Run(
    ::base::File::Error in_error, int64_t in_position) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFile_Tell_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::filesystem::mojom::internal::File_Tell_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::mojo_base::mojom::FileError>(
      in_error, &params->error);
  params->position = in_position;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::File::TellCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(File::Name_);
  message.set_method_name("Tell");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool File_Tell_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::File_Tell_ResponseParams_Data* params =
      reinterpret_cast<internal::File_Tell_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::base::File::Error p_error{};
  int64_t p_position{};
  File_Tell_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadError(&p_error))
    success = false;
  p_position = input_data_view.position();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        File::Name_, 3, true);
    return false;
  }
  *out_error_ = std::move(p_error);
  *out_position_ = std::move(p_position);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}
class File_Seek_ProxyToResponder {
 public:
  static File::SeekCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<File_Seek_ProxyToResponder> proxy(
        new File_Seek_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&File_Seek_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~File_Seek_ProxyToResponder() {
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
  File_Seek_ProxyToResponder(
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
        << "File::SeekCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      ::base::File::Error in_error, int64_t in_position);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(File_Seek_ProxyToResponder);
};

bool File_Seek_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::File::SeekCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::File_Seek_ResponseParams_Data* params =
      reinterpret_cast<
          internal::File_Seek_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::base::File::Error p_error{};
  int64_t p_position{};
  File_Seek_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadError(&p_error))
    success = false;
  p_position = input_data_view.position();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        File::Name_, 4, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_error), 
std::move(p_position));
  return true;
}

void File_Seek_ProxyToResponder::Run(
    ::base::File::Error in_error, int64_t in_position) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFile_Seek_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::filesystem::mojom::internal::File_Seek_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::mojo_base::mojom::FileError>(
      in_error, &params->error);
  params->position = in_position;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::File::SeekCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(File::Name_);
  message.set_method_name("Seek");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool File_Seek_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::File_Seek_ResponseParams_Data* params =
      reinterpret_cast<internal::File_Seek_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::base::File::Error p_error{};
  int64_t p_position{};
  File_Seek_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadError(&p_error))
    success = false;
  p_position = input_data_view.position();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        File::Name_, 4, true);
    return false;
  }
  *out_error_ = std::move(p_error);
  *out_position_ = std::move(p_position);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}
class File_Stat_ProxyToResponder {
 public:
  static File::StatCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<File_Stat_ProxyToResponder> proxy(
        new File_Stat_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&File_Stat_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~File_Stat_ProxyToResponder() {
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
  File_Stat_ProxyToResponder(
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
        << "File::StatCallback was destroyed without "
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

  DISALLOW_COPY_AND_ASSIGN(File_Stat_ProxyToResponder);
};

bool File_Stat_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::File::StatCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::File_Stat_ResponseParams_Data* params =
      reinterpret_cast<
          internal::File_Stat_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::base::File::Error p_error{};
  ::filesystem::mojom::FileInformationPtr p_file_information{};
  File_Stat_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadError(&p_error))
    success = false;
  if (!input_data_view.ReadFileInformation(&p_file_information))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        File::Name_, 5, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_error), 
std::move(p_file_information));
  return true;
}

void File_Stat_ProxyToResponder::Run(
    ::base::File::Error in_error, ::filesystem::mojom::FileInformationPtr in_file_information) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFile_Stat_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::filesystem::mojom::internal::File_Stat_ResponseParams_Data::BufferWriter
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
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::File::StatCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(File::Name_);
  message.set_method_name("Stat");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool File_Stat_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::File_Stat_ResponseParams_Data* params =
      reinterpret_cast<internal::File_Stat_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::base::File::Error p_error{};
  ::filesystem::mojom::FileInformationPtr p_file_information{};
  File_Stat_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadError(&p_error))
    success = false;
  if (!input_data_view.ReadFileInformation(&p_file_information))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        File::Name_, 5, true);
    return false;
  }
  *out_error_ = std::move(p_error);
  *out_file_information_ = std::move(p_file_information);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}
class File_Truncate_ProxyToResponder {
 public:
  static File::TruncateCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<File_Truncate_ProxyToResponder> proxy(
        new File_Truncate_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&File_Truncate_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~File_Truncate_ProxyToResponder() {
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
  File_Truncate_ProxyToResponder(
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
        << "File::TruncateCallback was destroyed without "
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

  DISALLOW_COPY_AND_ASSIGN(File_Truncate_ProxyToResponder);
};

bool File_Truncate_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::File::TruncateCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::File_Truncate_ResponseParams_Data* params =
      reinterpret_cast<
          internal::File_Truncate_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::base::File::Error p_error{};
  File_Truncate_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadError(&p_error))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        File::Name_, 6, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_error));
  return true;
}

void File_Truncate_ProxyToResponder::Run(
    ::base::File::Error in_error) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFile_Truncate_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::filesystem::mojom::internal::File_Truncate_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::mojo_base::mojom::FileError>(
      in_error, &params->error);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::File::TruncateCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(File::Name_);
  message.set_method_name("Truncate");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool File_Truncate_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::File_Truncate_ResponseParams_Data* params =
      reinterpret_cast<internal::File_Truncate_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::base::File::Error p_error{};
  File_Truncate_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadError(&p_error))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        File::Name_, 6, true);
    return false;
  }
  *out_error_ = std::move(p_error);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}
class File_Touch_ProxyToResponder {
 public:
  static File::TouchCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<File_Touch_ProxyToResponder> proxy(
        new File_Touch_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&File_Touch_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~File_Touch_ProxyToResponder() {
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
  File_Touch_ProxyToResponder(
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
        << "File::TouchCallback was destroyed without "
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

  DISALLOW_COPY_AND_ASSIGN(File_Touch_ProxyToResponder);
};

bool File_Touch_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::File::TouchCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::File_Touch_ResponseParams_Data* params =
      reinterpret_cast<
          internal::File_Touch_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::base::File::Error p_error{};
  File_Touch_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadError(&p_error))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        File::Name_, 7, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_error));
  return true;
}

void File_Touch_ProxyToResponder::Run(
    ::base::File::Error in_error) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFile_Touch_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::filesystem::mojom::internal::File_Touch_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::mojo_base::mojom::FileError>(
      in_error, &params->error);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::File::TouchCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(File::Name_);
  message.set_method_name("Touch");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool File_Touch_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::File_Touch_ResponseParams_Data* params =
      reinterpret_cast<internal::File_Touch_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::base::File::Error p_error{};
  File_Touch_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadError(&p_error))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        File::Name_, 7, true);
    return false;
  }
  *out_error_ = std::move(p_error);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}
class File_Dup_ProxyToResponder {
 public:
  static File::DupCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<File_Dup_ProxyToResponder> proxy(
        new File_Dup_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&File_Dup_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~File_Dup_ProxyToResponder() {
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
  File_Dup_ProxyToResponder(
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
        << "File::DupCallback was destroyed without "
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

  DISALLOW_COPY_AND_ASSIGN(File_Dup_ProxyToResponder);
};

bool File_Dup_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::File::DupCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::File_Dup_ResponseParams_Data* params =
      reinterpret_cast<
          internal::File_Dup_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::base::File::Error p_error{};
  File_Dup_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadError(&p_error))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        File::Name_, 8, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_error));
  return true;
}

void File_Dup_ProxyToResponder::Run(
    ::base::File::Error in_error) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFile_Dup_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::filesystem::mojom::internal::File_Dup_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::mojo_base::mojom::FileError>(
      in_error, &params->error);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::File::DupCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(File::Name_);
  message.set_method_name("Dup");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool File_Dup_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::File_Dup_ResponseParams_Data* params =
      reinterpret_cast<internal::File_Dup_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::base::File::Error p_error{};
  File_Dup_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadError(&p_error))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        File::Name_, 8, true);
    return false;
  }
  *out_error_ = std::move(p_error);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}
class File_Flush_ProxyToResponder {
 public:
  static File::FlushCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<File_Flush_ProxyToResponder> proxy(
        new File_Flush_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&File_Flush_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~File_Flush_ProxyToResponder() {
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
  File_Flush_ProxyToResponder(
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
        << "File::FlushCallback was destroyed without "
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

  DISALLOW_COPY_AND_ASSIGN(File_Flush_ProxyToResponder);
};

bool File_Flush_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::File::FlushCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::File_Flush_ResponseParams_Data* params =
      reinterpret_cast<
          internal::File_Flush_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::base::File::Error p_error{};
  File_Flush_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadError(&p_error))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        File::Name_, 9, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_error));
  return true;
}

void File_Flush_ProxyToResponder::Run(
    ::base::File::Error in_error) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFile_Flush_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::filesystem::mojom::internal::File_Flush_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::mojo_base::mojom::FileError>(
      in_error, &params->error);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::File::FlushCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(File::Name_);
  message.set_method_name("Flush");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool File_Flush_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::File_Flush_ResponseParams_Data* params =
      reinterpret_cast<internal::File_Flush_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::base::File::Error p_error{};
  File_Flush_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadError(&p_error))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        File::Name_, 9, true);
    return false;
  }
  *out_error_ = std::move(p_error);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}
class File_Lock_ProxyToResponder {
 public:
  static File::LockCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<File_Lock_ProxyToResponder> proxy(
        new File_Lock_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&File_Lock_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~File_Lock_ProxyToResponder() {
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
  File_Lock_ProxyToResponder(
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
        << "File::LockCallback was destroyed without "
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

  DISALLOW_COPY_AND_ASSIGN(File_Lock_ProxyToResponder);
};

bool File_Lock_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::File::LockCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::File_Lock_ResponseParams_Data* params =
      reinterpret_cast<
          internal::File_Lock_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::base::File::Error p_error{};
  File_Lock_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadError(&p_error))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        File::Name_, 10, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_error));
  return true;
}

void File_Lock_ProxyToResponder::Run(
    ::base::File::Error in_error) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFile_Lock_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::filesystem::mojom::internal::File_Lock_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::mojo_base::mojom::FileError>(
      in_error, &params->error);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::File::LockCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(File::Name_);
  message.set_method_name("Lock");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool File_Lock_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::File_Lock_ResponseParams_Data* params =
      reinterpret_cast<internal::File_Lock_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::base::File::Error p_error{};
  File_Lock_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadError(&p_error))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        File::Name_, 10, true);
    return false;
  }
  *out_error_ = std::move(p_error);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}
class File_Unlock_ProxyToResponder {
 public:
  static File::UnlockCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<File_Unlock_ProxyToResponder> proxy(
        new File_Unlock_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&File_Unlock_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~File_Unlock_ProxyToResponder() {
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
  File_Unlock_ProxyToResponder(
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
        << "File::UnlockCallback was destroyed without "
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

  DISALLOW_COPY_AND_ASSIGN(File_Unlock_ProxyToResponder);
};

bool File_Unlock_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::File::UnlockCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::File_Unlock_ResponseParams_Data* params =
      reinterpret_cast<
          internal::File_Unlock_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::base::File::Error p_error{};
  File_Unlock_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadError(&p_error))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        File::Name_, 11, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_error));
  return true;
}

void File_Unlock_ProxyToResponder::Run(
    ::base::File::Error in_error) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFile_Unlock_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::filesystem::mojom::internal::File_Unlock_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::mojo_base::mojom::FileError>(
      in_error, &params->error);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::File::UnlockCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(File::Name_);
  message.set_method_name("Unlock");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool File_Unlock_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::File_Unlock_ResponseParams_Data* params =
      reinterpret_cast<internal::File_Unlock_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::base::File::Error p_error{};
  File_Unlock_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadError(&p_error))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        File::Name_, 11, true);
    return false;
  }
  *out_error_ = std::move(p_error);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}
class File_AsHandle_ProxyToResponder {
 public:
  static File::AsHandleCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<File_AsHandle_ProxyToResponder> proxy(
        new File_AsHandle_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&File_AsHandle_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~File_AsHandle_ProxyToResponder() {
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
  File_AsHandle_ProxyToResponder(
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
        << "File::AsHandleCallback was destroyed without "
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

  DISALLOW_COPY_AND_ASSIGN(File_AsHandle_ProxyToResponder);
};

bool File_AsHandle_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::File::AsHandleCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::File_AsHandle_ResponseParams_Data* params =
      reinterpret_cast<
          internal::File_AsHandle_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::base::File::Error p_error{};
  base::File p_file_handle{};
  File_AsHandle_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadError(&p_error))
    success = false;
  if (!input_data_view.ReadFileHandle(&p_file_handle))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        File::Name_, 12, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_error), 
std::move(p_file_handle));
  return true;
}

void File_AsHandle_ProxyToResponder::Run(
    ::base::File::Error in_error, base::File in_file_handle) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFile_AsHandle_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::filesystem::mojom::internal::File_AsHandle_ResponseParams_Data::BufferWriter
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
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::File::AsHandleCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(File::Name_);
  message.set_method_name("AsHandle");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool File_AsHandle_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::File_AsHandle_ResponseParams_Data* params =
      reinterpret_cast<internal::File_AsHandle_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::base::File::Error p_error{};
  base::File p_file_handle{};
  File_AsHandle_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadError(&p_error))
    success = false;
  if (!input_data_view.ReadFileHandle(&p_file_handle))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        File::Name_, 12, true);
    return false;
  }
  *out_error_ = std::move(p_error);
  *out_file_handle_ = std::move(p_file_handle);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}

// static
bool FileStubDispatch::Accept(
    File* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kFile_Close_Name: {
      break;
    }
    case internal::kFile_Read_Name: {
      break;
    }
    case internal::kFile_Write_Name: {
      break;
    }
    case internal::kFile_Tell_Name: {
      break;
    }
    case internal::kFile_Seek_Name: {
      break;
    }
    case internal::kFile_Stat_Name: {
      break;
    }
    case internal::kFile_Truncate_Name: {
      break;
    }
    case internal::kFile_Touch_Name: {
      break;
    }
    case internal::kFile_Dup_Name: {
      break;
    }
    case internal::kFile_Flush_Name: {
      break;
    }
    case internal::kFile_Lock_Name: {
      break;
    }
    case internal::kFile_Unlock_Name: {
      break;
    }
    case internal::kFile_AsHandle_Name: {
      break;
    }
  }
  return false;
}

// static
bool FileStubDispatch::AcceptWithResponder(
    File* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kFile_Close_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::File::Close",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::File_Close_Params_Data* params =
          reinterpret_cast<
              internal::File_Close_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      File_Close_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            File::Name_, 0, false);
        return false;
      }
      File::CloseCallback callback =
          File_Close_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Close(std::move(callback));
      return true;
    }
    case internal::kFile_Read_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::File::Read",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::File_Read_Params_Data* params =
          reinterpret_cast<
              internal::File_Read_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint32_t p_num_bytes_to_read{};
      int64_t p_offset{};
      ::filesystem::mojom::Whence p_whence{};
      File_Read_ParamsDataView input_data_view(params, &serialization_context);
      
      p_num_bytes_to_read = input_data_view.num_bytes_to_read();
      p_offset = input_data_view.offset();
      if (!input_data_view.ReadWhence(&p_whence))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            File::Name_, 1, false);
        return false;
      }
      File::ReadCallback callback =
          File_Read_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Read(
std::move(p_num_bytes_to_read), 
std::move(p_offset), 
std::move(p_whence), std::move(callback));
      return true;
    }
    case internal::kFile_Write_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::File::Write",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::File_Write_Params_Data* params =
          reinterpret_cast<
              internal::File_Write_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::vector<uint8_t> p_bytes_to_write{};
      int64_t p_offset{};
      ::filesystem::mojom::Whence p_whence{};
      File_Write_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadBytesToWrite(&p_bytes_to_write))
        success = false;
      p_offset = input_data_view.offset();
      if (!input_data_view.ReadWhence(&p_whence))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            File::Name_, 2, false);
        return false;
      }
      File::WriteCallback callback =
          File_Write_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Write(
std::move(p_bytes_to_write), 
std::move(p_offset), 
std::move(p_whence), std::move(callback));
      return true;
    }
    case internal::kFile_Tell_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::File::Tell",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::File_Tell_Params_Data* params =
          reinterpret_cast<
              internal::File_Tell_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      File_Tell_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            File::Name_, 3, false);
        return false;
      }
      File::TellCallback callback =
          File_Tell_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Tell(std::move(callback));
      return true;
    }
    case internal::kFile_Seek_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::File::Seek",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::File_Seek_Params_Data* params =
          reinterpret_cast<
              internal::File_Seek_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int64_t p_offset{};
      ::filesystem::mojom::Whence p_whence{};
      File_Seek_ParamsDataView input_data_view(params, &serialization_context);
      
      p_offset = input_data_view.offset();
      if (!input_data_view.ReadWhence(&p_whence))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            File::Name_, 4, false);
        return false;
      }
      File::SeekCallback callback =
          File_Seek_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Seek(
std::move(p_offset), 
std::move(p_whence), std::move(callback));
      return true;
    }
    case internal::kFile_Stat_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::File::Stat",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::File_Stat_Params_Data* params =
          reinterpret_cast<
              internal::File_Stat_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      File_Stat_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            File::Name_, 5, false);
        return false;
      }
      File::StatCallback callback =
          File_Stat_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Stat(std::move(callback));
      return true;
    }
    case internal::kFile_Truncate_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::File::Truncate",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::File_Truncate_Params_Data* params =
          reinterpret_cast<
              internal::File_Truncate_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int64_t p_size{};
      File_Truncate_ParamsDataView input_data_view(params, &serialization_context);
      
      p_size = input_data_view.size();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            File::Name_, 6, false);
        return false;
      }
      File::TruncateCallback callback =
          File_Truncate_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Truncate(
std::move(p_size), std::move(callback));
      return true;
    }
    case internal::kFile_Touch_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::File::Touch",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::File_Touch_Params_Data* params =
          reinterpret_cast<
              internal::File_Touch_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::filesystem::mojom::TimespecOrNowPtr p_atime{};
      ::filesystem::mojom::TimespecOrNowPtr p_mtime{};
      File_Touch_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadAtime(&p_atime))
        success = false;
      if (!input_data_view.ReadMtime(&p_mtime))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            File::Name_, 7, false);
        return false;
      }
      File::TouchCallback callback =
          File_Touch_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Touch(
std::move(p_atime), 
std::move(p_mtime), std::move(callback));
      return true;
    }
    case internal::kFile_Dup_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::File::Dup",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::File_Dup_Params_Data* params =
          reinterpret_cast<
              internal::File_Dup_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      FileRequest p_file{};
      File_Dup_ParamsDataView input_data_view(params, &serialization_context);
      
      p_file =
          input_data_view.TakeFile<decltype(p_file)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            File::Name_, 8, false);
        return false;
      }
      File::DupCallback callback =
          File_Dup_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Dup(
std::move(p_file), std::move(callback));
      return true;
    }
    case internal::kFile_Flush_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::File::Flush",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::File_Flush_Params_Data* params =
          reinterpret_cast<
              internal::File_Flush_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      File_Flush_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            File::Name_, 9, false);
        return false;
      }
      File::FlushCallback callback =
          File_Flush_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Flush(std::move(callback));
      return true;
    }
    case internal::kFile_Lock_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::File::Lock",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::File_Lock_Params_Data* params =
          reinterpret_cast<
              internal::File_Lock_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      File_Lock_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            File::Name_, 10, false);
        return false;
      }
      File::LockCallback callback =
          File_Lock_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Lock(std::move(callback));
      return true;
    }
    case internal::kFile_Unlock_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::File::Unlock",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::File_Unlock_Params_Data* params =
          reinterpret_cast<
              internal::File_Unlock_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      File_Unlock_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            File::Name_, 11, false);
        return false;
      }
      File::UnlockCallback callback =
          File_Unlock_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Unlock(std::move(callback));
      return true;
    }
    case internal::kFile_AsHandle_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::File::AsHandle",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::File_AsHandle_Params_Data* params =
          reinterpret_cast<
              internal::File_AsHandle_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      File_AsHandle_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            File::Name_, 12, false);
        return false;
      }
      File::AsHandleCallback callback =
          File_AsHandle_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->AsHandle(std::move(callback));
      return true;
    }
  }
  return false;
}

bool FileRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "File RequestValidator");

  switch (message->header()->name) {
    case internal::kFile_Close_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::File_Close_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFile_Read_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::File_Read_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFile_Write_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::File_Write_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFile_Tell_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::File_Tell_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFile_Seek_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::File_Seek_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFile_Stat_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::File_Stat_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFile_Truncate_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::File_Truncate_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFile_Touch_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::File_Touch_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFile_Dup_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::File_Dup_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFile_Flush_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::File_Flush_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFile_Lock_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::File_Lock_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFile_Unlock_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::File_Unlock_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFile_AsHandle_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::File_AsHandle_Params_Data>(
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

bool FileResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "File ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kFile_Close_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::File_Close_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFile_Read_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::File_Read_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFile_Write_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::File_Write_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFile_Tell_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::File_Tell_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFile_Seek_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::File_Seek_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFile_Stat_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::File_Stat_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFile_Truncate_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::File_Truncate_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFile_Touch_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::File_Touch_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFile_Dup_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::File_Dup_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFile_Flush_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::File_Flush_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFile_Lock_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::File_Lock_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFile_Unlock_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::File_Unlock_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFile_AsHandle_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::File_AsHandle_ResponseParams_Data>(
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

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif