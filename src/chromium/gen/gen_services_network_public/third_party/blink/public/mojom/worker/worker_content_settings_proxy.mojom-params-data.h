// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_WORKER_CONTENT_SETTINGS_PROXY_MOJOM_PARAMS_DATA_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_WORKER_CONTENT_SETTINGS_PROXY_MOJOM_PARAMS_DATA_H_

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
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) WorkerContentSettingsProxy_AllowIndexedDB_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WorkerContentSettingsProxy_AllowIndexedDB_Params_Data));
      new (data()) WorkerContentSettingsProxy_AllowIndexedDB_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WorkerContentSettingsProxy_AllowIndexedDB_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WorkerContentSettingsProxy_AllowIndexedDB_Params_Data>(index_);
    }
    WorkerContentSettingsProxy_AllowIndexedDB_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  WorkerContentSettingsProxy_AllowIndexedDB_Params_Data();
  ~WorkerContentSettingsProxy_AllowIndexedDB_Params_Data() = delete;
};
static_assert(sizeof(WorkerContentSettingsProxy_AllowIndexedDB_Params_Data) == 8,
              "Bad sizeof(WorkerContentSettingsProxy_AllowIndexedDB_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) WorkerContentSettingsProxy_AllowIndexedDB_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WorkerContentSettingsProxy_AllowIndexedDB_ResponseParams_Data));
      new (data()) WorkerContentSettingsProxy_AllowIndexedDB_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WorkerContentSettingsProxy_AllowIndexedDB_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WorkerContentSettingsProxy_AllowIndexedDB_ResponseParams_Data>(index_);
    }
    WorkerContentSettingsProxy_AllowIndexedDB_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t result : 1;
  uint8_t padfinal_[7];

 private:
  WorkerContentSettingsProxy_AllowIndexedDB_ResponseParams_Data();
  ~WorkerContentSettingsProxy_AllowIndexedDB_ResponseParams_Data() = delete;
};
static_assert(sizeof(WorkerContentSettingsProxy_AllowIndexedDB_ResponseParams_Data) == 16,
              "Bad sizeof(WorkerContentSettingsProxy_AllowIndexedDB_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) WorkerContentSettingsProxy_AllowCacheStorage_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WorkerContentSettingsProxy_AllowCacheStorage_Params_Data));
      new (data()) WorkerContentSettingsProxy_AllowCacheStorage_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WorkerContentSettingsProxy_AllowCacheStorage_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WorkerContentSettingsProxy_AllowCacheStorage_Params_Data>(index_);
    }
    WorkerContentSettingsProxy_AllowCacheStorage_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  WorkerContentSettingsProxy_AllowCacheStorage_Params_Data();
  ~WorkerContentSettingsProxy_AllowCacheStorage_Params_Data() = delete;
};
static_assert(sizeof(WorkerContentSettingsProxy_AllowCacheStorage_Params_Data) == 8,
              "Bad sizeof(WorkerContentSettingsProxy_AllowCacheStorage_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) WorkerContentSettingsProxy_AllowCacheStorage_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WorkerContentSettingsProxy_AllowCacheStorage_ResponseParams_Data));
      new (data()) WorkerContentSettingsProxy_AllowCacheStorage_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WorkerContentSettingsProxy_AllowCacheStorage_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WorkerContentSettingsProxy_AllowCacheStorage_ResponseParams_Data>(index_);
    }
    WorkerContentSettingsProxy_AllowCacheStorage_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t result : 1;
  uint8_t padfinal_[7];

 private:
  WorkerContentSettingsProxy_AllowCacheStorage_ResponseParams_Data();
  ~WorkerContentSettingsProxy_AllowCacheStorage_ResponseParams_Data() = delete;
};
static_assert(sizeof(WorkerContentSettingsProxy_AllowCacheStorage_ResponseParams_Data) == 16,
              "Bad sizeof(WorkerContentSettingsProxy_AllowCacheStorage_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) WorkerContentSettingsProxy_RequestFileSystemAccessSync_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WorkerContentSettingsProxy_RequestFileSystemAccessSync_Params_Data));
      new (data()) WorkerContentSettingsProxy_RequestFileSystemAccessSync_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WorkerContentSettingsProxy_RequestFileSystemAccessSync_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WorkerContentSettingsProxy_RequestFileSystemAccessSync_Params_Data>(index_);
    }
    WorkerContentSettingsProxy_RequestFileSystemAccessSync_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  WorkerContentSettingsProxy_RequestFileSystemAccessSync_Params_Data();
  ~WorkerContentSettingsProxy_RequestFileSystemAccessSync_Params_Data() = delete;
};
static_assert(sizeof(WorkerContentSettingsProxy_RequestFileSystemAccessSync_Params_Data) == 8,
              "Bad sizeof(WorkerContentSettingsProxy_RequestFileSystemAccessSync_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) WorkerContentSettingsProxy_RequestFileSystemAccessSync_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WorkerContentSettingsProxy_RequestFileSystemAccessSync_ResponseParams_Data));
      new (data()) WorkerContentSettingsProxy_RequestFileSystemAccessSync_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WorkerContentSettingsProxy_RequestFileSystemAccessSync_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WorkerContentSettingsProxy_RequestFileSystemAccessSync_ResponseParams_Data>(index_);
    }
    WorkerContentSettingsProxy_RequestFileSystemAccessSync_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t result : 1;
  uint8_t padfinal_[7];

 private:
  WorkerContentSettingsProxy_RequestFileSystemAccessSync_ResponseParams_Data();
  ~WorkerContentSettingsProxy_RequestFileSystemAccessSync_ResponseParams_Data() = delete;
};
static_assert(sizeof(WorkerContentSettingsProxy_RequestFileSystemAccessSync_ResponseParams_Data) == 16,
              "Bad sizeof(WorkerContentSettingsProxy_RequestFileSystemAccessSync_ResponseParams_Data)");

}  // namespace internal
class WorkerContentSettingsProxy_AllowIndexedDB_ParamsDataView {
 public:
  WorkerContentSettingsProxy_AllowIndexedDB_ParamsDataView() {}

  WorkerContentSettingsProxy_AllowIndexedDB_ParamsDataView(
      internal::WorkerContentSettingsProxy_AllowIndexedDB_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::WorkerContentSettingsProxy_AllowIndexedDB_Params_Data* data_ = nullptr;
};

class WorkerContentSettingsProxy_AllowIndexedDB_ResponseParamsDataView {
 public:
  WorkerContentSettingsProxy_AllowIndexedDB_ResponseParamsDataView() {}

  WorkerContentSettingsProxy_AllowIndexedDB_ResponseParamsDataView(
      internal::WorkerContentSettingsProxy_AllowIndexedDB_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool result() const {
    return data_->result;
  }
 private:
  internal::WorkerContentSettingsProxy_AllowIndexedDB_ResponseParams_Data* data_ = nullptr;
};

class WorkerContentSettingsProxy_AllowCacheStorage_ParamsDataView {
 public:
  WorkerContentSettingsProxy_AllowCacheStorage_ParamsDataView() {}

  WorkerContentSettingsProxy_AllowCacheStorage_ParamsDataView(
      internal::WorkerContentSettingsProxy_AllowCacheStorage_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::WorkerContentSettingsProxy_AllowCacheStorage_Params_Data* data_ = nullptr;
};

class WorkerContentSettingsProxy_AllowCacheStorage_ResponseParamsDataView {
 public:
  WorkerContentSettingsProxy_AllowCacheStorage_ResponseParamsDataView() {}

  WorkerContentSettingsProxy_AllowCacheStorage_ResponseParamsDataView(
      internal::WorkerContentSettingsProxy_AllowCacheStorage_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool result() const {
    return data_->result;
  }
 private:
  internal::WorkerContentSettingsProxy_AllowCacheStorage_ResponseParams_Data* data_ = nullptr;
};

class WorkerContentSettingsProxy_RequestFileSystemAccessSync_ParamsDataView {
 public:
  WorkerContentSettingsProxy_RequestFileSystemAccessSync_ParamsDataView() {}

  WorkerContentSettingsProxy_RequestFileSystemAccessSync_ParamsDataView(
      internal::WorkerContentSettingsProxy_RequestFileSystemAccessSync_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::WorkerContentSettingsProxy_RequestFileSystemAccessSync_Params_Data* data_ = nullptr;
};

class WorkerContentSettingsProxy_RequestFileSystemAccessSync_ResponseParamsDataView {
 public:
  WorkerContentSettingsProxy_RequestFileSystemAccessSync_ResponseParamsDataView() {}

  WorkerContentSettingsProxy_RequestFileSystemAccessSync_ResponseParamsDataView(
      internal::WorkerContentSettingsProxy_RequestFileSystemAccessSync_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool result() const {
    return data_->result;
  }
 private:
  internal::WorkerContentSettingsProxy_RequestFileSystemAccessSync_ResponseParams_Data* data_ = nullptr;
};













}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_WORKER_CONTENT_SETTINGS_PROXY_MOJOM_PARAMS_DATA_H_