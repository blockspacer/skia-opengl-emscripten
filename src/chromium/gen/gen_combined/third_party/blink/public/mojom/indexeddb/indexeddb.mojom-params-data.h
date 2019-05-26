// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_INDEXEDDB_INDEXEDDB_MOJOM_PARAMS_DATA_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_INDEXEDDB_INDEXEDDB_MOJOM_PARAMS_DATA_H_

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
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) IDBCallbacks_Error_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(IDBCallbacks_Error_Params_Data));
      new (data()) IDBCallbacks_Error_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    IDBCallbacks_Error_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<IDBCallbacks_Error_Params_Data>(index_);
    }
    IDBCallbacks_Error_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t code;
  uint8_t pad0_[4];
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> message;

 private:
  IDBCallbacks_Error_Params_Data();
  ~IDBCallbacks_Error_Params_Data() = delete;
};
static_assert(sizeof(IDBCallbacks_Error_Params_Data) == 24,
              "Bad sizeof(IDBCallbacks_Error_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) IDBCallbacks_SuccessNamesAndVersionsList_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(IDBCallbacks_SuccessNamesAndVersionsList_Params_Data));
      new (data()) IDBCallbacks_SuccessNamesAndVersionsList_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    IDBCallbacks_SuccessNamesAndVersionsList_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<IDBCallbacks_SuccessNamesAndVersionsList_Params_Data>(index_);
    }
    IDBCallbacks_SuccessNamesAndVersionsList_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::IDBNameAndVersion_Data>>> value;

 private:
  IDBCallbacks_SuccessNamesAndVersionsList_Params_Data();
  ~IDBCallbacks_SuccessNamesAndVersionsList_Params_Data() = delete;
};
static_assert(sizeof(IDBCallbacks_SuccessNamesAndVersionsList_Params_Data) == 16,
              "Bad sizeof(IDBCallbacks_SuccessNamesAndVersionsList_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) IDBCallbacks_SuccessStringList_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(IDBCallbacks_SuccessStringList_Params_Data));
      new (data()) IDBCallbacks_SuccessStringList_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    IDBCallbacks_SuccessStringList_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<IDBCallbacks_SuccessStringList_Params_Data>(index_);
    }
    IDBCallbacks_SuccessStringList_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data>>> value;

 private:
  IDBCallbacks_SuccessStringList_Params_Data();
  ~IDBCallbacks_SuccessStringList_Params_Data() = delete;
};
static_assert(sizeof(IDBCallbacks_SuccessStringList_Params_Data) == 16,
              "Bad sizeof(IDBCallbacks_SuccessStringList_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) IDBCallbacks_Blocked_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(IDBCallbacks_Blocked_Params_Data));
      new (data()) IDBCallbacks_Blocked_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    IDBCallbacks_Blocked_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<IDBCallbacks_Blocked_Params_Data>(index_);
    }
    IDBCallbacks_Blocked_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int64_t existing_version;

 private:
  IDBCallbacks_Blocked_Params_Data();
  ~IDBCallbacks_Blocked_Params_Data() = delete;
};
static_assert(sizeof(IDBCallbacks_Blocked_Params_Data) == 16,
              "Bad sizeof(IDBCallbacks_Blocked_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) IDBCallbacks_UpgradeNeeded_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(IDBCallbacks_UpgradeNeeded_Params_Data));
      new (data()) IDBCallbacks_UpgradeNeeded_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    IDBCallbacks_UpgradeNeeded_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<IDBCallbacks_UpgradeNeeded_Params_Data>(index_);
    }
    IDBCallbacks_UpgradeNeeded_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::AssociatedInterface_Data database;
  int64_t old_version;
  int32_t data_loss;
  uint8_t pad2_[4];
  mojo::internal::Pointer<mojo::internal::String_Data> data_loss_message;
  mojo::internal::Pointer<internal::IDBDatabaseMetadata_Data> db_metadata;

 private:
  IDBCallbacks_UpgradeNeeded_Params_Data();
  ~IDBCallbacks_UpgradeNeeded_Params_Data() = delete;
};
static_assert(sizeof(IDBCallbacks_UpgradeNeeded_Params_Data) == 48,
              "Bad sizeof(IDBCallbacks_UpgradeNeeded_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) IDBCallbacks_SuccessDatabase_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(IDBCallbacks_SuccessDatabase_Params_Data));
      new (data()) IDBCallbacks_SuccessDatabase_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    IDBCallbacks_SuccessDatabase_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<IDBCallbacks_SuccessDatabase_Params_Data>(index_);
    }
    IDBCallbacks_SuccessDatabase_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::AssociatedInterface_Data database;
  mojo::internal::Pointer<internal::IDBDatabaseMetadata_Data> metadata;

 private:
  IDBCallbacks_SuccessDatabase_Params_Data();
  ~IDBCallbacks_SuccessDatabase_Params_Data() = delete;
};
static_assert(sizeof(IDBCallbacks_SuccessDatabase_Params_Data) == 24,
              "Bad sizeof(IDBCallbacks_SuccessDatabase_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) IDBCallbacks_SuccessCursor_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(IDBCallbacks_SuccessCursor_Params_Data));
      new (data()) IDBCallbacks_SuccessCursor_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    IDBCallbacks_SuccessCursor_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<IDBCallbacks_SuccessCursor_Params_Data>(index_);
    }
    IDBCallbacks_SuccessCursor_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::AssociatedInterface_Data cursor;
  mojo::internal::Pointer<internal::IDBKey_Data> key;
  mojo::internal::Pointer<internal::IDBKey_Data> primary_key;
  mojo::internal::Pointer<internal::IDBValue_Data> value;

 private:
  IDBCallbacks_SuccessCursor_Params_Data();
  ~IDBCallbacks_SuccessCursor_Params_Data() = delete;
};
static_assert(sizeof(IDBCallbacks_SuccessCursor_Params_Data) == 40,
              "Bad sizeof(IDBCallbacks_SuccessCursor_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) IDBCallbacks_SuccessValue_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(IDBCallbacks_SuccessValue_Params_Data));
      new (data()) IDBCallbacks_SuccessValue_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    IDBCallbacks_SuccessValue_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<IDBCallbacks_SuccessValue_Params_Data>(index_);
    }
    IDBCallbacks_SuccessValue_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::IDBReturnValue_Data> value;

 private:
  IDBCallbacks_SuccessValue_Params_Data();
  ~IDBCallbacks_SuccessValue_Params_Data() = delete;
};
static_assert(sizeof(IDBCallbacks_SuccessValue_Params_Data) == 16,
              "Bad sizeof(IDBCallbacks_SuccessValue_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) IDBCallbacks_SuccessArray_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(IDBCallbacks_SuccessArray_Params_Data));
      new (data()) IDBCallbacks_SuccessArray_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    IDBCallbacks_SuccessArray_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<IDBCallbacks_SuccessArray_Params_Data>(index_);
    }
    IDBCallbacks_SuccessArray_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::IDBReturnValue_Data>>> values;

 private:
  IDBCallbacks_SuccessArray_Params_Data();
  ~IDBCallbacks_SuccessArray_Params_Data() = delete;
};
static_assert(sizeof(IDBCallbacks_SuccessArray_Params_Data) == 16,
              "Bad sizeof(IDBCallbacks_SuccessArray_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) IDBCallbacks_SuccessKey_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(IDBCallbacks_SuccessKey_Params_Data));
      new (data()) IDBCallbacks_SuccessKey_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    IDBCallbacks_SuccessKey_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<IDBCallbacks_SuccessKey_Params_Data>(index_);
    }
    IDBCallbacks_SuccessKey_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::IDBKey_Data> key;

 private:
  IDBCallbacks_SuccessKey_Params_Data();
  ~IDBCallbacks_SuccessKey_Params_Data() = delete;
};
static_assert(sizeof(IDBCallbacks_SuccessKey_Params_Data) == 16,
              "Bad sizeof(IDBCallbacks_SuccessKey_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) IDBCallbacks_SuccessInteger_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(IDBCallbacks_SuccessInteger_Params_Data));
      new (data()) IDBCallbacks_SuccessInteger_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    IDBCallbacks_SuccessInteger_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<IDBCallbacks_SuccessInteger_Params_Data>(index_);
    }
    IDBCallbacks_SuccessInteger_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int64_t value;

 private:
  IDBCallbacks_SuccessInteger_Params_Data();
  ~IDBCallbacks_SuccessInteger_Params_Data() = delete;
};
static_assert(sizeof(IDBCallbacks_SuccessInteger_Params_Data) == 16,
              "Bad sizeof(IDBCallbacks_SuccessInteger_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) IDBCallbacks_Success_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(IDBCallbacks_Success_Params_Data));
      new (data()) IDBCallbacks_Success_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    IDBCallbacks_Success_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<IDBCallbacks_Success_Params_Data>(index_);
    }
    IDBCallbacks_Success_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  IDBCallbacks_Success_Params_Data();
  ~IDBCallbacks_Success_Params_Data() = delete;
};
static_assert(sizeof(IDBCallbacks_Success_Params_Data) == 8,
              "Bad sizeof(IDBCallbacks_Success_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) IDBDatabaseCallbacks_ForcedClose_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(IDBDatabaseCallbacks_ForcedClose_Params_Data));
      new (data()) IDBDatabaseCallbacks_ForcedClose_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    IDBDatabaseCallbacks_ForcedClose_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<IDBDatabaseCallbacks_ForcedClose_Params_Data>(index_);
    }
    IDBDatabaseCallbacks_ForcedClose_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  IDBDatabaseCallbacks_ForcedClose_Params_Data();
  ~IDBDatabaseCallbacks_ForcedClose_Params_Data() = delete;
};
static_assert(sizeof(IDBDatabaseCallbacks_ForcedClose_Params_Data) == 8,
              "Bad sizeof(IDBDatabaseCallbacks_ForcedClose_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) IDBDatabaseCallbacks_VersionChange_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(IDBDatabaseCallbacks_VersionChange_Params_Data));
      new (data()) IDBDatabaseCallbacks_VersionChange_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    IDBDatabaseCallbacks_VersionChange_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<IDBDatabaseCallbacks_VersionChange_Params_Data>(index_);
    }
    IDBDatabaseCallbacks_VersionChange_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int64_t old_version;
  int64_t new_version;

 private:
  IDBDatabaseCallbacks_VersionChange_Params_Data();
  ~IDBDatabaseCallbacks_VersionChange_Params_Data() = delete;
};
static_assert(sizeof(IDBDatabaseCallbacks_VersionChange_Params_Data) == 24,
              "Bad sizeof(IDBDatabaseCallbacks_VersionChange_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) IDBDatabaseCallbacks_Abort_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(IDBDatabaseCallbacks_Abort_Params_Data));
      new (data()) IDBDatabaseCallbacks_Abort_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    IDBDatabaseCallbacks_Abort_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<IDBDatabaseCallbacks_Abort_Params_Data>(index_);
    }
    IDBDatabaseCallbacks_Abort_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int64_t transaction_id;
  int32_t code;
  uint8_t pad1_[4];
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> message;

 private:
  IDBDatabaseCallbacks_Abort_Params_Data();
  ~IDBDatabaseCallbacks_Abort_Params_Data() = delete;
};
static_assert(sizeof(IDBDatabaseCallbacks_Abort_Params_Data) == 32,
              "Bad sizeof(IDBDatabaseCallbacks_Abort_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) IDBDatabaseCallbacks_Complete_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(IDBDatabaseCallbacks_Complete_Params_Data));
      new (data()) IDBDatabaseCallbacks_Complete_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    IDBDatabaseCallbacks_Complete_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<IDBDatabaseCallbacks_Complete_Params_Data>(index_);
    }
    IDBDatabaseCallbacks_Complete_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int64_t transaction_id;

 private:
  IDBDatabaseCallbacks_Complete_Params_Data();
  ~IDBDatabaseCallbacks_Complete_Params_Data() = delete;
};
static_assert(sizeof(IDBDatabaseCallbacks_Complete_Params_Data) == 16,
              "Bad sizeof(IDBDatabaseCallbacks_Complete_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) IDBDatabaseCallbacks_Changes_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(IDBDatabaseCallbacks_Changes_Params_Data));
      new (data()) IDBDatabaseCallbacks_Changes_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    IDBDatabaseCallbacks_Changes_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<IDBDatabaseCallbacks_Changes_Params_Data>(index_);
    }
    IDBDatabaseCallbacks_Changes_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::IDBObserverChanges_Data> changes;

 private:
  IDBDatabaseCallbacks_Changes_Params_Data();
  ~IDBDatabaseCallbacks_Changes_Params_Data() = delete;
};
static_assert(sizeof(IDBDatabaseCallbacks_Changes_Params_Data) == 16,
              "Bad sizeof(IDBDatabaseCallbacks_Changes_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) IDBCursor_Advance_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(IDBCursor_Advance_Params_Data));
      new (data()) IDBCursor_Advance_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    IDBCursor_Advance_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<IDBCursor_Advance_Params_Data>(index_);
    }
    IDBCursor_Advance_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t count;
  uint8_t padfinal_[4];

 private:
  IDBCursor_Advance_Params_Data();
  ~IDBCursor_Advance_Params_Data() = delete;
};
static_assert(sizeof(IDBCursor_Advance_Params_Data) == 16,
              "Bad sizeof(IDBCursor_Advance_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) IDBCursor_Advance_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(IDBCursor_Advance_ResponseParams_Data));
      new (data()) IDBCursor_Advance_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    IDBCursor_Advance_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<IDBCursor_Advance_ResponseParams_Data>(index_);
    }
    IDBCursor_Advance_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::IDBError_Data> error;
  mojo::internal::Pointer<internal::IDBCursorValue_Data> value;

 private:
  IDBCursor_Advance_ResponseParams_Data();
  ~IDBCursor_Advance_ResponseParams_Data() = delete;
};
static_assert(sizeof(IDBCursor_Advance_ResponseParams_Data) == 24,
              "Bad sizeof(IDBCursor_Advance_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) IDBCursor_CursorContinue_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(IDBCursor_CursorContinue_Params_Data));
      new (data()) IDBCursor_CursorContinue_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    IDBCursor_CursorContinue_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<IDBCursor_CursorContinue_Params_Data>(index_);
    }
    IDBCursor_CursorContinue_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::IDBKey_Data> key;
  mojo::internal::Pointer<internal::IDBKey_Data> primary_key;

 private:
  IDBCursor_CursorContinue_Params_Data();
  ~IDBCursor_CursorContinue_Params_Data() = delete;
};
static_assert(sizeof(IDBCursor_CursorContinue_Params_Data) == 24,
              "Bad sizeof(IDBCursor_CursorContinue_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) IDBCursor_CursorContinue_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(IDBCursor_CursorContinue_ResponseParams_Data));
      new (data()) IDBCursor_CursorContinue_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    IDBCursor_CursorContinue_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<IDBCursor_CursorContinue_ResponseParams_Data>(index_);
    }
    IDBCursor_CursorContinue_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::IDBError_Data> error;
  mojo::internal::Pointer<internal::IDBCursorValue_Data> value;

 private:
  IDBCursor_CursorContinue_ResponseParams_Data();
  ~IDBCursor_CursorContinue_ResponseParams_Data() = delete;
};
static_assert(sizeof(IDBCursor_CursorContinue_ResponseParams_Data) == 24,
              "Bad sizeof(IDBCursor_CursorContinue_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) IDBCursor_Prefetch_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(IDBCursor_Prefetch_Params_Data));
      new (data()) IDBCursor_Prefetch_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    IDBCursor_Prefetch_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<IDBCursor_Prefetch_Params_Data>(index_);
    }
    IDBCursor_Prefetch_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t count;
  uint8_t padfinal_[4];

 private:
  IDBCursor_Prefetch_Params_Data();
  ~IDBCursor_Prefetch_Params_Data() = delete;
};
static_assert(sizeof(IDBCursor_Prefetch_Params_Data) == 16,
              "Bad sizeof(IDBCursor_Prefetch_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) IDBCursor_Prefetch_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(IDBCursor_Prefetch_ResponseParams_Data));
      new (data()) IDBCursor_Prefetch_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    IDBCursor_Prefetch_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<IDBCursor_Prefetch_ResponseParams_Data>(index_);
    }
    IDBCursor_Prefetch_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::IDBError_Data> error;
  mojo::internal::Pointer<internal::IDBCursorValue_Data> value;

 private:
  IDBCursor_Prefetch_ResponseParams_Data();
  ~IDBCursor_Prefetch_ResponseParams_Data() = delete;
};
static_assert(sizeof(IDBCursor_Prefetch_ResponseParams_Data) == 24,
              "Bad sizeof(IDBCursor_Prefetch_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) IDBCursor_PrefetchReset_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(IDBCursor_PrefetchReset_Params_Data));
      new (data()) IDBCursor_PrefetchReset_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    IDBCursor_PrefetchReset_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<IDBCursor_PrefetchReset_Params_Data>(index_);
    }
    IDBCursor_PrefetchReset_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t used_prefetches;
  int32_t unused_prefetches;

 private:
  IDBCursor_PrefetchReset_Params_Data();
  ~IDBCursor_PrefetchReset_Params_Data() = delete;
};
static_assert(sizeof(IDBCursor_PrefetchReset_Params_Data) == 16,
              "Bad sizeof(IDBCursor_PrefetchReset_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) IDBTransaction_CreateObjectStore_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(IDBTransaction_CreateObjectStore_Params_Data));
      new (data()) IDBTransaction_CreateObjectStore_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    IDBTransaction_CreateObjectStore_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<IDBTransaction_CreateObjectStore_Params_Data>(index_);
    }
    IDBTransaction_CreateObjectStore_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int64_t object_store_id;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> name;
  mojo::internal::Pointer<internal::IDBKeyPath_Data> key_path;
  uint8_t auto_increment : 1;
  uint8_t padfinal_[7];

 private:
  IDBTransaction_CreateObjectStore_Params_Data();
  ~IDBTransaction_CreateObjectStore_Params_Data() = delete;
};
static_assert(sizeof(IDBTransaction_CreateObjectStore_Params_Data) == 40,
              "Bad sizeof(IDBTransaction_CreateObjectStore_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) IDBTransaction_DeleteObjectStore_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(IDBTransaction_DeleteObjectStore_Params_Data));
      new (data()) IDBTransaction_DeleteObjectStore_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    IDBTransaction_DeleteObjectStore_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<IDBTransaction_DeleteObjectStore_Params_Data>(index_);
    }
    IDBTransaction_DeleteObjectStore_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int64_t object_store_id;

 private:
  IDBTransaction_DeleteObjectStore_Params_Data();
  ~IDBTransaction_DeleteObjectStore_Params_Data() = delete;
};
static_assert(sizeof(IDBTransaction_DeleteObjectStore_Params_Data) == 16,
              "Bad sizeof(IDBTransaction_DeleteObjectStore_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) IDBTransaction_Put_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(IDBTransaction_Put_Params_Data));
      new (data()) IDBTransaction_Put_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    IDBTransaction_Put_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<IDBTransaction_Put_Params_Data>(index_);
    }
    IDBTransaction_Put_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int64_t object_store_id;
  mojo::internal::Pointer<internal::IDBValue_Data> value;
  mojo::internal::Pointer<internal::IDBKey_Data> key;
  int32_t mode;
  uint8_t pad3_[4];
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::IDBIndexKeys_Data>>> index_keys;
  mojo::internal::AssociatedInterface_Data callbacks;

 private:
  IDBTransaction_Put_Params_Data();
  ~IDBTransaction_Put_Params_Data() = delete;
};
static_assert(sizeof(IDBTransaction_Put_Params_Data) == 56,
              "Bad sizeof(IDBTransaction_Put_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) IDBTransaction_Commit_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(IDBTransaction_Commit_Params_Data));
      new (data()) IDBTransaction_Commit_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    IDBTransaction_Commit_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<IDBTransaction_Commit_Params_Data>(index_);
    }
    IDBTransaction_Commit_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int64_t num_errors_handled;

 private:
  IDBTransaction_Commit_Params_Data();
  ~IDBTransaction_Commit_Params_Data() = delete;
};
static_assert(sizeof(IDBTransaction_Commit_Params_Data) == 16,
              "Bad sizeof(IDBTransaction_Commit_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) IDBDatabase_RenameObjectStore_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(IDBDatabase_RenameObjectStore_Params_Data));
      new (data()) IDBDatabase_RenameObjectStore_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    IDBDatabase_RenameObjectStore_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<IDBDatabase_RenameObjectStore_Params_Data>(index_);
    }
    IDBDatabase_RenameObjectStore_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int64_t transaction_id;
  int64_t object_store_id;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> new_name;

 private:
  IDBDatabase_RenameObjectStore_Params_Data();
  ~IDBDatabase_RenameObjectStore_Params_Data() = delete;
};
static_assert(sizeof(IDBDatabase_RenameObjectStore_Params_Data) == 32,
              "Bad sizeof(IDBDatabase_RenameObjectStore_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) IDBDatabase_CreateTransaction_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(IDBDatabase_CreateTransaction_Params_Data));
      new (data()) IDBDatabase_CreateTransaction_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    IDBDatabase_CreateTransaction_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<IDBDatabase_CreateTransaction_Params_Data>(index_);
    }
    IDBDatabase_CreateTransaction_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::AssociatedEndpointHandle_Data transaction_request;
  int32_t mode;
  int64_t transaction_id;
  mojo::internal::Pointer<mojo::internal::Array_Data<int64_t>> object_store_ids;

 private:
  IDBDatabase_CreateTransaction_Params_Data();
  ~IDBDatabase_CreateTransaction_Params_Data() = delete;
};
static_assert(sizeof(IDBDatabase_CreateTransaction_Params_Data) == 32,
              "Bad sizeof(IDBDatabase_CreateTransaction_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) IDBDatabase_Close_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(IDBDatabase_Close_Params_Data));
      new (data()) IDBDatabase_Close_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    IDBDatabase_Close_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<IDBDatabase_Close_Params_Data>(index_);
    }
    IDBDatabase_Close_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  IDBDatabase_Close_Params_Data();
  ~IDBDatabase_Close_Params_Data() = delete;
};
static_assert(sizeof(IDBDatabase_Close_Params_Data) == 8,
              "Bad sizeof(IDBDatabase_Close_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) IDBDatabase_VersionChangeIgnored_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(IDBDatabase_VersionChangeIgnored_Params_Data));
      new (data()) IDBDatabase_VersionChangeIgnored_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    IDBDatabase_VersionChangeIgnored_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<IDBDatabase_VersionChangeIgnored_Params_Data>(index_);
    }
    IDBDatabase_VersionChangeIgnored_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  IDBDatabase_VersionChangeIgnored_Params_Data();
  ~IDBDatabase_VersionChangeIgnored_Params_Data() = delete;
};
static_assert(sizeof(IDBDatabase_VersionChangeIgnored_Params_Data) == 8,
              "Bad sizeof(IDBDatabase_VersionChangeIgnored_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) IDBDatabase_AddObserver_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(IDBDatabase_AddObserver_Params_Data));
      new (data()) IDBDatabase_AddObserver_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    IDBDatabase_AddObserver_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<IDBDatabase_AddObserver_Params_Data>(index_);
    }
    IDBDatabase_AddObserver_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int64_t transaction_id;
  int32_t observer_id;
  uint8_t include_transaction : 1;
  uint8_t no_records : 1;
  uint8_t values : 1;
  uint8_t pad4_[3];
  uint32_t operation_types;
  uint8_t padfinal_[4];

 private:
  IDBDatabase_AddObserver_Params_Data();
  ~IDBDatabase_AddObserver_Params_Data() = delete;
};
static_assert(sizeof(IDBDatabase_AddObserver_Params_Data) == 32,
              "Bad sizeof(IDBDatabase_AddObserver_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) IDBDatabase_RemoveObservers_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(IDBDatabase_RemoveObservers_Params_Data));
      new (data()) IDBDatabase_RemoveObservers_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    IDBDatabase_RemoveObservers_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<IDBDatabase_RemoveObservers_Params_Data>(index_);
    }
    IDBDatabase_RemoveObservers_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<int32_t>> observers;

 private:
  IDBDatabase_RemoveObservers_Params_Data();
  ~IDBDatabase_RemoveObservers_Params_Data() = delete;
};
static_assert(sizeof(IDBDatabase_RemoveObservers_Params_Data) == 16,
              "Bad sizeof(IDBDatabase_RemoveObservers_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) IDBDatabase_Get_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(IDBDatabase_Get_Params_Data));
      new (data()) IDBDatabase_Get_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    IDBDatabase_Get_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<IDBDatabase_Get_Params_Data>(index_);
    }
    IDBDatabase_Get_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int64_t transaction_id;
  int64_t object_store_id;
  int64_t index_id;
  mojo::internal::Pointer<internal::IDBKeyRange_Data> key_range;
  uint8_t key_only : 1;
  uint8_t pad4_[3];
  mojo::internal::AssociatedInterface_Data callbacks;
  uint8_t padfinal_[4];

 private:
  IDBDatabase_Get_Params_Data();
  ~IDBDatabase_Get_Params_Data() = delete;
};
static_assert(sizeof(IDBDatabase_Get_Params_Data) == 56,
              "Bad sizeof(IDBDatabase_Get_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) IDBDatabase_GetAll_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(IDBDatabase_GetAll_Params_Data));
      new (data()) IDBDatabase_GetAll_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    IDBDatabase_GetAll_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<IDBDatabase_GetAll_Params_Data>(index_);
    }
    IDBDatabase_GetAll_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int64_t transaction_id;
  int64_t object_store_id;
  int64_t index_id;
  mojo::internal::Pointer<internal::IDBKeyRange_Data> key_range;
  uint8_t key_only : 1;
  uint8_t pad4_[7];
  int64_t max_count;
  mojo::internal::AssociatedInterface_Data callbacks;

 private:
  IDBDatabase_GetAll_Params_Data();
  ~IDBDatabase_GetAll_Params_Data() = delete;
};
static_assert(sizeof(IDBDatabase_GetAll_Params_Data) == 64,
              "Bad sizeof(IDBDatabase_GetAll_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) IDBDatabase_SetIndexKeys_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(IDBDatabase_SetIndexKeys_Params_Data));
      new (data()) IDBDatabase_SetIndexKeys_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    IDBDatabase_SetIndexKeys_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<IDBDatabase_SetIndexKeys_Params_Data>(index_);
    }
    IDBDatabase_SetIndexKeys_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int64_t transaction_id;
  int64_t object_store_id;
  mojo::internal::Pointer<internal::IDBKey_Data> primary_key;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::IDBIndexKeys_Data>>> index_keys;

 private:
  IDBDatabase_SetIndexKeys_Params_Data();
  ~IDBDatabase_SetIndexKeys_Params_Data() = delete;
};
static_assert(sizeof(IDBDatabase_SetIndexKeys_Params_Data) == 40,
              "Bad sizeof(IDBDatabase_SetIndexKeys_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) IDBDatabase_SetIndexesReady_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(IDBDatabase_SetIndexesReady_Params_Data));
      new (data()) IDBDatabase_SetIndexesReady_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    IDBDatabase_SetIndexesReady_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<IDBDatabase_SetIndexesReady_Params_Data>(index_);
    }
    IDBDatabase_SetIndexesReady_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int64_t transaction_id;
  int64_t object_store_id;
  mojo::internal::Pointer<mojo::internal::Array_Data<int64_t>> index_ids;

 private:
  IDBDatabase_SetIndexesReady_Params_Data();
  ~IDBDatabase_SetIndexesReady_Params_Data() = delete;
};
static_assert(sizeof(IDBDatabase_SetIndexesReady_Params_Data) == 32,
              "Bad sizeof(IDBDatabase_SetIndexesReady_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) IDBDatabase_OpenCursor_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(IDBDatabase_OpenCursor_Params_Data));
      new (data()) IDBDatabase_OpenCursor_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    IDBDatabase_OpenCursor_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<IDBDatabase_OpenCursor_Params_Data>(index_);
    }
    IDBDatabase_OpenCursor_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int64_t transaction_id;
  int64_t object_store_id;
  int64_t index_id;
  mojo::internal::Pointer<internal::IDBKeyRange_Data> key_range;
  int32_t direction;
  uint8_t key_only : 1;
  uint8_t pad5_[3];
  int32_t task_type;
  mojo::internal::AssociatedInterface_Data callbacks;
  uint8_t padfinal_[4];

 private:
  IDBDatabase_OpenCursor_Params_Data();
  ~IDBDatabase_OpenCursor_Params_Data() = delete;
};
static_assert(sizeof(IDBDatabase_OpenCursor_Params_Data) == 64,
              "Bad sizeof(IDBDatabase_OpenCursor_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) IDBDatabase_Count_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(IDBDatabase_Count_Params_Data));
      new (data()) IDBDatabase_Count_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    IDBDatabase_Count_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<IDBDatabase_Count_Params_Data>(index_);
    }
    IDBDatabase_Count_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int64_t transaction_id;
  int64_t object_store_id;
  int64_t index_id;
  mojo::internal::Pointer<internal::IDBKeyRange_Data> key_range;
  mojo::internal::AssociatedInterface_Data callbacks;

 private:
  IDBDatabase_Count_Params_Data();
  ~IDBDatabase_Count_Params_Data() = delete;
};
static_assert(sizeof(IDBDatabase_Count_Params_Data) == 48,
              "Bad sizeof(IDBDatabase_Count_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) IDBDatabase_DeleteRange_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(IDBDatabase_DeleteRange_Params_Data));
      new (data()) IDBDatabase_DeleteRange_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    IDBDatabase_DeleteRange_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<IDBDatabase_DeleteRange_Params_Data>(index_);
    }
    IDBDatabase_DeleteRange_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int64_t transaction_id;
  int64_t object_store_id;
  mojo::internal::Pointer<internal::IDBKeyRange_Data> key_range;
  mojo::internal::AssociatedInterface_Data callbacks;

 private:
  IDBDatabase_DeleteRange_Params_Data();
  ~IDBDatabase_DeleteRange_Params_Data() = delete;
};
static_assert(sizeof(IDBDatabase_DeleteRange_Params_Data) == 40,
              "Bad sizeof(IDBDatabase_DeleteRange_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) IDBDatabase_GetKeyGeneratorCurrentNumber_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(IDBDatabase_GetKeyGeneratorCurrentNumber_Params_Data));
      new (data()) IDBDatabase_GetKeyGeneratorCurrentNumber_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    IDBDatabase_GetKeyGeneratorCurrentNumber_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<IDBDatabase_GetKeyGeneratorCurrentNumber_Params_Data>(index_);
    }
    IDBDatabase_GetKeyGeneratorCurrentNumber_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int64_t transaction_id;
  int64_t object_store_id;
  mojo::internal::AssociatedInterface_Data callbacks;

 private:
  IDBDatabase_GetKeyGeneratorCurrentNumber_Params_Data();
  ~IDBDatabase_GetKeyGeneratorCurrentNumber_Params_Data() = delete;
};
static_assert(sizeof(IDBDatabase_GetKeyGeneratorCurrentNumber_Params_Data) == 32,
              "Bad sizeof(IDBDatabase_GetKeyGeneratorCurrentNumber_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) IDBDatabase_Clear_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(IDBDatabase_Clear_Params_Data));
      new (data()) IDBDatabase_Clear_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    IDBDatabase_Clear_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<IDBDatabase_Clear_Params_Data>(index_);
    }
    IDBDatabase_Clear_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int64_t transaction_id;
  int64_t object_store_id;
  mojo::internal::AssociatedInterface_Data callbacks;

 private:
  IDBDatabase_Clear_Params_Data();
  ~IDBDatabase_Clear_Params_Data() = delete;
};
static_assert(sizeof(IDBDatabase_Clear_Params_Data) == 32,
              "Bad sizeof(IDBDatabase_Clear_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) IDBDatabase_CreateIndex_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(IDBDatabase_CreateIndex_Params_Data));
      new (data()) IDBDatabase_CreateIndex_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    IDBDatabase_CreateIndex_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<IDBDatabase_CreateIndex_Params_Data>(index_);
    }
    IDBDatabase_CreateIndex_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int64_t transaction_id;
  int64_t object_store_id;
  int64_t index_id;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> name;
  mojo::internal::Pointer<internal::IDBKeyPath_Data> key_path;
  uint8_t unique : 1;
  uint8_t multi_entry : 1;
  uint8_t padfinal_[7];

 private:
  IDBDatabase_CreateIndex_Params_Data();
  ~IDBDatabase_CreateIndex_Params_Data() = delete;
};
static_assert(sizeof(IDBDatabase_CreateIndex_Params_Data) == 56,
              "Bad sizeof(IDBDatabase_CreateIndex_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) IDBDatabase_DeleteIndex_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(IDBDatabase_DeleteIndex_Params_Data));
      new (data()) IDBDatabase_DeleteIndex_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    IDBDatabase_DeleteIndex_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<IDBDatabase_DeleteIndex_Params_Data>(index_);
    }
    IDBDatabase_DeleteIndex_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int64_t transaction_id;
  int64_t object_store_id;
  int64_t index_id;

 private:
  IDBDatabase_DeleteIndex_Params_Data();
  ~IDBDatabase_DeleteIndex_Params_Data() = delete;
};
static_assert(sizeof(IDBDatabase_DeleteIndex_Params_Data) == 32,
              "Bad sizeof(IDBDatabase_DeleteIndex_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) IDBDatabase_RenameIndex_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(IDBDatabase_RenameIndex_Params_Data));
      new (data()) IDBDatabase_RenameIndex_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    IDBDatabase_RenameIndex_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<IDBDatabase_RenameIndex_Params_Data>(index_);
    }
    IDBDatabase_RenameIndex_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int64_t transaction_id;
  int64_t object_store_id;
  int64_t index_id;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> new_name;

 private:
  IDBDatabase_RenameIndex_Params_Data();
  ~IDBDatabase_RenameIndex_Params_Data() = delete;
};
static_assert(sizeof(IDBDatabase_RenameIndex_Params_Data) == 40,
              "Bad sizeof(IDBDatabase_RenameIndex_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) IDBDatabase_Abort_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(IDBDatabase_Abort_Params_Data));
      new (data()) IDBDatabase_Abort_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    IDBDatabase_Abort_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<IDBDatabase_Abort_Params_Data>(index_);
    }
    IDBDatabase_Abort_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int64_t transaction_id;

 private:
  IDBDatabase_Abort_Params_Data();
  ~IDBDatabase_Abort_Params_Data() = delete;
};
static_assert(sizeof(IDBDatabase_Abort_Params_Data) == 16,
              "Bad sizeof(IDBDatabase_Abort_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) IDBFactory_GetDatabaseInfo_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(IDBFactory_GetDatabaseInfo_Params_Data));
      new (data()) IDBFactory_GetDatabaseInfo_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    IDBFactory_GetDatabaseInfo_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<IDBFactory_GetDatabaseInfo_Params_Data>(index_);
    }
    IDBFactory_GetDatabaseInfo_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::AssociatedInterface_Data callbacks;

 private:
  IDBFactory_GetDatabaseInfo_Params_Data();
  ~IDBFactory_GetDatabaseInfo_Params_Data() = delete;
};
static_assert(sizeof(IDBFactory_GetDatabaseInfo_Params_Data) == 16,
              "Bad sizeof(IDBFactory_GetDatabaseInfo_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) IDBFactory_GetDatabaseNames_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(IDBFactory_GetDatabaseNames_Params_Data));
      new (data()) IDBFactory_GetDatabaseNames_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    IDBFactory_GetDatabaseNames_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<IDBFactory_GetDatabaseNames_Params_Data>(index_);
    }
    IDBFactory_GetDatabaseNames_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::AssociatedInterface_Data callbacks;

 private:
  IDBFactory_GetDatabaseNames_Params_Data();
  ~IDBFactory_GetDatabaseNames_Params_Data() = delete;
};
static_assert(sizeof(IDBFactory_GetDatabaseNames_Params_Data) == 16,
              "Bad sizeof(IDBFactory_GetDatabaseNames_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) IDBFactory_Open_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(IDBFactory_Open_Params_Data));
      new (data()) IDBFactory_Open_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    IDBFactory_Open_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<IDBFactory_Open_Params_Data>(index_);
    }
    IDBFactory_Open_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::AssociatedInterface_Data callbacks;
  mojo::internal::AssociatedInterface_Data database_callbacks;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> name;
  int64_t version;
  mojo::internal::AssociatedEndpointHandle_Data version_change_transaction_request;
  uint8_t pad4_[4];
  int64_t transaction_id;

 private:
  IDBFactory_Open_Params_Data();
  ~IDBFactory_Open_Params_Data() = delete;
};
static_assert(sizeof(IDBFactory_Open_Params_Data) == 56,
              "Bad sizeof(IDBFactory_Open_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) IDBFactory_DeleteDatabase_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(IDBFactory_DeleteDatabase_Params_Data));
      new (data()) IDBFactory_DeleteDatabase_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    IDBFactory_DeleteDatabase_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<IDBFactory_DeleteDatabase_Params_Data>(index_);
    }
    IDBFactory_DeleteDatabase_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::AssociatedInterface_Data callbacks;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> name;
  uint8_t force_close : 1;
  uint8_t padfinal_[7];

 private:
  IDBFactory_DeleteDatabase_Params_Data();
  ~IDBFactory_DeleteDatabase_Params_Data() = delete;
};
static_assert(sizeof(IDBFactory_DeleteDatabase_Params_Data) == 32,
              "Bad sizeof(IDBFactory_DeleteDatabase_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) IDBFactory_AbortTransactionsAndCompactDatabase_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(IDBFactory_AbortTransactionsAndCompactDatabase_Params_Data));
      new (data()) IDBFactory_AbortTransactionsAndCompactDatabase_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    IDBFactory_AbortTransactionsAndCompactDatabase_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<IDBFactory_AbortTransactionsAndCompactDatabase_Params_Data>(index_);
    }
    IDBFactory_AbortTransactionsAndCompactDatabase_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  IDBFactory_AbortTransactionsAndCompactDatabase_Params_Data();
  ~IDBFactory_AbortTransactionsAndCompactDatabase_Params_Data() = delete;
};
static_assert(sizeof(IDBFactory_AbortTransactionsAndCompactDatabase_Params_Data) == 8,
              "Bad sizeof(IDBFactory_AbortTransactionsAndCompactDatabase_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) IDBFactory_AbortTransactionsAndCompactDatabase_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(IDBFactory_AbortTransactionsAndCompactDatabase_ResponseParams_Data));
      new (data()) IDBFactory_AbortTransactionsAndCompactDatabase_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    IDBFactory_AbortTransactionsAndCompactDatabase_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<IDBFactory_AbortTransactionsAndCompactDatabase_ResponseParams_Data>(index_);
    }
    IDBFactory_AbortTransactionsAndCompactDatabase_ResponseParams_Data* operator->() { return data(); }

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
  IDBFactory_AbortTransactionsAndCompactDatabase_ResponseParams_Data();
  ~IDBFactory_AbortTransactionsAndCompactDatabase_ResponseParams_Data() = delete;
};
static_assert(sizeof(IDBFactory_AbortTransactionsAndCompactDatabase_ResponseParams_Data) == 16,
              "Bad sizeof(IDBFactory_AbortTransactionsAndCompactDatabase_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) IDBFactory_AbortTransactionsForDatabase_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(IDBFactory_AbortTransactionsForDatabase_Params_Data));
      new (data()) IDBFactory_AbortTransactionsForDatabase_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    IDBFactory_AbortTransactionsForDatabase_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<IDBFactory_AbortTransactionsForDatabase_Params_Data>(index_);
    }
    IDBFactory_AbortTransactionsForDatabase_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  IDBFactory_AbortTransactionsForDatabase_Params_Data();
  ~IDBFactory_AbortTransactionsForDatabase_Params_Data() = delete;
};
static_assert(sizeof(IDBFactory_AbortTransactionsForDatabase_Params_Data) == 8,
              "Bad sizeof(IDBFactory_AbortTransactionsForDatabase_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) IDBFactory_AbortTransactionsForDatabase_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(IDBFactory_AbortTransactionsForDatabase_ResponseParams_Data));
      new (data()) IDBFactory_AbortTransactionsForDatabase_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    IDBFactory_AbortTransactionsForDatabase_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<IDBFactory_AbortTransactionsForDatabase_ResponseParams_Data>(index_);
    }
    IDBFactory_AbortTransactionsForDatabase_ResponseParams_Data* operator->() { return data(); }

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
  IDBFactory_AbortTransactionsForDatabase_ResponseParams_Data();
  ~IDBFactory_AbortTransactionsForDatabase_ResponseParams_Data() = delete;
};
static_assert(sizeof(IDBFactory_AbortTransactionsForDatabase_ResponseParams_Data) == 16,
              "Bad sizeof(IDBFactory_AbortTransactionsForDatabase_ResponseParams_Data)");

}  // namespace internal
class IDBCallbacks_Error_ParamsDataView {
 public:
  IDBCallbacks_Error_ParamsDataView() {}

  IDBCallbacks_Error_ParamsDataView(
      internal::IDBCallbacks_Error_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t code() const {
    return data_->code;
  }
  inline void GetMessageDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMessage(UserType* output) {
    auto* pointer = data_->message.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
 private:
  internal::IDBCallbacks_Error_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class IDBCallbacks_SuccessNamesAndVersionsList_ParamsDataView {
 public:
  IDBCallbacks_SuccessNamesAndVersionsList_ParamsDataView() {}

  IDBCallbacks_SuccessNamesAndVersionsList_ParamsDataView(
      internal::IDBCallbacks_SuccessNamesAndVersionsList_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetValueDataView(
      mojo::ArrayDataView<IDBNameAndVersionDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadValue(UserType* output) {
    auto* pointer = data_->value.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::blink::mojom::IDBNameAndVersionDataView>>(
        pointer, output, context_);
  }
 private:
  internal::IDBCallbacks_SuccessNamesAndVersionsList_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class IDBCallbacks_SuccessStringList_ParamsDataView {
 public:
  IDBCallbacks_SuccessStringList_ParamsDataView() {}

  IDBCallbacks_SuccessStringList_ParamsDataView(
      internal::IDBCallbacks_SuccessStringList_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetValueDataView(
      mojo::ArrayDataView<::mojo_base::mojom::String16DataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadValue(UserType* output) {
    auto* pointer = data_->value.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::mojo_base::mojom::String16DataView>>(
        pointer, output, context_);
  }
 private:
  internal::IDBCallbacks_SuccessStringList_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class IDBCallbacks_Blocked_ParamsDataView {
 public:
  IDBCallbacks_Blocked_ParamsDataView() {}

  IDBCallbacks_Blocked_ParamsDataView(
      internal::IDBCallbacks_Blocked_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int64_t existing_version() const {
    return data_->existing_version;
  }
 private:
  internal::IDBCallbacks_Blocked_Params_Data* data_ = nullptr;
};

class IDBCallbacks_UpgradeNeeded_ParamsDataView {
 public:
  IDBCallbacks_UpgradeNeeded_ParamsDataView() {}

  IDBCallbacks_UpgradeNeeded_ParamsDataView(
      internal::IDBCallbacks_UpgradeNeeded_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeDatabase() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::IDBDatabaseAssociatedPtrInfoDataView>(
            &data_->database, &result, context_);
    DCHECK(ret);
    return result;
  }
  int64_t old_version() const {
    return data_->old_version;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDataLoss(UserType* output) const {
    auto data_value = data_->data_loss;
    return mojo::internal::Deserialize<::blink::mojom::IDBDataLoss>(
        data_value, output);
  }

  IDBDataLoss data_loss() const {
    return static_cast<IDBDataLoss>(data_->data_loss);
  }
  inline void GetDataLossMessageDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDataLossMessage(UserType* output) {
    auto* pointer = data_->data_loss_message.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetDbMetadataDataView(
      IDBDatabaseMetadataDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDbMetadata(UserType* output) {
    auto* pointer = data_->db_metadata.Get();
    return mojo::internal::Deserialize<::blink::mojom::IDBDatabaseMetadataDataView>(
        pointer, output, context_);
  }
 private:
  internal::IDBCallbacks_UpgradeNeeded_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class IDBCallbacks_SuccessDatabase_ParamsDataView {
 public:
  IDBCallbacks_SuccessDatabase_ParamsDataView() {}

  IDBCallbacks_SuccessDatabase_ParamsDataView(
      internal::IDBCallbacks_SuccessDatabase_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeDatabase() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::IDBDatabaseAssociatedPtrInfoDataView>(
            &data_->database, &result, context_);
    DCHECK(ret);
    return result;
  }
  inline void GetMetadataDataView(
      IDBDatabaseMetadataDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMetadata(UserType* output) {
    auto* pointer = data_->metadata.Get();
    return mojo::internal::Deserialize<::blink::mojom::IDBDatabaseMetadataDataView>(
        pointer, output, context_);
  }
 private:
  internal::IDBCallbacks_SuccessDatabase_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class IDBCallbacks_SuccessCursor_ParamsDataView {
 public:
  IDBCallbacks_SuccessCursor_ParamsDataView() {}

  IDBCallbacks_SuccessCursor_ParamsDataView(
      internal::IDBCallbacks_SuccessCursor_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeCursor() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::IDBCursorAssociatedPtrInfoDataView>(
            &data_->cursor, &result, context_);
    DCHECK(ret);
    return result;
  }
  inline void GetKeyDataView(
      IDBKeyDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadKey(UserType* output) {
    auto* pointer = data_->key.Get();
    return mojo::internal::Deserialize<::blink::mojom::IDBKeyDataView>(
        pointer, output, context_);
  }
  inline void GetPrimaryKeyDataView(
      IDBKeyDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPrimaryKey(UserType* output) {
    auto* pointer = data_->primary_key.Get();
    return mojo::internal::Deserialize<::blink::mojom::IDBKeyDataView>(
        pointer, output, context_);
  }
  inline void GetValueDataView(
      IDBValueDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadValue(UserType* output) {
    auto* pointer = data_->value.Get();
    return mojo::internal::Deserialize<::blink::mojom::IDBValueDataView>(
        pointer, output, context_);
  }
 private:
  internal::IDBCallbacks_SuccessCursor_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class IDBCallbacks_SuccessValue_ParamsDataView {
 public:
  IDBCallbacks_SuccessValue_ParamsDataView() {}

  IDBCallbacks_SuccessValue_ParamsDataView(
      internal::IDBCallbacks_SuccessValue_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetValueDataView(
      IDBReturnValueDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadValue(UserType* output) {
    auto* pointer = data_->value.Get();
    return mojo::internal::Deserialize<::blink::mojom::IDBReturnValueDataView>(
        pointer, output, context_);
  }
 private:
  internal::IDBCallbacks_SuccessValue_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class IDBCallbacks_SuccessArray_ParamsDataView {
 public:
  IDBCallbacks_SuccessArray_ParamsDataView() {}

  IDBCallbacks_SuccessArray_ParamsDataView(
      internal::IDBCallbacks_SuccessArray_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetValuesDataView(
      mojo::ArrayDataView<IDBReturnValueDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadValues(UserType* output) {
    auto* pointer = data_->values.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::blink::mojom::IDBReturnValueDataView>>(
        pointer, output, context_);
  }
 private:
  internal::IDBCallbacks_SuccessArray_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class IDBCallbacks_SuccessKey_ParamsDataView {
 public:
  IDBCallbacks_SuccessKey_ParamsDataView() {}

  IDBCallbacks_SuccessKey_ParamsDataView(
      internal::IDBCallbacks_SuccessKey_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetKeyDataView(
      IDBKeyDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadKey(UserType* output) {
    auto* pointer = data_->key.Get();
    return mojo::internal::Deserialize<::blink::mojom::IDBKeyDataView>(
        pointer, output, context_);
  }
 private:
  internal::IDBCallbacks_SuccessKey_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class IDBCallbacks_SuccessInteger_ParamsDataView {
 public:
  IDBCallbacks_SuccessInteger_ParamsDataView() {}

  IDBCallbacks_SuccessInteger_ParamsDataView(
      internal::IDBCallbacks_SuccessInteger_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int64_t value() const {
    return data_->value;
  }
 private:
  internal::IDBCallbacks_SuccessInteger_Params_Data* data_ = nullptr;
};

class IDBCallbacks_Success_ParamsDataView {
 public:
  IDBCallbacks_Success_ParamsDataView() {}

  IDBCallbacks_Success_ParamsDataView(
      internal::IDBCallbacks_Success_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::IDBCallbacks_Success_Params_Data* data_ = nullptr;
};

class IDBDatabaseCallbacks_ForcedClose_ParamsDataView {
 public:
  IDBDatabaseCallbacks_ForcedClose_ParamsDataView() {}

  IDBDatabaseCallbacks_ForcedClose_ParamsDataView(
      internal::IDBDatabaseCallbacks_ForcedClose_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::IDBDatabaseCallbacks_ForcedClose_Params_Data* data_ = nullptr;
};

class IDBDatabaseCallbacks_VersionChange_ParamsDataView {
 public:
  IDBDatabaseCallbacks_VersionChange_ParamsDataView() {}

  IDBDatabaseCallbacks_VersionChange_ParamsDataView(
      internal::IDBDatabaseCallbacks_VersionChange_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int64_t old_version() const {
    return data_->old_version;
  }
  int64_t new_version() const {
    return data_->new_version;
  }
 private:
  internal::IDBDatabaseCallbacks_VersionChange_Params_Data* data_ = nullptr;
};

class IDBDatabaseCallbacks_Abort_ParamsDataView {
 public:
  IDBDatabaseCallbacks_Abort_ParamsDataView() {}

  IDBDatabaseCallbacks_Abort_ParamsDataView(
      internal::IDBDatabaseCallbacks_Abort_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int64_t transaction_id() const {
    return data_->transaction_id;
  }
  int32_t code() const {
    return data_->code;
  }
  inline void GetMessageDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMessage(UserType* output) {
    auto* pointer = data_->message.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
 private:
  internal::IDBDatabaseCallbacks_Abort_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class IDBDatabaseCallbacks_Complete_ParamsDataView {
 public:
  IDBDatabaseCallbacks_Complete_ParamsDataView() {}

  IDBDatabaseCallbacks_Complete_ParamsDataView(
      internal::IDBDatabaseCallbacks_Complete_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int64_t transaction_id() const {
    return data_->transaction_id;
  }
 private:
  internal::IDBDatabaseCallbacks_Complete_Params_Data* data_ = nullptr;
};

class IDBDatabaseCallbacks_Changes_ParamsDataView {
 public:
  IDBDatabaseCallbacks_Changes_ParamsDataView() {}

  IDBDatabaseCallbacks_Changes_ParamsDataView(
      internal::IDBDatabaseCallbacks_Changes_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetChangesDataView(
      IDBObserverChangesDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadChanges(UserType* output) {
    auto* pointer = data_->changes.Get();
    return mojo::internal::Deserialize<::blink::mojom::IDBObserverChangesDataView>(
        pointer, output, context_);
  }
 private:
  internal::IDBDatabaseCallbacks_Changes_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class IDBCursor_Advance_ParamsDataView {
 public:
  IDBCursor_Advance_ParamsDataView() {}

  IDBCursor_Advance_ParamsDataView(
      internal::IDBCursor_Advance_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t count() const {
    return data_->count;
  }
 private:
  internal::IDBCursor_Advance_Params_Data* data_ = nullptr;
};

class IDBCursor_Advance_ResponseParamsDataView {
 public:
  IDBCursor_Advance_ResponseParamsDataView() {}

  IDBCursor_Advance_ResponseParamsDataView(
      internal::IDBCursor_Advance_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetErrorDataView(
      IDBErrorDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadError(UserType* output) {
    auto* pointer = data_->error.Get();
    return mojo::internal::Deserialize<::blink::mojom::IDBErrorDataView>(
        pointer, output, context_);
  }
  inline void GetValueDataView(
      IDBCursorValueDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadValue(UserType* output) {
    auto* pointer = data_->value.Get();
    return mojo::internal::Deserialize<::blink::mojom::IDBCursorValueDataView>(
        pointer, output, context_);
  }
 private:
  internal::IDBCursor_Advance_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class IDBCursor_CursorContinue_ParamsDataView {
 public:
  IDBCursor_CursorContinue_ParamsDataView() {}

  IDBCursor_CursorContinue_ParamsDataView(
      internal::IDBCursor_CursorContinue_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetKeyDataView(
      IDBKeyDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadKey(UserType* output) {
    auto* pointer = data_->key.Get();
    return mojo::internal::Deserialize<::blink::mojom::IDBKeyDataView>(
        pointer, output, context_);
  }
  inline void GetPrimaryKeyDataView(
      IDBKeyDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPrimaryKey(UserType* output) {
    auto* pointer = data_->primary_key.Get();
    return mojo::internal::Deserialize<::blink::mojom::IDBKeyDataView>(
        pointer, output, context_);
  }
 private:
  internal::IDBCursor_CursorContinue_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class IDBCursor_CursorContinue_ResponseParamsDataView {
 public:
  IDBCursor_CursorContinue_ResponseParamsDataView() {}

  IDBCursor_CursorContinue_ResponseParamsDataView(
      internal::IDBCursor_CursorContinue_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetErrorDataView(
      IDBErrorDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadError(UserType* output) {
    auto* pointer = data_->error.Get();
    return mojo::internal::Deserialize<::blink::mojom::IDBErrorDataView>(
        pointer, output, context_);
  }
  inline void GetValueDataView(
      IDBCursorValueDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadValue(UserType* output) {
    auto* pointer = data_->value.Get();
    return mojo::internal::Deserialize<::blink::mojom::IDBCursorValueDataView>(
        pointer, output, context_);
  }
 private:
  internal::IDBCursor_CursorContinue_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class IDBCursor_Prefetch_ParamsDataView {
 public:
  IDBCursor_Prefetch_ParamsDataView() {}

  IDBCursor_Prefetch_ParamsDataView(
      internal::IDBCursor_Prefetch_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t count() const {
    return data_->count;
  }
 private:
  internal::IDBCursor_Prefetch_Params_Data* data_ = nullptr;
};

class IDBCursor_Prefetch_ResponseParamsDataView {
 public:
  IDBCursor_Prefetch_ResponseParamsDataView() {}

  IDBCursor_Prefetch_ResponseParamsDataView(
      internal::IDBCursor_Prefetch_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetErrorDataView(
      IDBErrorDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadError(UserType* output) {
    auto* pointer = data_->error.Get();
    return mojo::internal::Deserialize<::blink::mojom::IDBErrorDataView>(
        pointer, output, context_);
  }
  inline void GetValueDataView(
      IDBCursorValueDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadValue(UserType* output) {
    auto* pointer = data_->value.Get();
    return mojo::internal::Deserialize<::blink::mojom::IDBCursorValueDataView>(
        pointer, output, context_);
  }
 private:
  internal::IDBCursor_Prefetch_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class IDBCursor_PrefetchReset_ParamsDataView {
 public:
  IDBCursor_PrefetchReset_ParamsDataView() {}

  IDBCursor_PrefetchReset_ParamsDataView(
      internal::IDBCursor_PrefetchReset_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t used_prefetches() const {
    return data_->used_prefetches;
  }
  int32_t unused_prefetches() const {
    return data_->unused_prefetches;
  }
 private:
  internal::IDBCursor_PrefetchReset_Params_Data* data_ = nullptr;
};

class IDBTransaction_CreateObjectStore_ParamsDataView {
 public:
  IDBTransaction_CreateObjectStore_ParamsDataView() {}

  IDBTransaction_CreateObjectStore_ParamsDataView(
      internal::IDBTransaction_CreateObjectStore_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int64_t object_store_id() const {
    return data_->object_store_id;
  }
  inline void GetNameDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadName(UserType* output) {
    auto* pointer = data_->name.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
  inline void GetKeyPathDataView(
      IDBKeyPathDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadKeyPath(UserType* output) {
    auto* pointer = data_->key_path.Get();
    return mojo::internal::Deserialize<::blink::mojom::IDBKeyPathDataView>(
        pointer, output, context_);
  }
  bool auto_increment() const {
    return data_->auto_increment;
  }
 private:
  internal::IDBTransaction_CreateObjectStore_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class IDBTransaction_DeleteObjectStore_ParamsDataView {
 public:
  IDBTransaction_DeleteObjectStore_ParamsDataView() {}

  IDBTransaction_DeleteObjectStore_ParamsDataView(
      internal::IDBTransaction_DeleteObjectStore_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int64_t object_store_id() const {
    return data_->object_store_id;
  }
 private:
  internal::IDBTransaction_DeleteObjectStore_Params_Data* data_ = nullptr;
};

class IDBTransaction_Put_ParamsDataView {
 public:
  IDBTransaction_Put_ParamsDataView() {}

  IDBTransaction_Put_ParamsDataView(
      internal::IDBTransaction_Put_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int64_t object_store_id() const {
    return data_->object_store_id;
  }
  inline void GetValueDataView(
      IDBValueDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadValue(UserType* output) {
    auto* pointer = data_->value.Get();
    return mojo::internal::Deserialize<::blink::mojom::IDBValueDataView>(
        pointer, output, context_);
  }
  inline void GetKeyDataView(
      IDBKeyDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadKey(UserType* output) {
    auto* pointer = data_->key.Get();
    return mojo::internal::Deserialize<::blink::mojom::IDBKeyDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMode(UserType* output) const {
    auto data_value = data_->mode;
    return mojo::internal::Deserialize<::blink::mojom::IDBPutMode>(
        data_value, output);
  }

  IDBPutMode mode() const {
    return static_cast<IDBPutMode>(data_->mode);
  }
  inline void GetIndexKeysDataView(
      mojo::ArrayDataView<IDBIndexKeysDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadIndexKeys(UserType* output) {
    auto* pointer = data_->index_keys.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::blink::mojom::IDBIndexKeysDataView>>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeCallbacks() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::IDBCallbacksAssociatedPtrInfoDataView>(
            &data_->callbacks, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::IDBTransaction_Put_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class IDBTransaction_Commit_ParamsDataView {
 public:
  IDBTransaction_Commit_ParamsDataView() {}

  IDBTransaction_Commit_ParamsDataView(
      internal::IDBTransaction_Commit_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int64_t num_errors_handled() const {
    return data_->num_errors_handled;
  }
 private:
  internal::IDBTransaction_Commit_Params_Data* data_ = nullptr;
};

class IDBDatabase_RenameObjectStore_ParamsDataView {
 public:
  IDBDatabase_RenameObjectStore_ParamsDataView() {}

  IDBDatabase_RenameObjectStore_ParamsDataView(
      internal::IDBDatabase_RenameObjectStore_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int64_t transaction_id() const {
    return data_->transaction_id;
  }
  int64_t object_store_id() const {
    return data_->object_store_id;
  }
  inline void GetNewNameDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadNewName(UserType* output) {
    auto* pointer = data_->new_name.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
 private:
  internal::IDBDatabase_RenameObjectStore_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class IDBDatabase_CreateTransaction_ParamsDataView {
 public:
  IDBDatabase_CreateTransaction_ParamsDataView() {}

  IDBDatabase_CreateTransaction_ParamsDataView(
      internal::IDBDatabase_CreateTransaction_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeTransactionRequest() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::IDBTransactionAssociatedRequestDataView>(
            &data_->transaction_request, &result, context_);
    DCHECK(ret);
    return result;
  }
  int64_t transaction_id() const {
    return data_->transaction_id;
  }
  inline void GetObjectStoreIdsDataView(
      mojo::ArrayDataView<int64_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadObjectStoreIds(UserType* output) {
    auto* pointer = data_->object_store_ids.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<int64_t>>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMode(UserType* output) const {
    auto data_value = data_->mode;
    return mojo::internal::Deserialize<::blink::mojom::IDBTransactionMode>(
        data_value, output);
  }

  IDBTransactionMode mode() const {
    return static_cast<IDBTransactionMode>(data_->mode);
  }
 private:
  internal::IDBDatabase_CreateTransaction_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class IDBDatabase_Close_ParamsDataView {
 public:
  IDBDatabase_Close_ParamsDataView() {}

  IDBDatabase_Close_ParamsDataView(
      internal::IDBDatabase_Close_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::IDBDatabase_Close_Params_Data* data_ = nullptr;
};

class IDBDatabase_VersionChangeIgnored_ParamsDataView {
 public:
  IDBDatabase_VersionChangeIgnored_ParamsDataView() {}

  IDBDatabase_VersionChangeIgnored_ParamsDataView(
      internal::IDBDatabase_VersionChangeIgnored_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::IDBDatabase_VersionChangeIgnored_Params_Data* data_ = nullptr;
};

class IDBDatabase_AddObserver_ParamsDataView {
 public:
  IDBDatabase_AddObserver_ParamsDataView() {}

  IDBDatabase_AddObserver_ParamsDataView(
      internal::IDBDatabase_AddObserver_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int64_t transaction_id() const {
    return data_->transaction_id;
  }
  int32_t observer_id() const {
    return data_->observer_id;
  }
  bool include_transaction() const {
    return data_->include_transaction;
  }
  bool no_records() const {
    return data_->no_records;
  }
  bool values() const {
    return data_->values;
  }
  uint32_t operation_types() const {
    return data_->operation_types;
  }
 private:
  internal::IDBDatabase_AddObserver_Params_Data* data_ = nullptr;
};

class IDBDatabase_RemoveObservers_ParamsDataView {
 public:
  IDBDatabase_RemoveObservers_ParamsDataView() {}

  IDBDatabase_RemoveObservers_ParamsDataView(
      internal::IDBDatabase_RemoveObservers_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetObserversDataView(
      mojo::ArrayDataView<int32_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadObservers(UserType* output) {
    auto* pointer = data_->observers.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<int32_t>>(
        pointer, output, context_);
  }
 private:
  internal::IDBDatabase_RemoveObservers_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class IDBDatabase_Get_ParamsDataView {
 public:
  IDBDatabase_Get_ParamsDataView() {}

  IDBDatabase_Get_ParamsDataView(
      internal::IDBDatabase_Get_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int64_t transaction_id() const {
    return data_->transaction_id;
  }
  int64_t object_store_id() const {
    return data_->object_store_id;
  }
  int64_t index_id() const {
    return data_->index_id;
  }
  inline void GetKeyRangeDataView(
      IDBKeyRangeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadKeyRange(UserType* output) {
    auto* pointer = data_->key_range.Get();
    return mojo::internal::Deserialize<::blink::mojom::IDBKeyRangeDataView>(
        pointer, output, context_);
  }
  bool key_only() const {
    return data_->key_only;
  }
  template <typename UserType>
  UserType TakeCallbacks() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::IDBCallbacksAssociatedPtrInfoDataView>(
            &data_->callbacks, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::IDBDatabase_Get_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class IDBDatabase_GetAll_ParamsDataView {
 public:
  IDBDatabase_GetAll_ParamsDataView() {}

  IDBDatabase_GetAll_ParamsDataView(
      internal::IDBDatabase_GetAll_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int64_t transaction_id() const {
    return data_->transaction_id;
  }
  int64_t object_store_id() const {
    return data_->object_store_id;
  }
  int64_t index_id() const {
    return data_->index_id;
  }
  inline void GetKeyRangeDataView(
      IDBKeyRangeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadKeyRange(UserType* output) {
    auto* pointer = data_->key_range.Get();
    return mojo::internal::Deserialize<::blink::mojom::IDBKeyRangeDataView>(
        pointer, output, context_);
  }
  bool key_only() const {
    return data_->key_only;
  }
  int64_t max_count() const {
    return data_->max_count;
  }
  template <typename UserType>
  UserType TakeCallbacks() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::IDBCallbacksAssociatedPtrInfoDataView>(
            &data_->callbacks, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::IDBDatabase_GetAll_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class IDBDatabase_SetIndexKeys_ParamsDataView {
 public:
  IDBDatabase_SetIndexKeys_ParamsDataView() {}

  IDBDatabase_SetIndexKeys_ParamsDataView(
      internal::IDBDatabase_SetIndexKeys_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int64_t transaction_id() const {
    return data_->transaction_id;
  }
  int64_t object_store_id() const {
    return data_->object_store_id;
  }
  inline void GetPrimaryKeyDataView(
      IDBKeyDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPrimaryKey(UserType* output) {
    auto* pointer = data_->primary_key.Get();
    return mojo::internal::Deserialize<::blink::mojom::IDBKeyDataView>(
        pointer, output, context_);
  }
  inline void GetIndexKeysDataView(
      mojo::ArrayDataView<IDBIndexKeysDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadIndexKeys(UserType* output) {
    auto* pointer = data_->index_keys.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::blink::mojom::IDBIndexKeysDataView>>(
        pointer, output, context_);
  }
 private:
  internal::IDBDatabase_SetIndexKeys_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class IDBDatabase_SetIndexesReady_ParamsDataView {
 public:
  IDBDatabase_SetIndexesReady_ParamsDataView() {}

  IDBDatabase_SetIndexesReady_ParamsDataView(
      internal::IDBDatabase_SetIndexesReady_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int64_t transaction_id() const {
    return data_->transaction_id;
  }
  int64_t object_store_id() const {
    return data_->object_store_id;
  }
  inline void GetIndexIdsDataView(
      mojo::ArrayDataView<int64_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadIndexIds(UserType* output) {
    auto* pointer = data_->index_ids.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<int64_t>>(
        pointer, output, context_);
  }
 private:
  internal::IDBDatabase_SetIndexesReady_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class IDBDatabase_OpenCursor_ParamsDataView {
 public:
  IDBDatabase_OpenCursor_ParamsDataView() {}

  IDBDatabase_OpenCursor_ParamsDataView(
      internal::IDBDatabase_OpenCursor_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int64_t transaction_id() const {
    return data_->transaction_id;
  }
  int64_t object_store_id() const {
    return data_->object_store_id;
  }
  int64_t index_id() const {
    return data_->index_id;
  }
  inline void GetKeyRangeDataView(
      IDBKeyRangeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadKeyRange(UserType* output) {
    auto* pointer = data_->key_range.Get();
    return mojo::internal::Deserialize<::blink::mojom::IDBKeyRangeDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDirection(UserType* output) const {
    auto data_value = data_->direction;
    return mojo::internal::Deserialize<::blink::mojom::IDBCursorDirection>(
        data_value, output);
  }

  IDBCursorDirection direction() const {
    return static_cast<IDBCursorDirection>(data_->direction);
  }
  bool key_only() const {
    return data_->key_only;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTaskType(UserType* output) const {
    auto data_value = data_->task_type;
    return mojo::internal::Deserialize<::blink::mojom::IDBTaskType>(
        data_value, output);
  }

  IDBTaskType task_type() const {
    return static_cast<IDBTaskType>(data_->task_type);
  }
  template <typename UserType>
  UserType TakeCallbacks() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::IDBCallbacksAssociatedPtrInfoDataView>(
            &data_->callbacks, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::IDBDatabase_OpenCursor_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class IDBDatabase_Count_ParamsDataView {
 public:
  IDBDatabase_Count_ParamsDataView() {}

  IDBDatabase_Count_ParamsDataView(
      internal::IDBDatabase_Count_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int64_t transaction_id() const {
    return data_->transaction_id;
  }
  int64_t object_store_id() const {
    return data_->object_store_id;
  }
  int64_t index_id() const {
    return data_->index_id;
  }
  inline void GetKeyRangeDataView(
      IDBKeyRangeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadKeyRange(UserType* output) {
    auto* pointer = data_->key_range.Get();
    return mojo::internal::Deserialize<::blink::mojom::IDBKeyRangeDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeCallbacks() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::IDBCallbacksAssociatedPtrInfoDataView>(
            &data_->callbacks, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::IDBDatabase_Count_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class IDBDatabase_DeleteRange_ParamsDataView {
 public:
  IDBDatabase_DeleteRange_ParamsDataView() {}

  IDBDatabase_DeleteRange_ParamsDataView(
      internal::IDBDatabase_DeleteRange_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int64_t transaction_id() const {
    return data_->transaction_id;
  }
  int64_t object_store_id() const {
    return data_->object_store_id;
  }
  inline void GetKeyRangeDataView(
      IDBKeyRangeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadKeyRange(UserType* output) {
    auto* pointer = data_->key_range.Get();
    return mojo::internal::Deserialize<::blink::mojom::IDBKeyRangeDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeCallbacks() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::IDBCallbacksAssociatedPtrInfoDataView>(
            &data_->callbacks, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::IDBDatabase_DeleteRange_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class IDBDatabase_GetKeyGeneratorCurrentNumber_ParamsDataView {
 public:
  IDBDatabase_GetKeyGeneratorCurrentNumber_ParamsDataView() {}

  IDBDatabase_GetKeyGeneratorCurrentNumber_ParamsDataView(
      internal::IDBDatabase_GetKeyGeneratorCurrentNumber_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int64_t transaction_id() const {
    return data_->transaction_id;
  }
  int64_t object_store_id() const {
    return data_->object_store_id;
  }
  template <typename UserType>
  UserType TakeCallbacks() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::IDBCallbacksAssociatedPtrInfoDataView>(
            &data_->callbacks, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::IDBDatabase_GetKeyGeneratorCurrentNumber_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class IDBDatabase_Clear_ParamsDataView {
 public:
  IDBDatabase_Clear_ParamsDataView() {}

  IDBDatabase_Clear_ParamsDataView(
      internal::IDBDatabase_Clear_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int64_t transaction_id() const {
    return data_->transaction_id;
  }
  int64_t object_store_id() const {
    return data_->object_store_id;
  }
  template <typename UserType>
  UserType TakeCallbacks() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::IDBCallbacksAssociatedPtrInfoDataView>(
            &data_->callbacks, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::IDBDatabase_Clear_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class IDBDatabase_CreateIndex_ParamsDataView {
 public:
  IDBDatabase_CreateIndex_ParamsDataView() {}

  IDBDatabase_CreateIndex_ParamsDataView(
      internal::IDBDatabase_CreateIndex_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int64_t transaction_id() const {
    return data_->transaction_id;
  }
  int64_t object_store_id() const {
    return data_->object_store_id;
  }
  int64_t index_id() const {
    return data_->index_id;
  }
  inline void GetNameDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadName(UserType* output) {
    auto* pointer = data_->name.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
  inline void GetKeyPathDataView(
      IDBKeyPathDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadKeyPath(UserType* output) {
    auto* pointer = data_->key_path.Get();
    return mojo::internal::Deserialize<::blink::mojom::IDBKeyPathDataView>(
        pointer, output, context_);
  }
  bool unique() const {
    return data_->unique;
  }
  bool multi_entry() const {
    return data_->multi_entry;
  }
 private:
  internal::IDBDatabase_CreateIndex_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class IDBDatabase_DeleteIndex_ParamsDataView {
 public:
  IDBDatabase_DeleteIndex_ParamsDataView() {}

  IDBDatabase_DeleteIndex_ParamsDataView(
      internal::IDBDatabase_DeleteIndex_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int64_t transaction_id() const {
    return data_->transaction_id;
  }
  int64_t object_store_id() const {
    return data_->object_store_id;
  }
  int64_t index_id() const {
    return data_->index_id;
  }
 private:
  internal::IDBDatabase_DeleteIndex_Params_Data* data_ = nullptr;
};

class IDBDatabase_RenameIndex_ParamsDataView {
 public:
  IDBDatabase_RenameIndex_ParamsDataView() {}

  IDBDatabase_RenameIndex_ParamsDataView(
      internal::IDBDatabase_RenameIndex_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int64_t transaction_id() const {
    return data_->transaction_id;
  }
  int64_t object_store_id() const {
    return data_->object_store_id;
  }
  int64_t index_id() const {
    return data_->index_id;
  }
  inline void GetNewNameDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadNewName(UserType* output) {
    auto* pointer = data_->new_name.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
 private:
  internal::IDBDatabase_RenameIndex_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class IDBDatabase_Abort_ParamsDataView {
 public:
  IDBDatabase_Abort_ParamsDataView() {}

  IDBDatabase_Abort_ParamsDataView(
      internal::IDBDatabase_Abort_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int64_t transaction_id() const {
    return data_->transaction_id;
  }
 private:
  internal::IDBDatabase_Abort_Params_Data* data_ = nullptr;
};

class IDBFactory_GetDatabaseInfo_ParamsDataView {
 public:
  IDBFactory_GetDatabaseInfo_ParamsDataView() {}

  IDBFactory_GetDatabaseInfo_ParamsDataView(
      internal::IDBFactory_GetDatabaseInfo_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeCallbacks() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::IDBCallbacksAssociatedPtrInfoDataView>(
            &data_->callbacks, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::IDBFactory_GetDatabaseInfo_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class IDBFactory_GetDatabaseNames_ParamsDataView {
 public:
  IDBFactory_GetDatabaseNames_ParamsDataView() {}

  IDBFactory_GetDatabaseNames_ParamsDataView(
      internal::IDBFactory_GetDatabaseNames_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeCallbacks() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::IDBCallbacksAssociatedPtrInfoDataView>(
            &data_->callbacks, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::IDBFactory_GetDatabaseNames_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class IDBFactory_Open_ParamsDataView {
 public:
  IDBFactory_Open_ParamsDataView() {}

  IDBFactory_Open_ParamsDataView(
      internal::IDBFactory_Open_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeCallbacks() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::IDBCallbacksAssociatedPtrInfoDataView>(
            &data_->callbacks, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeDatabaseCallbacks() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::IDBDatabaseCallbacksAssociatedPtrInfoDataView>(
            &data_->database_callbacks, &result, context_);
    DCHECK(ret);
    return result;
  }
  inline void GetNameDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadName(UserType* output) {
    auto* pointer = data_->name.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
  int64_t version() const {
    return data_->version;
  }
  template <typename UserType>
  UserType TakeVersionChangeTransactionRequest() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::IDBTransactionAssociatedRequestDataView>(
            &data_->version_change_transaction_request, &result, context_);
    DCHECK(ret);
    return result;
  }
  int64_t transaction_id() const {
    return data_->transaction_id;
  }
 private:
  internal::IDBFactory_Open_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class IDBFactory_DeleteDatabase_ParamsDataView {
 public:
  IDBFactory_DeleteDatabase_ParamsDataView() {}

  IDBFactory_DeleteDatabase_ParamsDataView(
      internal::IDBFactory_DeleteDatabase_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeCallbacks() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::IDBCallbacksAssociatedPtrInfoDataView>(
            &data_->callbacks, &result, context_);
    DCHECK(ret);
    return result;
  }
  inline void GetNameDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadName(UserType* output) {
    auto* pointer = data_->name.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
  bool force_close() const {
    return data_->force_close;
  }
 private:
  internal::IDBFactory_DeleteDatabase_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class IDBFactory_AbortTransactionsAndCompactDatabase_ParamsDataView {
 public:
  IDBFactory_AbortTransactionsAndCompactDatabase_ParamsDataView() {}

  IDBFactory_AbortTransactionsAndCompactDatabase_ParamsDataView(
      internal::IDBFactory_AbortTransactionsAndCompactDatabase_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::IDBFactory_AbortTransactionsAndCompactDatabase_Params_Data* data_ = nullptr;
};

class IDBFactory_AbortTransactionsAndCompactDatabase_ResponseParamsDataView {
 public:
  IDBFactory_AbortTransactionsAndCompactDatabase_ResponseParamsDataView() {}

  IDBFactory_AbortTransactionsAndCompactDatabase_ResponseParamsDataView(
      internal::IDBFactory_AbortTransactionsAndCompactDatabase_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::blink::mojom::IDBStatus>(
        data_value, output);
  }

  IDBStatus status() const {
    return static_cast<IDBStatus>(data_->status);
  }
 private:
  internal::IDBFactory_AbortTransactionsAndCompactDatabase_ResponseParams_Data* data_ = nullptr;
};

class IDBFactory_AbortTransactionsForDatabase_ParamsDataView {
 public:
  IDBFactory_AbortTransactionsForDatabase_ParamsDataView() {}

  IDBFactory_AbortTransactionsForDatabase_ParamsDataView(
      internal::IDBFactory_AbortTransactionsForDatabase_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::IDBFactory_AbortTransactionsForDatabase_Params_Data* data_ = nullptr;
};

class IDBFactory_AbortTransactionsForDatabase_ResponseParamsDataView {
 public:
  IDBFactory_AbortTransactionsForDatabase_ResponseParamsDataView() {}

  IDBFactory_AbortTransactionsForDatabase_ResponseParamsDataView(
      internal::IDBFactory_AbortTransactionsForDatabase_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::blink::mojom::IDBStatus>(
        data_value, output);
  }

  IDBStatus status() const {
    return static_cast<IDBStatus>(data_->status);
  }
 private:
  internal::IDBFactory_AbortTransactionsForDatabase_ResponseParams_Data* data_ = nullptr;
};


inline void IDBCallbacks_Error_ParamsDataView::GetMessageDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->message.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}


inline void IDBCallbacks_SuccessNamesAndVersionsList_ParamsDataView::GetValueDataView(
    mojo::ArrayDataView<IDBNameAndVersionDataView>* output) {
  auto pointer = data_->value.Get();
  *output = mojo::ArrayDataView<IDBNameAndVersionDataView>(pointer, context_);
}


inline void IDBCallbacks_SuccessStringList_ParamsDataView::GetValueDataView(
    mojo::ArrayDataView<::mojo_base::mojom::String16DataView>* output) {
  auto pointer = data_->value.Get();
  *output = mojo::ArrayDataView<::mojo_base::mojom::String16DataView>(pointer, context_);
}




inline void IDBCallbacks_UpgradeNeeded_ParamsDataView::GetDataLossMessageDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->data_loss_message.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void IDBCallbacks_UpgradeNeeded_ParamsDataView::GetDbMetadataDataView(
    IDBDatabaseMetadataDataView* output) {
  auto pointer = data_->db_metadata.Get();
  *output = IDBDatabaseMetadataDataView(pointer, context_);
}


inline void IDBCallbacks_SuccessDatabase_ParamsDataView::GetMetadataDataView(
    IDBDatabaseMetadataDataView* output) {
  auto pointer = data_->metadata.Get();
  *output = IDBDatabaseMetadataDataView(pointer, context_);
}


inline void IDBCallbacks_SuccessCursor_ParamsDataView::GetKeyDataView(
    IDBKeyDataView* output) {
  auto pointer = data_->key.Get();
  *output = IDBKeyDataView(pointer, context_);
}
inline void IDBCallbacks_SuccessCursor_ParamsDataView::GetPrimaryKeyDataView(
    IDBKeyDataView* output) {
  auto pointer = data_->primary_key.Get();
  *output = IDBKeyDataView(pointer, context_);
}
inline void IDBCallbacks_SuccessCursor_ParamsDataView::GetValueDataView(
    IDBValueDataView* output) {
  auto pointer = data_->value.Get();
  *output = IDBValueDataView(pointer, context_);
}


inline void IDBCallbacks_SuccessValue_ParamsDataView::GetValueDataView(
    IDBReturnValueDataView* output) {
  auto pointer = data_->value.Get();
  *output = IDBReturnValueDataView(pointer, context_);
}


inline void IDBCallbacks_SuccessArray_ParamsDataView::GetValuesDataView(
    mojo::ArrayDataView<IDBReturnValueDataView>* output) {
  auto pointer = data_->values.Get();
  *output = mojo::ArrayDataView<IDBReturnValueDataView>(pointer, context_);
}


inline void IDBCallbacks_SuccessKey_ParamsDataView::GetKeyDataView(
    IDBKeyDataView* output) {
  auto pointer = data_->key.Get();
  *output = IDBKeyDataView(pointer, context_);
}










inline void IDBDatabaseCallbacks_Abort_ParamsDataView::GetMessageDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->message.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}




inline void IDBDatabaseCallbacks_Changes_ParamsDataView::GetChangesDataView(
    IDBObserverChangesDataView* output) {
  auto pointer = data_->changes.Get();
  *output = IDBObserverChangesDataView(pointer, context_);
}




inline void IDBCursor_Advance_ResponseParamsDataView::GetErrorDataView(
    IDBErrorDataView* output) {
  auto pointer = data_->error.Get();
  *output = IDBErrorDataView(pointer, context_);
}
inline void IDBCursor_Advance_ResponseParamsDataView::GetValueDataView(
    IDBCursorValueDataView* output) {
  auto pointer = data_->value.Get();
  *output = IDBCursorValueDataView(pointer, context_);
}


inline void IDBCursor_CursorContinue_ParamsDataView::GetKeyDataView(
    IDBKeyDataView* output) {
  auto pointer = data_->key.Get();
  *output = IDBKeyDataView(pointer, context_);
}
inline void IDBCursor_CursorContinue_ParamsDataView::GetPrimaryKeyDataView(
    IDBKeyDataView* output) {
  auto pointer = data_->primary_key.Get();
  *output = IDBKeyDataView(pointer, context_);
}


inline void IDBCursor_CursorContinue_ResponseParamsDataView::GetErrorDataView(
    IDBErrorDataView* output) {
  auto pointer = data_->error.Get();
  *output = IDBErrorDataView(pointer, context_);
}
inline void IDBCursor_CursorContinue_ResponseParamsDataView::GetValueDataView(
    IDBCursorValueDataView* output) {
  auto pointer = data_->value.Get();
  *output = IDBCursorValueDataView(pointer, context_);
}




inline void IDBCursor_Prefetch_ResponseParamsDataView::GetErrorDataView(
    IDBErrorDataView* output) {
  auto pointer = data_->error.Get();
  *output = IDBErrorDataView(pointer, context_);
}
inline void IDBCursor_Prefetch_ResponseParamsDataView::GetValueDataView(
    IDBCursorValueDataView* output) {
  auto pointer = data_->value.Get();
  *output = IDBCursorValueDataView(pointer, context_);
}




inline void IDBTransaction_CreateObjectStore_ParamsDataView::GetNameDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->name.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}
inline void IDBTransaction_CreateObjectStore_ParamsDataView::GetKeyPathDataView(
    IDBKeyPathDataView* output) {
  auto pointer = data_->key_path.Get();
  *output = IDBKeyPathDataView(pointer, context_);
}




inline void IDBTransaction_Put_ParamsDataView::GetValueDataView(
    IDBValueDataView* output) {
  auto pointer = data_->value.Get();
  *output = IDBValueDataView(pointer, context_);
}
inline void IDBTransaction_Put_ParamsDataView::GetKeyDataView(
    IDBKeyDataView* output) {
  auto pointer = data_->key.Get();
  *output = IDBKeyDataView(pointer, context_);
}
inline void IDBTransaction_Put_ParamsDataView::GetIndexKeysDataView(
    mojo::ArrayDataView<IDBIndexKeysDataView>* output) {
  auto pointer = data_->index_keys.Get();
  *output = mojo::ArrayDataView<IDBIndexKeysDataView>(pointer, context_);
}




inline void IDBDatabase_RenameObjectStore_ParamsDataView::GetNewNameDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->new_name.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}


inline void IDBDatabase_CreateTransaction_ParamsDataView::GetObjectStoreIdsDataView(
    mojo::ArrayDataView<int64_t>* output) {
  auto pointer = data_->object_store_ids.Get();
  *output = mojo::ArrayDataView<int64_t>(pointer, context_);
}








inline void IDBDatabase_RemoveObservers_ParamsDataView::GetObserversDataView(
    mojo::ArrayDataView<int32_t>* output) {
  auto pointer = data_->observers.Get();
  *output = mojo::ArrayDataView<int32_t>(pointer, context_);
}


inline void IDBDatabase_Get_ParamsDataView::GetKeyRangeDataView(
    IDBKeyRangeDataView* output) {
  auto pointer = data_->key_range.Get();
  *output = IDBKeyRangeDataView(pointer, context_);
}


inline void IDBDatabase_GetAll_ParamsDataView::GetKeyRangeDataView(
    IDBKeyRangeDataView* output) {
  auto pointer = data_->key_range.Get();
  *output = IDBKeyRangeDataView(pointer, context_);
}


inline void IDBDatabase_SetIndexKeys_ParamsDataView::GetPrimaryKeyDataView(
    IDBKeyDataView* output) {
  auto pointer = data_->primary_key.Get();
  *output = IDBKeyDataView(pointer, context_);
}
inline void IDBDatabase_SetIndexKeys_ParamsDataView::GetIndexKeysDataView(
    mojo::ArrayDataView<IDBIndexKeysDataView>* output) {
  auto pointer = data_->index_keys.Get();
  *output = mojo::ArrayDataView<IDBIndexKeysDataView>(pointer, context_);
}


inline void IDBDatabase_SetIndexesReady_ParamsDataView::GetIndexIdsDataView(
    mojo::ArrayDataView<int64_t>* output) {
  auto pointer = data_->index_ids.Get();
  *output = mojo::ArrayDataView<int64_t>(pointer, context_);
}


inline void IDBDatabase_OpenCursor_ParamsDataView::GetKeyRangeDataView(
    IDBKeyRangeDataView* output) {
  auto pointer = data_->key_range.Get();
  *output = IDBKeyRangeDataView(pointer, context_);
}


inline void IDBDatabase_Count_ParamsDataView::GetKeyRangeDataView(
    IDBKeyRangeDataView* output) {
  auto pointer = data_->key_range.Get();
  *output = IDBKeyRangeDataView(pointer, context_);
}


inline void IDBDatabase_DeleteRange_ParamsDataView::GetKeyRangeDataView(
    IDBKeyRangeDataView* output) {
  auto pointer = data_->key_range.Get();
  *output = IDBKeyRangeDataView(pointer, context_);
}






inline void IDBDatabase_CreateIndex_ParamsDataView::GetNameDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->name.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}
inline void IDBDatabase_CreateIndex_ParamsDataView::GetKeyPathDataView(
    IDBKeyPathDataView* output) {
  auto pointer = data_->key_path.Get();
  *output = IDBKeyPathDataView(pointer, context_);
}




inline void IDBDatabase_RenameIndex_ParamsDataView::GetNewNameDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->new_name.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}








inline void IDBFactory_Open_ParamsDataView::GetNameDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->name.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}


inline void IDBFactory_DeleteDatabase_ParamsDataView::GetNameDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->name.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}









}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_INDEXEDDB_INDEXEDDB_MOJOM_PARAMS_DATA_H_