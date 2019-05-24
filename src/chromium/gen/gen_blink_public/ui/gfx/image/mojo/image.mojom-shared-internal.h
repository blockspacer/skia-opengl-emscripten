// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_GFX_IMAGE_MOJO_IMAGE_MOJOM_SHARED_INTERNAL_H_
#define UI_GFX_IMAGE_MOJO_IMAGE_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "skia/public/interfaces/bitmap.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"



namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace gfx {
namespace mojom {
namespace internal {
class ImageSkiaRep_Data;
class ImageSkia_Data;

#pragma pack(push, 1)
class  ImageSkiaRep_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ImageSkiaRep_Data));
      new (data()) ImageSkiaRep_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ImageSkiaRep_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ImageSkiaRep_Data>(index_);
    }
    ImageSkiaRep_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::skia::mojom::internal::Bitmap_Data> bitmap;
  float scale;
  uint8_t padfinal_[4];

 private:
  ImageSkiaRep_Data();
  ~ImageSkiaRep_Data() = delete;
};
static_assert(sizeof(ImageSkiaRep_Data) == 24,
              "Bad sizeof(ImageSkiaRep_Data)");
// Used by ImageSkiaRep::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct ImageSkiaRep_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  ImageSkiaRep_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~ImageSkiaRep_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    ImageSkiaRep_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    ImageSkiaRep_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  ImageSkia_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ImageSkia_Data));
      new (data()) ImageSkia_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ImageSkia_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ImageSkia_Data>(index_);
    }
    ImageSkia_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::ImageSkiaRep_Data>>> image_reps;

 private:
  ImageSkia_Data();
  ~ImageSkia_Data() = delete;
};
static_assert(sizeof(ImageSkia_Data) == 16,
              "Bad sizeof(ImageSkia_Data)");
// Used by ImageSkia::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct ImageSkia_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  ImageSkia_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~ImageSkia_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    ImageSkia_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    ImageSkia_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace gfx

#endif  // UI_GFX_IMAGE_MOJO_IMAGE_MOJOM_SHARED_INTERNAL_H_