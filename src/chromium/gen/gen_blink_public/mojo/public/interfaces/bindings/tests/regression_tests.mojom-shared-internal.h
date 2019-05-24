// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_REGRESSION_TESTS_MOJOM_SHARED_INTERNAL_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_REGRESSION_TESTS_MOJOM_SHARED_INTERNAL_H_

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
namespace regression_tests {
namespace internal {
class Edge_Data;
class Vertex_Data;
class EmptyStruct_Data;
class A_Data;
class B_Data;
class HandlesNameCollisionStruct_Data;
class HandlesHandleNameCollisionStruct_Data;
class HandlesUnionNameCollisionStruct_Data;
class HandlesNameCollisionUnion_Data;

struct EnumWithReference_Data {
 public:
  static bool constexpr kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 30:
        return true;
    }
    return false;
  }

  static bool Validate(int32_t value,
                       mojo::internal::ValidationContext* validation_context) {
    if (kIsExtensible || IsKnownValue(value))
      return true;

    ReportValidationError(validation_context,
                          mojo::internal::VALIDATION_ERROR_UNKNOWN_ENUM_VALUE);
    return false;
  }
};

struct EnumWithLowercase_Data {
 public:
  static bool constexpr kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
        return true;
    }
    return false;
  }

  static bool Validate(int32_t value,
                       mojo::internal::ValidationContext* validation_context) {
    if (kIsExtensible || IsKnownValue(value))
      return true;

    ReportValidationError(validation_context,
                          mojo::internal::VALIDATION_ERROR_UNKNOWN_ENUM_VALUE);
    return false;
  }
};

struct EnumWithNumbers_Data {
 public:
  static bool constexpr kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 4:
        return true;
    }
    return false;
  }

  static bool Validate(int32_t value,
                       mojo::internal::ValidationContext* validation_context) {
    if (kIsExtensible || IsKnownValue(value))
      return true;

    ReportValidationError(validation_context,
                          mojo::internal::VALIDATION_ERROR_UNKNOWN_ENUM_VALUE);
    return false;
  }
};

struct EnumWithK_Data {
 public:
  static bool constexpr kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
        return true;
    }
    return false;
  }

  static bool Validate(int32_t value,
                       mojo::internal::ValidationContext* validation_context) {
    if (kIsExtensible || IsKnownValue(value))
      return true;

    ReportValidationError(validation_context,
                          mojo::internal::VALIDATION_ERROR_UNKNOWN_ENUM_VALUE);
    return false;
  }
};

#pragma pack(push, 1)


class  HandlesNameCollisionUnion_Data {
 public:
  // Used to identify Mojom Union Data Classes.
  typedef void MojomUnionDataType;

  HandlesNameCollisionUnion_Data() {}
  // Do nothing in the destructor since it won't be called when it is a
  // non-inlined union.
  ~HandlesNameCollisionUnion_Data() {}

  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(HandlesNameCollisionUnion_Data));
      new (data()) HandlesNameCollisionUnion_Data();
    }

    void AllocateInline(mojo::internal::Buffer* serialization_buffer,
                        void* ptr) {
      const char* start = static_cast<const char*>(
          serialization_buffer->data());
      const char* slot = static_cast<const char*>(ptr);
      DCHECK_GT(slot, start);
      serialization_buffer_ = serialization_buffer;
      index_ = slot - start;
      new (data()) HandlesNameCollisionUnion_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    HandlesNameCollisionUnion_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<HandlesNameCollisionUnion_Data>(index_);
    }
    HandlesNameCollisionUnion_Data* operator->() { return data(); }

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
    tag = static_cast<HandlesNameCollisionUnion_Tag>(0);
    data.unknown = 0U;
  }

  enum class HandlesNameCollisionUnion_Tag : uint32_t {

    
    HANDLES,
  };

  // A note on layout:
  // "Each non-static data member is allocated as if it were the sole member of
  // a struct." - Section 9.5.2 ISO/IEC 14882:2011 (The C++ Spec)
  union MOJO_ALIGNAS(8) Union_ {
    Union_() : unknown(0) {}
    int32_t f_handles;
    uint64_t unknown;
  };

  uint32_t size;
  HandlesNameCollisionUnion_Tag tag;
  Union_ data;
};
static_assert(sizeof(HandlesNameCollisionUnion_Data) == mojo::internal::kUnionDataSize,
              "Bad sizeof(HandlesNameCollisionUnion_Data)");
class  Edge_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Edge_Data));
      new (data()) Edge_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Edge_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Edge_Data>(index_);
    }
    Edge_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::Vertex_Data> v;

 private:
  Edge_Data();
  ~Edge_Data() = delete;
};
static_assert(sizeof(Edge_Data) == 16,
              "Bad sizeof(Edge_Data)");
// Used by Edge::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct Edge_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  Edge_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~Edge_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    Edge_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    Edge_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  Vertex_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Vertex_Data));
      new (data()) Vertex_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Vertex_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Vertex_Data>(index_);
    }
    Vertex_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::EmptyStruct_Data> e;

 private:
  Vertex_Data();
  ~Vertex_Data() = delete;
};
static_assert(sizeof(Vertex_Data) == 16,
              "Bad sizeof(Vertex_Data)");
// Used by Vertex::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct Vertex_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  Vertex_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~Vertex_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    Vertex_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    Vertex_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  EmptyStruct_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(EmptyStruct_Data));
      new (data()) EmptyStruct_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    EmptyStruct_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<EmptyStruct_Data>(index_);
    }
    EmptyStruct_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  EmptyStruct_Data();
  ~EmptyStruct_Data() = delete;
};
static_assert(sizeof(EmptyStruct_Data) == 8,
              "Bad sizeof(EmptyStruct_Data)");
// Used by EmptyStruct::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct EmptyStruct_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  EmptyStruct_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~EmptyStruct_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    EmptyStruct_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    EmptyStruct_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  A_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(A_Data));
      new (data()) A_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    A_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<A_Data>(index_);
    }
    A_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::B_Data> b;

 private:
  A_Data();
  ~A_Data() = delete;
};
static_assert(sizeof(A_Data) == 16,
              "Bad sizeof(A_Data)");
// Used by A::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct A_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  A_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~A_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    A_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    A_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  B_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(B_Data));
      new (data()) B_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    B_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<B_Data>(index_);
    }
    B_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::A_Data> a;

 private:
  B_Data();
  ~B_Data() = delete;
};
static_assert(sizeof(B_Data) == 16,
              "Bad sizeof(B_Data)");
// Used by B::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct B_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  B_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~B_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    B_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    B_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  HandlesNameCollisionStruct_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(HandlesNameCollisionStruct_Data));
      new (data()) HandlesNameCollisionStruct_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    HandlesNameCollisionStruct_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<HandlesNameCollisionStruct_Data>(index_);
    }
    HandlesNameCollisionStruct_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::EmptyStruct_Data> handles;

 private:
  HandlesNameCollisionStruct_Data();
  ~HandlesNameCollisionStruct_Data() = delete;
};
static_assert(sizeof(HandlesNameCollisionStruct_Data) == 16,
              "Bad sizeof(HandlesNameCollisionStruct_Data)");
// Used by HandlesNameCollisionStruct::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct HandlesNameCollisionStruct_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  HandlesNameCollisionStruct_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~HandlesNameCollisionStruct_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    HandlesNameCollisionStruct_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    HandlesNameCollisionStruct_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  HandlesHandleNameCollisionStruct_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(HandlesHandleNameCollisionStruct_Data));
      new (data()) HandlesHandleNameCollisionStruct_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    HandlesHandleNameCollisionStruct_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<HandlesHandleNameCollisionStruct_Data>(index_);
    }
    HandlesHandleNameCollisionStruct_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data handles;
  uint8_t padfinal_[4];

 private:
  HandlesHandleNameCollisionStruct_Data();
  ~HandlesHandleNameCollisionStruct_Data() = delete;
};
static_assert(sizeof(HandlesHandleNameCollisionStruct_Data) == 16,
              "Bad sizeof(HandlesHandleNameCollisionStruct_Data)");
// Used by HandlesHandleNameCollisionStruct::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct HandlesHandleNameCollisionStruct_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  HandlesHandleNameCollisionStruct_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~HandlesHandleNameCollisionStruct_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    HandlesHandleNameCollisionStruct_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    HandlesHandleNameCollisionStruct_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  HandlesUnionNameCollisionStruct_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(HandlesUnionNameCollisionStruct_Data));
      new (data()) HandlesUnionNameCollisionStruct_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    HandlesUnionNameCollisionStruct_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<HandlesUnionNameCollisionStruct_Data>(index_);
    }
    HandlesUnionNameCollisionStruct_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  internal::HandlesNameCollisionUnion_Data handles;

 private:
  HandlesUnionNameCollisionStruct_Data();
  ~HandlesUnionNameCollisionStruct_Data() = delete;
};
static_assert(sizeof(HandlesUnionNameCollisionStruct_Data) == 24,
              "Bad sizeof(HandlesUnionNameCollisionStruct_Data)");
// Used by HandlesUnionNameCollisionStruct::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct HandlesUnionNameCollisionStruct_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  HandlesUnionNameCollisionStruct_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~HandlesUnionNameCollisionStruct_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    HandlesUnionNameCollisionStruct_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    HandlesUnionNameCollisionStruct_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace regression_tests

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_REGRESSION_TESTS_MOJOM_SHARED_INTERNAL_H_