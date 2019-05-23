// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_MOJOM_BASE_MEMORY_ALLOCATOR_DUMP_CROSS_PROCESS_UID_MOJOM_SHARED_INTERNAL_H_
#define MOJO_PUBLIC_MOJOM_BASE_MEMORY_ALLOCATOR_DUMP_CROSS_PROCESS_UID_MOJOM_SHARED_INTERNAL_H_

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
class MemoryAllocatorDumpCrossProcessUid_Data;

#pragma pack(push, 1)
class COMPONENT_EXPORT(MOJO_BASE_MOJOM_SHARED) MemoryAllocatorDumpCrossProcessUid_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MemoryAllocatorDumpCrossProcessUid_Data));
      new (data()) MemoryAllocatorDumpCrossProcessUid_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MemoryAllocatorDumpCrossProcessUid_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MemoryAllocatorDumpCrossProcessUid_Data>(index_);
    }
    MemoryAllocatorDumpCrossProcessUid_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t value;

 private:
  MemoryAllocatorDumpCrossProcessUid_Data();
  ~MemoryAllocatorDumpCrossProcessUid_Data() = delete;
};
static_assert(sizeof(MemoryAllocatorDumpCrossProcessUid_Data) == 16,
              "Bad sizeof(MemoryAllocatorDumpCrossProcessUid_Data)");
// Used by MemoryAllocatorDumpCrossProcessUid::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct MemoryAllocatorDumpCrossProcessUid_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  MemoryAllocatorDumpCrossProcessUid_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~MemoryAllocatorDumpCrossProcessUid_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    MemoryAllocatorDumpCrossProcessUid_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    MemoryAllocatorDumpCrossProcessUid_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace mojo_base

#endif  // MOJO_PUBLIC_MOJOM_BASE_MEMORY_ALLOCATOR_DUMP_CROSS_PROCESS_UID_MOJOM_SHARED_INTERNAL_H_