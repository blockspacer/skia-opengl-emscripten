// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_FILE_PUBLIC_MOJOM_FILE_SYSTEM_MOJOM_PARAMS_DATA_H_
#define SERVICES_FILE_PUBLIC_MOJOM_FILE_SYSTEM_MOJOM_PARAMS_DATA_H_

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
namespace file {
namespace mojom {
namespace internal {
class  FileSystem_GetDirectory_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FileSystem_GetDirectory_Params_Data));
      new (data()) FileSystem_GetDirectory_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FileSystem_GetDirectory_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FileSystem_GetDirectory_Params_Data>(index_);
    }
    FileSystem_GetDirectory_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data dir;
  uint8_t padfinal_[4];

 private:
  FileSystem_GetDirectory_Params_Data();
  ~FileSystem_GetDirectory_Params_Data() = delete;
};
static_assert(sizeof(FileSystem_GetDirectory_Params_Data) == 16,
              "Bad sizeof(FileSystem_GetDirectory_Params_Data)");
class  FileSystem_GetDirectory_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FileSystem_GetDirectory_ResponseParams_Data));
      new (data()) FileSystem_GetDirectory_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FileSystem_GetDirectory_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FileSystem_GetDirectory_ResponseParams_Data>(index_);
    }
    FileSystem_GetDirectory_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  FileSystem_GetDirectory_ResponseParams_Data();
  ~FileSystem_GetDirectory_ResponseParams_Data() = delete;
};
static_assert(sizeof(FileSystem_GetDirectory_ResponseParams_Data) == 8,
              "Bad sizeof(FileSystem_GetDirectory_ResponseParams_Data)");
class  FileSystem_GetSubDirectory_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FileSystem_GetSubDirectory_Params_Data));
      new (data()) FileSystem_GetSubDirectory_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FileSystem_GetSubDirectory_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FileSystem_GetSubDirectory_Params_Data>(index_);
    }
    FileSystem_GetSubDirectory_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> dir_path;
  mojo::internal::Handle_Data dir;
  uint8_t padfinal_[4];

 private:
  FileSystem_GetSubDirectory_Params_Data();
  ~FileSystem_GetSubDirectory_Params_Data() = delete;
};
static_assert(sizeof(FileSystem_GetSubDirectory_Params_Data) == 24,
              "Bad sizeof(FileSystem_GetSubDirectory_Params_Data)");
class  FileSystem_GetSubDirectory_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FileSystem_GetSubDirectory_ResponseParams_Data));
      new (data()) FileSystem_GetSubDirectory_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FileSystem_GetSubDirectory_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FileSystem_GetSubDirectory_ResponseParams_Data>(index_);
    }
    FileSystem_GetSubDirectory_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t err;
  uint8_t padfinal_[4];

 private:
  FileSystem_GetSubDirectory_ResponseParams_Data();
  ~FileSystem_GetSubDirectory_ResponseParams_Data() = delete;
};
static_assert(sizeof(FileSystem_GetSubDirectory_ResponseParams_Data) == 16,
              "Bad sizeof(FileSystem_GetSubDirectory_ResponseParams_Data)");

}  // namespace internal
class FileSystem_GetDirectory_ParamsDataView {
 public:
  FileSystem_GetDirectory_ParamsDataView() {}

  FileSystem_GetDirectory_ParamsDataView(
      internal::FileSystem_GetDirectory_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeDir() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::filesystem::mojom::DirectoryRequestDataView>(
            &data_->dir, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::FileSystem_GetDirectory_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FileSystem_GetDirectory_ResponseParamsDataView {
 public:
  FileSystem_GetDirectory_ResponseParamsDataView() {}

  FileSystem_GetDirectory_ResponseParamsDataView(
      internal::FileSystem_GetDirectory_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::FileSystem_GetDirectory_ResponseParams_Data* data_ = nullptr;
};

class FileSystem_GetSubDirectory_ParamsDataView {
 public:
  FileSystem_GetSubDirectory_ParamsDataView() {}

  FileSystem_GetSubDirectory_ParamsDataView(
      internal::FileSystem_GetSubDirectory_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDirPathDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDirPath(UserType* output) {
    auto* pointer = data_->dir_path.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeDir() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::filesystem::mojom::DirectoryRequestDataView>(
            &data_->dir, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::FileSystem_GetSubDirectory_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FileSystem_GetSubDirectory_ResponseParamsDataView {
 public:
  FileSystem_GetSubDirectory_ResponseParamsDataView() {}

  FileSystem_GetSubDirectory_ResponseParamsDataView(
      internal::FileSystem_GetSubDirectory_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadErr(UserType* output) const {
    auto data_value = data_->err;
    return mojo::internal::Deserialize<::mojo_base::mojom::FileError>(
        data_value, output);
  }

  ::mojo_base::mojom::FileError err() const {
    return static_cast<::mojo_base::mojom::FileError>(data_->err);
  }
 private:
  internal::FileSystem_GetSubDirectory_ResponseParams_Data* data_ = nullptr;
};






inline void FileSystem_GetSubDirectory_ParamsDataView::GetDirPathDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->dir_path.Get();
  *output = mojo::StringDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace file

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // SERVICES_FILE_PUBLIC_MOJOM_FILE_SYSTEM_MOJOM_PARAMS_DATA_H_