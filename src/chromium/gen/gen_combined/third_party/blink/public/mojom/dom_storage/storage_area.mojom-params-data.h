// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_DOM_STORAGE_STORAGE_AREA_MOJOM_PARAMS_DATA_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_DOM_STORAGE_STORAGE_AREA_MOJOM_PARAMS_DATA_H_

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
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) StorageAreaObserver_KeyAdded_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(StorageAreaObserver_KeyAdded_Params_Data));
      new (data()) StorageAreaObserver_KeyAdded_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    StorageAreaObserver_KeyAdded_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<StorageAreaObserver_KeyAdded_Params_Data>(index_);
    }
    StorageAreaObserver_KeyAdded_Params_Data* operator->() { return data(); }

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
  mojo::internal::Pointer<mojo::internal::String_Data> source;

 private:
  StorageAreaObserver_KeyAdded_Params_Data();
  ~StorageAreaObserver_KeyAdded_Params_Data() = delete;
};
static_assert(sizeof(StorageAreaObserver_KeyAdded_Params_Data) == 32,
              "Bad sizeof(StorageAreaObserver_KeyAdded_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) StorageAreaObserver_KeyChanged_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(StorageAreaObserver_KeyChanged_Params_Data));
      new (data()) StorageAreaObserver_KeyChanged_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    StorageAreaObserver_KeyChanged_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<StorageAreaObserver_KeyChanged_Params_Data>(index_);
    }
    StorageAreaObserver_KeyChanged_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> key;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> new_value;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> old_value;
  mojo::internal::Pointer<mojo::internal::String_Data> source;

 private:
  StorageAreaObserver_KeyChanged_Params_Data();
  ~StorageAreaObserver_KeyChanged_Params_Data() = delete;
};
static_assert(sizeof(StorageAreaObserver_KeyChanged_Params_Data) == 40,
              "Bad sizeof(StorageAreaObserver_KeyChanged_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) StorageAreaObserver_KeyDeleted_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(StorageAreaObserver_KeyDeleted_Params_Data));
      new (data()) StorageAreaObserver_KeyDeleted_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    StorageAreaObserver_KeyDeleted_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<StorageAreaObserver_KeyDeleted_Params_Data>(index_);
    }
    StorageAreaObserver_KeyDeleted_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> key;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> old_value;
  mojo::internal::Pointer<mojo::internal::String_Data> source;

 private:
  StorageAreaObserver_KeyDeleted_Params_Data();
  ~StorageAreaObserver_KeyDeleted_Params_Data() = delete;
};
static_assert(sizeof(StorageAreaObserver_KeyDeleted_Params_Data) == 32,
              "Bad sizeof(StorageAreaObserver_KeyDeleted_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) StorageAreaObserver_AllDeleted_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(StorageAreaObserver_AllDeleted_Params_Data));
      new (data()) StorageAreaObserver_AllDeleted_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    StorageAreaObserver_AllDeleted_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<StorageAreaObserver_AllDeleted_Params_Data>(index_);
    }
    StorageAreaObserver_AllDeleted_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> source;

 private:
  StorageAreaObserver_AllDeleted_Params_Data();
  ~StorageAreaObserver_AllDeleted_Params_Data() = delete;
};
static_assert(sizeof(StorageAreaObserver_AllDeleted_Params_Data) == 16,
              "Bad sizeof(StorageAreaObserver_AllDeleted_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) StorageAreaObserver_ShouldSendOldValueOnMutations_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(StorageAreaObserver_ShouldSendOldValueOnMutations_Params_Data));
      new (data()) StorageAreaObserver_ShouldSendOldValueOnMutations_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    StorageAreaObserver_ShouldSendOldValueOnMutations_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<StorageAreaObserver_ShouldSendOldValueOnMutations_Params_Data>(index_);
    }
    StorageAreaObserver_ShouldSendOldValueOnMutations_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t value : 1;
  uint8_t padfinal_[7];

 private:
  StorageAreaObserver_ShouldSendOldValueOnMutations_Params_Data();
  ~StorageAreaObserver_ShouldSendOldValueOnMutations_Params_Data() = delete;
};
static_assert(sizeof(StorageAreaObserver_ShouldSendOldValueOnMutations_Params_Data) == 16,
              "Bad sizeof(StorageAreaObserver_ShouldSendOldValueOnMutations_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) StorageAreaGetAllCallback_Complete_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(StorageAreaGetAllCallback_Complete_Params_Data));
      new (data()) StorageAreaGetAllCallback_Complete_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    StorageAreaGetAllCallback_Complete_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<StorageAreaGetAllCallback_Complete_Params_Data>(index_);
    }
    StorageAreaGetAllCallback_Complete_Params_Data* operator->() { return data(); }

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
  StorageAreaGetAllCallback_Complete_Params_Data();
  ~StorageAreaGetAllCallback_Complete_Params_Data() = delete;
};
static_assert(sizeof(StorageAreaGetAllCallback_Complete_Params_Data) == 16,
              "Bad sizeof(StorageAreaGetAllCallback_Complete_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) StorageArea_AddObserver_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(StorageArea_AddObserver_Params_Data));
      new (data()) StorageArea_AddObserver_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    StorageArea_AddObserver_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<StorageArea_AddObserver_Params_Data>(index_);
    }
    StorageArea_AddObserver_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::AssociatedInterface_Data observer;

 private:
  StorageArea_AddObserver_Params_Data();
  ~StorageArea_AddObserver_Params_Data() = delete;
};
static_assert(sizeof(StorageArea_AddObserver_Params_Data) == 16,
              "Bad sizeof(StorageArea_AddObserver_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) StorageArea_Put_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(StorageArea_Put_Params_Data));
      new (data()) StorageArea_Put_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    StorageArea_Put_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<StorageArea_Put_Params_Data>(index_);
    }
    StorageArea_Put_Params_Data* operator->() { return data(); }

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
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> client_old_value;
  mojo::internal::Pointer<mojo::internal::String_Data> source;

 private:
  StorageArea_Put_Params_Data();
  ~StorageArea_Put_Params_Data() = delete;
};
static_assert(sizeof(StorageArea_Put_Params_Data) == 40,
              "Bad sizeof(StorageArea_Put_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) StorageArea_Put_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(StorageArea_Put_ResponseParams_Data));
      new (data()) StorageArea_Put_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    StorageArea_Put_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<StorageArea_Put_ResponseParams_Data>(index_);
    }
    StorageArea_Put_ResponseParams_Data* operator->() { return data(); }

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
  StorageArea_Put_ResponseParams_Data();
  ~StorageArea_Put_ResponseParams_Data() = delete;
};
static_assert(sizeof(StorageArea_Put_ResponseParams_Data) == 16,
              "Bad sizeof(StorageArea_Put_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) StorageArea_Delete_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(StorageArea_Delete_Params_Data));
      new (data()) StorageArea_Delete_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    StorageArea_Delete_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<StorageArea_Delete_Params_Data>(index_);
    }
    StorageArea_Delete_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> key;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> client_old_value;
  mojo::internal::Pointer<mojo::internal::String_Data> source;

 private:
  StorageArea_Delete_Params_Data();
  ~StorageArea_Delete_Params_Data() = delete;
};
static_assert(sizeof(StorageArea_Delete_Params_Data) == 32,
              "Bad sizeof(StorageArea_Delete_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) StorageArea_Delete_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(StorageArea_Delete_ResponseParams_Data));
      new (data()) StorageArea_Delete_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    StorageArea_Delete_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<StorageArea_Delete_ResponseParams_Data>(index_);
    }
    StorageArea_Delete_ResponseParams_Data* operator->() { return data(); }

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
  StorageArea_Delete_ResponseParams_Data();
  ~StorageArea_Delete_ResponseParams_Data() = delete;
};
static_assert(sizeof(StorageArea_Delete_ResponseParams_Data) == 16,
              "Bad sizeof(StorageArea_Delete_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) StorageArea_DeleteAll_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(StorageArea_DeleteAll_Params_Data));
      new (data()) StorageArea_DeleteAll_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    StorageArea_DeleteAll_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<StorageArea_DeleteAll_Params_Data>(index_);
    }
    StorageArea_DeleteAll_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> source;

 private:
  StorageArea_DeleteAll_Params_Data();
  ~StorageArea_DeleteAll_Params_Data() = delete;
};
static_assert(sizeof(StorageArea_DeleteAll_Params_Data) == 16,
              "Bad sizeof(StorageArea_DeleteAll_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) StorageArea_DeleteAll_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(StorageArea_DeleteAll_ResponseParams_Data));
      new (data()) StorageArea_DeleteAll_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    StorageArea_DeleteAll_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<StorageArea_DeleteAll_ResponseParams_Data>(index_);
    }
    StorageArea_DeleteAll_ResponseParams_Data* operator->() { return data(); }

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
  StorageArea_DeleteAll_ResponseParams_Data();
  ~StorageArea_DeleteAll_ResponseParams_Data() = delete;
};
static_assert(sizeof(StorageArea_DeleteAll_ResponseParams_Data) == 16,
              "Bad sizeof(StorageArea_DeleteAll_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) StorageArea_Get_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(StorageArea_Get_Params_Data));
      new (data()) StorageArea_Get_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    StorageArea_Get_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<StorageArea_Get_Params_Data>(index_);
    }
    StorageArea_Get_Params_Data* operator->() { return data(); }

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
  StorageArea_Get_Params_Data();
  ~StorageArea_Get_Params_Data() = delete;
};
static_assert(sizeof(StorageArea_Get_Params_Data) == 16,
              "Bad sizeof(StorageArea_Get_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) StorageArea_Get_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(StorageArea_Get_ResponseParams_Data));
      new (data()) StorageArea_Get_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    StorageArea_Get_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<StorageArea_Get_ResponseParams_Data>(index_);
    }
    StorageArea_Get_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t success : 1;
  uint8_t pad0_[7];
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> value;

 private:
  StorageArea_Get_ResponseParams_Data();
  ~StorageArea_Get_ResponseParams_Data() = delete;
};
static_assert(sizeof(StorageArea_Get_ResponseParams_Data) == 24,
              "Bad sizeof(StorageArea_Get_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) StorageArea_GetAll_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(StorageArea_GetAll_Params_Data));
      new (data()) StorageArea_GetAll_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    StorageArea_GetAll_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<StorageArea_GetAll_Params_Data>(index_);
    }
    StorageArea_GetAll_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::AssociatedInterface_Data complete_callback;

 private:
  StorageArea_GetAll_Params_Data();
  ~StorageArea_GetAll_Params_Data() = delete;
};
static_assert(sizeof(StorageArea_GetAll_Params_Data) == 16,
              "Bad sizeof(StorageArea_GetAll_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) StorageArea_GetAll_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(StorageArea_GetAll_ResponseParams_Data));
      new (data()) StorageArea_GetAll_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    StorageArea_GetAll_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<StorageArea_GetAll_ResponseParams_Data>(index_);
    }
    StorageArea_GetAll_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t success : 1;
  uint8_t pad0_[7];
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::KeyValue_Data>>> data;

 private:
  StorageArea_GetAll_ResponseParams_Data();
  ~StorageArea_GetAll_ResponseParams_Data() = delete;
};
static_assert(sizeof(StorageArea_GetAll_ResponseParams_Data) == 24,
              "Bad sizeof(StorageArea_GetAll_ResponseParams_Data)");

}  // namespace internal
class StorageAreaObserver_KeyAdded_ParamsDataView {
 public:
  StorageAreaObserver_KeyAdded_ParamsDataView() {}

  StorageAreaObserver_KeyAdded_ParamsDataView(
      internal::StorageAreaObserver_KeyAdded_Params_Data* data,
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
  inline void GetSourceDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSource(UserType* output) {
    auto* pointer = data_->source.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::StorageAreaObserver_KeyAdded_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class StorageAreaObserver_KeyChanged_ParamsDataView {
 public:
  StorageAreaObserver_KeyChanged_ParamsDataView() {}

  StorageAreaObserver_KeyChanged_ParamsDataView(
      internal::StorageAreaObserver_KeyChanged_Params_Data* data,
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
  inline void GetNewValueDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadNewValue(UserType* output) {
    auto* pointer = data_->new_value.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
  inline void GetOldValueDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOldValue(UserType* output) {
    auto* pointer = data_->old_value.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
  inline void GetSourceDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSource(UserType* output) {
    auto* pointer = data_->source.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::StorageAreaObserver_KeyChanged_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class StorageAreaObserver_KeyDeleted_ParamsDataView {
 public:
  StorageAreaObserver_KeyDeleted_ParamsDataView() {}

  StorageAreaObserver_KeyDeleted_ParamsDataView(
      internal::StorageAreaObserver_KeyDeleted_Params_Data* data,
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
  inline void GetOldValueDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOldValue(UserType* output) {
    auto* pointer = data_->old_value.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
  inline void GetSourceDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSource(UserType* output) {
    auto* pointer = data_->source.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::StorageAreaObserver_KeyDeleted_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class StorageAreaObserver_AllDeleted_ParamsDataView {
 public:
  StorageAreaObserver_AllDeleted_ParamsDataView() {}

  StorageAreaObserver_AllDeleted_ParamsDataView(
      internal::StorageAreaObserver_AllDeleted_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSourceDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSource(UserType* output) {
    auto* pointer = data_->source.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::StorageAreaObserver_AllDeleted_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class StorageAreaObserver_ShouldSendOldValueOnMutations_ParamsDataView {
 public:
  StorageAreaObserver_ShouldSendOldValueOnMutations_ParamsDataView() {}

  StorageAreaObserver_ShouldSendOldValueOnMutations_ParamsDataView(
      internal::StorageAreaObserver_ShouldSendOldValueOnMutations_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool value() const {
    return data_->value;
  }
 private:
  internal::StorageAreaObserver_ShouldSendOldValueOnMutations_Params_Data* data_ = nullptr;
};

class StorageAreaGetAllCallback_Complete_ParamsDataView {
 public:
  StorageAreaGetAllCallback_Complete_ParamsDataView() {}

  StorageAreaGetAllCallback_Complete_ParamsDataView(
      internal::StorageAreaGetAllCallback_Complete_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
 private:
  internal::StorageAreaGetAllCallback_Complete_Params_Data* data_ = nullptr;
};

class StorageArea_AddObserver_ParamsDataView {
 public:
  StorageArea_AddObserver_ParamsDataView() {}

  StorageArea_AddObserver_ParamsDataView(
      internal::StorageArea_AddObserver_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeObserver() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::StorageAreaObserverAssociatedPtrInfoDataView>(
            &data_->observer, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::StorageArea_AddObserver_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class StorageArea_Put_ParamsDataView {
 public:
  StorageArea_Put_ParamsDataView() {}

  StorageArea_Put_ParamsDataView(
      internal::StorageArea_Put_Params_Data* data,
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
  inline void GetClientOldValueDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadClientOldValue(UserType* output) {
    auto* pointer = data_->client_old_value.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
  inline void GetSourceDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSource(UserType* output) {
    auto* pointer = data_->source.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::StorageArea_Put_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class StorageArea_Put_ResponseParamsDataView {
 public:
  StorageArea_Put_ResponseParamsDataView() {}

  StorageArea_Put_ResponseParamsDataView(
      internal::StorageArea_Put_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
 private:
  internal::StorageArea_Put_ResponseParams_Data* data_ = nullptr;
};

class StorageArea_Delete_ParamsDataView {
 public:
  StorageArea_Delete_ParamsDataView() {}

  StorageArea_Delete_ParamsDataView(
      internal::StorageArea_Delete_Params_Data* data,
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
  inline void GetClientOldValueDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadClientOldValue(UserType* output) {
    auto* pointer = data_->client_old_value.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
  inline void GetSourceDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSource(UserType* output) {
    auto* pointer = data_->source.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::StorageArea_Delete_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class StorageArea_Delete_ResponseParamsDataView {
 public:
  StorageArea_Delete_ResponseParamsDataView() {}

  StorageArea_Delete_ResponseParamsDataView(
      internal::StorageArea_Delete_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
 private:
  internal::StorageArea_Delete_ResponseParams_Data* data_ = nullptr;
};

class StorageArea_DeleteAll_ParamsDataView {
 public:
  StorageArea_DeleteAll_ParamsDataView() {}

  StorageArea_DeleteAll_ParamsDataView(
      internal::StorageArea_DeleteAll_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSourceDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSource(UserType* output) {
    auto* pointer = data_->source.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::StorageArea_DeleteAll_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class StorageArea_DeleteAll_ResponseParamsDataView {
 public:
  StorageArea_DeleteAll_ResponseParamsDataView() {}

  StorageArea_DeleteAll_ResponseParamsDataView(
      internal::StorageArea_DeleteAll_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
 private:
  internal::StorageArea_DeleteAll_ResponseParams_Data* data_ = nullptr;
};

class StorageArea_Get_ParamsDataView {
 public:
  StorageArea_Get_ParamsDataView() {}

  StorageArea_Get_ParamsDataView(
      internal::StorageArea_Get_Params_Data* data,
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
  internal::StorageArea_Get_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class StorageArea_Get_ResponseParamsDataView {
 public:
  StorageArea_Get_ResponseParamsDataView() {}

  StorageArea_Get_ResponseParamsDataView(
      internal::StorageArea_Get_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
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
  internal::StorageArea_Get_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class StorageArea_GetAll_ParamsDataView {
 public:
  StorageArea_GetAll_ParamsDataView() {}

  StorageArea_GetAll_ParamsDataView(
      internal::StorageArea_GetAll_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeCompleteCallback() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::StorageAreaGetAllCallbackAssociatedPtrInfoDataView>(
            &data_->complete_callback, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::StorageArea_GetAll_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class StorageArea_GetAll_ResponseParamsDataView {
 public:
  StorageArea_GetAll_ResponseParamsDataView() {}

  StorageArea_GetAll_ResponseParamsDataView(
      internal::StorageArea_GetAll_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
  inline void GetDataDataView(
      mojo::ArrayDataView<KeyValueDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadData(UserType* output) {
    auto* pointer = data_->data.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::blink::mojom::KeyValueDataView>>(
        pointer, output, context_);
  }
 private:
  internal::StorageArea_GetAll_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void StorageAreaObserver_KeyAdded_ParamsDataView::GetKeyDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->key.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}
inline void StorageAreaObserver_KeyAdded_ParamsDataView::GetValueDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->value.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}
inline void StorageAreaObserver_KeyAdded_ParamsDataView::GetSourceDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->source.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void StorageAreaObserver_KeyChanged_ParamsDataView::GetKeyDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->key.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}
inline void StorageAreaObserver_KeyChanged_ParamsDataView::GetNewValueDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->new_value.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}
inline void StorageAreaObserver_KeyChanged_ParamsDataView::GetOldValueDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->old_value.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}
inline void StorageAreaObserver_KeyChanged_ParamsDataView::GetSourceDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->source.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void StorageAreaObserver_KeyDeleted_ParamsDataView::GetKeyDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->key.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}
inline void StorageAreaObserver_KeyDeleted_ParamsDataView::GetOldValueDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->old_value.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}
inline void StorageAreaObserver_KeyDeleted_ParamsDataView::GetSourceDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->source.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void StorageAreaObserver_AllDeleted_ParamsDataView::GetSourceDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->source.Get();
  *output = mojo::StringDataView(pointer, context_);
}








inline void StorageArea_Put_ParamsDataView::GetKeyDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->key.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}
inline void StorageArea_Put_ParamsDataView::GetValueDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->value.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}
inline void StorageArea_Put_ParamsDataView::GetClientOldValueDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->client_old_value.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}
inline void StorageArea_Put_ParamsDataView::GetSourceDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->source.Get();
  *output = mojo::StringDataView(pointer, context_);
}




inline void StorageArea_Delete_ParamsDataView::GetKeyDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->key.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}
inline void StorageArea_Delete_ParamsDataView::GetClientOldValueDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->client_old_value.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}
inline void StorageArea_Delete_ParamsDataView::GetSourceDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->source.Get();
  *output = mojo::StringDataView(pointer, context_);
}




inline void StorageArea_DeleteAll_ParamsDataView::GetSourceDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->source.Get();
  *output = mojo::StringDataView(pointer, context_);
}




inline void StorageArea_Get_ParamsDataView::GetKeyDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->key.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}


inline void StorageArea_Get_ResponseParamsDataView::GetValueDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->value.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}




inline void StorageArea_GetAll_ResponseParamsDataView::GetDataDataView(
    mojo::ArrayDataView<KeyValueDataView>* output) {
  auto pointer = data_->data.Get();
  *output = mojo::ArrayDataView<KeyValueDataView>(pointer, context_);
}

}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_DOM_STORAGE_STORAGE_AREA_MOJOM_PARAMS_DATA_H_