// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SKIA_PUBLIC_INTERFACES_BITMAP_MOJOM_SHARED_INTERNAL_H_
#define SKIA_PUBLIC_INTERFACES_BITMAP_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/mojom/base/big_buffer.mojom-shared-internal.h"
#include "skia/public/interfaces/image_info.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"



namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace skia {
namespace mojom {
namespace internal {
class Bitmap_Data;
class InlineBitmap_Data;

#pragma pack(push, 1)
class  Bitmap_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Bitmap_Data));
      new (data()) Bitmap_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Bitmap_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Bitmap_Data>(index_);
    }
    Bitmap_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::skia::mojom::internal::ImageInfo_Data> image_info;
  uint64_t row_bytes;
  ::mojo_base::mojom::internal::BigBuffer_Data pixel_data;

 private:
  Bitmap_Data();
  ~Bitmap_Data() = delete;
};
static_assert(sizeof(Bitmap_Data) == 40,
              "Bad sizeof(Bitmap_Data)");
// Used by Bitmap::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct Bitmap_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  Bitmap_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~Bitmap_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    Bitmap_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    Bitmap_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  InlineBitmap_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(InlineBitmap_Data));
      new (data()) InlineBitmap_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    InlineBitmap_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<InlineBitmap_Data>(index_);
    }
    InlineBitmap_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::skia::mojom::internal::ImageInfo_Data> image_info;
  uint64_t row_bytes;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> pixel_data;

 private:
  InlineBitmap_Data();
  ~InlineBitmap_Data() = delete;
};
static_assert(sizeof(InlineBitmap_Data) == 32,
              "Bad sizeof(InlineBitmap_Data)");
// Used by InlineBitmap::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct InlineBitmap_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  InlineBitmap_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~InlineBitmap_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    InlineBitmap_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    InlineBitmap_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace skia

#endif  // SKIA_PUBLIC_INTERFACES_BITMAP_MOJOM_SHARED_INTERNAL_H_