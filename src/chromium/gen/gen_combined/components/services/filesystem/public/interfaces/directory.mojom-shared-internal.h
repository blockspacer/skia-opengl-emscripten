// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_SERVICES_FILESYSTEM_PUBLIC_INTERFACES_DIRECTORY_MOJOM_SHARED_INTERNAL_H_
#define COMPONENTS_SERVICES_FILESYSTEM_PUBLIC_INTERFACES_DIRECTORY_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "components/services/filesystem/public/interfaces/file.mojom-shared-internal.h"
#include "components/services/filesystem/public/interfaces/types.mojom-shared-internal.h"
#include "mojo/public/mojom/base/file.mojom-shared-internal.h"
#include "mojo/public/mojom/base/file_error.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"



namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace filesystem {
namespace mojom {
namespace internal {
class FileOpenDetails_Data;
class FileOpenResult_Data;

#pragma pack(push, 1)
class  FileOpenDetails_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FileOpenDetails_Data));
      new (data()) FileOpenDetails_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FileOpenDetails_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FileOpenDetails_Data>(index_);
    }
    FileOpenDetails_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> path;
  uint32_t open_flags;
  uint8_t padfinal_[4];

 private:
  FileOpenDetails_Data();
  ~FileOpenDetails_Data() = delete;
};
static_assert(sizeof(FileOpenDetails_Data) == 24,
              "Bad sizeof(FileOpenDetails_Data)");
// Used by FileOpenDetails::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct FileOpenDetails_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  FileOpenDetails_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~FileOpenDetails_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    FileOpenDetails_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    FileOpenDetails_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  FileOpenResult_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FileOpenResult_Data));
      new (data()) FileOpenResult_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FileOpenResult_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FileOpenResult_Data>(index_);
    }
    FileOpenResult_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> path;
  int32_t error;
  uint8_t pad1_[4];
  mojo::internal::Pointer<::mojo_base::mojom::internal::File_Data> file_handle;

 private:
  FileOpenResult_Data();
  ~FileOpenResult_Data() = delete;
};
static_assert(sizeof(FileOpenResult_Data) == 32,
              "Bad sizeof(FileOpenResult_Data)");
// Used by FileOpenResult::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct FileOpenResult_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  FileOpenResult_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~FileOpenResult_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    FileOpenResult_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    FileOpenResult_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace filesystem

#endif  // COMPONENTS_SERVICES_FILESYSTEM_PUBLIC_INTERFACES_DIRECTORY_MOJOM_SHARED_INTERNAL_H_