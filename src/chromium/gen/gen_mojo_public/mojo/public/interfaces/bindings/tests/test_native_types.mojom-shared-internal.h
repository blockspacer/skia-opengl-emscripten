// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_NATIVE_TYPES_MOJOM_SHARED_INTERNAL_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_NATIVE_TYPES_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/interfaces/bindings/tests/rect.mojom-shared-internal.h"
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
using PickledStruct_Data = mojo::native::internal::NativeStruct_Data;
class PickleContainer_Data;
using TestNativeStructMojom_Data = mojo::native::internal::NativeStruct_Data;
using TestNativeStructWithAttachmentsMojom_Data = mojo::native::internal::NativeStruct_Data;
using PickledEnum_Data =
    mojo::internal::NativeEnum_Data;

#pragma pack(push, 1)
class  PickleContainer_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PickleContainer_Data));
      new (data()) PickleContainer_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PickleContainer_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PickleContainer_Data>(index_);
    }
    PickleContainer_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::PickledStruct_Data> f_struct;
  int32_t f_enum;
  uint8_t padfinal_[4];

 private:
  PickleContainer_Data();
  ~PickleContainer_Data() = delete;
};
static_assert(sizeof(PickleContainer_Data) == 24,
              "Bad sizeof(PickleContainer_Data)");
// Used by PickleContainer::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct PickleContainer_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  PickleContainer_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~PickleContainer_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    PickleContainer_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    PickleContainer_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace test
}  // namespace mojo

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_NATIVE_TYPES_MOJOM_SHARED_INTERNAL_H_