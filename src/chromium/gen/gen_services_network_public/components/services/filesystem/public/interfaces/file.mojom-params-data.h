// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_SERVICES_FILESYSTEM_PUBLIC_INTERFACES_FILE_MOJOM_PARAMS_DATA_H_
#define COMPONENTS_SERVICES_FILESYSTEM_PUBLIC_INTERFACES_FILE_MOJOM_PARAMS_DATA_H_

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
class  File_Close_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(File_Close_Params_Data));
      new (data()) File_Close_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    File_Close_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<File_Close_Params_Data>(index_);
    }
    File_Close_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  File_Close_Params_Data();
  ~File_Close_Params_Data() = delete;
};
static_assert(sizeof(File_Close_Params_Data) == 8,
              "Bad sizeof(File_Close_Params_Data)");
class  File_Close_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(File_Close_ResponseParams_Data));
      new (data()) File_Close_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    File_Close_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<File_Close_ResponseParams_Data>(index_);
    }
    File_Close_ResponseParams_Data* operator->() { return data(); }

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
  File_Close_ResponseParams_Data();
  ~File_Close_ResponseParams_Data() = delete;
};
static_assert(sizeof(File_Close_ResponseParams_Data) == 16,
              "Bad sizeof(File_Close_ResponseParams_Data)");
class  File_Read_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(File_Read_Params_Data));
      new (data()) File_Read_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    File_Read_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<File_Read_Params_Data>(index_);
    }
    File_Read_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t num_bytes_to_read;
  int32_t whence;
  int64_t offset;

 private:
  File_Read_Params_Data();
  ~File_Read_Params_Data() = delete;
};
static_assert(sizeof(File_Read_Params_Data) == 24,
              "Bad sizeof(File_Read_Params_Data)");
class  File_Read_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(File_Read_ResponseParams_Data));
      new (data()) File_Read_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    File_Read_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<File_Read_ResponseParams_Data>(index_);
    }
    File_Read_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t error;
  uint8_t pad0_[4];
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> bytes_read;

 private:
  File_Read_ResponseParams_Data();
  ~File_Read_ResponseParams_Data() = delete;
};
static_assert(sizeof(File_Read_ResponseParams_Data) == 24,
              "Bad sizeof(File_Read_ResponseParams_Data)");
class  File_Write_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(File_Write_Params_Data));
      new (data()) File_Write_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    File_Write_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<File_Write_Params_Data>(index_);
    }
    File_Write_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> bytes_to_write;
  int64_t offset;
  int32_t whence;
  uint8_t padfinal_[4];

 private:
  File_Write_Params_Data();
  ~File_Write_Params_Data() = delete;
};
static_assert(sizeof(File_Write_Params_Data) == 32,
              "Bad sizeof(File_Write_Params_Data)");
class  File_Write_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(File_Write_ResponseParams_Data));
      new (data()) File_Write_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    File_Write_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<File_Write_ResponseParams_Data>(index_);
    }
    File_Write_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t error;
  uint32_t num_bytes_written;

 private:
  File_Write_ResponseParams_Data();
  ~File_Write_ResponseParams_Data() = delete;
};
static_assert(sizeof(File_Write_ResponseParams_Data) == 16,
              "Bad sizeof(File_Write_ResponseParams_Data)");
class  File_Tell_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(File_Tell_Params_Data));
      new (data()) File_Tell_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    File_Tell_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<File_Tell_Params_Data>(index_);
    }
    File_Tell_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  File_Tell_Params_Data();
  ~File_Tell_Params_Data() = delete;
};
static_assert(sizeof(File_Tell_Params_Data) == 8,
              "Bad sizeof(File_Tell_Params_Data)");
class  File_Tell_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(File_Tell_ResponseParams_Data));
      new (data()) File_Tell_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    File_Tell_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<File_Tell_ResponseParams_Data>(index_);
    }
    File_Tell_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t error;
  uint8_t pad0_[4];
  int64_t position;

 private:
  File_Tell_ResponseParams_Data();
  ~File_Tell_ResponseParams_Data() = delete;
};
static_assert(sizeof(File_Tell_ResponseParams_Data) == 24,
              "Bad sizeof(File_Tell_ResponseParams_Data)");
class  File_Seek_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(File_Seek_Params_Data));
      new (data()) File_Seek_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    File_Seek_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<File_Seek_Params_Data>(index_);
    }
    File_Seek_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int64_t offset;
  int32_t whence;
  uint8_t padfinal_[4];

 private:
  File_Seek_Params_Data();
  ~File_Seek_Params_Data() = delete;
};
static_assert(sizeof(File_Seek_Params_Data) == 24,
              "Bad sizeof(File_Seek_Params_Data)");
class  File_Seek_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(File_Seek_ResponseParams_Data));
      new (data()) File_Seek_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    File_Seek_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<File_Seek_ResponseParams_Data>(index_);
    }
    File_Seek_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t error;
  uint8_t pad0_[4];
  int64_t position;

 private:
  File_Seek_ResponseParams_Data();
  ~File_Seek_ResponseParams_Data() = delete;
};
static_assert(sizeof(File_Seek_ResponseParams_Data) == 24,
              "Bad sizeof(File_Seek_ResponseParams_Data)");
class  File_Stat_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(File_Stat_Params_Data));
      new (data()) File_Stat_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    File_Stat_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<File_Stat_Params_Data>(index_);
    }
    File_Stat_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  File_Stat_Params_Data();
  ~File_Stat_Params_Data() = delete;
};
static_assert(sizeof(File_Stat_Params_Data) == 8,
              "Bad sizeof(File_Stat_Params_Data)");
class  File_Stat_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(File_Stat_ResponseParams_Data));
      new (data()) File_Stat_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    File_Stat_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<File_Stat_ResponseParams_Data>(index_);
    }
    File_Stat_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t error;
  uint8_t pad0_[4];
  mojo::internal::Pointer<::filesystem::mojom::internal::FileInformation_Data> file_information;

 private:
  File_Stat_ResponseParams_Data();
  ~File_Stat_ResponseParams_Data() = delete;
};
static_assert(sizeof(File_Stat_ResponseParams_Data) == 24,
              "Bad sizeof(File_Stat_ResponseParams_Data)");
class  File_Truncate_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(File_Truncate_Params_Data));
      new (data()) File_Truncate_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    File_Truncate_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<File_Truncate_Params_Data>(index_);
    }
    File_Truncate_Params_Data* operator->() { return data(); }

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
  File_Truncate_Params_Data();
  ~File_Truncate_Params_Data() = delete;
};
static_assert(sizeof(File_Truncate_Params_Data) == 16,
              "Bad sizeof(File_Truncate_Params_Data)");
class  File_Truncate_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(File_Truncate_ResponseParams_Data));
      new (data()) File_Truncate_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    File_Truncate_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<File_Truncate_ResponseParams_Data>(index_);
    }
    File_Truncate_ResponseParams_Data* operator->() { return data(); }

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
  File_Truncate_ResponseParams_Data();
  ~File_Truncate_ResponseParams_Data() = delete;
};
static_assert(sizeof(File_Truncate_ResponseParams_Data) == 16,
              "Bad sizeof(File_Truncate_ResponseParams_Data)");
class  File_Touch_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(File_Touch_Params_Data));
      new (data()) File_Touch_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    File_Touch_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<File_Touch_Params_Data>(index_);
    }
    File_Touch_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::filesystem::mojom::internal::TimespecOrNow_Data> atime;
  mojo::internal::Pointer<::filesystem::mojom::internal::TimespecOrNow_Data> mtime;

 private:
  File_Touch_Params_Data();
  ~File_Touch_Params_Data() = delete;
};
static_assert(sizeof(File_Touch_Params_Data) == 24,
              "Bad sizeof(File_Touch_Params_Data)");
class  File_Touch_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(File_Touch_ResponseParams_Data));
      new (data()) File_Touch_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    File_Touch_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<File_Touch_ResponseParams_Data>(index_);
    }
    File_Touch_ResponseParams_Data* operator->() { return data(); }

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
  File_Touch_ResponseParams_Data();
  ~File_Touch_ResponseParams_Data() = delete;
};
static_assert(sizeof(File_Touch_ResponseParams_Data) == 16,
              "Bad sizeof(File_Touch_ResponseParams_Data)");
class  File_Dup_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(File_Dup_Params_Data));
      new (data()) File_Dup_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    File_Dup_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<File_Dup_Params_Data>(index_);
    }
    File_Dup_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data file;
  uint8_t padfinal_[4];

 private:
  File_Dup_Params_Data();
  ~File_Dup_Params_Data() = delete;
};
static_assert(sizeof(File_Dup_Params_Data) == 16,
              "Bad sizeof(File_Dup_Params_Data)");
class  File_Dup_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(File_Dup_ResponseParams_Data));
      new (data()) File_Dup_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    File_Dup_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<File_Dup_ResponseParams_Data>(index_);
    }
    File_Dup_ResponseParams_Data* operator->() { return data(); }

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
  File_Dup_ResponseParams_Data();
  ~File_Dup_ResponseParams_Data() = delete;
};
static_assert(sizeof(File_Dup_ResponseParams_Data) == 16,
              "Bad sizeof(File_Dup_ResponseParams_Data)");
class  File_Flush_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(File_Flush_Params_Data));
      new (data()) File_Flush_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    File_Flush_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<File_Flush_Params_Data>(index_);
    }
    File_Flush_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  File_Flush_Params_Data();
  ~File_Flush_Params_Data() = delete;
};
static_assert(sizeof(File_Flush_Params_Data) == 8,
              "Bad sizeof(File_Flush_Params_Data)");
class  File_Flush_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(File_Flush_ResponseParams_Data));
      new (data()) File_Flush_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    File_Flush_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<File_Flush_ResponseParams_Data>(index_);
    }
    File_Flush_ResponseParams_Data* operator->() { return data(); }

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
  File_Flush_ResponseParams_Data();
  ~File_Flush_ResponseParams_Data() = delete;
};
static_assert(sizeof(File_Flush_ResponseParams_Data) == 16,
              "Bad sizeof(File_Flush_ResponseParams_Data)");
class  File_Lock_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(File_Lock_Params_Data));
      new (data()) File_Lock_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    File_Lock_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<File_Lock_Params_Data>(index_);
    }
    File_Lock_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  File_Lock_Params_Data();
  ~File_Lock_Params_Data() = delete;
};
static_assert(sizeof(File_Lock_Params_Data) == 8,
              "Bad sizeof(File_Lock_Params_Data)");
class  File_Lock_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(File_Lock_ResponseParams_Data));
      new (data()) File_Lock_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    File_Lock_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<File_Lock_ResponseParams_Data>(index_);
    }
    File_Lock_ResponseParams_Data* operator->() { return data(); }

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
  File_Lock_ResponseParams_Data();
  ~File_Lock_ResponseParams_Data() = delete;
};
static_assert(sizeof(File_Lock_ResponseParams_Data) == 16,
              "Bad sizeof(File_Lock_ResponseParams_Data)");
class  File_Unlock_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(File_Unlock_Params_Data));
      new (data()) File_Unlock_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    File_Unlock_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<File_Unlock_Params_Data>(index_);
    }
    File_Unlock_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  File_Unlock_Params_Data();
  ~File_Unlock_Params_Data() = delete;
};
static_assert(sizeof(File_Unlock_Params_Data) == 8,
              "Bad sizeof(File_Unlock_Params_Data)");
class  File_Unlock_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(File_Unlock_ResponseParams_Data));
      new (data()) File_Unlock_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    File_Unlock_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<File_Unlock_ResponseParams_Data>(index_);
    }
    File_Unlock_ResponseParams_Data* operator->() { return data(); }

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
  File_Unlock_ResponseParams_Data();
  ~File_Unlock_ResponseParams_Data() = delete;
};
static_assert(sizeof(File_Unlock_ResponseParams_Data) == 16,
              "Bad sizeof(File_Unlock_ResponseParams_Data)");
class  File_AsHandle_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(File_AsHandle_Params_Data));
      new (data()) File_AsHandle_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    File_AsHandle_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<File_AsHandle_Params_Data>(index_);
    }
    File_AsHandle_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  File_AsHandle_Params_Data();
  ~File_AsHandle_Params_Data() = delete;
};
static_assert(sizeof(File_AsHandle_Params_Data) == 8,
              "Bad sizeof(File_AsHandle_Params_Data)");
class  File_AsHandle_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(File_AsHandle_ResponseParams_Data));
      new (data()) File_AsHandle_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    File_AsHandle_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<File_AsHandle_ResponseParams_Data>(index_);
    }
    File_AsHandle_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t error;
  uint8_t pad0_[4];
  mojo::internal::Pointer<::mojo_base::mojom::internal::File_Data> file_handle;

 private:
  File_AsHandle_ResponseParams_Data();
  ~File_AsHandle_ResponseParams_Data() = delete;
};
static_assert(sizeof(File_AsHandle_ResponseParams_Data) == 24,
              "Bad sizeof(File_AsHandle_ResponseParams_Data)");

}  // namespace internal
class File_Close_ParamsDataView {
 public:
  File_Close_ParamsDataView() {}

  File_Close_ParamsDataView(
      internal::File_Close_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::File_Close_Params_Data* data_ = nullptr;
};

class File_Close_ResponseParamsDataView {
 public:
  File_Close_ResponseParamsDataView() {}

  File_Close_ResponseParamsDataView(
      internal::File_Close_ResponseParams_Data* data,
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
  internal::File_Close_ResponseParams_Data* data_ = nullptr;
};

class File_Read_ParamsDataView {
 public:
  File_Read_ParamsDataView() {}

  File_Read_ParamsDataView(
      internal::File_Read_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t num_bytes_to_read() const {
    return data_->num_bytes_to_read;
  }
  int64_t offset() const {
    return data_->offset;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadWhence(UserType* output) const {
    auto data_value = data_->whence;
    return mojo::internal::Deserialize<::filesystem::mojom::Whence>(
        data_value, output);
  }

  ::filesystem::mojom::Whence whence() const {
    return static_cast<::filesystem::mojom::Whence>(data_->whence);
  }
 private:
  internal::File_Read_Params_Data* data_ = nullptr;
};

class File_Read_ResponseParamsDataView {
 public:
  File_Read_ResponseParamsDataView() {}

  File_Read_ResponseParamsDataView(
      internal::File_Read_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

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
  inline void GetBytesReadDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBytesRead(UserType* output) {
    auto* pointer = data_->bytes_read.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
 private:
  internal::File_Read_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class File_Write_ParamsDataView {
 public:
  File_Write_ParamsDataView() {}

  File_Write_ParamsDataView(
      internal::File_Write_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetBytesToWriteDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBytesToWrite(UserType* output) {
    auto* pointer = data_->bytes_to_write.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
  int64_t offset() const {
    return data_->offset;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadWhence(UserType* output) const {
    auto data_value = data_->whence;
    return mojo::internal::Deserialize<::filesystem::mojom::Whence>(
        data_value, output);
  }

  ::filesystem::mojom::Whence whence() const {
    return static_cast<::filesystem::mojom::Whence>(data_->whence);
  }
 private:
  internal::File_Write_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class File_Write_ResponseParamsDataView {
 public:
  File_Write_ResponseParamsDataView() {}

  File_Write_ResponseParamsDataView(
      internal::File_Write_ResponseParams_Data* data,
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
  uint32_t num_bytes_written() const {
    return data_->num_bytes_written;
  }
 private:
  internal::File_Write_ResponseParams_Data* data_ = nullptr;
};

class File_Tell_ParamsDataView {
 public:
  File_Tell_ParamsDataView() {}

  File_Tell_ParamsDataView(
      internal::File_Tell_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::File_Tell_Params_Data* data_ = nullptr;
};

class File_Tell_ResponseParamsDataView {
 public:
  File_Tell_ResponseParamsDataView() {}

  File_Tell_ResponseParamsDataView(
      internal::File_Tell_ResponseParams_Data* data,
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
  int64_t position() const {
    return data_->position;
  }
 private:
  internal::File_Tell_ResponseParams_Data* data_ = nullptr;
};

class File_Seek_ParamsDataView {
 public:
  File_Seek_ParamsDataView() {}

  File_Seek_ParamsDataView(
      internal::File_Seek_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int64_t offset() const {
    return data_->offset;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadWhence(UserType* output) const {
    auto data_value = data_->whence;
    return mojo::internal::Deserialize<::filesystem::mojom::Whence>(
        data_value, output);
  }

  ::filesystem::mojom::Whence whence() const {
    return static_cast<::filesystem::mojom::Whence>(data_->whence);
  }
 private:
  internal::File_Seek_Params_Data* data_ = nullptr;
};

class File_Seek_ResponseParamsDataView {
 public:
  File_Seek_ResponseParamsDataView() {}

  File_Seek_ResponseParamsDataView(
      internal::File_Seek_ResponseParams_Data* data,
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
  int64_t position() const {
    return data_->position;
  }
 private:
  internal::File_Seek_ResponseParams_Data* data_ = nullptr;
};

class File_Stat_ParamsDataView {
 public:
  File_Stat_ParamsDataView() {}

  File_Stat_ParamsDataView(
      internal::File_Stat_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::File_Stat_Params_Data* data_ = nullptr;
};

class File_Stat_ResponseParamsDataView {
 public:
  File_Stat_ResponseParamsDataView() {}

  File_Stat_ResponseParamsDataView(
      internal::File_Stat_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

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
  inline void GetFileInformationDataView(
      ::filesystem::mojom::FileInformationDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFileInformation(UserType* output) {
    auto* pointer = data_->file_information.Get();
    return mojo::internal::Deserialize<::filesystem::mojom::FileInformationDataView>(
        pointer, output, context_);
  }
 private:
  internal::File_Stat_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class File_Truncate_ParamsDataView {
 public:
  File_Truncate_ParamsDataView() {}

  File_Truncate_ParamsDataView(
      internal::File_Truncate_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int64_t size() const {
    return data_->size;
  }
 private:
  internal::File_Truncate_Params_Data* data_ = nullptr;
};

class File_Truncate_ResponseParamsDataView {
 public:
  File_Truncate_ResponseParamsDataView() {}

  File_Truncate_ResponseParamsDataView(
      internal::File_Truncate_ResponseParams_Data* data,
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
  internal::File_Truncate_ResponseParams_Data* data_ = nullptr;
};

class File_Touch_ParamsDataView {
 public:
  File_Touch_ParamsDataView() {}

  File_Touch_ParamsDataView(
      internal::File_Touch_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetAtimeDataView(
      ::filesystem::mojom::TimespecOrNowDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAtime(UserType* output) {
    auto* pointer = data_->atime.Get();
    return mojo::internal::Deserialize<::filesystem::mojom::TimespecOrNowDataView>(
        pointer, output, context_);
  }
  inline void GetMtimeDataView(
      ::filesystem::mojom::TimespecOrNowDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMtime(UserType* output) {
    auto* pointer = data_->mtime.Get();
    return mojo::internal::Deserialize<::filesystem::mojom::TimespecOrNowDataView>(
        pointer, output, context_);
  }
 private:
  internal::File_Touch_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class File_Touch_ResponseParamsDataView {
 public:
  File_Touch_ResponseParamsDataView() {}

  File_Touch_ResponseParamsDataView(
      internal::File_Touch_ResponseParams_Data* data,
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
  internal::File_Touch_ResponseParams_Data* data_ = nullptr;
};

class File_Dup_ParamsDataView {
 public:
  File_Dup_ParamsDataView() {}

  File_Dup_ParamsDataView(
      internal::File_Dup_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeFile() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::filesystem::mojom::FileRequestDataView>(
            &data_->file, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::File_Dup_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class File_Dup_ResponseParamsDataView {
 public:
  File_Dup_ResponseParamsDataView() {}

  File_Dup_ResponseParamsDataView(
      internal::File_Dup_ResponseParams_Data* data,
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
  internal::File_Dup_ResponseParams_Data* data_ = nullptr;
};

class File_Flush_ParamsDataView {
 public:
  File_Flush_ParamsDataView() {}

  File_Flush_ParamsDataView(
      internal::File_Flush_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::File_Flush_Params_Data* data_ = nullptr;
};

class File_Flush_ResponseParamsDataView {
 public:
  File_Flush_ResponseParamsDataView() {}

  File_Flush_ResponseParamsDataView(
      internal::File_Flush_ResponseParams_Data* data,
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
  internal::File_Flush_ResponseParams_Data* data_ = nullptr;
};

class File_Lock_ParamsDataView {
 public:
  File_Lock_ParamsDataView() {}

  File_Lock_ParamsDataView(
      internal::File_Lock_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::File_Lock_Params_Data* data_ = nullptr;
};

class File_Lock_ResponseParamsDataView {
 public:
  File_Lock_ResponseParamsDataView() {}

  File_Lock_ResponseParamsDataView(
      internal::File_Lock_ResponseParams_Data* data,
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
  internal::File_Lock_ResponseParams_Data* data_ = nullptr;
};

class File_Unlock_ParamsDataView {
 public:
  File_Unlock_ParamsDataView() {}

  File_Unlock_ParamsDataView(
      internal::File_Unlock_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::File_Unlock_Params_Data* data_ = nullptr;
};

class File_Unlock_ResponseParamsDataView {
 public:
  File_Unlock_ResponseParamsDataView() {}

  File_Unlock_ResponseParamsDataView(
      internal::File_Unlock_ResponseParams_Data* data,
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
  internal::File_Unlock_ResponseParams_Data* data_ = nullptr;
};

class File_AsHandle_ParamsDataView {
 public:
  File_AsHandle_ParamsDataView() {}

  File_AsHandle_ParamsDataView(
      internal::File_AsHandle_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::File_AsHandle_Params_Data* data_ = nullptr;
};

class File_AsHandle_ResponseParamsDataView {
 public:
  File_AsHandle_ResponseParamsDataView() {}

  File_AsHandle_ResponseParamsDataView(
      internal::File_AsHandle_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

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
  inline void GetFileHandleDataView(
      ::mojo_base::mojom::FileDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFileHandle(UserType* output) {
    auto* pointer = data_->file_handle.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::FileDataView>(
        pointer, output, context_);
  }
 private:
  internal::File_AsHandle_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};








inline void File_Read_ResponseParamsDataView::GetBytesReadDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->bytes_read.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}


inline void File_Write_ParamsDataView::GetBytesToWriteDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->bytes_to_write.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}














inline void File_Stat_ResponseParamsDataView::GetFileInformationDataView(
    ::filesystem::mojom::FileInformationDataView* output) {
  auto pointer = data_->file_information.Get();
  *output = ::filesystem::mojom::FileInformationDataView(pointer, context_);
}






inline void File_Touch_ParamsDataView::GetAtimeDataView(
    ::filesystem::mojom::TimespecOrNowDataView* output) {
  auto pointer = data_->atime.Get();
  *output = ::filesystem::mojom::TimespecOrNowDataView(pointer, context_);
}
inline void File_Touch_ParamsDataView::GetMtimeDataView(
    ::filesystem::mojom::TimespecOrNowDataView* output) {
  auto pointer = data_->mtime.Get();
  *output = ::filesystem::mojom::TimespecOrNowDataView(pointer, context_);
}






















inline void File_AsHandle_ResponseParamsDataView::GetFileHandleDataView(
    ::mojo_base::mojom::FileDataView* output) {
  auto pointer = data_->file_handle.Get();
  *output = ::mojo_base::mojom::FileDataView(pointer, context_);
}

}  // namespace mojom
}  // namespace filesystem

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // COMPONENTS_SERVICES_FILESYSTEM_PUBLIC_INTERFACES_FILE_MOJOM_PARAMS_DATA_H_