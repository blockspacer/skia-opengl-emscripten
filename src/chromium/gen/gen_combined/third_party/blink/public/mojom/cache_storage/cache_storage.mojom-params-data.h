// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_CACHE_STORAGE_CACHE_STORAGE_MOJOM_PARAMS_DATA_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_CACHE_STORAGE_CACHE_STORAGE_MOJOM_PARAMS_DATA_H_

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
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) CacheStorageCache_Match_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CacheStorageCache_Match_Params_Data));
      new (data()) CacheStorageCache_Match_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CacheStorageCache_Match_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CacheStorageCache_Match_Params_Data>(index_);
    }
    CacheStorageCache_Match_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::blink::mojom::internal::FetchAPIRequest_Data> request;
  mojo::internal::Pointer<internal::CacheQueryOptions_Data> query_options;
  int64_t trace_id;

 private:
  CacheStorageCache_Match_Params_Data();
  ~CacheStorageCache_Match_Params_Data() = delete;
};
static_assert(sizeof(CacheStorageCache_Match_Params_Data) == 32,
              "Bad sizeof(CacheStorageCache_Match_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) CacheStorageCache_Match_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CacheStorageCache_Match_ResponseParams_Data));
      new (data()) CacheStorageCache_Match_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CacheStorageCache_Match_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CacheStorageCache_Match_ResponseParams_Data>(index_);
    }
    CacheStorageCache_Match_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  internal::MatchResult_Data result;

 private:
  CacheStorageCache_Match_ResponseParams_Data();
  ~CacheStorageCache_Match_ResponseParams_Data() = delete;
};
static_assert(sizeof(CacheStorageCache_Match_ResponseParams_Data) == 24,
              "Bad sizeof(CacheStorageCache_Match_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) CacheStorageCache_MatchAll_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CacheStorageCache_MatchAll_Params_Data));
      new (data()) CacheStorageCache_MatchAll_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CacheStorageCache_MatchAll_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CacheStorageCache_MatchAll_Params_Data>(index_);
    }
    CacheStorageCache_MatchAll_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::blink::mojom::internal::FetchAPIRequest_Data> request;
  mojo::internal::Pointer<internal::CacheQueryOptions_Data> query_options;
  int64_t trace_id;

 private:
  CacheStorageCache_MatchAll_Params_Data();
  ~CacheStorageCache_MatchAll_Params_Data() = delete;
};
static_assert(sizeof(CacheStorageCache_MatchAll_Params_Data) == 32,
              "Bad sizeof(CacheStorageCache_MatchAll_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) CacheStorageCache_MatchAll_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CacheStorageCache_MatchAll_ResponseParams_Data));
      new (data()) CacheStorageCache_MatchAll_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CacheStorageCache_MatchAll_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CacheStorageCache_MatchAll_ResponseParams_Data>(index_);
    }
    CacheStorageCache_MatchAll_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  internal::MatchAllResult_Data result;

 private:
  CacheStorageCache_MatchAll_ResponseParams_Data();
  ~CacheStorageCache_MatchAll_ResponseParams_Data() = delete;
};
static_assert(sizeof(CacheStorageCache_MatchAll_ResponseParams_Data) == 24,
              "Bad sizeof(CacheStorageCache_MatchAll_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) CacheStorageCache_Keys_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CacheStorageCache_Keys_Params_Data));
      new (data()) CacheStorageCache_Keys_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CacheStorageCache_Keys_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CacheStorageCache_Keys_Params_Data>(index_);
    }
    CacheStorageCache_Keys_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::blink::mojom::internal::FetchAPIRequest_Data> request;
  mojo::internal::Pointer<internal::CacheQueryOptions_Data> query_options;
  int64_t trace_id;

 private:
  CacheStorageCache_Keys_Params_Data();
  ~CacheStorageCache_Keys_Params_Data() = delete;
};
static_assert(sizeof(CacheStorageCache_Keys_Params_Data) == 32,
              "Bad sizeof(CacheStorageCache_Keys_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) CacheStorageCache_Keys_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CacheStorageCache_Keys_ResponseParams_Data));
      new (data()) CacheStorageCache_Keys_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CacheStorageCache_Keys_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CacheStorageCache_Keys_ResponseParams_Data>(index_);
    }
    CacheStorageCache_Keys_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  internal::CacheKeysResult_Data result;

 private:
  CacheStorageCache_Keys_ResponseParams_Data();
  ~CacheStorageCache_Keys_ResponseParams_Data() = delete;
};
static_assert(sizeof(CacheStorageCache_Keys_ResponseParams_Data) == 24,
              "Bad sizeof(CacheStorageCache_Keys_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) CacheStorageCache_Batch_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CacheStorageCache_Batch_Params_Data));
      new (data()) CacheStorageCache_Batch_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CacheStorageCache_Batch_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CacheStorageCache_Batch_Params_Data>(index_);
    }
    CacheStorageCache_Batch_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::BatchOperation_Data>>> batch_operations;
  int64_t trace_id;

 private:
  CacheStorageCache_Batch_Params_Data();
  ~CacheStorageCache_Batch_Params_Data() = delete;
};
static_assert(sizeof(CacheStorageCache_Batch_Params_Data) == 24,
              "Bad sizeof(CacheStorageCache_Batch_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) CacheStorageCache_Batch_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CacheStorageCache_Batch_ResponseParams_Data));
      new (data()) CacheStorageCache_Batch_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CacheStorageCache_Batch_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CacheStorageCache_Batch_ResponseParams_Data>(index_);
    }
    CacheStorageCache_Batch_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::CacheStorageVerboseError_Data> result;

 private:
  CacheStorageCache_Batch_ResponseParams_Data();
  ~CacheStorageCache_Batch_ResponseParams_Data() = delete;
};
static_assert(sizeof(CacheStorageCache_Batch_ResponseParams_Data) == 16,
              "Bad sizeof(CacheStorageCache_Batch_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) CacheStorageCache_SetSideData_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CacheStorageCache_SetSideData_Params_Data));
      new (data()) CacheStorageCache_SetSideData_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CacheStorageCache_SetSideData_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CacheStorageCache_SetSideData_Params_Data>(index_);
    }
    CacheStorageCache_SetSideData_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> url;
  mojo::internal::Pointer<::mojo_base::mojom::internal::Time_Data> response_time;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> side_data;
  int64_t trace_id;

 private:
  CacheStorageCache_SetSideData_Params_Data();
  ~CacheStorageCache_SetSideData_Params_Data() = delete;
};
static_assert(sizeof(CacheStorageCache_SetSideData_Params_Data) == 40,
              "Bad sizeof(CacheStorageCache_SetSideData_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) CacheStorageCache_SetSideData_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CacheStorageCache_SetSideData_ResponseParams_Data));
      new (data()) CacheStorageCache_SetSideData_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CacheStorageCache_SetSideData_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CacheStorageCache_SetSideData_ResponseParams_Data>(index_);
    }
    CacheStorageCache_SetSideData_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t result;
  uint8_t padfinal_[4];

 private:
  CacheStorageCache_SetSideData_ResponseParams_Data();
  ~CacheStorageCache_SetSideData_ResponseParams_Data() = delete;
};
static_assert(sizeof(CacheStorageCache_SetSideData_ResponseParams_Data) == 16,
              "Bad sizeof(CacheStorageCache_SetSideData_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) CacheStorage_Has_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CacheStorage_Has_Params_Data));
      new (data()) CacheStorage_Has_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CacheStorage_Has_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CacheStorage_Has_Params_Data>(index_);
    }
    CacheStorage_Has_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> cache_name;
  int64_t trace_id;

 private:
  CacheStorage_Has_Params_Data();
  ~CacheStorage_Has_Params_Data() = delete;
};
static_assert(sizeof(CacheStorage_Has_Params_Data) == 24,
              "Bad sizeof(CacheStorage_Has_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) CacheStorage_Has_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CacheStorage_Has_ResponseParams_Data));
      new (data()) CacheStorage_Has_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CacheStorage_Has_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CacheStorage_Has_ResponseParams_Data>(index_);
    }
    CacheStorage_Has_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t result;
  uint8_t padfinal_[4];

 private:
  CacheStorage_Has_ResponseParams_Data();
  ~CacheStorage_Has_ResponseParams_Data() = delete;
};
static_assert(sizeof(CacheStorage_Has_ResponseParams_Data) == 16,
              "Bad sizeof(CacheStorage_Has_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) CacheStorage_Delete_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CacheStorage_Delete_Params_Data));
      new (data()) CacheStorage_Delete_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CacheStorage_Delete_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CacheStorage_Delete_Params_Data>(index_);
    }
    CacheStorage_Delete_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> cache_name;
  int64_t trace_id;

 private:
  CacheStorage_Delete_Params_Data();
  ~CacheStorage_Delete_Params_Data() = delete;
};
static_assert(sizeof(CacheStorage_Delete_Params_Data) == 24,
              "Bad sizeof(CacheStorage_Delete_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) CacheStorage_Delete_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CacheStorage_Delete_ResponseParams_Data));
      new (data()) CacheStorage_Delete_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CacheStorage_Delete_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CacheStorage_Delete_ResponseParams_Data>(index_);
    }
    CacheStorage_Delete_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t result;
  uint8_t padfinal_[4];

 private:
  CacheStorage_Delete_ResponseParams_Data();
  ~CacheStorage_Delete_ResponseParams_Data() = delete;
};
static_assert(sizeof(CacheStorage_Delete_ResponseParams_Data) == 16,
              "Bad sizeof(CacheStorage_Delete_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) CacheStorage_Keys_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CacheStorage_Keys_Params_Data));
      new (data()) CacheStorage_Keys_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CacheStorage_Keys_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CacheStorage_Keys_Params_Data>(index_);
    }
    CacheStorage_Keys_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int64_t trace_id;

 private:
  CacheStorage_Keys_Params_Data();
  ~CacheStorage_Keys_Params_Data() = delete;
};
static_assert(sizeof(CacheStorage_Keys_Params_Data) == 16,
              "Bad sizeof(CacheStorage_Keys_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) CacheStorage_Keys_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CacheStorage_Keys_ResponseParams_Data));
      new (data()) CacheStorage_Keys_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CacheStorage_Keys_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CacheStorage_Keys_ResponseParams_Data>(index_);
    }
    CacheStorage_Keys_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data>>> keys;

 private:
  CacheStorage_Keys_ResponseParams_Data();
  ~CacheStorage_Keys_ResponseParams_Data() = delete;
};
static_assert(sizeof(CacheStorage_Keys_ResponseParams_Data) == 16,
              "Bad sizeof(CacheStorage_Keys_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) CacheStorage_Match_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CacheStorage_Match_Params_Data));
      new (data()) CacheStorage_Match_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CacheStorage_Match_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CacheStorage_Match_Params_Data>(index_);
    }
    CacheStorage_Match_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::blink::mojom::internal::FetchAPIRequest_Data> request;
  mojo::internal::Pointer<internal::MultiCacheQueryOptions_Data> match_options;
  int64_t trace_id;

 private:
  CacheStorage_Match_Params_Data();
  ~CacheStorage_Match_Params_Data() = delete;
};
static_assert(sizeof(CacheStorage_Match_Params_Data) == 32,
              "Bad sizeof(CacheStorage_Match_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) CacheStorage_Match_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CacheStorage_Match_ResponseParams_Data));
      new (data()) CacheStorage_Match_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CacheStorage_Match_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CacheStorage_Match_ResponseParams_Data>(index_);
    }
    CacheStorage_Match_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  internal::MatchResult_Data result;

 private:
  CacheStorage_Match_ResponseParams_Data();
  ~CacheStorage_Match_ResponseParams_Data() = delete;
};
static_assert(sizeof(CacheStorage_Match_ResponseParams_Data) == 24,
              "Bad sizeof(CacheStorage_Match_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) CacheStorage_Open_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CacheStorage_Open_Params_Data));
      new (data()) CacheStorage_Open_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CacheStorage_Open_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CacheStorage_Open_Params_Data>(index_);
    }
    CacheStorage_Open_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> cache_name;
  int64_t trace_id;

 private:
  CacheStorage_Open_Params_Data();
  ~CacheStorage_Open_Params_Data() = delete;
};
static_assert(sizeof(CacheStorage_Open_Params_Data) == 24,
              "Bad sizeof(CacheStorage_Open_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) CacheStorage_Open_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CacheStorage_Open_ResponseParams_Data));
      new (data()) CacheStorage_Open_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CacheStorage_Open_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CacheStorage_Open_ResponseParams_Data>(index_);
    }
    CacheStorage_Open_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  internal::OpenResult_Data result;

 private:
  CacheStorage_Open_ResponseParams_Data();
  ~CacheStorage_Open_ResponseParams_Data() = delete;
};
static_assert(sizeof(CacheStorage_Open_ResponseParams_Data) == 24,
              "Bad sizeof(CacheStorage_Open_ResponseParams_Data)");

}  // namespace internal
class CacheStorageCache_Match_ParamsDataView {
 public:
  CacheStorageCache_Match_ParamsDataView() {}

  CacheStorageCache_Match_ParamsDataView(
      internal::CacheStorageCache_Match_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetRequestDataView(
      ::blink::mojom::FetchAPIRequestDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRequest(UserType* output) {
    auto* pointer = data_->request.Get();
    return mojo::internal::Deserialize<::blink::mojom::FetchAPIRequestDataView>(
        pointer, output, context_);
  }
  inline void GetQueryOptionsDataView(
      CacheQueryOptionsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadQueryOptions(UserType* output) {
    auto* pointer = data_->query_options.Get();
    return mojo::internal::Deserialize<::blink::mojom::CacheQueryOptionsDataView>(
        pointer, output, context_);
  }
  int64_t trace_id() const {
    return data_->trace_id;
  }
 private:
  internal::CacheStorageCache_Match_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CacheStorageCache_Match_ResponseParamsDataView {
 public:
  CacheStorageCache_Match_ResponseParamsDataView() {}

  CacheStorageCache_Match_ResponseParamsDataView(
      internal::CacheStorageCache_Match_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetResultDataView(
      MatchResultDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResult(UserType* output) {
    auto* pointer = !data_->result.is_null() ? &data_->result : nullptr;
    return mojo::internal::Deserialize<::blink::mojom::MatchResultDataView>(
        pointer, output, context_);
  }
 private:
  internal::CacheStorageCache_Match_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CacheStorageCache_MatchAll_ParamsDataView {
 public:
  CacheStorageCache_MatchAll_ParamsDataView() {}

  CacheStorageCache_MatchAll_ParamsDataView(
      internal::CacheStorageCache_MatchAll_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetRequestDataView(
      ::blink::mojom::FetchAPIRequestDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRequest(UserType* output) {
    auto* pointer = data_->request.Get();
    return mojo::internal::Deserialize<::blink::mojom::FetchAPIRequestDataView>(
        pointer, output, context_);
  }
  inline void GetQueryOptionsDataView(
      CacheQueryOptionsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadQueryOptions(UserType* output) {
    auto* pointer = data_->query_options.Get();
    return mojo::internal::Deserialize<::blink::mojom::CacheQueryOptionsDataView>(
        pointer, output, context_);
  }
  int64_t trace_id() const {
    return data_->trace_id;
  }
 private:
  internal::CacheStorageCache_MatchAll_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CacheStorageCache_MatchAll_ResponseParamsDataView {
 public:
  CacheStorageCache_MatchAll_ResponseParamsDataView() {}

  CacheStorageCache_MatchAll_ResponseParamsDataView(
      internal::CacheStorageCache_MatchAll_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetResultDataView(
      MatchAllResultDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResult(UserType* output) {
    auto* pointer = !data_->result.is_null() ? &data_->result : nullptr;
    return mojo::internal::Deserialize<::blink::mojom::MatchAllResultDataView>(
        pointer, output, context_);
  }
 private:
  internal::CacheStorageCache_MatchAll_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CacheStorageCache_Keys_ParamsDataView {
 public:
  CacheStorageCache_Keys_ParamsDataView() {}

  CacheStorageCache_Keys_ParamsDataView(
      internal::CacheStorageCache_Keys_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetRequestDataView(
      ::blink::mojom::FetchAPIRequestDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRequest(UserType* output) {
    auto* pointer = data_->request.Get();
    return mojo::internal::Deserialize<::blink::mojom::FetchAPIRequestDataView>(
        pointer, output, context_);
  }
  inline void GetQueryOptionsDataView(
      CacheQueryOptionsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadQueryOptions(UserType* output) {
    auto* pointer = data_->query_options.Get();
    return mojo::internal::Deserialize<::blink::mojom::CacheQueryOptionsDataView>(
        pointer, output, context_);
  }
  int64_t trace_id() const {
    return data_->trace_id;
  }
 private:
  internal::CacheStorageCache_Keys_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CacheStorageCache_Keys_ResponseParamsDataView {
 public:
  CacheStorageCache_Keys_ResponseParamsDataView() {}

  CacheStorageCache_Keys_ResponseParamsDataView(
      internal::CacheStorageCache_Keys_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetResultDataView(
      CacheKeysResultDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResult(UserType* output) {
    auto* pointer = !data_->result.is_null() ? &data_->result : nullptr;
    return mojo::internal::Deserialize<::blink::mojom::CacheKeysResultDataView>(
        pointer, output, context_);
  }
 private:
  internal::CacheStorageCache_Keys_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CacheStorageCache_Batch_ParamsDataView {
 public:
  CacheStorageCache_Batch_ParamsDataView() {}

  CacheStorageCache_Batch_ParamsDataView(
      internal::CacheStorageCache_Batch_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetBatchOperationsDataView(
      mojo::ArrayDataView<BatchOperationDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBatchOperations(UserType* output) {
    auto* pointer = data_->batch_operations.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::blink::mojom::BatchOperationDataView>>(
        pointer, output, context_);
  }
  int64_t trace_id() const {
    return data_->trace_id;
  }
 private:
  internal::CacheStorageCache_Batch_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CacheStorageCache_Batch_ResponseParamsDataView {
 public:
  CacheStorageCache_Batch_ResponseParamsDataView() {}

  CacheStorageCache_Batch_ResponseParamsDataView(
      internal::CacheStorageCache_Batch_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetResultDataView(
      CacheStorageVerboseErrorDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResult(UserType* output) {
    auto* pointer = data_->result.Get();
    return mojo::internal::Deserialize<::blink::mojom::CacheStorageVerboseErrorDataView>(
        pointer, output, context_);
  }
 private:
  internal::CacheStorageCache_Batch_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CacheStorageCache_SetSideData_ParamsDataView {
 public:
  CacheStorageCache_SetSideData_ParamsDataView() {}

  CacheStorageCache_SetSideData_ParamsDataView(
      internal::CacheStorageCache_SetSideData_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUrl(UserType* output) {
    auto* pointer = data_->url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  inline void GetResponseTimeDataView(
      ::mojo_base::mojom::TimeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResponseTime(UserType* output) {
    auto* pointer = data_->response_time.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDataView>(
        pointer, output, context_);
  }
  inline void GetSideDataDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSideData(UserType* output) {
    auto* pointer = data_->side_data.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
  int64_t trace_id() const {
    return data_->trace_id;
  }
 private:
  internal::CacheStorageCache_SetSideData_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CacheStorageCache_SetSideData_ResponseParamsDataView {
 public:
  CacheStorageCache_SetSideData_ResponseParamsDataView() {}

  CacheStorageCache_SetSideData_ResponseParamsDataView(
      internal::CacheStorageCache_SetSideData_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResult(UserType* output) const {
    auto data_value = data_->result;
    return mojo::internal::Deserialize<::blink::mojom::CacheStorageError>(
        data_value, output);
  }

  CacheStorageError result() const {
    return static_cast<CacheStorageError>(data_->result);
  }
 private:
  internal::CacheStorageCache_SetSideData_ResponseParams_Data* data_ = nullptr;
};

class CacheStorage_Has_ParamsDataView {
 public:
  CacheStorage_Has_ParamsDataView() {}

  CacheStorage_Has_ParamsDataView(
      internal::CacheStorage_Has_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetCacheNameDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCacheName(UserType* output) {
    auto* pointer = data_->cache_name.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
  int64_t trace_id() const {
    return data_->trace_id;
  }
 private:
  internal::CacheStorage_Has_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CacheStorage_Has_ResponseParamsDataView {
 public:
  CacheStorage_Has_ResponseParamsDataView() {}

  CacheStorage_Has_ResponseParamsDataView(
      internal::CacheStorage_Has_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResult(UserType* output) const {
    auto data_value = data_->result;
    return mojo::internal::Deserialize<::blink::mojom::CacheStorageError>(
        data_value, output);
  }

  CacheStorageError result() const {
    return static_cast<CacheStorageError>(data_->result);
  }
 private:
  internal::CacheStorage_Has_ResponseParams_Data* data_ = nullptr;
};

class CacheStorage_Delete_ParamsDataView {
 public:
  CacheStorage_Delete_ParamsDataView() {}

  CacheStorage_Delete_ParamsDataView(
      internal::CacheStorage_Delete_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetCacheNameDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCacheName(UserType* output) {
    auto* pointer = data_->cache_name.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
  int64_t trace_id() const {
    return data_->trace_id;
  }
 private:
  internal::CacheStorage_Delete_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CacheStorage_Delete_ResponseParamsDataView {
 public:
  CacheStorage_Delete_ResponseParamsDataView() {}

  CacheStorage_Delete_ResponseParamsDataView(
      internal::CacheStorage_Delete_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResult(UserType* output) const {
    auto data_value = data_->result;
    return mojo::internal::Deserialize<::blink::mojom::CacheStorageError>(
        data_value, output);
  }

  CacheStorageError result() const {
    return static_cast<CacheStorageError>(data_->result);
  }
 private:
  internal::CacheStorage_Delete_ResponseParams_Data* data_ = nullptr;
};

class CacheStorage_Keys_ParamsDataView {
 public:
  CacheStorage_Keys_ParamsDataView() {}

  CacheStorage_Keys_ParamsDataView(
      internal::CacheStorage_Keys_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int64_t trace_id() const {
    return data_->trace_id;
  }
 private:
  internal::CacheStorage_Keys_Params_Data* data_ = nullptr;
};

class CacheStorage_Keys_ResponseParamsDataView {
 public:
  CacheStorage_Keys_ResponseParamsDataView() {}

  CacheStorage_Keys_ResponseParamsDataView(
      internal::CacheStorage_Keys_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetKeysDataView(
      mojo::ArrayDataView<::mojo_base::mojom::String16DataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadKeys(UserType* output) {
    auto* pointer = data_->keys.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::mojo_base::mojom::String16DataView>>(
        pointer, output, context_);
  }
 private:
  internal::CacheStorage_Keys_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CacheStorage_Match_ParamsDataView {
 public:
  CacheStorage_Match_ParamsDataView() {}

  CacheStorage_Match_ParamsDataView(
      internal::CacheStorage_Match_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetRequestDataView(
      ::blink::mojom::FetchAPIRequestDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRequest(UserType* output) {
    auto* pointer = data_->request.Get();
    return mojo::internal::Deserialize<::blink::mojom::FetchAPIRequestDataView>(
        pointer, output, context_);
  }
  inline void GetMatchOptionsDataView(
      MultiCacheQueryOptionsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMatchOptions(UserType* output) {
    auto* pointer = data_->match_options.Get();
    return mojo::internal::Deserialize<::blink::mojom::MultiCacheQueryOptionsDataView>(
        pointer, output, context_);
  }
  int64_t trace_id() const {
    return data_->trace_id;
  }
 private:
  internal::CacheStorage_Match_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CacheStorage_Match_ResponseParamsDataView {
 public:
  CacheStorage_Match_ResponseParamsDataView() {}

  CacheStorage_Match_ResponseParamsDataView(
      internal::CacheStorage_Match_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetResultDataView(
      MatchResultDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResult(UserType* output) {
    auto* pointer = !data_->result.is_null() ? &data_->result : nullptr;
    return mojo::internal::Deserialize<::blink::mojom::MatchResultDataView>(
        pointer, output, context_);
  }
 private:
  internal::CacheStorage_Match_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CacheStorage_Open_ParamsDataView {
 public:
  CacheStorage_Open_ParamsDataView() {}

  CacheStorage_Open_ParamsDataView(
      internal::CacheStorage_Open_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetCacheNameDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCacheName(UserType* output) {
    auto* pointer = data_->cache_name.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
  int64_t trace_id() const {
    return data_->trace_id;
  }
 private:
  internal::CacheStorage_Open_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CacheStorage_Open_ResponseParamsDataView {
 public:
  CacheStorage_Open_ResponseParamsDataView() {}

  CacheStorage_Open_ResponseParamsDataView(
      internal::CacheStorage_Open_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetResultDataView(
      OpenResultDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResult(UserType* output) {
    auto* pointer = !data_->result.is_null() ? &data_->result : nullptr;
    return mojo::internal::Deserialize<::blink::mojom::OpenResultDataView>(
        pointer, output, context_);
  }
 private:
  internal::CacheStorage_Open_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void CacheStorageCache_Match_ParamsDataView::GetRequestDataView(
    ::blink::mojom::FetchAPIRequestDataView* output) {
  auto pointer = data_->request.Get();
  *output = ::blink::mojom::FetchAPIRequestDataView(pointer, context_);
}
inline void CacheStorageCache_Match_ParamsDataView::GetQueryOptionsDataView(
    CacheQueryOptionsDataView* output) {
  auto pointer = data_->query_options.Get();
  *output = CacheQueryOptionsDataView(pointer, context_);
}


inline void CacheStorageCache_Match_ResponseParamsDataView::GetResultDataView(
    MatchResultDataView* output) {
  auto pointer = &data_->result;
  *output = MatchResultDataView(pointer, context_);
}


inline void CacheStorageCache_MatchAll_ParamsDataView::GetRequestDataView(
    ::blink::mojom::FetchAPIRequestDataView* output) {
  auto pointer = data_->request.Get();
  *output = ::blink::mojom::FetchAPIRequestDataView(pointer, context_);
}
inline void CacheStorageCache_MatchAll_ParamsDataView::GetQueryOptionsDataView(
    CacheQueryOptionsDataView* output) {
  auto pointer = data_->query_options.Get();
  *output = CacheQueryOptionsDataView(pointer, context_);
}


inline void CacheStorageCache_MatchAll_ResponseParamsDataView::GetResultDataView(
    MatchAllResultDataView* output) {
  auto pointer = &data_->result;
  *output = MatchAllResultDataView(pointer, context_);
}


inline void CacheStorageCache_Keys_ParamsDataView::GetRequestDataView(
    ::blink::mojom::FetchAPIRequestDataView* output) {
  auto pointer = data_->request.Get();
  *output = ::blink::mojom::FetchAPIRequestDataView(pointer, context_);
}
inline void CacheStorageCache_Keys_ParamsDataView::GetQueryOptionsDataView(
    CacheQueryOptionsDataView* output) {
  auto pointer = data_->query_options.Get();
  *output = CacheQueryOptionsDataView(pointer, context_);
}


inline void CacheStorageCache_Keys_ResponseParamsDataView::GetResultDataView(
    CacheKeysResultDataView* output) {
  auto pointer = &data_->result;
  *output = CacheKeysResultDataView(pointer, context_);
}


inline void CacheStorageCache_Batch_ParamsDataView::GetBatchOperationsDataView(
    mojo::ArrayDataView<BatchOperationDataView>* output) {
  auto pointer = data_->batch_operations.Get();
  *output = mojo::ArrayDataView<BatchOperationDataView>(pointer, context_);
}


inline void CacheStorageCache_Batch_ResponseParamsDataView::GetResultDataView(
    CacheStorageVerboseErrorDataView* output) {
  auto pointer = data_->result.Get();
  *output = CacheStorageVerboseErrorDataView(pointer, context_);
}


inline void CacheStorageCache_SetSideData_ParamsDataView::GetUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void CacheStorageCache_SetSideData_ParamsDataView::GetResponseTimeDataView(
    ::mojo_base::mojom::TimeDataView* output) {
  auto pointer = data_->response_time.Get();
  *output = ::mojo_base::mojom::TimeDataView(pointer, context_);
}
inline void CacheStorageCache_SetSideData_ParamsDataView::GetSideDataDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->side_data.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}




inline void CacheStorage_Has_ParamsDataView::GetCacheNameDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->cache_name.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}




inline void CacheStorage_Delete_ParamsDataView::GetCacheNameDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->cache_name.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}






inline void CacheStorage_Keys_ResponseParamsDataView::GetKeysDataView(
    mojo::ArrayDataView<::mojo_base::mojom::String16DataView>* output) {
  auto pointer = data_->keys.Get();
  *output = mojo::ArrayDataView<::mojo_base::mojom::String16DataView>(pointer, context_);
}


inline void CacheStorage_Match_ParamsDataView::GetRequestDataView(
    ::blink::mojom::FetchAPIRequestDataView* output) {
  auto pointer = data_->request.Get();
  *output = ::blink::mojom::FetchAPIRequestDataView(pointer, context_);
}
inline void CacheStorage_Match_ParamsDataView::GetMatchOptionsDataView(
    MultiCacheQueryOptionsDataView* output) {
  auto pointer = data_->match_options.Get();
  *output = MultiCacheQueryOptionsDataView(pointer, context_);
}


inline void CacheStorage_Match_ResponseParamsDataView::GetResultDataView(
    MatchResultDataView* output) {
  auto pointer = &data_->result;
  *output = MatchResultDataView(pointer, context_);
}


inline void CacheStorage_Open_ParamsDataView::GetCacheNameDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->cache_name.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}


inline void CacheStorage_Open_ResponseParamsDataView::GetResultDataView(
    OpenResultDataView* output) {
  auto pointer = &data_->result;
  *output = OpenResultDataView(pointer, context_);
}

}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_CACHE_STORAGE_CACHE_STORAGE_MOJOM_PARAMS_DATA_H_