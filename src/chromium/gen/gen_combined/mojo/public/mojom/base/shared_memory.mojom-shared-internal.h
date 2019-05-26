// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_MOJOM_BASE_SHARED_MEMORY_MOJOM_SHARED_INTERNAL_H_
#define MOJO_PUBLIC_MOJOM_BASE_SHARED_MEMORY_MOJOM_SHARED_INTERNAL_H_

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
class ReadOnlySharedMemoryRegion_Data;
class WritableSharedMemoryRegion_Data;
class UnsafeSharedMemoryRegion_Data;

#pragma pack(push, 1)
class COMPONENT_EXPORT(MOJO_BASE_MOJOM_SHARED) ReadOnlySharedMemoryRegion_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ReadOnlySharedMemoryRegion_Data));
      new (data()) ReadOnlySharedMemoryRegion_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ReadOnlySharedMemoryRegion_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ReadOnlySharedMemoryRegion_Data>(index_);
    }
    ReadOnlySharedMemoryRegion_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data buffer;
  uint8_t padfinal_[4];

 private:
  ReadOnlySharedMemoryRegion_Data();
  ~ReadOnlySharedMemoryRegion_Data() = delete;
};
static_assert(sizeof(ReadOnlySharedMemoryRegion_Data) == 16,
              "Bad sizeof(ReadOnlySharedMemoryRegion_Data)");
// Used by ReadOnlySharedMemoryRegion::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct ReadOnlySharedMemoryRegion_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  ReadOnlySharedMemoryRegion_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~ReadOnlySharedMemoryRegion_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    ReadOnlySharedMemoryRegion_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    ReadOnlySharedMemoryRegion_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJO_BASE_MOJOM_SHARED) WritableSharedMemoryRegion_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WritableSharedMemoryRegion_Data));
      new (data()) WritableSharedMemoryRegion_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WritableSharedMemoryRegion_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WritableSharedMemoryRegion_Data>(index_);
    }
    WritableSharedMemoryRegion_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data buffer;
  uint8_t padfinal_[4];

 private:
  WritableSharedMemoryRegion_Data();
  ~WritableSharedMemoryRegion_Data() = delete;
};
static_assert(sizeof(WritableSharedMemoryRegion_Data) == 16,
              "Bad sizeof(WritableSharedMemoryRegion_Data)");
// Used by WritableSharedMemoryRegion::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct WritableSharedMemoryRegion_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  WritableSharedMemoryRegion_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~WritableSharedMemoryRegion_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    WritableSharedMemoryRegion_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    WritableSharedMemoryRegion_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJO_BASE_MOJOM_SHARED) UnsafeSharedMemoryRegion_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(UnsafeSharedMemoryRegion_Data));
      new (data()) UnsafeSharedMemoryRegion_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    UnsafeSharedMemoryRegion_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<UnsafeSharedMemoryRegion_Data>(index_);
    }
    UnsafeSharedMemoryRegion_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data buffer;
  uint8_t padfinal_[4];

 private:
  UnsafeSharedMemoryRegion_Data();
  ~UnsafeSharedMemoryRegion_Data() = delete;
};
static_assert(sizeof(UnsafeSharedMemoryRegion_Data) == 16,
              "Bad sizeof(UnsafeSharedMemoryRegion_Data)");
// Used by UnsafeSharedMemoryRegion::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct UnsafeSharedMemoryRegion_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  UnsafeSharedMemoryRegion_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~UnsafeSharedMemoryRegion_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    UnsafeSharedMemoryRegion_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    UnsafeSharedMemoryRegion_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace mojo_base

#endif  // MOJO_PUBLIC_MOJOM_BASE_SHARED_MEMORY_MOJOM_SHARED_INTERNAL_H_