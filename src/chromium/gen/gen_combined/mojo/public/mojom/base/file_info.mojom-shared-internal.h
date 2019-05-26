// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_MOJOM_BASE_FILE_INFO_MOJOM_SHARED_INTERNAL_H_
#define MOJO_PUBLIC_MOJOM_BASE_FILE_INFO_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/mojom/base/time.mojom-shared-internal.h"
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
class FileInfo_Data;

#pragma pack(push, 1)
class COMPONENT_EXPORT(MOJO_BASE_MOJOM_SHARED) FileInfo_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FileInfo_Data));
      new (data()) FileInfo_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FileInfo_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FileInfo_Data>(index_);
    }
    FileInfo_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int64_t size;
  uint8_t is_directory : 1;
  uint8_t is_symbolic_link : 1;
  uint8_t pad2_[7];
  mojo::internal::Pointer<::mojo_base::mojom::internal::Time_Data> last_modified;
  mojo::internal::Pointer<::mojo_base::mojom::internal::Time_Data> last_accessed;
  mojo::internal::Pointer<::mojo_base::mojom::internal::Time_Data> creation_time;

 private:
  FileInfo_Data();
  ~FileInfo_Data() = delete;
};
static_assert(sizeof(FileInfo_Data) == 48,
              "Bad sizeof(FileInfo_Data)");
// Used by FileInfo::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct FileInfo_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  FileInfo_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~FileInfo_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    FileInfo_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    FileInfo_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace mojo_base

#endif  // MOJO_PUBLIC_MOJOM_BASE_FILE_INFO_MOJOM_SHARED_INTERNAL_H_