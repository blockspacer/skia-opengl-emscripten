// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_RECT_MOJOM_SHARED_INTERNAL_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_RECT_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"



namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace mojo {
namespace test {
namespace internal {
class Rect_Data;
class TypemappedRect_Data;
class SharedTypemappedRect_Data;

#pragma pack(push, 1)
class  Rect_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Rect_Data));
      new (data()) Rect_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Rect_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Rect_Data>(index_);
    }
    Rect_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t x;
  int32_t y;
  int32_t width;
  int32_t height;

 private:
  Rect_Data();
  ~Rect_Data() = delete;
};
static_assert(sizeof(Rect_Data) == 24,
              "Bad sizeof(Rect_Data)");
// Used by Rect::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct Rect_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  Rect_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~Rect_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    Rect_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    Rect_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  TypemappedRect_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TypemappedRect_Data));
      new (data()) TypemappedRect_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TypemappedRect_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TypemappedRect_Data>(index_);
    }
    TypemappedRect_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t x;
  int32_t y;
  int32_t width;
  int32_t height;

 private:
  TypemappedRect_Data();
  ~TypemappedRect_Data() = delete;
};
static_assert(sizeof(TypemappedRect_Data) == 24,
              "Bad sizeof(TypemappedRect_Data)");
// Used by TypemappedRect::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct TypemappedRect_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  TypemappedRect_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~TypemappedRect_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    TypemappedRect_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    TypemappedRect_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  SharedTypemappedRect_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SharedTypemappedRect_Data));
      new (data()) SharedTypemappedRect_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SharedTypemappedRect_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SharedTypemappedRect_Data>(index_);
    }
    SharedTypemappedRect_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t x;
  int32_t y;
  int32_t width;
  int32_t height;

 private:
  SharedTypemappedRect_Data();
  ~SharedTypemappedRect_Data() = delete;
};
static_assert(sizeof(SharedTypemappedRect_Data) == 24,
              "Bad sizeof(SharedTypemappedRect_Data)");
// Used by SharedTypemappedRect::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct SharedTypemappedRect_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  SharedTypemappedRect_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~SharedTypemappedRect_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    SharedTypemappedRect_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    SharedTypemappedRect_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace test
}  // namespace mojo

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_RECT_MOJOM_SHARED_INTERNAL_H_