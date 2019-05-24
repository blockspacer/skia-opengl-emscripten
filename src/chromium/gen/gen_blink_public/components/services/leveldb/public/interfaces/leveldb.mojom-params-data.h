// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_SERVICES_LEVELDB_PUBLIC_INTERFACES_LEVELDB_MOJOM_PARAMS_DATA_H_
#define COMPONENTS_SERVICES_LEVELDB_PUBLIC_INTERFACES_LEVELDB_MOJOM_PARAMS_DATA_H_

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
namespace leveldb {
namespace mojom {
namespace internal {
class  LevelDBService_Open_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(LevelDBService_Open_Params_Data));
      new (data()) LevelDBService_Open_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    LevelDBService_Open_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<LevelDBService_Open_Params_Data>(index_);
    }
    LevelDBService_Open_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data directory;
  mojo::internal::Pointer<mojo::internal::String_Data> dbname;
  mojo::internal::Pointer<::mojo_base::mojom::internal::MemoryAllocatorDumpCrossProcessUid_Data> memory_dump_id;
  mojo::internal::AssociatedEndpointHandle_Data database;
  uint8_t padfinal_[4];

 private:
  LevelDBService_Open_Params_Data();
  ~LevelDBService_Open_Params_Data() = delete;
};
static_assert(sizeof(LevelDBService_Open_Params_Data) == 40,
              "Bad sizeof(LevelDBService_Open_Params_Data)");
class  LevelDBService_Open_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(LevelDBService_Open_ResponseParams_Data));
      new (data()) LevelDBService_Open_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    LevelDBService_Open_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<LevelDBService_Open_ResponseParams_Data>(index_);
    }
    LevelDBService_Open_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t status;
  uint8_t padfinal_[4];

 private:
  LevelDBService_Open_ResponseParams_Data();
  ~LevelDBService_Open_ResponseParams_Data() = delete;
};
static_assert(sizeof(LevelDBService_Open_ResponseParams_Data) == 16,
              "Bad sizeof(LevelDBService_Open_ResponseParams_Data)");
class  LevelDBService_OpenWithOptions_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(LevelDBService_OpenWithOptions_Params_Data));
      new (data()) LevelDBService_OpenWithOptions_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    LevelDBService_OpenWithOptions_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<LevelDBService_OpenWithOptions_Params_Data>(index_);
    }
    LevelDBService_OpenWithOptions_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::OpenOptions_Data> options;
  mojo::internal::Interface_Data directory;
  mojo::internal::Pointer<mojo::internal::String_Data> dbname;
  mojo::internal::Pointer<::mojo_base::mojom::internal::MemoryAllocatorDumpCrossProcessUid_Data> memory_dump_id;
  mojo::internal::AssociatedEndpointHandle_Data database;
  uint8_t padfinal_[4];

 private:
  LevelDBService_OpenWithOptions_Params_Data();
  ~LevelDBService_OpenWithOptions_Params_Data() = delete;
};
static_assert(sizeof(LevelDBService_OpenWithOptions_Params_Data) == 48,
              "Bad sizeof(LevelDBService_OpenWithOptions_Params_Data)");
class  LevelDBService_OpenWithOptions_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(LevelDBService_OpenWithOptions_ResponseParams_Data));
      new (data()) LevelDBService_OpenWithOptions_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    LevelDBService_OpenWithOptions_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<LevelDBService_OpenWithOptions_ResponseParams_Data>(index_);
    }
    LevelDBService_OpenWithOptions_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t status;
  uint8_t padfinal_[4];

 private:
  LevelDBService_OpenWithOptions_ResponseParams_Data();
  ~LevelDBService_OpenWithOptions_ResponseParams_Data() = delete;
};
static_assert(sizeof(LevelDBService_OpenWithOptions_ResponseParams_Data) == 16,
              "Bad sizeof(LevelDBService_OpenWithOptions_ResponseParams_Data)");
class  LevelDBService_OpenInMemory_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(LevelDBService_OpenInMemory_Params_Data));
      new (data()) LevelDBService_OpenInMemory_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    LevelDBService_OpenInMemory_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<LevelDBService_OpenInMemory_Params_Data>(index_);
    }
    LevelDBService_OpenInMemory_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::MemoryAllocatorDumpCrossProcessUid_Data> memory_dump_id;
  mojo::internal::Pointer<mojo::internal::String_Data> tracking_name;
  mojo::internal::AssociatedEndpointHandle_Data database;
  uint8_t padfinal_[4];

 private:
  LevelDBService_OpenInMemory_Params_Data();
  ~LevelDBService_OpenInMemory_Params_Data() = delete;
};
static_assert(sizeof(LevelDBService_OpenInMemory_Params_Data) == 32,
              "Bad sizeof(LevelDBService_OpenInMemory_Params_Data)");
class  LevelDBService_OpenInMemory_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(LevelDBService_OpenInMemory_ResponseParams_Data));
      new (data()) LevelDBService_OpenInMemory_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    LevelDBService_OpenInMemory_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<LevelDBService_OpenInMemory_ResponseParams_Data>(index_);
    }
    LevelDBService_OpenInMemory_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t status;
  uint8_t padfinal_[4];

 private:
  LevelDBService_OpenInMemory_ResponseParams_Data();
  ~LevelDBService_OpenInMemory_ResponseParams_Data() = delete;
};
static_assert(sizeof(LevelDBService_OpenInMemory_ResponseParams_Data) == 16,
              "Bad sizeof(LevelDBService_OpenInMemory_ResponseParams_Data)");
class  LevelDBService_Destroy_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(LevelDBService_Destroy_Params_Data));
      new (data()) LevelDBService_Destroy_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    LevelDBService_Destroy_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<LevelDBService_Destroy_Params_Data>(index_);
    }
    LevelDBService_Destroy_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data directory;
  mojo::internal::Pointer<mojo::internal::String_Data> dbname;

 private:
  LevelDBService_Destroy_Params_Data();
  ~LevelDBService_Destroy_Params_Data() = delete;
};
static_assert(sizeof(LevelDBService_Destroy_Params_Data) == 24,
              "Bad sizeof(LevelDBService_Destroy_Params_Data)");
class  LevelDBService_Destroy_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(LevelDBService_Destroy_ResponseParams_Data));
      new (data()) LevelDBService_Destroy_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    LevelDBService_Destroy_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<LevelDBService_Destroy_ResponseParams_Data>(index_);
    }
    LevelDBService_Destroy_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t status;
  uint8_t padfinal_[4];

 private:
  LevelDBService_Destroy_ResponseParams_Data();
  ~LevelDBService_Destroy_ResponseParams_Data() = delete;
};
static_assert(sizeof(LevelDBService_Destroy_ResponseParams_Data) == 16,
              "Bad sizeof(LevelDBService_Destroy_ResponseParams_Data)");
class  LevelDBDatabase_Put_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(LevelDBDatabase_Put_Params_Data));
      new (data()) LevelDBDatabase_Put_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    LevelDBDatabase_Put_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<LevelDBDatabase_Put_Params_Data>(index_);
    }
    LevelDBDatabase_Put_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> key;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> value;

 private:
  LevelDBDatabase_Put_Params_Data();
  ~LevelDBDatabase_Put_Params_Data() = delete;
};
static_assert(sizeof(LevelDBDatabase_Put_Params_Data) == 24,
              "Bad sizeof(LevelDBDatabase_Put_Params_Data)");
class  LevelDBDatabase_Put_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(LevelDBDatabase_Put_ResponseParams_Data));
      new (data()) LevelDBDatabase_Put_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    LevelDBDatabase_Put_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<LevelDBDatabase_Put_ResponseParams_Data>(index_);
    }
    LevelDBDatabase_Put_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t status;
  uint8_t padfinal_[4];

 private:
  LevelDBDatabase_Put_ResponseParams_Data();
  ~LevelDBDatabase_Put_ResponseParams_Data() = delete;
};
static_assert(sizeof(LevelDBDatabase_Put_ResponseParams_Data) == 16,
              "Bad sizeof(LevelDBDatabase_Put_ResponseParams_Data)");
class  LevelDBDatabase_Delete_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(LevelDBDatabase_Delete_Params_Data));
      new (data()) LevelDBDatabase_Delete_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    LevelDBDatabase_Delete_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<LevelDBDatabase_Delete_Params_Data>(index_);
    }
    LevelDBDatabase_Delete_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> key;

 private:
  LevelDBDatabase_Delete_Params_Data();
  ~LevelDBDatabase_Delete_Params_Data() = delete;
};
static_assert(sizeof(LevelDBDatabase_Delete_Params_Data) == 16,
              "Bad sizeof(LevelDBDatabase_Delete_Params_Data)");
class  LevelDBDatabase_Delete_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(LevelDBDatabase_Delete_ResponseParams_Data));
      new (data()) LevelDBDatabase_Delete_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    LevelDBDatabase_Delete_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<LevelDBDatabase_Delete_ResponseParams_Data>(index_);
    }
    LevelDBDatabase_Delete_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t status;
  uint8_t padfinal_[4];

 private:
  LevelDBDatabase_Delete_ResponseParams_Data();
  ~LevelDBDatabase_Delete_ResponseParams_Data() = delete;
};
static_assert(sizeof(LevelDBDatabase_Delete_ResponseParams_Data) == 16,
              "Bad sizeof(LevelDBDatabase_Delete_ResponseParams_Data)");
class  LevelDBDatabase_DeletePrefixed_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(LevelDBDatabase_DeletePrefixed_Params_Data));
      new (data()) LevelDBDatabase_DeletePrefixed_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    LevelDBDatabase_DeletePrefixed_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<LevelDBDatabase_DeletePrefixed_Params_Data>(index_);
    }
    LevelDBDatabase_DeletePrefixed_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> key_prefix;

 private:
  LevelDBDatabase_DeletePrefixed_Params_Data();
  ~LevelDBDatabase_DeletePrefixed_Params_Data() = delete;
};
static_assert(sizeof(LevelDBDatabase_DeletePrefixed_Params_Data) == 16,
              "Bad sizeof(LevelDBDatabase_DeletePrefixed_Params_Data)");
class  LevelDBDatabase_DeletePrefixed_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(LevelDBDatabase_DeletePrefixed_ResponseParams_Data));
      new (data()) LevelDBDatabase_DeletePrefixed_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    LevelDBDatabase_DeletePrefixed_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<LevelDBDatabase_DeletePrefixed_ResponseParams_Data>(index_);
    }
    LevelDBDatabase_DeletePrefixed_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t status;
  uint8_t padfinal_[4];

 private:
  LevelDBDatabase_DeletePrefixed_ResponseParams_Data();
  ~LevelDBDatabase_DeletePrefixed_ResponseParams_Data() = delete;
};
static_assert(sizeof(LevelDBDatabase_DeletePrefixed_ResponseParams_Data) == 16,
              "Bad sizeof(LevelDBDatabase_DeletePrefixed_ResponseParams_Data)");
class  LevelDBDatabase_RewriteDB_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(LevelDBDatabase_RewriteDB_Params_Data));
      new (data()) LevelDBDatabase_RewriteDB_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    LevelDBDatabase_RewriteDB_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<LevelDBDatabase_RewriteDB_Params_Data>(index_);
    }
    LevelDBDatabase_RewriteDB_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  LevelDBDatabase_RewriteDB_Params_Data();
  ~LevelDBDatabase_RewriteDB_Params_Data() = delete;
};
static_assert(sizeof(LevelDBDatabase_RewriteDB_Params_Data) == 8,
              "Bad sizeof(LevelDBDatabase_RewriteDB_Params_Data)");
class  LevelDBDatabase_RewriteDB_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(LevelDBDatabase_RewriteDB_ResponseParams_Data));
      new (data()) LevelDBDatabase_RewriteDB_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    LevelDBDatabase_RewriteDB_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<LevelDBDatabase_RewriteDB_ResponseParams_Data>(index_);
    }
    LevelDBDatabase_RewriteDB_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t status;
  uint8_t padfinal_[4];

 private:
  LevelDBDatabase_RewriteDB_ResponseParams_Data();
  ~LevelDBDatabase_RewriteDB_ResponseParams_Data() = delete;
};
static_assert(sizeof(LevelDBDatabase_RewriteDB_ResponseParams_Data) == 16,
              "Bad sizeof(LevelDBDatabase_RewriteDB_ResponseParams_Data)");
class  LevelDBDatabase_Write_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(LevelDBDatabase_Write_Params_Data));
      new (data()) LevelDBDatabase_Write_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    LevelDBDatabase_Write_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<LevelDBDatabase_Write_Params_Data>(index_);
    }
    LevelDBDatabase_Write_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::BatchedOperation_Data>>> operations;

 private:
  LevelDBDatabase_Write_Params_Data();
  ~LevelDBDatabase_Write_Params_Data() = delete;
};
static_assert(sizeof(LevelDBDatabase_Write_Params_Data) == 16,
              "Bad sizeof(LevelDBDatabase_Write_Params_Data)");
class  LevelDBDatabase_Write_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(LevelDBDatabase_Write_ResponseParams_Data));
      new (data()) LevelDBDatabase_Write_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    LevelDBDatabase_Write_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<LevelDBDatabase_Write_ResponseParams_Data>(index_);
    }
    LevelDBDatabase_Write_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t status;
  uint8_t padfinal_[4];

 private:
  LevelDBDatabase_Write_ResponseParams_Data();
  ~LevelDBDatabase_Write_ResponseParams_Data() = delete;
};
static_assert(sizeof(LevelDBDatabase_Write_ResponseParams_Data) == 16,
              "Bad sizeof(LevelDBDatabase_Write_ResponseParams_Data)");
class  LevelDBDatabase_Get_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(LevelDBDatabase_Get_Params_Data));
      new (data()) LevelDBDatabase_Get_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    LevelDBDatabase_Get_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<LevelDBDatabase_Get_Params_Data>(index_);
    }
    LevelDBDatabase_Get_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> key;

 private:
  LevelDBDatabase_Get_Params_Data();
  ~LevelDBDatabase_Get_Params_Data() = delete;
};
static_assert(sizeof(LevelDBDatabase_Get_Params_Data) == 16,
              "Bad sizeof(LevelDBDatabase_Get_Params_Data)");
class  LevelDBDatabase_Get_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(LevelDBDatabase_Get_ResponseParams_Data));
      new (data()) LevelDBDatabase_Get_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    LevelDBDatabase_Get_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<LevelDBDatabase_Get_ResponseParams_Data>(index_);
    }
    LevelDBDatabase_Get_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t status;
  uint8_t pad0_[4];
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> value;

 private:
  LevelDBDatabase_Get_ResponseParams_Data();
  ~LevelDBDatabase_Get_ResponseParams_Data() = delete;
};
static_assert(sizeof(LevelDBDatabase_Get_ResponseParams_Data) == 24,
              "Bad sizeof(LevelDBDatabase_Get_ResponseParams_Data)");
class  LevelDBDatabase_GetPrefixed_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(LevelDBDatabase_GetPrefixed_Params_Data));
      new (data()) LevelDBDatabase_GetPrefixed_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    LevelDBDatabase_GetPrefixed_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<LevelDBDatabase_GetPrefixed_Params_Data>(index_);
    }
    LevelDBDatabase_GetPrefixed_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> key_prefix;

 private:
  LevelDBDatabase_GetPrefixed_Params_Data();
  ~LevelDBDatabase_GetPrefixed_Params_Data() = delete;
};
static_assert(sizeof(LevelDBDatabase_GetPrefixed_Params_Data) == 16,
              "Bad sizeof(LevelDBDatabase_GetPrefixed_Params_Data)");
class  LevelDBDatabase_GetPrefixed_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(LevelDBDatabase_GetPrefixed_ResponseParams_Data));
      new (data()) LevelDBDatabase_GetPrefixed_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    LevelDBDatabase_GetPrefixed_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<LevelDBDatabase_GetPrefixed_ResponseParams_Data>(index_);
    }
    LevelDBDatabase_GetPrefixed_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t status;
  uint8_t pad0_[4];
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::KeyValue_Data>>> data;

 private:
  LevelDBDatabase_GetPrefixed_ResponseParams_Data();
  ~LevelDBDatabase_GetPrefixed_ResponseParams_Data() = delete;
};
static_assert(sizeof(LevelDBDatabase_GetPrefixed_ResponseParams_Data) == 24,
              "Bad sizeof(LevelDBDatabase_GetPrefixed_ResponseParams_Data)");
class  LevelDBDatabase_CopyPrefixed_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(LevelDBDatabase_CopyPrefixed_Params_Data));
      new (data()) LevelDBDatabase_CopyPrefixed_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    LevelDBDatabase_CopyPrefixed_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<LevelDBDatabase_CopyPrefixed_Params_Data>(index_);
    }
    LevelDBDatabase_CopyPrefixed_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> source_key_prefix;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> destination_key_prefix;

 private:
  LevelDBDatabase_CopyPrefixed_Params_Data();
  ~LevelDBDatabase_CopyPrefixed_Params_Data() = delete;
};
static_assert(sizeof(LevelDBDatabase_CopyPrefixed_Params_Data) == 24,
              "Bad sizeof(LevelDBDatabase_CopyPrefixed_Params_Data)");
class  LevelDBDatabase_CopyPrefixed_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(LevelDBDatabase_CopyPrefixed_ResponseParams_Data));
      new (data()) LevelDBDatabase_CopyPrefixed_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    LevelDBDatabase_CopyPrefixed_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<LevelDBDatabase_CopyPrefixed_ResponseParams_Data>(index_);
    }
    LevelDBDatabase_CopyPrefixed_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t status;
  uint8_t padfinal_[4];

 private:
  LevelDBDatabase_CopyPrefixed_ResponseParams_Data();
  ~LevelDBDatabase_CopyPrefixed_ResponseParams_Data() = delete;
};
static_assert(sizeof(LevelDBDatabase_CopyPrefixed_ResponseParams_Data) == 16,
              "Bad sizeof(LevelDBDatabase_CopyPrefixed_ResponseParams_Data)");
class  LevelDBDatabase_GetSnapshot_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(LevelDBDatabase_GetSnapshot_Params_Data));
      new (data()) LevelDBDatabase_GetSnapshot_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    LevelDBDatabase_GetSnapshot_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<LevelDBDatabase_GetSnapshot_Params_Data>(index_);
    }
    LevelDBDatabase_GetSnapshot_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  LevelDBDatabase_GetSnapshot_Params_Data();
  ~LevelDBDatabase_GetSnapshot_Params_Data() = delete;
};
static_assert(sizeof(LevelDBDatabase_GetSnapshot_Params_Data) == 8,
              "Bad sizeof(LevelDBDatabase_GetSnapshot_Params_Data)");
class  LevelDBDatabase_GetSnapshot_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(LevelDBDatabase_GetSnapshot_ResponseParams_Data));
      new (data()) LevelDBDatabase_GetSnapshot_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    LevelDBDatabase_GetSnapshot_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<LevelDBDatabase_GetSnapshot_ResponseParams_Data>(index_);
    }
    LevelDBDatabase_GetSnapshot_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::UnguessableToken_Data> snapshot;

 private:
  LevelDBDatabase_GetSnapshot_ResponseParams_Data();
  ~LevelDBDatabase_GetSnapshot_ResponseParams_Data() = delete;
};
static_assert(sizeof(LevelDBDatabase_GetSnapshot_ResponseParams_Data) == 16,
              "Bad sizeof(LevelDBDatabase_GetSnapshot_ResponseParams_Data)");
class  LevelDBDatabase_ReleaseSnapshot_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(LevelDBDatabase_ReleaseSnapshot_Params_Data));
      new (data()) LevelDBDatabase_ReleaseSnapshot_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    LevelDBDatabase_ReleaseSnapshot_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<LevelDBDatabase_ReleaseSnapshot_Params_Data>(index_);
    }
    LevelDBDatabase_ReleaseSnapshot_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::UnguessableToken_Data> snapshot;

 private:
  LevelDBDatabase_ReleaseSnapshot_Params_Data();
  ~LevelDBDatabase_ReleaseSnapshot_Params_Data() = delete;
};
static_assert(sizeof(LevelDBDatabase_ReleaseSnapshot_Params_Data) == 16,
              "Bad sizeof(LevelDBDatabase_ReleaseSnapshot_Params_Data)");
class  LevelDBDatabase_GetFromSnapshot_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(LevelDBDatabase_GetFromSnapshot_Params_Data));
      new (data()) LevelDBDatabase_GetFromSnapshot_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    LevelDBDatabase_GetFromSnapshot_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<LevelDBDatabase_GetFromSnapshot_Params_Data>(index_);
    }
    LevelDBDatabase_GetFromSnapshot_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::UnguessableToken_Data> snapshot;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> key;

 private:
  LevelDBDatabase_GetFromSnapshot_Params_Data();
  ~LevelDBDatabase_GetFromSnapshot_Params_Data() = delete;
};
static_assert(sizeof(LevelDBDatabase_GetFromSnapshot_Params_Data) == 24,
              "Bad sizeof(LevelDBDatabase_GetFromSnapshot_Params_Data)");
class  LevelDBDatabase_GetFromSnapshot_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(LevelDBDatabase_GetFromSnapshot_ResponseParams_Data));
      new (data()) LevelDBDatabase_GetFromSnapshot_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    LevelDBDatabase_GetFromSnapshot_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<LevelDBDatabase_GetFromSnapshot_ResponseParams_Data>(index_);
    }
    LevelDBDatabase_GetFromSnapshot_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t status;
  uint8_t pad0_[4];
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> value;

 private:
  LevelDBDatabase_GetFromSnapshot_ResponseParams_Data();
  ~LevelDBDatabase_GetFromSnapshot_ResponseParams_Data() = delete;
};
static_assert(sizeof(LevelDBDatabase_GetFromSnapshot_ResponseParams_Data) == 24,
              "Bad sizeof(LevelDBDatabase_GetFromSnapshot_ResponseParams_Data)");
class  LevelDBDatabase_NewIterator_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(LevelDBDatabase_NewIterator_Params_Data));
      new (data()) LevelDBDatabase_NewIterator_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    LevelDBDatabase_NewIterator_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<LevelDBDatabase_NewIterator_Params_Data>(index_);
    }
    LevelDBDatabase_NewIterator_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  LevelDBDatabase_NewIterator_Params_Data();
  ~LevelDBDatabase_NewIterator_Params_Data() = delete;
};
static_assert(sizeof(LevelDBDatabase_NewIterator_Params_Data) == 8,
              "Bad sizeof(LevelDBDatabase_NewIterator_Params_Data)");
class  LevelDBDatabase_NewIterator_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(LevelDBDatabase_NewIterator_ResponseParams_Data));
      new (data()) LevelDBDatabase_NewIterator_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    LevelDBDatabase_NewIterator_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<LevelDBDatabase_NewIterator_ResponseParams_Data>(index_);
    }
    LevelDBDatabase_NewIterator_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::UnguessableToken_Data> iterator;

 private:
  LevelDBDatabase_NewIterator_ResponseParams_Data();
  ~LevelDBDatabase_NewIterator_ResponseParams_Data() = delete;
};
static_assert(sizeof(LevelDBDatabase_NewIterator_ResponseParams_Data) == 16,
              "Bad sizeof(LevelDBDatabase_NewIterator_ResponseParams_Data)");
class  LevelDBDatabase_NewIteratorFromSnapshot_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(LevelDBDatabase_NewIteratorFromSnapshot_Params_Data));
      new (data()) LevelDBDatabase_NewIteratorFromSnapshot_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    LevelDBDatabase_NewIteratorFromSnapshot_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<LevelDBDatabase_NewIteratorFromSnapshot_Params_Data>(index_);
    }
    LevelDBDatabase_NewIteratorFromSnapshot_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::UnguessableToken_Data> snapshot;

 private:
  LevelDBDatabase_NewIteratorFromSnapshot_Params_Data();
  ~LevelDBDatabase_NewIteratorFromSnapshot_Params_Data() = delete;
};
static_assert(sizeof(LevelDBDatabase_NewIteratorFromSnapshot_Params_Data) == 16,
              "Bad sizeof(LevelDBDatabase_NewIteratorFromSnapshot_Params_Data)");
class  LevelDBDatabase_NewIteratorFromSnapshot_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(LevelDBDatabase_NewIteratorFromSnapshot_ResponseParams_Data));
      new (data()) LevelDBDatabase_NewIteratorFromSnapshot_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    LevelDBDatabase_NewIteratorFromSnapshot_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<LevelDBDatabase_NewIteratorFromSnapshot_ResponseParams_Data>(index_);
    }
    LevelDBDatabase_NewIteratorFromSnapshot_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::UnguessableToken_Data> iterator;

 private:
  LevelDBDatabase_NewIteratorFromSnapshot_ResponseParams_Data();
  ~LevelDBDatabase_NewIteratorFromSnapshot_ResponseParams_Data() = delete;
};
static_assert(sizeof(LevelDBDatabase_NewIteratorFromSnapshot_ResponseParams_Data) == 16,
              "Bad sizeof(LevelDBDatabase_NewIteratorFromSnapshot_ResponseParams_Data)");
class  LevelDBDatabase_ReleaseIterator_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(LevelDBDatabase_ReleaseIterator_Params_Data));
      new (data()) LevelDBDatabase_ReleaseIterator_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    LevelDBDatabase_ReleaseIterator_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<LevelDBDatabase_ReleaseIterator_Params_Data>(index_);
    }
    LevelDBDatabase_ReleaseIterator_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::UnguessableToken_Data> iterator;

 private:
  LevelDBDatabase_ReleaseIterator_Params_Data();
  ~LevelDBDatabase_ReleaseIterator_Params_Data() = delete;
};
static_assert(sizeof(LevelDBDatabase_ReleaseIterator_Params_Data) == 16,
              "Bad sizeof(LevelDBDatabase_ReleaseIterator_Params_Data)");
class  LevelDBDatabase_IteratorSeekToFirst_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(LevelDBDatabase_IteratorSeekToFirst_Params_Data));
      new (data()) LevelDBDatabase_IteratorSeekToFirst_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    LevelDBDatabase_IteratorSeekToFirst_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<LevelDBDatabase_IteratorSeekToFirst_Params_Data>(index_);
    }
    LevelDBDatabase_IteratorSeekToFirst_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::UnguessableToken_Data> iterator;

 private:
  LevelDBDatabase_IteratorSeekToFirst_Params_Data();
  ~LevelDBDatabase_IteratorSeekToFirst_Params_Data() = delete;
};
static_assert(sizeof(LevelDBDatabase_IteratorSeekToFirst_Params_Data) == 16,
              "Bad sizeof(LevelDBDatabase_IteratorSeekToFirst_Params_Data)");
class  LevelDBDatabase_IteratorSeekToFirst_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(LevelDBDatabase_IteratorSeekToFirst_ResponseParams_Data));
      new (data()) LevelDBDatabase_IteratorSeekToFirst_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    LevelDBDatabase_IteratorSeekToFirst_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<LevelDBDatabase_IteratorSeekToFirst_ResponseParams_Data>(index_);
    }
    LevelDBDatabase_IteratorSeekToFirst_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t valid : 1;
  uint8_t pad0_[3];
  int32_t status;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> key;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> value;

 private:
  LevelDBDatabase_IteratorSeekToFirst_ResponseParams_Data();
  ~LevelDBDatabase_IteratorSeekToFirst_ResponseParams_Data() = delete;
};
static_assert(sizeof(LevelDBDatabase_IteratorSeekToFirst_ResponseParams_Data) == 32,
              "Bad sizeof(LevelDBDatabase_IteratorSeekToFirst_ResponseParams_Data)");
class  LevelDBDatabase_IteratorSeekToLast_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(LevelDBDatabase_IteratorSeekToLast_Params_Data));
      new (data()) LevelDBDatabase_IteratorSeekToLast_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    LevelDBDatabase_IteratorSeekToLast_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<LevelDBDatabase_IteratorSeekToLast_Params_Data>(index_);
    }
    LevelDBDatabase_IteratorSeekToLast_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::UnguessableToken_Data> iterator;

 private:
  LevelDBDatabase_IteratorSeekToLast_Params_Data();
  ~LevelDBDatabase_IteratorSeekToLast_Params_Data() = delete;
};
static_assert(sizeof(LevelDBDatabase_IteratorSeekToLast_Params_Data) == 16,
              "Bad sizeof(LevelDBDatabase_IteratorSeekToLast_Params_Data)");
class  LevelDBDatabase_IteratorSeekToLast_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(LevelDBDatabase_IteratorSeekToLast_ResponseParams_Data));
      new (data()) LevelDBDatabase_IteratorSeekToLast_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    LevelDBDatabase_IteratorSeekToLast_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<LevelDBDatabase_IteratorSeekToLast_ResponseParams_Data>(index_);
    }
    LevelDBDatabase_IteratorSeekToLast_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t valid : 1;
  uint8_t pad0_[3];
  int32_t status;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> key;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> value;

 private:
  LevelDBDatabase_IteratorSeekToLast_ResponseParams_Data();
  ~LevelDBDatabase_IteratorSeekToLast_ResponseParams_Data() = delete;
};
static_assert(sizeof(LevelDBDatabase_IteratorSeekToLast_ResponseParams_Data) == 32,
              "Bad sizeof(LevelDBDatabase_IteratorSeekToLast_ResponseParams_Data)");
class  LevelDBDatabase_IteratorSeek_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(LevelDBDatabase_IteratorSeek_Params_Data));
      new (data()) LevelDBDatabase_IteratorSeek_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    LevelDBDatabase_IteratorSeek_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<LevelDBDatabase_IteratorSeek_Params_Data>(index_);
    }
    LevelDBDatabase_IteratorSeek_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::UnguessableToken_Data> iterator;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> target;

 private:
  LevelDBDatabase_IteratorSeek_Params_Data();
  ~LevelDBDatabase_IteratorSeek_Params_Data() = delete;
};
static_assert(sizeof(LevelDBDatabase_IteratorSeek_Params_Data) == 24,
              "Bad sizeof(LevelDBDatabase_IteratorSeek_Params_Data)");
class  LevelDBDatabase_IteratorSeek_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(LevelDBDatabase_IteratorSeek_ResponseParams_Data));
      new (data()) LevelDBDatabase_IteratorSeek_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    LevelDBDatabase_IteratorSeek_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<LevelDBDatabase_IteratorSeek_ResponseParams_Data>(index_);
    }
    LevelDBDatabase_IteratorSeek_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t valid : 1;
  uint8_t pad0_[3];
  int32_t status;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> key;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> value;

 private:
  LevelDBDatabase_IteratorSeek_ResponseParams_Data();
  ~LevelDBDatabase_IteratorSeek_ResponseParams_Data() = delete;
};
static_assert(sizeof(LevelDBDatabase_IteratorSeek_ResponseParams_Data) == 32,
              "Bad sizeof(LevelDBDatabase_IteratorSeek_ResponseParams_Data)");
class  LevelDBDatabase_IteratorNext_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(LevelDBDatabase_IteratorNext_Params_Data));
      new (data()) LevelDBDatabase_IteratorNext_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    LevelDBDatabase_IteratorNext_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<LevelDBDatabase_IteratorNext_Params_Data>(index_);
    }
    LevelDBDatabase_IteratorNext_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::UnguessableToken_Data> iterator;

 private:
  LevelDBDatabase_IteratorNext_Params_Data();
  ~LevelDBDatabase_IteratorNext_Params_Data() = delete;
};
static_assert(sizeof(LevelDBDatabase_IteratorNext_Params_Data) == 16,
              "Bad sizeof(LevelDBDatabase_IteratorNext_Params_Data)");
class  LevelDBDatabase_IteratorNext_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(LevelDBDatabase_IteratorNext_ResponseParams_Data));
      new (data()) LevelDBDatabase_IteratorNext_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    LevelDBDatabase_IteratorNext_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<LevelDBDatabase_IteratorNext_ResponseParams_Data>(index_);
    }
    LevelDBDatabase_IteratorNext_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t valid : 1;
  uint8_t pad0_[3];
  int32_t status;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> key;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> value;

 private:
  LevelDBDatabase_IteratorNext_ResponseParams_Data();
  ~LevelDBDatabase_IteratorNext_ResponseParams_Data() = delete;
};
static_assert(sizeof(LevelDBDatabase_IteratorNext_ResponseParams_Data) == 32,
              "Bad sizeof(LevelDBDatabase_IteratorNext_ResponseParams_Data)");
class  LevelDBDatabase_IteratorPrev_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(LevelDBDatabase_IteratorPrev_Params_Data));
      new (data()) LevelDBDatabase_IteratorPrev_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    LevelDBDatabase_IteratorPrev_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<LevelDBDatabase_IteratorPrev_Params_Data>(index_);
    }
    LevelDBDatabase_IteratorPrev_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::UnguessableToken_Data> iterator;

 private:
  LevelDBDatabase_IteratorPrev_Params_Data();
  ~LevelDBDatabase_IteratorPrev_Params_Data() = delete;
};
static_assert(sizeof(LevelDBDatabase_IteratorPrev_Params_Data) == 16,
              "Bad sizeof(LevelDBDatabase_IteratorPrev_Params_Data)");
class  LevelDBDatabase_IteratorPrev_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(LevelDBDatabase_IteratorPrev_ResponseParams_Data));
      new (data()) LevelDBDatabase_IteratorPrev_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    LevelDBDatabase_IteratorPrev_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<LevelDBDatabase_IteratorPrev_ResponseParams_Data>(index_);
    }
    LevelDBDatabase_IteratorPrev_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t valid : 1;
  uint8_t pad0_[3];
  int32_t status;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> key;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> value;

 private:
  LevelDBDatabase_IteratorPrev_ResponseParams_Data();
  ~LevelDBDatabase_IteratorPrev_ResponseParams_Data() = delete;
};
static_assert(sizeof(LevelDBDatabase_IteratorPrev_ResponseParams_Data) == 32,
              "Bad sizeof(LevelDBDatabase_IteratorPrev_ResponseParams_Data)");

}  // namespace internal
class LevelDBService_Open_ParamsDataView {
 public:
  LevelDBService_Open_ParamsDataView() {}

  LevelDBService_Open_ParamsDataView(
      internal::LevelDBService_Open_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeDirectory() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::filesystem::mojom::DirectoryPtrDataView>(
            &data_->directory, &result, context_);
    DCHECK(ret);
    return result;
  }
  inline void GetDbnameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDbname(UserType* output) {
    auto* pointer = data_->dbname.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetMemoryDumpIdDataView(
      ::mojo_base::mojom::MemoryAllocatorDumpCrossProcessUidDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMemoryDumpId(UserType* output) {
    auto* pointer = data_->memory_dump_id.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::MemoryAllocatorDumpCrossProcessUidDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeDatabase() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::leveldb::mojom::LevelDBDatabaseAssociatedRequestDataView>(
            &data_->database, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::LevelDBService_Open_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class LevelDBService_Open_ResponseParamsDataView {
 public:
  LevelDBService_Open_ResponseParamsDataView() {}

  LevelDBService_Open_ResponseParamsDataView(
      internal::LevelDBService_Open_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::leveldb::mojom::DatabaseError>(
        data_value, output);
  }

  DatabaseError status() const {
    return static_cast<DatabaseError>(data_->status);
  }
 private:
  internal::LevelDBService_Open_ResponseParams_Data* data_ = nullptr;
};

class LevelDBService_OpenWithOptions_ParamsDataView {
 public:
  LevelDBService_OpenWithOptions_ParamsDataView() {}

  LevelDBService_OpenWithOptions_ParamsDataView(
      internal::LevelDBService_OpenWithOptions_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetOptionsDataView(
      OpenOptionsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOptions(UserType* output) {
    auto* pointer = data_->options.Get();
    return mojo::internal::Deserialize<::leveldb::mojom::OpenOptionsDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeDirectory() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::filesystem::mojom::DirectoryPtrDataView>(
            &data_->directory, &result, context_);
    DCHECK(ret);
    return result;
  }
  inline void GetDbnameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDbname(UserType* output) {
    auto* pointer = data_->dbname.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetMemoryDumpIdDataView(
      ::mojo_base::mojom::MemoryAllocatorDumpCrossProcessUidDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMemoryDumpId(UserType* output) {
    auto* pointer = data_->memory_dump_id.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::MemoryAllocatorDumpCrossProcessUidDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeDatabase() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::leveldb::mojom::LevelDBDatabaseAssociatedRequestDataView>(
            &data_->database, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::LevelDBService_OpenWithOptions_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class LevelDBService_OpenWithOptions_ResponseParamsDataView {
 public:
  LevelDBService_OpenWithOptions_ResponseParamsDataView() {}

  LevelDBService_OpenWithOptions_ResponseParamsDataView(
      internal::LevelDBService_OpenWithOptions_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::leveldb::mojom::DatabaseError>(
        data_value, output);
  }

  DatabaseError status() const {
    return static_cast<DatabaseError>(data_->status);
  }
 private:
  internal::LevelDBService_OpenWithOptions_ResponseParams_Data* data_ = nullptr;
};

class LevelDBService_OpenInMemory_ParamsDataView {
 public:
  LevelDBService_OpenInMemory_ParamsDataView() {}

  LevelDBService_OpenInMemory_ParamsDataView(
      internal::LevelDBService_OpenInMemory_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetMemoryDumpIdDataView(
      ::mojo_base::mojom::MemoryAllocatorDumpCrossProcessUidDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMemoryDumpId(UserType* output) {
    auto* pointer = data_->memory_dump_id.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::MemoryAllocatorDumpCrossProcessUidDataView>(
        pointer, output, context_);
  }
  inline void GetTrackingNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTrackingName(UserType* output) {
    auto* pointer = data_->tracking_name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeDatabase() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::leveldb::mojom::LevelDBDatabaseAssociatedRequestDataView>(
            &data_->database, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::LevelDBService_OpenInMemory_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class LevelDBService_OpenInMemory_ResponseParamsDataView {
 public:
  LevelDBService_OpenInMemory_ResponseParamsDataView() {}

  LevelDBService_OpenInMemory_ResponseParamsDataView(
      internal::LevelDBService_OpenInMemory_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::leveldb::mojom::DatabaseError>(
        data_value, output);
  }

  DatabaseError status() const {
    return static_cast<DatabaseError>(data_->status);
  }
 private:
  internal::LevelDBService_OpenInMemory_ResponseParams_Data* data_ = nullptr;
};

class LevelDBService_Destroy_ParamsDataView {
 public:
  LevelDBService_Destroy_ParamsDataView() {}

  LevelDBService_Destroy_ParamsDataView(
      internal::LevelDBService_Destroy_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeDirectory() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::filesystem::mojom::DirectoryPtrDataView>(
            &data_->directory, &result, context_);
    DCHECK(ret);
    return result;
  }
  inline void GetDbnameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDbname(UserType* output) {
    auto* pointer = data_->dbname.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::LevelDBService_Destroy_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class LevelDBService_Destroy_ResponseParamsDataView {
 public:
  LevelDBService_Destroy_ResponseParamsDataView() {}

  LevelDBService_Destroy_ResponseParamsDataView(
      internal::LevelDBService_Destroy_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::leveldb::mojom::DatabaseError>(
        data_value, output);
  }

  DatabaseError status() const {
    return static_cast<DatabaseError>(data_->status);
  }
 private:
  internal::LevelDBService_Destroy_ResponseParams_Data* data_ = nullptr;
};

class LevelDBDatabase_Put_ParamsDataView {
 public:
  LevelDBDatabase_Put_ParamsDataView() {}

  LevelDBDatabase_Put_ParamsDataView(
      internal::LevelDBDatabase_Put_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetKeyDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadKey(UserType* output) {
    auto* pointer = data_->key.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
  inline void GetValueDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadValue(UserType* output) {
    auto* pointer = data_->value.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
 private:
  internal::LevelDBDatabase_Put_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class LevelDBDatabase_Put_ResponseParamsDataView {
 public:
  LevelDBDatabase_Put_ResponseParamsDataView() {}

  LevelDBDatabase_Put_ResponseParamsDataView(
      internal::LevelDBDatabase_Put_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::leveldb::mojom::DatabaseError>(
        data_value, output);
  }

  DatabaseError status() const {
    return static_cast<DatabaseError>(data_->status);
  }
 private:
  internal::LevelDBDatabase_Put_ResponseParams_Data* data_ = nullptr;
};

class LevelDBDatabase_Delete_ParamsDataView {
 public:
  LevelDBDatabase_Delete_ParamsDataView() {}

  LevelDBDatabase_Delete_ParamsDataView(
      internal::LevelDBDatabase_Delete_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetKeyDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadKey(UserType* output) {
    auto* pointer = data_->key.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
 private:
  internal::LevelDBDatabase_Delete_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class LevelDBDatabase_Delete_ResponseParamsDataView {
 public:
  LevelDBDatabase_Delete_ResponseParamsDataView() {}

  LevelDBDatabase_Delete_ResponseParamsDataView(
      internal::LevelDBDatabase_Delete_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::leveldb::mojom::DatabaseError>(
        data_value, output);
  }

  DatabaseError status() const {
    return static_cast<DatabaseError>(data_->status);
  }
 private:
  internal::LevelDBDatabase_Delete_ResponseParams_Data* data_ = nullptr;
};

class LevelDBDatabase_DeletePrefixed_ParamsDataView {
 public:
  LevelDBDatabase_DeletePrefixed_ParamsDataView() {}

  LevelDBDatabase_DeletePrefixed_ParamsDataView(
      internal::LevelDBDatabase_DeletePrefixed_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetKeyPrefixDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadKeyPrefix(UserType* output) {
    auto* pointer = data_->key_prefix.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
 private:
  internal::LevelDBDatabase_DeletePrefixed_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class LevelDBDatabase_DeletePrefixed_ResponseParamsDataView {
 public:
  LevelDBDatabase_DeletePrefixed_ResponseParamsDataView() {}

  LevelDBDatabase_DeletePrefixed_ResponseParamsDataView(
      internal::LevelDBDatabase_DeletePrefixed_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::leveldb::mojom::DatabaseError>(
        data_value, output);
  }

  DatabaseError status() const {
    return static_cast<DatabaseError>(data_->status);
  }
 private:
  internal::LevelDBDatabase_DeletePrefixed_ResponseParams_Data* data_ = nullptr;
};

class LevelDBDatabase_RewriteDB_ParamsDataView {
 public:
  LevelDBDatabase_RewriteDB_ParamsDataView() {}

  LevelDBDatabase_RewriteDB_ParamsDataView(
      internal::LevelDBDatabase_RewriteDB_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::LevelDBDatabase_RewriteDB_Params_Data* data_ = nullptr;
};

class LevelDBDatabase_RewriteDB_ResponseParamsDataView {
 public:
  LevelDBDatabase_RewriteDB_ResponseParamsDataView() {}

  LevelDBDatabase_RewriteDB_ResponseParamsDataView(
      internal::LevelDBDatabase_RewriteDB_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::leveldb::mojom::DatabaseError>(
        data_value, output);
  }

  DatabaseError status() const {
    return static_cast<DatabaseError>(data_->status);
  }
 private:
  internal::LevelDBDatabase_RewriteDB_ResponseParams_Data* data_ = nullptr;
};

class LevelDBDatabase_Write_ParamsDataView {
 public:
  LevelDBDatabase_Write_ParamsDataView() {}

  LevelDBDatabase_Write_ParamsDataView(
      internal::LevelDBDatabase_Write_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetOperationsDataView(
      mojo::ArrayDataView<BatchedOperationDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOperations(UserType* output) {
    auto* pointer = data_->operations.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::leveldb::mojom::BatchedOperationDataView>>(
        pointer, output, context_);
  }
 private:
  internal::LevelDBDatabase_Write_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class LevelDBDatabase_Write_ResponseParamsDataView {
 public:
  LevelDBDatabase_Write_ResponseParamsDataView() {}

  LevelDBDatabase_Write_ResponseParamsDataView(
      internal::LevelDBDatabase_Write_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::leveldb::mojom::DatabaseError>(
        data_value, output);
  }

  DatabaseError status() const {
    return static_cast<DatabaseError>(data_->status);
  }
 private:
  internal::LevelDBDatabase_Write_ResponseParams_Data* data_ = nullptr;
};

class LevelDBDatabase_Get_ParamsDataView {
 public:
  LevelDBDatabase_Get_ParamsDataView() {}

  LevelDBDatabase_Get_ParamsDataView(
      internal::LevelDBDatabase_Get_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetKeyDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadKey(UserType* output) {
    auto* pointer = data_->key.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
 private:
  internal::LevelDBDatabase_Get_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class LevelDBDatabase_Get_ResponseParamsDataView {
 public:
  LevelDBDatabase_Get_ResponseParamsDataView() {}

  LevelDBDatabase_Get_ResponseParamsDataView(
      internal::LevelDBDatabase_Get_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::leveldb::mojom::DatabaseError>(
        data_value, output);
  }

  DatabaseError status() const {
    return static_cast<DatabaseError>(data_->status);
  }
  inline void GetValueDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadValue(UserType* output) {
    auto* pointer = data_->value.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
 private:
  internal::LevelDBDatabase_Get_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class LevelDBDatabase_GetPrefixed_ParamsDataView {
 public:
  LevelDBDatabase_GetPrefixed_ParamsDataView() {}

  LevelDBDatabase_GetPrefixed_ParamsDataView(
      internal::LevelDBDatabase_GetPrefixed_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetKeyPrefixDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadKeyPrefix(UserType* output) {
    auto* pointer = data_->key_prefix.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
 private:
  internal::LevelDBDatabase_GetPrefixed_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class LevelDBDatabase_GetPrefixed_ResponseParamsDataView {
 public:
  LevelDBDatabase_GetPrefixed_ResponseParamsDataView() {}

  LevelDBDatabase_GetPrefixed_ResponseParamsDataView(
      internal::LevelDBDatabase_GetPrefixed_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::leveldb::mojom::DatabaseError>(
        data_value, output);
  }

  DatabaseError status() const {
    return static_cast<DatabaseError>(data_->status);
  }
  inline void GetDataDataView(
      mojo::ArrayDataView<KeyValueDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadData(UserType* output) {
    auto* pointer = data_->data.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::leveldb::mojom::KeyValueDataView>>(
        pointer, output, context_);
  }
 private:
  internal::LevelDBDatabase_GetPrefixed_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class LevelDBDatabase_CopyPrefixed_ParamsDataView {
 public:
  LevelDBDatabase_CopyPrefixed_ParamsDataView() {}

  LevelDBDatabase_CopyPrefixed_ParamsDataView(
      internal::LevelDBDatabase_CopyPrefixed_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSourceKeyPrefixDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSourceKeyPrefix(UserType* output) {
    auto* pointer = data_->source_key_prefix.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
  inline void GetDestinationKeyPrefixDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDestinationKeyPrefix(UserType* output) {
    auto* pointer = data_->destination_key_prefix.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
 private:
  internal::LevelDBDatabase_CopyPrefixed_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class LevelDBDatabase_CopyPrefixed_ResponseParamsDataView {
 public:
  LevelDBDatabase_CopyPrefixed_ResponseParamsDataView() {}

  LevelDBDatabase_CopyPrefixed_ResponseParamsDataView(
      internal::LevelDBDatabase_CopyPrefixed_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::leveldb::mojom::DatabaseError>(
        data_value, output);
  }

  DatabaseError status() const {
    return static_cast<DatabaseError>(data_->status);
  }
 private:
  internal::LevelDBDatabase_CopyPrefixed_ResponseParams_Data* data_ = nullptr;
};

class LevelDBDatabase_GetSnapshot_ParamsDataView {
 public:
  LevelDBDatabase_GetSnapshot_ParamsDataView() {}

  LevelDBDatabase_GetSnapshot_ParamsDataView(
      internal::LevelDBDatabase_GetSnapshot_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::LevelDBDatabase_GetSnapshot_Params_Data* data_ = nullptr;
};

class LevelDBDatabase_GetSnapshot_ResponseParamsDataView {
 public:
  LevelDBDatabase_GetSnapshot_ResponseParamsDataView() {}

  LevelDBDatabase_GetSnapshot_ResponseParamsDataView(
      internal::LevelDBDatabase_GetSnapshot_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSnapshotDataView(
      ::mojo_base::mojom::UnguessableTokenDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSnapshot(UserType* output) {
    auto* pointer = data_->snapshot.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::UnguessableTokenDataView>(
        pointer, output, context_);
  }
 private:
  internal::LevelDBDatabase_GetSnapshot_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class LevelDBDatabase_ReleaseSnapshot_ParamsDataView {
 public:
  LevelDBDatabase_ReleaseSnapshot_ParamsDataView() {}

  LevelDBDatabase_ReleaseSnapshot_ParamsDataView(
      internal::LevelDBDatabase_ReleaseSnapshot_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSnapshotDataView(
      ::mojo_base::mojom::UnguessableTokenDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSnapshot(UserType* output) {
    auto* pointer = data_->snapshot.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::UnguessableTokenDataView>(
        pointer, output, context_);
  }
 private:
  internal::LevelDBDatabase_ReleaseSnapshot_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class LevelDBDatabase_GetFromSnapshot_ParamsDataView {
 public:
  LevelDBDatabase_GetFromSnapshot_ParamsDataView() {}

  LevelDBDatabase_GetFromSnapshot_ParamsDataView(
      internal::LevelDBDatabase_GetFromSnapshot_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSnapshotDataView(
      ::mojo_base::mojom::UnguessableTokenDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSnapshot(UserType* output) {
    auto* pointer = data_->snapshot.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::UnguessableTokenDataView>(
        pointer, output, context_);
  }
  inline void GetKeyDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadKey(UserType* output) {
    auto* pointer = data_->key.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
 private:
  internal::LevelDBDatabase_GetFromSnapshot_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class LevelDBDatabase_GetFromSnapshot_ResponseParamsDataView {
 public:
  LevelDBDatabase_GetFromSnapshot_ResponseParamsDataView() {}

  LevelDBDatabase_GetFromSnapshot_ResponseParamsDataView(
      internal::LevelDBDatabase_GetFromSnapshot_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::leveldb::mojom::DatabaseError>(
        data_value, output);
  }

  DatabaseError status() const {
    return static_cast<DatabaseError>(data_->status);
  }
  inline void GetValueDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadValue(UserType* output) {
    auto* pointer = data_->value.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
 private:
  internal::LevelDBDatabase_GetFromSnapshot_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class LevelDBDatabase_NewIterator_ParamsDataView {
 public:
  LevelDBDatabase_NewIterator_ParamsDataView() {}

  LevelDBDatabase_NewIterator_ParamsDataView(
      internal::LevelDBDatabase_NewIterator_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::LevelDBDatabase_NewIterator_Params_Data* data_ = nullptr;
};

class LevelDBDatabase_NewIterator_ResponseParamsDataView {
 public:
  LevelDBDatabase_NewIterator_ResponseParamsDataView() {}

  LevelDBDatabase_NewIterator_ResponseParamsDataView(
      internal::LevelDBDatabase_NewIterator_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetIteratorDataView(
      ::mojo_base::mojom::UnguessableTokenDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadIterator(UserType* output) {
    auto* pointer = data_->iterator.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::UnguessableTokenDataView>(
        pointer, output, context_);
  }
 private:
  internal::LevelDBDatabase_NewIterator_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class LevelDBDatabase_NewIteratorFromSnapshot_ParamsDataView {
 public:
  LevelDBDatabase_NewIteratorFromSnapshot_ParamsDataView() {}

  LevelDBDatabase_NewIteratorFromSnapshot_ParamsDataView(
      internal::LevelDBDatabase_NewIteratorFromSnapshot_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSnapshotDataView(
      ::mojo_base::mojom::UnguessableTokenDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSnapshot(UserType* output) {
    auto* pointer = data_->snapshot.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::UnguessableTokenDataView>(
        pointer, output, context_);
  }
 private:
  internal::LevelDBDatabase_NewIteratorFromSnapshot_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class LevelDBDatabase_NewIteratorFromSnapshot_ResponseParamsDataView {
 public:
  LevelDBDatabase_NewIteratorFromSnapshot_ResponseParamsDataView() {}

  LevelDBDatabase_NewIteratorFromSnapshot_ResponseParamsDataView(
      internal::LevelDBDatabase_NewIteratorFromSnapshot_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetIteratorDataView(
      ::mojo_base::mojom::UnguessableTokenDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadIterator(UserType* output) {
    auto* pointer = data_->iterator.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::UnguessableTokenDataView>(
        pointer, output, context_);
  }
 private:
  internal::LevelDBDatabase_NewIteratorFromSnapshot_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class LevelDBDatabase_ReleaseIterator_ParamsDataView {
 public:
  LevelDBDatabase_ReleaseIterator_ParamsDataView() {}

  LevelDBDatabase_ReleaseIterator_ParamsDataView(
      internal::LevelDBDatabase_ReleaseIterator_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetIteratorDataView(
      ::mojo_base::mojom::UnguessableTokenDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadIterator(UserType* output) {
    auto* pointer = data_->iterator.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::UnguessableTokenDataView>(
        pointer, output, context_);
  }
 private:
  internal::LevelDBDatabase_ReleaseIterator_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class LevelDBDatabase_IteratorSeekToFirst_ParamsDataView {
 public:
  LevelDBDatabase_IteratorSeekToFirst_ParamsDataView() {}

  LevelDBDatabase_IteratorSeekToFirst_ParamsDataView(
      internal::LevelDBDatabase_IteratorSeekToFirst_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetIteratorDataView(
      ::mojo_base::mojom::UnguessableTokenDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadIterator(UserType* output) {
    auto* pointer = data_->iterator.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::UnguessableTokenDataView>(
        pointer, output, context_);
  }
 private:
  internal::LevelDBDatabase_IteratorSeekToFirst_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class LevelDBDatabase_IteratorSeekToFirst_ResponseParamsDataView {
 public:
  LevelDBDatabase_IteratorSeekToFirst_ResponseParamsDataView() {}

  LevelDBDatabase_IteratorSeekToFirst_ResponseParamsDataView(
      internal::LevelDBDatabase_IteratorSeekToFirst_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  bool valid() const {
    return data_->valid;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::leveldb::mojom::DatabaseError>(
        data_value, output);
  }

  DatabaseError status() const {
    return static_cast<DatabaseError>(data_->status);
  }
  inline void GetKeyDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadKey(UserType* output) {
    auto* pointer = data_->key.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
  inline void GetValueDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadValue(UserType* output) {
    auto* pointer = data_->value.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
 private:
  internal::LevelDBDatabase_IteratorSeekToFirst_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class LevelDBDatabase_IteratorSeekToLast_ParamsDataView {
 public:
  LevelDBDatabase_IteratorSeekToLast_ParamsDataView() {}

  LevelDBDatabase_IteratorSeekToLast_ParamsDataView(
      internal::LevelDBDatabase_IteratorSeekToLast_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetIteratorDataView(
      ::mojo_base::mojom::UnguessableTokenDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadIterator(UserType* output) {
    auto* pointer = data_->iterator.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::UnguessableTokenDataView>(
        pointer, output, context_);
  }
 private:
  internal::LevelDBDatabase_IteratorSeekToLast_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class LevelDBDatabase_IteratorSeekToLast_ResponseParamsDataView {
 public:
  LevelDBDatabase_IteratorSeekToLast_ResponseParamsDataView() {}

  LevelDBDatabase_IteratorSeekToLast_ResponseParamsDataView(
      internal::LevelDBDatabase_IteratorSeekToLast_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  bool valid() const {
    return data_->valid;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::leveldb::mojom::DatabaseError>(
        data_value, output);
  }

  DatabaseError status() const {
    return static_cast<DatabaseError>(data_->status);
  }
  inline void GetKeyDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadKey(UserType* output) {
    auto* pointer = data_->key.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
  inline void GetValueDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadValue(UserType* output) {
    auto* pointer = data_->value.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
 private:
  internal::LevelDBDatabase_IteratorSeekToLast_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class LevelDBDatabase_IteratorSeek_ParamsDataView {
 public:
  LevelDBDatabase_IteratorSeek_ParamsDataView() {}

  LevelDBDatabase_IteratorSeek_ParamsDataView(
      internal::LevelDBDatabase_IteratorSeek_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetIteratorDataView(
      ::mojo_base::mojom::UnguessableTokenDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadIterator(UserType* output) {
    auto* pointer = data_->iterator.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::UnguessableTokenDataView>(
        pointer, output, context_);
  }
  inline void GetTargetDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTarget(UserType* output) {
    auto* pointer = data_->target.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
 private:
  internal::LevelDBDatabase_IteratorSeek_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class LevelDBDatabase_IteratorSeek_ResponseParamsDataView {
 public:
  LevelDBDatabase_IteratorSeek_ResponseParamsDataView() {}

  LevelDBDatabase_IteratorSeek_ResponseParamsDataView(
      internal::LevelDBDatabase_IteratorSeek_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  bool valid() const {
    return data_->valid;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::leveldb::mojom::DatabaseError>(
        data_value, output);
  }

  DatabaseError status() const {
    return static_cast<DatabaseError>(data_->status);
  }
  inline void GetKeyDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadKey(UserType* output) {
    auto* pointer = data_->key.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
  inline void GetValueDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadValue(UserType* output) {
    auto* pointer = data_->value.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
 private:
  internal::LevelDBDatabase_IteratorSeek_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class LevelDBDatabase_IteratorNext_ParamsDataView {
 public:
  LevelDBDatabase_IteratorNext_ParamsDataView() {}

  LevelDBDatabase_IteratorNext_ParamsDataView(
      internal::LevelDBDatabase_IteratorNext_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetIteratorDataView(
      ::mojo_base::mojom::UnguessableTokenDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadIterator(UserType* output) {
    auto* pointer = data_->iterator.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::UnguessableTokenDataView>(
        pointer, output, context_);
  }
 private:
  internal::LevelDBDatabase_IteratorNext_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class LevelDBDatabase_IteratorNext_ResponseParamsDataView {
 public:
  LevelDBDatabase_IteratorNext_ResponseParamsDataView() {}

  LevelDBDatabase_IteratorNext_ResponseParamsDataView(
      internal::LevelDBDatabase_IteratorNext_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  bool valid() const {
    return data_->valid;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::leveldb::mojom::DatabaseError>(
        data_value, output);
  }

  DatabaseError status() const {
    return static_cast<DatabaseError>(data_->status);
  }
  inline void GetKeyDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadKey(UserType* output) {
    auto* pointer = data_->key.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
  inline void GetValueDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadValue(UserType* output) {
    auto* pointer = data_->value.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
 private:
  internal::LevelDBDatabase_IteratorNext_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class LevelDBDatabase_IteratorPrev_ParamsDataView {
 public:
  LevelDBDatabase_IteratorPrev_ParamsDataView() {}

  LevelDBDatabase_IteratorPrev_ParamsDataView(
      internal::LevelDBDatabase_IteratorPrev_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetIteratorDataView(
      ::mojo_base::mojom::UnguessableTokenDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadIterator(UserType* output) {
    auto* pointer = data_->iterator.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::UnguessableTokenDataView>(
        pointer, output, context_);
  }
 private:
  internal::LevelDBDatabase_IteratorPrev_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class LevelDBDatabase_IteratorPrev_ResponseParamsDataView {
 public:
  LevelDBDatabase_IteratorPrev_ResponseParamsDataView() {}

  LevelDBDatabase_IteratorPrev_ResponseParamsDataView(
      internal::LevelDBDatabase_IteratorPrev_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  bool valid() const {
    return data_->valid;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::leveldb::mojom::DatabaseError>(
        data_value, output);
  }

  DatabaseError status() const {
    return static_cast<DatabaseError>(data_->status);
  }
  inline void GetKeyDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadKey(UserType* output) {
    auto* pointer = data_->key.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
  inline void GetValueDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadValue(UserType* output) {
    auto* pointer = data_->value.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
 private:
  internal::LevelDBDatabase_IteratorPrev_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void LevelDBService_Open_ParamsDataView::GetDbnameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->dbname.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void LevelDBService_Open_ParamsDataView::GetMemoryDumpIdDataView(
    ::mojo_base::mojom::MemoryAllocatorDumpCrossProcessUidDataView* output) {
  auto pointer = data_->memory_dump_id.Get();
  *output = ::mojo_base::mojom::MemoryAllocatorDumpCrossProcessUidDataView(pointer, context_);
}




inline void LevelDBService_OpenWithOptions_ParamsDataView::GetOptionsDataView(
    OpenOptionsDataView* output) {
  auto pointer = data_->options.Get();
  *output = OpenOptionsDataView(pointer, context_);
}
inline void LevelDBService_OpenWithOptions_ParamsDataView::GetDbnameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->dbname.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void LevelDBService_OpenWithOptions_ParamsDataView::GetMemoryDumpIdDataView(
    ::mojo_base::mojom::MemoryAllocatorDumpCrossProcessUidDataView* output) {
  auto pointer = data_->memory_dump_id.Get();
  *output = ::mojo_base::mojom::MemoryAllocatorDumpCrossProcessUidDataView(pointer, context_);
}




inline void LevelDBService_OpenInMemory_ParamsDataView::GetMemoryDumpIdDataView(
    ::mojo_base::mojom::MemoryAllocatorDumpCrossProcessUidDataView* output) {
  auto pointer = data_->memory_dump_id.Get();
  *output = ::mojo_base::mojom::MemoryAllocatorDumpCrossProcessUidDataView(pointer, context_);
}
inline void LevelDBService_OpenInMemory_ParamsDataView::GetTrackingNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->tracking_name.Get();
  *output = mojo::StringDataView(pointer, context_);
}




inline void LevelDBService_Destroy_ParamsDataView::GetDbnameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->dbname.Get();
  *output = mojo::StringDataView(pointer, context_);
}




inline void LevelDBDatabase_Put_ParamsDataView::GetKeyDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->key.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}
inline void LevelDBDatabase_Put_ParamsDataView::GetValueDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->value.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}




inline void LevelDBDatabase_Delete_ParamsDataView::GetKeyDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->key.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}




inline void LevelDBDatabase_DeletePrefixed_ParamsDataView::GetKeyPrefixDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->key_prefix.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}








inline void LevelDBDatabase_Write_ParamsDataView::GetOperationsDataView(
    mojo::ArrayDataView<BatchedOperationDataView>* output) {
  auto pointer = data_->operations.Get();
  *output = mojo::ArrayDataView<BatchedOperationDataView>(pointer, context_);
}




inline void LevelDBDatabase_Get_ParamsDataView::GetKeyDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->key.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}


inline void LevelDBDatabase_Get_ResponseParamsDataView::GetValueDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->value.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}


inline void LevelDBDatabase_GetPrefixed_ParamsDataView::GetKeyPrefixDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->key_prefix.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}


inline void LevelDBDatabase_GetPrefixed_ResponseParamsDataView::GetDataDataView(
    mojo::ArrayDataView<KeyValueDataView>* output) {
  auto pointer = data_->data.Get();
  *output = mojo::ArrayDataView<KeyValueDataView>(pointer, context_);
}


inline void LevelDBDatabase_CopyPrefixed_ParamsDataView::GetSourceKeyPrefixDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->source_key_prefix.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}
inline void LevelDBDatabase_CopyPrefixed_ParamsDataView::GetDestinationKeyPrefixDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->destination_key_prefix.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}






inline void LevelDBDatabase_GetSnapshot_ResponseParamsDataView::GetSnapshotDataView(
    ::mojo_base::mojom::UnguessableTokenDataView* output) {
  auto pointer = data_->snapshot.Get();
  *output = ::mojo_base::mojom::UnguessableTokenDataView(pointer, context_);
}


inline void LevelDBDatabase_ReleaseSnapshot_ParamsDataView::GetSnapshotDataView(
    ::mojo_base::mojom::UnguessableTokenDataView* output) {
  auto pointer = data_->snapshot.Get();
  *output = ::mojo_base::mojom::UnguessableTokenDataView(pointer, context_);
}


inline void LevelDBDatabase_GetFromSnapshot_ParamsDataView::GetSnapshotDataView(
    ::mojo_base::mojom::UnguessableTokenDataView* output) {
  auto pointer = data_->snapshot.Get();
  *output = ::mojo_base::mojom::UnguessableTokenDataView(pointer, context_);
}
inline void LevelDBDatabase_GetFromSnapshot_ParamsDataView::GetKeyDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->key.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}


inline void LevelDBDatabase_GetFromSnapshot_ResponseParamsDataView::GetValueDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->value.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}




inline void LevelDBDatabase_NewIterator_ResponseParamsDataView::GetIteratorDataView(
    ::mojo_base::mojom::UnguessableTokenDataView* output) {
  auto pointer = data_->iterator.Get();
  *output = ::mojo_base::mojom::UnguessableTokenDataView(pointer, context_);
}


inline void LevelDBDatabase_NewIteratorFromSnapshot_ParamsDataView::GetSnapshotDataView(
    ::mojo_base::mojom::UnguessableTokenDataView* output) {
  auto pointer = data_->snapshot.Get();
  *output = ::mojo_base::mojom::UnguessableTokenDataView(pointer, context_);
}


inline void LevelDBDatabase_NewIteratorFromSnapshot_ResponseParamsDataView::GetIteratorDataView(
    ::mojo_base::mojom::UnguessableTokenDataView* output) {
  auto pointer = data_->iterator.Get();
  *output = ::mojo_base::mojom::UnguessableTokenDataView(pointer, context_);
}


inline void LevelDBDatabase_ReleaseIterator_ParamsDataView::GetIteratorDataView(
    ::mojo_base::mojom::UnguessableTokenDataView* output) {
  auto pointer = data_->iterator.Get();
  *output = ::mojo_base::mojom::UnguessableTokenDataView(pointer, context_);
}


inline void LevelDBDatabase_IteratorSeekToFirst_ParamsDataView::GetIteratorDataView(
    ::mojo_base::mojom::UnguessableTokenDataView* output) {
  auto pointer = data_->iterator.Get();
  *output = ::mojo_base::mojom::UnguessableTokenDataView(pointer, context_);
}


inline void LevelDBDatabase_IteratorSeekToFirst_ResponseParamsDataView::GetKeyDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->key.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}
inline void LevelDBDatabase_IteratorSeekToFirst_ResponseParamsDataView::GetValueDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->value.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}


inline void LevelDBDatabase_IteratorSeekToLast_ParamsDataView::GetIteratorDataView(
    ::mojo_base::mojom::UnguessableTokenDataView* output) {
  auto pointer = data_->iterator.Get();
  *output = ::mojo_base::mojom::UnguessableTokenDataView(pointer, context_);
}


inline void LevelDBDatabase_IteratorSeekToLast_ResponseParamsDataView::GetKeyDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->key.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}
inline void LevelDBDatabase_IteratorSeekToLast_ResponseParamsDataView::GetValueDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->value.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}


inline void LevelDBDatabase_IteratorSeek_ParamsDataView::GetIteratorDataView(
    ::mojo_base::mojom::UnguessableTokenDataView* output) {
  auto pointer = data_->iterator.Get();
  *output = ::mojo_base::mojom::UnguessableTokenDataView(pointer, context_);
}
inline void LevelDBDatabase_IteratorSeek_ParamsDataView::GetTargetDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->target.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}


inline void LevelDBDatabase_IteratorSeek_ResponseParamsDataView::GetKeyDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->key.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}
inline void LevelDBDatabase_IteratorSeek_ResponseParamsDataView::GetValueDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->value.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}


inline void LevelDBDatabase_IteratorNext_ParamsDataView::GetIteratorDataView(
    ::mojo_base::mojom::UnguessableTokenDataView* output) {
  auto pointer = data_->iterator.Get();
  *output = ::mojo_base::mojom::UnguessableTokenDataView(pointer, context_);
}


inline void LevelDBDatabase_IteratorNext_ResponseParamsDataView::GetKeyDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->key.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}
inline void LevelDBDatabase_IteratorNext_ResponseParamsDataView::GetValueDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->value.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}


inline void LevelDBDatabase_IteratorPrev_ParamsDataView::GetIteratorDataView(
    ::mojo_base::mojom::UnguessableTokenDataView* output) {
  auto pointer = data_->iterator.Get();
  *output = ::mojo_base::mojom::UnguessableTokenDataView(pointer, context_);
}


inline void LevelDBDatabase_IteratorPrev_ResponseParamsDataView::GetKeyDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->key.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}
inline void LevelDBDatabase_IteratorPrev_ResponseParamsDataView::GetValueDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->value.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}

}  // namespace mojom
}  // namespace leveldb

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // COMPONENTS_SERVICES_LEVELDB_PUBLIC_INTERFACES_LEVELDB_MOJOM_PARAMS_DATA_H_