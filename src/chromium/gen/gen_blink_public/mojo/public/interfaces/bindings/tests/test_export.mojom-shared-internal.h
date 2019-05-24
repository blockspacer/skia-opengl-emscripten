// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_EXPORT_MOJOM_SHARED_INTERNAL_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_EXPORT_MOJOM_SHARED_INTERNAL_H_

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
namespace mojo {
namespace test {
namespace test_export {
namespace internal {
class StringPair_Data;
class StringPairContainer_Data;

#pragma pack(push, 1)
class COMPONENT_EXPORT(MOJOM_SHARED_MOJO_TEST_EXPORT) StringPair_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(StringPair_Data));
      new (data()) StringPair_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    StringPair_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<StringPair_Data>(index_);
    }
    StringPair_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> s1;
  mojo::internal::Pointer<mojo::internal::String_Data> s2;

 private:
  StringPair_Data();
  ~StringPair_Data() = delete;
};
static_assert(sizeof(StringPair_Data) == 24,
              "Bad sizeof(StringPair_Data)");
// Used by StringPair::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct StringPair_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  StringPair_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~StringPair_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    StringPair_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    StringPair_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_MOJO_TEST_EXPORT) StringPairContainer_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(StringPairContainer_Data));
      new (data()) StringPairContainer_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    StringPairContainer_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<StringPairContainer_Data>(index_);
    }
    StringPairContainer_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::StringPair_Data>>> pairs;

 private:
  StringPairContainer_Data();
  ~StringPairContainer_Data() = delete;
};
static_assert(sizeof(StringPairContainer_Data) == 16,
              "Bad sizeof(StringPairContainer_Data)");
// Used by StringPairContainer::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct StringPairContainer_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  StringPairContainer_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~StringPairContainer_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    StringPairContainer_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    StringPairContainer_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace test_export
}  // namespace test
}  // namespace mojo

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_EXPORT_MOJOM_SHARED_INTERNAL_H_