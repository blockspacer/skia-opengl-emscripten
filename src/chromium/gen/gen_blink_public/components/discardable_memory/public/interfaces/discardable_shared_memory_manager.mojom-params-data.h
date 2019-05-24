// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_DISCARDABLE_MEMORY_PUBLIC_INTERFACES_DISCARDABLE_SHARED_MEMORY_MANAGER_MOJOM_PARAMS_DATA_H_
#define COMPONENTS_DISCARDABLE_MEMORY_PUBLIC_INTERFACES_DISCARDABLE_SHARED_MEMORY_MANAGER_MOJOM_PARAMS_DATA_H_

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
namespace discardable_memory {
namespace mojom {
namespace internal {
class  DiscardableSharedMemoryManager_AllocateLockedDiscardableSharedMemory_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DiscardableSharedMemoryManager_AllocateLockedDiscardableSharedMemory_Params_Data));
      new (data()) DiscardableSharedMemoryManager_AllocateLockedDiscardableSharedMemory_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DiscardableSharedMemoryManager_AllocateLockedDiscardableSharedMemory_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DiscardableSharedMemoryManager_AllocateLockedDiscardableSharedMemory_Params_Data>(index_);
    }
    DiscardableSharedMemoryManager_AllocateLockedDiscardableSharedMemory_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t size;
  int32_t id;

 private:
  DiscardableSharedMemoryManager_AllocateLockedDiscardableSharedMemory_Params_Data();
  ~DiscardableSharedMemoryManager_AllocateLockedDiscardableSharedMemory_Params_Data() = delete;
};
static_assert(sizeof(DiscardableSharedMemoryManager_AllocateLockedDiscardableSharedMemory_Params_Data) == 16,
              "Bad sizeof(DiscardableSharedMemoryManager_AllocateLockedDiscardableSharedMemory_Params_Data)");
class  DiscardableSharedMemoryManager_AllocateLockedDiscardableSharedMemory_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DiscardableSharedMemoryManager_AllocateLockedDiscardableSharedMemory_ResponseParams_Data));
      new (data()) DiscardableSharedMemoryManager_AllocateLockedDiscardableSharedMemory_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DiscardableSharedMemoryManager_AllocateLockedDiscardableSharedMemory_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DiscardableSharedMemoryManager_AllocateLockedDiscardableSharedMemory_ResponseParams_Data>(index_);
    }
    DiscardableSharedMemoryManager_AllocateLockedDiscardableSharedMemory_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::UnsafeSharedMemoryRegion_Data> region;

 private:
  DiscardableSharedMemoryManager_AllocateLockedDiscardableSharedMemory_ResponseParams_Data();
  ~DiscardableSharedMemoryManager_AllocateLockedDiscardableSharedMemory_ResponseParams_Data() = delete;
};
static_assert(sizeof(DiscardableSharedMemoryManager_AllocateLockedDiscardableSharedMemory_ResponseParams_Data) == 16,
              "Bad sizeof(DiscardableSharedMemoryManager_AllocateLockedDiscardableSharedMemory_ResponseParams_Data)");
class  DiscardableSharedMemoryManager_DeletedDiscardableSharedMemory_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DiscardableSharedMemoryManager_DeletedDiscardableSharedMemory_Params_Data));
      new (data()) DiscardableSharedMemoryManager_DeletedDiscardableSharedMemory_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DiscardableSharedMemoryManager_DeletedDiscardableSharedMemory_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DiscardableSharedMemoryManager_DeletedDiscardableSharedMemory_Params_Data>(index_);
    }
    DiscardableSharedMemoryManager_DeletedDiscardableSharedMemory_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t id;
  uint8_t padfinal_[4];

 private:
  DiscardableSharedMemoryManager_DeletedDiscardableSharedMemory_Params_Data();
  ~DiscardableSharedMemoryManager_DeletedDiscardableSharedMemory_Params_Data() = delete;
};
static_assert(sizeof(DiscardableSharedMemoryManager_DeletedDiscardableSharedMemory_Params_Data) == 16,
              "Bad sizeof(DiscardableSharedMemoryManager_DeletedDiscardableSharedMemory_Params_Data)");

}  // namespace internal
class DiscardableSharedMemoryManager_AllocateLockedDiscardableSharedMemory_ParamsDataView {
 public:
  DiscardableSharedMemoryManager_AllocateLockedDiscardableSharedMemory_ParamsDataView() {}

  DiscardableSharedMemoryManager_AllocateLockedDiscardableSharedMemory_ParamsDataView(
      internal::DiscardableSharedMemoryManager_AllocateLockedDiscardableSharedMemory_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t size() const {
    return data_->size;
  }
  int32_t id() const {
    return data_->id;
  }
 private:
  internal::DiscardableSharedMemoryManager_AllocateLockedDiscardableSharedMemory_Params_Data* data_ = nullptr;
};

class DiscardableSharedMemoryManager_AllocateLockedDiscardableSharedMemory_ResponseParamsDataView {
 public:
  DiscardableSharedMemoryManager_AllocateLockedDiscardableSharedMemory_ResponseParamsDataView() {}

  DiscardableSharedMemoryManager_AllocateLockedDiscardableSharedMemory_ResponseParamsDataView(
      internal::DiscardableSharedMemoryManager_AllocateLockedDiscardableSharedMemory_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetRegionDataView(
      ::mojo_base::mojom::UnsafeSharedMemoryRegionDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRegion(UserType* output) {
    auto* pointer = data_->region.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::UnsafeSharedMemoryRegionDataView>(
        pointer, output, context_);
  }
 private:
  internal::DiscardableSharedMemoryManager_AllocateLockedDiscardableSharedMemory_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class DiscardableSharedMemoryManager_DeletedDiscardableSharedMemory_ParamsDataView {
 public:
  DiscardableSharedMemoryManager_DeletedDiscardableSharedMemory_ParamsDataView() {}

  DiscardableSharedMemoryManager_DeletedDiscardableSharedMemory_ParamsDataView(
      internal::DiscardableSharedMemoryManager_DeletedDiscardableSharedMemory_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t id() const {
    return data_->id;
  }
 private:
  internal::DiscardableSharedMemoryManager_DeletedDiscardableSharedMemory_Params_Data* data_ = nullptr;
};




inline void DiscardableSharedMemoryManager_AllocateLockedDiscardableSharedMemory_ResponseParamsDataView::GetRegionDataView(
    ::mojo_base::mojom::UnsafeSharedMemoryRegionDataView* output) {
  auto pointer = data_->region.Get();
  *output = ::mojo_base::mojom::UnsafeSharedMemoryRegionDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace discardable_memory

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // COMPONENTS_DISCARDABLE_MEMORY_PUBLIC_INTERFACES_DISCARDABLE_SHARED_MEMORY_MANAGER_MOJOM_PARAMS_DATA_H_