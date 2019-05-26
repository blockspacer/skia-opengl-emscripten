// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_WEBDATABASE_WEB_DATABASE_MOJOM_PARAMS_DATA_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_WEBDATABASE_WEB_DATABASE_MOJOM_PARAMS_DATA_H_

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
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) WebDatabase_UpdateSize_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WebDatabase_UpdateSize_Params_Data));
      new (data()) WebDatabase_UpdateSize_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WebDatabase_UpdateSize_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WebDatabase_UpdateSize_Params_Data>(index_);
    }
    WebDatabase_UpdateSize_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Origin_Data> origin;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> name;
  int64_t size;

 private:
  WebDatabase_UpdateSize_Params_Data();
  ~WebDatabase_UpdateSize_Params_Data() = delete;
};
static_assert(sizeof(WebDatabase_UpdateSize_Params_Data) == 32,
              "Bad sizeof(WebDatabase_UpdateSize_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) WebDatabase_CloseImmediately_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WebDatabase_CloseImmediately_Params_Data));
      new (data()) WebDatabase_CloseImmediately_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WebDatabase_CloseImmediately_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WebDatabase_CloseImmediately_Params_Data>(index_);
    }
    WebDatabase_CloseImmediately_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Origin_Data> origin;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> name;

 private:
  WebDatabase_CloseImmediately_Params_Data();
  ~WebDatabase_CloseImmediately_Params_Data() = delete;
};
static_assert(sizeof(WebDatabase_CloseImmediately_Params_Data) == 24,
              "Bad sizeof(WebDatabase_CloseImmediately_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) WebDatabaseHost_OpenFile_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WebDatabaseHost_OpenFile_Params_Data));
      new (data()) WebDatabaseHost_OpenFile_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WebDatabaseHost_OpenFile_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WebDatabaseHost_OpenFile_Params_Data>(index_);
    }
    WebDatabaseHost_OpenFile_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> vfs_file_name;
  int32_t desired_flags;
  uint8_t padfinal_[4];

 private:
  WebDatabaseHost_OpenFile_Params_Data();
  ~WebDatabaseHost_OpenFile_Params_Data() = delete;
};
static_assert(sizeof(WebDatabaseHost_OpenFile_Params_Data) == 24,
              "Bad sizeof(WebDatabaseHost_OpenFile_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) WebDatabaseHost_OpenFile_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WebDatabaseHost_OpenFile_ResponseParams_Data));
      new (data()) WebDatabaseHost_OpenFile_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WebDatabaseHost_OpenFile_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WebDatabaseHost_OpenFile_ResponseParams_Data>(index_);
    }
    WebDatabaseHost_OpenFile_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::File_Data> file;

 private:
  WebDatabaseHost_OpenFile_ResponseParams_Data();
  ~WebDatabaseHost_OpenFile_ResponseParams_Data() = delete;
};
static_assert(sizeof(WebDatabaseHost_OpenFile_ResponseParams_Data) == 16,
              "Bad sizeof(WebDatabaseHost_OpenFile_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) WebDatabaseHost_DeleteFile_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WebDatabaseHost_DeleteFile_Params_Data));
      new (data()) WebDatabaseHost_DeleteFile_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WebDatabaseHost_DeleteFile_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WebDatabaseHost_DeleteFile_Params_Data>(index_);
    }
    WebDatabaseHost_DeleteFile_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> vfs_file_name;
  uint8_t sync_dir : 1;
  uint8_t padfinal_[7];

 private:
  WebDatabaseHost_DeleteFile_Params_Data();
  ~WebDatabaseHost_DeleteFile_Params_Data() = delete;
};
static_assert(sizeof(WebDatabaseHost_DeleteFile_Params_Data) == 24,
              "Bad sizeof(WebDatabaseHost_DeleteFile_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) WebDatabaseHost_DeleteFile_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WebDatabaseHost_DeleteFile_ResponseParams_Data));
      new (data()) WebDatabaseHost_DeleteFile_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WebDatabaseHost_DeleteFile_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WebDatabaseHost_DeleteFile_ResponseParams_Data>(index_);
    }
    WebDatabaseHost_DeleteFile_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t sqlite_error_code;
  uint8_t padfinal_[4];

 private:
  WebDatabaseHost_DeleteFile_ResponseParams_Data();
  ~WebDatabaseHost_DeleteFile_ResponseParams_Data() = delete;
};
static_assert(sizeof(WebDatabaseHost_DeleteFile_ResponseParams_Data) == 16,
              "Bad sizeof(WebDatabaseHost_DeleteFile_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) WebDatabaseHost_GetFileAttributes_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WebDatabaseHost_GetFileAttributes_Params_Data));
      new (data()) WebDatabaseHost_GetFileAttributes_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WebDatabaseHost_GetFileAttributes_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WebDatabaseHost_GetFileAttributes_Params_Data>(index_);
    }
    WebDatabaseHost_GetFileAttributes_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> vfs_file_name;

 private:
  WebDatabaseHost_GetFileAttributes_Params_Data();
  ~WebDatabaseHost_GetFileAttributes_Params_Data() = delete;
};
static_assert(sizeof(WebDatabaseHost_GetFileAttributes_Params_Data) == 16,
              "Bad sizeof(WebDatabaseHost_GetFileAttributes_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) WebDatabaseHost_GetFileAttributes_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WebDatabaseHost_GetFileAttributes_ResponseParams_Data));
      new (data()) WebDatabaseHost_GetFileAttributes_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WebDatabaseHost_GetFileAttributes_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WebDatabaseHost_GetFileAttributes_ResponseParams_Data>(index_);
    }
    WebDatabaseHost_GetFileAttributes_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t attributes;
  uint8_t padfinal_[4];

 private:
  WebDatabaseHost_GetFileAttributes_ResponseParams_Data();
  ~WebDatabaseHost_GetFileAttributes_ResponseParams_Data() = delete;
};
static_assert(sizeof(WebDatabaseHost_GetFileAttributes_ResponseParams_Data) == 16,
              "Bad sizeof(WebDatabaseHost_GetFileAttributes_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) WebDatabaseHost_GetFileSize_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WebDatabaseHost_GetFileSize_Params_Data));
      new (data()) WebDatabaseHost_GetFileSize_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WebDatabaseHost_GetFileSize_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WebDatabaseHost_GetFileSize_Params_Data>(index_);
    }
    WebDatabaseHost_GetFileSize_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> vfs_file_name;

 private:
  WebDatabaseHost_GetFileSize_Params_Data();
  ~WebDatabaseHost_GetFileSize_Params_Data() = delete;
};
static_assert(sizeof(WebDatabaseHost_GetFileSize_Params_Data) == 16,
              "Bad sizeof(WebDatabaseHost_GetFileSize_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) WebDatabaseHost_GetFileSize_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WebDatabaseHost_GetFileSize_ResponseParams_Data));
      new (data()) WebDatabaseHost_GetFileSize_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WebDatabaseHost_GetFileSize_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WebDatabaseHost_GetFileSize_ResponseParams_Data>(index_);
    }
    WebDatabaseHost_GetFileSize_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int64_t size;

 private:
  WebDatabaseHost_GetFileSize_ResponseParams_Data();
  ~WebDatabaseHost_GetFileSize_ResponseParams_Data() = delete;
};
static_assert(sizeof(WebDatabaseHost_GetFileSize_ResponseParams_Data) == 16,
              "Bad sizeof(WebDatabaseHost_GetFileSize_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) WebDatabaseHost_SetFileSize_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WebDatabaseHost_SetFileSize_Params_Data));
      new (data()) WebDatabaseHost_SetFileSize_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WebDatabaseHost_SetFileSize_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WebDatabaseHost_SetFileSize_Params_Data>(index_);
    }
    WebDatabaseHost_SetFileSize_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> vfs_file_name;
  int64_t expected_size;

 private:
  WebDatabaseHost_SetFileSize_Params_Data();
  ~WebDatabaseHost_SetFileSize_Params_Data() = delete;
};
static_assert(sizeof(WebDatabaseHost_SetFileSize_Params_Data) == 24,
              "Bad sizeof(WebDatabaseHost_SetFileSize_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) WebDatabaseHost_SetFileSize_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WebDatabaseHost_SetFileSize_ResponseParams_Data));
      new (data()) WebDatabaseHost_SetFileSize_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WebDatabaseHost_SetFileSize_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WebDatabaseHost_SetFileSize_ResponseParams_Data>(index_);
    }
    WebDatabaseHost_SetFileSize_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t success : 1;
  uint8_t padfinal_[7];

 private:
  WebDatabaseHost_SetFileSize_ResponseParams_Data();
  ~WebDatabaseHost_SetFileSize_ResponseParams_Data() = delete;
};
static_assert(sizeof(WebDatabaseHost_SetFileSize_ResponseParams_Data) == 16,
              "Bad sizeof(WebDatabaseHost_SetFileSize_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) WebDatabaseHost_GetSpaceAvailable_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WebDatabaseHost_GetSpaceAvailable_Params_Data));
      new (data()) WebDatabaseHost_GetSpaceAvailable_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WebDatabaseHost_GetSpaceAvailable_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WebDatabaseHost_GetSpaceAvailable_Params_Data>(index_);
    }
    WebDatabaseHost_GetSpaceAvailable_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Origin_Data> origin;

 private:
  WebDatabaseHost_GetSpaceAvailable_Params_Data();
  ~WebDatabaseHost_GetSpaceAvailable_Params_Data() = delete;
};
static_assert(sizeof(WebDatabaseHost_GetSpaceAvailable_Params_Data) == 16,
              "Bad sizeof(WebDatabaseHost_GetSpaceAvailable_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) WebDatabaseHost_GetSpaceAvailable_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WebDatabaseHost_GetSpaceAvailable_ResponseParams_Data));
      new (data()) WebDatabaseHost_GetSpaceAvailable_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WebDatabaseHost_GetSpaceAvailable_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WebDatabaseHost_GetSpaceAvailable_ResponseParams_Data>(index_);
    }
    WebDatabaseHost_GetSpaceAvailable_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int64_t space_available;

 private:
  WebDatabaseHost_GetSpaceAvailable_ResponseParams_Data();
  ~WebDatabaseHost_GetSpaceAvailable_ResponseParams_Data() = delete;
};
static_assert(sizeof(WebDatabaseHost_GetSpaceAvailable_ResponseParams_Data) == 16,
              "Bad sizeof(WebDatabaseHost_GetSpaceAvailable_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) WebDatabaseHost_Opened_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WebDatabaseHost_Opened_Params_Data));
      new (data()) WebDatabaseHost_Opened_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WebDatabaseHost_Opened_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WebDatabaseHost_Opened_Params_Data>(index_);
    }
    WebDatabaseHost_Opened_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Origin_Data> origin;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> database_name;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> database_description;
  int64_t estimated_size;

 private:
  WebDatabaseHost_Opened_Params_Data();
  ~WebDatabaseHost_Opened_Params_Data() = delete;
};
static_assert(sizeof(WebDatabaseHost_Opened_Params_Data) == 40,
              "Bad sizeof(WebDatabaseHost_Opened_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) WebDatabaseHost_Modified_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WebDatabaseHost_Modified_Params_Data));
      new (data()) WebDatabaseHost_Modified_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WebDatabaseHost_Modified_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WebDatabaseHost_Modified_Params_Data>(index_);
    }
    WebDatabaseHost_Modified_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Origin_Data> origin;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> database_name;

 private:
  WebDatabaseHost_Modified_Params_Data();
  ~WebDatabaseHost_Modified_Params_Data() = delete;
};
static_assert(sizeof(WebDatabaseHost_Modified_Params_Data) == 24,
              "Bad sizeof(WebDatabaseHost_Modified_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) WebDatabaseHost_Closed_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WebDatabaseHost_Closed_Params_Data));
      new (data()) WebDatabaseHost_Closed_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WebDatabaseHost_Closed_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WebDatabaseHost_Closed_Params_Data>(index_);
    }
    WebDatabaseHost_Closed_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Origin_Data> origin;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> database_name;

 private:
  WebDatabaseHost_Closed_Params_Data();
  ~WebDatabaseHost_Closed_Params_Data() = delete;
};
static_assert(sizeof(WebDatabaseHost_Closed_Params_Data) == 24,
              "Bad sizeof(WebDatabaseHost_Closed_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) WebDatabaseHost_HandleSqliteError_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WebDatabaseHost_HandleSqliteError_Params_Data));
      new (data()) WebDatabaseHost_HandleSqliteError_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WebDatabaseHost_HandleSqliteError_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WebDatabaseHost_HandleSqliteError_Params_Data>(index_);
    }
    WebDatabaseHost_HandleSqliteError_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Origin_Data> origin;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> database_name;
  int32_t error;
  uint8_t padfinal_[4];

 private:
  WebDatabaseHost_HandleSqliteError_Params_Data();
  ~WebDatabaseHost_HandleSqliteError_Params_Data() = delete;
};
static_assert(sizeof(WebDatabaseHost_HandleSqliteError_Params_Data) == 32,
              "Bad sizeof(WebDatabaseHost_HandleSqliteError_Params_Data)");

}  // namespace internal
class WebDatabase_UpdateSize_ParamsDataView {
 public:
  WebDatabase_UpdateSize_ParamsDataView() {}

  WebDatabase_UpdateSize_ParamsDataView(
      internal::WebDatabase_UpdateSize_Params_Data* data,
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
  inline void GetNameDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadName(UserType* output) {
    auto* pointer = data_->name.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
  int64_t size() const {
    return data_->size;
  }
 private:
  internal::WebDatabase_UpdateSize_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WebDatabase_CloseImmediately_ParamsDataView {
 public:
  WebDatabase_CloseImmediately_ParamsDataView() {}

  WebDatabase_CloseImmediately_ParamsDataView(
      internal::WebDatabase_CloseImmediately_Params_Data* data,
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
  inline void GetNameDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadName(UserType* output) {
    auto* pointer = data_->name.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
 private:
  internal::WebDatabase_CloseImmediately_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WebDatabaseHost_OpenFile_ParamsDataView {
 public:
  WebDatabaseHost_OpenFile_ParamsDataView() {}

  WebDatabaseHost_OpenFile_ParamsDataView(
      internal::WebDatabaseHost_OpenFile_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetVfsFileNameDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadVfsFileName(UserType* output) {
    auto* pointer = data_->vfs_file_name.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
  int32_t desired_flags() const {
    return data_->desired_flags;
  }
 private:
  internal::WebDatabaseHost_OpenFile_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WebDatabaseHost_OpenFile_ResponseParamsDataView {
 public:
  WebDatabaseHost_OpenFile_ResponseParamsDataView() {}

  WebDatabaseHost_OpenFile_ResponseParamsDataView(
      internal::WebDatabaseHost_OpenFile_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetFileDataView(
      ::mojo_base::mojom::FileDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFile(UserType* output) {
    auto* pointer = data_->file.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::FileDataView>(
        pointer, output, context_);
  }
 private:
  internal::WebDatabaseHost_OpenFile_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WebDatabaseHost_DeleteFile_ParamsDataView {
 public:
  WebDatabaseHost_DeleteFile_ParamsDataView() {}

  WebDatabaseHost_DeleteFile_ParamsDataView(
      internal::WebDatabaseHost_DeleteFile_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetVfsFileNameDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadVfsFileName(UserType* output) {
    auto* pointer = data_->vfs_file_name.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
  bool sync_dir() const {
    return data_->sync_dir;
  }
 private:
  internal::WebDatabaseHost_DeleteFile_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WebDatabaseHost_DeleteFile_ResponseParamsDataView {
 public:
  WebDatabaseHost_DeleteFile_ResponseParamsDataView() {}

  WebDatabaseHost_DeleteFile_ResponseParamsDataView(
      internal::WebDatabaseHost_DeleteFile_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t sqlite_error_code() const {
    return data_->sqlite_error_code;
  }
 private:
  internal::WebDatabaseHost_DeleteFile_ResponseParams_Data* data_ = nullptr;
};

class WebDatabaseHost_GetFileAttributes_ParamsDataView {
 public:
  WebDatabaseHost_GetFileAttributes_ParamsDataView() {}

  WebDatabaseHost_GetFileAttributes_ParamsDataView(
      internal::WebDatabaseHost_GetFileAttributes_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetVfsFileNameDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadVfsFileName(UserType* output) {
    auto* pointer = data_->vfs_file_name.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
 private:
  internal::WebDatabaseHost_GetFileAttributes_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WebDatabaseHost_GetFileAttributes_ResponseParamsDataView {
 public:
  WebDatabaseHost_GetFileAttributes_ResponseParamsDataView() {}

  WebDatabaseHost_GetFileAttributes_ResponseParamsDataView(
      internal::WebDatabaseHost_GetFileAttributes_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t attributes() const {
    return data_->attributes;
  }
 private:
  internal::WebDatabaseHost_GetFileAttributes_ResponseParams_Data* data_ = nullptr;
};

class WebDatabaseHost_GetFileSize_ParamsDataView {
 public:
  WebDatabaseHost_GetFileSize_ParamsDataView() {}

  WebDatabaseHost_GetFileSize_ParamsDataView(
      internal::WebDatabaseHost_GetFileSize_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetVfsFileNameDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadVfsFileName(UserType* output) {
    auto* pointer = data_->vfs_file_name.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
 private:
  internal::WebDatabaseHost_GetFileSize_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WebDatabaseHost_GetFileSize_ResponseParamsDataView {
 public:
  WebDatabaseHost_GetFileSize_ResponseParamsDataView() {}

  WebDatabaseHost_GetFileSize_ResponseParamsDataView(
      internal::WebDatabaseHost_GetFileSize_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int64_t size() const {
    return data_->size;
  }
 private:
  internal::WebDatabaseHost_GetFileSize_ResponseParams_Data* data_ = nullptr;
};

class WebDatabaseHost_SetFileSize_ParamsDataView {
 public:
  WebDatabaseHost_SetFileSize_ParamsDataView() {}

  WebDatabaseHost_SetFileSize_ParamsDataView(
      internal::WebDatabaseHost_SetFileSize_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetVfsFileNameDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadVfsFileName(UserType* output) {
    auto* pointer = data_->vfs_file_name.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
  int64_t expected_size() const {
    return data_->expected_size;
  }
 private:
  internal::WebDatabaseHost_SetFileSize_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WebDatabaseHost_SetFileSize_ResponseParamsDataView {
 public:
  WebDatabaseHost_SetFileSize_ResponseParamsDataView() {}

  WebDatabaseHost_SetFileSize_ResponseParamsDataView(
      internal::WebDatabaseHost_SetFileSize_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
 private:
  internal::WebDatabaseHost_SetFileSize_ResponseParams_Data* data_ = nullptr;
};

class WebDatabaseHost_GetSpaceAvailable_ParamsDataView {
 public:
  WebDatabaseHost_GetSpaceAvailable_ParamsDataView() {}

  WebDatabaseHost_GetSpaceAvailable_ParamsDataView(
      internal::WebDatabaseHost_GetSpaceAvailable_Params_Data* data,
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
 private:
  internal::WebDatabaseHost_GetSpaceAvailable_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WebDatabaseHost_GetSpaceAvailable_ResponseParamsDataView {
 public:
  WebDatabaseHost_GetSpaceAvailable_ResponseParamsDataView() {}

  WebDatabaseHost_GetSpaceAvailable_ResponseParamsDataView(
      internal::WebDatabaseHost_GetSpaceAvailable_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int64_t space_available() const {
    return data_->space_available;
  }
 private:
  internal::WebDatabaseHost_GetSpaceAvailable_ResponseParams_Data* data_ = nullptr;
};

class WebDatabaseHost_Opened_ParamsDataView {
 public:
  WebDatabaseHost_Opened_ParamsDataView() {}

  WebDatabaseHost_Opened_ParamsDataView(
      internal::WebDatabaseHost_Opened_Params_Data* data,
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
  inline void GetDatabaseNameDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDatabaseName(UserType* output) {
    auto* pointer = data_->database_name.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
  inline void GetDatabaseDescriptionDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDatabaseDescription(UserType* output) {
    auto* pointer = data_->database_description.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
  int64_t estimated_size() const {
    return data_->estimated_size;
  }
 private:
  internal::WebDatabaseHost_Opened_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WebDatabaseHost_Modified_ParamsDataView {
 public:
  WebDatabaseHost_Modified_ParamsDataView() {}

  WebDatabaseHost_Modified_ParamsDataView(
      internal::WebDatabaseHost_Modified_Params_Data* data,
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
  inline void GetDatabaseNameDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDatabaseName(UserType* output) {
    auto* pointer = data_->database_name.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
 private:
  internal::WebDatabaseHost_Modified_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WebDatabaseHost_Closed_ParamsDataView {
 public:
  WebDatabaseHost_Closed_ParamsDataView() {}

  WebDatabaseHost_Closed_ParamsDataView(
      internal::WebDatabaseHost_Closed_Params_Data* data,
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
  inline void GetDatabaseNameDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDatabaseName(UserType* output) {
    auto* pointer = data_->database_name.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
 private:
  internal::WebDatabaseHost_Closed_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WebDatabaseHost_HandleSqliteError_ParamsDataView {
 public:
  WebDatabaseHost_HandleSqliteError_ParamsDataView() {}

  WebDatabaseHost_HandleSqliteError_ParamsDataView(
      internal::WebDatabaseHost_HandleSqliteError_Params_Data* data,
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
  inline void GetDatabaseNameDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDatabaseName(UserType* output) {
    auto* pointer = data_->database_name.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
  int32_t error() const {
    return data_->error;
  }
 private:
  internal::WebDatabaseHost_HandleSqliteError_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void WebDatabase_UpdateSize_ParamsDataView::GetOriginDataView(
    ::url::mojom::OriginDataView* output) {
  auto pointer = data_->origin.Get();
  *output = ::url::mojom::OriginDataView(pointer, context_);
}
inline void WebDatabase_UpdateSize_ParamsDataView::GetNameDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->name.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}


inline void WebDatabase_CloseImmediately_ParamsDataView::GetOriginDataView(
    ::url::mojom::OriginDataView* output) {
  auto pointer = data_->origin.Get();
  *output = ::url::mojom::OriginDataView(pointer, context_);
}
inline void WebDatabase_CloseImmediately_ParamsDataView::GetNameDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->name.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}


inline void WebDatabaseHost_OpenFile_ParamsDataView::GetVfsFileNameDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->vfs_file_name.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}


inline void WebDatabaseHost_OpenFile_ResponseParamsDataView::GetFileDataView(
    ::mojo_base::mojom::FileDataView* output) {
  auto pointer = data_->file.Get();
  *output = ::mojo_base::mojom::FileDataView(pointer, context_);
}


inline void WebDatabaseHost_DeleteFile_ParamsDataView::GetVfsFileNameDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->vfs_file_name.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}




inline void WebDatabaseHost_GetFileAttributes_ParamsDataView::GetVfsFileNameDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->vfs_file_name.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}




inline void WebDatabaseHost_GetFileSize_ParamsDataView::GetVfsFileNameDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->vfs_file_name.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}




inline void WebDatabaseHost_SetFileSize_ParamsDataView::GetVfsFileNameDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->vfs_file_name.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}




inline void WebDatabaseHost_GetSpaceAvailable_ParamsDataView::GetOriginDataView(
    ::url::mojom::OriginDataView* output) {
  auto pointer = data_->origin.Get();
  *output = ::url::mojom::OriginDataView(pointer, context_);
}




inline void WebDatabaseHost_Opened_ParamsDataView::GetOriginDataView(
    ::url::mojom::OriginDataView* output) {
  auto pointer = data_->origin.Get();
  *output = ::url::mojom::OriginDataView(pointer, context_);
}
inline void WebDatabaseHost_Opened_ParamsDataView::GetDatabaseNameDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->database_name.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}
inline void WebDatabaseHost_Opened_ParamsDataView::GetDatabaseDescriptionDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->database_description.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}


inline void WebDatabaseHost_Modified_ParamsDataView::GetOriginDataView(
    ::url::mojom::OriginDataView* output) {
  auto pointer = data_->origin.Get();
  *output = ::url::mojom::OriginDataView(pointer, context_);
}
inline void WebDatabaseHost_Modified_ParamsDataView::GetDatabaseNameDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->database_name.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}


inline void WebDatabaseHost_Closed_ParamsDataView::GetOriginDataView(
    ::url::mojom::OriginDataView* output) {
  auto pointer = data_->origin.Get();
  *output = ::url::mojom::OriginDataView(pointer, context_);
}
inline void WebDatabaseHost_Closed_ParamsDataView::GetDatabaseNameDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->database_name.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}


inline void WebDatabaseHost_HandleSqliteError_ParamsDataView::GetOriginDataView(
    ::url::mojom::OriginDataView* output) {
  auto pointer = data_->origin.Get();
  *output = ::url::mojom::OriginDataView(pointer, context_);
}
inline void WebDatabaseHost_HandleSqliteError_ParamsDataView::GetDatabaseNameDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->database_name.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}

}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_WEBDATABASE_WEB_DATABASE_MOJOM_PARAMS_DATA_H_