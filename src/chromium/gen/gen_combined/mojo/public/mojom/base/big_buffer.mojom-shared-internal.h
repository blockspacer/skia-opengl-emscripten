// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_MOJOM_BASE_BIG_BUFFER_MOJOM_SHARED_INTERNAL_H_
#define MOJO_PUBLIC_MOJOM_BASE_BIG_BUFFER_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"
#include "base/component_export.h"



namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace mojo_base {
namespace mojom {
namespace internal {
class BigBufferSharedMemoryRegion_Data;
class BigBuffer_Data;

#pragma pack(push, 1)


class COMPONENT_EXPORT(MOJO_BASE_MOJOM_SHARED) BigBuffer_Data {
 public:
  // Used to identify Mojom Union Data Classes.
  typedef void MojomUnionDataType;

  BigBuffer_Data() {}
  // Do nothing in the destructor since it won't be called when it is a
  // non-inlined union.
  ~BigBuffer_Data() {}

  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BigBuffer_Data));
      new (data()) BigBuffer_Data();
    }

    void AllocateInline(mojo::internal::Buffer* serialization_buffer,
                        void* ptr) {
      const char* start = static_cast<const char*>(
          serialization_buffer->data());
      const char* slot = static_cast<const char*>(ptr);
      DCHECK_GT(slot, start);
      serialization_buffer_ = serialization_buffer;
      index_ = slot - start;
      new (data()) BigBuffer_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BigBuffer_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BigBuffer_Data>(index_);
    }
    BigBuffer_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context,
                       bool inlined);

  bool is_null() const { return size == 0; }

  void set_null() {
    size = 0U;
    tag = static_cast<BigBuffer_Tag>(0);
    data.unknown = 0U;
  }

  enum class BigBuffer_Tag : uint32_t {

    
    BYTES,
    
    SHARED_MEMORY,
    
    INVALID_BUFFER,
  };

  // A note on layout:
  // "Each non-static data member is allocated as if it were the sole member of
  // a struct." - Section 9.5.2 ISO/IEC 14882:2011 (The C++ Spec)
  union MOJO_ALIGNAS(8) Union_ {
    Union_() : unknown(0) {}
    mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> f_bytes;
    mojo::internal::Pointer<internal::BigBufferSharedMemoryRegion_Data> f_shared_memory;
    uint8_t f_invalid_buffer : 1;
    uint64_t unknown;
  };

  uint32_t size;
  BigBuffer_Tag tag;
  Union_ data;
};
static_assert(sizeof(BigBuffer_Data) == mojo::internal::kUnionDataSize,
              "Bad sizeof(BigBuffer_Data)");
class COMPONENT_EXPORT(MOJO_BASE_MOJOM_SHARED) BigBufferSharedMemoryRegion_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BigBufferSharedMemoryRegion_Data));
      new (data()) BigBufferSharedMemoryRegion_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BigBufferSharedMemoryRegion_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BigBufferSharedMemoryRegion_Data>(index_);
    }
    BigBufferSharedMemoryRegion_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data buffer_handle;
  uint32_t size;

 private:
  BigBufferSharedMemoryRegion_Data();
  ~BigBufferSharedMemoryRegion_Data() = delete;
};
static_assert(sizeof(BigBufferSharedMemoryRegion_Data) == 16,
              "Bad sizeof(BigBufferSharedMemoryRegion_Data)");
// Used by BigBufferSharedMemoryRegion::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct BigBufferSharedMemoryRegion_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  BigBufferSharedMemoryRegion_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~BigBufferSharedMemoryRegion_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    BigBufferSharedMemoryRegion_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    BigBufferSharedMemoryRegion_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace mojo_base

#endif  // MOJO_PUBLIC_MOJOM_BASE_BIG_BUFFER_MOJOM_SHARED_INTERNAL_H_