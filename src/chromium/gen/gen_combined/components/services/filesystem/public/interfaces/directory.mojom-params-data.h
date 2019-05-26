// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_SERVICES_FILESYSTEM_PUBLIC_INTERFACES_DIRECTORY_MOJOM_PARAMS_DATA_H_
#define COMPONENTS_SERVICES_FILESYSTEM_PUBLIC_INTERFACES_DIRECTORY_MOJOM_PARAMS_DATA_H_

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
class  Directory_Read_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Directory_Read_Params_Data));
      new (data()) Directory_Read_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Directory_Read_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Directory_Read_Params_Data>(index_);
    }
    Directory_Read_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  Directory_Read_Params_Data();
  ~Directory_Read_Params_Data() = delete;
};
static_assert(sizeof(Directory_Read_Params_Data) == 8,
              "Bad sizeof(Directory_Read_Params_Data)");
class  Directory_Read_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Directory_Read_ResponseParams_Data));
      new (data()) Directory_Read_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Directory_Read_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Directory_Read_ResponseParams_Data>(index_);
    }
    Directory_Read_ResponseParams_Data* operator->() { return data(); }

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
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::filesystem::mojom::internal::DirectoryEntry_Data>>> directory_contents;

 private:
  Directory_Read_ResponseParams_Data();
  ~Directory_Read_ResponseParams_Data() = delete;
};
static_assert(sizeof(Directory_Read_ResponseParams_Data) == 24,
              "Bad sizeof(Directory_Read_ResponseParams_Data)");
class  Directory_OpenFile_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Directory_OpenFile_Params_Data));
      new (data()) Directory_OpenFile_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Directory_OpenFile_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Directory_OpenFile_Params_Data>(index_);
    }
    Directory_OpenFile_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> path;
  mojo::internal::Handle_Data file;
  uint32_t open_flags;

 private:
  Directory_OpenFile_Params_Data();
  ~Directory_OpenFile_Params_Data() = delete;
};
static_assert(sizeof(Directory_OpenFile_Params_Data) == 24,
              "Bad sizeof(Directory_OpenFile_Params_Data)");
class  Directory_OpenFile_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Directory_OpenFile_ResponseParams_Data));
      new (data()) Directory_OpenFile_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Directory_OpenFile_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Directory_OpenFile_ResponseParams_Data>(index_);
    }
    Directory_OpenFile_ResponseParams_Data* operator->() { return data(); }

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
  Directory_OpenFile_ResponseParams_Data();
  ~Directory_OpenFile_ResponseParams_Data() = delete;
};
static_assert(sizeof(Directory_OpenFile_ResponseParams_Data) == 16,
              "Bad sizeof(Directory_OpenFile_ResponseParams_Data)");
class  Directory_OpenFileHandle_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Directory_OpenFileHandle_Params_Data));
      new (data()) Directory_OpenFileHandle_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Directory_OpenFileHandle_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Directory_OpenFileHandle_Params_Data>(index_);
    }
    Directory_OpenFileHandle_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> path;
  uint32_t open_flags;
  uint8_t padfinal_[4];

 private:
  Directory_OpenFileHandle_Params_Data();
  ~Directory_OpenFileHandle_Params_Data() = delete;
};
static_assert(sizeof(Directory_OpenFileHandle_Params_Data) == 24,
              "Bad sizeof(Directory_OpenFileHandle_Params_Data)");
class  Directory_OpenFileHandle_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Directory_OpenFileHandle_ResponseParams_Data));
      new (data()) Directory_OpenFileHandle_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Directory_OpenFileHandle_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Directory_OpenFileHandle_ResponseParams_Data>(index_);
    }
    Directory_OpenFileHandle_ResponseParams_Data* operator->() { return data(); }

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
  Directory_OpenFileHandle_ResponseParams_Data();
  ~Directory_OpenFileHandle_ResponseParams_Data() = delete;
};
static_assert(sizeof(Directory_OpenFileHandle_ResponseParams_Data) == 24,
              "Bad sizeof(Directory_OpenFileHandle_ResponseParams_Data)");
class  Directory_OpenFileHandles_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Directory_OpenFileHandles_Params_Data));
      new (data()) Directory_OpenFileHandles_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Directory_OpenFileHandles_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Directory_OpenFileHandles_Params_Data>(index_);
    }
    Directory_OpenFileHandles_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::FileOpenDetails_Data>>> files;

 private:
  Directory_OpenFileHandles_Params_Data();
  ~Directory_OpenFileHandles_Params_Data() = delete;
};
static_assert(sizeof(Directory_OpenFileHandles_Params_Data) == 16,
              "Bad sizeof(Directory_OpenFileHandles_Params_Data)");
class  Directory_OpenFileHandles_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Directory_OpenFileHandles_ResponseParams_Data));
      new (data()) Directory_OpenFileHandles_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Directory_OpenFileHandles_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Directory_OpenFileHandles_ResponseParams_Data>(index_);
    }
    Directory_OpenFileHandles_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::FileOpenResult_Data>>> results;

 private:
  Directory_OpenFileHandles_ResponseParams_Data();
  ~Directory_OpenFileHandles_ResponseParams_Data() = delete;
};
static_assert(sizeof(Directory_OpenFileHandles_ResponseParams_Data) == 16,
              "Bad sizeof(Directory_OpenFileHandles_ResponseParams_Data)");
class  Directory_OpenDirectory_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Directory_OpenDirectory_Params_Data));
      new (data()) Directory_OpenDirectory_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Directory_OpenDirectory_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Directory_OpenDirectory_Params_Data>(index_);
    }
    Directory_OpenDirectory_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> path;
  mojo::internal::Handle_Data directory;
  uint32_t open_flags;

 private:
  Directory_OpenDirectory_Params_Data();
  ~Directory_OpenDirectory_Params_Data() = delete;
};
static_assert(sizeof(Directory_OpenDirectory_Params_Data) == 24,
              "Bad sizeof(Directory_OpenDirectory_Params_Data)");
class  Directory_OpenDirectory_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Directory_OpenDirectory_ResponseParams_Data));
      new (data()) Directory_OpenDirectory_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Directory_OpenDirectory_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Directory_OpenDirectory_ResponseParams_Data>(index_);
    }
    Directory_OpenDirectory_ResponseParams_Data* operator->() { return data(); }

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
  Directory_OpenDirectory_ResponseParams_Data();
  ~Directory_OpenDirectory_ResponseParams_Data() = delete;
};
static_assert(sizeof(Directory_OpenDirectory_ResponseParams_Data) == 16,
              "Bad sizeof(Directory_OpenDirectory_ResponseParams_Data)");
class  Directory_Rename_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Directory_Rename_Params_Data));
      new (data()) Directory_Rename_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Directory_Rename_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Directory_Rename_Params_Data>(index_);
    }
    Directory_Rename_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> path;
  mojo::internal::Pointer<mojo::internal::String_Data> new_path;

 private:
  Directory_Rename_Params_Data();
  ~Directory_Rename_Params_Data() = delete;
};
static_assert(sizeof(Directory_Rename_Params_Data) == 24,
              "Bad sizeof(Directory_Rename_Params_Data)");
class  Directory_Rename_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Directory_Rename_ResponseParams_Data));
      new (data()) Directory_Rename_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Directory_Rename_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Directory_Rename_ResponseParams_Data>(index_);
    }
    Directory_Rename_ResponseParams_Data* operator->() { return data(); }

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
  Directory_Rename_ResponseParams_Data();
  ~Directory_Rename_ResponseParams_Data() = delete;
};
static_assert(sizeof(Directory_Rename_ResponseParams_Data) == 16,
              "Bad sizeof(Directory_Rename_ResponseParams_Data)");
class  Directory_Replace_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Directory_Replace_Params_Data));
      new (data()) Directory_Replace_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Directory_Replace_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Directory_Replace_Params_Data>(index_);
    }
    Directory_Replace_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> path;
  mojo::internal::Pointer<mojo::internal::String_Data> new_path;

 private:
  Directory_Replace_Params_Data();
  ~Directory_Replace_Params_Data() = delete;
};
static_assert(sizeof(Directory_Replace_Params_Data) == 24,
              "Bad sizeof(Directory_Replace_Params_Data)");
class  Directory_Replace_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Directory_Replace_ResponseParams_Data));
      new (data()) Directory_Replace_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Directory_Replace_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Directory_Replace_ResponseParams_Data>(index_);
    }
    Directory_Replace_ResponseParams_Data* operator->() { return data(); }

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
  Directory_Replace_ResponseParams_Data();
  ~Directory_Replace_ResponseParams_Data() = delete;
};
static_assert(sizeof(Directory_Replace_ResponseParams_Data) == 16,
              "Bad sizeof(Directory_Replace_ResponseParams_Data)");
class  Directory_Delete_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Directory_Delete_Params_Data));
      new (data()) Directory_Delete_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Directory_Delete_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Directory_Delete_Params_Data>(index_);
    }
    Directory_Delete_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> path;
  uint32_t delete_flags;
  uint8_t padfinal_[4];

 private:
  Directory_Delete_Params_Data();
  ~Directory_Delete_Params_Data() = delete;
};
static_assert(sizeof(Directory_Delete_Params_Data) == 24,
              "Bad sizeof(Directory_Delete_Params_Data)");
class  Directory_Delete_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Directory_Delete_ResponseParams_Data));
      new (data()) Directory_Delete_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Directory_Delete_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Directory_Delete_ResponseParams_Data>(index_);
    }
    Directory_Delete_ResponseParams_Data* operator->() { return data(); }

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
  Directory_Delete_ResponseParams_Data();
  ~Directory_Delete_ResponseParams_Data() = delete;
};
static_assert(sizeof(Directory_Delete_ResponseParams_Data) == 16,
              "Bad sizeof(Directory_Delete_ResponseParams_Data)");
class  Directory_Exists_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Directory_Exists_Params_Data));
      new (data()) Directory_Exists_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Directory_Exists_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Directory_Exists_Params_Data>(index_);
    }
    Directory_Exists_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> path;

 private:
  Directory_Exists_Params_Data();
  ~Directory_Exists_Params_Data() = delete;
};
static_assert(sizeof(Directory_Exists_Params_Data) == 16,
              "Bad sizeof(Directory_Exists_Params_Data)");
class  Directory_Exists_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Directory_Exists_ResponseParams_Data));
      new (data()) Directory_Exists_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Directory_Exists_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Directory_Exists_ResponseParams_Data>(index_);
    }
    Directory_Exists_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t error;
  uint8_t exists : 1;
  uint8_t padfinal_[3];

 private:
  Directory_Exists_ResponseParams_Data();
  ~Directory_Exists_ResponseParams_Data() = delete;
};
static_assert(sizeof(Directory_Exists_ResponseParams_Data) == 16,
              "Bad sizeof(Directory_Exists_ResponseParams_Data)");
class  Directory_IsWritable_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Directory_IsWritable_Params_Data));
      new (data()) Directory_IsWritable_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Directory_IsWritable_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Directory_IsWritable_Params_Data>(index_);
    }
    Directory_IsWritable_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> path;

 private:
  Directory_IsWritable_Params_Data();
  ~Directory_IsWritable_Params_Data() = delete;
};
static_assert(sizeof(Directory_IsWritable_Params_Data) == 16,
              "Bad sizeof(Directory_IsWritable_Params_Data)");
class  Directory_IsWritable_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Directory_IsWritable_ResponseParams_Data));
      new (data()) Directory_IsWritable_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Directory_IsWritable_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Directory_IsWritable_ResponseParams_Data>(index_);
    }
    Directory_IsWritable_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t error;
  uint8_t is_writable : 1;
  uint8_t padfinal_[3];

 private:
  Directory_IsWritable_ResponseParams_Data();
  ~Directory_IsWritable_ResponseParams_Data() = delete;
};
static_assert(sizeof(Directory_IsWritable_ResponseParams_Data) == 16,
              "Bad sizeof(Directory_IsWritable_ResponseParams_Data)");
class  Directory_Flush_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Directory_Flush_Params_Data));
      new (data()) Directory_Flush_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Directory_Flush_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Directory_Flush_Params_Data>(index_);
    }
    Directory_Flush_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  Directory_Flush_Params_Data();
  ~Directory_Flush_Params_Data() = delete;
};
static_assert(sizeof(Directory_Flush_Params_Data) == 8,
              "Bad sizeof(Directory_Flush_Params_Data)");
class  Directory_Flush_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Directory_Flush_ResponseParams_Data));
      new (data()) Directory_Flush_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Directory_Flush_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Directory_Flush_ResponseParams_Data>(index_);
    }
    Directory_Flush_ResponseParams_Data* operator->() { return data(); }

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
  Directory_Flush_ResponseParams_Data();
  ~Directory_Flush_ResponseParams_Data() = delete;
};
static_assert(sizeof(Directory_Flush_ResponseParams_Data) == 16,
              "Bad sizeof(Directory_Flush_ResponseParams_Data)");
class  Directory_StatFile_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Directory_StatFile_Params_Data));
      new (data()) Directory_StatFile_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Directory_StatFile_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Directory_StatFile_Params_Data>(index_);
    }
    Directory_StatFile_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> path;

 private:
  Directory_StatFile_Params_Data();
  ~Directory_StatFile_Params_Data() = delete;
};
static_assert(sizeof(Directory_StatFile_Params_Data) == 16,
              "Bad sizeof(Directory_StatFile_Params_Data)");
class  Directory_StatFile_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Directory_StatFile_ResponseParams_Data));
      new (data()) Directory_StatFile_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Directory_StatFile_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Directory_StatFile_ResponseParams_Data>(index_);
    }
    Directory_StatFile_ResponseParams_Data* operator->() { return data(); }

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
  Directory_StatFile_ResponseParams_Data();
  ~Directory_StatFile_ResponseParams_Data() = delete;
};
static_assert(sizeof(Directory_StatFile_ResponseParams_Data) == 24,
              "Bad sizeof(Directory_StatFile_ResponseParams_Data)");
class  Directory_Clone_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Directory_Clone_Params_Data));
      new (data()) Directory_Clone_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Directory_Clone_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Directory_Clone_Params_Data>(index_);
    }
    Directory_Clone_Params_Data* operator->() { return data(); }

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
  Directory_Clone_Params_Data();
  ~Directory_Clone_Params_Data() = delete;
};
static_assert(sizeof(Directory_Clone_Params_Data) == 16,
              "Bad sizeof(Directory_Clone_Params_Data)");
class  Directory_ReadEntireFile_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Directory_ReadEntireFile_Params_Data));
      new (data()) Directory_ReadEntireFile_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Directory_ReadEntireFile_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Directory_ReadEntireFile_Params_Data>(index_);
    }
    Directory_ReadEntireFile_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> path;

 private:
  Directory_ReadEntireFile_Params_Data();
  ~Directory_ReadEntireFile_Params_Data() = delete;
};
static_assert(sizeof(Directory_ReadEntireFile_Params_Data) == 16,
              "Bad sizeof(Directory_ReadEntireFile_Params_Data)");
class  Directory_ReadEntireFile_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Directory_ReadEntireFile_ResponseParams_Data));
      new (data()) Directory_ReadEntireFile_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Directory_ReadEntireFile_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Directory_ReadEntireFile_ResponseParams_Data>(index_);
    }
    Directory_ReadEntireFile_ResponseParams_Data* operator->() { return data(); }

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
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> data;

 private:
  Directory_ReadEntireFile_ResponseParams_Data();
  ~Directory_ReadEntireFile_ResponseParams_Data() = delete;
};
static_assert(sizeof(Directory_ReadEntireFile_ResponseParams_Data) == 24,
              "Bad sizeof(Directory_ReadEntireFile_ResponseParams_Data)");
class  Directory_WriteFile_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Directory_WriteFile_Params_Data));
      new (data()) Directory_WriteFile_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Directory_WriteFile_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Directory_WriteFile_Params_Data>(index_);
    }
    Directory_WriteFile_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> path;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> data;

 private:
  Directory_WriteFile_Params_Data();
  ~Directory_WriteFile_Params_Data() = delete;
};
static_assert(sizeof(Directory_WriteFile_Params_Data) == 24,
              "Bad sizeof(Directory_WriteFile_Params_Data)");
class  Directory_WriteFile_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Directory_WriteFile_ResponseParams_Data));
      new (data()) Directory_WriteFile_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Directory_WriteFile_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Directory_WriteFile_ResponseParams_Data>(index_);
    }
    Directory_WriteFile_ResponseParams_Data* operator->() { return data(); }

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
  Directory_WriteFile_ResponseParams_Data();
  ~Directory_WriteFile_ResponseParams_Data() = delete;
};
static_assert(sizeof(Directory_WriteFile_ResponseParams_Data) == 16,
              "Bad sizeof(Directory_WriteFile_ResponseParams_Data)");

}  // namespace internal
class Directory_Read_ParamsDataView {
 public:
  Directory_Read_ParamsDataView() {}

  Directory_Read_ParamsDataView(
      internal::Directory_Read_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::Directory_Read_Params_Data* data_ = nullptr;
};

class Directory_Read_ResponseParamsDataView {
 public:
  Directory_Read_ResponseParamsDataView() {}

  Directory_Read_ResponseParamsDataView(
      internal::Directory_Read_ResponseParams_Data* data,
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
  inline void GetDirectoryContentsDataView(
      mojo::ArrayDataView<::filesystem::mojom::DirectoryEntryDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDirectoryContents(UserType* output) {
    auto* pointer = data_->directory_contents.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::filesystem::mojom::DirectoryEntryDataView>>(
        pointer, output, context_);
  }
 private:
  internal::Directory_Read_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Directory_OpenFile_ParamsDataView {
 public:
  Directory_OpenFile_ParamsDataView() {}

  Directory_OpenFile_ParamsDataView(
      internal::Directory_OpenFile_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPathDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPath(UserType* output) {
    auto* pointer = data_->path.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeFile() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::filesystem::mojom::FileRequestDataView>(
            &data_->file, &result, context_);
    DCHECK(ret);
    return result;
  }
  uint32_t open_flags() const {
    return data_->open_flags;
  }
 private:
  internal::Directory_OpenFile_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Directory_OpenFile_ResponseParamsDataView {
 public:
  Directory_OpenFile_ResponseParamsDataView() {}

  Directory_OpenFile_ResponseParamsDataView(
      internal::Directory_OpenFile_ResponseParams_Data* data,
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
  internal::Directory_OpenFile_ResponseParams_Data* data_ = nullptr;
};

class Directory_OpenFileHandle_ParamsDataView {
 public:
  Directory_OpenFileHandle_ParamsDataView() {}

  Directory_OpenFileHandle_ParamsDataView(
      internal::Directory_OpenFileHandle_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPathDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPath(UserType* output) {
    auto* pointer = data_->path.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  uint32_t open_flags() const {
    return data_->open_flags;
  }
 private:
  internal::Directory_OpenFileHandle_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Directory_OpenFileHandle_ResponseParamsDataView {
 public:
  Directory_OpenFileHandle_ResponseParamsDataView() {}

  Directory_OpenFileHandle_ResponseParamsDataView(
      internal::Directory_OpenFileHandle_ResponseParams_Data* data,
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
  internal::Directory_OpenFileHandle_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Directory_OpenFileHandles_ParamsDataView {
 public:
  Directory_OpenFileHandles_ParamsDataView() {}

  Directory_OpenFileHandles_ParamsDataView(
      internal::Directory_OpenFileHandles_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetFilesDataView(
      mojo::ArrayDataView<FileOpenDetailsDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFiles(UserType* output) {
    auto* pointer = data_->files.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::filesystem::mojom::FileOpenDetailsDataView>>(
        pointer, output, context_);
  }
 private:
  internal::Directory_OpenFileHandles_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Directory_OpenFileHandles_ResponseParamsDataView {
 public:
  Directory_OpenFileHandles_ResponseParamsDataView() {}

  Directory_OpenFileHandles_ResponseParamsDataView(
      internal::Directory_OpenFileHandles_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetResultsDataView(
      mojo::ArrayDataView<FileOpenResultDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResults(UserType* output) {
    auto* pointer = data_->results.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::filesystem::mojom::FileOpenResultDataView>>(
        pointer, output, context_);
  }
 private:
  internal::Directory_OpenFileHandles_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Directory_OpenDirectory_ParamsDataView {
 public:
  Directory_OpenDirectory_ParamsDataView() {}

  Directory_OpenDirectory_ParamsDataView(
      internal::Directory_OpenDirectory_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPathDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPath(UserType* output) {
    auto* pointer = data_->path.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeDirectory() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::filesystem::mojom::DirectoryRequestDataView>(
            &data_->directory, &result, context_);
    DCHECK(ret);
    return result;
  }
  uint32_t open_flags() const {
    return data_->open_flags;
  }
 private:
  internal::Directory_OpenDirectory_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Directory_OpenDirectory_ResponseParamsDataView {
 public:
  Directory_OpenDirectory_ResponseParamsDataView() {}

  Directory_OpenDirectory_ResponseParamsDataView(
      internal::Directory_OpenDirectory_ResponseParams_Data* data,
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
  internal::Directory_OpenDirectory_ResponseParams_Data* data_ = nullptr;
};

class Directory_Rename_ParamsDataView {
 public:
  Directory_Rename_ParamsDataView() {}

  Directory_Rename_ParamsDataView(
      internal::Directory_Rename_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPathDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPath(UserType* output) {
    auto* pointer = data_->path.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetNewPathDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadNewPath(UserType* output) {
    auto* pointer = data_->new_path.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::Directory_Rename_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Directory_Rename_ResponseParamsDataView {
 public:
  Directory_Rename_ResponseParamsDataView() {}

  Directory_Rename_ResponseParamsDataView(
      internal::Directory_Rename_ResponseParams_Data* data,
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
  internal::Directory_Rename_ResponseParams_Data* data_ = nullptr;
};

class Directory_Replace_ParamsDataView {
 public:
  Directory_Replace_ParamsDataView() {}

  Directory_Replace_ParamsDataView(
      internal::Directory_Replace_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPathDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPath(UserType* output) {
    auto* pointer = data_->path.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetNewPathDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadNewPath(UserType* output) {
    auto* pointer = data_->new_path.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::Directory_Replace_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Directory_Replace_ResponseParamsDataView {
 public:
  Directory_Replace_ResponseParamsDataView() {}

  Directory_Replace_ResponseParamsDataView(
      internal::Directory_Replace_ResponseParams_Data* data,
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
  internal::Directory_Replace_ResponseParams_Data* data_ = nullptr;
};

class Directory_Delete_ParamsDataView {
 public:
  Directory_Delete_ParamsDataView() {}

  Directory_Delete_ParamsDataView(
      internal::Directory_Delete_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPathDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPath(UserType* output) {
    auto* pointer = data_->path.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  uint32_t delete_flags() const {
    return data_->delete_flags;
  }
 private:
  internal::Directory_Delete_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Directory_Delete_ResponseParamsDataView {
 public:
  Directory_Delete_ResponseParamsDataView() {}

  Directory_Delete_ResponseParamsDataView(
      internal::Directory_Delete_ResponseParams_Data* data,
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
  internal::Directory_Delete_ResponseParams_Data* data_ = nullptr;
};

class Directory_Exists_ParamsDataView {
 public:
  Directory_Exists_ParamsDataView() {}

  Directory_Exists_ParamsDataView(
      internal::Directory_Exists_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPathDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPath(UserType* output) {
    auto* pointer = data_->path.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::Directory_Exists_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Directory_Exists_ResponseParamsDataView {
 public:
  Directory_Exists_ResponseParamsDataView() {}

  Directory_Exists_ResponseParamsDataView(
      internal::Directory_Exists_ResponseParams_Data* data,
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
  bool exists() const {
    return data_->exists;
  }
 private:
  internal::Directory_Exists_ResponseParams_Data* data_ = nullptr;
};

class Directory_IsWritable_ParamsDataView {
 public:
  Directory_IsWritable_ParamsDataView() {}

  Directory_IsWritable_ParamsDataView(
      internal::Directory_IsWritable_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPathDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPath(UserType* output) {
    auto* pointer = data_->path.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::Directory_IsWritable_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Directory_IsWritable_ResponseParamsDataView {
 public:
  Directory_IsWritable_ResponseParamsDataView() {}

  Directory_IsWritable_ResponseParamsDataView(
      internal::Directory_IsWritable_ResponseParams_Data* data,
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
  bool is_writable() const {
    return data_->is_writable;
  }
 private:
  internal::Directory_IsWritable_ResponseParams_Data* data_ = nullptr;
};

class Directory_Flush_ParamsDataView {
 public:
  Directory_Flush_ParamsDataView() {}

  Directory_Flush_ParamsDataView(
      internal::Directory_Flush_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::Directory_Flush_Params_Data* data_ = nullptr;
};

class Directory_Flush_ResponseParamsDataView {
 public:
  Directory_Flush_ResponseParamsDataView() {}

  Directory_Flush_ResponseParamsDataView(
      internal::Directory_Flush_ResponseParams_Data* data,
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
  internal::Directory_Flush_ResponseParams_Data* data_ = nullptr;
};

class Directory_StatFile_ParamsDataView {
 public:
  Directory_StatFile_ParamsDataView() {}

  Directory_StatFile_ParamsDataView(
      internal::Directory_StatFile_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPathDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPath(UserType* output) {
    auto* pointer = data_->path.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::Directory_StatFile_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Directory_StatFile_ResponseParamsDataView {
 public:
  Directory_StatFile_ResponseParamsDataView() {}

  Directory_StatFile_ResponseParamsDataView(
      internal::Directory_StatFile_ResponseParams_Data* data,
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
  internal::Directory_StatFile_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Directory_Clone_ParamsDataView {
 public:
  Directory_Clone_ParamsDataView() {}

  Directory_Clone_ParamsDataView(
      internal::Directory_Clone_Params_Data* data,
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
  internal::Directory_Clone_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Directory_ReadEntireFile_ParamsDataView {
 public:
  Directory_ReadEntireFile_ParamsDataView() {}

  Directory_ReadEntireFile_ParamsDataView(
      internal::Directory_ReadEntireFile_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPathDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPath(UserType* output) {
    auto* pointer = data_->path.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::Directory_ReadEntireFile_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Directory_ReadEntireFile_ResponseParamsDataView {
 public:
  Directory_ReadEntireFile_ResponseParamsDataView() {}

  Directory_ReadEntireFile_ResponseParamsDataView(
      internal::Directory_ReadEntireFile_ResponseParams_Data* data,
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
  inline void GetDataDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadData(UserType* output) {
    auto* pointer = data_->data.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
 private:
  internal::Directory_ReadEntireFile_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Directory_WriteFile_ParamsDataView {
 public:
  Directory_WriteFile_ParamsDataView() {}

  Directory_WriteFile_ParamsDataView(
      internal::Directory_WriteFile_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPathDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPath(UserType* output) {
    auto* pointer = data_->path.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetDataDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadData(UserType* output) {
    auto* pointer = data_->data.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
 private:
  internal::Directory_WriteFile_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Directory_WriteFile_ResponseParamsDataView {
 public:
  Directory_WriteFile_ResponseParamsDataView() {}

  Directory_WriteFile_ResponseParamsDataView(
      internal::Directory_WriteFile_ResponseParams_Data* data,
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
  internal::Directory_WriteFile_ResponseParams_Data* data_ = nullptr;
};




inline void Directory_Read_ResponseParamsDataView::GetDirectoryContentsDataView(
    mojo::ArrayDataView<::filesystem::mojom::DirectoryEntryDataView>* output) {
  auto pointer = data_->directory_contents.Get();
  *output = mojo::ArrayDataView<::filesystem::mojom::DirectoryEntryDataView>(pointer, context_);
}


inline void Directory_OpenFile_ParamsDataView::GetPathDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->path.Get();
  *output = mojo::StringDataView(pointer, context_);
}




inline void Directory_OpenFileHandle_ParamsDataView::GetPathDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->path.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void Directory_OpenFileHandle_ResponseParamsDataView::GetFileHandleDataView(
    ::mojo_base::mojom::FileDataView* output) {
  auto pointer = data_->file_handle.Get();
  *output = ::mojo_base::mojom::FileDataView(pointer, context_);
}


inline void Directory_OpenFileHandles_ParamsDataView::GetFilesDataView(
    mojo::ArrayDataView<FileOpenDetailsDataView>* output) {
  auto pointer = data_->files.Get();
  *output = mojo::ArrayDataView<FileOpenDetailsDataView>(pointer, context_);
}


inline void Directory_OpenFileHandles_ResponseParamsDataView::GetResultsDataView(
    mojo::ArrayDataView<FileOpenResultDataView>* output) {
  auto pointer = data_->results.Get();
  *output = mojo::ArrayDataView<FileOpenResultDataView>(pointer, context_);
}


inline void Directory_OpenDirectory_ParamsDataView::GetPathDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->path.Get();
  *output = mojo::StringDataView(pointer, context_);
}




inline void Directory_Rename_ParamsDataView::GetPathDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->path.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void Directory_Rename_ParamsDataView::GetNewPathDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->new_path.Get();
  *output = mojo::StringDataView(pointer, context_);
}




inline void Directory_Replace_ParamsDataView::GetPathDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->path.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void Directory_Replace_ParamsDataView::GetNewPathDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->new_path.Get();
  *output = mojo::StringDataView(pointer, context_);
}




inline void Directory_Delete_ParamsDataView::GetPathDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->path.Get();
  *output = mojo::StringDataView(pointer, context_);
}




inline void Directory_Exists_ParamsDataView::GetPathDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->path.Get();
  *output = mojo::StringDataView(pointer, context_);
}




inline void Directory_IsWritable_ParamsDataView::GetPathDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->path.Get();
  *output = mojo::StringDataView(pointer, context_);
}








inline void Directory_StatFile_ParamsDataView::GetPathDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->path.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void Directory_StatFile_ResponseParamsDataView::GetFileInformationDataView(
    ::filesystem::mojom::FileInformationDataView* output) {
  auto pointer = data_->file_information.Get();
  *output = ::filesystem::mojom::FileInformationDataView(pointer, context_);
}




inline void Directory_ReadEntireFile_ParamsDataView::GetPathDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->path.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void Directory_ReadEntireFile_ResponseParamsDataView::GetDataDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->data.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}


inline void Directory_WriteFile_ParamsDataView::GetPathDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->path.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void Directory_WriteFile_ParamsDataView::GetDataDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->data.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}



}  // namespace mojom
}  // namespace filesystem

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // COMPONENTS_SERVICES_FILESYSTEM_PUBLIC_INTERFACES_DIRECTORY_MOJOM_PARAMS_DATA_H_