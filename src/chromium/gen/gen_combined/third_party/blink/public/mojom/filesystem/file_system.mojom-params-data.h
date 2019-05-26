// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_FILESYSTEM_FILE_SYSTEM_MOJOM_PARAMS_DATA_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_FILESYSTEM_FILE_SYSTEM_MOJOM_PARAMS_DATA_H_

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
namespace blink {
namespace mojom {
namespace internal {
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) FileSystemCancellableOperation_Cancel_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FileSystemCancellableOperation_Cancel_Params_Data));
      new (data()) FileSystemCancellableOperation_Cancel_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FileSystemCancellableOperation_Cancel_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FileSystemCancellableOperation_Cancel_Params_Data>(index_);
    }
    FileSystemCancellableOperation_Cancel_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  FileSystemCancellableOperation_Cancel_Params_Data();
  ~FileSystemCancellableOperation_Cancel_Params_Data() = delete;
};
static_assert(sizeof(FileSystemCancellableOperation_Cancel_Params_Data) == 8,
              "Bad sizeof(FileSystemCancellableOperation_Cancel_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) FileSystemCancellableOperation_Cancel_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FileSystemCancellableOperation_Cancel_ResponseParams_Data));
      new (data()) FileSystemCancellableOperation_Cancel_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FileSystemCancellableOperation_Cancel_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FileSystemCancellableOperation_Cancel_ResponseParams_Data>(index_);
    }
    FileSystemCancellableOperation_Cancel_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t error_code;
  uint8_t padfinal_[4];

 private:
  FileSystemCancellableOperation_Cancel_ResponseParams_Data();
  ~FileSystemCancellableOperation_Cancel_ResponseParams_Data() = delete;
};
static_assert(sizeof(FileSystemCancellableOperation_Cancel_ResponseParams_Data) == 16,
              "Bad sizeof(FileSystemCancellableOperation_Cancel_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) FileSystemOperationListener_ResultsRetrieved_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FileSystemOperationListener_ResultsRetrieved_Params_Data));
      new (data()) FileSystemOperationListener_ResultsRetrieved_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FileSystemOperationListener_ResultsRetrieved_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FileSystemOperationListener_ResultsRetrieved_Params_Data>(index_);
    }
    FileSystemOperationListener_ResultsRetrieved_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::filesystem::mojom::internal::DirectoryEntry_Data>>> entries;
  uint8_t has_more : 1;
  uint8_t padfinal_[7];

 private:
  FileSystemOperationListener_ResultsRetrieved_Params_Data();
  ~FileSystemOperationListener_ResultsRetrieved_Params_Data() = delete;
};
static_assert(sizeof(FileSystemOperationListener_ResultsRetrieved_Params_Data) == 24,
              "Bad sizeof(FileSystemOperationListener_ResultsRetrieved_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) FileSystemOperationListener_DidWrite_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FileSystemOperationListener_DidWrite_Params_Data));
      new (data()) FileSystemOperationListener_DidWrite_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FileSystemOperationListener_DidWrite_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FileSystemOperationListener_DidWrite_Params_Data>(index_);
    }
    FileSystemOperationListener_DidWrite_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int64_t byte_count;
  uint8_t complete : 1;
  uint8_t padfinal_[7];

 private:
  FileSystemOperationListener_DidWrite_Params_Data();
  ~FileSystemOperationListener_DidWrite_Params_Data() = delete;
};
static_assert(sizeof(FileSystemOperationListener_DidWrite_Params_Data) == 24,
              "Bad sizeof(FileSystemOperationListener_DidWrite_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) FileSystemOperationListener_ErrorOccurred_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FileSystemOperationListener_ErrorOccurred_Params_Data));
      new (data()) FileSystemOperationListener_ErrorOccurred_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FileSystemOperationListener_ErrorOccurred_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FileSystemOperationListener_ErrorOccurred_Params_Data>(index_);
    }
    FileSystemOperationListener_ErrorOccurred_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t error_code;
  uint8_t padfinal_[4];

 private:
  FileSystemOperationListener_ErrorOccurred_Params_Data();
  ~FileSystemOperationListener_ErrorOccurred_Params_Data() = delete;
};
static_assert(sizeof(FileSystemOperationListener_ErrorOccurred_Params_Data) == 16,
              "Bad sizeof(FileSystemOperationListener_ErrorOccurred_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ReceivedSnapshotListener_DidReceiveSnapshotFile_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ReceivedSnapshotListener_DidReceiveSnapshotFile_Params_Data));
      new (data()) ReceivedSnapshotListener_DidReceiveSnapshotFile_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ReceivedSnapshotListener_DidReceiveSnapshotFile_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ReceivedSnapshotListener_DidReceiveSnapshotFile_Params_Data>(index_);
    }
    ReceivedSnapshotListener_DidReceiveSnapshotFile_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  ReceivedSnapshotListener_DidReceiveSnapshotFile_Params_Data();
  ~ReceivedSnapshotListener_DidReceiveSnapshotFile_Params_Data() = delete;
};
static_assert(sizeof(ReceivedSnapshotListener_DidReceiveSnapshotFile_Params_Data) == 8,
              "Bad sizeof(ReceivedSnapshotListener_DidReceiveSnapshotFile_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) FileSystemManager_Open_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FileSystemManager_Open_Params_Data));
      new (data()) FileSystemManager_Open_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FileSystemManager_Open_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FileSystemManager_Open_Params_Data>(index_);
    }
    FileSystemManager_Open_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Origin_Data> origin;
  int32_t file_system_type;
  uint8_t padfinal_[4];

 private:
  FileSystemManager_Open_Params_Data();
  ~FileSystemManager_Open_Params_Data() = delete;
};
static_assert(sizeof(FileSystemManager_Open_Params_Data) == 24,
              "Bad sizeof(FileSystemManager_Open_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) FileSystemManager_Open_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FileSystemManager_Open_ResponseParams_Data));
      new (data()) FileSystemManager_Open_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FileSystemManager_Open_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FileSystemManager_Open_ResponseParams_Data>(index_);
    }
    FileSystemManager_Open_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> name;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> root_url;
  int32_t error_code;
  uint8_t padfinal_[4];

 private:
  FileSystemManager_Open_ResponseParams_Data();
  ~FileSystemManager_Open_ResponseParams_Data() = delete;
};
static_assert(sizeof(FileSystemManager_Open_ResponseParams_Data) == 32,
              "Bad sizeof(FileSystemManager_Open_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) FileSystemManager_ResolveURL_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FileSystemManager_ResolveURL_Params_Data));
      new (data()) FileSystemManager_ResolveURL_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FileSystemManager_ResolveURL_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FileSystemManager_ResolveURL_Params_Data>(index_);
    }
    FileSystemManager_ResolveURL_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> filesystem_url;

 private:
  FileSystemManager_ResolveURL_Params_Data();
  ~FileSystemManager_ResolveURL_Params_Data() = delete;
};
static_assert(sizeof(FileSystemManager_ResolveURL_Params_Data) == 16,
              "Bad sizeof(FileSystemManager_ResolveURL_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) FileSystemManager_ResolveURL_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FileSystemManager_ResolveURL_ResponseParams_Data));
      new (data()) FileSystemManager_ResolveURL_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FileSystemManager_ResolveURL_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FileSystemManager_ResolveURL_ResponseParams_Data>(index_);
    }
    FileSystemManager_ResolveURL_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::FileSystemInfo_Data> info;
  mojo::internal::Pointer<::mojo_base::mojom::internal::FilePath_Data> file_path;
  uint8_t is_directory : 1;
  uint8_t pad2_[3];
  int32_t error_code;

 private:
  FileSystemManager_ResolveURL_ResponseParams_Data();
  ~FileSystemManager_ResolveURL_ResponseParams_Data() = delete;
};
static_assert(sizeof(FileSystemManager_ResolveURL_ResponseParams_Data) == 32,
              "Bad sizeof(FileSystemManager_ResolveURL_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) FileSystemManager_Move_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FileSystemManager_Move_Params_Data));
      new (data()) FileSystemManager_Move_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FileSystemManager_Move_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FileSystemManager_Move_Params_Data>(index_);
    }
    FileSystemManager_Move_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> src_path;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> dest_path;

 private:
  FileSystemManager_Move_Params_Data();
  ~FileSystemManager_Move_Params_Data() = delete;
};
static_assert(sizeof(FileSystemManager_Move_Params_Data) == 24,
              "Bad sizeof(FileSystemManager_Move_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) FileSystemManager_Move_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FileSystemManager_Move_ResponseParams_Data));
      new (data()) FileSystemManager_Move_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FileSystemManager_Move_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FileSystemManager_Move_ResponseParams_Data>(index_);
    }
    FileSystemManager_Move_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t error_code;
  uint8_t padfinal_[4];

 private:
  FileSystemManager_Move_ResponseParams_Data();
  ~FileSystemManager_Move_ResponseParams_Data() = delete;
};
static_assert(sizeof(FileSystemManager_Move_ResponseParams_Data) == 16,
              "Bad sizeof(FileSystemManager_Move_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) FileSystemManager_Copy_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FileSystemManager_Copy_Params_Data));
      new (data()) FileSystemManager_Copy_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FileSystemManager_Copy_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FileSystemManager_Copy_Params_Data>(index_);
    }
    FileSystemManager_Copy_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> src_path;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> dest_path;

 private:
  FileSystemManager_Copy_Params_Data();
  ~FileSystemManager_Copy_Params_Data() = delete;
};
static_assert(sizeof(FileSystemManager_Copy_Params_Data) == 24,
              "Bad sizeof(FileSystemManager_Copy_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) FileSystemManager_Copy_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FileSystemManager_Copy_ResponseParams_Data));
      new (data()) FileSystemManager_Copy_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FileSystemManager_Copy_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FileSystemManager_Copy_ResponseParams_Data>(index_);
    }
    FileSystemManager_Copy_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t error_code;
  uint8_t padfinal_[4];

 private:
  FileSystemManager_Copy_ResponseParams_Data();
  ~FileSystemManager_Copy_ResponseParams_Data() = delete;
};
static_assert(sizeof(FileSystemManager_Copy_ResponseParams_Data) == 16,
              "Bad sizeof(FileSystemManager_Copy_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) FileSystemManager_Remove_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FileSystemManager_Remove_Params_Data));
      new (data()) FileSystemManager_Remove_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FileSystemManager_Remove_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FileSystemManager_Remove_Params_Data>(index_);
    }
    FileSystemManager_Remove_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> path;
  uint8_t recursive : 1;
  uint8_t padfinal_[7];

 private:
  FileSystemManager_Remove_Params_Data();
  ~FileSystemManager_Remove_Params_Data() = delete;
};
static_assert(sizeof(FileSystemManager_Remove_Params_Data) == 24,
              "Bad sizeof(FileSystemManager_Remove_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) FileSystemManager_Remove_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FileSystemManager_Remove_ResponseParams_Data));
      new (data()) FileSystemManager_Remove_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FileSystemManager_Remove_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FileSystemManager_Remove_ResponseParams_Data>(index_);
    }
    FileSystemManager_Remove_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t error_code;
  uint8_t padfinal_[4];

 private:
  FileSystemManager_Remove_ResponseParams_Data();
  ~FileSystemManager_Remove_ResponseParams_Data() = delete;
};
static_assert(sizeof(FileSystemManager_Remove_ResponseParams_Data) == 16,
              "Bad sizeof(FileSystemManager_Remove_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) FileSystemManager_ReadMetadata_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FileSystemManager_ReadMetadata_Params_Data));
      new (data()) FileSystemManager_ReadMetadata_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FileSystemManager_ReadMetadata_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FileSystemManager_ReadMetadata_Params_Data>(index_);
    }
    FileSystemManager_ReadMetadata_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> path;

 private:
  FileSystemManager_ReadMetadata_Params_Data();
  ~FileSystemManager_ReadMetadata_Params_Data() = delete;
};
static_assert(sizeof(FileSystemManager_ReadMetadata_Params_Data) == 16,
              "Bad sizeof(FileSystemManager_ReadMetadata_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) FileSystemManager_ReadMetadata_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FileSystemManager_ReadMetadata_ResponseParams_Data));
      new (data()) FileSystemManager_ReadMetadata_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FileSystemManager_ReadMetadata_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FileSystemManager_ReadMetadata_ResponseParams_Data>(index_);
    }
    FileSystemManager_ReadMetadata_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::FileInfo_Data> file_info;
  int32_t error_code;
  uint8_t padfinal_[4];

 private:
  FileSystemManager_ReadMetadata_ResponseParams_Data();
  ~FileSystemManager_ReadMetadata_ResponseParams_Data() = delete;
};
static_assert(sizeof(FileSystemManager_ReadMetadata_ResponseParams_Data) == 24,
              "Bad sizeof(FileSystemManager_ReadMetadata_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) FileSystemManager_Create_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FileSystemManager_Create_Params_Data));
      new (data()) FileSystemManager_Create_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FileSystemManager_Create_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FileSystemManager_Create_Params_Data>(index_);
    }
    FileSystemManager_Create_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> path;
  uint8_t exclusive : 1;
  uint8_t is_directory : 1;
  uint8_t recursive : 1;
  uint8_t padfinal_[7];

 private:
  FileSystemManager_Create_Params_Data();
  ~FileSystemManager_Create_Params_Data() = delete;
};
static_assert(sizeof(FileSystemManager_Create_Params_Data) == 24,
              "Bad sizeof(FileSystemManager_Create_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) FileSystemManager_Create_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FileSystemManager_Create_ResponseParams_Data));
      new (data()) FileSystemManager_Create_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FileSystemManager_Create_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FileSystemManager_Create_ResponseParams_Data>(index_);
    }
    FileSystemManager_Create_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t error_code;
  uint8_t padfinal_[4];

 private:
  FileSystemManager_Create_ResponseParams_Data();
  ~FileSystemManager_Create_ResponseParams_Data() = delete;
};
static_assert(sizeof(FileSystemManager_Create_ResponseParams_Data) == 16,
              "Bad sizeof(FileSystemManager_Create_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) FileSystemManager_Exists_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FileSystemManager_Exists_Params_Data));
      new (data()) FileSystemManager_Exists_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FileSystemManager_Exists_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FileSystemManager_Exists_Params_Data>(index_);
    }
    FileSystemManager_Exists_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> path;
  uint8_t is_directory : 1;
  uint8_t padfinal_[7];

 private:
  FileSystemManager_Exists_Params_Data();
  ~FileSystemManager_Exists_Params_Data() = delete;
};
static_assert(sizeof(FileSystemManager_Exists_Params_Data) == 24,
              "Bad sizeof(FileSystemManager_Exists_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) FileSystemManager_Exists_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FileSystemManager_Exists_ResponseParams_Data));
      new (data()) FileSystemManager_Exists_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FileSystemManager_Exists_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FileSystemManager_Exists_ResponseParams_Data>(index_);
    }
    FileSystemManager_Exists_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t error_code;
  uint8_t padfinal_[4];

 private:
  FileSystemManager_Exists_ResponseParams_Data();
  ~FileSystemManager_Exists_ResponseParams_Data() = delete;
};
static_assert(sizeof(FileSystemManager_Exists_ResponseParams_Data) == 16,
              "Bad sizeof(FileSystemManager_Exists_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) FileSystemManager_ReadDirectory_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FileSystemManager_ReadDirectory_Params_Data));
      new (data()) FileSystemManager_ReadDirectory_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FileSystemManager_ReadDirectory_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FileSystemManager_ReadDirectory_Params_Data>(index_);
    }
    FileSystemManager_ReadDirectory_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> path;
  mojo::internal::Interface_Data listener;

 private:
  FileSystemManager_ReadDirectory_Params_Data();
  ~FileSystemManager_ReadDirectory_Params_Data() = delete;
};
static_assert(sizeof(FileSystemManager_ReadDirectory_Params_Data) == 24,
              "Bad sizeof(FileSystemManager_ReadDirectory_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) FileSystemManager_ReadDirectorySync_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FileSystemManager_ReadDirectorySync_Params_Data));
      new (data()) FileSystemManager_ReadDirectorySync_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FileSystemManager_ReadDirectorySync_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FileSystemManager_ReadDirectorySync_Params_Data>(index_);
    }
    FileSystemManager_ReadDirectorySync_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> path;

 private:
  FileSystemManager_ReadDirectorySync_Params_Data();
  ~FileSystemManager_ReadDirectorySync_Params_Data() = delete;
};
static_assert(sizeof(FileSystemManager_ReadDirectorySync_Params_Data) == 16,
              "Bad sizeof(FileSystemManager_ReadDirectorySync_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) FileSystemManager_ReadDirectorySync_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FileSystemManager_ReadDirectorySync_ResponseParams_Data));
      new (data()) FileSystemManager_ReadDirectorySync_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FileSystemManager_ReadDirectorySync_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FileSystemManager_ReadDirectorySync_ResponseParams_Data>(index_);
    }
    FileSystemManager_ReadDirectorySync_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::filesystem::mojom::internal::DirectoryEntry_Data>>> entries;
  int32_t error_code;
  uint8_t padfinal_[4];

 private:
  FileSystemManager_ReadDirectorySync_ResponseParams_Data();
  ~FileSystemManager_ReadDirectorySync_ResponseParams_Data() = delete;
};
static_assert(sizeof(FileSystemManager_ReadDirectorySync_ResponseParams_Data) == 24,
              "Bad sizeof(FileSystemManager_ReadDirectorySync_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) FileSystemManager_Write_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FileSystemManager_Write_Params_Data));
      new (data()) FileSystemManager_Write_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FileSystemManager_Write_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FileSystemManager_Write_Params_Data>(index_);
    }
    FileSystemManager_Write_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> file_path;
  mojo::internal::Pointer<mojo::internal::String_Data> blob_uuid;
  int64_t position;
  mojo::internal::Handle_Data op_request;
  mojo::internal::Interface_Data listener;
  uint8_t padfinal_[4];

 private:
  FileSystemManager_Write_Params_Data();
  ~FileSystemManager_Write_Params_Data() = delete;
};
static_assert(sizeof(FileSystemManager_Write_Params_Data) == 48,
              "Bad sizeof(FileSystemManager_Write_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) FileSystemManager_WriteSync_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FileSystemManager_WriteSync_Params_Data));
      new (data()) FileSystemManager_WriteSync_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FileSystemManager_WriteSync_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FileSystemManager_WriteSync_Params_Data>(index_);
    }
    FileSystemManager_WriteSync_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> file_path;
  mojo::internal::Pointer<mojo::internal::String_Data> blob_uuid;
  int64_t position;

 private:
  FileSystemManager_WriteSync_Params_Data();
  ~FileSystemManager_WriteSync_Params_Data() = delete;
};
static_assert(sizeof(FileSystemManager_WriteSync_Params_Data) == 32,
              "Bad sizeof(FileSystemManager_WriteSync_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) FileSystemManager_WriteSync_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FileSystemManager_WriteSync_ResponseParams_Data));
      new (data()) FileSystemManager_WriteSync_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FileSystemManager_WriteSync_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FileSystemManager_WriteSync_ResponseParams_Data>(index_);
    }
    FileSystemManager_WriteSync_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int64_t byte_count;
  int32_t error_code;
  uint8_t padfinal_[4];

 private:
  FileSystemManager_WriteSync_ResponseParams_Data();
  ~FileSystemManager_WriteSync_ResponseParams_Data() = delete;
};
static_assert(sizeof(FileSystemManager_WriteSync_ResponseParams_Data) == 24,
              "Bad sizeof(FileSystemManager_WriteSync_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) FileSystemManager_Truncate_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FileSystemManager_Truncate_Params_Data));
      new (data()) FileSystemManager_Truncate_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FileSystemManager_Truncate_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FileSystemManager_Truncate_Params_Data>(index_);
    }
    FileSystemManager_Truncate_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> file_path;
  int64_t length;
  mojo::internal::Handle_Data op_request;
  uint8_t padfinal_[4];

 private:
  FileSystemManager_Truncate_Params_Data();
  ~FileSystemManager_Truncate_Params_Data() = delete;
};
static_assert(sizeof(FileSystemManager_Truncate_Params_Data) == 32,
              "Bad sizeof(FileSystemManager_Truncate_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) FileSystemManager_Truncate_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FileSystemManager_Truncate_ResponseParams_Data));
      new (data()) FileSystemManager_Truncate_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FileSystemManager_Truncate_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FileSystemManager_Truncate_ResponseParams_Data>(index_);
    }
    FileSystemManager_Truncate_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t error_code;
  uint8_t padfinal_[4];

 private:
  FileSystemManager_Truncate_ResponseParams_Data();
  ~FileSystemManager_Truncate_ResponseParams_Data() = delete;
};
static_assert(sizeof(FileSystemManager_Truncate_ResponseParams_Data) == 16,
              "Bad sizeof(FileSystemManager_Truncate_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) FileSystemManager_TruncateSync_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FileSystemManager_TruncateSync_Params_Data));
      new (data()) FileSystemManager_TruncateSync_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FileSystemManager_TruncateSync_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FileSystemManager_TruncateSync_Params_Data>(index_);
    }
    FileSystemManager_TruncateSync_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> file_path;
  int64_t length;

 private:
  FileSystemManager_TruncateSync_Params_Data();
  ~FileSystemManager_TruncateSync_Params_Data() = delete;
};
static_assert(sizeof(FileSystemManager_TruncateSync_Params_Data) == 24,
              "Bad sizeof(FileSystemManager_TruncateSync_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) FileSystemManager_TruncateSync_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FileSystemManager_TruncateSync_ResponseParams_Data));
      new (data()) FileSystemManager_TruncateSync_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FileSystemManager_TruncateSync_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FileSystemManager_TruncateSync_ResponseParams_Data>(index_);
    }
    FileSystemManager_TruncateSync_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t error_code;
  uint8_t padfinal_[4];

 private:
  FileSystemManager_TruncateSync_ResponseParams_Data();
  ~FileSystemManager_TruncateSync_ResponseParams_Data() = delete;
};
static_assert(sizeof(FileSystemManager_TruncateSync_ResponseParams_Data) == 16,
              "Bad sizeof(FileSystemManager_TruncateSync_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) FileSystemManager_TouchFile_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FileSystemManager_TouchFile_Params_Data));
      new (data()) FileSystemManager_TouchFile_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FileSystemManager_TouchFile_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FileSystemManager_TouchFile_Params_Data>(index_);
    }
    FileSystemManager_TouchFile_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> path;
  mojo::internal::Pointer<::mojo_base::mojom::internal::Time_Data> last_access_time;
  mojo::internal::Pointer<::mojo_base::mojom::internal::Time_Data> last_modified_time;

 private:
  FileSystemManager_TouchFile_Params_Data();
  ~FileSystemManager_TouchFile_Params_Data() = delete;
};
static_assert(sizeof(FileSystemManager_TouchFile_Params_Data) == 32,
              "Bad sizeof(FileSystemManager_TouchFile_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) FileSystemManager_TouchFile_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FileSystemManager_TouchFile_ResponseParams_Data));
      new (data()) FileSystemManager_TouchFile_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FileSystemManager_TouchFile_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FileSystemManager_TouchFile_ResponseParams_Data>(index_);
    }
    FileSystemManager_TouchFile_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t error_code;
  uint8_t padfinal_[4];

 private:
  FileSystemManager_TouchFile_ResponseParams_Data();
  ~FileSystemManager_TouchFile_ResponseParams_Data() = delete;
};
static_assert(sizeof(FileSystemManager_TouchFile_ResponseParams_Data) == 16,
              "Bad sizeof(FileSystemManager_TouchFile_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) FileSystemManager_CreateSnapshotFile_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FileSystemManager_CreateSnapshotFile_Params_Data));
      new (data()) FileSystemManager_CreateSnapshotFile_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FileSystemManager_CreateSnapshotFile_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FileSystemManager_CreateSnapshotFile_Params_Data>(index_);
    }
    FileSystemManager_CreateSnapshotFile_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> file_path;

 private:
  FileSystemManager_CreateSnapshotFile_Params_Data();
  ~FileSystemManager_CreateSnapshotFile_Params_Data() = delete;
};
static_assert(sizeof(FileSystemManager_CreateSnapshotFile_Params_Data) == 16,
              "Bad sizeof(FileSystemManager_CreateSnapshotFile_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) FileSystemManager_CreateSnapshotFile_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FileSystemManager_CreateSnapshotFile_ResponseParams_Data));
      new (data()) FileSystemManager_CreateSnapshotFile_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FileSystemManager_CreateSnapshotFile_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FileSystemManager_CreateSnapshotFile_ResponseParams_Data>(index_);
    }
    FileSystemManager_CreateSnapshotFile_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::FileInfo_Data> file_info;
  mojo::internal::Pointer<::mojo_base::mojom::internal::FilePath_Data> platform_path;
  int32_t error_code;
  mojo::internal::Interface_Data snapshot_listener;
  uint8_t padfinal_[4];

 private:
  FileSystemManager_CreateSnapshotFile_ResponseParams_Data();
  ~FileSystemManager_CreateSnapshotFile_ResponseParams_Data() = delete;
};
static_assert(sizeof(FileSystemManager_CreateSnapshotFile_ResponseParams_Data) == 40,
              "Bad sizeof(FileSystemManager_CreateSnapshotFile_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) FileSystemManager_GetPlatformPath_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FileSystemManager_GetPlatformPath_Params_Data));
      new (data()) FileSystemManager_GetPlatformPath_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FileSystemManager_GetPlatformPath_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FileSystemManager_GetPlatformPath_Params_Data>(index_);
    }
    FileSystemManager_GetPlatformPath_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> file_path;

 private:
  FileSystemManager_GetPlatformPath_Params_Data();
  ~FileSystemManager_GetPlatformPath_Params_Data() = delete;
};
static_assert(sizeof(FileSystemManager_GetPlatformPath_Params_Data) == 16,
              "Bad sizeof(FileSystemManager_GetPlatformPath_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) FileSystemManager_GetPlatformPath_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FileSystemManager_GetPlatformPath_ResponseParams_Data));
      new (data()) FileSystemManager_GetPlatformPath_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FileSystemManager_GetPlatformPath_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FileSystemManager_GetPlatformPath_ResponseParams_Data>(index_);
    }
    FileSystemManager_GetPlatformPath_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::FilePath_Data> platform_path;

 private:
  FileSystemManager_GetPlatformPath_ResponseParams_Data();
  ~FileSystemManager_GetPlatformPath_ResponseParams_Data() = delete;
};
static_assert(sizeof(FileSystemManager_GetPlatformPath_ResponseParams_Data) == 16,
              "Bad sizeof(FileSystemManager_GetPlatformPath_ResponseParams_Data)");

}  // namespace internal
class FileSystemCancellableOperation_Cancel_ParamsDataView {
 public:
  FileSystemCancellableOperation_Cancel_ParamsDataView() {}

  FileSystemCancellableOperation_Cancel_ParamsDataView(
      internal::FileSystemCancellableOperation_Cancel_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::FileSystemCancellableOperation_Cancel_Params_Data* data_ = nullptr;
};

class FileSystemCancellableOperation_Cancel_ResponseParamsDataView {
 public:
  FileSystemCancellableOperation_Cancel_ResponseParamsDataView() {}

  FileSystemCancellableOperation_Cancel_ResponseParamsDataView(
      internal::FileSystemCancellableOperation_Cancel_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadErrorCode(UserType* output) const {
    auto data_value = data_->error_code;
    return mojo::internal::Deserialize<::mojo_base::mojom::FileError>(
        data_value, output);
  }

  ::mojo_base::mojom::FileError error_code() const {
    return static_cast<::mojo_base::mojom::FileError>(data_->error_code);
  }
 private:
  internal::FileSystemCancellableOperation_Cancel_ResponseParams_Data* data_ = nullptr;
};

class FileSystemOperationListener_ResultsRetrieved_ParamsDataView {
 public:
  FileSystemOperationListener_ResultsRetrieved_ParamsDataView() {}

  FileSystemOperationListener_ResultsRetrieved_ParamsDataView(
      internal::FileSystemOperationListener_ResultsRetrieved_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetEntriesDataView(
      mojo::ArrayDataView<::filesystem::mojom::DirectoryEntryDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadEntries(UserType* output) {
    auto* pointer = data_->entries.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::filesystem::mojom::DirectoryEntryDataView>>(
        pointer, output, context_);
  }
  bool has_more() const {
    return data_->has_more;
  }
 private:
  internal::FileSystemOperationListener_ResultsRetrieved_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FileSystemOperationListener_DidWrite_ParamsDataView {
 public:
  FileSystemOperationListener_DidWrite_ParamsDataView() {}

  FileSystemOperationListener_DidWrite_ParamsDataView(
      internal::FileSystemOperationListener_DidWrite_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int64_t byte_count() const {
    return data_->byte_count;
  }
  bool complete() const {
    return data_->complete;
  }
 private:
  internal::FileSystemOperationListener_DidWrite_Params_Data* data_ = nullptr;
};

class FileSystemOperationListener_ErrorOccurred_ParamsDataView {
 public:
  FileSystemOperationListener_ErrorOccurred_ParamsDataView() {}

  FileSystemOperationListener_ErrorOccurred_ParamsDataView(
      internal::FileSystemOperationListener_ErrorOccurred_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadErrorCode(UserType* output) const {
    auto data_value = data_->error_code;
    return mojo::internal::Deserialize<::mojo_base::mojom::FileError>(
        data_value, output);
  }

  ::mojo_base::mojom::FileError error_code() const {
    return static_cast<::mojo_base::mojom::FileError>(data_->error_code);
  }
 private:
  internal::FileSystemOperationListener_ErrorOccurred_Params_Data* data_ = nullptr;
};

class ReceivedSnapshotListener_DidReceiveSnapshotFile_ParamsDataView {
 public:
  ReceivedSnapshotListener_DidReceiveSnapshotFile_ParamsDataView() {}

  ReceivedSnapshotListener_DidReceiveSnapshotFile_ParamsDataView(
      internal::ReceivedSnapshotListener_DidReceiveSnapshotFile_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::ReceivedSnapshotListener_DidReceiveSnapshotFile_Params_Data* data_ = nullptr;
};

class FileSystemManager_Open_ParamsDataView {
 public:
  FileSystemManager_Open_ParamsDataView() {}

  FileSystemManager_Open_ParamsDataView(
      internal::FileSystemManager_Open_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetOriginDataView(
      ::url::mojom::OriginDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOrigin(UserType* output) {
    auto* pointer = data_->origin.Get();
    return mojo::internal::Deserialize<::url::mojom::OriginDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFileSystemType(UserType* output) const {
    auto data_value = data_->file_system_type;
    return mojo::internal::Deserialize<::blink::mojom::FileSystemType>(
        data_value, output);
  }

  FileSystemType file_system_type() const {
    return static_cast<FileSystemType>(data_->file_system_type);
  }
 private:
  internal::FileSystemManager_Open_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FileSystemManager_Open_ResponseParamsDataView {
 public:
  FileSystemManager_Open_ResponseParamsDataView() {}

  FileSystemManager_Open_ResponseParamsDataView(
      internal::FileSystemManager_Open_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadName(UserType* output) {
    auto* pointer = data_->name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetRootUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRootUrl(UserType* output) {
    auto* pointer = data_->root_url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadErrorCode(UserType* output) const {
    auto data_value = data_->error_code;
    return mojo::internal::Deserialize<::mojo_base::mojom::FileError>(
        data_value, output);
  }

  ::mojo_base::mojom::FileError error_code() const {
    return static_cast<::mojo_base::mojom::FileError>(data_->error_code);
  }
 private:
  internal::FileSystemManager_Open_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FileSystemManager_ResolveURL_ParamsDataView {
 public:
  FileSystemManager_ResolveURL_ParamsDataView() {}

  FileSystemManager_ResolveURL_ParamsDataView(
      internal::FileSystemManager_ResolveURL_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetFilesystemUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFilesystemUrl(UserType* output) {
    auto* pointer = data_->filesystem_url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
 private:
  internal::FileSystemManager_ResolveURL_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FileSystemManager_ResolveURL_ResponseParamsDataView {
 public:
  FileSystemManager_ResolveURL_ResponseParamsDataView() {}

  FileSystemManager_ResolveURL_ResponseParamsDataView(
      internal::FileSystemManager_ResolveURL_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetInfoDataView(
      FileSystemInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadInfo(UserType* output) {
    auto* pointer = data_->info.Get();
    return mojo::internal::Deserialize<::blink::mojom::FileSystemInfoDataView>(
        pointer, output, context_);
  }
  inline void GetFilePathDataView(
      ::mojo_base::mojom::FilePathDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFilePath(UserType* output) {
    auto* pointer = data_->file_path.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::FilePathDataView>(
        pointer, output, context_);
  }
  bool is_directory() const {
    return data_->is_directory;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadErrorCode(UserType* output) const {
    auto data_value = data_->error_code;
    return mojo::internal::Deserialize<::mojo_base::mojom::FileError>(
        data_value, output);
  }

  ::mojo_base::mojom::FileError error_code() const {
    return static_cast<::mojo_base::mojom::FileError>(data_->error_code);
  }
 private:
  internal::FileSystemManager_ResolveURL_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FileSystemManager_Move_ParamsDataView {
 public:
  FileSystemManager_Move_ParamsDataView() {}

  FileSystemManager_Move_ParamsDataView(
      internal::FileSystemManager_Move_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSrcPathDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSrcPath(UserType* output) {
    auto* pointer = data_->src_path.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  inline void GetDestPathDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDestPath(UserType* output) {
    auto* pointer = data_->dest_path.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
 private:
  internal::FileSystemManager_Move_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FileSystemManager_Move_ResponseParamsDataView {
 public:
  FileSystemManager_Move_ResponseParamsDataView() {}

  FileSystemManager_Move_ResponseParamsDataView(
      internal::FileSystemManager_Move_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadErrorCode(UserType* output) const {
    auto data_value = data_->error_code;
    return mojo::internal::Deserialize<::mojo_base::mojom::FileError>(
        data_value, output);
  }

  ::mojo_base::mojom::FileError error_code() const {
    return static_cast<::mojo_base::mojom::FileError>(data_->error_code);
  }
 private:
  internal::FileSystemManager_Move_ResponseParams_Data* data_ = nullptr;
};

class FileSystemManager_Copy_ParamsDataView {
 public:
  FileSystemManager_Copy_ParamsDataView() {}

  FileSystemManager_Copy_ParamsDataView(
      internal::FileSystemManager_Copy_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSrcPathDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSrcPath(UserType* output) {
    auto* pointer = data_->src_path.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  inline void GetDestPathDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDestPath(UserType* output) {
    auto* pointer = data_->dest_path.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
 private:
  internal::FileSystemManager_Copy_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FileSystemManager_Copy_ResponseParamsDataView {
 public:
  FileSystemManager_Copy_ResponseParamsDataView() {}

  FileSystemManager_Copy_ResponseParamsDataView(
      internal::FileSystemManager_Copy_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadErrorCode(UserType* output) const {
    auto data_value = data_->error_code;
    return mojo::internal::Deserialize<::mojo_base::mojom::FileError>(
        data_value, output);
  }

  ::mojo_base::mojom::FileError error_code() const {
    return static_cast<::mojo_base::mojom::FileError>(data_->error_code);
  }
 private:
  internal::FileSystemManager_Copy_ResponseParams_Data* data_ = nullptr;
};

class FileSystemManager_Remove_ParamsDataView {
 public:
  FileSystemManager_Remove_ParamsDataView() {}

  FileSystemManager_Remove_ParamsDataView(
      internal::FileSystemManager_Remove_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPathDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPath(UserType* output) {
    auto* pointer = data_->path.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  bool recursive() const {
    return data_->recursive;
  }
 private:
  internal::FileSystemManager_Remove_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FileSystemManager_Remove_ResponseParamsDataView {
 public:
  FileSystemManager_Remove_ResponseParamsDataView() {}

  FileSystemManager_Remove_ResponseParamsDataView(
      internal::FileSystemManager_Remove_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadErrorCode(UserType* output) const {
    auto data_value = data_->error_code;
    return mojo::internal::Deserialize<::mojo_base::mojom::FileError>(
        data_value, output);
  }

  ::mojo_base::mojom::FileError error_code() const {
    return static_cast<::mojo_base::mojom::FileError>(data_->error_code);
  }
 private:
  internal::FileSystemManager_Remove_ResponseParams_Data* data_ = nullptr;
};

class FileSystemManager_ReadMetadata_ParamsDataView {
 public:
  FileSystemManager_ReadMetadata_ParamsDataView() {}

  FileSystemManager_ReadMetadata_ParamsDataView(
      internal::FileSystemManager_ReadMetadata_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPathDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPath(UserType* output) {
    auto* pointer = data_->path.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
 private:
  internal::FileSystemManager_ReadMetadata_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FileSystemManager_ReadMetadata_ResponseParamsDataView {
 public:
  FileSystemManager_ReadMetadata_ResponseParamsDataView() {}

  FileSystemManager_ReadMetadata_ResponseParamsDataView(
      internal::FileSystemManager_ReadMetadata_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetFileInfoDataView(
      ::mojo_base::mojom::FileInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFileInfo(UserType* output) {
    auto* pointer = data_->file_info.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::FileInfoDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadErrorCode(UserType* output) const {
    auto data_value = data_->error_code;
    return mojo::internal::Deserialize<::mojo_base::mojom::FileError>(
        data_value, output);
  }

  ::mojo_base::mojom::FileError error_code() const {
    return static_cast<::mojo_base::mojom::FileError>(data_->error_code);
  }
 private:
  internal::FileSystemManager_ReadMetadata_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FileSystemManager_Create_ParamsDataView {
 public:
  FileSystemManager_Create_ParamsDataView() {}

  FileSystemManager_Create_ParamsDataView(
      internal::FileSystemManager_Create_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPathDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPath(UserType* output) {
    auto* pointer = data_->path.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  bool exclusive() const {
    return data_->exclusive;
  }
  bool is_directory() const {
    return data_->is_directory;
  }
  bool recursive() const {
    return data_->recursive;
  }
 private:
  internal::FileSystemManager_Create_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FileSystemManager_Create_ResponseParamsDataView {
 public:
  FileSystemManager_Create_ResponseParamsDataView() {}

  FileSystemManager_Create_ResponseParamsDataView(
      internal::FileSystemManager_Create_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadErrorCode(UserType* output) const {
    auto data_value = data_->error_code;
    return mojo::internal::Deserialize<::mojo_base::mojom::FileError>(
        data_value, output);
  }

  ::mojo_base::mojom::FileError error_code() const {
    return static_cast<::mojo_base::mojom::FileError>(data_->error_code);
  }
 private:
  internal::FileSystemManager_Create_ResponseParams_Data* data_ = nullptr;
};

class FileSystemManager_Exists_ParamsDataView {
 public:
  FileSystemManager_Exists_ParamsDataView() {}

  FileSystemManager_Exists_ParamsDataView(
      internal::FileSystemManager_Exists_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPathDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPath(UserType* output) {
    auto* pointer = data_->path.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  bool is_directory() const {
    return data_->is_directory;
  }
 private:
  internal::FileSystemManager_Exists_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FileSystemManager_Exists_ResponseParamsDataView {
 public:
  FileSystemManager_Exists_ResponseParamsDataView() {}

  FileSystemManager_Exists_ResponseParamsDataView(
      internal::FileSystemManager_Exists_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadErrorCode(UserType* output) const {
    auto data_value = data_->error_code;
    return mojo::internal::Deserialize<::mojo_base::mojom::FileError>(
        data_value, output);
  }

  ::mojo_base::mojom::FileError error_code() const {
    return static_cast<::mojo_base::mojom::FileError>(data_->error_code);
  }
 private:
  internal::FileSystemManager_Exists_ResponseParams_Data* data_ = nullptr;
};

class FileSystemManager_ReadDirectory_ParamsDataView {
 public:
  FileSystemManager_ReadDirectory_ParamsDataView() {}

  FileSystemManager_ReadDirectory_ParamsDataView(
      internal::FileSystemManager_ReadDirectory_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPathDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPath(UserType* output) {
    auto* pointer = data_->path.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeListener() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::FileSystemOperationListenerPtrDataView>(
            &data_->listener, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::FileSystemManager_ReadDirectory_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FileSystemManager_ReadDirectorySync_ParamsDataView {
 public:
  FileSystemManager_ReadDirectorySync_ParamsDataView() {}

  FileSystemManager_ReadDirectorySync_ParamsDataView(
      internal::FileSystemManager_ReadDirectorySync_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPathDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPath(UserType* output) {
    auto* pointer = data_->path.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
 private:
  internal::FileSystemManager_ReadDirectorySync_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FileSystemManager_ReadDirectorySync_ResponseParamsDataView {
 public:
  FileSystemManager_ReadDirectorySync_ResponseParamsDataView() {}

  FileSystemManager_ReadDirectorySync_ResponseParamsDataView(
      internal::FileSystemManager_ReadDirectorySync_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetEntriesDataView(
      mojo::ArrayDataView<::filesystem::mojom::DirectoryEntryDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadEntries(UserType* output) {
    auto* pointer = data_->entries.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::filesystem::mojom::DirectoryEntryDataView>>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadErrorCode(UserType* output) const {
    auto data_value = data_->error_code;
    return mojo::internal::Deserialize<::mojo_base::mojom::FileError>(
        data_value, output);
  }

  ::mojo_base::mojom::FileError error_code() const {
    return static_cast<::mojo_base::mojom::FileError>(data_->error_code);
  }
 private:
  internal::FileSystemManager_ReadDirectorySync_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FileSystemManager_Write_ParamsDataView {
 public:
  FileSystemManager_Write_ParamsDataView() {}

  FileSystemManager_Write_ParamsDataView(
      internal::FileSystemManager_Write_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetFilePathDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFilePath(UserType* output) {
    auto* pointer = data_->file_path.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  inline void GetBlobUuidDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBlobUuid(UserType* output) {
    auto* pointer = data_->blob_uuid.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  int64_t position() const {
    return data_->position;
  }
  template <typename UserType>
  UserType TakeOpRequest() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::FileSystemCancellableOperationRequestDataView>(
            &data_->op_request, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeListener() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::FileSystemOperationListenerPtrDataView>(
            &data_->listener, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::FileSystemManager_Write_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FileSystemManager_WriteSync_ParamsDataView {
 public:
  FileSystemManager_WriteSync_ParamsDataView() {}

  FileSystemManager_WriteSync_ParamsDataView(
      internal::FileSystemManager_WriteSync_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetFilePathDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFilePath(UserType* output) {
    auto* pointer = data_->file_path.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  inline void GetBlobUuidDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBlobUuid(UserType* output) {
    auto* pointer = data_->blob_uuid.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  int64_t position() const {
    return data_->position;
  }
 private:
  internal::FileSystemManager_WriteSync_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FileSystemManager_WriteSync_ResponseParamsDataView {
 public:
  FileSystemManager_WriteSync_ResponseParamsDataView() {}

  FileSystemManager_WriteSync_ResponseParamsDataView(
      internal::FileSystemManager_WriteSync_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int64_t byte_count() const {
    return data_->byte_count;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadErrorCode(UserType* output) const {
    auto data_value = data_->error_code;
    return mojo::internal::Deserialize<::mojo_base::mojom::FileError>(
        data_value, output);
  }

  ::mojo_base::mojom::FileError error_code() const {
    return static_cast<::mojo_base::mojom::FileError>(data_->error_code);
  }
 private:
  internal::FileSystemManager_WriteSync_ResponseParams_Data* data_ = nullptr;
};

class FileSystemManager_Truncate_ParamsDataView {
 public:
  FileSystemManager_Truncate_ParamsDataView() {}

  FileSystemManager_Truncate_ParamsDataView(
      internal::FileSystemManager_Truncate_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetFilePathDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFilePath(UserType* output) {
    auto* pointer = data_->file_path.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  int64_t length() const {
    return data_->length;
  }
  template <typename UserType>
  UserType TakeOpRequest() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::FileSystemCancellableOperationRequestDataView>(
            &data_->op_request, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::FileSystemManager_Truncate_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FileSystemManager_Truncate_ResponseParamsDataView {
 public:
  FileSystemManager_Truncate_ResponseParamsDataView() {}

  FileSystemManager_Truncate_ResponseParamsDataView(
      internal::FileSystemManager_Truncate_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadErrorCode(UserType* output) const {
    auto data_value = data_->error_code;
    return mojo::internal::Deserialize<::mojo_base::mojom::FileError>(
        data_value, output);
  }

  ::mojo_base::mojom::FileError error_code() const {
    return static_cast<::mojo_base::mojom::FileError>(data_->error_code);
  }
 private:
  internal::FileSystemManager_Truncate_ResponseParams_Data* data_ = nullptr;
};

class FileSystemManager_TruncateSync_ParamsDataView {
 public:
  FileSystemManager_TruncateSync_ParamsDataView() {}

  FileSystemManager_TruncateSync_ParamsDataView(
      internal::FileSystemManager_TruncateSync_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetFilePathDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFilePath(UserType* output) {
    auto* pointer = data_->file_path.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  int64_t length() const {
    return data_->length;
  }
 private:
  internal::FileSystemManager_TruncateSync_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FileSystemManager_TruncateSync_ResponseParamsDataView {
 public:
  FileSystemManager_TruncateSync_ResponseParamsDataView() {}

  FileSystemManager_TruncateSync_ResponseParamsDataView(
      internal::FileSystemManager_TruncateSync_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadErrorCode(UserType* output) const {
    auto data_value = data_->error_code;
    return mojo::internal::Deserialize<::mojo_base::mojom::FileError>(
        data_value, output);
  }

  ::mojo_base::mojom::FileError error_code() const {
    return static_cast<::mojo_base::mojom::FileError>(data_->error_code);
  }
 private:
  internal::FileSystemManager_TruncateSync_ResponseParams_Data* data_ = nullptr;
};

class FileSystemManager_TouchFile_ParamsDataView {
 public:
  FileSystemManager_TouchFile_ParamsDataView() {}

  FileSystemManager_TouchFile_ParamsDataView(
      internal::FileSystemManager_TouchFile_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPathDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPath(UserType* output) {
    auto* pointer = data_->path.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  inline void GetLastAccessTimeDataView(
      ::mojo_base::mojom::TimeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLastAccessTime(UserType* output) {
    auto* pointer = data_->last_access_time.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDataView>(
        pointer, output, context_);
  }
  inline void GetLastModifiedTimeDataView(
      ::mojo_base::mojom::TimeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLastModifiedTime(UserType* output) {
    auto* pointer = data_->last_modified_time.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDataView>(
        pointer, output, context_);
  }
 private:
  internal::FileSystemManager_TouchFile_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FileSystemManager_TouchFile_ResponseParamsDataView {
 public:
  FileSystemManager_TouchFile_ResponseParamsDataView() {}

  FileSystemManager_TouchFile_ResponseParamsDataView(
      internal::FileSystemManager_TouchFile_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadErrorCode(UserType* output) const {
    auto data_value = data_->error_code;
    return mojo::internal::Deserialize<::mojo_base::mojom::FileError>(
        data_value, output);
  }

  ::mojo_base::mojom::FileError error_code() const {
    return static_cast<::mojo_base::mojom::FileError>(data_->error_code);
  }
 private:
  internal::FileSystemManager_TouchFile_ResponseParams_Data* data_ = nullptr;
};

class FileSystemManager_CreateSnapshotFile_ParamsDataView {
 public:
  FileSystemManager_CreateSnapshotFile_ParamsDataView() {}

  FileSystemManager_CreateSnapshotFile_ParamsDataView(
      internal::FileSystemManager_CreateSnapshotFile_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetFilePathDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFilePath(UserType* output) {
    auto* pointer = data_->file_path.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
 private:
  internal::FileSystemManager_CreateSnapshotFile_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FileSystemManager_CreateSnapshotFile_ResponseParamsDataView {
 public:
  FileSystemManager_CreateSnapshotFile_ResponseParamsDataView() {}

  FileSystemManager_CreateSnapshotFile_ResponseParamsDataView(
      internal::FileSystemManager_CreateSnapshotFile_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetFileInfoDataView(
      ::mojo_base::mojom::FileInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFileInfo(UserType* output) {
    auto* pointer = data_->file_info.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::FileInfoDataView>(
        pointer, output, context_);
  }
  inline void GetPlatformPathDataView(
      ::mojo_base::mojom::FilePathDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPlatformPath(UserType* output) {
    auto* pointer = data_->platform_path.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::FilePathDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadErrorCode(UserType* output) const {
    auto data_value = data_->error_code;
    return mojo::internal::Deserialize<::mojo_base::mojom::FileError>(
        data_value, output);
  }

  ::mojo_base::mojom::FileError error_code() const {
    return static_cast<::mojo_base::mojom::FileError>(data_->error_code);
  }
  template <typename UserType>
  UserType TakeSnapshotListener() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::ReceivedSnapshotListenerPtrDataView>(
            &data_->snapshot_listener, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::FileSystemManager_CreateSnapshotFile_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FileSystemManager_GetPlatformPath_ParamsDataView {
 public:
  FileSystemManager_GetPlatformPath_ParamsDataView() {}

  FileSystemManager_GetPlatformPath_ParamsDataView(
      internal::FileSystemManager_GetPlatformPath_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetFilePathDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFilePath(UserType* output) {
    auto* pointer = data_->file_path.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
 private:
  internal::FileSystemManager_GetPlatformPath_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FileSystemManager_GetPlatformPath_ResponseParamsDataView {
 public:
  FileSystemManager_GetPlatformPath_ResponseParamsDataView() {}

  FileSystemManager_GetPlatformPath_ResponseParamsDataView(
      internal::FileSystemManager_GetPlatformPath_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPlatformPathDataView(
      ::mojo_base::mojom::FilePathDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPlatformPath(UserType* output) {
    auto* pointer = data_->platform_path.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::FilePathDataView>(
        pointer, output, context_);
  }
 private:
  internal::FileSystemManager_GetPlatformPath_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};






inline void FileSystemOperationListener_ResultsRetrieved_ParamsDataView::GetEntriesDataView(
    mojo::ArrayDataView<::filesystem::mojom::DirectoryEntryDataView>* output) {
  auto pointer = data_->entries.Get();
  *output = mojo::ArrayDataView<::filesystem::mojom::DirectoryEntryDataView>(pointer, context_);
}








inline void FileSystemManager_Open_ParamsDataView::GetOriginDataView(
    ::url::mojom::OriginDataView* output) {
  auto pointer = data_->origin.Get();
  *output = ::url::mojom::OriginDataView(pointer, context_);
}


inline void FileSystemManager_Open_ResponseParamsDataView::GetNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->name.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void FileSystemManager_Open_ResponseParamsDataView::GetRootUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->root_url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}


inline void FileSystemManager_ResolveURL_ParamsDataView::GetFilesystemUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->filesystem_url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}


inline void FileSystemManager_ResolveURL_ResponseParamsDataView::GetInfoDataView(
    FileSystemInfoDataView* output) {
  auto pointer = data_->info.Get();
  *output = FileSystemInfoDataView(pointer, context_);
}
inline void FileSystemManager_ResolveURL_ResponseParamsDataView::GetFilePathDataView(
    ::mojo_base::mojom::FilePathDataView* output) {
  auto pointer = data_->file_path.Get();
  *output = ::mojo_base::mojom::FilePathDataView(pointer, context_);
}


inline void FileSystemManager_Move_ParamsDataView::GetSrcPathDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->src_path.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void FileSystemManager_Move_ParamsDataView::GetDestPathDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->dest_path.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}




inline void FileSystemManager_Copy_ParamsDataView::GetSrcPathDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->src_path.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void FileSystemManager_Copy_ParamsDataView::GetDestPathDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->dest_path.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}




inline void FileSystemManager_Remove_ParamsDataView::GetPathDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->path.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}




inline void FileSystemManager_ReadMetadata_ParamsDataView::GetPathDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->path.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}


inline void FileSystemManager_ReadMetadata_ResponseParamsDataView::GetFileInfoDataView(
    ::mojo_base::mojom::FileInfoDataView* output) {
  auto pointer = data_->file_info.Get();
  *output = ::mojo_base::mojom::FileInfoDataView(pointer, context_);
}


inline void FileSystemManager_Create_ParamsDataView::GetPathDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->path.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}




inline void FileSystemManager_Exists_ParamsDataView::GetPathDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->path.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}




inline void FileSystemManager_ReadDirectory_ParamsDataView::GetPathDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->path.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}


inline void FileSystemManager_ReadDirectorySync_ParamsDataView::GetPathDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->path.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}


inline void FileSystemManager_ReadDirectorySync_ResponseParamsDataView::GetEntriesDataView(
    mojo::ArrayDataView<::filesystem::mojom::DirectoryEntryDataView>* output) {
  auto pointer = data_->entries.Get();
  *output = mojo::ArrayDataView<::filesystem::mojom::DirectoryEntryDataView>(pointer, context_);
}


inline void FileSystemManager_Write_ParamsDataView::GetFilePathDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->file_path.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void FileSystemManager_Write_ParamsDataView::GetBlobUuidDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->blob_uuid.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void FileSystemManager_WriteSync_ParamsDataView::GetFilePathDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->file_path.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void FileSystemManager_WriteSync_ParamsDataView::GetBlobUuidDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->blob_uuid.Get();
  *output = mojo::StringDataView(pointer, context_);
}




inline void FileSystemManager_Truncate_ParamsDataView::GetFilePathDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->file_path.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}




inline void FileSystemManager_TruncateSync_ParamsDataView::GetFilePathDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->file_path.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}




inline void FileSystemManager_TouchFile_ParamsDataView::GetPathDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->path.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void FileSystemManager_TouchFile_ParamsDataView::GetLastAccessTimeDataView(
    ::mojo_base::mojom::TimeDataView* output) {
  auto pointer = data_->last_access_time.Get();
  *output = ::mojo_base::mojom::TimeDataView(pointer, context_);
}
inline void FileSystemManager_TouchFile_ParamsDataView::GetLastModifiedTimeDataView(
    ::mojo_base::mojom::TimeDataView* output) {
  auto pointer = data_->last_modified_time.Get();
  *output = ::mojo_base::mojom::TimeDataView(pointer, context_);
}




inline void FileSystemManager_CreateSnapshotFile_ParamsDataView::GetFilePathDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->file_path.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}


inline void FileSystemManager_CreateSnapshotFile_ResponseParamsDataView::GetFileInfoDataView(
    ::mojo_base::mojom::FileInfoDataView* output) {
  auto pointer = data_->file_info.Get();
  *output = ::mojo_base::mojom::FileInfoDataView(pointer, context_);
}
inline void FileSystemManager_CreateSnapshotFile_ResponseParamsDataView::GetPlatformPathDataView(
    ::mojo_base::mojom::FilePathDataView* output) {
  auto pointer = data_->platform_path.Get();
  *output = ::mojo_base::mojom::FilePathDataView(pointer, context_);
}


inline void FileSystemManager_GetPlatformPath_ParamsDataView::GetFilePathDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->file_path.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}


inline void FileSystemManager_GetPlatformPath_ResponseParamsDataView::GetPlatformPathDataView(
    ::mojo_base::mojom::FilePathDataView* output) {
  auto pointer = data_->platform_path.Get();
  *output = ::mojo_base::mojom::FilePathDataView(pointer, context_);
}

}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_FILESYSTEM_FILE_SYSTEM_MOJOM_PARAMS_DATA_H_