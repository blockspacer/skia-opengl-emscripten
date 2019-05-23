// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_DOM_STORAGE_STORAGE_PARTITION_SERVICE_MOJOM_PARAMS_DATA_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_DOM_STORAGE_STORAGE_PARTITION_SERVICE_MOJOM_PARAMS_DATA_H_

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
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) StoragePartitionService_OpenLocalStorage_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(StoragePartitionService_OpenLocalStorage_Params_Data));
      new (data()) StoragePartitionService_OpenLocalStorage_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    StoragePartitionService_OpenLocalStorage_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<StoragePartitionService_OpenLocalStorage_Params_Data>(index_);
    }
    StoragePartitionService_OpenLocalStorage_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Origin_Data> origin;
  mojo::internal::Handle_Data area;
  uint8_t padfinal_[4];

 private:
  StoragePartitionService_OpenLocalStorage_Params_Data();
  ~StoragePartitionService_OpenLocalStorage_Params_Data() = delete;
};
static_assert(sizeof(StoragePartitionService_OpenLocalStorage_Params_Data) == 24,
              "Bad sizeof(StoragePartitionService_OpenLocalStorage_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) StoragePartitionService_OpenSessionStorage_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(StoragePartitionService_OpenSessionStorage_Params_Data));
      new (data()) StoragePartitionService_OpenSessionStorage_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    StoragePartitionService_OpenSessionStorage_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<StoragePartitionService_OpenSessionStorage_Params_Data>(index_);
    }
    StoragePartitionService_OpenSessionStorage_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> namespace_id;
  mojo::internal::Handle_Data session_namespace;
  uint8_t padfinal_[4];

 private:
  StoragePartitionService_OpenSessionStorage_Params_Data();
  ~StoragePartitionService_OpenSessionStorage_Params_Data() = delete;
};
static_assert(sizeof(StoragePartitionService_OpenSessionStorage_Params_Data) == 24,
              "Bad sizeof(StoragePartitionService_OpenSessionStorage_Params_Data)");

}  // namespace internal
class StoragePartitionService_OpenLocalStorage_ParamsDataView {
 public:
  StoragePartitionService_OpenLocalStorage_ParamsDataView() {}

  StoragePartitionService_OpenLocalStorage_ParamsDataView(
      internal::StoragePartitionService_OpenLocalStorage_Params_Data* data,
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
  UserType TakeArea() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::StorageAreaRequestDataView>(
            &data_->area, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::StoragePartitionService_OpenLocalStorage_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class StoragePartitionService_OpenSessionStorage_ParamsDataView {
 public:
  StoragePartitionService_OpenSessionStorage_ParamsDataView() {}

  StoragePartitionService_OpenSessionStorage_ParamsDataView(
      internal::StoragePartitionService_OpenSessionStorage_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetNamespaceIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadNamespaceId(UserType* output) {
    auto* pointer = data_->namespace_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeSessionNamespace() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::SessionStorageNamespaceRequestDataView>(
            &data_->session_namespace, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::StoragePartitionService_OpenSessionStorage_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void StoragePartitionService_OpenLocalStorage_ParamsDataView::GetOriginDataView(
    ::url::mojom::OriginDataView* output) {
  auto pointer = data_->origin.Get();
  *output = ::url::mojom::OriginDataView(pointer, context_);
}


inline void StoragePartitionService_OpenSessionStorage_ParamsDataView::GetNamespaceIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->namespace_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}

}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_DOM_STORAGE_STORAGE_PARTITION_SERVICE_MOJOM_PARAMS_DATA_H_