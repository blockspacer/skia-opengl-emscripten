// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_NATIVE_FILE_SYSTEM_NATIVE_FILE_SYSTEM_DIRECTORY_HANDLE_MOJOM_SHARED_INTERNAL_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_NATIVE_FILE_SYSTEM_NATIVE_FILE_SYSTEM_DIRECTORY_HANDLE_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "third_party/blink/public/mojom/native_file_system/native_file_system_file_handle.mojom-shared-internal.h"
#include "third_party/blink/public/mojom/native_file_system/native_file_system_error.mojom-shared-internal.h"
#include "third_party/blink/public/mojom/native_file_system/native_file_system_transfer_token.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"
#include "base/component_export.h"



namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace blink {
namespace mojom {
namespace internal {
class NativeFileSystemEntry_Data;
class NativeFileSystemHandle_Data;

#pragma pack(push, 1)


class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) NativeFileSystemHandle_Data {
 public:
  // Used to identify Mojom Union Data Classes.
  typedef void MojomUnionDataType;

  NativeFileSystemHandle_Data() {}
  // Do nothing in the destructor since it won't be called when it is a
  // non-inlined union.
  ~NativeFileSystemHandle_Data() {}

  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NativeFileSystemHandle_Data));
      new (data()) NativeFileSystemHandle_Data();
    }

    void AllocateInline(mojo::internal::Buffer* serialization_buffer,
                        void* ptr) {
      const char* start = static_cast<const char*>(
          serialization_buffer->data());
      const char* slot = static_cast<const char*>(ptr);
      DCHECK_GT(slot, start);
      serialization_buffer_ = serialization_buffer;
      index_ = slot - start;
      new (data()) NativeFileSystemHandle_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NativeFileSystemHandle_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NativeFileSystemHandle_Data>(index_);
    }
    NativeFileSystemHandle_Data* operator->() { return data(); }

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
    tag = static_cast<NativeFileSystemHandle_Tag>(0);
    data.unknown = 0U;
  }

  enum class NativeFileSystemHandle_Tag : uint32_t {

    
    FILE,
    
    DIRECTORY,
  };

  // A note on layout:
  // "Each non-static data member is allocated as if it were the sole member of
  // a struct." - Section 9.5.2 ISO/IEC 14882:2011 (The C++ Spec)
  union MOJO_ALIGNAS(8) Union_ {
    Union_() : unknown(0) {}
    mojo::internal::Interface_Data f_file;
    mojo::internal::Interface_Data f_directory;
    uint64_t unknown;
  };

  uint32_t size;
  NativeFileSystemHandle_Tag tag;
  Union_ data;
};
static_assert(sizeof(NativeFileSystemHandle_Data) == mojo::internal::kUnionDataSize,
              "Bad sizeof(NativeFileSystemHandle_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) NativeFileSystemEntry_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NativeFileSystemEntry_Data));
      new (data()) NativeFileSystemEntry_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NativeFileSystemEntry_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NativeFileSystemEntry_Data>(index_);
    }
    NativeFileSystemEntry_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  internal::NativeFileSystemHandle_Data entry_handle;
  mojo::internal::Pointer<mojo::internal::String_Data> name;

 private:
  NativeFileSystemEntry_Data();
  ~NativeFileSystemEntry_Data() = delete;
};
static_assert(sizeof(NativeFileSystemEntry_Data) == 32,
              "Bad sizeof(NativeFileSystemEntry_Data)");
// Used by NativeFileSystemEntry::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct NativeFileSystemEntry_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  NativeFileSystemEntry_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~NativeFileSystemEntry_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    NativeFileSystemEntry_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    NativeFileSystemEntry_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_NATIVE_FILE_SYSTEM_NATIVE_FILE_SYSTEM_DIRECTORY_HANDLE_MOJOM_SHARED_INTERNAL_H_