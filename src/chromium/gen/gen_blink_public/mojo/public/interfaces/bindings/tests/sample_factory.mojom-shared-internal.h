// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_SAMPLE_FACTORY_MOJOM_SHARED_INTERNAL_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_SAMPLE_FACTORY_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/interfaces/bindings/tests/sample_import.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"



namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace sample {
namespace internal {
class Request_Data;
class Response_Data;

#pragma pack(push, 1)
class  Request_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Request_Data));
      new (data()) Request_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Request_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Request_Data>(index_);
    }
    Request_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t x;
  mojo::internal::Handle_Data pipe;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Handle_Data>> more_pipes;
  mojo::internal::Interface_Data obj;

 private:
  Request_Data();
  ~Request_Data() = delete;
};
static_assert(sizeof(Request_Data) == 32,
              "Bad sizeof(Request_Data)");
// Used by Request::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct Request_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  Request_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~Request_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    Request_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    Request_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  Response_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Response_Data));
      new (data()) Response_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Response_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Response_Data>(index_);
    }
    Response_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t x;
  mojo::internal::Handle_Data pipe;

 private:
  Response_Data();
  ~Response_Data() = delete;
};
static_assert(sizeof(Response_Data) == 16,
              "Bad sizeof(Response_Data)");
// Used by Response::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct Response_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  Response_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~Response_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    Response_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    Response_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace sample

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_SAMPLE_FACTORY_MOJOM_SHARED_INTERNAL_H_