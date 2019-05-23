// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_VALIDATION_TEST_INTERFACES_MOJOM_SHARED_INTERNAL_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_VALIDATION_TEST_INTERFACES_MOJOM_SHARED_INTERNAL_H_

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
class StructA_Data;
class StructB_Data;
class StructC_Data;
class StructD_Data;
class StructE_Data;
class StructF_Data;
class StructG_Data;
class BasicStruct_Data;
class StructWithEnum_Data;
class Recursive_Data;
class UnionA_Data;

struct EnumA_Data {
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

struct EnumB_Data {
 public:
  static bool constexpr kIsExtensible = true;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
      case 2:
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

struct EmptyEnum_Data {
 public:
  static bool constexpr kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
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

struct ExtensibleEmptyEnum_Data {
 public:
  static bool constexpr kIsExtensible = true;

  static bool IsKnownValue(int32_t value) {
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

struct BasicEnum_Data {
 public:
  static bool constexpr kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case -3:
      case 0:
      case 1:
      case 10:
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

struct StructWithEnum_EnumWithin_Data {
 public:
  static bool constexpr kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
      case 2:
      case 3:
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


class  UnionA_Data {
 public:
  // Used to identify Mojom Union Data Classes.
  typedef void MojomUnionDataType;

  UnionA_Data() {}
  // Do nothing in the destructor since it won't be called when it is a
  // non-inlined union.
  ~UnionA_Data() {}

  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(UnionA_Data));
      new (data()) UnionA_Data();
    }

    void AllocateInline(mojo::internal::Buffer* serialization_buffer,
                        void* ptr) {
      const char* start = static_cast<const char*>(
          serialization_buffer->data());
      const char* slot = static_cast<const char*>(ptr);
      DCHECK_GT(slot, start);
      serialization_buffer_ = serialization_buffer;
      index_ = slot - start;
      new (data()) UnionA_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    UnionA_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<UnionA_Data>(index_);
    }
    UnionA_Data* operator->() { return data(); }

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
    tag = static_cast<UnionA_Tag>(0);
    data.unknown = 0U;
  }

  enum class UnionA_Tag : uint32_t {

    
    STRUCT_A,
    
    B,
  };

  // A note on layout:
  // "Each non-static data member is allocated as if it were the sole member of
  // a struct." - Section 9.5.2 ISO/IEC 14882:2011 (The C++ Spec)
  union MOJO_ALIGNAS(8) Union_ {
    Union_() : unknown(0) {}
    mojo::internal::Pointer<internal::StructA_Data> f_struct_a;
    uint8_t f_b : 1;
    uint64_t unknown;
  };

  uint32_t size;
  UnionA_Tag tag;
  Union_ data;
};
static_assert(sizeof(UnionA_Data) == mojo::internal::kUnionDataSize,
              "Bad sizeof(UnionA_Data)");
class  StructA_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(StructA_Data));
      new (data()) StructA_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    StructA_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<StructA_Data>(index_);
    }
    StructA_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t i;

 private:
  StructA_Data();
  ~StructA_Data() = delete;
};
static_assert(sizeof(StructA_Data) == 16,
              "Bad sizeof(StructA_Data)");
// Used by StructA::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct StructA_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  StructA_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~StructA_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    StructA_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    StructA_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  StructB_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(StructB_Data));
      new (data()) StructB_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    StructB_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<StructB_Data>(index_);
    }
    StructB_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::StructA_Data> struct_a;

 private:
  StructB_Data();
  ~StructB_Data() = delete;
};
static_assert(sizeof(StructB_Data) == 16,
              "Bad sizeof(StructB_Data)");
// Used by StructB::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct StructB_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  StructB_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~StructB_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    StructB_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    StructB_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  StructC_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(StructC_Data));
      new (data()) StructC_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    StructC_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<StructC_Data>(index_);
    }
    StructC_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> data;

 private:
  StructC_Data();
  ~StructC_Data() = delete;
};
static_assert(sizeof(StructC_Data) == 16,
              "Bad sizeof(StructC_Data)");
// Used by StructC::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct StructC_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  StructC_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~StructC_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    StructC_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    StructC_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  StructD_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(StructD_Data));
      new (data()) StructD_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    StructD_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<StructD_Data>(index_);
    }
    StructD_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Handle_Data>> message_pipes;

 private:
  StructD_Data();
  ~StructD_Data() = delete;
};
static_assert(sizeof(StructD_Data) == 16,
              "Bad sizeof(StructD_Data)");
// Used by StructD::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct StructD_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  StructD_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~StructD_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    StructD_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    StructD_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  StructE_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(StructE_Data));
      new (data()) StructE_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    StructE_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<StructE_Data>(index_);
    }
    StructE_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::StructD_Data> struct_d;
  mojo::internal::Handle_Data data_pipe_consumer;
  uint8_t padfinal_[4];

 private:
  StructE_Data();
  ~StructE_Data() = delete;
};
static_assert(sizeof(StructE_Data) == 24,
              "Bad sizeof(StructE_Data)");
// Used by StructE::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct StructE_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  StructE_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~StructE_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    StructE_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    StructE_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  StructF_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(StructF_Data));
      new (data()) StructF_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    StructF_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<StructF_Data>(index_);
    }
    StructF_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> fixed_size_array;

 private:
  StructF_Data();
  ~StructF_Data() = delete;
};
static_assert(sizeof(StructF_Data) == 16,
              "Bad sizeof(StructF_Data)");
// Used by StructF::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct StructF_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  StructF_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~StructF_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    StructF_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    StructF_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  StructG_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(StructG_Data));
      new (data()) StructG_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    StructG_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<StructG_Data>(index_);
    }
    StructG_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t i;
  uint8_t b : 1;
  uint8_t pad1_[3];
  mojo::internal::Pointer<internal::StructA_Data> struct_a;
  mojo::internal::Pointer<mojo::internal::String_Data> str;

 private:
  StructG_Data();
  ~StructG_Data() = delete;
};
static_assert(sizeof(StructG_Data) == 32,
              "Bad sizeof(StructG_Data)");
// Used by StructG::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct StructG_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  StructG_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~StructG_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    StructG_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    StructG_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  BasicStruct_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BasicStruct_Data));
      new (data()) BasicStruct_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BasicStruct_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BasicStruct_Data>(index_);
    }
    BasicStruct_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t a;
  uint8_t padfinal_[4];

 private:
  BasicStruct_Data();
  ~BasicStruct_Data() = delete;
};
static_assert(sizeof(BasicStruct_Data) == 16,
              "Bad sizeof(BasicStruct_Data)");
// Used by BasicStruct::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct BasicStruct_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  BasicStruct_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~BasicStruct_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    BasicStruct_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    BasicStruct_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  StructWithEnum_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(StructWithEnum_Data));
      new (data()) StructWithEnum_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    StructWithEnum_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<StructWithEnum_Data>(index_);
    }
    StructWithEnum_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  StructWithEnum_Data();
  ~StructWithEnum_Data() = delete;
};
static_assert(sizeof(StructWithEnum_Data) == 8,
              "Bad sizeof(StructWithEnum_Data)");
// Used by StructWithEnum::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct StructWithEnum_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  StructWithEnum_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~StructWithEnum_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    StructWithEnum_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    StructWithEnum_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  Recursive_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Recursive_Data));
      new (data()) Recursive_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Recursive_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Recursive_Data>(index_);
    }
    Recursive_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::Recursive_Data> recursive;

 private:
  Recursive_Data();
  ~Recursive_Data() = delete;
};
static_assert(sizeof(Recursive_Data) == 16,
              "Bad sizeof(Recursive_Data)");
// Used by Recursive::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct Recursive_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  Recursive_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~Recursive_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    Recursive_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    Recursive_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace test
}  // namespace mojo

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_VALIDATION_TEST_INTERFACES_MOJOM_SHARED_INTERNAL_H_