// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_SERVICES_FILESYSTEM_PUBLIC_INTERFACES_FILE_SYSTEM_MOJOM_PARAMS_DATA_H_
#define COMPONENTS_SERVICES_FILESYSTEM_PUBLIC_INTERFACES_FILE_SYSTEM_MOJOM_PARAMS_DATA_H_

#include "base/logging.h"
#include "base/macros.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#elif defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4056)
#pragma warning(disable:4065)
#pragma warning(disable:4756)
#endif
namespace filesystem {
namespace mojom {
namespace internal {
class  FileSystem_OpenTempDirectory_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FileSystem_OpenTempDirectory_Params_Data));
      new (data()) FileSystem_OpenTempDirectory_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FileSystem_OpenTempDirectory_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FileSystem_OpenTempDirectory_Params_Data>(index_);
    }
    FileSystem_OpenTempDirectory_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data directory;
  uint8_t padfinal_[4];

 private:
  FileSystem_OpenTempDirectory_Params_Data();
  ~FileSystem_OpenTempDirectory_Params_Data() = delete;
};
static_assert(sizeof(FileSystem_OpenTempDirectory_Params_Data) == 16,
              "Bad sizeof(FileSystem_OpenTempDirectory_Params_Data)");
class  FileSystem_OpenTempDirectory_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FileSystem_OpenTempDirectory_ResponseParams_Data));
      new (data()) FileSystem_OpenTempDirectory_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FileSystem_OpenTempDirectory_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FileSystem_OpenTempDirectory_ResponseParams_Data>(index_);
    }
    FileSystem_OpenTempDirectory_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t error;
  uint8_t padfinal_[4];

 private:
  FileSystem_OpenTempDirectory_ResponseParams_Data();
  ~FileSystem_OpenTempDirectory_ResponseParams_Data() = delete;
};
static_assert(sizeof(FileSystem_OpenTempDirectory_ResponseParams_Data) == 16,
              "Bad sizeof(FileSystem_OpenTempDirectory_ResponseParams_Data)");
class  FileSystem_OpenPersistentFileSystem_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FileSystem_OpenPersistentFileSystem_Params_Data));
      new (data()) FileSystem_OpenPersistentFileSystem_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FileSystem_OpenPersistentFileSystem_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FileSystem_OpenPersistentFileSystem_Params_Data>(index_);
    }
    FileSystem_OpenPersistentFileSystem_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data directory;
  uint8_t padfinal_[4];

 private:
  FileSystem_OpenPersistentFileSystem_Params_Data();
  ~FileSystem_OpenPersistentFileSystem_Params_Data() = delete;
};
static_assert(sizeof(FileSystem_OpenPersistentFileSystem_Params_Data) == 16,
              "Bad sizeof(FileSystem_OpenPersistentFileSystem_Params_Data)");
class  FileSystem_OpenPersistentFileSystem_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FileSystem_OpenPersistentFileSystem_ResponseParams_Data));
      new (data()) FileSystem_OpenPersistentFileSystem_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FileSystem_OpenPersistentFileSystem_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FileSystem_OpenPersistentFileSystem_ResponseParams_Data>(index_);
    }
    FileSystem_OpenPersistentFileSystem_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t error;
  uint8_t padfinal_[4];

 private:
  FileSystem_OpenPersistentFileSystem_ResponseParams_Data();
  ~FileSystem_OpenPersistentFileSystem_ResponseParams_Data() = delete;
};
static_assert(sizeof(FileSystem_OpenPersistentFileSystem_ResponseParams_Data) == 16,
              "Bad sizeof(FileSystem_OpenPersistentFileSystem_ResponseParams_Data)");

}  // namespace internal
class FileSystem_OpenTempDirectory_ParamsDataView {
 public:
  FileSystem_OpenTempDirectory_ParamsDataView() {}

  FileSystem_OpenTempDirectory_ParamsDataView(
      internal::FileSystem_OpenTempDirectory_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeDirectory() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::filesystem::mojom::DirectoryRequestDataView>(
            &data_->directory, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::FileSystem_OpenTempDirectory_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FileSystem_OpenTempDirectory_ResponseParamsDataView {
 public:
  FileSystem_OpenTempDirectory_ResponseParamsDataView() {}

  FileSystem_OpenTempDirectory_ResponseParamsDataView(
      internal::FileSystem_OpenTempDirectory_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadError(UserType* output) const {
    auto data_value = data_->error;
    return mojo::internal::Deserialize<::mojo_base::mojom::FileError>(
        data_value, output);
  }

  ::mojo_base::mojom::FileError error() const {
    return static_cast<::mojo_base::mojom::FileError>(data_->error);
  }
 private:
  internal::FileSystem_OpenTempDirectory_ResponseParams_Data* data_ = nullptr;
};

class FileSystem_OpenPersistentFileSystem_ParamsDataView {
 public:
  FileSystem_OpenPersistentFileSystem_ParamsDataView() {}

  FileSystem_OpenPersistentFileSystem_ParamsDataView(
      internal::FileSystem_OpenPersistentFileSystem_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeDirectory() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::filesystem::mojom::DirectoryRequestDataView>(
            &data_->directory, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::FileSystem_OpenPersistentFileSystem_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FileSystem_OpenPersistentFileSystem_ResponseParamsDataView {
 public:
  FileSystem_OpenPersistentFileSystem_ResponseParamsDataView() {}

  FileSystem_OpenPersistentFileSystem_ResponseParamsDataView(
      internal::FileSystem_OpenPersistentFileSystem_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadError(UserType* output) const {
    auto data_value = data_->error;
    return mojo::internal::Deserialize<::mojo_base::mojom::FileError>(
        data_value, output);
  }

  ::mojo_base::mojom::FileError error() const {
    return static_cast<::mojo_base::mojom::FileError>(data_->error);
  }
 private:
  internal::FileSystem_OpenPersistentFileSystem_ResponseParams_Data* data_ = nullptr;
};









}  // namespace mojom
}  // namespace filesystem

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // COMPONENTS_SERVICES_FILESYSTEM_PUBLIC_INTERFACES_FILE_SYSTEM_MOJOM_PARAMS_DATA_H_